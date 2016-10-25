#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/samr.h"
#ifndef _HEADER_RPC_samr
#define _HEADER_RPC_samr

extern const struct dcerpc_interface_table dcerpc_table_samr;

struct rpc_request *dcerpc_samr_Connect_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_Connect *r);
NTSTATUS dcerpc_samr_Connect(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_Connect *r);

struct rpc_request *dcerpc_samr_Close_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_Close *r);
NTSTATUS dcerpc_samr_Close(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_Close *r);

struct rpc_request *dcerpc_samr_SetSecurity_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_SetSecurity *r);
NTSTATUS dcerpc_samr_SetSecurity(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_SetSecurity *r);

struct rpc_request *dcerpc_samr_QuerySecurity_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QuerySecurity *r);
NTSTATUS dcerpc_samr_QuerySecurity(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QuerySecurity *r);

struct rpc_request *dcerpc_samr_Shutdown_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_Shutdown *r);
NTSTATUS dcerpc_samr_Shutdown(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_Shutdown *r);

struct rpc_request *dcerpc_samr_LookupDomain_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_LookupDomain *r);
NTSTATUS dcerpc_samr_LookupDomain(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_LookupDomain *r);

struct rpc_request *dcerpc_samr_EnumDomains_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_EnumDomains *r);
NTSTATUS dcerpc_samr_EnumDomains(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_EnumDomains *r);

struct rpc_request *dcerpc_samr_OpenDomain_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_OpenDomain *r);
NTSTATUS dcerpc_samr_OpenDomain(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_OpenDomain *r);

struct rpc_request *dcerpc_samr_QueryDomainInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryDomainInfo *r);
NTSTATUS dcerpc_samr_QueryDomainInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryDomainInfo *r);

struct rpc_request *dcerpc_samr_SetDomainInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_SetDomainInfo *r);
NTSTATUS dcerpc_samr_SetDomainInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_SetDomainInfo *r);

struct rpc_request *dcerpc_samr_CreateDomainGroup_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_CreateDomainGroup *r);
NTSTATUS dcerpc_samr_CreateDomainGroup(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_CreateDomainGroup *r);

struct rpc_request *dcerpc_samr_EnumDomainGroups_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_EnumDomainGroups *r);
NTSTATUS dcerpc_samr_EnumDomainGroups(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_EnumDomainGroups *r);

struct rpc_request *dcerpc_samr_CreateUser_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_CreateUser *r);
NTSTATUS dcerpc_samr_CreateUser(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_CreateUser *r);

struct rpc_request *dcerpc_samr_EnumDomainUsers_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_EnumDomainUsers *r);
NTSTATUS dcerpc_samr_EnumDomainUsers(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_EnumDomainUsers *r);

struct rpc_request *dcerpc_samr_CreateDomAlias_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_CreateDomAlias *r);
NTSTATUS dcerpc_samr_CreateDomAlias(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_CreateDomAlias *r);

struct rpc_request *dcerpc_samr_EnumDomainAliases_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_EnumDomainAliases *r);
NTSTATUS dcerpc_samr_EnumDomainAliases(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_EnumDomainAliases *r);

struct rpc_request *dcerpc_samr_GetAliasMembership_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_GetAliasMembership *r);
NTSTATUS dcerpc_samr_GetAliasMembership(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_GetAliasMembership *r);

struct rpc_request *dcerpc_samr_LookupNames_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_LookupNames *r);
NTSTATUS dcerpc_samr_LookupNames(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_LookupNames *r);

struct rpc_request *dcerpc_samr_LookupRids_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_LookupRids *r);
NTSTATUS dcerpc_samr_LookupRids(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_LookupRids *r);

struct rpc_request *dcerpc_samr_OpenGroup_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_OpenGroup *r);
NTSTATUS dcerpc_samr_OpenGroup(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_OpenGroup *r);

struct rpc_request *dcerpc_samr_QueryGroupInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryGroupInfo *r);
NTSTATUS dcerpc_samr_QueryGroupInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryGroupInfo *r);

struct rpc_request *dcerpc_samr_SetGroupInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_SetGroupInfo *r);
NTSTATUS dcerpc_samr_SetGroupInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_SetGroupInfo *r);

struct rpc_request *dcerpc_samr_AddGroupMember_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_AddGroupMember *r);
NTSTATUS dcerpc_samr_AddGroupMember(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_AddGroupMember *r);

struct rpc_request *dcerpc_samr_DeleteDomainGroup_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_DeleteDomainGroup *r);
NTSTATUS dcerpc_samr_DeleteDomainGroup(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_DeleteDomainGroup *r);

struct rpc_request *dcerpc_samr_DeleteGroupMember_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_DeleteGroupMember *r);
NTSTATUS dcerpc_samr_DeleteGroupMember(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_DeleteGroupMember *r);

struct rpc_request *dcerpc_samr_QueryGroupMember_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryGroupMember *r);
NTSTATUS dcerpc_samr_QueryGroupMember(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryGroupMember *r);

struct rpc_request *dcerpc_samr_SetMemberAttributesOfGroup_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_SetMemberAttributesOfGroup *r);
NTSTATUS dcerpc_samr_SetMemberAttributesOfGroup(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_SetMemberAttributesOfGroup *r);

struct rpc_request *dcerpc_samr_OpenAlias_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_OpenAlias *r);
NTSTATUS dcerpc_samr_OpenAlias(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_OpenAlias *r);

struct rpc_request *dcerpc_samr_QueryAliasInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryAliasInfo *r);
NTSTATUS dcerpc_samr_QueryAliasInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryAliasInfo *r);

struct rpc_request *dcerpc_samr_SetAliasInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_SetAliasInfo *r);
NTSTATUS dcerpc_samr_SetAliasInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_SetAliasInfo *r);

struct rpc_request *dcerpc_samr_DeleteDomAlias_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_DeleteDomAlias *r);
NTSTATUS dcerpc_samr_DeleteDomAlias(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_DeleteDomAlias *r);

struct rpc_request *dcerpc_samr_AddAliasMember_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_AddAliasMember *r);
NTSTATUS dcerpc_samr_AddAliasMember(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_AddAliasMember *r);

struct rpc_request *dcerpc_samr_DeleteAliasMember_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_DeleteAliasMember *r);
NTSTATUS dcerpc_samr_DeleteAliasMember(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_DeleteAliasMember *r);

struct rpc_request *dcerpc_samr_GetMembersInAlias_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_GetMembersInAlias *r);
NTSTATUS dcerpc_samr_GetMembersInAlias(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_GetMembersInAlias *r);

struct rpc_request *dcerpc_samr_OpenUser_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_OpenUser *r);
NTSTATUS dcerpc_samr_OpenUser(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_OpenUser *r);

struct rpc_request *dcerpc_samr_DeleteUser_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_DeleteUser *r);
NTSTATUS dcerpc_samr_DeleteUser(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_DeleteUser *r);

struct rpc_request *dcerpc_samr_QueryUserInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryUserInfo *r);
NTSTATUS dcerpc_samr_QueryUserInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryUserInfo *r);

struct rpc_request *dcerpc_samr_SetUserInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_SetUserInfo *r);
NTSTATUS dcerpc_samr_SetUserInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_SetUserInfo *r);

struct rpc_request *dcerpc_samr_ChangePasswordUser_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_ChangePasswordUser *r);
NTSTATUS dcerpc_samr_ChangePasswordUser(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_ChangePasswordUser *r);

struct rpc_request *dcerpc_samr_GetGroupsForUser_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_GetGroupsForUser *r);
NTSTATUS dcerpc_samr_GetGroupsForUser(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_GetGroupsForUser *r);

struct rpc_request *dcerpc_samr_QueryDisplayInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryDisplayInfo *r);
NTSTATUS dcerpc_samr_QueryDisplayInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryDisplayInfo *r);

struct rpc_request *dcerpc_samr_GetDisplayEnumerationIndex_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_GetDisplayEnumerationIndex *r);
NTSTATUS dcerpc_samr_GetDisplayEnumerationIndex(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_GetDisplayEnumerationIndex *r);

struct rpc_request *dcerpc_samr_TestPrivateFunctionsDomain_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_TestPrivateFunctionsDomain *r);
NTSTATUS dcerpc_samr_TestPrivateFunctionsDomain(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_TestPrivateFunctionsDomain *r);

struct rpc_request *dcerpc_samr_TestPrivateFunctionsUser_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_TestPrivateFunctionsUser *r);
NTSTATUS dcerpc_samr_TestPrivateFunctionsUser(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_TestPrivateFunctionsUser *r);

struct rpc_request *dcerpc_samr_GetUserPwInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_GetUserPwInfo *r);
NTSTATUS dcerpc_samr_GetUserPwInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_GetUserPwInfo *r);

struct rpc_request *dcerpc_samr_RemoveMemberFromForeignDomain_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_RemoveMemberFromForeignDomain *r);
NTSTATUS dcerpc_samr_RemoveMemberFromForeignDomain(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_RemoveMemberFromForeignDomain *r);

struct rpc_request *dcerpc_samr_QueryDomainInfo2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryDomainInfo2 *r);
NTSTATUS dcerpc_samr_QueryDomainInfo2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryDomainInfo2 *r);

struct rpc_request *dcerpc_samr_QueryUserInfo2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryUserInfo2 *r);
NTSTATUS dcerpc_samr_QueryUserInfo2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryUserInfo2 *r);

struct rpc_request *dcerpc_samr_QueryDisplayInfo2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryDisplayInfo2 *r);
NTSTATUS dcerpc_samr_QueryDisplayInfo2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryDisplayInfo2 *r);

struct rpc_request *dcerpc_samr_GetDisplayEnumerationIndex2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_GetDisplayEnumerationIndex2 *r);
NTSTATUS dcerpc_samr_GetDisplayEnumerationIndex2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_GetDisplayEnumerationIndex2 *r);

struct rpc_request *dcerpc_samr_CreateUser2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_CreateUser2 *r);
NTSTATUS dcerpc_samr_CreateUser2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_CreateUser2 *r);

struct rpc_request *dcerpc_samr_QueryDisplayInfo3_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryDisplayInfo3 *r);
NTSTATUS dcerpc_samr_QueryDisplayInfo3(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_QueryDisplayInfo3 *r);

struct rpc_request *dcerpc_samr_AddMultipleMembersToAlias_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_AddMultipleMembersToAlias *r);
NTSTATUS dcerpc_samr_AddMultipleMembersToAlias(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_AddMultipleMembersToAlias *r);

struct rpc_request *dcerpc_samr_RemoveMultipleMembersFromAlias_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_RemoveMultipleMembersFromAlias *r);
NTSTATUS dcerpc_samr_RemoveMultipleMembersFromAlias(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_RemoveMultipleMembersFromAlias *r);

struct rpc_request *dcerpc_samr_OemChangePasswordUser2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_OemChangePasswordUser2 *r);
NTSTATUS dcerpc_samr_OemChangePasswordUser2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_OemChangePasswordUser2 *r);

struct rpc_request *dcerpc_samr_ChangePasswordUser2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_ChangePasswordUser2 *r);
NTSTATUS dcerpc_samr_ChangePasswordUser2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_ChangePasswordUser2 *r);

struct rpc_request *dcerpc_samr_GetDomPwInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_GetDomPwInfo *r);
NTSTATUS dcerpc_samr_GetDomPwInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_GetDomPwInfo *r);

struct rpc_request *dcerpc_samr_Connect2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_Connect2 *r);
NTSTATUS dcerpc_samr_Connect2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_Connect2 *r);

struct rpc_request *dcerpc_samr_SetUserInfo2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_SetUserInfo2 *r);
NTSTATUS dcerpc_samr_SetUserInfo2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_SetUserInfo2 *r);

struct rpc_request *dcerpc_samr_SetBootKeyInformation_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_SetBootKeyInformation *r);
NTSTATUS dcerpc_samr_SetBootKeyInformation(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_SetBootKeyInformation *r);

struct rpc_request *dcerpc_samr_GetBootKeyInformation_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_GetBootKeyInformation *r);
NTSTATUS dcerpc_samr_GetBootKeyInformation(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_GetBootKeyInformation *r);

struct rpc_request *dcerpc_samr_Connect3_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_Connect3 *r);
NTSTATUS dcerpc_samr_Connect3(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_Connect3 *r);

struct rpc_request *dcerpc_samr_Connect4_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_Connect4 *r);
NTSTATUS dcerpc_samr_Connect4(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_Connect4 *r);

struct rpc_request *dcerpc_samr_ChangePasswordUser3_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_ChangePasswordUser3 *r);
NTSTATUS dcerpc_samr_ChangePasswordUser3(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_ChangePasswordUser3 *r);

struct rpc_request *dcerpc_samr_Connect5_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_Connect5 *r);
NTSTATUS dcerpc_samr_Connect5(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_Connect5 *r);

struct rpc_request *dcerpc_samr_RidToSid_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_RidToSid *r);
NTSTATUS dcerpc_samr_RidToSid(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_RidToSid *r);

struct rpc_request *dcerpc_samr_SetDsrmPassword_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_SetDsrmPassword *r);
NTSTATUS dcerpc_samr_SetDsrmPassword(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_SetDsrmPassword *r);

struct rpc_request *dcerpc_samr_ValidatePassword_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_ValidatePassword *r);
NTSTATUS dcerpc_samr_ValidatePassword(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct samr_ValidatePassword *r);
#endif /* _HEADER_RPC_samr */
