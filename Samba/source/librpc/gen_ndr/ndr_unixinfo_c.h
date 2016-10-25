#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/unixinfo.h"
#ifndef _HEADER_RPC_unixinfo
#define _HEADER_RPC_unixinfo

extern const struct dcerpc_interface_table dcerpc_table_unixinfo;

struct rpc_request *dcerpc_unixinfo_SidToUid_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct unixinfo_SidToUid *r);
NTSTATUS dcerpc_unixinfo_SidToUid(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct unixinfo_SidToUid *r);

struct rpc_request *dcerpc_unixinfo_UidToSid_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct unixinfo_UidToSid *r);
NTSTATUS dcerpc_unixinfo_UidToSid(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct unixinfo_UidToSid *r);

struct rpc_request *dcerpc_unixinfo_SidToGid_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct unixinfo_SidToGid *r);
NTSTATUS dcerpc_unixinfo_SidToGid(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct unixinfo_SidToGid *r);

struct rpc_request *dcerpc_unixinfo_GidToSid_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct unixinfo_GidToSid *r);
NTSTATUS dcerpc_unixinfo_GidToSid(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct unixinfo_GidToSid *r);

struct rpc_request *dcerpc_unixinfo_GetPWUid_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct unixinfo_GetPWUid *r);
NTSTATUS dcerpc_unixinfo_GetPWUid(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct unixinfo_GetPWUid *r);
#endif /* _HEADER_RPC_unixinfo */
