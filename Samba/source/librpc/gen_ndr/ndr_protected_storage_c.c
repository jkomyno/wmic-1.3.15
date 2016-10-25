/* client functions auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_protected_storage.h"
#include "librpc/gen_ndr/ndr_protected_storage_c.h"

/* protected_storage - client functions generated by pidl */


struct rpc_request *dcerpc_ps_XXX_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ps_XXX *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(ps_XXX, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_protected_storage, DCERPC_PS_XXX, mem_ctx, r);
}

NTSTATUS dcerpc_ps_XXX(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ps_XXX *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_ps_XXX_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(ps_XXX, r);		
	}

	return status;
}