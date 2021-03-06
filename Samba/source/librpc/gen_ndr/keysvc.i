/* This file is autogenerated by pidl. DO NOT EDIT */
%module keysvc

%{
#include "includes.h"
#include "auth/credentials/credentials.h"
#include "librpc/gen_ndr/ndr_keysvc_c.h"
#include "librpc/gen_ndr/keysvc.h"
%}
%import "samba.i"

%inline {
void ntstatus_exception(NTSTATUS status)
{
	/* FIXME */
}
}



%inline {
struct keysvc { struct dcerpc_pipe *pipe; };
}

%extend keysvc {
	keysvc (const char *binding, struct cli_credentials *cred = NULL, TALLOC_CTX *mem_ctx = NULL, struct event_context *event = NULL)
	{
		struct keysvc *ret = talloc(mem_ctx, struct keysvc);
		NTSTATUS status;
		
		status = dcerpc_pipe_connect(mem_ctx, &ret->pipe, binding, &dcerpc_table_keysvc, cred, event);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return NULL;
		}
		
		return ret;
	}
	
	~keysvc() {
		talloc_free(self);
	}
	
	/* keysvc_Unknown0 */
	WERROR Unknown0(TALLOC_CTX *mem_ctx = NULL)
	{
		struct keysvc_Unknown0 r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_keysvc_Unknown0(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
};


