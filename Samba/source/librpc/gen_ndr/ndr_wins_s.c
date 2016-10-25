/* server functions auto-generated by pidl */
#include "librpc/gen_ndr/ndr_wins.h"

/* WinsPipe - dcerpc server boilerplate generated by pidl */


static NTSTATUS WinsPipe__op_bind(struct dcesrv_call_state *dce_call, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_WINSPIPE_BIND
	return DCESRV_INTERFACE_WINSPIPE_BIND(dce_call,iface);
#else
	return NT_STATUS_OK;
#endif
}

static void WinsPipe__op_unbind(struct dcesrv_connection_context *context, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_WINSPIPE_UNBIND
	DCESRV_INTERFACE_WINSPIPE_UNBIND(context, iface);
#else
	return;
#endif
}

static NTSTATUS WinsPipe__op_ndr_pull(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_pull *pull, void **r)
{
	NTSTATUS status;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	dce_call->fault_code = 0;

	if (opnum >= dcerpc_table_WinsPipe.num_calls) {
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	*r = talloc_size(mem_ctx, dcerpc_table_WinsPipe.calls[opnum].struct_size);
	NT_STATUS_HAVE_NO_MEMORY(*r);

        /* unravel the NDR for the packet */
	status = dcerpc_table_WinsPipe.calls[opnum].ndr_pull(pull, NDR_IN, *r);
	if (!NT_STATUS_IS_OK(status)) {
		dcerpc_log_packet(&dcerpc_table_WinsPipe, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS WinsPipe__op_dispatch(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct WinsRecordAction *r2 = (struct WinsRecordAction *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsRecordAction, NDR_IN, r2);
		}
		WinsRecordAction(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsRecordAction will reply async\n"));
		}
		break;
	}
	case 1: {
		struct WinsStatus *r2 = (struct WinsStatus *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsStatus, NDR_IN, r2);
		}
		WinsStatus(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsStatus will reply async\n"));
		}
		break;
	}
	case 2: {
		struct WinsTrigger *r2 = (struct WinsTrigger *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsTrigger, NDR_IN, r2);
		}
		WinsTrigger(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsTrigger will reply async\n"));
		}
		break;
	}
	case 3: {
		struct WinsDoStaticInit *r2 = (struct WinsDoStaticInit *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsDoStaticInit, NDR_IN, r2);
		}
		WinsDoStaticInit(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsDoStaticInit will reply async\n"));
		}
		break;
	}
	case 4: {
		struct WinsDoScavenging *r2 = (struct WinsDoScavenging *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsDoScavenging, NDR_IN, r2);
		}
		WinsDoScavenging(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsDoScavenging will reply async\n"));
		}
		break;
	}
	case 5: {
		struct WinsGetDbRecs *r2 = (struct WinsGetDbRecs *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsGetDbRecs, NDR_IN, r2);
		}
		WinsGetDbRecs(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsGetDbRecs will reply async\n"));
		}
		break;
	}
	case 6: {
		struct WinsTerm *r2 = (struct WinsTerm *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsTerm, NDR_IN, r2);
		}
		WinsTerm(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsTerm will reply async\n"));
		}
		break;
	}
	case 7: {
		struct WinsBackup *r2 = (struct WinsBackup *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsBackup, NDR_IN, r2);
		}
		WinsBackup(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsBackup will reply async\n"));
		}
		break;
	}
	case 8: {
		struct WinsDelDbRecs *r2 = (struct WinsDelDbRecs *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsDelDbRecs, NDR_IN, r2);
		}
		WinsDelDbRecs(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsDelDbRecs will reply async\n"));
		}
		break;
	}
	case 9: {
		struct WinsPullRange *r2 = (struct WinsPullRange *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsPullRange, NDR_IN, r2);
		}
		WinsPullRange(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsPullRange will reply async\n"));
		}
		break;
	}
	case 10: {
		struct WinsSetPriorityClass *r2 = (struct WinsSetPriorityClass *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsSetPriorityClass, NDR_IN, r2);
		}
		WinsSetPriorityClass(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsSetPriorityClass will reply async\n"));
		}
		break;
	}
	case 11: {
		struct WinsResetCounters *r2 = (struct WinsResetCounters *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsResetCounters, NDR_IN, r2);
		}
		WinsResetCounters(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsResetCounters will reply async\n"));
		}
		break;
	}
	case 12: {
		struct WinsWorkerThreadUpdate *r2 = (struct WinsWorkerThreadUpdate *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsWorkerThreadUpdate, NDR_IN, r2);
		}
		WinsWorkerThreadUpdate(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsWorkerThreadUpdate will reply async\n"));
		}
		break;
	}
	case 13: {
		struct WinsGetNameAndAdd *r2 = (struct WinsGetNameAndAdd *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsGetNameAndAdd, NDR_IN, r2);
		}
		WinsGetNameAndAdd(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsGetNameAndAdd will reply async\n"));
		}
		break;
	}
	case 14: {
		struct WinsGetBrowserNames_Old *r2 = (struct WinsGetBrowserNames_Old *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsGetBrowserNames_Old, NDR_IN, r2);
		}
		WinsGetBrowserNames_Old(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsGetBrowserNames_Old will reply async\n"));
		}
		break;
	}
	case 15: {
		struct WinsDeleteWins *r2 = (struct WinsDeleteWins *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsDeleteWins, NDR_IN, r2);
		}
		WinsDeleteWins(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsDeleteWins will reply async\n"));
		}
		break;
	}
	case 16: {
		struct WinsSetFlags *r2 = (struct WinsSetFlags *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsSetFlags, NDR_IN, r2);
		}
		WinsSetFlags(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsSetFlags will reply async\n"));
		}
		break;
	}
	case 17: {
		struct WinsGetDbRecsByName *r2 = (struct WinsGetDbRecsByName *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsGetDbRecsByName, NDR_IN, r2);
		}
		WinsGetDbRecsByName(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsGetDbRecsByName will reply async\n"));
		}
		break;
	}
	case 18: {
		struct WinsStatusWHdl *r2 = (struct WinsStatusWHdl *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsStatusWHdl, NDR_IN, r2);
		}
		WinsStatusWHdl(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsStatusWHdl will reply async\n"));
		}
		break;
	}
	case 19: {
		struct WinsDoScanvenging2 *r2 = (struct WinsDoScanvenging2 *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(WinsDoScanvenging2, NDR_IN, r2);
		}
		WinsDoScanvenging2(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsDoScanvenging2 will reply async\n"));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(&dcerpc_table_WinsPipe, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS WinsPipe__op_reply(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct WinsRecordAction *r2 = (struct WinsRecordAction *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsRecordAction replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsRecordAction, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsRecordAction\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 1: {
		struct WinsStatus *r2 = (struct WinsStatus *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsStatus replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsStatus, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsStatus\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 2: {
		struct WinsTrigger *r2 = (struct WinsTrigger *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsTrigger replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsTrigger, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsTrigger\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 3: {
		struct WinsDoStaticInit *r2 = (struct WinsDoStaticInit *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsDoStaticInit replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsDoStaticInit, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsDoStaticInit\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 4: {
		struct WinsDoScavenging *r2 = (struct WinsDoScavenging *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsDoScavenging replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsDoScavenging, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsDoScavenging\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 5: {
		struct WinsGetDbRecs *r2 = (struct WinsGetDbRecs *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsGetDbRecs replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsGetDbRecs, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsGetDbRecs\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 6: {
		struct WinsTerm *r2 = (struct WinsTerm *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsTerm replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsTerm, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsTerm\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 7: {
		struct WinsBackup *r2 = (struct WinsBackup *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsBackup replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsBackup, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsBackup\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 8: {
		struct WinsDelDbRecs *r2 = (struct WinsDelDbRecs *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsDelDbRecs replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsDelDbRecs, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsDelDbRecs\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 9: {
		struct WinsPullRange *r2 = (struct WinsPullRange *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsPullRange replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsPullRange, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsPullRange\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 10: {
		struct WinsSetPriorityClass *r2 = (struct WinsSetPriorityClass *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsSetPriorityClass replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsSetPriorityClass, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsSetPriorityClass\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 11: {
		struct WinsResetCounters *r2 = (struct WinsResetCounters *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsResetCounters replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsResetCounters, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsResetCounters\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 12: {
		struct WinsWorkerThreadUpdate *r2 = (struct WinsWorkerThreadUpdate *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsWorkerThreadUpdate replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsWorkerThreadUpdate, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsWorkerThreadUpdate\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 13: {
		struct WinsGetNameAndAdd *r2 = (struct WinsGetNameAndAdd *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsGetNameAndAdd replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsGetNameAndAdd, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsGetNameAndAdd\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 14: {
		struct WinsGetBrowserNames_Old *r2 = (struct WinsGetBrowserNames_Old *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsGetBrowserNames_Old replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsGetBrowserNames_Old, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsGetBrowserNames_Old\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 15: {
		struct WinsDeleteWins *r2 = (struct WinsDeleteWins *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsDeleteWins replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsDeleteWins, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsDeleteWins\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 16: {
		struct WinsSetFlags *r2 = (struct WinsSetFlags *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsSetFlags replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsSetFlags, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsSetFlags\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 17: {
		struct WinsGetDbRecsByName *r2 = (struct WinsGetDbRecsByName *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsGetDbRecsByName replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsGetDbRecsByName, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsGetDbRecsByName\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 18: {
		struct WinsStatusWHdl *r2 = (struct WinsStatusWHdl *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsStatusWHdl replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsStatusWHdl, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsStatusWHdl\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 19: {
		struct WinsDoScanvenging2 *r2 = (struct WinsDoScanvenging2 *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function WinsDoScanvenging2 replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(WinsDoScanvenging2, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in WinsDoScanvenging2\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(&dcerpc_table_WinsPipe, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS WinsPipe__op_ndr_push(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_push *push, const void *r)
{
	NTSTATUS status;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	status = dcerpc_table_WinsPipe.calls[opnum].ndr_push(push, NDR_OUT, r);
	if (!NT_STATUS_IS_OK(status)) {
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static const struct dcesrv_interface WinsPipe_interface = {
	.name		= "WinsPipe",
	.syntax_id  = {{0x45f52c28,0x7f9f,0x101a,{0xb5,0x2b},{0x08,0x00,0x2b,0x2e,0xfa,0xbe}},1.0},
	.bind		= WinsPipe__op_bind,
	.unbind		= WinsPipe__op_unbind,
	.ndr_pull	= WinsPipe__op_ndr_pull,
	.dispatch	= WinsPipe__op_dispatch,
	.reply		= WinsPipe__op_reply,
	.ndr_push	= WinsPipe__op_ndr_push
};


static NTSTATUS WinsPipe__op_init_server(struct dcesrv_context *dce_ctx, const struct dcesrv_endpoint_server *ep_server)
{
	int i;

	for (i=0;i<dcerpc_table_WinsPipe.endpoints->count;i++) {
		NTSTATUS ret;
		const char *name = dcerpc_table_WinsPipe.endpoints->names[i];

		ret = dcesrv_interface_register(dce_ctx, name, &WinsPipe_interface, NULL);
		if (!NT_STATUS_IS_OK(ret)) {
			DEBUG(1,("WinsPipe_op_init_server: failed to register endpoint '%s'\n",name));
			return ret;
		}
	}

	return NT_STATUS_OK;
}

static BOOL WinsPipe__op_interface_by_uuid(struct dcesrv_interface *iface, const struct GUID *uuid, uint32_t if_version)
{
	if (WinsPipe_interface.syntax_id.if_version == if_version &&
		GUID_equal(&WinsPipe_interface.syntax_id.uuid, uuid)) {
		memcpy(iface,&WinsPipe_interface, sizeof(*iface));
		return True;
	}

	return False;
}

static BOOL WinsPipe__op_interface_by_name(struct dcesrv_interface *iface, const char *name)
{
	if (strcmp(WinsPipe_interface.name, name)==0) {
		memcpy(iface,&WinsPipe_interface, sizeof(*iface));
		return True;
	}

	return False;	
}
	
NTSTATUS dcerpc_server_WinsPipe_init(void)
{
	NTSTATUS ret;
	struct dcesrv_endpoint_server ep_server;

	/* fill in our name */
	ep_server.name = "WinsPipe";

	/* fill in all the operations */
	ep_server.init_server = WinsPipe__op_init_server;

	ep_server.interface_by_uuid = WinsPipe__op_interface_by_uuid;
	ep_server.interface_by_name = WinsPipe__op_interface_by_name;

	/* register ourselves with the DCERPC subsystem. */
	ret = dcerpc_register_ep_server(&ep_server);

	if (!NT_STATUS_IS_OK(ret)) {
		DEBUG(0,("Failed to register 'WinsPipe' endpoint server!\n"));
		return ret;
	}

	return ret;
}
