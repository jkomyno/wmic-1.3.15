#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/epmapper.h"
#ifndef _HEADER_RPC_epmapper
#define _HEADER_RPC_epmapper

extern const struct dcerpc_interface_table dcerpc_table_epmapper;

struct rpc_request *dcerpc_epm_Insert_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct epm_Insert *r);
NTSTATUS dcerpc_epm_Insert(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct epm_Insert *r);

struct rpc_request *dcerpc_epm_Delete_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct epm_Delete *r);
NTSTATUS dcerpc_epm_Delete(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct epm_Delete *r);

struct rpc_request *dcerpc_epm_Lookup_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct epm_Lookup *r);
NTSTATUS dcerpc_epm_Lookup(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct epm_Lookup *r);

struct rpc_request *dcerpc_epm_Map_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct epm_Map *r);
NTSTATUS dcerpc_epm_Map(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct epm_Map *r);

struct rpc_request *dcerpc_epm_LookupHandleFree_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct epm_LookupHandleFree *r);
NTSTATUS dcerpc_epm_LookupHandleFree(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct epm_LookupHandleFree *r);

struct rpc_request *dcerpc_epm_InqObject_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct epm_InqObject *r);
NTSTATUS dcerpc_epm_InqObject(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct epm_InqObject *r);

struct rpc_request *dcerpc_epm_MgmtDelete_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct epm_MgmtDelete *r);
NTSTATUS dcerpc_epm_MgmtDelete(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct epm_MgmtDelete *r);

struct rpc_request *dcerpc_epm_MapAuth_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct epm_MapAuth *r);
NTSTATUS dcerpc_epm_MapAuth(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct epm_MapAuth *r);
#endif /* _HEADER_RPC_epmapper */
