#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/netlogon.h"
#ifndef _HEADER_RPC_netlogon
#define _HEADER_RPC_netlogon

extern const struct dcerpc_interface_table dcerpc_table_netlogon;

struct rpc_request *dcerpc_netr_LogonUasLogon_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonUasLogon *r);
NTSTATUS dcerpc_netr_LogonUasLogon(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonUasLogon *r);

struct rpc_request *dcerpc_netr_LogonUasLogoff_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonUasLogoff *r);
NTSTATUS dcerpc_netr_LogonUasLogoff(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonUasLogoff *r);

struct rpc_request *dcerpc_netr_LogonSamLogon_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonSamLogon *r);
NTSTATUS dcerpc_netr_LogonSamLogon(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonSamLogon *r);

struct rpc_request *dcerpc_netr_LogonSamLogoff_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonSamLogoff *r);
NTSTATUS dcerpc_netr_LogonSamLogoff(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonSamLogoff *r);

struct rpc_request *dcerpc_netr_ServerReqChallenge_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_ServerReqChallenge *r);
NTSTATUS dcerpc_netr_ServerReqChallenge(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_ServerReqChallenge *r);

struct rpc_request *dcerpc_netr_ServerAuthenticate_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_ServerAuthenticate *r);
NTSTATUS dcerpc_netr_ServerAuthenticate(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_ServerAuthenticate *r);

struct rpc_request *dcerpc_netr_ServerPasswordSet_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_ServerPasswordSet *r);
NTSTATUS dcerpc_netr_ServerPasswordSet(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_ServerPasswordSet *r);

struct rpc_request *dcerpc_netr_DatabaseDeltas_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DatabaseDeltas *r);
NTSTATUS dcerpc_netr_DatabaseDeltas(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DatabaseDeltas *r);

struct rpc_request *dcerpc_netr_DatabaseSync_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DatabaseSync *r);
NTSTATUS dcerpc_netr_DatabaseSync(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DatabaseSync *r);

struct rpc_request *dcerpc_netr_AccountDeltas_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_AccountDeltas *r);
NTSTATUS dcerpc_netr_AccountDeltas(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_AccountDeltas *r);

struct rpc_request *dcerpc_netr_AccountSync_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_AccountSync *r);
NTSTATUS dcerpc_netr_AccountSync(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_AccountSync *r);

struct rpc_request *dcerpc_netr_GetDcName_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_GetDcName *r);
NTSTATUS dcerpc_netr_GetDcName(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_GetDcName *r);

struct rpc_request *dcerpc_netr_LogonControl_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonControl *r);
NTSTATUS dcerpc_netr_LogonControl(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonControl *r);

struct rpc_request *dcerpc_netr_GetAnyDCName_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_GetAnyDCName *r);
NTSTATUS dcerpc_netr_GetAnyDCName(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_GetAnyDCName *r);

struct rpc_request *dcerpc_netr_LogonControl2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonControl2 *r);
NTSTATUS dcerpc_netr_LogonControl2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonControl2 *r);

struct rpc_request *dcerpc_netr_ServerAuthenticate2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_ServerAuthenticate2 *r);
NTSTATUS dcerpc_netr_ServerAuthenticate2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_ServerAuthenticate2 *r);

struct rpc_request *dcerpc_netr_DatabaseSync2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DatabaseSync2 *r);
NTSTATUS dcerpc_netr_DatabaseSync2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DatabaseSync2 *r);

struct rpc_request *dcerpc_netr_DatabaseRedo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DatabaseRedo *r);
NTSTATUS dcerpc_netr_DatabaseRedo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DatabaseRedo *r);

struct rpc_request *dcerpc_netr_LogonControl2Ex_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonControl2Ex *r);
NTSTATUS dcerpc_netr_LogonControl2Ex(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonControl2Ex *r);

struct rpc_request *dcerpc_netr_NETRENUMERATETRUSTEDDOMAINS_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRENUMERATETRUSTEDDOMAINS *r);
NTSTATUS dcerpc_netr_NETRENUMERATETRUSTEDDOMAINS(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRENUMERATETRUSTEDDOMAINS *r);

struct rpc_request *dcerpc_netr_DsRGetDCName_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DsRGetDCName *r);
NTSTATUS dcerpc_netr_DsRGetDCName(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DsRGetDCName *r);

struct rpc_request *dcerpc_netr_NETRLOGONDUMMYROUTINE1_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRLOGONDUMMYROUTINE1 *r);
NTSTATUS dcerpc_netr_NETRLOGONDUMMYROUTINE1(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRLOGONDUMMYROUTINE1 *r);

struct rpc_request *dcerpc_netr_NETRLOGONSETSERVICEBITS_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRLOGONSETSERVICEBITS *r);
NTSTATUS dcerpc_netr_NETRLOGONSETSERVICEBITS(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRLOGONSETSERVICEBITS *r);

struct rpc_request *dcerpc_netr_NETRLOGONGETTRUSTRID_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRLOGONGETTRUSTRID *r);
NTSTATUS dcerpc_netr_NETRLOGONGETTRUSTRID(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRLOGONGETTRUSTRID *r);

struct rpc_request *dcerpc_netr_NETRLOGONCOMPUTESERVERDIGEST_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRLOGONCOMPUTESERVERDIGEST *r);
NTSTATUS dcerpc_netr_NETRLOGONCOMPUTESERVERDIGEST(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRLOGONCOMPUTESERVERDIGEST *r);

struct rpc_request *dcerpc_netr_NETRLOGONCOMPUTECLIENTDIGEST_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRLOGONCOMPUTECLIENTDIGEST *r);
NTSTATUS dcerpc_netr_NETRLOGONCOMPUTECLIENTDIGEST(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRLOGONCOMPUTECLIENTDIGEST *r);

struct rpc_request *dcerpc_netr_ServerAuthenticate3_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_ServerAuthenticate3 *r);
NTSTATUS dcerpc_netr_ServerAuthenticate3(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_ServerAuthenticate3 *r);

struct rpc_request *dcerpc_netr_DsRGetDCNameEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DsRGetDCNameEx *r);
NTSTATUS dcerpc_netr_DsRGetDCNameEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DsRGetDCNameEx *r);

struct rpc_request *dcerpc_netr_DsRGetSiteName_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DsRGetSiteName *r);
NTSTATUS dcerpc_netr_DsRGetSiteName(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DsRGetSiteName *r);

struct rpc_request *dcerpc_netr_LogonGetDomainInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonGetDomainInfo *r);
NTSTATUS dcerpc_netr_LogonGetDomainInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonGetDomainInfo *r);

struct rpc_request *dcerpc_netr_ServerPasswordSet2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_ServerPasswordSet2 *r);
NTSTATUS dcerpc_netr_ServerPasswordSet2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_ServerPasswordSet2 *r);

struct rpc_request *dcerpc_netr_NETRSERVERPASSWORDGET_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRSERVERPASSWORDGET *r);
NTSTATUS dcerpc_netr_NETRSERVERPASSWORDGET(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRSERVERPASSWORDGET *r);

struct rpc_request *dcerpc_netr_NETRLOGONSENDTOSAM_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRLOGONSENDTOSAM *r);
NTSTATUS dcerpc_netr_NETRLOGONSENDTOSAM(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRLOGONSENDTOSAM *r);

struct rpc_request *dcerpc_netr_DSRADDRESSTOSITENAMESW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DSRADDRESSTOSITENAMESW *r);
NTSTATUS dcerpc_netr_DSRADDRESSTOSITENAMESW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DSRADDRESSTOSITENAMESW *r);

struct rpc_request *dcerpc_netr_DsRGetDCNameEx2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DsRGetDCNameEx2 *r);
NTSTATUS dcerpc_netr_DsRGetDCNameEx2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DsRGetDCNameEx2 *r);

struct rpc_request *dcerpc_netr_NETRLOGONGETTIMESERVICEPARENTDOMAIN_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRLOGONGETTIMESERVICEPARENTDOMAIN *r);
NTSTATUS dcerpc_netr_NETRLOGONGETTIMESERVICEPARENTDOMAIN(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRLOGONGETTIMESERVICEPARENTDOMAIN *r);

struct rpc_request *dcerpc_netr_NETRENUMERATETRUSTEDDOMAINSEX_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRENUMERATETRUSTEDDOMAINSEX *r);
NTSTATUS dcerpc_netr_NETRENUMERATETRUSTEDDOMAINSEX(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRENUMERATETRUSTEDDOMAINSEX *r);

struct rpc_request *dcerpc_netr_DSRADDRESSTOSITENAMESEXW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DSRADDRESSTOSITENAMESEXW *r);
NTSTATUS dcerpc_netr_DSRADDRESSTOSITENAMESEXW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DSRADDRESSTOSITENAMESEXW *r);

struct rpc_request *dcerpc_netr_DSRGETDCSITECOVERAGEW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DSRGETDCSITECOVERAGEW *r);
NTSTATUS dcerpc_netr_DSRGETDCSITECOVERAGEW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DSRGETDCSITECOVERAGEW *r);

struct rpc_request *dcerpc_netr_LogonSamLogonEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonSamLogonEx *r);
NTSTATUS dcerpc_netr_LogonSamLogonEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonSamLogonEx *r);

struct rpc_request *dcerpc_netr_DsrEnumerateDomainTrusts_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DsrEnumerateDomainTrusts *r);
NTSTATUS dcerpc_netr_DsrEnumerateDomainTrusts(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DsrEnumerateDomainTrusts *r);

struct rpc_request *dcerpc_netr_DSRDEREGISTERDNSHOSTRECORDS_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DSRDEREGISTERDNSHOSTRECORDS *r);
NTSTATUS dcerpc_netr_DSRDEREGISTERDNSHOSTRECORDS(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DSRDEREGISTERDNSHOSTRECORDS *r);

struct rpc_request *dcerpc_netr_NETRSERVERTRUSTPASSWORDSGET_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRSERVERTRUSTPASSWORDSGET *r);
NTSTATUS dcerpc_netr_NETRSERVERTRUSTPASSWORDSGET(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRSERVERTRUSTPASSWORDSGET *r);

struct rpc_request *dcerpc_netr_DSRGETFORESTTRUSTINFORMATION_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DSRGETFORESTTRUSTINFORMATION *r);
NTSTATUS dcerpc_netr_DSRGETFORESTTRUSTINFORMATION(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_DSRGETFORESTTRUSTINFORMATION *r);

struct rpc_request *dcerpc_netr_NETRGETFORESTTRUSTINFORMATION_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRGETFORESTTRUSTINFORMATION *r);
NTSTATUS dcerpc_netr_NETRGETFORESTTRUSTINFORMATION(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRGETFORESTTRUSTINFORMATION *r);

struct rpc_request *dcerpc_netr_LogonSamLogonWithFlags_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonSamLogonWithFlags *r);
NTSTATUS dcerpc_netr_LogonSamLogonWithFlags(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_LogonSamLogonWithFlags *r);

struct rpc_request *dcerpc_netr_NETRSERVERGETTRUSTINFO_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRSERVERGETTRUSTINFO *r);
NTSTATUS dcerpc_netr_NETRSERVERGETTRUSTINFO(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct netr_NETRSERVERGETTRUSTINFO *r);
#endif /* _HEADER_RPC_netlogon */
