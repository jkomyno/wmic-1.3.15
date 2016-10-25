#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/drsblobs.h"
#ifndef _HEADER_RPC_drsblobs
#define _HEADER_RPC_drsblobs

extern const struct dcerpc_interface_table dcerpc_table_drsblobs;

struct rpc_request *dcerpc_decode_replPropertyMetaData_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_replPropertyMetaData *r);
NTSTATUS dcerpc_decode_replPropertyMetaData(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_replPropertyMetaData *r);

struct rpc_request *dcerpc_decode_replUpToDateVector_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_replUpToDateVector *r);
NTSTATUS dcerpc_decode_replUpToDateVector(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_replUpToDateVector *r);

struct rpc_request *dcerpc_decode_repsFromTo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_repsFromTo *r);
NTSTATUS dcerpc_decode_repsFromTo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_repsFromTo *r);

struct rpc_request *dcerpc_decode_ldapControlDirSync_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_ldapControlDirSync *r);
NTSTATUS dcerpc_decode_ldapControlDirSync(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_ldapControlDirSync *r);

struct rpc_request *dcerpc_decode_DsCompressed_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_DsCompressed *r);
NTSTATUS dcerpc_decode_DsCompressed(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_DsCompressed *r);
#endif /* _HEADER_RPC_drsblobs */
