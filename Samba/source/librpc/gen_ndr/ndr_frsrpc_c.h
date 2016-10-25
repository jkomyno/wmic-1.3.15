#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/frsrpc.h"
#ifndef _HEADER_RPC_frsrpc
#define _HEADER_RPC_frsrpc

extern const struct dcerpc_interface_table dcerpc_table_frsrpc;

struct rpc_request *dcerpc_FRSRPC_SEND_COMM_PKT_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_SEND_COMM_PKT *r);
NTSTATUS dcerpc_FRSRPC_SEND_COMM_PKT(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_SEND_COMM_PKT *r);

struct rpc_request *dcerpc_FRSRPC_VERIFY_PROMOTION_PARENT_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_VERIFY_PROMOTION_PARENT *r);
NTSTATUS dcerpc_FRSRPC_VERIFY_PROMOTION_PARENT(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_VERIFY_PROMOTION_PARENT *r);

struct rpc_request *dcerpc_FRSRPC_START_PROMOTION_PARENT_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_START_PROMOTION_PARENT *r);
NTSTATUS dcerpc_FRSRPC_START_PROMOTION_PARENT(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_START_PROMOTION_PARENT *r);

struct rpc_request *dcerpc_FRSRPC_NOP_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_NOP *r);
NTSTATUS dcerpc_FRSRPC_NOP(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_NOP *r);

struct rpc_request *dcerpc_FRSRPC_BACKUP_COMPLETE_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_BACKUP_COMPLETE *r);
NTSTATUS dcerpc_FRSRPC_BACKUP_COMPLETE(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_BACKUP_COMPLETE *r);

struct rpc_request *dcerpc_FRSRPC_BACKUP_COMPLETE_5_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_BACKUP_COMPLETE_5 *r);
NTSTATUS dcerpc_FRSRPC_BACKUP_COMPLETE_5(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_BACKUP_COMPLETE_5 *r);

struct rpc_request *dcerpc_FRSRPC_BACKUP_COMPLETE_6_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_BACKUP_COMPLETE_6 *r);
NTSTATUS dcerpc_FRSRPC_BACKUP_COMPLETE_6(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_BACKUP_COMPLETE_6 *r);

struct rpc_request *dcerpc_FRSRPC_BACKUP_COMPLETE_7_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_BACKUP_COMPLETE_7 *r);
NTSTATUS dcerpc_FRSRPC_BACKUP_COMPLETE_7(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_BACKUP_COMPLETE_7 *r);

struct rpc_request *dcerpc_FRSRPC_BACKUP_COMPLETE_8_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_BACKUP_COMPLETE_8 *r);
NTSTATUS dcerpc_FRSRPC_BACKUP_COMPLETE_8(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_BACKUP_COMPLETE_8 *r);

struct rpc_request *dcerpc_FRSRPC_BACKUP_COMPLETE_9_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_BACKUP_COMPLETE_9 *r);
NTSTATUS dcerpc_FRSRPC_BACKUP_COMPLETE_9(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_BACKUP_COMPLETE_9 *r);

struct rpc_request *dcerpc_FRSRPC_VERIFY_PROMOTION_PARENT_EX_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_VERIFY_PROMOTION_PARENT_EX *r);
NTSTATUS dcerpc_FRSRPC_VERIFY_PROMOTION_PARENT_EX(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSRPC_VERIFY_PROMOTION_PARENT_EX *r);
#endif /* _HEADER_RPC_frsrpc */
