#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/remact.h"
#ifndef _HEADER_RPC_IRemoteActivation
#define _HEADER_RPC_IRemoteActivation

extern const struct dcerpc_interface_table dcerpc_table_IRemoteActivation;

struct rpc_request *dcerpc_RemoteActivation_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct RemoteActivation *r);
NTSTATUS dcerpc_RemoteActivation(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct RemoteActivation *r);
#endif /* _HEADER_RPC_IRemoteActivation */
