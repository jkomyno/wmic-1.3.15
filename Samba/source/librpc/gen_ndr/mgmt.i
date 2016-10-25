/* This file is autogenerated by pidl. DO NOT EDIT */
%module mgmt

%{
#include "includes.h"
#include "auth/credentials/credentials.h"
#include "librpc/gen_ndr/ndr_mgmt_c.h"
#include "librpc/gen_ndr/mgmt.h"
%}
%import "samba.i"

%inline {
void ntstatus_exception(NTSTATUS status)
{
	/* FIXME */
}
}



%inline {
struct mgmt { struct dcerpc_pipe *pipe; };
}

%extend mgmt {
	mgmt (const char *binding, struct cli_credentials *cred = NULL, TALLOC_CTX *mem_ctx = NULL, struct event_context *event = NULL)
	{
		struct mgmt *ret = talloc(mem_ctx, struct mgmt);
		NTSTATUS status;
		
		status = dcerpc_pipe_connect(mem_ctx, &ret->pipe, binding, &dcerpc_table_mgmt, cred, event);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return NULL;
		}
		
		return ret;
	}
	
	~mgmt() {
		talloc_free(self);
	}
	
	/* mgmt_inq_if_ids */
	WERROR inq_if_ids(struct rpc_if_id_vector_t *if_id_vector, TALLOC_CTX *mem_ctx = NULL)
	{
		struct mgmt_inq_if_ids r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_mgmt_inq_if_ids(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		*if_id_vector = *r.out.if_id_vector;
		return r.out.result;
	}
	
	/* mgmt_inq_stats */
	WERROR inq_stats(uint32_t max_count, uint32_t unknown, struct mgmt_statistics statistics, TALLOC_CTX *mem_ctx = NULL)
	{
		struct mgmt_inq_stats r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.max_count = max_count;
		r.in.unknown = unknown;
		
		status = dcerpc_mgmt_inq_stats(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: statistics [out] argument is not a pointer */
		*statistics = *r.out.statistics;
		return r.out.result;
	}
	
	/* mgmt_is_server_listening */
	uint32_t is_server_listening(uint32_t status, TALLOC_CTX *mem_ctx = NULL)
	{
		struct mgmt_is_server_listening r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_mgmt_is_server_listening(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: status [out] argument is not a pointer */
		*status = *r.out.status;
		return r.out.result;
	}
	
	/* mgmt_stop_server_listening */
	WERROR stop_server_listening(TALLOC_CTX *mem_ctx = NULL)
	{
		struct mgmt_stop_server_listening r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_mgmt_stop_server_listening(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* mgmt_inq_princ_name */
	WERROR inq_princ_name(uint32_t authn_proto, uint32_t princ_name_size, const char *princ_name, TALLOC_CTX *mem_ctx = NULL)
	{
		struct mgmt_inq_princ_name r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.authn_proto = authn_proto;
		r.in.princ_name_size = princ_name_size;
		
		status = dcerpc_mgmt_inq_princ_name(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: princ_name [out] argument is not a pointer */
		*princ_name = *r.out.princ_name;
		return r.out.result;
	}
	
};

/* dcerpc_syntax_id_p */
/* rpc_if_id_vector_t */
/* mgmt_statistics */

