#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/nfs4acl.h"
#ifndef _HEADER_RPC_nfs4acl
#define _HEADER_RPC_nfs4acl

extern const struct dcerpc_interface_table dcerpc_table_nfs4acl;

struct rpc_request *dcerpc_nfs4acl_test_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct nfs4acl_test *r);
NTSTATUS dcerpc_nfs4acl_test(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct nfs4acl_test *r);
#endif /* _HEADER_RPC_nfs4acl */
