#ifndef ODAN_WALLET_RPC_MINING_H
#define ODAN_WALLET_RPC_MINING_H

#include <span.h>

class CRPCCommand;

namespace wallet {
Span<const CRPCCommand> GetMiningRPCCommands();
} // namespace wallet

#endif // ODAN_WALLET_RPC_MINING_H
