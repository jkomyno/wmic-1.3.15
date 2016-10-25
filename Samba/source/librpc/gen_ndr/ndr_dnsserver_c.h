#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/dnsserver.h"
#ifndef _HEADER_RPC_dnsserver
#define _HEADER_RPC_dnsserver

extern const struct dcerpc_interface_table dcerpc_table_dnsserver;

struct rpc_request *dcerpc_dnsserver_foo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dnsserver_foo *r);
NTSTATUS dcerpc_dnsserver_foo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dnsserver_foo *r);
#endif /* _HEADER_RPC_dnsserver */
