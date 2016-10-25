/* client functions auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_winstation.h"
#include "librpc/gen_ndr/ndr_winstation_c.h"

/* winstation - client functions generated by pidl */


struct rpc_request *dcerpc_winstation_foo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winstation_foo *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(winstation_foo, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_winstation, DCERPC_WINSTATION_FOO, mem_ctx, r);
}

NTSTATUS dcerpc_winstation_foo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winstation_foo *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_winstation_foo_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(winstation_foo, r);		
	}

	return status;
}