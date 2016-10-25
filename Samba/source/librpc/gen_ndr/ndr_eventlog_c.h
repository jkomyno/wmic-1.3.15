#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/eventlog.h"
#ifndef _HEADER_RPC_eventlog
#define _HEADER_RPC_eventlog

extern const struct dcerpc_interface_table dcerpc_table_eventlog;

struct rpc_request *dcerpc_eventlog_ClearEventLogW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_ClearEventLogW *r);
NTSTATUS dcerpc_eventlog_ClearEventLogW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_ClearEventLogW *r);

struct rpc_request *dcerpc_eventlog_BackupEventLogW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_BackupEventLogW *r);
NTSTATUS dcerpc_eventlog_BackupEventLogW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_BackupEventLogW *r);

struct rpc_request *dcerpc_eventlog_CloseEventLog_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_CloseEventLog *r);
NTSTATUS dcerpc_eventlog_CloseEventLog(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_CloseEventLog *r);

struct rpc_request *dcerpc_eventlog_DeregisterEventSource_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_DeregisterEventSource *r);
NTSTATUS dcerpc_eventlog_DeregisterEventSource(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_DeregisterEventSource *r);

struct rpc_request *dcerpc_eventlog_GetNumRecords_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_GetNumRecords *r);
NTSTATUS dcerpc_eventlog_GetNumRecords(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_GetNumRecords *r);

struct rpc_request *dcerpc_eventlog_GetOldestRecord_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_GetOldestRecord *r);
NTSTATUS dcerpc_eventlog_GetOldestRecord(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_GetOldestRecord *r);

struct rpc_request *dcerpc_eventlog_ChangeNotify_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_ChangeNotify *r);
NTSTATUS dcerpc_eventlog_ChangeNotify(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_ChangeNotify *r);

struct rpc_request *dcerpc_eventlog_OpenEventLogW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_OpenEventLogW *r);
NTSTATUS dcerpc_eventlog_OpenEventLogW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_OpenEventLogW *r);

struct rpc_request *dcerpc_eventlog_RegisterEventSourceW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_RegisterEventSourceW *r);
NTSTATUS dcerpc_eventlog_RegisterEventSourceW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_RegisterEventSourceW *r);

struct rpc_request *dcerpc_eventlog_OpenBackupEventLogW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_OpenBackupEventLogW *r);
NTSTATUS dcerpc_eventlog_OpenBackupEventLogW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_OpenBackupEventLogW *r);

struct rpc_request *dcerpc_eventlog_ReadEventLogW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_ReadEventLogW *r);
NTSTATUS dcerpc_eventlog_ReadEventLogW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_ReadEventLogW *r);

struct rpc_request *dcerpc_eventlog_ReportEventW_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_ReportEventW *r);
NTSTATUS dcerpc_eventlog_ReportEventW(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_ReportEventW *r);

struct rpc_request *dcerpc_eventlog_ClearEventLogA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_ClearEventLogA *r);
NTSTATUS dcerpc_eventlog_ClearEventLogA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_ClearEventLogA *r);

struct rpc_request *dcerpc_eventlog_BackupEventLogA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_BackupEventLogA *r);
NTSTATUS dcerpc_eventlog_BackupEventLogA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_BackupEventLogA *r);

struct rpc_request *dcerpc_eventlog_OpenEventLogA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_OpenEventLogA *r);
NTSTATUS dcerpc_eventlog_OpenEventLogA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_OpenEventLogA *r);

struct rpc_request *dcerpc_eventlog_RegisterEventSourceA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_RegisterEventSourceA *r);
NTSTATUS dcerpc_eventlog_RegisterEventSourceA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_RegisterEventSourceA *r);

struct rpc_request *dcerpc_eventlog_OpenBackupEventLogA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_OpenBackupEventLogA *r);
NTSTATUS dcerpc_eventlog_OpenBackupEventLogA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_OpenBackupEventLogA *r);

struct rpc_request *dcerpc_eventlog_ReadEventLogA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_ReadEventLogA *r);
NTSTATUS dcerpc_eventlog_ReadEventLogA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_ReadEventLogA *r);

struct rpc_request *dcerpc_eventlog_ReportEventA_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_ReportEventA *r);
NTSTATUS dcerpc_eventlog_ReportEventA(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_ReportEventA *r);

struct rpc_request *dcerpc_eventlog_RegisterClusterSvc_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_RegisterClusterSvc *r);
NTSTATUS dcerpc_eventlog_RegisterClusterSvc(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_RegisterClusterSvc *r);

struct rpc_request *dcerpc_eventlog_DeregisterClusterSvc_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_DeregisterClusterSvc *r);
NTSTATUS dcerpc_eventlog_DeregisterClusterSvc(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_DeregisterClusterSvc *r);

struct rpc_request *dcerpc_eventlog_WriteClusterEvents_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_WriteClusterEvents *r);
NTSTATUS dcerpc_eventlog_WriteClusterEvents(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_WriteClusterEvents *r);

struct rpc_request *dcerpc_eventlog_GetLogIntormation_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_GetLogIntormation *r);
NTSTATUS dcerpc_eventlog_GetLogIntormation(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_GetLogIntormation *r);

struct rpc_request *dcerpc_eventlog_FlushEventLog_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_FlushEventLog *r);
NTSTATUS dcerpc_eventlog_FlushEventLog(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct eventlog_FlushEventLog *r);
#endif /* _HEADER_RPC_eventlog */
