#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/protected_storage.h"
#ifndef _HEADER_RPC_protected_storage
#define _HEADER_RPC_protected_storage

extern const struct dcerpc_interface_table dcerpc_table_protected_storage;

struct rpc_request *dcerpc_ps_XXX_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ps_XXX *r);
NTSTATUS dcerpc_ps_XXX(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ps_XXX *r);
#endif /* _HEADER_RPC_protected_storage */
