#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/dbgidl.h"
#ifndef _HEADER_RPC_dbgidl
#define _HEADER_RPC_dbgidl

extern const struct dcerpc_interface_table dcerpc_table_dbgidl;

struct rpc_request *dcerpc_dummy_dbgidl_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dummy_dbgidl *r);
NTSTATUS dcerpc_dummy_dbgidl(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dummy_dbgidl *r);
#endif /* _HEADER_RPC_dbgidl */
