#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/trkwks.h"
#ifndef _HEADER_RPC_trkwks
#define _HEADER_RPC_trkwks

extern const struct dcerpc_interface_table dcerpc_table_trkwks;

struct rpc_request *dcerpc_trkwks_Unknown0_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct trkwks_Unknown0 *r);
NTSTATUS dcerpc_trkwks_Unknown0(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct trkwks_Unknown0 *r);
#endif /* _HEADER_RPC_trkwks */
