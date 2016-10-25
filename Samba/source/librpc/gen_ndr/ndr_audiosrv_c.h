#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/audiosrv.h"
#ifndef _HEADER_RPC_audiosrv
#define _HEADER_RPC_audiosrv

extern const struct dcerpc_interface_table dcerpc_table_audiosrv;

struct rpc_request *dcerpc_audiosrv_CreatezoneFactoriesList_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_CreatezoneFactoriesList *r);
NTSTATUS dcerpc_audiosrv_CreatezoneFactoriesList(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_CreatezoneFactoriesList *r);

struct rpc_request *dcerpc_audiosrv_CreateGfxFactoriesList_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_CreateGfxFactoriesList *r);
NTSTATUS dcerpc_audiosrv_CreateGfxFactoriesList(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_CreateGfxFactoriesList *r);

struct rpc_request *dcerpc_audiosrv_CreateGfxList_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_CreateGfxList *r);
NTSTATUS dcerpc_audiosrv_CreateGfxList(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_CreateGfxList *r);

struct rpc_request *dcerpc_audiosrv_RemoveGfx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_RemoveGfx *r);
NTSTATUS dcerpc_audiosrv_RemoveGfx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_RemoveGfx *r);

struct rpc_request *dcerpc_audiosrv_AddGfx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_AddGfx *r);
NTSTATUS dcerpc_audiosrv_AddGfx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_AddGfx *r);

struct rpc_request *dcerpc_audiosrv_ModifyGfx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_ModifyGfx *r);
NTSTATUS dcerpc_audiosrv_ModifyGfx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_ModifyGfx *r);

struct rpc_request *dcerpc_audiosrv_OpenGfx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_OpenGfx *r);
NTSTATUS dcerpc_audiosrv_OpenGfx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_OpenGfx *r);

struct rpc_request *dcerpc_audiosrv_Logon_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_Logon *r);
NTSTATUS dcerpc_audiosrv_Logon(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_Logon *r);

struct rpc_request *dcerpc_audiosrv_Logoff_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_Logoff *r);
NTSTATUS dcerpc_audiosrv_Logoff(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_Logoff *r);

struct rpc_request *dcerpc_audiosrv_RegisterSessionNotificationEvent_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_RegisterSessionNotificationEvent *r);
NTSTATUS dcerpc_audiosrv_RegisterSessionNotificationEvent(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_RegisterSessionNotificationEvent *r);

struct rpc_request *dcerpc_audiosrv_UnregisterSessionNotificationEvent_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_UnregisterSessionNotificationEvent *r);
NTSTATUS dcerpc_audiosrv_UnregisterSessionNotificationEvent(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_UnregisterSessionNotificationEvent *r);

struct rpc_request *dcerpc_audiosrv_SessionConnectState_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_SessionConnectState *r);
NTSTATUS dcerpc_audiosrv_SessionConnectState(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_SessionConnectState *r);

struct rpc_request *dcerpc_audiosrv_DriverOpenDrvRegKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_DriverOpenDrvRegKey *r);
NTSTATUS dcerpc_audiosrv_DriverOpenDrvRegKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_DriverOpenDrvRegKey *r);

struct rpc_request *dcerpc_audiosrv_AdvisePreferredDeviceChange_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_AdvisePreferredDeviceChange *r);
NTSTATUS dcerpc_audiosrv_AdvisePreferredDeviceChange(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_AdvisePreferredDeviceChange *r);

struct rpc_request *dcerpc_audiosrv_GetPnpInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_GetPnpInfo *r);
NTSTATUS dcerpc_audiosrv_GetPnpInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct audiosrv_GetPnpInfo *r);
#endif /* _HEADER_RPC_audiosrv */
