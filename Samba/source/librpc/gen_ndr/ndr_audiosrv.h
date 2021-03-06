/* header auto-generated by pidl */

#include "librpc/gen_ndr/audiosrv.h"

#ifndef _HEADER_NDR_audiosrv
#define _HEADER_NDR_audiosrv

#include "librpc/ndr/libndr.h"
#define DCERPC_AUDIOSRV_UUID "0a74ef1c-41a4-4e06-83ae-dc74fb1cdd53"
#define DCERPC_AUDIOSRV_VERSION 1.0
#define DCERPC_AUDIOSRV_NAME "audiosrv"
#define DCERPC_AUDIOSRV_HELPSTRING "Audio Server"
extern const struct dcerpc_interface_table dcerpc_table_audiosrv;
NTSTATUS dcerpc_server_audiosrv_init(void);
#define DCERPC_AUDIOSRV_CREATEZONEFACTORIESLIST (0x00)

#define DCERPC_AUDIOSRV_CREATEGFXFACTORIESLIST (0x01)

#define DCERPC_AUDIOSRV_CREATEGFXLIST (0x02)

#define DCERPC_AUDIOSRV_REMOVEGFX (0x03)

#define DCERPC_AUDIOSRV_ADDGFX (0x04)

#define DCERPC_AUDIOSRV_MODIFYGFX (0x05)

#define DCERPC_AUDIOSRV_OPENGFX (0x06)

#define DCERPC_AUDIOSRV_LOGON (0x07)

#define DCERPC_AUDIOSRV_LOGOFF (0x08)

#define DCERPC_AUDIOSRV_REGISTERSESSIONNOTIFICATIONEVENT (0x09)

#define DCERPC_AUDIOSRV_UNREGISTERSESSIONNOTIFICATIONEVENT (0x0a)

#define DCERPC_AUDIOSRV_SESSIONCONNECTSTATE (0x0b)

#define DCERPC_AUDIOSRV_DRIVEROPENDRVREGKEY (0x0c)

#define DCERPC_AUDIOSRV_ADVISEPREFERREDDEVICECHANGE (0x0d)

#define DCERPC_AUDIOSRV_GETPNPINFO (0x0e)

#define DCERPC_AUDIOSRV_CALL_COUNT (15)
void ndr_print_audiosrv_CreatezoneFactoriesList(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_CreatezoneFactoriesList *r);
void ndr_print_audiosrv_CreateGfxFactoriesList(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_CreateGfxFactoriesList *r);
void ndr_print_audiosrv_CreateGfxList(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_CreateGfxList *r);
void ndr_print_audiosrv_RemoveGfx(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_RemoveGfx *r);
void ndr_print_audiosrv_AddGfx(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_AddGfx *r);
void ndr_print_audiosrv_ModifyGfx(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_ModifyGfx *r);
void ndr_print_audiosrv_OpenGfx(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_OpenGfx *r);
void ndr_print_audiosrv_Logon(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_Logon *r);
void ndr_print_audiosrv_Logoff(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_Logoff *r);
void ndr_print_audiosrv_RegisterSessionNotificationEvent(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_RegisterSessionNotificationEvent *r);
void ndr_print_audiosrv_UnregisterSessionNotificationEvent(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_UnregisterSessionNotificationEvent *r);
void ndr_print_audiosrv_SessionConnectState(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_SessionConnectState *r);
void ndr_print_audiosrv_DriverOpenDrvRegKey(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_DriverOpenDrvRegKey *r);
void ndr_print_audiosrv_AdvisePreferredDeviceChange(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_AdvisePreferredDeviceChange *r);
void ndr_print_audiosrv_GetPnpInfo(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_GetPnpInfo *r);
#endif /* _HEADER_NDR_audiosrv */
