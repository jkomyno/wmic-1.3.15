#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/wkssvc.h"
#ifndef _HEADER_RPC_wkssvc
#define _HEADER_RPC_wkssvc

extern const struct dcerpc_interface_table dcerpc_table_wkssvc;

struct rpc_request *dcerpc_wkssvc_NetWkstaGetInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetWkstaGetInfo *r);
NTSTATUS dcerpc_wkssvc_NetWkstaGetInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetWkstaGetInfo *r);

struct rpc_request *dcerpc_wkssvc_NetWkstaSetInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetWkstaSetInfo *r);
NTSTATUS dcerpc_wkssvc_NetWkstaSetInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetWkstaSetInfo *r);

struct rpc_request *dcerpc_wkssvc_NetWkstaEnumUsers_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetWkstaEnumUsers *r);
NTSTATUS dcerpc_wkssvc_NetWkstaEnumUsers(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetWkstaEnumUsers *r);

struct rpc_request *dcerpc_WKSSVC_NETRWKSTAUSERGETINFO_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWKSTAUSERGETINFO *r);
NTSTATUS dcerpc_WKSSVC_NETRWKSTAUSERGETINFO(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWKSTAUSERGETINFO *r);

struct rpc_request *dcerpc_WKSSVC_NETRWKSTAUSERSETINFO_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWKSTAUSERSETINFO *r);
NTSTATUS dcerpc_WKSSVC_NETRWKSTAUSERSETINFO(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWKSTAUSERSETINFO *r);

struct rpc_request *dcerpc_wkssvc_NetWkstaTransportEnum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetWkstaTransportEnum *r);
NTSTATUS dcerpc_wkssvc_NetWkstaTransportEnum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetWkstaTransportEnum *r);

struct rpc_request *dcerpc_WKSSVC_NETRWKSTATRANSPORTADD_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWKSTATRANSPORTADD *r);
NTSTATUS dcerpc_WKSSVC_NETRWKSTATRANSPORTADD(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWKSTATRANSPORTADD *r);

struct rpc_request *dcerpc_WKSSVC_NETRWKSTATRANSPORTDEL_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWKSTATRANSPORTDEL *r);
NTSTATUS dcerpc_WKSSVC_NETRWKSTATRANSPORTDEL(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWKSTATRANSPORTDEL *r);

struct rpc_request *dcerpc_WKSSVC_NETRUSEADD_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUSEADD *r);
NTSTATUS dcerpc_WKSSVC_NETRUSEADD(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUSEADD *r);

struct rpc_request *dcerpc_WKSSVC_NETRUSEGETINFO_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUSEGETINFO *r);
NTSTATUS dcerpc_WKSSVC_NETRUSEGETINFO(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUSEGETINFO *r);

struct rpc_request *dcerpc_WKSSVC_NETRUSEDEL_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUSEDEL *r);
NTSTATUS dcerpc_WKSSVC_NETRUSEDEL(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUSEDEL *r);

struct rpc_request *dcerpc_WKSSVC_NETRUSEENUM_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUSEENUM *r);
NTSTATUS dcerpc_WKSSVC_NETRUSEENUM(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUSEENUM *r);

struct rpc_request *dcerpc_WKSSVC_NETRMESSAGEBUFFERSEND_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRMESSAGEBUFFERSEND *r);
NTSTATUS dcerpc_WKSSVC_NETRMESSAGEBUFFERSEND(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRMESSAGEBUFFERSEND *r);

struct rpc_request *dcerpc_WKSSVC_NETRWORKSTATIONSTATISTICSGET_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWORKSTATIONSTATISTICSGET *r);
NTSTATUS dcerpc_WKSSVC_NETRWORKSTATIONSTATISTICSGET(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRWORKSTATIONSTATISTICSGET *r);

struct rpc_request *dcerpc_WKSSVC_NETRLOGONDOMAINNAMEADD_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRLOGONDOMAINNAMEADD *r);
NTSTATUS dcerpc_WKSSVC_NETRLOGONDOMAINNAMEADD(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRLOGONDOMAINNAMEADD *r);

struct rpc_request *dcerpc_WKSSVC_NETRLOGONDOMAINNAMEDEL_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRLOGONDOMAINNAMEDEL *r);
NTSTATUS dcerpc_WKSSVC_NETRLOGONDOMAINNAMEDEL(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRLOGONDOMAINNAMEDEL *r);

struct rpc_request *dcerpc_WKSSVC_NETRJOINDOMAIN_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRJOINDOMAIN *r);
NTSTATUS dcerpc_WKSSVC_NETRJOINDOMAIN(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRJOINDOMAIN *r);

struct rpc_request *dcerpc_WKSSVC_NETRUNJOINDOMAIN_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUNJOINDOMAIN *r);
NTSTATUS dcerpc_WKSSVC_NETRUNJOINDOMAIN(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRUNJOINDOMAIN *r);

struct rpc_request *dcerpc_WKSSVC_NETRRENAMEMACHINEINDOMAIN_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRRENAMEMACHINEINDOMAIN *r);
NTSTATUS dcerpc_WKSSVC_NETRRENAMEMACHINEINDOMAIN(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRRENAMEMACHINEINDOMAIN *r);

struct rpc_request *dcerpc_WKSSVC_NETRVALIDATENAME_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRVALIDATENAME *r);
NTSTATUS dcerpc_WKSSVC_NETRVALIDATENAME(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRVALIDATENAME *r);

struct rpc_request *dcerpc_WKSSVC_NETRGETJOININFORMATION_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRGETJOININFORMATION *r);
NTSTATUS dcerpc_WKSSVC_NETRGETJOININFORMATION(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRGETJOININFORMATION *r);

struct rpc_request *dcerpc_WKSSVC_NETRGETJOINABLEOUS_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRGETJOINABLEOUS *r);
NTSTATUS dcerpc_WKSSVC_NETRGETJOINABLEOUS(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRGETJOINABLEOUS *r);

struct rpc_request *dcerpc_wkssvc_NetrJoinDomain2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrJoinDomain2 *r);
NTSTATUS dcerpc_wkssvc_NetrJoinDomain2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrJoinDomain2 *r);

struct rpc_request *dcerpc_wkssvc_NetrUnjoinDomain2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrUnjoinDomain2 *r);
NTSTATUS dcerpc_wkssvc_NetrUnjoinDomain2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrUnjoinDomain2 *r);

struct rpc_request *dcerpc_wkssvc_NetrRenameMachineInDomain2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrRenameMachineInDomain2 *r);
NTSTATUS dcerpc_wkssvc_NetrRenameMachineInDomain2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrRenameMachineInDomain2 *r);

struct rpc_request *dcerpc_WKSSVC_NETRVALIDATENAME2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRVALIDATENAME2 *r);
NTSTATUS dcerpc_WKSSVC_NETRVALIDATENAME2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRVALIDATENAME2 *r);

struct rpc_request *dcerpc_WKSSVC_NETRGETJOINABLEOUS2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRGETJOINABLEOUS2 *r);
NTSTATUS dcerpc_WKSSVC_NETRGETJOINABLEOUS2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRGETJOINABLEOUS2 *r);

struct rpc_request *dcerpc_wkssvc_NetrAddAlternateComputerName_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrAddAlternateComputerName *r);
NTSTATUS dcerpc_wkssvc_NetrAddAlternateComputerName(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrAddAlternateComputerName *r);

struct rpc_request *dcerpc_wkssvc_NetrRemoveAlternateComputerName_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrRemoveAlternateComputerName *r);
NTSTATUS dcerpc_wkssvc_NetrRemoveAlternateComputerName(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct wkssvc_NetrRemoveAlternateComputerName *r);

struct rpc_request *dcerpc_WKSSVC_NETRSETPRIMARYCOMPUTERNAME_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRSETPRIMARYCOMPUTERNAME *r);
NTSTATUS dcerpc_WKSSVC_NETRSETPRIMARYCOMPUTERNAME(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRSETPRIMARYCOMPUTERNAME *r);

struct rpc_request *dcerpc_WKSSVC_NETRENUMERATECOMPUTERNAMES_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRENUMERATECOMPUTERNAMES *r);
NTSTATUS dcerpc_WKSSVC_NETRENUMERATECOMPUTERNAMES(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WKSSVC_NETRENUMERATECOMPUTERNAMES *r);
#endif /* _HEADER_RPC_wkssvc */
