#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/krb5pac.h"
#ifndef _HEADER_RPC_krb5pac
#define _HEADER_RPC_krb5pac

extern const struct dcerpc_interface_table dcerpc_table_krb5pac;

struct rpc_request *dcerpc_decode_pac_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_pac *r);
NTSTATUS dcerpc_decode_pac(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_pac *r);

struct rpc_request *dcerpc_decode_pac_raw_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_pac_raw *r);
NTSTATUS dcerpc_decode_pac_raw(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_pac_raw *r);

struct rpc_request *dcerpc_decode_login_info_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_login_info *r);
NTSTATUS dcerpc_decode_login_info(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_login_info *r);
#endif /* _HEADER_RPC_krb5pac */
