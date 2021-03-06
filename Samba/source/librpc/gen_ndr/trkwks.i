/* This file is autogenerated by pidl. DO NOT EDIT */
%module trkwks

%{
#include "includes.h"
#include "auth/credentials/credentials.h"
#include "librpc/gen_ndr/ndr_trkwks_c.h"
#include "librpc/gen_ndr/trkwks.h"
%}
%import "samba.i"

%inline {
void ntstatus_exception(NTSTATUS status)
{
	/* FIXME */
}
}



%inline {
struct trkwks { struct dcerpc_pipe *pipe; };
}

%extend trkwks {
	trkwks (const char *binding, struct cli_credentials *cred = NULL, TALLOC_CTX *mem_ctx = NULL, struct event_context *event = NULL)
	{
		struct trkwks *ret = talloc(mem_ctx, struct trkwks);
		NTSTATUS status;
		
		status = dcerpc_pipe_connect(mem_ctx, &ret->pipe, binding, &dcerpc_table_trkwks, cred, event);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return NULL;
		}
		
		return ret;
	}
	
	~trkwks() {
		talloc_free(self);
	}
	
	/* trkwks_Unknown0 */
	WERROR Unknown0(TALLOC_CTX *mem_ctx = NULL)
	{
		struct trkwks_Unknown0 r;
		NTSTATUS status;
		
		/* Fill r structure */
		
		status = dcerpc_trkwks_Unknown0(self->pipe, mem_ctx, &r);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return r.out.result;
		}
		
		/* Set out arguments */
		return r.out.result;
	}
	
};


