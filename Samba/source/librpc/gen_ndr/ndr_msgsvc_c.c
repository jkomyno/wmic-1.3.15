/* client functions auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_msgsvc.h"
#include "librpc/gen_ndr/ndr_msgsvc_c.h"

/* msgsvc - client functions generated by pidl */


struct rpc_request *dcerpc_NetrMessageNameAdd_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrMessageNameAdd *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(NetrMessageNameAdd, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_msgsvc, DCERPC_NETRMESSAGENAMEADD, mem_ctx, r);
}

NTSTATUS dcerpc_NetrMessageNameAdd(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrMessageNameAdd *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_NetrMessageNameAdd_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(NetrMessageNameAdd, r);		
	}

	return status;
}

struct rpc_request *dcerpc_NetrMessageNameEnum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrMessageNameEnum *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(NetrMessageNameEnum, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_msgsvc, DCERPC_NETRMESSAGENAMEENUM, mem_ctx, r);
}

NTSTATUS dcerpc_NetrMessageNameEnum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrMessageNameEnum *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_NetrMessageNameEnum_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(NetrMessageNameEnum, r);		
	}

	return status;
}

struct rpc_request *dcerpc_NetrMessageNameGetInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrMessageNameGetInfo *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(NetrMessageNameGetInfo, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_msgsvc, DCERPC_NETRMESSAGENAMEGETINFO, mem_ctx, r);
}

NTSTATUS dcerpc_NetrMessageNameGetInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrMessageNameGetInfo *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_NetrMessageNameGetInfo_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(NetrMessageNameGetInfo, r);		
	}

	return status;
}

struct rpc_request *dcerpc_NetrMessageNameDel_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrMessageNameDel *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(NetrMessageNameDel, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_msgsvc, DCERPC_NETRMESSAGENAMEDEL, mem_ctx, r);
}

NTSTATUS dcerpc_NetrMessageNameDel(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrMessageNameDel *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_NetrMessageNameDel_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(NetrMessageNameDel, r);		
	}

	return status;
}
/* msgsvcsend - client functions generated by pidl */


struct rpc_request *dcerpc_NetrSendMessage_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrSendMessage *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(NetrSendMessage, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_msgsvcsend, DCERPC_NETRSENDMESSAGE, mem_ctx, r);
}

NTSTATUS dcerpc_NetrSendMessage(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrSendMessage *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_NetrSendMessage_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(NetrSendMessage, r);		
	}

	return status;
}
