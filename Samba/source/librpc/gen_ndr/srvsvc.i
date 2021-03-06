/* This file is autogenerated by pidl. DO NOT EDIT */
%module srvsvc

%{
#include "includes.h"
#include "auth/credentials/credentials.h"
#include "librpc/gen_ndr/ndr_srvsvc_c.h"
#include "librpc/gen_ndr/srvsvc.h"
%}
%import "samba.i"

%inline {
void ntstatus_exception(NTSTATUS status)
{
	/* FIXME */
}
}

%types(srvsvc_PlatformId);


%inline {
struct srvsvc { struct dcerpc_pipe *pipe; };
}

%extend srvsvc {
	srvsvc (const char *binding, struct cli_credentials *cred = NULL, TALLOC_CTX *mem_ctx = NULL, struct event_context *event = NULL)
	{
		struct srvsvc *ret = talloc(mem_ctx, struct srvsvc);
		NTSTATUS status;
		
		status = dcerpc_pipe_connect(mem_ctx, &ret->pipe, binding, &dcerpc_table_srvsvc, cred, event);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return NULL;
		}
		
		return ret;
	}
	
	~srvsvc() {
		talloc_free(self);
	}
	
	/* srvsvc_NetCharDevEnum */
	WERROR NetCharDevEnum(const char *server_unc, uint32_t level, union srvsvc_NetCharDevCtr ctr, uint32_t max_buffer, uint32_t totalentries, uint32_t *resume_handle, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetCharDevEnum r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.level = level;
		r.in.ctr = ctr;
		r.in.max_buffer = max_buffer;
		r.in.resume_handle = resume_handle;
		
		status = dcerpc_srvsvc_NetCharDevEnum(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: level [out] argument is not a pointer */
		*level = *r.out.level;
		/* FIXME: ctr [out] argument is not a pointer */
		*ctr = *r.out.ctr;
		/* FIXME: totalentries [out] argument is not a pointer */
		*totalentries = *r.out.totalentries;
		*resume_handle = *r.out.resume_handle;
		return r.out.result;
	}
	
	/* srvsvc_NetCharDevGetInfo */
	WERROR NetCharDevGetInfo(const char *server_unc, const char *device_name, uint32_t level, union srvsvc_NetCharDevInfo info, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetCharDevGetInfo r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.device_name = device_name;
		r.in.level = level;
		
		status = dcerpc_srvsvc_NetCharDevGetInfo(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: info [out] argument is not a pointer */
		*info = *r.out.info;
		return r.out.result;
	}
	
	/* srvsvc_NetCharDevControl */
	WERROR NetCharDevControl(const char *server_unc, const char *device_name, uint32_t opcode, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetCharDevControl r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.device_name = device_name;
		r.in.opcode = opcode;
		
		status = dcerpc_srvsvc_NetCharDevControl(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NetCharDevQEnum */
	WERROR NetCharDevQEnum(const char *server_unc, const char *user, uint32_t level, union srvsvc_NetCharDevQCtr ctr, uint32_t max_buffer, uint32_t totalentries, uint32_t *resume_handle, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetCharDevQEnum r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.user = user;
		r.in.level = level;
		r.in.ctr = ctr;
		r.in.max_buffer = max_buffer;
		r.in.resume_handle = resume_handle;
		
		status = dcerpc_srvsvc_NetCharDevQEnum(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: level [out] argument is not a pointer */
		*level = *r.out.level;
		/* FIXME: ctr [out] argument is not a pointer */
		*ctr = *r.out.ctr;
		/* FIXME: totalentries [out] argument is not a pointer */
		*totalentries = *r.out.totalentries;
		*resume_handle = *r.out.resume_handle;
		return r.out.result;
	}
	
	/* srvsvc_NetCharDevQGetInfo */
	WERROR NetCharDevQGetInfo(const char *server_unc, const char *queue_name, const char *user, uint32_t level, union srvsvc_NetCharDevQInfo info, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetCharDevQGetInfo r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.queue_name = queue_name;
		r.in.user = user;
		r.in.level = level;
		
		status = dcerpc_srvsvc_NetCharDevQGetInfo(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: info [out] argument is not a pointer */
		*info = *r.out.info;
		return r.out.result;
	}
	
	/* srvsvc_NetCharDevQSetInfo */
	WERROR NetCharDevQSetInfo(const char *server_unc, const char *queue_name, uint32_t level, union srvsvc_NetCharDevQInfo info, uint32_t *parm_error, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetCharDevQSetInfo r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.queue_name = queue_name;
		r.in.level = level;
		r.in.info = info;
		r.in.parm_error = parm_error;
		
		status = dcerpc_srvsvc_NetCharDevQSetInfo(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		*parm_error = *r.out.parm_error;
		return r.out.result;
	}
	
	/* srvsvc_NetCharDevQPurge */
	WERROR NetCharDevQPurge(const char *server_unc, const char *queue_name, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetCharDevQPurge r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.queue_name = queue_name;
		
		status = dcerpc_srvsvc_NetCharDevQPurge(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NetCharDevQPurgeSelf */
	WERROR NetCharDevQPurgeSelf(const char *server_unc, const char *queue_name, const char *computer_name, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetCharDevQPurgeSelf r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.queue_name = queue_name;
		r.in.computer_name = computer_name;
		
		status = dcerpc_srvsvc_NetCharDevQPurgeSelf(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NetConnEnum */
	WERROR NetConnEnum(const char *server_unc, const char *path, uint32_t level, union srvsvc_NetConnCtr ctr, uint32_t max_buffer, uint32_t totalentries, uint32_t *resume_handle, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetConnEnum r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.path = path;
		r.in.level = level;
		r.in.ctr = ctr;
		r.in.max_buffer = max_buffer;
		r.in.resume_handle = resume_handle;
		
		status = dcerpc_srvsvc_NetConnEnum(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: level [out] argument is not a pointer */
		*level = *r.out.level;
		/* FIXME: ctr [out] argument is not a pointer */
		*ctr = *r.out.ctr;
		/* FIXME: totalentries [out] argument is not a pointer */
		*totalentries = *r.out.totalentries;
		*resume_handle = *r.out.resume_handle;
		return r.out.result;
	}
	
	/* srvsvc_NetFileEnum */
	WERROR NetFileEnum(const char *server_unc, const char *path, const char *user, uint32_t level, union srvsvc_NetFileCtr ctr, uint32_t max_buffer, uint32_t totalentries, uint32_t *resume_handle, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetFileEnum r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.path = path;
		r.in.user = user;
		r.in.level = level;
		r.in.ctr = ctr;
		r.in.max_buffer = max_buffer;
		r.in.resume_handle = resume_handle;
		
		status = dcerpc_srvsvc_NetFileEnum(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: level [out] argument is not a pointer */
		*level = *r.out.level;
		/* FIXME: ctr [out] argument is not a pointer */
		*ctr = *r.out.ctr;
		/* FIXME: totalentries [out] argument is not a pointer */
		*totalentries = *r.out.totalentries;
		*resume_handle = *r.out.resume_handle;
		return r.out.result;
	}
	
	/* srvsvc_NetFileGetInfo */
	WERROR NetFileGetInfo(const char *server_unc, uint32_t fid, uint32_t level, union srvsvc_NetFileInfo info, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetFileGetInfo r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.fid = fid;
		r.in.level = level;
		
		status = dcerpc_srvsvc_NetFileGetInfo(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: info [out] argument is not a pointer */
		*info = *r.out.info;
		return r.out.result;
	}
	
	/* srvsvc_NetFileClose */
	WERROR NetFileClose(const char *server_unc, uint32_t fid, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetFileClose r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.fid = fid;
		
		status = dcerpc_srvsvc_NetFileClose(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NetSessEnum */
	WERROR NetSessEnum(const char *server_unc, const char *client, const char *user, uint32_t level, union srvsvc_NetSessCtr ctr, uint32_t max_buffer, uint32_t totalentries, uint32_t *resume_handle, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetSessEnum r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.client = client;
		r.in.user = user;
		r.in.level = level;
		r.in.ctr = ctr;
		r.in.max_buffer = max_buffer;
		r.in.resume_handle = resume_handle;
		
		status = dcerpc_srvsvc_NetSessEnum(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: level [out] argument is not a pointer */
		*level = *r.out.level;
		/* FIXME: ctr [out] argument is not a pointer */
		*ctr = *r.out.ctr;
		/* FIXME: totalentries [out] argument is not a pointer */
		*totalentries = *r.out.totalentries;
		*resume_handle = *r.out.resume_handle;
		return r.out.result;
	}
	
	/* srvsvc_NetSessDel */
	WERROR NetSessDel(const char *server_unc, const char *client, const char *user, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetSessDel r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.client = client;
		r.in.user = user;
		
		status = dcerpc_srvsvc_NetSessDel(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NetShareAdd */
	WERROR NetShareAdd(const char *server_unc, uint32_t level, union srvsvc_NetShareInfo info, uint32_t *parm_error, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetShareAdd r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.level = level;
		r.in.info = info;
		r.in.parm_error = parm_error;
		
		status = dcerpc_srvsvc_NetShareAdd(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		*parm_error = *r.out.parm_error;
		return r.out.result;
	}
	
	/* srvsvc_NetShareEnumAll */
	WERROR NetShareEnumAll(const char *server_unc, uint32_t level, union srvsvc_NetShareCtr ctr, uint32_t max_buffer, uint32_t totalentries, uint32_t *resume_handle, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetShareEnumAll r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.level = level;
		r.in.ctr = ctr;
		r.in.max_buffer = max_buffer;
		r.in.resume_handle = resume_handle;
		
		status = dcerpc_srvsvc_NetShareEnumAll(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: level [out] argument is not a pointer */
		*level = *r.out.level;
		/* FIXME: ctr [out] argument is not a pointer */
		*ctr = *r.out.ctr;
		/* FIXME: totalentries [out] argument is not a pointer */
		*totalentries = *r.out.totalentries;
		*resume_handle = *r.out.resume_handle;
		return r.out.result;
	}
	
	/* srvsvc_NetShareGetInfo */
	WERROR NetShareGetInfo(const char *server_unc, const char *share_name, uint32_t level, union srvsvc_NetShareInfo info, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetShareGetInfo r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.share_name = share_name;
		r.in.level = level;
		
		status = dcerpc_srvsvc_NetShareGetInfo(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: info [out] argument is not a pointer */
		*info = *r.out.info;
		return r.out.result;
	}
	
	/* srvsvc_NetShareSetInfo */
	WERROR NetShareSetInfo(const char *server_unc, const char *share_name, uint32_t level, union srvsvc_NetShareInfo info, uint32_t *parm_error, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetShareSetInfo r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.share_name = share_name;
		r.in.level = level;
		r.in.info = info;
		r.in.parm_error = parm_error;
		
		status = dcerpc_srvsvc_NetShareSetInfo(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		*parm_error = *r.out.parm_error;
		return r.out.result;
	}
	
	/* srvsvc_NetShareDel */
	WERROR NetShareDel(const char *server_unc, const char *share_name, uint32_t reserved, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetShareDel r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.share_name = share_name;
		r.in.reserved = reserved;
		
		status = dcerpc_srvsvc_NetShareDel(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NetShareDelSticky */
	WERROR NetShareDelSticky(const char *server_unc, const char *share_name, uint32_t reserved, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetShareDelSticky r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.share_name = share_name;
		r.in.reserved = reserved;
		
		status = dcerpc_srvsvc_NetShareDelSticky(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NetShareCheck */
	WERROR NetShareCheck(const char *server_unc, const char *device_name, enum srvsvc_ShareType type, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetShareCheck r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.device_name = device_name;
		
		status = dcerpc_srvsvc_NetShareCheck(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: type [out] argument is not a pointer */
		*type = *r.out.type;
		return r.out.result;
	}
	
	/* srvsvc_NetSrvGetInfo */
	WERROR NetSrvGetInfo(const char *server_unc, uint32_t level, union srvsvc_NetSrvInfo info, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetSrvGetInfo r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.level = level;
		
		status = dcerpc_srvsvc_NetSrvGetInfo(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: info [out] argument is not a pointer */
		*info = *r.out.info;
		return r.out.result;
	}
	
	/* srvsvc_NetSrvSetInfo */
	WERROR NetSrvSetInfo(const char *server_unc, uint32_t level, union srvsvc_NetSrvInfo info, uint32_t *parm_error, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetSrvSetInfo r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.level = level;
		r.in.info = info;
		r.in.parm_error = parm_error;
		
		status = dcerpc_srvsvc_NetSrvSetInfo(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		*parm_error = *r.out.parm_error;
		return r.out.result;
	}
	
	/* srvsvc_NetDiskEnum */
	WERROR NetDiskEnum(const char *server_unc, uint32_t level, struct srvsvc_NetDiskInfo info, uint32_t maxlen, uint32_t totalentries, uint32_t *resume_handle, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetDiskEnum r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.level = level;
		r.in.info = info;
		r.in.maxlen = maxlen;
		r.in.resume_handle = resume_handle;
		
		status = dcerpc_srvsvc_NetDiskEnum(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: info [out] argument is not a pointer */
		*info = *r.out.info;
		/* FIXME: totalentries [out] argument is not a pointer */
		*totalentries = *r.out.totalentries;
		*resume_handle = *r.out.resume_handle;
		return r.out.result;
	}
	
	/* srvsvc_NetServerStatisticsGet */
	WERROR NetServerStatisticsGet(const char *server_unc, const char *service, uint32_t level, uint32_t options, struct srvsvc_Statistics stat, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetServerStatisticsGet r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.service = service;
		r.in.level = level;
		r.in.options = options;
		
		status = dcerpc_srvsvc_NetServerStatisticsGet(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: stat [out] argument is not a pointer */
		*stat = *r.out.stat;
		return r.out.result;
	}
	
	/* srvsvc_NetTransportAdd */
	WERROR NetTransportAdd(const char *server_unc, uint32_t level, union srvsvc_NetTransportInfo info, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetTransportAdd r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.level = level;
		r.in.info = info;
		
		status = dcerpc_srvsvc_NetTransportAdd(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NetTransportEnum */
	WERROR NetTransportEnum(const char *server_unc, uint32_t level, union srvsvc_NetTransportCtr transports, uint32_t max_buffer, uint32_t totalentries, uint32_t *resume_handle, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetTransportEnum r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.level = level;
		r.in.transports = transports;
		r.in.max_buffer = max_buffer;
		r.in.resume_handle = resume_handle;
		
		status = dcerpc_srvsvc_NetTransportEnum(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: level [out] argument is not a pointer */
		*level = *r.out.level;
		/* FIXME: transports [out] argument is not a pointer */
		*transports = *r.out.transports;
		/* FIXME: totalentries [out] argument is not a pointer */
		*totalentries = *r.out.totalentries;
		*resume_handle = *r.out.resume_handle;
		return r.out.result;
	}
	
	/* srvsvc_NetTransportDel */
	WERROR NetTransportDel(const char *server_unc, uint32_t level, union srvsvc_NetTransportInfo info, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetTransportDel r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.level = level;
		r.in.info = info;
		
		status = dcerpc_srvsvc_NetTransportDel(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NetRemoteTOD */
	WERROR NetRemoteTOD(const char *server_unc, struct srvsvc_NetRemoteTODInfo *info, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetRemoteTOD r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		
		status = dcerpc_srvsvc_NetRemoteTOD(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		*info = *r.out.info;
		return r.out.result;
	}
	
	/* srvsvc_NetSetServiceBits */
	WERROR NetSetServiceBits(const char *server_unc, const char *transport, uint32_t servicebits, uint32_t updateimmediately, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetSetServiceBits r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.transport = transport;
		r.in.servicebits = servicebits;
		r.in.updateimmediately = updateimmediately;
		
		status = dcerpc_srvsvc_NetSetServiceBits(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NetPathType */
	WERROR NetPathType(const char *server_unc, const char *path, uint32_t pathflags, uint32_t pathtype, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetPathType r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.path = path;
		r.in.pathflags = pathflags;
		
		status = dcerpc_srvsvc_NetPathType(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: pathtype [out] argument is not a pointer */
		*pathtype = *r.out.pathtype;
		return r.out.result;
	}
	
	/* srvsvc_NetPathCanonicalize */
	WERROR NetPathCanonicalize(const char *server_unc, const char *path, uint8_t *can_path, uint32_t maxbuf, const char *prefix, uint32_t pathtype, uint32_t pathflags, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetPathCanonicalize r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.path = path;
		r.in.maxbuf = maxbuf;
		r.in.prefix = prefix;
		r.in.pathtype = pathtype;
		r.in.pathflags = pathflags;
		
		status = dcerpc_srvsvc_NetPathCanonicalize(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: can_path [out] argument is not a pointer */
		*can_path = *r.out.can_path;
		/* FIXME: pathtype [out] argument is not a pointer */
		*pathtype = *r.out.pathtype;
		return r.out.result;
	}
	
	/* srvsvc_NetPathCompare */
	WERROR NetPathCompare(const char *server_unc, const char *path1, const char *path2, uint32_t pathtype, uint32_t pathflags, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetPathCompare r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.path1 = path1;
		r.in.path2 = path2;
		r.in.pathtype = pathtype;
		r.in.pathflags = pathflags;
		
		status = dcerpc_srvsvc_NetPathCompare(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NetNameValidate */
	WERROR NetNameValidate(const char *server_unc, const char *name, uint32_t name_type, uint32_t flags, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetNameValidate r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.name = name;
		r.in.name_type = name_type;
		r.in.flags = flags;
		
		status = dcerpc_srvsvc_NetNameValidate(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NETRPRNAMECANONICALIZE */
	WERROR NETRPRNAMECANONICALIZE(TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NETRPRNAMECANONICALIZE r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_srvsvc_NETRPRNAMECANONICALIZE(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NetPRNameCompare */
	WERROR NetPRNameCompare(const char *server_unc, const char *name1, const char *name2, uint32_t name_type, uint32_t flags, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetPRNameCompare r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.name1 = name1;
		r.in.name2 = name2;
		r.in.name_type = name_type;
		r.in.flags = flags;
		
		status = dcerpc_srvsvc_NetPRNameCompare(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NetShareEnum */
	WERROR NetShareEnum(const char *server_unc, uint32_t level, union srvsvc_NetShareCtr ctr, uint32_t max_buffer, uint32_t totalentries, uint32_t *resume_handle, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetShareEnum r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.level = level;
		r.in.ctr = ctr;
		r.in.max_buffer = max_buffer;
		r.in.resume_handle = resume_handle;
		
		status = dcerpc_srvsvc_NetShareEnum(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: level [out] argument is not a pointer */
		*level = *r.out.level;
		/* FIXME: ctr [out] argument is not a pointer */
		*ctr = *r.out.ctr;
		/* FIXME: totalentries [out] argument is not a pointer */
		*totalentries = *r.out.totalentries;
		*resume_handle = *r.out.resume_handle;
		return r.out.result;
	}
	
	/* srvsvc_NetShareDelStart */
	WERROR NetShareDelStart(const char *server_unc, const char *share, uint32_t reserved, struct policy_handle *hnd, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetShareDelStart r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.share = share;
		r.in.reserved = reserved;
		
		status = dcerpc_srvsvc_NetShareDelStart(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		*hnd = *r.out.hnd;
		return r.out.result;
	}
	
	/* srvsvc_NetShareDelCommit */
	WERROR NetShareDelCommit(struct policy_handle *hnd, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetShareDelCommit r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.hnd = hnd;
		
		status = dcerpc_srvsvc_NetShareDelCommit(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		*hnd = *r.out.hnd;
		return r.out.result;
	}
	
	/* srvsvc_NetGetFileSecurity */
	WERROR NetGetFileSecurity(const char *server_unc, const char *share, const char *file, uint32_t securityinformation, struct sec_desc_buf *sd_buf, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetGetFileSecurity r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.share = share;
		r.in.file = file;
		r.in.securityinformation = securityinformation;
		
		status = dcerpc_srvsvc_NetGetFileSecurity(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		*sd_buf = *r.out.sd_buf;
		return r.out.result;
	}
	
	/* srvsvc_NetSetFileSecurity */
	WERROR NetSetFileSecurity(const char *server_unc, const char *share, const char *file, uint32_t securityinformation, struct sec_desc_buf sd_buf, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetSetFileSecurity r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.share = share;
		r.in.file = file;
		r.in.securityinformation = securityinformation;
		r.in.sd_buf = sd_buf;
		
		status = dcerpc_srvsvc_NetSetFileSecurity(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NetServerTransportAddEx */
	WERROR NetServerTransportAddEx(const char *server_unc, uint32_t level, union srvsvc_NetTransportInfo info, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetServerTransportAddEx r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.level = level;
		r.in.info = info;
		
		status = dcerpc_srvsvc_NetServerTransportAddEx(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NetServerSetServiceBitsEx */
	WERROR NetServerSetServiceBitsEx(const char *server_unc, const char *emulated_server_unc, const char *transport, uint32_t servicebitsofinterest, uint32_t servicebits, uint32_t updateimmediately, TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NetServerSetServiceBitsEx r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.server_unc = server_unc;
		r.in.emulated_server_unc = emulated_server_unc;
		r.in.transport = transport;
		r.in.servicebitsofinterest = servicebitsofinterest;
		r.in.servicebits = servicebits;
		r.in.updateimmediately = updateimmediately;
		
		status = dcerpc_srvsvc_NetServerSetServiceBitsEx(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NETRDFSGETVERSION */
	WERROR NETRDFSGETVERSION(TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NETRDFSGETVERSION r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_srvsvc_NETRDFSGETVERSION(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NETRDFSCREATELOCALPARTITION */
	WERROR NETRDFSCREATELOCALPARTITION(TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NETRDFSCREATELOCALPARTITION r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_srvsvc_NETRDFSCREATELOCALPARTITION(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NETRDFSDELETELOCALPARTITION */
	WERROR NETRDFSDELETELOCALPARTITION(TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NETRDFSDELETELOCALPARTITION r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_srvsvc_NETRDFSDELETELOCALPARTITION(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NETRDFSSETLOCALVOLUMESTATE */
	WERROR NETRDFSSETLOCALVOLUMESTATE(TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NETRDFSSETLOCALVOLUMESTATE r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_srvsvc_NETRDFSSETLOCALVOLUMESTATE(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NETRDFSSETSERVERINFO */
	WERROR NETRDFSSETSERVERINFO(TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NETRDFSSETSERVERINFO r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_srvsvc_NETRDFSSETSERVERINFO(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NETRDFSCREATEEXITPOINT */
	WERROR NETRDFSCREATEEXITPOINT(TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NETRDFSCREATEEXITPOINT r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_srvsvc_NETRDFSCREATEEXITPOINT(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NETRDFSDELETEEXITPOINT */
	WERROR NETRDFSDELETEEXITPOINT(TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NETRDFSDELETEEXITPOINT r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_srvsvc_NETRDFSDELETEEXITPOINT(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NETRDFSMODIFYPREFIX */
	WERROR NETRDFSMODIFYPREFIX(TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NETRDFSMODIFYPREFIX r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_srvsvc_NETRDFSMODIFYPREFIX(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NETRDFSFIXLOCALVOLUME */
	WERROR NETRDFSFIXLOCALVOLUME(TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NETRDFSFIXLOCALVOLUME r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_srvsvc_NETRDFSFIXLOCALVOLUME(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NETRDFSMANAGERREPORTSITEINFO */
	WERROR NETRDFSMANAGERREPORTSITEINFO(TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NETRDFSMANAGERREPORTSITEINFO r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_srvsvc_NETRDFSMANAGERREPORTSITEINFO(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* srvsvc_NETRSERVERTRANSPORTDELEX */
	WERROR NETRSERVERTRANSPORTDELEX(TALLOC_CTX *mem_ctx = NULL)
	{
		struct srvsvc_NETRSERVERTRANSPORTDELEX r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_srvsvc_NETRSERVERTRANSPORTDELEX(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
};

/* srvsvc_NetCharDevInfo0 */
/* srvsvc_NetCharDevCtr0 */
/* srvsvc_NetCharDevInfo1 */
/* srvsvc_NetCharDevCtr1 */
/* srvsvc_NetCharDevInfo */
/* srvsvc_NetCharDevCtr */
/* srvsvc_NetCharDevQInfo0 */
/* srvsvc_NetCharDevQCtr0 */
/* srvsvc_NetCharDevQInfo1 */
/* srvsvc_NetCharDevQCtr1 */
/* srvsvc_NetCharDevQInfo */
/* srvsvc_NetCharDevQCtr */
/* srvsvc_NetConnInfo0 */
/* srvsvc_NetConnCtr0 */
/* srvsvc_NetConnInfo1 */
/* srvsvc_NetConnCtr1 */
/* srvsvc_NetConnCtr */
/* srvsvc_NetFileInfo2 */
/* srvsvc_NetFileCtr2 */
/* srvsvc_NetFileInfo3 */
/* srvsvc_NetFileCtr3 */
/* srvsvc_NetFileInfo */
/* srvsvc_NetFileCtr */
/* srvsvc_NetSessInfo0 */
/* srvsvc_NetSessCtr0 */
/* srvsvc_NetSessInfo1 */
/* srvsvc_NetSessCtr1 */
/* srvsvc_NetSessInfo2 */
/* srvsvc_NetSessCtr2 */
/* srvsvc_NetSessInfo10 */
/* srvsvc_NetSessCtr10 */
/* srvsvc_NetSessInfo502 */
/* srvsvc_NetSessCtr502 */
/* srvsvc_NetSessCtr */
/* srvsvc_ShareType */
/* srvsvc_NetShareInfo0 */
/* srvsvc_NetShareInfo1 */
/* srvsvc_NetShareInfo2 */
/* srvsvc_NetShareInfo501 */
/* srvsvc_NetShareInfo502 */
/* srvsvc_NetShareInfo1004 */
/* srvsvc_NetShareInfo1006 */
/* NetShareInfo1005Flags */
/* srvsvc_NetShareInfo1005 */
/* srvsvc_NetShareInfo1007 */
/* srvsvc_NetShareInfo */
/* srvsvc_NetShareCtr0 */
/* srvsvc_NetShareCtr1 */
/* srvsvc_NetShareCtr2 */
/* srvsvc_NetShareCtr501 */
/* srvsvc_NetShareCtr502 */
/* srvsvc_NetShareCtr1004 */
/* srvsvc_NetShareCtr1005 */
/* srvsvc_NetShareCtr1006 */
/* srvsvc_NetShareCtr1007 */
/* srvsvc_NetShareCtr1501 */
/* srvsvc_NetShareCtr */
/* srvsvc_PlatformId */
/* srvsvc_NetSrvInfo100 */
/* srvsvc_NetSrvInfo101 */
/* srvsvc_NetSrvInfo102 */
/* srvsvc_NetSrvInfo402 */
/* srvsvc_NetSrvInfo403 */
/* srvsvc_NetSrvInfo502 */
/* srvsvc_NetSrvInfo503 */
/* srvsvc_NetSrvInfo599 */
/* srvsvc_NetSrvInfo1005 */
/* srvsvc_NetSrvInfo1010 */
/* srvsvc_NetSrvInfo1016 */
/* srvsvc_NetSrvInfo1017 */
/* srvsvc_NetSrvInfo1018 */
/* srvsvc_NetSrvInfo1107 */
/* srvsvc_NetSrvInfo1501 */
/* srvsvc_NetSrvInfo1502 */
/* srvsvc_NetSrvInfo1503 */
/* srvsvc_NetSrvInfo1506 */
/* srvsvc_NetSrvInfo1509 */
/* srvsvc_NetSrvInfo1510 */
/* srvsvc_NetSrvInfo1511 */
/* srvsvc_NetSrvInfo1512 */
/* srvsvc_NetSrvInfo1513 */
/* srvsvc_NetSrvInfo1514 */
/* srvsvc_NetSrvInfo1515 */
/* srvsvc_NetSrvInfo1516 */
/* srvsvc_NetSrvInfo1518 */
/* srvsvc_NetSrvInfo1520 */
/* srvsvc_NetSrvInfo1521 */
/* srvsvc_NetSrvInfo1522 */
/* srvsvc_NetSrvInfo1523 */
/* srvsvc_NetSrvInfo1524 */
/* srvsvc_NetSrvInfo1525 */
/* srvsvc_NetSrvInfo1528 */
/* srvsvc_NetSrvInfo1529 */
/* srvsvc_NetSrvInfo1530 */
/* srvsvc_NetSrvInfo1533 */
/* srvsvc_NetSrvInfo1534 */
/* srvsvc_NetSrvInfo1535 */
/* srvsvc_NetSrvInfo1536 */
/* srvsvc_NetSrvInfo1537 */
/* srvsvc_NetSrvInfo1538 */
/* srvsvc_NetSrvInfo1539 */
/* srvsvc_NetSrvInfo1540 */
/* srvsvc_NetSrvInfo1541 */
/* srvsvc_NetSrvInfo1542 */
/* srvsvc_NetSrvInfo1543 */
/* srvsvc_NetSrvInfo1544 */
/* srvsvc_NetSrvInfo1545 */
/* srvsvc_NetSrvInfo1546 */
/* srvsvc_NetSrvInfo1547 */
/* srvsvc_NetSrvInfo1548 */
/* srvsvc_NetSrvInfo1549 */
/* srvsvc_NetSrvInfo1550 */
/* srvsvc_NetSrvInfo1552 */
/* srvsvc_NetSrvInfo1553 */
/* srvsvc_NetSrvInfo1554 */
/* srvsvc_NetSrvInfo1555 */
/* srvsvc_NetSrvInfo1556 */
/* srvsvc_NetSrvInfo */
/* srvsvc_NetDiskInfo0 */
/* srvsvc_NetDiskInfo */
/* srvsvc_Statistics */
/* srvsvc_NetTransportInfo0 */
/* srvsvc_NetTransportCtr0 */
/* srvsvc_NetTransportInfo1 */
/* srvsvc_NetTransportCtr1 */
/* srvsvc_NetTransportInfo2 */
/* srvsvc_NetTransportCtr2 */
/* srvsvc_NetTransportInfo3 */
/* srvsvc_NetTransportCtr3 */
/* srvsvc_NetTransportCtr */
/* srvsvc_NetRemoteTODInfo */
/* srvsvc_NetTransportInfo */

