#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/winreg.h"
#ifndef _HEADER_RPC_winreg
#define _HEADER_RPC_winreg

extern const struct dcerpc_interface_table dcerpc_table_winreg;

struct rpc_request *dcerpc_winreg_OpenHKCR_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenHKCR *r);
NTSTATUS dcerpc_winreg_OpenHKCR(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenHKCR *r);

struct rpc_request *dcerpc_winreg_OpenHKCU_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenHKCU *r);
NTSTATUS dcerpc_winreg_OpenHKCU(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenHKCU *r);

struct rpc_request *dcerpc_winreg_OpenHKLM_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenHKLM *r);
NTSTATUS dcerpc_winreg_OpenHKLM(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenHKLM *r);

struct rpc_request *dcerpc_winreg_OpenHKPD_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenHKPD *r);
NTSTATUS dcerpc_winreg_OpenHKPD(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenHKPD *r);

struct rpc_request *dcerpc_winreg_OpenHKU_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenHKU *r);
NTSTATUS dcerpc_winreg_OpenHKU(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenHKU *r);

struct rpc_request *dcerpc_winreg_CloseKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_CloseKey *r);
NTSTATUS dcerpc_winreg_CloseKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_CloseKey *r);

struct rpc_request *dcerpc_winreg_CreateKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_CreateKey *r);
NTSTATUS dcerpc_winreg_CreateKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_CreateKey *r);

struct rpc_request *dcerpc_winreg_DeleteKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_DeleteKey *r);
NTSTATUS dcerpc_winreg_DeleteKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_DeleteKey *r);

struct rpc_request *dcerpc_winreg_DeleteValue_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_DeleteValue *r);
NTSTATUS dcerpc_winreg_DeleteValue(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_DeleteValue *r);

struct rpc_request *dcerpc_winreg_EnumKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_EnumKey *r);
NTSTATUS dcerpc_winreg_EnumKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_EnumKey *r);

struct rpc_request *dcerpc_winreg_EnumValue_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_EnumValue *r);
NTSTATUS dcerpc_winreg_EnumValue(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_EnumValue *r);

struct rpc_request *dcerpc_winreg_FlushKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_FlushKey *r);
NTSTATUS dcerpc_winreg_FlushKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_FlushKey *r);

struct rpc_request *dcerpc_winreg_GetKeySecurity_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_GetKeySecurity *r);
NTSTATUS dcerpc_winreg_GetKeySecurity(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_GetKeySecurity *r);

struct rpc_request *dcerpc_winreg_LoadKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_LoadKey *r);
NTSTATUS dcerpc_winreg_LoadKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_LoadKey *r);

struct rpc_request *dcerpc_winreg_NotifyChangeKeyValue_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_NotifyChangeKeyValue *r);
NTSTATUS dcerpc_winreg_NotifyChangeKeyValue(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_NotifyChangeKeyValue *r);

struct rpc_request *dcerpc_winreg_OpenKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenKey *r);
NTSTATUS dcerpc_winreg_OpenKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenKey *r);

struct rpc_request *dcerpc_winreg_QueryInfoKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_QueryInfoKey *r);
NTSTATUS dcerpc_winreg_QueryInfoKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_QueryInfoKey *r);

struct rpc_request *dcerpc_winreg_QueryValue_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_QueryValue *r);
NTSTATUS dcerpc_winreg_QueryValue(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_QueryValue *r);

struct rpc_request *dcerpc_winreg_ReplaceKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_ReplaceKey *r);
NTSTATUS dcerpc_winreg_ReplaceKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_ReplaceKey *r);

struct rpc_request *dcerpc_winreg_RestoreKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_RestoreKey *r);
NTSTATUS dcerpc_winreg_RestoreKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_RestoreKey *r);

struct rpc_request *dcerpc_winreg_SaveKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_SaveKey *r);
NTSTATUS dcerpc_winreg_SaveKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_SaveKey *r);

struct rpc_request *dcerpc_winreg_SetKeySecurity_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_SetKeySecurity *r);
NTSTATUS dcerpc_winreg_SetKeySecurity(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_SetKeySecurity *r);

struct rpc_request *dcerpc_winreg_SetValue_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_SetValue *r);
NTSTATUS dcerpc_winreg_SetValue(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_SetValue *r);

struct rpc_request *dcerpc_winreg_UnLoadKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_UnLoadKey *r);
NTSTATUS dcerpc_winreg_UnLoadKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_UnLoadKey *r);

struct rpc_request *dcerpc_winreg_InitiateSystemShutdown_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_InitiateSystemShutdown *r);
NTSTATUS dcerpc_winreg_InitiateSystemShutdown(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_InitiateSystemShutdown *r);

struct rpc_request *dcerpc_winreg_AbortSystemShutdown_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_AbortSystemShutdown *r);
NTSTATUS dcerpc_winreg_AbortSystemShutdown(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_AbortSystemShutdown *r);

struct rpc_request *dcerpc_winreg_GetVersion_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_GetVersion *r);
NTSTATUS dcerpc_winreg_GetVersion(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_GetVersion *r);

struct rpc_request *dcerpc_winreg_OpenHKCC_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenHKCC *r);
NTSTATUS dcerpc_winreg_OpenHKCC(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenHKCC *r);

struct rpc_request *dcerpc_winreg_OpenHKDD_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenHKDD *r);
NTSTATUS dcerpc_winreg_OpenHKDD(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenHKDD *r);

struct rpc_request *dcerpc_winreg_QueryMultipleValues_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_QueryMultipleValues *r);
NTSTATUS dcerpc_winreg_QueryMultipleValues(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_QueryMultipleValues *r);

struct rpc_request *dcerpc_winreg_InitiateSystemShutdownEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_InitiateSystemShutdownEx *r);
NTSTATUS dcerpc_winreg_InitiateSystemShutdownEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_InitiateSystemShutdownEx *r);

struct rpc_request *dcerpc_winreg_SaveKeyEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_SaveKeyEx *r);
NTSTATUS dcerpc_winreg_SaveKeyEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_SaveKeyEx *r);

struct rpc_request *dcerpc_winreg_OpenHKPT_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenHKPT *r);
NTSTATUS dcerpc_winreg_OpenHKPT(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenHKPT *r);

struct rpc_request *dcerpc_winreg_OpenHKPN_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenHKPN *r);
NTSTATUS dcerpc_winreg_OpenHKPN(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_OpenHKPN *r);

struct rpc_request *dcerpc_winreg_QueryMultipleValues2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_QueryMultipleValues2 *r);
NTSTATUS dcerpc_winreg_QueryMultipleValues2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winreg_QueryMultipleValues2 *r);
#endif /* _HEADER_RPC_winreg */
