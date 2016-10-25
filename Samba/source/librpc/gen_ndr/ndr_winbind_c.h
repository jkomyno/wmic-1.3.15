#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/winbind.h"
#ifndef _HEADER_RPC_winbind
#define _HEADER_RPC_winbind

extern const struct dcerpc_interface_table dcerpc_table_winbind;

struct rpc_request *dcerpc_winbind_information_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winbind_information *r);
NTSTATUS dcerpc_winbind_information(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winbind_information *r);

struct rpc_request *dcerpc_winbind_remote_control_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winbind_remote_control *r);
NTSTATUS dcerpc_winbind_remote_control(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winbind_remote_control *r);

struct rpc_request *dcerpc_winbind_SamLogon_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winbind_SamLogon *r);
NTSTATUS dcerpc_winbind_SamLogon(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct winbind_SamLogon *r);
#endif /* _HEADER_RPC_winbind */
