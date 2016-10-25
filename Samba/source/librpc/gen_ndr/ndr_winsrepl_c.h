#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/winsrepl.h"
#ifndef _HEADER_RPC_wrepl
#define _HEADER_RPC_wrepl


struct rpc_request *dcerpc_decode_winsrepl_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_winsrepl *r);
NTSTATUS dcerpc_decode_winsrepl(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_winsrepl *r);
#endif /* _HEADER_RPC_wrepl */
