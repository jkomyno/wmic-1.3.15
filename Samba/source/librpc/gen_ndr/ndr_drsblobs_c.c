/* client functions auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_drsblobs.h"
#include "librpc/gen_ndr/ndr_drsblobs_c.h"

/* drsblobs - client functions generated by pidl */


struct rpc_request *dcerpc_decode_replPropertyMetaData_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_replPropertyMetaData *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(decode_replPropertyMetaData, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_drsblobs, DCERPC_DECODE_REPLPROPERTYMETADATA, mem_ctx, r);
}

NTSTATUS dcerpc_decode_replPropertyMetaData(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_replPropertyMetaData *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_decode_replPropertyMetaData_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(decode_replPropertyMetaData, r);		
	}

	return status;
}

struct rpc_request *dcerpc_decode_replUpToDateVector_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_replUpToDateVector *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(decode_replUpToDateVector, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_drsblobs, DCERPC_DECODE_REPLUPTODATEVECTOR, mem_ctx, r);
}

NTSTATUS dcerpc_decode_replUpToDateVector(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_replUpToDateVector *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_decode_replUpToDateVector_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(decode_replUpToDateVector, r);		
	}

	return status;
}

struct rpc_request *dcerpc_decode_repsFromTo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_repsFromTo *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(decode_repsFromTo, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_drsblobs, DCERPC_DECODE_REPSFROMTO, mem_ctx, r);
}

NTSTATUS dcerpc_decode_repsFromTo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_repsFromTo *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_decode_repsFromTo_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(decode_repsFromTo, r);		
	}

	return status;
}

struct rpc_request *dcerpc_decode_ldapControlDirSync_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_ldapControlDirSync *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(decode_ldapControlDirSync, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_drsblobs, DCERPC_DECODE_LDAPCONTROLDIRSYNC, mem_ctx, r);
}

NTSTATUS dcerpc_decode_ldapControlDirSync(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_ldapControlDirSync *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_decode_ldapControlDirSync_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(decode_ldapControlDirSync, r);		
	}

	return status;
}

struct rpc_request *dcerpc_decode_DsCompressed_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_DsCompressed *r)
{
	if (p->conn->flags & DCERPC_DEBUG_PRINT_IN) {
		NDR_PRINT_IN_DEBUG(decode_DsCompressed, r);
	}
	
	return dcerpc_ndr_request_send(p, NULL, &dcerpc_table_drsblobs, DCERPC_DECODE_DSCOMPRESSED, mem_ctx, r);
}

NTSTATUS dcerpc_decode_DsCompressed(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_DsCompressed *r)
{
	struct rpc_request *req;
	NTSTATUS status;
	
	req = dcerpc_decode_DsCompressed_send(p, mem_ctx, r);
	if (req == NULL) return NT_STATUS_NO_MEMORY;

	status = dcerpc_ndr_request_recv(req);

	if (NT_STATUS_IS_OK(status) && (p->conn->flags & DCERPC_DEBUG_PRINT_OUT)) {
		NDR_PRINT_OUT_DEBUG(decode_DsCompressed, r);		
	}

	return status;
}
