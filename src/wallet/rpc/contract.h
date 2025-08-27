#ifndef ODAN_WALLET_RPC_CONTRACT_H
#define ODAN_WALLET_RPC_CONTRACT_H

#include <span.h>

class CRPCCommand;

namespace wallet {
Span<const CRPCCommand> GetContractRPCCommands();
} // namespace wallet

#endif // ODAN_WALLET_RPC_CONTRACT_H
