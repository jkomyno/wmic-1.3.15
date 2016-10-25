/* This file is autogenerated by pidl. DO NOT EDIT */
%module winbind

%{
#include "includes.h"
#include "auth/credentials/credentials.h"
#include "librpc/gen_ndr/ndr_winbind_c.h"
#include "librpc/gen_ndr/winbind.h"
%}
%import "samba.i"

%inline {
void ntstatus_exception(NTSTATUS status)
{
	/* FIXME */
}
}



%inline {
struct winbind { struct dcerpc_pipe *pipe; };
}

%extend winbind {
	winbind (const char *binding, struct cli_credentials *cred = NULL, TALLOC_CTX *mem_ctx = NULL, struct event_context *event = NULL)
	{
		struct winbind *ret = talloc(mem_ctx, struct winbind);
		NTSTATUS status;
		
		status = dcerpc_pipe_connect(mem_ctx, &ret->pipe, binding, &dcerpc_table_winbind, cred, event);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return NULL;
		}
		
		return ret;
	}
	
	~winbind() {
		talloc_free(self);
	}
	
	/* winbind_information */
	void information(TALLOC_CTX *mem_ctx = NULL)
	{
		struct winbind_information r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_winbind_information(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return;
		}
		
		/* Set out arguments */
	}
	
	/* winbind_remote_control */
	NTSTATUS remote_control(TALLOC_CTX *mem_ctx = NULL)
	{
		struct winbind_remote_control r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_winbind_remote_control(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
	/* winbind_SamLogon */
	NTSTATUS SamLogon(uint16_t logon_level, union netr_LogonLevel logon, uint16_t validation_level, union netr_Validation validation, uint8_t authoritative, uint32_t flags, TALLOC_CTX *mem_ctx = NULL)
	{
		struct winbind_SamLogon r;
		NTSTATUS status;
		
		/* Fill r structure */
		r.in.logon_level = logon_level;
		r.in.logon = logon;
		r.in.validation_level = validation_level;
		r.in.flags = flags;
		
		status = dcerpc_winbind_SamLogon(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		/* FIXME: validation [out] argument is not a pointer */
		*validation = *r.out.validation;
		/* FIXME: authoritative [out] argument is not a pointer */
		*authoritative = *r.out.authoritative;
		/* FIXME: flags [out] argument is not a pointer */
		*flags = *r.out.flags;
		return r.out.result;
	}
	
};

