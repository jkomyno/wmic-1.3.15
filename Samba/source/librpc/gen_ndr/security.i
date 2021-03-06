/* This file is autogenerated by pidl. DO NOT EDIT */
%module security

%{
#include "includes.h"
#include "auth/credentials/credentials.h"
#include "librpc/gen_ndr/ndr_security_c.h"
#include "librpc/gen_ndr/security.h"
%}
%import "samba.i"

%inline {
void ntstatus_exception(NTSTATUS status)
{
	/* FIXME */
}
}

%types(dom_sid);
%types(security_ace);
%types(security_acl);
%types(security_descriptor);
%types(sec_desc_buf);
%types(security_token);
%types(security_secinfo);


%inline {
struct security { struct dcerpc_pipe *pipe; };
}

%extend security {
	security (const char *binding, struct cli_credentials *cred = NULL, TALLOC_CTX *mem_ctx = NULL, struct event_context *event = NULL)
	{
		struct security *ret = talloc(mem_ctx, struct security);
		NTSTATUS status;
		
		status = dcerpc_pipe_connect(mem_ctx, &ret->pipe, binding, &dcerpc_table_security, cred, event);
		if (NT_STATUS_IS_ERR(status)) {
			ntstatus_exception(status);
			return NULL;
		}
		
		return ret;
	}
	
	~security() {
		talloc_free(self);
	}
	
};

/* sec_privilege */
/* dom_sid */
/* security_ace_flags */
/* security_ace_type */
/* security_ace_object_flags */
/* security_ace_object_type */
/* security_ace_object_inherited_type */
/* security_ace_object */
/* security_ace_object_ctr */
/* security_ace */
/* security_acl_revision */
/* security_acl */
/* security_descriptor_revision */
/* security_descriptor_type */
/* security_descriptor */
/* sec_desc_buf */
/* security_token */
/* security_secinfo */

