#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/winstation.h"
#ifndef _HEADER_RPC_winstation
#define _HEADER_RPC_winstation

extern const struct dcerpc_interface_table dcerpc_table_winstation;

struct rpc_request *dcerpc_winstation_foo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winstation_foo *r);
NTSTATUS dcerpc_winstation_foo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winstation_foo *r);
#endif /* _HEADER_RPC_winstation */
