// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2021 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <kernel/chainparams.h>

#include <chainparamsseeds.h>
#include <consensus/amount.h>
#include <consensus/merkle.h>
#include <consensus/params.h>
#include <consensus/consensus.h>
#include <hash.h>
#include <kernel/messagestartchars.h>
#include <logging.h>
#include <primitives/block.h>
#include <primitives/transaction.h>
#include <script/interpreter.h>
#include <script/script.h>
#include <uint256.h>
#include <util/chaintype.h>
#include <util/strencodings.h>
#include <util/convert.h>

#include <algorithm>
#include <cassert>
#include <cstdint>
#include <cstring>
#include <type_traits>

///////////////////////////////////////////// // odan
#include <libdevcore/SHA3.h>
#include <libdevcore/RLP.h>
#include "arith_uint256.h"
/////////////////////////////////////////////

static CBlock CreateGenesisBlock(const char* pszTimestamp, const CScript& genesisOutputScript, uint32_t nTime, uint32_t nNonce, uint32_t nBits, int32_t nVersion, const CAmount& genesisReward)
{
    CMutableTransaction txNew;
    txNew.nVersion = 1;
    txNew.vin.resize(1);
    txNew.vout.resize(1);
    txNew.vin[0].scriptSig = CScript() << 00 << 488804799 << CScriptNum(4) << std::vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
    txNew.vout[0].nValue = genesisReward;
    txNew.vout[0].scriptPubKey = genesisOutputScript;

    CBlock genesis;
    genesis.nTime    = nTime;
    genesis.nBits    = nBits;
    genesis.nNonce   = nNonce;
    genesis.nVersion = nVersion;
    genesis.vtx.push_back(MakeTransactionRef(std::move(txNew)));
    genesis.hashPrevBlock.SetNull();
    genesis.hashMerkleRoot = BlockMerkleRoot(genesis);
    genesis.hashStateRoot = uint256(h256Touint(dev::h256("e965ffd002cd6ad0e2dc402b8044de833e06b23127ea8c3d80aec91410771495"))); // odan
    genesis.hashUTXORoot = uint256(h256Touint(dev::sha3(dev::rlp("")))); // odan
    return genesis;
}

/**
 * Build the genesis block. Note that the output of its generation
 * transaction cannot be spent since it did not originally exist in the
 * database.
 *
 * CBlock(hash=000000000019d6, ver=1, hashPrevBlock=00000000000000, hashMerkleRoot=4a5e1e, nTime=1231006505, nBits=1d00ffff, nNonce=2083236893, vtx=1)
 *   CTransaction(hash=4a5e1e, ver=1, vin.size=1, vout.size=1, nLockTime=0)
 *     CTxIn(COutPoint(000000, -1), coinbase 04ffff001d0104455468652054696d65732030332f4a616e2f32303039204368616e63656c6c6f72206f6e206272696e6b206f66207365636f6e64206261696c6f757420666f722062616e6b73)
 *     CTxOut(nValue=50.00000000, scriptPubKey=0x5F1DF16B2B704C8A578D0B)
 *   vMerkleTree: 4a5e1e
 */
static CBlock CreateGenesisBlock(uint32_t nTime, uint32_t nNonce, uint32_t nBits, int32_t nVersion, const CAmount& genesisReward)
{
    const char* pszTimestamp = "The Guardian: Real estate tech future, 21 Oct 2024: vent on 20/08/2025";
    const CScript genesisOutputScript = CScript() << ParseHex("040d61d8653448c98731ee5fffd303c15e71ec2057b77f11ab3601979728cdaff2d68afbba14e4fa0bc44f2072b0b23ef63717f8cdfbe58dcd33f32b6afe98741a") << OP_CHECKSIG;
    return CreateGenesisBlock(pszTimestamp, genesisOutputScript, nTime, nNonce, nBits, nVersion, genesisReward);
}

// helpers (file-local)
static constexpr uint64_t FP_SCALE = 100000000ULL; // 1e8 fixed-point scale

static CAmount ComputeFixedPointDecay(CAmount init, uint64_t decayFP, int halvings) {
    CAmount v = init;
    for (int i = 0; i < halvings && v > 0; ++i) v = (v * (CAmount)FP_SCALE) / (CAmount)decayFP;
    return v;
}

static std::vector<CAmount> MakeSubsidyLookup(CAmount init, uint64_t decayFP, int lookahead) {
    std::vector<CAmount> t; t.reserve(lookahead + 1);
    for (int i = 0; i <= lookahead; ++i) t.push_back(ComputeFixedPointDecay(init, decayFP, i));
    return t;
}


/**
 * Main network on which people trade goods and services.
 */
class CMainParams : public CChainParams {
public:
    CMainParams() {
        m_chain_type = ChainType::MAIN;
        consensus.signet_blocks = false;
        consensus.signet_challenge.clear();
        consensus.nSubsidyHalvingInterval = 210240; // odan halving every 4 months
        consensus.script_flag_exceptions.emplace( // BIP16 exception
            uint256S("0x00001c36f9d373fc33a72dd97d641efcc98ea8fa554986287a0e1bcbbd5d5ff6"), SCRIPT_VERIFY_NONE);
        consensus.BIP34Height = 0;
        consensus.BIP34Hash = uint256S("0x00001c36f9d373fc33a72dd97d641efcc98ea8fa554986287a0e1bcbbd5d5ff6");
        consensus.BIP65Height = 0; // 000000000000000004c2b624ed5d7756c508d90fd0da2c7c679febfa6c4735f0
        consensus.BIP66Height = 0; // 00000000000000000379eaa19dce8c9b722d46ae6a57c2f1a988119488b50931
        consensus.CSVHeight = 0; // 000000000000000004a1b34462cb8aeebd5799177f7a29cf28f2d1961716b5b5
        consensus.SegwitHeight = 0; // 0000000000000000001c8018d9cb3b742ef25114f27563e3fc4a1902167f9893
        consensus.MinBIP9WarningHeight = 0; // segwit activation height + miner confirmation window
        consensus.QIP5Height = 0;
        consensus.QIP6Height = 0;
        consensus.QIP7Height = 0;
        consensus.QIP9Height = 0;
        consensus.nOfflineStakeHeight = 3749;
        consensus.nMuirGlacierHeight = 3750;
        consensus.nLondonHeight = 3700;
        consensus.nShanghaiHeight = 3700;
        consensus.nCancunHeight = 3700;
        consensus.powLimit = uint256S("0000ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff");
        consensus.posLimit = uint256S("0000000000003fffffffffffffffffffffffffffffffffffffffffffffffffff");
        consensus.nPowTargetTimespan = 4000; // 16 minutes
        consensus.nPowTargetSpacing = 60;
        consensus.fPowAllowMinDifficultyBlocks = false;
        consensus.fPowNoRetargeting = true;
        consensus.fPoSNoRetargeting = false;
        consensus.nRuleChangeActivationThreshold = 1815; // 90% of 2016
        consensus.nMinerConfirmationWindow = 2016; // nPowTargetTimespan / nPowTargetSpacing
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].bit = 28;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nStartTime = Consensus::BIP9Deployment::NEVER_ACTIVE;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nTimeout = Consensus::BIP9Deployment::NO_TIMEOUT;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].min_activation_height = 0; // No activation delay

        // Deployment of Taproot (BIPs 340-342)
        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].bit = 2;
        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].nStartTime = 0;
        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].nTimeout = Consensus::BIP9Deployment::NO_TIMEOUT;
        // Min block number for activation, the number must be divisible by 2016
        // Replace 0xffffc0 with the activation block number
        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].min_activation_height = 12;

        consensus.nMinimumChainWork = uint256S("0x00001c36f9d373fc33a72dd97d641efcc98ea8fa554986287a0e1bcbbd5d5ff6"); // 4300000
        consensus.defaultAssumeValid = uint256S("0xa34f76ed934e390c6fdc839d1bf56b3341a476324db876ff06954997d30380fb"); // 4300000

        /**
         * The message start string is designed to be unlikely to occur in normal data.
         * The characters are rarely used upper ASCII, not valid as UTF-8, and produce
         * a large 32-bit integer with any alignment.
         */
        pchMessageStart[0] = 0x5e;
        pchMessageStart[1] = 0xc9;
        pchMessageStart[2] = 0x17;
        pchMessageStart[3] = 0x5c;
        nDefaultPort = 3691;
        nPruneAfterHeight = 100000;
        m_assumed_blockchain_size = 24;
        m_assumed_chain_state_size = 1;

        genesis = CreateGenesisBlock(1755724326, 105307, 0x1f00ffff, 1, 50 * COIN);
        consensus.hashGenesisBlock = genesis.GetHash();
        assert(consensus.hashGenesisBlock == uint256S("0x00001c36f9d373fc33a72dd97d641efcc98ea8fa554986287a0e1bcbbd5d5ff6"));
        assert(genesis.hashMerkleRoot == uint256S("0xa34f76ed934e390c6fdc839d1bf56b3341a476324db876ff06954997d30380fb"));

        // Note that of those which support the service bits prefix, most only support a subset of
        // possible options.
        // This is fine at runtime as we'll fall back to using them as an addrfetch if they don't support the
        // service bits we want, but we should get them updated to support all service bits wanted by any
        // release ASAP to avoid it where possible.
        // vSeeds.emplace_back("odan3.dynu.net"); // Odan mainnet
        // vSeeds.emplace_back("odan5.dynu.net"); // Odan mainnet
        // vSeeds.emplace_back("odan6.dynu.net"); // Odan mainnet
        // vSeeds.emplace_back("odan7.dynu.net"); // Odan mainnet

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1,30); // D
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1,23); // A
        base58Prefixes[SECRET_KEY] =     std::vector<unsigned char>(1,53); // N
        base58Prefixes[EXT_PUBLIC_KEY] = {0x04, 0x88, 0xB2, 0x1E};
        base58Prefixes[EXT_SECRET_KEY] = {0x04, 0x88, 0xAD, 0xE4};

        bech32_hrp = "odn";

        //vFixedSeeds = std::vector<uint8_t>(std::begin(chainparams_seed_main), std::end(chainparams_seed_main));

        fDefaultConsistencyChecks = false;
        fMineBlocksOnDemand = false;
        m_is_mockable_chain = false;
        fHasHardwareWalletSupport = true;

        checkpointData = {
            {
                { 0, uint256S("0x00001c36f9d373fc33a72dd97d641efcc98ea8fa554986287a0e1bcbbd5d5ff6")},
            }
        };

        m_assumeutxo_data = {
            // TODO to be specified in a future patch.
        };

        chainTxData = ChainTxData{
            // Data as of block cd130baf8762afbebc10ceff9fe13ecb09f7e4bb579508a7e5f13a83ffe1e64d (height 4300000)
            .nTime    = 1730324440, // * UNIX timestamp of last known number of transactions
            .nTxCount = 12952860, // * total number of transactions between genesis and that timestamp
            .dTxRate  = 0.06440551300874305, // * estimated number of transactions per second after that timestamp
        };

        // Monetary policy (baseline schedule)
        consensus.decayFactorFP         = 111490000ULL;          // 1.1149 × 1e8
        consensus.initialSubsidy        = 10 * COIN;             // baseline after the window
        consensus.subsidyLookup         = MakeSubsidyLookup(consensus.initialSubsidy,
                                                            consensus.decayFactorFP,
                                                            /*lookahead=*/10);

       
        consensus.highSubsidyAmount     = 1200LL * COIN;         // 4,500,000 / 3750 = 1200

        consensus.nCoinbaseMaturity = 300;

        consensus.nLastPOWBlock = 3750;
        consensus.nLastBigReward = 3750;
        consensus.nMPoSRewardRecipients = 10;
        // consensus.nFirstMPoSBlock = consensus.nLastPOWBlock + 
        //                             consensus.nMPoSRewardRecipients + 
        //                             consensus.nCoinbaseMaturity;
        consensus.nFirstMPoSBlock = 3749;


        consensus.nFixUTXOCacheHFHeight = 100000;
        consensus.nEnableHeaderSignatureHeight = 399100;
        consensus.nCheckpointSpan = consensus.nCoinbaseMaturity;
        consensus.delegationsAddress = uint160(ParseHex("0000000000000000000000000000000000000086")); // Delegations contract for offline staking
        consensus.nStakeTimestampMask = 15;
    }
};

/**
 * Testnet (v3): public test network which is reset from time to time.
 */
class CTestNetParams : public CChainParams {
public:
    CTestNetParams() {
        m_chain_type = ChainType::TESTNET;
        consensus.signet_blocks = false;
        consensus.signet_challenge.clear();
        consensus.nSubsidyHalvingInterval = 240250; // odan halving every 4 years
        consensus.script_flag_exceptions.emplace( // BIP16 exception
            uint256S("0x00006cbacc2055f32f8e9a412f0d7598aca8504ceb3d437828887d136663816a"), SCRIPT_VERIFY_NONE);
        consensus.BIP34Height = 0;
        consensus.BIP34Hash = uint256S("0x00006cbacc2055f32f8e9a412f0d7598aca8504ceb3d437828887d136663816a");
        consensus.BIP65Height = 0; // 00000000007f6655f22f98e72ed80d8b06dc761d5da09df0fa1dc4be4f861eb6
        consensus.BIP66Height = 0; // 000000002104c8c45e99a8853285a3b592602a3ccde2b832481da85e9e4ba182
        consensus.CSVHeight = 6; // 00000000025e930139bac5c6c31a403776da130831ab85be56578f3fa75369bb
        consensus.SegwitHeight = 6; // 00000000002b980fcd729daaa248fd9316a5200e9b367f4ff2c42453e84201ca
        consensus.MinBIP9WarningHeight = 8; // segwit activation height + miner confirmation window
        consensus.QIP5Height = 446320;
        consensus.QIP6Height = 446320;
        consensus.QIP7Height = 446320;
        consensus.QIP9Height = 446320;
        consensus.nOfflineStakeHeight = 625000;
        consensus.nMuirGlacierHeight = 806600;
        consensus.nLondonHeight = 1967616;
        consensus.nShanghaiHeight = 3298892;
        consensus.nCancunHeight = 4510000;
        consensus.powLimit = uint256S("0000ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff");
        consensus.posLimit = uint256S("0000000000003fffffffffffffffffffffffffffffffffffffffffffffffffff");
        consensus.nPowTargetTimespan = 16 * 60; // 16 minutes
        consensus.nPowTargetSpacing = 60;
        consensus.fPowAllowMinDifficultyBlocks = false;
        consensus.fPowNoRetargeting = true;
        consensus.fPoSNoRetargeting = false;
        consensus.nRuleChangeActivationThreshold = 1512; // 75% for testchains
        consensus.nMinerConfirmationWindow = 2016; // nPowTargetTimespan / nPowTargetSpacing
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].bit = 28;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nStartTime = Consensus::BIP9Deployment::NEVER_ACTIVE;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nTimeout = Consensus::BIP9Deployment::NO_TIMEOUT;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].min_activation_height = 0; // No activation delay

        // Deployment of Taproot (BIPs 340-342)
        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].bit = 2;
        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].nStartTime = 0;
        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].nTimeout = Consensus::BIP9Deployment::NO_TIMEOUT;
        // Min block number for activation, the number must be divisible by 2016
        // Replace 0xffffc0 with the activation block number
        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].min_activation_height = 1967616;

        consensus.nMinimumChainWork = uint256S("0x00006cbacc2055f32f8e9a412f0d7598aca8504ceb3d437828887d136663816a"); // 4330000
        consensus.defaultAssumeValid = uint256S("0xa34f76ed934e390c6fdc839d1bf56b3341a476324db876ff06954997d30380fb"); // 4330000

        pchMessageStart[0] = 0x16;
        pchMessageStart[1] = 0xfb;
        pchMessageStart[2] = 0x6b;
        pchMessageStart[3] = 0x47;
        nDefaultPort = 13691;
        nPruneAfterHeight = 1000;
        m_assumed_blockchain_size = 10;
        m_assumed_chain_state_size = 1;

        genesis = CreateGenesisBlock(1755835568, 38132, 0x1f00ffff, 1, 50 * COIN);
        consensus.hashGenesisBlock = genesis.GetHash();
        
        assert(consensus.hashGenesisBlock == uint256S("0x00006cbacc2055f32f8e9a412f0d7598aca8504ceb3d437828887d136663816a"));
        assert(genesis.hashMerkleRoot == uint256S("0xa34f76ed934e390c6fdc839d1bf56b3341a476324db876ff06954997d30380fb"));

        vFixedSeeds.clear();
        vSeeds.clear();
        // nodes with support for servicebits filtering should be at the top
        vSeeds.emplace_back("odan4.dynu.net"); // Odan testnet

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1,115); // o
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1,90); // d
        base58Prefixes[SECRET_KEY] =     std::vector<unsigned char>(1,112); // n
        base58Prefixes[EXT_PUBLIC_KEY] = {0x04, 0x35, 0x87, 0xCF};
        base58Prefixes[EXT_SECRET_KEY] = {0x04, 0x35, 0x83, 0x94};

        bech32_hrp = "odnt";

        vFixedSeeds = std::vector<uint8_t>(std::begin(chainparams_seed_test), std::end(chainparams_seed_test));

        fDefaultConsistencyChecks = false;
        fMineBlocksOnDemand = false;
        m_is_mockable_chain = false;
        fHasHardwareWalletSupport = true;

        checkpointData = {
            {
                {0, uint256S("0x00006cbacc2055f32f8e9a412f0d7598aca8504ceb3d437828887d136663816a")},
            }
        };

        m_assumeutxo_data = {
            // TODO to be specified in a future patch.
        };

        chainTxData = ChainTxData{
            // Data as of block 91750084e54c2a5cf621c0582695e0e51776e5c35068ab23a170a91971edacf22 (height 4330000)
            .nTime    = 1729896232,
            .nTxCount = 8867945,
            .dTxRate  = 0.06233193794631864,
        };

        consensus.nCoinbaseMaturity = 500;

        consensus.nLastPOWBlock = 5000;
        consensus.nLastBigReward = 5000;
        consensus.nMPoSRewardRecipients = 10;
        consensus.nFirstMPoSBlock = consensus.nLastPOWBlock + 
                                    consensus.nMPoSRewardRecipients + 
                                    consensus.nCoinbaseMaturity;

        consensus.nFixUTXOCacheHFHeight = 84500;
        consensus.nEnableHeaderSignatureHeight = 391993;
        consensus.nCheckpointSpan = consensus.nCoinbaseMaturity;
        consensus.delegationsAddress = uint160(ParseHex("0000000000000000000000000000000000000086")); // Delegations contract for offline staking
        consensus.nStakeTimestampMask = 15;
    }
};

/**
 * Signet: test network with an additional consensus parameter (see BIP325).
 */
class SigNetParams : public CChainParams {
public:
    explicit SigNetParams(const SigNetOptions& options)
    {
        std::vector<uint8_t> bin;
        vSeeds.clear();

        if (!options.challenge) {
            bin = ParseHex("51210276aa67f74d27c3dcd4be86ca8375a4d70b1e00f7787451d8445c647a3c099ee7210276aa67f74d27c3dcd4be86ca8375a4d70b1e00f7787451d8445c647a3c099ee752ae");

            consensus.nMinimumChainWork = uint256{};
            consensus.defaultAssumeValid = uint256{};
            m_assumed_blockchain_size = 1;
            m_assumed_chain_state_size = 0;
            chainTxData = ChainTxData{
                // Data from RPC: getchaintxstats 4096 0000004429ef154f7e00b4f6b46bfbe2d2678ecd351d95bbfca437ab9a5b84ec
                .nTime    = 0,
                .nTxCount = 0,
                .dTxRate  = 0,
            };
        } else {
            bin = *options.challenge;
            consensus.nMinimumChainWork = uint256{};
            consensus.defaultAssumeValid = uint256{};
            m_assumed_blockchain_size = 0;
            m_assumed_chain_state_size = 0;
            chainTxData = ChainTxData{
                0,
                0,
                0,
            };
            LogPrintf("Signet with challenge %s\n", HexStr(bin));
        }

        if (options.seeds) {
            vSeeds = *options.seeds;
        }

        m_chain_type = ChainType::SIGNET;
        consensus.signet_blocks = true;
        consensus.signet_challenge.assign(bin.begin(), bin.end());
        consensus.nSubsidyHalvingInterval = 985500;
        consensus.BIP34Height = 1;
        consensus.BIP34Hash = uint256{};
        consensus.BIP65Height = 1;
        consensus.BIP66Height = 1;
        consensus.CSVHeight = 1;
        consensus.SegwitHeight = 1;
        consensus.QIP5Height = 0;
        consensus.QIP6Height = 0;
        consensus.QIP7Height = 0;
        consensus.QIP9Height = 0;
        consensus.nOfflineStakeHeight = 1;
        consensus.nMuirGlacierHeight = 0;
        consensus.nLondonHeight = 0;
        consensus.nShanghaiHeight = 0;
        consensus.nCancunHeight = 0;
        consensus.powLimit = uint256S("0000ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff");
        consensus.posLimit = uint256S("0000000000003fffffffffffffffffffffffffffffffffffffffffffffffffff");
        consensus.nPowTargetTimespan = 16 * 60; // 16 minutes
        consensus.nPowTargetSpacing = 60;
        consensus.fPowAllowMinDifficultyBlocks = false;
        consensus.fPowNoRetargeting = true;
        consensus.fPoSNoRetargeting = false;
        consensus.nRuleChangeActivationThreshold = 1815; // 90% of 2016
        consensus.nMinerConfirmationWindow = 2016; // nPowTargetTimespan / nPowTargetSpacing
        consensus.MinBIP9WarningHeight = 0;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].bit = 28;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nStartTime = Consensus::BIP9Deployment::NEVER_ACTIVE;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nTimeout = Consensus::BIP9Deployment::NO_TIMEOUT;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].min_activation_height = 0; // No activation delay

        // Activation of Taproot (BIPs 340-342)
        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].bit = 2;
        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].nStartTime = Consensus::BIP9Deployment::ALWAYS_ACTIVE;
        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].nTimeout = Consensus::BIP9Deployment::NO_TIMEOUT;
        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].min_activation_height = 0; // No activation delay

        // message start is defined as the first 4 bytes of the sha256d of the block script
        HashWriter h{};
        h << consensus.signet_challenge;
        uint256 hash = h.GetHash();
        std::copy_n(hash.begin(), 4, pchMessageStart.begin());

        nDefaultPort = 33691;
        nPruneAfterHeight = 1000;

        genesis = CreateGenesisBlock(1755836506, 61079, 0x1f00ffff, 1, 50 * COIN);
        consensus.hashGenesisBlock = genesis.GetHash();
        assert(consensus.hashGenesisBlock == uint256S("0x00006330c7771dcacdeff26c2cf90b1e32e6df72eaa1e1bc196d02a47688e63c"));
        assert(genesis.hashMerkleRoot == uint256S("0xa34f76ed934e390c6fdc839d1bf56b3341a476324db876ff06954997d30380fb"));

        vFixedSeeds.clear();

        m_assumeutxo_data = {
            // TODO to be specified in a future patch.
        };

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1,115); // o
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1,90); // d
        base58Prefixes[SECRET_KEY] =     std::vector<unsigned char>(1,112); // n
        base58Prefixes[EXT_PUBLIC_KEY] = {0x04, 0x35, 0x87, 0xCF};
        base58Prefixes[EXT_SECRET_KEY] = {0x04, 0x35, 0x83, 0x94};

        bech32_hrp = "odnt";

        fDefaultConsistencyChecks = false;
        fMineBlocksOnDemand = false;
        m_is_mockable_chain = false;

        
        consensus.nCoinbaseMaturity = 500;

        consensus.nLastPOWBlock = 0x7fffffff;
        consensus.nLastBigReward = 5000;
        consensus.nMPoSRewardRecipients = 10;
        consensus.nFirstMPoSBlock = 5000;

        consensus.nFixUTXOCacheHFHeight = 0;
        consensus.nEnableHeaderSignatureHeight = 0;
        consensus.nCheckpointSpan = consensus.nCoinbaseMaturity;
        consensus.delegationsAddress = uint160(ParseHex("0000000000000000000000000000000000000086")); // Delegations contract for offline staking
        consensus.nStakeTimestampMask = 15;
    }
};

/**
 * Regression test: intended for private networks only. Has minimal difficulty to ensure that
 * blocks can be found instantly.
 */
class CRegTestParams : public CChainParams
{
public:
    explicit CRegTestParams(const RegTestOptions& opts)
    {
        m_chain_type = ChainType::REGTEST;
        consensus.signet_blocks = false;
        consensus.signet_challenge.clear();
        consensus.nSubsidyHalvingInterval = 985500;
        consensus.BIP34Height = 1; // Always active unless overridden
        consensus.BIP34Hash = uint256();
        consensus.BIP65Height = 1;  // Always active unless overridden
        consensus.BIP66Height = 1;  // Always active unless overridden
        consensus.CSVHeight = 1;    // Always active unless overridden
        consensus.SegwitHeight = 0; // Always active unless overridden
        consensus.MinBIP9WarningHeight = 0;
        consensus.QIP5Height = 0;
        consensus.QIP6Height = 0;
        consensus.QIP7Height = 0;
        consensus.QIP9Height = 0;
        consensus.nOfflineStakeHeight = 1;
        consensus.nMuirGlacierHeight = 0;
        consensus.nLondonHeight = 0;
        consensus.nShanghaiHeight = 0;
        consensus.nCancunHeight = 0;
        consensus.powLimit = uint256S("7fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff");
        consensus.posLimit = uint256S("7fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff");
        consensus.nPowTargetTimespan = 16 * 60; // 16 minutes (960 = 832 + 128; multiplier is 832)
        consensus.nPowTargetSpacing = 60;
        consensus.fPowAllowMinDifficultyBlocks = true;
        consensus.fPowNoRetargeting = true;
        consensus.fPoSNoRetargeting = true;
        consensus.nRuleChangeActivationThreshold = 108; // 75% for testchains
        consensus.nMinerConfirmationWindow = 144; // Faster than normal for regtest (144 instead of 2016)

        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].bit = 28;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nStartTime = 0;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].nTimeout = Consensus::BIP9Deployment::NO_TIMEOUT;
        consensus.vDeployments[Consensus::DEPLOYMENT_TESTDUMMY].min_activation_height = 0; // No activation delay

        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].bit = 2;
        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].nStartTime = Consensus::BIP9Deployment::ALWAYS_ACTIVE;
        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].nTimeout = Consensus::BIP9Deployment::NO_TIMEOUT;
        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].min_activation_height = 0; // No activation delay

        consensus.nMinimumChainWork = uint256{};
        consensus.defaultAssumeValid = uint256{};

        pchMessageStart[0] = 0xf6;
        pchMessageStart[1] = 0x70;
        pchMessageStart[2] = 0x3c;
        pchMessageStart[3] = 0x24;
        nDefaultPort = 23691;
        nPruneAfterHeight = opts.fastprune ? 100 : 1000;
        m_assumed_blockchain_size = 0;
        m_assumed_chain_state_size = 0;

        for (const auto& [dep, height] : opts.activation_heights) {
            switch (dep) {
            case Consensus::BuriedDeployment::DEPLOYMENT_SEGWIT:
                consensus.SegwitHeight = int{height};
                break;
            case Consensus::BuriedDeployment::DEPLOYMENT_HEIGHTINCB:
                consensus.BIP34Height = int{height};
                break;
            case Consensus::BuriedDeployment::DEPLOYMENT_DERSIG:
                consensus.BIP66Height = int{height};
                break;
            case Consensus::BuriedDeployment::DEPLOYMENT_CLTV:
                consensus.BIP65Height = int{height};
                break;
            case Consensus::BuriedDeployment::DEPLOYMENT_CSV:
                consensus.CSVHeight = int{height};
                break;
            }
        }

        for (const auto& [deployment_pos, version_bits_params] : opts.version_bits_parameters) {
            consensus.vDeployments[deployment_pos].nStartTime = version_bits_params.start_time;
            consensus.vDeployments[deployment_pos].nTimeout = version_bits_params.timeout;
            consensus.vDeployments[deployment_pos].min_activation_height = version_bits_params.min_activation_height;
        }

        genesis = CreateGenesisBlock(1755836977, 1, 0x207fffff, 1, 50 * COIN);
        consensus.hashGenesisBlock = genesis.GetHash();
        assert(consensus.hashGenesisBlock == uint256S("0x53a03015f0999d21d730c4427339904a299d0c1cc880a122a1abfa3f49a05e6e"));
        assert(genesis.hashMerkleRoot == uint256S("0xa34f76ed934e390c6fdc839d1bf56b3341a476324db876ff06954997d30380fb"));

        vFixedSeeds.clear(); //!< Regtest mode doesn't have any fixed seeds.
        vSeeds.clear();
        vSeeds.emplace_back("dummySeed.invalid.");

        fDefaultConsistencyChecks = true;
        fMineBlocksOnDemand = true;
        m_is_mockable_chain = true;
        fHasHardwareWalletSupport = true;

        checkpointData = {
            {
                {0, uint256S("53a03015f0999d21d730c4427339904a299d0c1cc880a122a1abfa3f49a05e6e")},
            }
        };

        m_assumeutxo_data = {
            {
                // For use by test/functional/feature_assumeutxo.py
                .height = 4099,
                .hash_serialized = AssumeutxoHash{uint256S("0x73200c9ce4eb500fb90dc57599ed084a1351eb0bf5de133c8a8ed4662e7e8162")},
                .nChainTx = 4767,
                .blockhash = uint256S("0x05487442d7c76a7c64070cca8a52742fa7be67566802c55cc4499b15ff8acc0b")
            },
        };

        chainTxData = ChainTxData{
            0,
            0,
            0
        };

        
        consensus.nCoinbaseMaturity = 500;

        consensus.nLastPOWBlock = 0x7fffffff;
        consensus.nLastBigReward = 5000;
        consensus.nMPoSRewardRecipients = 10;
        consensus.nFirstMPoSBlock = 5000;

        consensus.nFixUTXOCacheHFHeight=0;
        consensus.nEnableHeaderSignatureHeight = 0;

        consensus.nCheckpointSpan = consensus.nCoinbaseMaturity;
        consensus.delegationsAddress = uint160(ParseHex("0000000000000000000000000000000000000086")); // Delegations contract for offline staking
        consensus.nStakeTimestampMask = 15;

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1,115); // o
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1,90); // d
        base58Prefixes[SECRET_KEY] =     std::vector<unsigned char>(1,112); // n
        base58Prefixes[EXT_PUBLIC_KEY] = {0x04, 0x35, 0x87, 0xCF};
        base58Prefixes[EXT_SECRET_KEY] = {0x04, 0x35, 0x83, 0x94};

        bech32_hrp = "odnrt";
    }
};

/**
 * Regression network parameters overwrites for unit testing
 */
class CUnitTestParams : public CRegTestParams
{
public:
    explicit CUnitTestParams(const RegTestOptions& opts)
    : CRegTestParams(opts)
    {
        // Activate the BIPs for regtest as in Bitcoin
        consensus.BIP34Height = 100000000; // BIP34 has not activated on regtest (far in the future so block v1 are not rejected in tests)
        consensus.BIP34Hash = uint256();
        consensus.BIP65Height = 500 + 851; // BIP65 activated on regtest (Used in rpc activation tests)
        consensus.BIP66Height = 500 + 751; // BIP66 activated on regtest (Used in rpc activation tests)
        consensus.QIP6Height = 500 + 500;
        consensus.QIP7Height = 0; // QIP7 activated on regtest

        // ODAN have 500 blocks of maturity, increased values for regtest in unit tests in order to correspond with it
        consensus.nSubsidyHalvingInterval = 750;
        consensus.nRuleChangeActivationThreshold = 558; // 75% for testchains
        consensus.nMinerConfirmationWindow = 744; // Faster than normal for regtest (744 instead of 2016)

        
        consensus.nCoinbaseMaturity = 500;

        consensus.nCheckpointSpan = consensus.nCoinbaseMaturity*2; // Increase the check point span for the reorganization tests from 500 to 1000

        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].bit = 2;
        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].nStartTime = Consensus::BIP9Deployment::ALWAYS_ACTIVE;
        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].nTimeout = Consensus::BIP9Deployment::NO_TIMEOUT;
        consensus.vDeployments[Consensus::DEPLOYMENT_TAPROOT].min_activation_height = 0;

        m_assumeutxo_data = {
            {
                .height = 2010,
                .hash_serialized = AssumeutxoHash{uint256S("0x62528c92991cbedf47bdf3f0f5a0ad1e07bce4b2a35500beabe3f87fa5cca44f")},
                .nChainTx = 2011,
                .blockhash = uint256S("0x292911929ab59409569a86bae416da0ba697fd7086b107ddd0a8eeaddba91b4d")
            }
        };
    }
};

std::unique_ptr<const CChainParams> CChainParams::SigNet(const SigNetOptions& options)
{
    return std::make_unique<const SigNetParams>(options);
}

std::unique_ptr<const CChainParams> CChainParams::RegTest(const RegTestOptions& options)
{
    return std::make_unique<const CRegTestParams>(options);
}

std::unique_ptr<const CChainParams> CChainParams::Main()
{
    return std::make_unique<const CMainParams>();
}

std::unique_ptr<const CChainParams> CChainParams::TestNet()
{
    return std::make_unique<const CTestNetParams>();
}

std::unique_ptr<const CChainParams> CChainParams::UnitTest(const RegTestOptions& options)
{
    return std::make_unique<const CUnitTestParams>(options);
}
