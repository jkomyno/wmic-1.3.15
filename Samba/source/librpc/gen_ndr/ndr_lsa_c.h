#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/lsa.h"
#ifndef _HEADER_RPC_lsarpc
#define _HEADER_RPC_lsarpc

extern const struct dcerpc_interface_table dcerpc_table_lsarpc;

struct rpc_request *dcerpc_lsa_Close_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_Close *r);
NTSTATUS dcerpc_lsa_Close(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_Close *r);

struct rpc_request *dcerpc_lsa_Delete_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_Delete *r);
NTSTATUS dcerpc_lsa_Delete(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_Delete *r);

struct rpc_request *dcerpc_lsa_EnumPrivs_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_EnumPrivs *r);
NTSTATUS dcerpc_lsa_EnumPrivs(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_EnumPrivs *r);

struct rpc_request *dcerpc_lsa_QuerySecurity_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_QuerySecurity *r);
NTSTATUS dcerpc_lsa_QuerySecurity(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_QuerySecurity *r);

struct rpc_request *dcerpc_lsa_SetSecObj_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetSecObj *r);
NTSTATUS dcerpc_lsa_SetSecObj(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetSecObj *r);

struct rpc_request *dcerpc_lsa_ChangePassword_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_ChangePassword *r);
NTSTATUS dcerpc_lsa_ChangePassword(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_ChangePassword *r);

struct rpc_request *dcerpc_lsa_OpenPolicy_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_OpenPolicy *r);
NTSTATUS dcerpc_lsa_OpenPolicy(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_OpenPolicy *r);

struct rpc_request *dcerpc_lsa_QueryInfoPolicy_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_QueryInfoPolicy *r);
NTSTATUS dcerpc_lsa_QueryInfoPolicy(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_QueryInfoPolicy *r);

struct rpc_request *dcerpc_lsa_SetInfoPolicy_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetInfoPolicy *r);
NTSTATUS dcerpc_lsa_SetInfoPolicy(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetInfoPolicy *r);

struct rpc_request *dcerpc_lsa_ClearAuditLog_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_ClearAuditLog *r);
NTSTATUS dcerpc_lsa_ClearAuditLog(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_ClearAuditLog *r);

struct rpc_request *dcerpc_lsa_CreateAccount_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CreateAccount *r);
NTSTATUS dcerpc_lsa_CreateAccount(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CreateAccount *r);

struct rpc_request *dcerpc_lsa_EnumAccounts_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_EnumAccounts *r);
NTSTATUS dcerpc_lsa_EnumAccounts(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_EnumAccounts *r);

struct rpc_request *dcerpc_lsa_CreateTrustedDomain_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CreateTrustedDomain *r);
NTSTATUS dcerpc_lsa_CreateTrustedDomain(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CreateTrustedDomain *r);

struct rpc_request *dcerpc_lsa_EnumTrustDom_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_EnumTrustDom *r);
NTSTATUS dcerpc_lsa_EnumTrustDom(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_EnumTrustDom *r);

struct rpc_request *dcerpc_lsa_LookupNames_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupNames *r);
NTSTATUS dcerpc_lsa_LookupNames(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupNames *r);

struct rpc_request *dcerpc_lsa_LookupSids_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupSids *r);
NTSTATUS dcerpc_lsa_LookupSids(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupSids *r);

struct rpc_request *dcerpc_lsa_CreateSecret_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CreateSecret *r);
NTSTATUS dcerpc_lsa_CreateSecret(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CreateSecret *r);

struct rpc_request *dcerpc_lsa_OpenAccount_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_OpenAccount *r);
NTSTATUS dcerpc_lsa_OpenAccount(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_OpenAccount *r);

struct rpc_request *dcerpc_lsa_EnumPrivsAccount_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_EnumPrivsAccount *r);
NTSTATUS dcerpc_lsa_EnumPrivsAccount(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_EnumPrivsAccount *r);

struct rpc_request *dcerpc_lsa_AddPrivilegesToAccount_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_AddPrivilegesToAccount *r);
NTSTATUS dcerpc_lsa_AddPrivilegesToAccount(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_AddPrivilegesToAccount *r);

struct rpc_request *dcerpc_lsa_RemovePrivilegesFromAccount_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_RemovePrivilegesFromAccount *r);
NTSTATUS dcerpc_lsa_RemovePrivilegesFromAccount(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_RemovePrivilegesFromAccount *r);

struct rpc_request *dcerpc_lsa_GetQuotasForAccount_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_GetQuotasForAccount *r);
NTSTATUS dcerpc_lsa_GetQuotasForAccount(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_GetQuotasForAccount *r);

struct rpc_request *dcerpc_lsa_SetQuotasForAccount_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetQuotasForAccount *r);
NTSTATUS dcerpc_lsa_SetQuotasForAccount(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetQuotasForAccount *r);

struct rpc_request *dcerpc_lsa_GetSystemAccessAccount_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_GetSystemAccessAccount *r);
NTSTATUS dcerpc_lsa_GetSystemAccessAccount(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_GetSystemAccessAccount *r);

struct rpc_request *dcerpc_lsa_SetSystemAccessAccount_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetSystemAccessAccount *r);
NTSTATUS dcerpc_lsa_SetSystemAccessAccount(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetSystemAccessAccount *r);

struct rpc_request *dcerpc_lsa_OpenTrustedDomain_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_OpenTrustedDomain *r);
NTSTATUS dcerpc_lsa_OpenTrustedDomain(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_OpenTrustedDomain *r);

struct rpc_request *dcerpc_lsa_QueryTrustedDomainInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_QueryTrustedDomainInfo *r);
NTSTATUS dcerpc_lsa_QueryTrustedDomainInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_QueryTrustedDomainInfo *r);

struct rpc_request *dcerpc_lsa_SetInformationTrustedDomain_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetInformationTrustedDomain *r);
NTSTATUS dcerpc_lsa_SetInformationTrustedDomain(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetInformationTrustedDomain *r);

struct rpc_request *dcerpc_lsa_OpenSecret_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_OpenSecret *r);
NTSTATUS dcerpc_lsa_OpenSecret(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_OpenSecret *r);

struct rpc_request *dcerpc_lsa_SetSecret_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetSecret *r);
NTSTATUS dcerpc_lsa_SetSecret(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetSecret *r);

struct rpc_request *dcerpc_lsa_QuerySecret_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_QuerySecret *r);
NTSTATUS dcerpc_lsa_QuerySecret(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_QuerySecret *r);

struct rpc_request *dcerpc_lsa_LookupPrivValue_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupPrivValue *r);
NTSTATUS dcerpc_lsa_LookupPrivValue(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupPrivValue *r);

struct rpc_request *dcerpc_lsa_LookupPrivName_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupPrivName *r);
NTSTATUS dcerpc_lsa_LookupPrivName(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupPrivName *r);

struct rpc_request *dcerpc_lsa_LookupPrivDisplayName_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupPrivDisplayName *r);
NTSTATUS dcerpc_lsa_LookupPrivDisplayName(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupPrivDisplayName *r);

struct rpc_request *dcerpc_lsa_DeleteObject_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_DeleteObject *r);
NTSTATUS dcerpc_lsa_DeleteObject(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_DeleteObject *r);

struct rpc_request *dcerpc_lsa_EnumAccountsWithUserRight_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_EnumAccountsWithUserRight *r);
NTSTATUS dcerpc_lsa_EnumAccountsWithUserRight(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_EnumAccountsWithUserRight *r);

struct rpc_request *dcerpc_lsa_EnumAccountRights_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_EnumAccountRights *r);
NTSTATUS dcerpc_lsa_EnumAccountRights(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_EnumAccountRights *r);

struct rpc_request *dcerpc_lsa_AddAccountRights_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_AddAccountRights *r);
NTSTATUS dcerpc_lsa_AddAccountRights(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_AddAccountRights *r);

struct rpc_request *dcerpc_lsa_RemoveAccountRights_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_RemoveAccountRights *r);
NTSTATUS dcerpc_lsa_RemoveAccountRights(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_RemoveAccountRights *r);

struct rpc_request *dcerpc_lsa_QueryTrustedDomainInfoBySid_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_QueryTrustedDomainInfoBySid *r);
NTSTATUS dcerpc_lsa_QueryTrustedDomainInfoBySid(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_QueryTrustedDomainInfoBySid *r);

struct rpc_request *dcerpc_lsa_SetTrustedDomainInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetTrustedDomainInfo *r);
NTSTATUS dcerpc_lsa_SetTrustedDomainInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetTrustedDomainInfo *r);

struct rpc_request *dcerpc_lsa_DeleteTrustedDomain_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_DeleteTrustedDomain *r);
NTSTATUS dcerpc_lsa_DeleteTrustedDomain(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_DeleteTrustedDomain *r);

struct rpc_request *dcerpc_lsa_StorePrivateData_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_StorePrivateData *r);
NTSTATUS dcerpc_lsa_StorePrivateData(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_StorePrivateData *r);

struct rpc_request *dcerpc_lsa_RetrievePrivateData_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_RetrievePrivateData *r);
NTSTATUS dcerpc_lsa_RetrievePrivateData(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_RetrievePrivateData *r);

struct rpc_request *dcerpc_lsa_OpenPolicy2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_OpenPolicy2 *r);
NTSTATUS dcerpc_lsa_OpenPolicy2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_OpenPolicy2 *r);

struct rpc_request *dcerpc_lsa_GetUserName_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_GetUserName *r);
NTSTATUS dcerpc_lsa_GetUserName(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_GetUserName *r);

struct rpc_request *dcerpc_lsa_QueryInfoPolicy2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_QueryInfoPolicy2 *r);
NTSTATUS dcerpc_lsa_QueryInfoPolicy2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_QueryInfoPolicy2 *r);

struct rpc_request *dcerpc_lsa_SetInfoPolicy2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetInfoPolicy2 *r);
NTSTATUS dcerpc_lsa_SetInfoPolicy2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetInfoPolicy2 *r);

struct rpc_request *dcerpc_lsa_QueryTrustedDomainInfoByName_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_QueryTrustedDomainInfoByName *r);
NTSTATUS dcerpc_lsa_QueryTrustedDomainInfoByName(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_QueryTrustedDomainInfoByName *r);

struct rpc_request *dcerpc_lsa_SetTrustedDomainInfoByName_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetTrustedDomainInfoByName *r);
NTSTATUS dcerpc_lsa_SetTrustedDomainInfoByName(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetTrustedDomainInfoByName *r);

struct rpc_request *dcerpc_lsa_EnumTrustedDomainsEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_EnumTrustedDomainsEx *r);
NTSTATUS dcerpc_lsa_EnumTrustedDomainsEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_EnumTrustedDomainsEx *r);

struct rpc_request *dcerpc_lsa_CreateTrustedDomainEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CreateTrustedDomainEx *r);
NTSTATUS dcerpc_lsa_CreateTrustedDomainEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CreateTrustedDomainEx *r);

struct rpc_request *dcerpc_lsa_CloseTrustedDomainEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CloseTrustedDomainEx *r);
NTSTATUS dcerpc_lsa_CloseTrustedDomainEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CloseTrustedDomainEx *r);

struct rpc_request *dcerpc_lsa_QueryDomainInformationPolicy_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_QueryDomainInformationPolicy *r);
NTSTATUS dcerpc_lsa_QueryDomainInformationPolicy(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_QueryDomainInformationPolicy *r);

struct rpc_request *dcerpc_lsa_SetDomainInformationPolicy_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetDomainInformationPolicy *r);
NTSTATUS dcerpc_lsa_SetDomainInformationPolicy(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_SetDomainInformationPolicy *r);

struct rpc_request *dcerpc_lsa_OpenTrustedDomainByName_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_OpenTrustedDomainByName *r);
NTSTATUS dcerpc_lsa_OpenTrustedDomainByName(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_OpenTrustedDomainByName *r);

struct rpc_request *dcerpc_lsa_TestCall_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_TestCall *r);
NTSTATUS dcerpc_lsa_TestCall(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_TestCall *r);

struct rpc_request *dcerpc_lsa_LookupSids2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupSids2 *r);
NTSTATUS dcerpc_lsa_LookupSids2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupSids2 *r);

struct rpc_request *dcerpc_lsa_LookupNames2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupNames2 *r);
NTSTATUS dcerpc_lsa_LookupNames2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupNames2 *r);

struct rpc_request *dcerpc_lsa_CreateTrustedDomainEx2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CreateTrustedDomainEx2 *r);
NTSTATUS dcerpc_lsa_CreateTrustedDomainEx2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CreateTrustedDomainEx2 *r);

struct rpc_request *dcerpc_lsa_CREDRWRITE_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRWRITE *r);
NTSTATUS dcerpc_lsa_CREDRWRITE(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRWRITE *r);

struct rpc_request *dcerpc_lsa_CREDRREAD_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRREAD *r);
NTSTATUS dcerpc_lsa_CREDRREAD(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRREAD *r);

struct rpc_request *dcerpc_lsa_CREDRENUMERATE_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRENUMERATE *r);
NTSTATUS dcerpc_lsa_CREDRENUMERATE(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRENUMERATE *r);

struct rpc_request *dcerpc_lsa_CREDRWRITEDOMAINCREDENTIALS_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRWRITEDOMAINCREDENTIALS *r);
NTSTATUS dcerpc_lsa_CREDRWRITEDOMAINCREDENTIALS(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRWRITEDOMAINCREDENTIALS *r);

struct rpc_request *dcerpc_lsa_CREDRREADDOMAINCREDENTIALS_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRREADDOMAINCREDENTIALS *r);
NTSTATUS dcerpc_lsa_CREDRREADDOMAINCREDENTIALS(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRREADDOMAINCREDENTIALS *r);

struct rpc_request *dcerpc_lsa_CREDRDELETE_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRDELETE *r);
NTSTATUS dcerpc_lsa_CREDRDELETE(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRDELETE *r);

struct rpc_request *dcerpc_lsa_CREDRGETTARGETINFO_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRGETTARGETINFO *r);
NTSTATUS dcerpc_lsa_CREDRGETTARGETINFO(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRGETTARGETINFO *r);

struct rpc_request *dcerpc_lsa_CREDRPROFILELOADED_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRPROFILELOADED *r);
NTSTATUS dcerpc_lsa_CREDRPROFILELOADED(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRPROFILELOADED *r);

struct rpc_request *dcerpc_lsa_LookupNames3_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupNames3 *r);
NTSTATUS dcerpc_lsa_LookupNames3(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupNames3 *r);

struct rpc_request *dcerpc_lsa_CREDRGETSESSIONTYPES_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRGETSESSIONTYPES *r);
NTSTATUS dcerpc_lsa_CREDRGETSESSIONTYPES(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRGETSESSIONTYPES *r);

struct rpc_request *dcerpc_lsa_LSARREGISTERAUDITEVENT_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LSARREGISTERAUDITEVENT *r);
NTSTATUS dcerpc_lsa_LSARREGISTERAUDITEVENT(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LSARREGISTERAUDITEVENT *r);

struct rpc_request *dcerpc_lsa_LSARGENAUDITEVENT_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LSARGENAUDITEVENT *r);
NTSTATUS dcerpc_lsa_LSARGENAUDITEVENT(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LSARGENAUDITEVENT *r);

struct rpc_request *dcerpc_lsa_LSARUNREGISTERAUDITEVENT_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LSARUNREGISTERAUDITEVENT *r);
NTSTATUS dcerpc_lsa_LSARUNREGISTERAUDITEVENT(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LSARUNREGISTERAUDITEVENT *r);

struct rpc_request *dcerpc_lsa_LSARQUERYFORESTTRUSTINFORMATION_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LSARQUERYFORESTTRUSTINFORMATION *r);
NTSTATUS dcerpc_lsa_LSARQUERYFORESTTRUSTINFORMATION(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LSARQUERYFORESTTRUSTINFORMATION *r);

struct rpc_request *dcerpc_lsa_LSARSETFORESTTRUSTINFORMATION_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LSARSETFORESTTRUSTINFORMATION *r);
NTSTATUS dcerpc_lsa_LSARSETFORESTTRUSTINFORMATION(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LSARSETFORESTTRUSTINFORMATION *r);

struct rpc_request *dcerpc_lsa_CREDRRENAME_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRRENAME *r);
NTSTATUS dcerpc_lsa_CREDRRENAME(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_CREDRRENAME *r);

struct rpc_request *dcerpc_lsa_LookupSids3_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupSids3 *r);
NTSTATUS dcerpc_lsa_LookupSids3(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupSids3 *r);

struct rpc_request *dcerpc_lsa_LookupNames4_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupNames4 *r);
NTSTATUS dcerpc_lsa_LookupNames4(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LookupNames4 *r);

struct rpc_request *dcerpc_lsa_LSAROPENPOLICYSCE_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LSAROPENPOLICYSCE *r);
NTSTATUS dcerpc_lsa_LSAROPENPOLICYSCE(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LSAROPENPOLICYSCE *r);

struct rpc_request *dcerpc_lsa_LSARADTREGISTERSECURITYEVENTSOURCE_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LSARADTREGISTERSECURITYEVENTSOURCE *r);
NTSTATUS dcerpc_lsa_LSARADTREGISTERSECURITYEVENTSOURCE(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LSARADTREGISTERSECURITYEVENTSOURCE *r);

struct rpc_request *dcerpc_lsa_LSARADTUNREGISTERSECURITYEVENTSOURCE_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LSARADTUNREGISTERSECURITYEVENTSOURCE *r);
NTSTATUS dcerpc_lsa_LSARADTUNREGISTERSECURITYEVENTSOURCE(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LSARADTUNREGISTERSECURITYEVENTSOURCE *r);

struct rpc_request *dcerpc_lsa_LSARADTREPORTSECURITYEVENT_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LSARADTREPORTSECURITYEVENT *r);
NTSTATUS dcerpc_lsa_LSARADTREPORTSECURITYEVENT(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct lsa_LSARADTREPORTSECURITYEVENT *r);
#endif /* _HEADER_RPC_lsarpc */
