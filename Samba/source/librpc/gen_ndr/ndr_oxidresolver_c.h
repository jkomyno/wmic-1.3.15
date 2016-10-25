#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/oxidresolver.h"
#ifndef _HEADER_RPC_IOXIDResolver
#define _HEADER_RPC_IOXIDResolver

extern const struct dcerpc_interface_table dcerpc_table_IOXIDResolver;

struct rpc_request *dcerpc_ResolveOxid_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ResolveOxid *r);
NTSTATUS dcerpc_ResolveOxid(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ResolveOxid *r);

struct rpc_request *dcerpc_SimplePing_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct SimplePing *r);
NTSTATUS dcerpc_SimplePing(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct SimplePing *r);

struct rpc_request *dcerpc_ComplexPing_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ComplexPing *r);
NTSTATUS dcerpc_ComplexPing(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ComplexPing *r);

struct rpc_request *dcerpc_ServerAlive_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ServerAlive *r);
NTSTATUS dcerpc_ServerAlive(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ServerAlive *r);

struct rpc_request *dcerpc_ResolveOxid2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ResolveOxid2 *r);
NTSTATUS dcerpc_ResolveOxid2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ResolveOxid2 *r);

struct rpc_request *dcerpc_ServerAlive2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ServerAlive2 *r);
NTSTATUS dcerpc_ServerAlive2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ServerAlive2 *r);
#endif /* _HEADER_RPC_IOXIDResolver */
