#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/keysvc.h"
#ifndef _HEADER_RPC_keysvc
#define _HEADER_RPC_keysvc

extern const struct dcerpc_interface_table dcerpc_table_keysvc;

struct rpc_request *dcerpc_keysvc_Unknown0_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct keysvc_Unknown0 *r);
NTSTATUS dcerpc_keysvc_Unknown0(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct keysvc_Unknown0 *r);
#endif /* _HEADER_RPC_keysvc */
