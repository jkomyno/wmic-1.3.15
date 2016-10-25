#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/msgsvc.h"
#ifndef _HEADER_RPC_msgsvc
#define _HEADER_RPC_msgsvc

extern const struct dcerpc_interface_table dcerpc_table_msgsvc;

struct rpc_request *dcerpc_NetrMessageNameAdd_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrMessageNameAdd *r);
NTSTATUS dcerpc_NetrMessageNameAdd(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrMessageNameAdd *r);

struct rpc_request *dcerpc_NetrMessageNameEnum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrMessageNameEnum *r);
NTSTATUS dcerpc_NetrMessageNameEnum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrMessageNameEnum *r);

struct rpc_request *dcerpc_NetrMessageNameGetInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrMessageNameGetInfo *r);
NTSTATUS dcerpc_NetrMessageNameGetInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrMessageNameGetInfo *r);

struct rpc_request *dcerpc_NetrMessageNameDel_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrMessageNameDel *r);
NTSTATUS dcerpc_NetrMessageNameDel(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrMessageNameDel *r);
#endif /* _HEADER_RPC_msgsvc */
#ifndef _HEADER_RPC_msgsvcsend
#define _HEADER_RPC_msgsvcsend

extern const struct dcerpc_interface_table dcerpc_table_msgsvcsend;

struct rpc_request *dcerpc_NetrSendMessage_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrSendMessage *r);
NTSTATUS dcerpc_NetrSendMessage(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrSendMessage *r);
#endif /* _HEADER_RPC_msgsvcsend */
