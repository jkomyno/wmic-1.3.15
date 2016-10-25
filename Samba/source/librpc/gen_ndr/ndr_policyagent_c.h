#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/policyagent.h"
#ifndef _HEADER_RPC_policyagent
#define _HEADER_RPC_policyagent

extern const struct dcerpc_interface_table dcerpc_table_policyagent;

struct rpc_request *dcerpc_policyagent_Dummy_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct policyagent_Dummy *r);
NTSTATUS dcerpc_policyagent_Dummy(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct policyagent_Dummy *r);
#endif /* _HEADER_RPC_policyagent */
