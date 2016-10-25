/* This file is autogenerated by pidl. DO NOT EDIT */
%module policyagent

%{
#include "includes.h"
#include "auth/credentials/credentials.h"
#include "librpc/gen_ndr/ndr_policyagent_c.h"
#include "librpc/gen_ndr/policyagent.h"
%}
%import "samba.i"

%inline {
void ntstatus_exception(NTSTATUS status)
{
	/* FIXME */
}
}



%inline {
struct policyagent { struct dcerpc_pipe *pipe; };
}

%extend policyagent {
	policyagent (const char *binding, struct cli_credentials *cred = NULL, TALLOC_CTX *mem_ctx = NULL, struct event_context *event = NULL)
	{
		struct policyagent *ret = talloc(mem_ctx, struct policyagent);
		NTSTATUS status;
		
		status = dcerpc_pipe_connect(mem_ctx, &ret->pipe, binding, &dcerpc_table_policyagent, cred, event);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return NULL;
		}
		
		return ret;
	}
	
	~policyagent() {
		talloc_free(self);
	}
	
	/* policyagent_Dummy */
	WERROR Dummy(TALLOC_CTX *mem_ctx = NULL)
	{
		struct policyagent_Dummy r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_policyagent_Dummy(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
};


