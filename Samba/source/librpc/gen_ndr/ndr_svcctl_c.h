#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/svcctl.h"
#ifndef _HEADER_RPC_svcctl
#define _HEADER_RPC_svcctl

extern const struct dcerpc_interface_table dcerpc_table_svcctl;

struct rpc_request *dcerpc_svcctl_CloseServiceHandle_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_CloseServiceHandle *r);
NTSTATUS dcerpc_svcctl_CloseServiceHandle(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_CloseServiceHandle *r);

struct rpc_request *dcerpc_svcctl_ControlService_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_ControlService *r);
NTSTATUS dcerpc_svcctl_ControlService(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_ControlService *r);

struct rpc_request *dcerpc_svcctl_DeleteService_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_DeleteService *r);
NTSTATUS dcerpc_svcctl_DeleteService(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_DeleteService *r);

struct rpc_request *dcerpc_svcctl_LockServiceDatabase_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_LockServiceDatabase *r);
NTSTATUS dcerpc_svcctl_LockServiceDatabase(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_LockServiceDatabase *r);

struct rpc_request *dcerpc_svcctl_QueryServiceObjectSecurity_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_QueryServiceObjectSecurity *r);
NTSTATUS dcerpc_svcctl_QueryServiceObjectSecurity(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_QueryServiceObjectSecurity *r);

struct rpc_request *dcerpc_svcctl_SetServiceObjectSecurity_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_SetServiceObjectSecurity *r);
NTSTATUS dcerpc_svcctl_SetServiceObjectSecurity(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_SetServiceObjectSecurity *r);

struct rpc_request *dcerpc_svcctl_QueryServiceStatus_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_QueryServiceStatus *r);
NTSTATUS dcerpc_svcctl_QueryServiceStatus(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_QueryServiceStatus *r);

struct rpc_request *dcerpc_svcctl_SetServiceStatus_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_SetServiceStatus *r);
NTSTATUS dcerpc_svcctl_SetServiceStatus(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_SetServiceStatus *r);

struct rpc_request *dcerpc_svcctl_UnlockServiceDatabase_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_UnlockServiceDatabase *r);
NTSTATUS dcerpc_svcctl_UnlockServiceDatabase(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_UnlockServiceDatabase *r);

struct rpc_request *dcerpc_svcctl_NotifyBootConfigStatus_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_NotifyBootConfigStatus *r);
NTSTATUS dcerpc_svcctl_NotifyBootConfigStatus(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_NotifyBootConfigStatus *r);

struct rpc_request *dcerpc_svcctl_SCSetServiceBitsW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_SCSetServiceBitsW *r);
NTSTATUS dcerpc_svcctl_SCSetServiceBitsW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_SCSetServiceBitsW *r);

struct rpc_request *dcerpc_svcctl_ChangeServiceConfigW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_ChangeServiceConfigW *r);
NTSTATUS dcerpc_svcctl_ChangeServiceConfigW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_ChangeServiceConfigW *r);

struct rpc_request *dcerpc_svcctl_CreateServiceW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_CreateServiceW *r);
NTSTATUS dcerpc_svcctl_CreateServiceW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_CreateServiceW *r);

struct rpc_request *dcerpc_svcctl_EnumDependentServicesW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_EnumDependentServicesW *r);
NTSTATUS dcerpc_svcctl_EnumDependentServicesW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_EnumDependentServicesW *r);

struct rpc_request *dcerpc_svcctl_EnumServicesStatusW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_EnumServicesStatusW *r);
NTSTATUS dcerpc_svcctl_EnumServicesStatusW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_EnumServicesStatusW *r);

struct rpc_request *dcerpc_svcctl_OpenSCManagerW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_OpenSCManagerW *r);
NTSTATUS dcerpc_svcctl_OpenSCManagerW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_OpenSCManagerW *r);

struct rpc_request *dcerpc_svcctl_OpenServiceW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_OpenServiceW *r);
NTSTATUS dcerpc_svcctl_OpenServiceW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_OpenServiceW *r);

struct rpc_request *dcerpc_svcctl_QueryServiceConfigW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_QueryServiceConfigW *r);
NTSTATUS dcerpc_svcctl_QueryServiceConfigW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_QueryServiceConfigW *r);

struct rpc_request *dcerpc_svcctl_QueryServiceLockStatusW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_QueryServiceLockStatusW *r);
NTSTATUS dcerpc_svcctl_QueryServiceLockStatusW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_QueryServiceLockStatusW *r);

struct rpc_request *dcerpc_svcctl_StartServiceW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_StartServiceW *r);
NTSTATUS dcerpc_svcctl_StartServiceW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_StartServiceW *r);

struct rpc_request *dcerpc_svcctl_GetServiceDisplayNameW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_GetServiceDisplayNameW *r);
NTSTATUS dcerpc_svcctl_GetServiceDisplayNameW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_GetServiceDisplayNameW *r);

struct rpc_request *dcerpc_svcctl_GetServiceKeyNameW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_GetServiceKeyNameW *r);
NTSTATUS dcerpc_svcctl_GetServiceKeyNameW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_GetServiceKeyNameW *r);

struct rpc_request *dcerpc_svcctl_SCSetServiceBitsA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_SCSetServiceBitsA *r);
NTSTATUS dcerpc_svcctl_SCSetServiceBitsA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_SCSetServiceBitsA *r);

struct rpc_request *dcerpc_svcctl_ChangeServiceConfigA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_ChangeServiceConfigA *r);
NTSTATUS dcerpc_svcctl_ChangeServiceConfigA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_ChangeServiceConfigA *r);

struct rpc_request *dcerpc_svcctl_CreateServiceA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_CreateServiceA *r);
NTSTATUS dcerpc_svcctl_CreateServiceA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_CreateServiceA *r);

struct rpc_request *dcerpc_svcctl_EnumDependentServicesA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_EnumDependentServicesA *r);
NTSTATUS dcerpc_svcctl_EnumDependentServicesA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_EnumDependentServicesA *r);

struct rpc_request *dcerpc_svcctl_EnumServicesStatusA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_EnumServicesStatusA *r);
NTSTATUS dcerpc_svcctl_EnumServicesStatusA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_EnumServicesStatusA *r);

struct rpc_request *dcerpc_svcctl_OpenSCManagerA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_OpenSCManagerA *r);
NTSTATUS dcerpc_svcctl_OpenSCManagerA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_OpenSCManagerA *r);

struct rpc_request *dcerpc_svcctl_OpenServiceA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_OpenServiceA *r);
NTSTATUS dcerpc_svcctl_OpenServiceA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_OpenServiceA *r);

struct rpc_request *dcerpc_svcctl_QueryServiceConfigA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_QueryServiceConfigA *r);
NTSTATUS dcerpc_svcctl_QueryServiceConfigA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_QueryServiceConfigA *r);

struct rpc_request *dcerpc_svcctl_QueryServiceLockStatusA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_QueryServiceLockStatusA *r);
NTSTATUS dcerpc_svcctl_QueryServiceLockStatusA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_QueryServiceLockStatusA *r);

struct rpc_request *dcerpc_svcctl_StartServiceA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_StartServiceA *r);
NTSTATUS dcerpc_svcctl_StartServiceA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_StartServiceA *r);

struct rpc_request *dcerpc_svcctl_GetServiceDisplayNameA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_GetServiceDisplayNameA *r);
NTSTATUS dcerpc_svcctl_GetServiceDisplayNameA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_GetServiceDisplayNameA *r);

struct rpc_request *dcerpc_svcctl_GetServiceKeyNameA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_GetServiceKeyNameA *r);
NTSTATUS dcerpc_svcctl_GetServiceKeyNameA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_GetServiceKeyNameA *r);

struct rpc_request *dcerpc_svcctl_GetCurrentGroupeStateW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_GetCurrentGroupeStateW *r);
NTSTATUS dcerpc_svcctl_GetCurrentGroupeStateW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_GetCurrentGroupeStateW *r);

struct rpc_request *dcerpc_svcctl_EnumServiceGroupW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_EnumServiceGroupW *r);
NTSTATUS dcerpc_svcctl_EnumServiceGroupW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_EnumServiceGroupW *r);

struct rpc_request *dcerpc_svcctl_ChangeServiceConfig2A_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_ChangeServiceConfig2A *r);
NTSTATUS dcerpc_svcctl_ChangeServiceConfig2A(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_ChangeServiceConfig2A *r);

struct rpc_request *dcerpc_svcctl_ChangeServiceConfig2W_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_ChangeServiceConfig2W *r);
NTSTATUS dcerpc_svcctl_ChangeServiceConfig2W(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_ChangeServiceConfig2W *r);

struct rpc_request *dcerpc_svcctl_QueryServiceConfig2A_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_QueryServiceConfig2A *r);
NTSTATUS dcerpc_svcctl_QueryServiceConfig2A(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_QueryServiceConfig2A *r);

struct rpc_request *dcerpc_svcctl_QueryServiceConfig2W_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_QueryServiceConfig2W *r);
NTSTATUS dcerpc_svcctl_QueryServiceConfig2W(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_QueryServiceConfig2W *r);

struct rpc_request *dcerpc_svcctl_QueryServiceStatusEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_QueryServiceStatusEx *r);
NTSTATUS dcerpc_svcctl_QueryServiceStatusEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_QueryServiceStatusEx *r);

struct rpc_request *dcerpc_EnumServicesStatusExA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EnumServicesStatusExA *r);
NTSTATUS dcerpc_EnumServicesStatusExA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EnumServicesStatusExA *r);

struct rpc_request *dcerpc_EnumServicesStatusExW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EnumServicesStatusExW *r);
NTSTATUS dcerpc_EnumServicesStatusExW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EnumServicesStatusExW *r);

struct rpc_request *dcerpc_svcctl_SCSendTSMessage_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_SCSendTSMessage *r);
NTSTATUS dcerpc_svcctl_SCSendTSMessage(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct svcctl_SCSendTSMessage *r);
#endif /* _HEADER_RPC_svcctl */
