#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/echo.h"
#ifndef _HEADER_RPC_rpcecho
#define _HEADER_RPC_rpcecho

extern const struct dcerpc_interface_table dcerpc_table_rpcecho;

struct rpc_request *dcerpc_echo_AddOne_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_AddOne *r);
NTSTATUS dcerpc_echo_AddOne(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_AddOne *r);

struct rpc_request *dcerpc_echo_EchoData_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_EchoData *r);
NTSTATUS dcerpc_echo_EchoData(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_EchoData *r);

struct rpc_request *dcerpc_echo_SinkData_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_SinkData *r);
NTSTATUS dcerpc_echo_SinkData(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_SinkData *r);

struct rpc_request *dcerpc_echo_SourceData_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_SourceData *r);
NTSTATUS dcerpc_echo_SourceData(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_SourceData *r);

struct rpc_request *dcerpc_echo_TestCall_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_TestCall *r);
NTSTATUS dcerpc_echo_TestCall(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_TestCall *r);

struct rpc_request *dcerpc_echo_TestCall2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_TestCall2 *r);
NTSTATUS dcerpc_echo_TestCall2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_TestCall2 *r);

struct rpc_request *dcerpc_echo_TestSleep_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_TestSleep *r);
NTSTATUS dcerpc_echo_TestSleep(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_TestSleep *r);

struct rpc_request *dcerpc_echo_TestEnum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_TestEnum *r);
NTSTATUS dcerpc_echo_TestEnum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_TestEnum *r);

struct rpc_request *dcerpc_echo_TestSurrounding_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_TestSurrounding *r);
NTSTATUS dcerpc_echo_TestSurrounding(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_TestSurrounding *r);

struct rpc_request *dcerpc_echo_TestDoublePointer_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_TestDoublePointer *r);
NTSTATUS dcerpc_echo_TestDoublePointer(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct echo_TestDoublePointer *r);
#endif /* _HEADER_RPC_rpcecho */
