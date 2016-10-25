#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/frsapi.h"
#ifndef _HEADER_RPC_frsapi
#define _HEADER_RPC_frsapi

extern const struct dcerpc_interface_table dcerpc_table_frsapi;

struct rpc_request *dcerpc_FRSAPI_VERIFY_PROMOTION_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_VERIFY_PROMOTION *r);
NTSTATUS dcerpc_FRSAPI_VERIFY_PROMOTION(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_VERIFY_PROMOTION *r);

struct rpc_request *dcerpc_FRSAPI_PROMOTION_STATUS_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_PROMOTION_STATUS *r);
NTSTATUS dcerpc_FRSAPI_PROMOTION_STATUS(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_PROMOTION_STATUS *r);

struct rpc_request *dcerpc_FRSAPI_START_DEMOTION_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_START_DEMOTION *r);
NTSTATUS dcerpc_FRSAPI_START_DEMOTION(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_START_DEMOTION *r);

struct rpc_request *dcerpc_FRSAPI_COMMIT_DEMOTION_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_COMMIT_DEMOTION *r);
NTSTATUS dcerpc_FRSAPI_COMMIT_DEMOTION(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_COMMIT_DEMOTION *r);

struct rpc_request *dcerpc_FRSAPI_SET_DS_POLLING_INTERVAL_W_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_SET_DS_POLLING_INTERVAL_W *r);
NTSTATUS dcerpc_FRSAPI_SET_DS_POLLING_INTERVAL_W(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_SET_DS_POLLING_INTERVAL_W *r);

struct rpc_request *dcerpc_FRSAPI_GET_DS_POLLING_INTERVAL_W_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_GET_DS_POLLING_INTERVAL_W *r);
NTSTATUS dcerpc_FRSAPI_GET_DS_POLLING_INTERVAL_W(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_GET_DS_POLLING_INTERVAL_W *r);

struct rpc_request *dcerpc_FRSAPI_VERIFY_PROMOTION_W_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_VERIFY_PROMOTION_W *r);
NTSTATUS dcerpc_FRSAPI_VERIFY_PROMOTION_W(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_VERIFY_PROMOTION_W *r);

struct rpc_request *dcerpc_FRSAPI_INFO_W_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_INFO_W *r);
NTSTATUS dcerpc_FRSAPI_INFO_W(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_INFO_W *r);

struct rpc_request *dcerpc_FRSAPI_IS_PATH_REPLICATED_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_IS_PATH_REPLICATED *r);
NTSTATUS dcerpc_FRSAPI_IS_PATH_REPLICATED(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_IS_PATH_REPLICATED *r);

struct rpc_request *dcerpc_FRSAPI_WRITER_COMMAND_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_WRITER_COMMAND *r);
NTSTATUS dcerpc_FRSAPI_WRITER_COMMAND(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct FRSAPI_WRITER_COMMAND *r);
#endif /* _HEADER_RPC_frsapi */
