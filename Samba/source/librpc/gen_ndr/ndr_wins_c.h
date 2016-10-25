#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/wins.h"
#ifndef _HEADER_RPC_WinsPipe
#define _HEADER_RPC_WinsPipe

extern const struct dcerpc_interface_table dcerpc_table_WinsPipe;

struct rpc_request *dcerpc_WinsRecordAction_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsRecordAction *r);
NTSTATUS dcerpc_WinsRecordAction(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsRecordAction *r);

struct rpc_request *dcerpc_WinsStatus_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsStatus *r);
NTSTATUS dcerpc_WinsStatus(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsStatus *r);

struct rpc_request *dcerpc_WinsTrigger_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsTrigger *r);
NTSTATUS dcerpc_WinsTrigger(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsTrigger *r);

struct rpc_request *dcerpc_WinsDoStaticInit_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDoStaticInit *r);
NTSTATUS dcerpc_WinsDoStaticInit(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDoStaticInit *r);

struct rpc_request *dcerpc_WinsDoScavenging_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDoScavenging *r);
NTSTATUS dcerpc_WinsDoScavenging(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDoScavenging *r);

struct rpc_request *dcerpc_WinsGetDbRecs_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsGetDbRecs *r);
NTSTATUS dcerpc_WinsGetDbRecs(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsGetDbRecs *r);

struct rpc_request *dcerpc_WinsTerm_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsTerm *r);
NTSTATUS dcerpc_WinsTerm(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsTerm *r);

struct rpc_request *dcerpc_WinsBackup_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsBackup *r);
NTSTATUS dcerpc_WinsBackup(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsBackup *r);

struct rpc_request *dcerpc_WinsDelDbRecs_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDelDbRecs *r);
NTSTATUS dcerpc_WinsDelDbRecs(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDelDbRecs *r);

struct rpc_request *dcerpc_WinsPullRange_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsPullRange *r);
NTSTATUS dcerpc_WinsPullRange(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsPullRange *r);

struct rpc_request *dcerpc_WinsSetPriorityClass_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsSetPriorityClass *r);
NTSTATUS dcerpc_WinsSetPriorityClass(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsSetPriorityClass *r);

struct rpc_request *dcerpc_WinsResetCounters_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsResetCounters *r);
NTSTATUS dcerpc_WinsResetCounters(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsResetCounters *r);

struct rpc_request *dcerpc_WinsWorkerThreadUpdate_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsWorkerThreadUpdate *r);
NTSTATUS dcerpc_WinsWorkerThreadUpdate(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsWorkerThreadUpdate *r);

struct rpc_request *dcerpc_WinsGetNameAndAdd_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsGetNameAndAdd *r);
NTSTATUS dcerpc_WinsGetNameAndAdd(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsGetNameAndAdd *r);

struct rpc_request *dcerpc_WinsGetBrowserNames_Old_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsGetBrowserNames_Old *r);
NTSTATUS dcerpc_WinsGetBrowserNames_Old(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsGetBrowserNames_Old *r);

struct rpc_request *dcerpc_WinsDeleteWins_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDeleteWins *r);
NTSTATUS dcerpc_WinsDeleteWins(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDeleteWins *r);

struct rpc_request *dcerpc_WinsSetFlags_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsSetFlags *r);
NTSTATUS dcerpc_WinsSetFlags(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsSetFlags *r);

struct rpc_request *dcerpc_WinsGetDbRecsByName_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsGetDbRecsByName *r);
NTSTATUS dcerpc_WinsGetDbRecsByName(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsGetDbRecsByName *r);

struct rpc_request *dcerpc_WinsStatusWHdl_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsStatusWHdl *r);
NTSTATUS dcerpc_WinsStatusWHdl(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsStatusWHdl *r);

struct rpc_request *dcerpc_WinsDoScanvenging2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDoScanvenging2 *r);
NTSTATUS dcerpc_WinsDoScanvenging2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WinsDoScanvenging2 *r);
#endif /* _HEADER_RPC_WinsPipe */
