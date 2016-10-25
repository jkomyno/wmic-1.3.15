#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/atsvc.h"
#ifndef _HEADER_RPC_atsvc
#define _HEADER_RPC_atsvc

extern const struct dcerpc_interface_table dcerpc_table_atsvc;

struct rpc_request *dcerpc_atsvc_JobAdd_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct atsvc_JobAdd *r);
NTSTATUS dcerpc_atsvc_JobAdd(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct atsvc_JobAdd *r);

struct rpc_request *dcerpc_atsvc_JobDel_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct atsvc_JobDel *r);
NTSTATUS dcerpc_atsvc_JobDel(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct atsvc_JobDel *r);

struct rpc_request *dcerpc_atsvc_JobEnum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct atsvc_JobEnum *r);
NTSTATUS dcerpc_atsvc_JobEnum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct atsvc_JobEnum *r);

struct rpc_request *dcerpc_atsvc_JobGetInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct atsvc_JobGetInfo *r);
NTSTATUS dcerpc_atsvc_JobGetInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct atsvc_JobGetInfo *r);
#endif /* _HEADER_RPC_atsvc */
