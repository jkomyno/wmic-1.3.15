#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/scerpc.h"
#ifndef _HEADER_RPC_scerpc
#define _HEADER_RPC_scerpc

extern const struct dcerpc_interface_table dcerpc_table_scerpc;

struct rpc_request *dcerpc_scerpc_Unknown0_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct scerpc_Unknown0 *r);
NTSTATUS dcerpc_scerpc_Unknown0(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct scerpc_Unknown0 *r);
#endif /* _HEADER_RPC_scerpc */
