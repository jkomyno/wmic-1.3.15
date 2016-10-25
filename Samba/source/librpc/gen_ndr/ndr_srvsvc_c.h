#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/srvsvc.h"
#ifndef _HEADER_RPC_srvsvc
#define _HEADER_RPC_srvsvc

extern const struct dcerpc_interface_table dcerpc_table_srvsvc;

struct rpc_request *dcerpc_srvsvc_NetCharDevEnum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetCharDevEnum *r);
NTSTATUS dcerpc_srvsvc_NetCharDevEnum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetCharDevEnum *r);

struct rpc_request *dcerpc_srvsvc_NetCharDevGetInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetCharDevGetInfo *r);
NTSTATUS dcerpc_srvsvc_NetCharDevGetInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetCharDevGetInfo *r);

struct rpc_request *dcerpc_srvsvc_NetCharDevControl_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetCharDevControl *r);
NTSTATUS dcerpc_srvsvc_NetCharDevControl(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetCharDevControl *r);

struct rpc_request *dcerpc_srvsvc_NetCharDevQEnum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetCharDevQEnum *r);
NTSTATUS dcerpc_srvsvc_NetCharDevQEnum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetCharDevQEnum *r);

struct rpc_request *dcerpc_srvsvc_NetCharDevQGetInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetCharDevQGetInfo *r);
NTSTATUS dcerpc_srvsvc_NetCharDevQGetInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetCharDevQGetInfo *r);

struct rpc_request *dcerpc_srvsvc_NetCharDevQSetInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetCharDevQSetInfo *r);
NTSTATUS dcerpc_srvsvc_NetCharDevQSetInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetCharDevQSetInfo *r);

struct rpc_request *dcerpc_srvsvc_NetCharDevQPurge_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetCharDevQPurge *r);
NTSTATUS dcerpc_srvsvc_NetCharDevQPurge(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetCharDevQPurge *r);

struct rpc_request *dcerpc_srvsvc_NetCharDevQPurgeSelf_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetCharDevQPurgeSelf *r);
NTSTATUS dcerpc_srvsvc_NetCharDevQPurgeSelf(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetCharDevQPurgeSelf *r);

struct rpc_request *dcerpc_srvsvc_NetConnEnum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetConnEnum *r);
NTSTATUS dcerpc_srvsvc_NetConnEnum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetConnEnum *r);

struct rpc_request *dcerpc_srvsvc_NetFileEnum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetFileEnum *r);
NTSTATUS dcerpc_srvsvc_NetFileEnum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetFileEnum *r);

struct rpc_request *dcerpc_srvsvc_NetFileGetInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetFileGetInfo *r);
NTSTATUS dcerpc_srvsvc_NetFileGetInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetFileGetInfo *r);

struct rpc_request *dcerpc_srvsvc_NetFileClose_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetFileClose *r);
NTSTATUS dcerpc_srvsvc_NetFileClose(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetFileClose *r);

struct rpc_request *dcerpc_srvsvc_NetSessEnum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetSessEnum *r);
NTSTATUS dcerpc_srvsvc_NetSessEnum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetSessEnum *r);

struct rpc_request *dcerpc_srvsvc_NetSessDel_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetSessDel *r);
NTSTATUS dcerpc_srvsvc_NetSessDel(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetSessDel *r);

struct rpc_request *dcerpc_srvsvc_NetShareAdd_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareAdd *r);
NTSTATUS dcerpc_srvsvc_NetShareAdd(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareAdd *r);

struct rpc_request *dcerpc_srvsvc_NetShareEnumAll_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareEnumAll *r);
NTSTATUS dcerpc_srvsvc_NetShareEnumAll(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareEnumAll *r);

struct rpc_request *dcerpc_srvsvc_NetShareGetInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareGetInfo *r);
NTSTATUS dcerpc_srvsvc_NetShareGetInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareGetInfo *r);

struct rpc_request *dcerpc_srvsvc_NetShareSetInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareSetInfo *r);
NTSTATUS dcerpc_srvsvc_NetShareSetInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareSetInfo *r);

struct rpc_request *dcerpc_srvsvc_NetShareDel_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareDel *r);
NTSTATUS dcerpc_srvsvc_NetShareDel(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareDel *r);

struct rpc_request *dcerpc_srvsvc_NetShareDelSticky_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareDelSticky *r);
NTSTATUS dcerpc_srvsvc_NetShareDelSticky(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareDelSticky *r);

struct rpc_request *dcerpc_srvsvc_NetShareCheck_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareCheck *r);
NTSTATUS dcerpc_srvsvc_NetShareCheck(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareCheck *r);

struct rpc_request *dcerpc_srvsvc_NetSrvGetInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetSrvGetInfo *r);
NTSTATUS dcerpc_srvsvc_NetSrvGetInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetSrvGetInfo *r);

struct rpc_request *dcerpc_srvsvc_NetSrvSetInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetSrvSetInfo *r);
NTSTATUS dcerpc_srvsvc_NetSrvSetInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetSrvSetInfo *r);

struct rpc_request *dcerpc_srvsvc_NetDiskEnum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetDiskEnum *r);
NTSTATUS dcerpc_srvsvc_NetDiskEnum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetDiskEnum *r);

struct rpc_request *dcerpc_srvsvc_NetServerStatisticsGet_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetServerStatisticsGet *r);
NTSTATUS dcerpc_srvsvc_NetServerStatisticsGet(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetServerStatisticsGet *r);

struct rpc_request *dcerpc_srvsvc_NetTransportAdd_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetTransportAdd *r);
NTSTATUS dcerpc_srvsvc_NetTransportAdd(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetTransportAdd *r);

struct rpc_request *dcerpc_srvsvc_NetTransportEnum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetTransportEnum *r);
NTSTATUS dcerpc_srvsvc_NetTransportEnum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetTransportEnum *r);

struct rpc_request *dcerpc_srvsvc_NetTransportDel_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetTransportDel *r);
NTSTATUS dcerpc_srvsvc_NetTransportDel(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetTransportDel *r);

struct rpc_request *dcerpc_srvsvc_NetRemoteTOD_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetRemoteTOD *r);
NTSTATUS dcerpc_srvsvc_NetRemoteTOD(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetRemoteTOD *r);

struct rpc_request *dcerpc_srvsvc_NetSetServiceBits_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetSetServiceBits *r);
NTSTATUS dcerpc_srvsvc_NetSetServiceBits(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetSetServiceBits *r);

struct rpc_request *dcerpc_srvsvc_NetPathType_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetPathType *r);
NTSTATUS dcerpc_srvsvc_NetPathType(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetPathType *r);

struct rpc_request *dcerpc_srvsvc_NetPathCanonicalize_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetPathCanonicalize *r);
NTSTATUS dcerpc_srvsvc_NetPathCanonicalize(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetPathCanonicalize *r);

struct rpc_request *dcerpc_srvsvc_NetPathCompare_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetPathCompare *r);
NTSTATUS dcerpc_srvsvc_NetPathCompare(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetPathCompare *r);

struct rpc_request *dcerpc_srvsvc_NetNameValidate_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetNameValidate *r);
NTSTATUS dcerpc_srvsvc_NetNameValidate(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetNameValidate *r);

struct rpc_request *dcerpc_srvsvc_NETRPRNAMECANONICALIZE_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRPRNAMECANONICALIZE *r);
NTSTATUS dcerpc_srvsvc_NETRPRNAMECANONICALIZE(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRPRNAMECANONICALIZE *r);

struct rpc_request *dcerpc_srvsvc_NetPRNameCompare_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetPRNameCompare *r);
NTSTATUS dcerpc_srvsvc_NetPRNameCompare(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetPRNameCompare *r);

struct rpc_request *dcerpc_srvsvc_NetShareEnum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareEnum *r);
NTSTATUS dcerpc_srvsvc_NetShareEnum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareEnum *r);

struct rpc_request *dcerpc_srvsvc_NetShareDelStart_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareDelStart *r);
NTSTATUS dcerpc_srvsvc_NetShareDelStart(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareDelStart *r);

struct rpc_request *dcerpc_srvsvc_NetShareDelCommit_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareDelCommit *r);
NTSTATUS dcerpc_srvsvc_NetShareDelCommit(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetShareDelCommit *r);

struct rpc_request *dcerpc_srvsvc_NetGetFileSecurity_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetGetFileSecurity *r);
NTSTATUS dcerpc_srvsvc_NetGetFileSecurity(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetGetFileSecurity *r);

struct rpc_request *dcerpc_srvsvc_NetSetFileSecurity_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetSetFileSecurity *r);
NTSTATUS dcerpc_srvsvc_NetSetFileSecurity(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetSetFileSecurity *r);

struct rpc_request *dcerpc_srvsvc_NetServerTransportAddEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetServerTransportAddEx *r);
NTSTATUS dcerpc_srvsvc_NetServerTransportAddEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetServerTransportAddEx *r);

struct rpc_request *dcerpc_srvsvc_NetServerSetServiceBitsEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetServerSetServiceBitsEx *r);
NTSTATUS dcerpc_srvsvc_NetServerSetServiceBitsEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NetServerSetServiceBitsEx *r);

struct rpc_request *dcerpc_srvsvc_NETRDFSGETVERSION_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSGETVERSION *r);
NTSTATUS dcerpc_srvsvc_NETRDFSGETVERSION(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSGETVERSION *r);

struct rpc_request *dcerpc_srvsvc_NETRDFSCREATELOCALPARTITION_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSCREATELOCALPARTITION *r);
NTSTATUS dcerpc_srvsvc_NETRDFSCREATELOCALPARTITION(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSCREATELOCALPARTITION *r);

struct rpc_request *dcerpc_srvsvc_NETRDFSDELETELOCALPARTITION_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSDELETELOCALPARTITION *r);
NTSTATUS dcerpc_srvsvc_NETRDFSDELETELOCALPARTITION(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSDELETELOCALPARTITION *r);

struct rpc_request *dcerpc_srvsvc_NETRDFSSETLOCALVOLUMESTATE_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSSETLOCALVOLUMESTATE *r);
NTSTATUS dcerpc_srvsvc_NETRDFSSETLOCALVOLUMESTATE(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSSETLOCALVOLUMESTATE *r);

struct rpc_request *dcerpc_srvsvc_NETRDFSSETSERVERINFO_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSSETSERVERINFO *r);
NTSTATUS dcerpc_srvsvc_NETRDFSSETSERVERINFO(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSSETSERVERINFO *r);

struct rpc_request *dcerpc_srvsvc_NETRDFSCREATEEXITPOINT_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSCREATEEXITPOINT *r);
NTSTATUS dcerpc_srvsvc_NETRDFSCREATEEXITPOINT(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSCREATEEXITPOINT *r);

struct rpc_request *dcerpc_srvsvc_NETRDFSDELETEEXITPOINT_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSDELETEEXITPOINT *r);
NTSTATUS dcerpc_srvsvc_NETRDFSDELETEEXITPOINT(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSDELETEEXITPOINT *r);

struct rpc_request *dcerpc_srvsvc_NETRDFSMODIFYPREFIX_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSMODIFYPREFIX *r);
NTSTATUS dcerpc_srvsvc_NETRDFSMODIFYPREFIX(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSMODIFYPREFIX *r);

struct rpc_request *dcerpc_srvsvc_NETRDFSFIXLOCALVOLUME_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSFIXLOCALVOLUME *r);
NTSTATUS dcerpc_srvsvc_NETRDFSFIXLOCALVOLUME(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSFIXLOCALVOLUME *r);

struct rpc_request *dcerpc_srvsvc_NETRDFSMANAGERREPORTSITEINFO_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSMANAGERREPORTSITEINFO *r);
NTSTATUS dcerpc_srvsvc_NETRDFSMANAGERREPORTSITEINFO(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRDFSMANAGERREPORTSITEINFO *r);

struct rpc_request *dcerpc_srvsvc_NETRSERVERTRANSPORTDELEX_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRSERVERTRANSPORTDELEX *r);
NTSTATUS dcerpc_srvsvc_NETRSERVERTRANSPORTDELEX(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct srvsvc_NETRSERVERTRANSPORTDELEX *r);
#endif /* _HEADER_RPC_srvsvc */
