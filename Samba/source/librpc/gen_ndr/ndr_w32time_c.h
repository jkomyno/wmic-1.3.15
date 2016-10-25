#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/w32time.h"
#ifndef _HEADER_RPC_w32time
#define _HEADER_RPC_w32time

extern const struct dcerpc_interface_table dcerpc_table_w32time;

struct rpc_request *dcerpc_w32time_SyncTime_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct w32time_SyncTime *r);
NTSTATUS dcerpc_w32time_SyncTime(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct w32time_SyncTime *r);

struct rpc_request *dcerpc_w32time_GetNetLogonServiceBits_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct w32time_GetNetLogonServiceBits *r);
NTSTATUS dcerpc_w32time_GetNetLogonServiceBits(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct w32time_GetNetLogonServiceBits *r);

struct rpc_request *dcerpc_w32time_QueryProviderStatus_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct w32time_QueryProviderStatus *r);
NTSTATUS dcerpc_w32time_QueryProviderStatus(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct w32time_QueryProviderStatus *r);
#endif /* _HEADER_RPC_w32time */
