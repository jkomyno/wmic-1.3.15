#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/dfs.h"
#ifndef _HEADER_RPC_netdfs
#define _HEADER_RPC_netdfs

extern const struct dcerpc_interface_table dcerpc_table_netdfs;

struct rpc_request *dcerpc_dfs_GetManagerVersion_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_GetManagerVersion *r);
NTSTATUS dcerpc_dfs_GetManagerVersion(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_GetManagerVersion *r);

struct rpc_request *dcerpc_dfs_Add_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_Add *r);
NTSTATUS dcerpc_dfs_Add(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_Add *r);

struct rpc_request *dcerpc_dfs_Remove_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_Remove *r);
NTSTATUS dcerpc_dfs_Remove(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_Remove *r);

struct rpc_request *dcerpc_dfs_SetInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_SetInfo *r);
NTSTATUS dcerpc_dfs_SetInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_SetInfo *r);

struct rpc_request *dcerpc_dfs_GetInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_GetInfo *r);
NTSTATUS dcerpc_dfs_GetInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_GetInfo *r);

struct rpc_request *dcerpc_dfs_Enum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_Enum *r);
NTSTATUS dcerpc_dfs_Enum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_Enum *r);

struct rpc_request *dcerpc_dfs_Rename_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_Rename *r);
NTSTATUS dcerpc_dfs_Rename(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_Rename *r);

struct rpc_request *dcerpc_dfs_Move_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_Move *r);
NTSTATUS dcerpc_dfs_Move(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_Move *r);

struct rpc_request *dcerpc_dfs_ManagerGetConfigInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_ManagerGetConfigInfo *r);
NTSTATUS dcerpc_dfs_ManagerGetConfigInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_ManagerGetConfigInfo *r);

struct rpc_request *dcerpc_dfs_ManagerSendSiteInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_ManagerSendSiteInfo *r);
NTSTATUS dcerpc_dfs_ManagerSendSiteInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_ManagerSendSiteInfo *r);

struct rpc_request *dcerpc_dfs_AddFtRoot_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_AddFtRoot *r);
NTSTATUS dcerpc_dfs_AddFtRoot(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_AddFtRoot *r);

struct rpc_request *dcerpc_dfs_RemoveFtRoot_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_RemoveFtRoot *r);
NTSTATUS dcerpc_dfs_RemoveFtRoot(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_RemoveFtRoot *r);

struct rpc_request *dcerpc_dfs_AddStdRoot_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_AddStdRoot *r);
NTSTATUS dcerpc_dfs_AddStdRoot(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_AddStdRoot *r);

struct rpc_request *dcerpc_dfs_RemoveStdRoot_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_RemoveStdRoot *r);
NTSTATUS dcerpc_dfs_RemoveStdRoot(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_RemoveStdRoot *r);

struct rpc_request *dcerpc_dfs_ManagerInitialize_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_ManagerInitialize *r);
NTSTATUS dcerpc_dfs_ManagerInitialize(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_ManagerInitialize *r);

struct rpc_request *dcerpc_dfs_AddStdRootForced_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_AddStdRootForced *r);
NTSTATUS dcerpc_dfs_AddStdRootForced(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_AddStdRootForced *r);

struct rpc_request *dcerpc_dfs_GetDcAddress_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_GetDcAddress *r);
NTSTATUS dcerpc_dfs_GetDcAddress(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_GetDcAddress *r);

struct rpc_request *dcerpc_dfs_SetDcAddress_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_SetDcAddress *r);
NTSTATUS dcerpc_dfs_SetDcAddress(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_SetDcAddress *r);

struct rpc_request *dcerpc_dfs_FlushFtTable_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_FlushFtTable *r);
NTSTATUS dcerpc_dfs_FlushFtTable(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_FlushFtTable *r);

struct rpc_request *dcerpc_dfs_Add2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_Add2 *r);
NTSTATUS dcerpc_dfs_Add2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_Add2 *r);

struct rpc_request *dcerpc_dfs_Remove2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_Remove2 *r);
NTSTATUS dcerpc_dfs_Remove2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_Remove2 *r);

struct rpc_request *dcerpc_dfs_EnumEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_EnumEx *r);
NTSTATUS dcerpc_dfs_EnumEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_EnumEx *r);

struct rpc_request *dcerpc_dfs_SetInfo2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_SetInfo2 *r);
NTSTATUS dcerpc_dfs_SetInfo2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dfs_SetInfo2 *r);
#endif /* _HEADER_RPC_netdfs */
