#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/ntsvcs.h"
#ifndef _HEADER_RPC_ntsvcs
#define _HEADER_RPC_ntsvcs

extern const struct dcerpc_interface_table dcerpc_table_ntsvcs;

struct rpc_request *dcerpc_PNP_Disconnect_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_Disconnect *r);
NTSTATUS dcerpc_PNP_Disconnect(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_Disconnect *r);

struct rpc_request *dcerpc_PNP_Connect_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_Connect *r);
NTSTATUS dcerpc_PNP_Connect(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_Connect *r);

struct rpc_request *dcerpc_PNP_GetVersion_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetVersion *r);
NTSTATUS dcerpc_PNP_GetVersion(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetVersion *r);

struct rpc_request *dcerpc_PNP_GetGlobalState_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetGlobalState *r);
NTSTATUS dcerpc_PNP_GetGlobalState(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetGlobalState *r);

struct rpc_request *dcerpc_PNP_InitDetection_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_InitDetection *r);
NTSTATUS dcerpc_PNP_InitDetection(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_InitDetection *r);

struct rpc_request *dcerpc_PNP_ReportLogOn_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_ReportLogOn *r);
NTSTATUS dcerpc_PNP_ReportLogOn(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_ReportLogOn *r);

struct rpc_request *dcerpc_PNP_ValidateDeviceInstance_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_ValidateDeviceInstance *r);
NTSTATUS dcerpc_PNP_ValidateDeviceInstance(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_ValidateDeviceInstance *r);

struct rpc_request *dcerpc_PNP_GetRootDeviceInstance_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetRootDeviceInstance *r);
NTSTATUS dcerpc_PNP_GetRootDeviceInstance(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetRootDeviceInstance *r);

struct rpc_request *dcerpc_PNP_GetRelatedDeviceInstance_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetRelatedDeviceInstance *r);
NTSTATUS dcerpc_PNP_GetRelatedDeviceInstance(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetRelatedDeviceInstance *r);

struct rpc_request *dcerpc_PNP_EnumerateSubKeys_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_EnumerateSubKeys *r);
NTSTATUS dcerpc_PNP_EnumerateSubKeys(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_EnumerateSubKeys *r);

struct rpc_request *dcerpc_PNP_GetDeviceList_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetDeviceList *r);
NTSTATUS dcerpc_PNP_GetDeviceList(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetDeviceList *r);

struct rpc_request *dcerpc_PNP_GetDeviceListSize_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetDeviceListSize *r);
NTSTATUS dcerpc_PNP_GetDeviceListSize(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetDeviceListSize *r);

struct rpc_request *dcerpc_PNP_GetDepth_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetDepth *r);
NTSTATUS dcerpc_PNP_GetDepth(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetDepth *r);

struct rpc_request *dcerpc_PNP_GetDeviceRegProp_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetDeviceRegProp *r);
NTSTATUS dcerpc_PNP_GetDeviceRegProp(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetDeviceRegProp *r);

struct rpc_request *dcerpc_PNP_SetDeviceRegProp_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_SetDeviceRegProp *r);
NTSTATUS dcerpc_PNP_SetDeviceRegProp(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_SetDeviceRegProp *r);

struct rpc_request *dcerpc_PNP_GetClassInstance_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetClassInstance *r);
NTSTATUS dcerpc_PNP_GetClassInstance(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetClassInstance *r);

struct rpc_request *dcerpc_PNP_CreateKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_CreateKey *r);
NTSTATUS dcerpc_PNP_CreateKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_CreateKey *r);

struct rpc_request *dcerpc_PNP_DeleteRegistryKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_DeleteRegistryKey *r);
NTSTATUS dcerpc_PNP_DeleteRegistryKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_DeleteRegistryKey *r);

struct rpc_request *dcerpc_PNP_GetClassCount_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetClassCount *r);
NTSTATUS dcerpc_PNP_GetClassCount(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetClassCount *r);

struct rpc_request *dcerpc_PNP_GetClassName_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetClassName *r);
NTSTATUS dcerpc_PNP_GetClassName(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetClassName *r);

struct rpc_request *dcerpc_PNP_DeleteClassKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_DeleteClassKey *r);
NTSTATUS dcerpc_PNP_DeleteClassKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_DeleteClassKey *r);

struct rpc_request *dcerpc_PNP_GetInterfaceDeviceAlias_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetInterfaceDeviceAlias *r);
NTSTATUS dcerpc_PNP_GetInterfaceDeviceAlias(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetInterfaceDeviceAlias *r);

struct rpc_request *dcerpc_PNP_GetInterfaceDeviceList_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetInterfaceDeviceList *r);
NTSTATUS dcerpc_PNP_GetInterfaceDeviceList(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetInterfaceDeviceList *r);

struct rpc_request *dcerpc_PNP_GetInterfaceDeviceListSize_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetInterfaceDeviceListSize *r);
NTSTATUS dcerpc_PNP_GetInterfaceDeviceListSize(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetInterfaceDeviceListSize *r);

struct rpc_request *dcerpc_PNP_RegisterDeviceClassAssociation_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_RegisterDeviceClassAssociation *r);
NTSTATUS dcerpc_PNP_RegisterDeviceClassAssociation(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_RegisterDeviceClassAssociation *r);

struct rpc_request *dcerpc_PNP_UnregisterDeviceClassAssociation_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_UnregisterDeviceClassAssociation *r);
NTSTATUS dcerpc_PNP_UnregisterDeviceClassAssociation(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_UnregisterDeviceClassAssociation *r);

struct rpc_request *dcerpc_PNP_GetClassRegProp_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetClassRegProp *r);
NTSTATUS dcerpc_PNP_GetClassRegProp(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetClassRegProp *r);

struct rpc_request *dcerpc_PNP_SetClassRegProp_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_SetClassRegProp *r);
NTSTATUS dcerpc_PNP_SetClassRegProp(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_SetClassRegProp *r);

struct rpc_request *dcerpc_PNP_CreateDevInst_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_CreateDevInst *r);
NTSTATUS dcerpc_PNP_CreateDevInst(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_CreateDevInst *r);

struct rpc_request *dcerpc_PNP_DeviceInstanceAction_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_DeviceInstanceAction *r);
NTSTATUS dcerpc_PNP_DeviceInstanceAction(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_DeviceInstanceAction *r);

struct rpc_request *dcerpc_PNP_GetDeviceStatus_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetDeviceStatus *r);
NTSTATUS dcerpc_PNP_GetDeviceStatus(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetDeviceStatus *r);

struct rpc_request *dcerpc_PNP_SetDeviceProblem_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_SetDeviceProblem *r);
NTSTATUS dcerpc_PNP_SetDeviceProblem(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_SetDeviceProblem *r);

struct rpc_request *dcerpc_PNP_DisableDevInst_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_DisableDevInst *r);
NTSTATUS dcerpc_PNP_DisableDevInst(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_DisableDevInst *r);

struct rpc_request *dcerpc_PNP_UninstallDevInst_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_UninstallDevInst *r);
NTSTATUS dcerpc_PNP_UninstallDevInst(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_UninstallDevInst *r);

struct rpc_request *dcerpc_PNP_AddID_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_AddID *r);
NTSTATUS dcerpc_PNP_AddID(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_AddID *r);

struct rpc_request *dcerpc_PNP_RegisterDriver_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_RegisterDriver *r);
NTSTATUS dcerpc_PNP_RegisterDriver(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_RegisterDriver *r);

struct rpc_request *dcerpc_PNP_QueryRemove_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_QueryRemove *r);
NTSTATUS dcerpc_PNP_QueryRemove(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_QueryRemove *r);

struct rpc_request *dcerpc_PNP_RequestDeviceEject_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_RequestDeviceEject *r);
NTSTATUS dcerpc_PNP_RequestDeviceEject(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_RequestDeviceEject *r);

struct rpc_request *dcerpc_PNP_IsDockStationPresent_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_IsDockStationPresent *r);
NTSTATUS dcerpc_PNP_IsDockStationPresent(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_IsDockStationPresent *r);

struct rpc_request *dcerpc_PNP_RequestEjectPC_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_RequestEjectPC *r);
NTSTATUS dcerpc_PNP_RequestEjectPC(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_RequestEjectPC *r);

struct rpc_request *dcerpc_PNP_HwProfFlags_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_HwProfFlags *r);
NTSTATUS dcerpc_PNP_HwProfFlags(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_HwProfFlags *r);

struct rpc_request *dcerpc_PNP_GetHwProfInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetHwProfInfo *r);
NTSTATUS dcerpc_PNP_GetHwProfInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetHwProfInfo *r);

struct rpc_request *dcerpc_PNP_AddEmptyLogConf_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_AddEmptyLogConf *r);
NTSTATUS dcerpc_PNP_AddEmptyLogConf(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_AddEmptyLogConf *r);

struct rpc_request *dcerpc_PNP_FreeLogConf_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_FreeLogConf *r);
NTSTATUS dcerpc_PNP_FreeLogConf(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_FreeLogConf *r);

struct rpc_request *dcerpc_PNP_GetFirstLogConf_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetFirstLogConf *r);
NTSTATUS dcerpc_PNP_GetFirstLogConf(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetFirstLogConf *r);

struct rpc_request *dcerpc_PNP_GetNextLogConf_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetNextLogConf *r);
NTSTATUS dcerpc_PNP_GetNextLogConf(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetNextLogConf *r);

struct rpc_request *dcerpc_PNP_GetLogConfPriority_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetLogConfPriority *r);
NTSTATUS dcerpc_PNP_GetLogConfPriority(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetLogConfPriority *r);

struct rpc_request *dcerpc_PNP_AddResDes_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_AddResDes *r);
NTSTATUS dcerpc_PNP_AddResDes(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_AddResDes *r);

struct rpc_request *dcerpc_PNP_FreeResDes_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_FreeResDes *r);
NTSTATUS dcerpc_PNP_FreeResDes(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_FreeResDes *r);

struct rpc_request *dcerpc_PNP_GetNextResDes_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetNextResDes *r);
NTSTATUS dcerpc_PNP_GetNextResDes(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetNextResDes *r);

struct rpc_request *dcerpc_PNP_GetResDesData_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetResDesData *r);
NTSTATUS dcerpc_PNP_GetResDesData(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetResDesData *r);

struct rpc_request *dcerpc_PNP_GetResDesDataSize_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetResDesDataSize *r);
NTSTATUS dcerpc_PNP_GetResDesDataSize(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetResDesDataSize *r);

struct rpc_request *dcerpc_PNP_ModifyResDes_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_ModifyResDes *r);
NTSTATUS dcerpc_PNP_ModifyResDes(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_ModifyResDes *r);

struct rpc_request *dcerpc_PNP_DetectResourceLimit_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_DetectResourceLimit *r);
NTSTATUS dcerpc_PNP_DetectResourceLimit(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_DetectResourceLimit *r);

struct rpc_request *dcerpc_PNP_QueryResConfList_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_QueryResConfList *r);
NTSTATUS dcerpc_PNP_QueryResConfList(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_QueryResConfList *r);

struct rpc_request *dcerpc_PNP_SetHwProf_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_SetHwProf *r);
NTSTATUS dcerpc_PNP_SetHwProf(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_SetHwProf *r);

struct rpc_request *dcerpc_PNP_QueryArbitratorFreeData_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_QueryArbitratorFreeData *r);
NTSTATUS dcerpc_PNP_QueryArbitratorFreeData(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_QueryArbitratorFreeData *r);

struct rpc_request *dcerpc_PNP_QueryArbitratorFreeSize_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_QueryArbitratorFreeSize *r);
NTSTATUS dcerpc_PNP_QueryArbitratorFreeSize(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_QueryArbitratorFreeSize *r);

struct rpc_request *dcerpc_PNP_RunDetection_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_RunDetection *r);
NTSTATUS dcerpc_PNP_RunDetection(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_RunDetection *r);

struct rpc_request *dcerpc_PNP_RegisterNotification_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_RegisterNotification *r);
NTSTATUS dcerpc_PNP_RegisterNotification(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_RegisterNotification *r);

struct rpc_request *dcerpc_PNP_UnregisterNotification_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_UnregisterNotification *r);
NTSTATUS dcerpc_PNP_UnregisterNotification(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_UnregisterNotification *r);

struct rpc_request *dcerpc_PNP_GetCustomDevProp_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetCustomDevProp *r);
NTSTATUS dcerpc_PNP_GetCustomDevProp(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetCustomDevProp *r);

struct rpc_request *dcerpc_PNP_GetVersionInternal_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetVersionInternal *r);
NTSTATUS dcerpc_PNP_GetVersionInternal(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetVersionInternal *r);

struct rpc_request *dcerpc_PNP_GetBlockedDriverInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetBlockedDriverInfo *r);
NTSTATUS dcerpc_PNP_GetBlockedDriverInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetBlockedDriverInfo *r);

struct rpc_request *dcerpc_PNP_GetServerSideDeviceInstallFlags_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetServerSideDeviceInstallFlags *r);
NTSTATUS dcerpc_PNP_GetServerSideDeviceInstallFlags(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PNP_GetServerSideDeviceInstallFlags *r);
#endif /* _HEADER_RPC_ntsvcs */
