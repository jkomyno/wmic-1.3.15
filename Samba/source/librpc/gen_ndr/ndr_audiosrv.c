/* parser auto-generated by pidl */

#include "includes.h"
#include "libcli/util/nterr.h"
#include "librpc/gen_ndr/ndr_misc.h"
#include "librpc/gen_ndr/ndr_dcerpc.h"
#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/ndr_audiosrv.h"

static NTSTATUS ndr_push_audiosrv_CreatezoneFactoriesList(struct ndr_push *ndr, int flags, const struct audiosrv_CreatezoneFactoriesList *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_audiosrv_CreatezoneFactoriesList(struct ndr_pull *ndr, int flags, struct audiosrv_CreatezoneFactoriesList *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_audiosrv_CreatezoneFactoriesList(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_CreatezoneFactoriesList *r)
{
	ndr_print_struct(ndr, name, "audiosrv_CreatezoneFactoriesList");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "audiosrv_CreatezoneFactoriesList");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "audiosrv_CreatezoneFactoriesList");
		ndr->depth++;
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_audiosrv_CreateGfxFactoriesList(struct ndr_push *ndr, int flags, const struct audiosrv_CreateGfxFactoriesList *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_audiosrv_CreateGfxFactoriesList(struct ndr_pull *ndr, int flags, struct audiosrv_CreateGfxFactoriesList *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_audiosrv_CreateGfxFactoriesList(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_CreateGfxFactoriesList *r)
{
	ndr_print_struct(ndr, name, "audiosrv_CreateGfxFactoriesList");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "audiosrv_CreateGfxFactoriesList");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "audiosrv_CreateGfxFactoriesList");
		ndr->depth++;
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_audiosrv_CreateGfxList(struct ndr_push *ndr, int flags, const struct audiosrv_CreateGfxList *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_audiosrv_CreateGfxList(struct ndr_pull *ndr, int flags, struct audiosrv_CreateGfxList *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_audiosrv_CreateGfxList(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_CreateGfxList *r)
{
	ndr_print_struct(ndr, name, "audiosrv_CreateGfxList");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "audiosrv_CreateGfxList");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "audiosrv_CreateGfxList");
		ndr->depth++;
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_audiosrv_RemoveGfx(struct ndr_push *ndr, int flags, const struct audiosrv_RemoveGfx *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_audiosrv_RemoveGfx(struct ndr_pull *ndr, int flags, struct audiosrv_RemoveGfx *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_audiosrv_RemoveGfx(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_RemoveGfx *r)
{
	ndr_print_struct(ndr, name, "audiosrv_RemoveGfx");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "audiosrv_RemoveGfx");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "audiosrv_RemoveGfx");
		ndr->depth++;
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_audiosrv_AddGfx(struct ndr_push *ndr, int flags, const struct audiosrv_AddGfx *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_audiosrv_AddGfx(struct ndr_pull *ndr, int flags, struct audiosrv_AddGfx *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_audiosrv_AddGfx(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_AddGfx *r)
{
	ndr_print_struct(ndr, name, "audiosrv_AddGfx");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "audiosrv_AddGfx");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "audiosrv_AddGfx");
		ndr->depth++;
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_audiosrv_ModifyGfx(struct ndr_push *ndr, int flags, const struct audiosrv_ModifyGfx *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_audiosrv_ModifyGfx(struct ndr_pull *ndr, int flags, struct audiosrv_ModifyGfx *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_audiosrv_ModifyGfx(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_ModifyGfx *r)
{
	ndr_print_struct(ndr, name, "audiosrv_ModifyGfx");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "audiosrv_ModifyGfx");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "audiosrv_ModifyGfx");
		ndr->depth++;
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_audiosrv_OpenGfx(struct ndr_push *ndr, int flags, const struct audiosrv_OpenGfx *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_audiosrv_OpenGfx(struct ndr_pull *ndr, int flags, struct audiosrv_OpenGfx *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_audiosrv_OpenGfx(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_OpenGfx *r)
{
	ndr_print_struct(ndr, name, "audiosrv_OpenGfx");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "audiosrv_OpenGfx");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "audiosrv_OpenGfx");
		ndr->depth++;
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_audiosrv_Logon(struct ndr_push *ndr, int flags, const struct audiosrv_Logon *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_audiosrv_Logon(struct ndr_pull *ndr, int flags, struct audiosrv_Logon *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_audiosrv_Logon(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_Logon *r)
{
	ndr_print_struct(ndr, name, "audiosrv_Logon");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "audiosrv_Logon");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "audiosrv_Logon");
		ndr->depth++;
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_audiosrv_Logoff(struct ndr_push *ndr, int flags, const struct audiosrv_Logoff *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_audiosrv_Logoff(struct ndr_pull *ndr, int flags, struct audiosrv_Logoff *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_audiosrv_Logoff(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_Logoff *r)
{
	ndr_print_struct(ndr, name, "audiosrv_Logoff");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "audiosrv_Logoff");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "audiosrv_Logoff");
		ndr->depth++;
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_audiosrv_RegisterSessionNotificationEvent(struct ndr_push *ndr, int flags, const struct audiosrv_RegisterSessionNotificationEvent *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_audiosrv_RegisterSessionNotificationEvent(struct ndr_pull *ndr, int flags, struct audiosrv_RegisterSessionNotificationEvent *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_audiosrv_RegisterSessionNotificationEvent(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_RegisterSessionNotificationEvent *r)
{
	ndr_print_struct(ndr, name, "audiosrv_RegisterSessionNotificationEvent");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "audiosrv_RegisterSessionNotificationEvent");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "audiosrv_RegisterSessionNotificationEvent");
		ndr->depth++;
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_audiosrv_UnregisterSessionNotificationEvent(struct ndr_push *ndr, int flags, const struct audiosrv_UnregisterSessionNotificationEvent *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_audiosrv_UnregisterSessionNotificationEvent(struct ndr_pull *ndr, int flags, struct audiosrv_UnregisterSessionNotificationEvent *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_audiosrv_UnregisterSessionNotificationEvent(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_UnregisterSessionNotificationEvent *r)
{
	ndr_print_struct(ndr, name, "audiosrv_UnregisterSessionNotificationEvent");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "audiosrv_UnregisterSessionNotificationEvent");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "audiosrv_UnregisterSessionNotificationEvent");
		ndr->depth++;
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_audiosrv_SessionConnectState(struct ndr_push *ndr, int flags, const struct audiosrv_SessionConnectState *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_audiosrv_SessionConnectState(struct ndr_pull *ndr, int flags, struct audiosrv_SessionConnectState *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_audiosrv_SessionConnectState(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_SessionConnectState *r)
{
	ndr_print_struct(ndr, name, "audiosrv_SessionConnectState");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "audiosrv_SessionConnectState");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "audiosrv_SessionConnectState");
		ndr->depth++;
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_audiosrv_DriverOpenDrvRegKey(struct ndr_push *ndr, int flags, const struct audiosrv_DriverOpenDrvRegKey *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_audiosrv_DriverOpenDrvRegKey(struct ndr_pull *ndr, int flags, struct audiosrv_DriverOpenDrvRegKey *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_audiosrv_DriverOpenDrvRegKey(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_DriverOpenDrvRegKey *r)
{
	ndr_print_struct(ndr, name, "audiosrv_DriverOpenDrvRegKey");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "audiosrv_DriverOpenDrvRegKey");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "audiosrv_DriverOpenDrvRegKey");
		ndr->depth++;
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_audiosrv_AdvisePreferredDeviceChange(struct ndr_push *ndr, int flags, const struct audiosrv_AdvisePreferredDeviceChange *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_audiosrv_AdvisePreferredDeviceChange(struct ndr_pull *ndr, int flags, struct audiosrv_AdvisePreferredDeviceChange *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_audiosrv_AdvisePreferredDeviceChange(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_AdvisePreferredDeviceChange *r)
{
	ndr_print_struct(ndr, name, "audiosrv_AdvisePreferredDeviceChange");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "audiosrv_AdvisePreferredDeviceChange");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "audiosrv_AdvisePreferredDeviceChange");
		ndr->depth++;
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_audiosrv_GetPnpInfo(struct ndr_push *ndr, int flags, const struct audiosrv_GetPnpInfo *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_audiosrv_GetPnpInfo(struct ndr_pull *ndr, int flags, struct audiosrv_GetPnpInfo *r)
{
	if (flags & NDR_IN) {
	}
	if (flags & NDR_OUT) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_audiosrv_GetPnpInfo(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_GetPnpInfo *r)
{
	ndr_print_struct(ndr, name, "audiosrv_GetPnpInfo");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "audiosrv_GetPnpInfo");
		ndr->depth++;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "audiosrv_GetPnpInfo");
		ndr->depth++;
		ndr->depth--;
	}
	ndr->depth--;
}

static const struct dcerpc_interface_call audiosrv_calls[] = {
	{
		"audiosrv_CreatezoneFactoriesList",
		sizeof(struct audiosrv_CreatezoneFactoriesList),
		(ndr_push_flags_fn_t) ndr_push_audiosrv_CreatezoneFactoriesList,
		(ndr_pull_flags_fn_t) ndr_pull_audiosrv_CreatezoneFactoriesList,
		(ndr_print_function_t) ndr_print_audiosrv_CreatezoneFactoriesList,
		False,
	},
	{
		"audiosrv_CreateGfxFactoriesList",
		sizeof(struct audiosrv_CreateGfxFactoriesList),
		(ndr_push_flags_fn_t) ndr_push_audiosrv_CreateGfxFactoriesList,
		(ndr_pull_flags_fn_t) ndr_pull_audiosrv_CreateGfxFactoriesList,
		(ndr_print_function_t) ndr_print_audiosrv_CreateGfxFactoriesList,
		False,
	},
	{
		"audiosrv_CreateGfxList",
		sizeof(struct audiosrv_CreateGfxList),
		(ndr_push_flags_fn_t) ndr_push_audiosrv_CreateGfxList,
		(ndr_pull_flags_fn_t) ndr_pull_audiosrv_CreateGfxList,
		(ndr_print_function_t) ndr_print_audiosrv_CreateGfxList,
		False,
	},
	{
		"audiosrv_RemoveGfx",
		sizeof(struct audiosrv_RemoveGfx),
		(ndr_push_flags_fn_t) ndr_push_audiosrv_RemoveGfx,
		(ndr_pull_flags_fn_t) ndr_pull_audiosrv_RemoveGfx,
		(ndr_print_function_t) ndr_print_audiosrv_RemoveGfx,
		False,
	},
	{
		"audiosrv_AddGfx",
		sizeof(struct audiosrv_AddGfx),
		(ndr_push_flags_fn_t) ndr_push_audiosrv_AddGfx,
		(ndr_pull_flags_fn_t) ndr_pull_audiosrv_AddGfx,
		(ndr_print_function_t) ndr_print_audiosrv_AddGfx,
		False,
	},
	{
		"audiosrv_ModifyGfx",
		sizeof(struct audiosrv_ModifyGfx),
		(ndr_push_flags_fn_t) ndr_push_audiosrv_ModifyGfx,
		(ndr_pull_flags_fn_t) ndr_pull_audiosrv_ModifyGfx,
		(ndr_print_function_t) ndr_print_audiosrv_ModifyGfx,
		False,
	},
	{
		"audiosrv_OpenGfx",
		sizeof(struct audiosrv_OpenGfx),
		(ndr_push_flags_fn_t) ndr_push_audiosrv_OpenGfx,
		(ndr_pull_flags_fn_t) ndr_pull_audiosrv_OpenGfx,
		(ndr_print_function_t) ndr_print_audiosrv_OpenGfx,
		False,
	},
	{
		"audiosrv_Logon",
		sizeof(struct audiosrv_Logon),
		(ndr_push_flags_fn_t) ndr_push_audiosrv_Logon,
		(ndr_pull_flags_fn_t) ndr_pull_audiosrv_Logon,
		(ndr_print_function_t) ndr_print_audiosrv_Logon,
		False,
	},
	{
		"audiosrv_Logoff",
		sizeof(struct audiosrv_Logoff),
		(ndr_push_flags_fn_t) ndr_push_audiosrv_Logoff,
		(ndr_pull_flags_fn_t) ndr_pull_audiosrv_Logoff,
		(ndr_print_function_t) ndr_print_audiosrv_Logoff,
		False,
	},
	{
		"audiosrv_RegisterSessionNotificationEvent",
		sizeof(struct audiosrv_RegisterSessionNotificationEvent),
		(ndr_push_flags_fn_t) ndr_push_audiosrv_RegisterSessionNotificationEvent,
		(ndr_pull_flags_fn_t) ndr_pull_audiosrv_RegisterSessionNotificationEvent,
		(ndr_print_function_t) ndr_print_audiosrv_RegisterSessionNotificationEvent,
		False,
	},
	{
		"audiosrv_UnregisterSessionNotificationEvent",
		sizeof(struct audiosrv_UnregisterSessionNotificationEvent),
		(ndr_push_flags_fn_t) ndr_push_audiosrv_UnregisterSessionNotificationEvent,
		(ndr_pull_flags_fn_t) ndr_pull_audiosrv_UnregisterSessionNotificationEvent,
		(ndr_print_function_t) ndr_print_audiosrv_UnregisterSessionNotificationEvent,
		False,
	},
	{
		"audiosrv_SessionConnectState",
		sizeof(struct audiosrv_SessionConnectState),
		(ndr_push_flags_fn_t) ndr_push_audiosrv_SessionConnectState,
		(ndr_pull_flags_fn_t) ndr_pull_audiosrv_SessionConnectState,
		(ndr_print_function_t) ndr_print_audiosrv_SessionConnectState,
		False,
	},
	{
		"audiosrv_DriverOpenDrvRegKey",
		sizeof(struct audiosrv_DriverOpenDrvRegKey),
		(ndr_push_flags_fn_t) ndr_push_audiosrv_DriverOpenDrvRegKey,
		(ndr_pull_flags_fn_t) ndr_pull_audiosrv_DriverOpenDrvRegKey,
		(ndr_print_function_t) ndr_print_audiosrv_DriverOpenDrvRegKey,
		False,
	},
	{
		"audiosrv_AdvisePreferredDeviceChange",
		sizeof(struct audiosrv_AdvisePreferredDeviceChange),
		(ndr_push_flags_fn_t) ndr_push_audiosrv_AdvisePreferredDeviceChange,
		(ndr_pull_flags_fn_t) ndr_pull_audiosrv_AdvisePreferredDeviceChange,
		(ndr_print_function_t) ndr_print_audiosrv_AdvisePreferredDeviceChange,
		False,
	},
	{
		"audiosrv_GetPnpInfo",
		sizeof(struct audiosrv_GetPnpInfo),
		(ndr_push_flags_fn_t) ndr_push_audiosrv_GetPnpInfo,
		(ndr_pull_flags_fn_t) ndr_pull_audiosrv_GetPnpInfo,
		(ndr_print_function_t) ndr_print_audiosrv_GetPnpInfo,
		False,
	},
	{ NULL, 0, NULL, NULL, NULL, False }
};

static const char * const audiosrv_endpoint_strings[] = {
	"ncacn_np:[\\pipe\\audiosrv]", 
};

static const struct dcerpc_endpoint_list audiosrv_endpoints = {
	.count	= 1,
	.names	= audiosrv_endpoint_strings
};

static const char * const audiosrv_authservice_strings[] = {
	"host", 
};

static const struct dcerpc_authservice_list audiosrv_authservices = {
	.count	= 1,
	.names	= audiosrv_authservice_strings
};


const struct dcerpc_interface_table dcerpc_table_audiosrv = {
	.name		= "audiosrv",
	.syntax_id	= {
		{0x0a74ef1c,0x41a4,0x4e06,{0x83,0xae},{0xdc,0x74,0xfb,0x1c,0xdd,0x53}},
		DCERPC_AUDIOSRV_VERSION
	},
	.helpstring	= DCERPC_AUDIOSRV_HELPSTRING,
	.num_calls	= 15,
	.calls		= audiosrv_calls,
	.endpoints	= &audiosrv_endpoints,
	.authservices	= &audiosrv_authservices
};

