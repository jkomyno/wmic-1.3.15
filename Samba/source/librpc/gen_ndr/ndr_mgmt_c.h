#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/mgmt.h"
#ifndef _HEADER_RPC_mgmt
#define _HEADER_RPC_mgmt

extern const struct dcerpc_interface_table dcerpc_table_mgmt;

struct rpc_request *dcerpc_mgmt_inq_if_ids_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct mgmt_inq_if_ids *r);
NTSTATUS dcerpc_mgmt_inq_if_ids(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct mgmt_inq_if_ids *r);

struct rpc_request *dcerpc_mgmt_inq_stats_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct mgmt_inq_stats *r);
NTSTATUS dcerpc_mgmt_inq_stats(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct mgmt_inq_stats *r);

struct rpc_request *dcerpc_mgmt_is_server_listening_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct mgmt_is_server_listening *r);
NTSTATUS dcerpc_mgmt_is_server_listening(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct mgmt_is_server_listening *r);

struct rpc_request *dcerpc_mgmt_stop_server_listening_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct mgmt_stop_server_listening *r);
NTSTATUS dcerpc_mgmt_stop_server_listening(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct mgmt_stop_server_listening *r);

struct rpc_request *dcerpc_mgmt_inq_princ_name_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct mgmt_inq_princ_name *r);
NTSTATUS dcerpc_mgmt_inq_princ_name(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct mgmt_inq_princ_name *r);
#endif /* _HEADER_RPC_mgmt */
