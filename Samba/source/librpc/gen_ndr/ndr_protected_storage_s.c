/* server functions auto-generated by pidl */
#include "librpc/gen_ndr/ndr_protected_storage.h"

/* protected_storage - dcerpc server boilerplate generated by pidl */


static NTSTATUS protected_storage__op_bind(struct dcesrv_call_state *dce_call, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_PROTECTED_STORAGE_BIND
	return DCESRV_INTERFACE_PROTECTED_STORAGE_BIND(dce_call,iface);
#else
	return NT_STATUS_OK;
#endif
}

static void protected_storage__op_unbind(struct dcesrv_connection_context *context, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_PROTECTED_STORAGE_UNBIND
	DCESRV_INTERFACE_PROTECTED_STORAGE_UNBIND(context, iface);
#else
	return;
#endif
}

static NTSTATUS protected_storage__op_ndr_pull(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_pull *pull, void **r)
{
	NTSTATUS status;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	dce_call->fault_code = 0;

	if (opnum >= dcerpc_table_protected_storage.num_calls) {
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	*r = talloc_size(mem_ctx, dcerpc_table_protected_storage.calls[opnum].struct_size);
	NT_STATUS_HAVE_NO_MEMORY(*r);

        /* unravel the NDR for the packet */
	status = dcerpc_table_protected_storage.calls[opnum].ndr_pull(pull, NDR_IN, *r);
	if (!NT_STATUS_IS_OK(status)) {
		dcerpc_log_packet(&dcerpc_table_protected_storage, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS protected_storage__op_dispatch(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct ps_XXX *r2 = (struct ps_XXX *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(ps_XXX, NDR_IN, r2);
		}
		r2->out.result = ps_XXX(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function ps_XXX will reply async\n"));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(&dcerpc_table_protected_storage, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS protected_storage__op_reply(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct ps_XXX *r2 = (struct ps_XXX *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function ps_XXX replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(ps_XXX, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in ps_XXX\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(&dcerpc_table_protected_storage, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS protected_storage__op_ndr_push(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_push *push, const void *r)
{
	NTSTATUS status;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	status = dcerpc_table_protected_storage.calls[opnum].ndr_push(push, NDR_OUT, r);
	if (!NT_STATUS_IS_OK(status)) {
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static const struct dcesrv_interface protected_storage_interface = {
	.name		= "protected_storage",
	.syntax_id  = {{0xc9378ff1,0x16f7,0x11d0,{0xa0,0xb2},{0x00,0xaa,0x00,0x61,0x42,0x6a}},1.0},
	.bind		= protected_storage__op_bind,
	.unbind		= protected_storage__op_unbind,
	.ndr_pull	= protected_storage__op_ndr_pull,
	.dispatch	= protected_storage__op_dispatch,
	.reply		= protected_storage__op_reply,
	.ndr_push	= protected_storage__op_ndr_push
};


static NTSTATUS protected_storage__op_init_server(struct dcesrv_context *dce_ctx, const struct dcesrv_endpoint_server *ep_server)
{
	int i;

	for (i=0;i<dcerpc_table_protected_storage.endpoints->count;i++) {
		NTSTATUS ret;
		const char *name = dcerpc_table_protected_storage.endpoints->names[i];

		ret = dcesrv_interface_register(dce_ctx, name, &protected_storage_interface, NULL);
		if (!NT_STATUS_IS_OK(ret)) {
			DEBUG(1,("protected_storage_op_init_server: failed to register endpoint '%s'\n",name));
			return ret;
		}
	}

	return NT_STATUS_OK;
}

static BOOL protected_storage__op_interface_by_uuid(struct dcesrv_interface *iface, const struct GUID *uuid, uint32_t if_version)
{
	if (protected_storage_interface.syntax_id.if_version == if_version &&
		GUID_equal(&protected_storage_interface.syntax_id.uuid, uuid)) {
		memcpy(iface,&protected_storage_interface, sizeof(*iface));
		return True;
	}

	return False;
}

static BOOL protected_storage__op_interface_by_name(struct dcesrv_interface *iface, const char *name)
{
	if (strcmp(protected_storage_interface.name, name)==0) {
		memcpy(iface,&protected_storage_interface, sizeof(*iface));
		return True;
	}

	return False;	
}
	
NTSTATUS dcerpc_server_protected_storage_init(void)
{
	NTSTATUS ret;
	struct dcesrv_endpoint_server ep_server;

	/* fill in our name */
	ep_server.name = "protected_storage";

	/* fill in all the operations */
	ep_server.init_server = protected_storage__op_init_server;

	ep_server.interface_by_uuid = protected_storage__op_interface_by_uuid;
	ep_server.interface_by_name = protected_storage__op_interface_by_name;

	/* register ourselves with the DCERPC subsystem. */
	ret = dcerpc_register_ep_server(&ep_server);

	if (!NT_STATUS_IS_OK(ret)) {
		DEBUG(0,("Failed to register 'protected_storage' endpoint server!\n"));
		return ret;
	}

	return ret;
}
