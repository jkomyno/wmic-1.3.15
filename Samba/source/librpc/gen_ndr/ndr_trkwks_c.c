/* client functions auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_trkwks.h"
#include "librpc/gen_ndr/ndr_trkwks_c.h"

/* trkwks - client functions generated by pidl */


struct rpc_request *dcerpc_trkwks_Unknown0_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct trkwks_Unknown0 *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(trkwks_Unknown0, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_trkwks, DCERPC_TRKWKS_UNKNOWN0, mem_ctx, r);
}

NTSTATUS dcerpc_trkwks_Unknown0(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct trkwks_Unknown0 *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_trkwks_Unknown0_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(trkwks_Unknown0, r);		
	}

	return status;
}
