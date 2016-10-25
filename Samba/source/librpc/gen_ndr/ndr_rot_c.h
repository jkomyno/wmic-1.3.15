#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/rot.h"
#ifndef _HEADER_RPC_rot
#define _HEADER_RPC_rot

extern const struct dcerpc_interface_table dcerpc_table_rot;

struct rpc_request *dcerpc_rot_add_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_add *r);
NTSTATUS dcerpc_rot_add(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_add *r);

struct rpc_request *dcerpc_rot_remove_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_remove *r);
NTSTATUS dcerpc_rot_remove(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_remove *r);

struct rpc_request *dcerpc_rot_is_listed_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_is_listed *r);
NTSTATUS dcerpc_rot_is_listed(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_is_listed *r);

struct rpc_request *dcerpc_rot_get_interface_pointer_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_get_interface_pointer *r);
NTSTATUS dcerpc_rot_get_interface_pointer(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_get_interface_pointer *r);

struct rpc_request *dcerpc_rot_set_modification_time_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_set_modification_time *r);
NTSTATUS dcerpc_rot_set_modification_time(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_set_modification_time *r);

struct rpc_request *dcerpc_rot_get_modification_time_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_get_modification_time *r);
NTSTATUS dcerpc_rot_get_modification_time(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_get_modification_time *r);

struct rpc_request *dcerpc_rot_enum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_enum *r);
NTSTATUS dcerpc_rot_enum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct rot_enum *r);
#endif /* _HEADER_RPC_rot */
