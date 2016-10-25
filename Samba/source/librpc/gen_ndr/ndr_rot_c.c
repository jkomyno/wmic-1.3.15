/* client functions auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_rot.h"
#include "librpc/gen_ndr/ndr_rot_c.h"

/* rot - client functions generated by pidl */


struct rpc_request *dcerpc_rot_add_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_add *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(rot_add, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_rot, DCERPC_ROT_ADD, mem_ctx, r);
}

NTSTATUS dcerpc_rot_add(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_add *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_rot_add_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(rot_add, r);		
	}

	return status;
}

struct rpc_request *dcerpc_rot_remove_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_remove *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(rot_remove, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_rot, DCERPC_ROT_REMOVE, mem_ctx, r);
}

NTSTATUS dcerpc_rot_remove(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_remove *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_rot_remove_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(rot_remove, r);		
	}

	return status;
}

struct rpc_request *dcerpc_rot_is_listed_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_is_listed *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(rot_is_listed, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_rot, DCERPC_ROT_IS_LISTED, mem_ctx, r);
}

NTSTATUS dcerpc_rot_is_listed(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_is_listed *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_rot_is_listed_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(rot_is_listed, r);		
	}

	return status;
}

struct rpc_request *dcerpc_rot_get_interface_pointer_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_get_interface_pointer *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(rot_get_interface_pointer, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_rot, DCERPC_ROT_GET_INTERFACE_POINTER, mem_ctx, r);
}

NTSTATUS dcerpc_rot_get_interface_pointer(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_get_interface_pointer *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_rot_get_interface_pointer_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(rot_get_interface_pointer, r);		
	}

	return status;
}

struct rpc_request *dcerpc_rot_set_modification_time_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_set_modification_time *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(rot_set_modification_time, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_rot, DCERPC_ROT_SET_MODIFICATION_TIME, mem_ctx, r);
}

NTSTATUS dcerpc_rot_set_modification_time(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_set_modification_time *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_rot_set_modification_time_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(rot_set_modification_time, r);		
	}

	return status;
}

struct rpc_request *dcerpc_rot_get_modification_time_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_get_modification_time *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(rot_get_modification_time, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_rot, DCERPC_ROT_GET_MODIFICATION_TIME, mem_ctx, r);
}

NTSTATUS dcerpc_rot_get_modification_time(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_get_modification_time *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_rot_get_modification_time_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(rot_get_modification_time, r);		
	}

	return status;
}

struct rpc_request *dcerpc_rot_enum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_enum *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(rot_enum, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_rot, DCERPC_ROT_ENUM, mem_ctx, r);
}

NTSTATUS dcerpc_rot_enum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_enum *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_rot_enum_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(rot_enum, r);		
	}

	return status;
}
