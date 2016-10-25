#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/wzcsvc.h"
#ifndef _HEADER_RPC_wzcsvc
#define _HEADER_RPC_wzcsvc

extern const struct dcerpc_interface_table dcerpc_table_wzcsvc;

struct rpc_request *dcerpc_wzcsvc_EnumInterfaces_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_EnumInterfaces *r);
NTSTATUS dcerpc_wzcsvc_EnumInterfaces(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_EnumInterfaces *r);

struct rpc_request *dcerpc_wzcsvc_QueryInterface_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_QueryInterface *r);
NTSTATUS dcerpc_wzcsvc_QueryInterface(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_QueryInterface *r);

struct rpc_request *dcerpc_wzcsvc_SetInterface_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_SetInterface *r);
NTSTATUS dcerpc_wzcsvc_SetInterface(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_SetInterface *r);

struct rpc_request *dcerpc_wzcsvc_RefreshInterface_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_RefreshInterface *r);
NTSTATUS dcerpc_wzcsvc_RefreshInterface(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_RefreshInterface *r);

struct rpc_request *dcerpc_wzcsvc_QueryContext_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_QueryContext *r);
NTSTATUS dcerpc_wzcsvc_QueryContext(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_QueryContext *r);

struct rpc_request *dcerpc_wzcsvc_SetContext_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_SetContext *r);
NTSTATUS dcerpc_wzcsvc_SetContext(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_SetContext *r);

struct rpc_request *dcerpc_wzcsvc_EapolUIResponse_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_EapolUIResponse *r);
NTSTATUS dcerpc_wzcsvc_EapolUIResponse(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_EapolUIResponse *r);

struct rpc_request *dcerpc_wzcsvc_EapolGetCustomAuthData_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_EapolGetCustomAuthData *r);
NTSTATUS dcerpc_wzcsvc_EapolGetCustomAuthData(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_EapolGetCustomAuthData *r);

struct rpc_request *dcerpc_wzcsvc_EapolSetCustomAuthData_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_EapolSetCustomAuthData *r);
NTSTATUS dcerpc_wzcsvc_EapolSetCustomAuthData(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_EapolSetCustomAuthData *r);

struct rpc_request *dcerpc_wzcsvc_EapolGetInterfaceParams_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_EapolGetInterfaceParams *r);
NTSTATUS dcerpc_wzcsvc_EapolGetInterfaceParams(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_EapolGetInterfaceParams *r);

struct rpc_request *dcerpc_wzcsvc_EapolSetInterfaceParams_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_EapolSetInterfaceParams *r);
NTSTATUS dcerpc_wzcsvc_EapolSetInterfaceParams(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_EapolSetInterfaceParams *r);

struct rpc_request *dcerpc_wzcsvc_EapolReAuthenticateInterface_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_EapolReAuthenticateInterface *r);
NTSTATUS dcerpc_wzcsvc_EapolReAuthenticateInterface(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_EapolReAuthenticateInterface *r);

struct rpc_request *dcerpc_wzcsvc_EapolQueryInterfaceState_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_EapolQueryInterfaceState *r);
NTSTATUS dcerpc_wzcsvc_EapolQueryInterfaceState(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_EapolQueryInterfaceState *r);

struct rpc_request *dcerpc_wzcsvc_OpenWZCDbLogSession_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_OpenWZCDbLogSession *r);
NTSTATUS dcerpc_wzcsvc_OpenWZCDbLogSession(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_OpenWZCDbLogSession *r);

struct rpc_request *dcerpc_wzcsvc_CloseWZCDbLogSession_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_CloseWZCDbLogSession *r);
NTSTATUS dcerpc_wzcsvc_CloseWZCDbLogSession(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_CloseWZCDbLogSession *r);

struct rpc_request *dcerpc_wzcsvc_EnumWZCDbLogRecords_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_EnumWZCDbLogRecords *r);
NTSTATUS dcerpc_wzcsvc_EnumWZCDbLogRecords(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_EnumWZCDbLogRecords *r);

struct rpc_request *dcerpc_wzcsvc_FlushWZCdbLog_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_FlushWZCdbLog *r);
NTSTATUS dcerpc_wzcsvc_FlushWZCdbLog(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_FlushWZCdbLog *r);

struct rpc_request *dcerpc_wzcsvc_GetWZCDbLogRecord_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_GetWZCDbLogRecord *r);
NTSTATUS dcerpc_wzcsvc_GetWZCDbLogRecord(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wzcsvc_GetWZCDbLogRecord *r);
#endif /* _HEADER_RPC_wzcsvc */
