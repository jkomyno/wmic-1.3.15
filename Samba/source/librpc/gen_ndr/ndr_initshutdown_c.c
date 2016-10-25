/* client functions auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_initshutdown.h"
#include "librpc/gen_ndr/ndr_initshutdown_c.h"

/* initshutdown - client functions generated by pidl */


struct rpc_request *dcerpc_initshutdown_Init_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct initshutdown_Init *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(initshutdown_Init, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_initshutdown, DCERPC_INITSHUTDOWN_INIT, mem_ctx, r);
}

NTSTATUS dcerpc_initshutdown_Init(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct initshutdown_Init *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_initshutdown_Init_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(initshutdown_Init, r);		
	}

	return status;
}

struct rpc_request *dcerpc_initshutdown_Abort_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct initshutdown_Abort *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(initshutdown_Abort, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_initshutdown, DCERPC_INITSHUTDOWN_ABORT, mem_ctx, r);
}

NTSTATUS dcerpc_initshutdown_Abort(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct initshutdown_Abort *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_initshutdown_Abort_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(initshutdown_Abort, r);		
	}

	return status;
}

struct rpc_request *dcerpc_initshutdown_InitEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct initshutdown_InitEx *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(initshutdown_InitEx, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_initshutdown, DCERPC_INITSHUTDOWN_INITEX, mem_ctx, r);
}

NTSTATUS dcerpc_initshutdown_InitEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct initshutdown_InitEx *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_initshutdown_InitEx_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(initshutdown_InitEx, r);		
	}

	return status;
}