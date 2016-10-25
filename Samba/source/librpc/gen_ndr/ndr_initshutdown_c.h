#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/initshutdown.h"
#ifndef _HEADER_RPC_initshutdown
#define _HEADER_RPC_initshutdown

extern const struct dcerpc_interface_table dcerpc_table_initshutdown;

struct rpc_request *dcerpc_initshutdown_Init_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct initshutdown_Init *r);
NTSTATUS dcerpc_initshutdown_Init(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct initshutdown_Init *r);

struct rpc_request *dcerpc_initshutdown_Abort_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct initshutdown_Abort *r);
NTSTATUS dcerpc_initshutdown_Abort(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct initshutdown_Abort *r);

struct rpc_request *dcerpc_initshutdown_InitEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct initshutdown_InitEx *r);
NTSTATUS dcerpc_initshutdown_InitEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct initshutdown_InitEx *r);
#endif /* _HEADER_RPC_initshutdown */
