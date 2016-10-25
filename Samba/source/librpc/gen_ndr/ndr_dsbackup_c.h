#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/dsbackup.h"
#ifndef _HEADER_RPC_ad_backup
#define _HEADER_RPC_ad_backup

extern const struct dcerpc_interface_table dcerpc_table_ad_backup;

struct rpc_request *dcerpc_HrRBackupPrepare_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupPrepare *r);
NTSTATUS dcerpc_HrRBackupPrepare(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupPrepare *r);

struct rpc_request *dcerpc_HrRBackupEnd_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupEnd *r);
NTSTATUS dcerpc_HrRBackupEnd(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupEnd *r);

struct rpc_request *dcerpc_HrRBackupGetAttachmentInformation_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupGetAttachmentInformation *r);
NTSTATUS dcerpc_HrRBackupGetAttachmentInformation(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupGetAttachmentInformation *r);

struct rpc_request *dcerpc_HrRBackupOpenFile_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupOpenFile *r);
NTSTATUS dcerpc_HrRBackupOpenFile(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupOpenFile *r);

struct rpc_request *dcerpc_HrRBackupRead_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupRead *r);
NTSTATUS dcerpc_HrRBackupRead(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupRead *r);

struct rpc_request *dcerpc_HrRBackupClose_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupClose *r);
NTSTATUS dcerpc_HrRBackupClose(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupClose *r);

struct rpc_request *dcerpc_HrRBackupGetBackupLogs_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupGetBackupLogs *r);
NTSTATUS dcerpc_HrRBackupGetBackupLogs(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupGetBackupLogs *r);

struct rpc_request *dcerpc_HrRBackupTruncateLogs_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupTruncateLogs *r);
NTSTATUS dcerpc_HrRBackupTruncateLogs(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupTruncateLogs *r);

struct rpc_request *dcerpc_HrRBackupPing_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupPing *r);
NTSTATUS dcerpc_HrRBackupPing(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRBackupPing *r);
#endif /* _HEADER_RPC_ad_backup */
#ifndef _HEADER_RPC_ad_restore
#define _HEADER_RPC_ad_restore

extern const struct dcerpc_interface_table dcerpc_table_ad_restore;

struct rpc_request *dcerpc_HrRIsNTDSOnline_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRIsNTDSOnline *r);
NTSTATUS dcerpc_HrRIsNTDSOnline(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRIsNTDSOnline *r);

struct rpc_request *dcerpc_HrRRestorePrepare_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestorePrepare *r);
NTSTATUS dcerpc_HrRRestorePrepare(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestorePrepare *r);

struct rpc_request *dcerpc_HrRRestoreRegister_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreRegister *r);
NTSTATUS dcerpc_HrRRestoreRegister(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreRegister *r);

struct rpc_request *dcerpc_HrRRestoreRegisterComplete_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreRegisterComplete *r);
NTSTATUS dcerpc_HrRRestoreRegisterComplete(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreRegisterComplete *r);

struct rpc_request *dcerpc_HrRRestoreGetDatabaseLocations_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreGetDatabaseLocations *r);
NTSTATUS dcerpc_HrRRestoreGetDatabaseLocations(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreGetDatabaseLocations *r);

struct rpc_request *dcerpc_HrRRestoreEnd_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreEnd *r);
NTSTATUS dcerpc_HrRRestoreEnd(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreEnd *r);

struct rpc_request *dcerpc_HrRRestoreSetCurrentLogNumber_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreSetCurrentLogNumber *r);
NTSTATUS dcerpc_HrRRestoreSetCurrentLogNumber(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreSetCurrentLogNumber *r);

struct rpc_request *dcerpc_HrRRestoreCheckLogsForBackup_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreCheckLogsForBackup *r);
NTSTATUS dcerpc_HrRRestoreCheckLogsForBackup(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct HrRRestoreCheckLogsForBackup *r);
#endif /* _HEADER_RPC_ad_restore */
