#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/sasl_helpers.h"
#ifndef _HEADER_RPC_sasl_helpers
#define _HEADER_RPC_sasl_helpers


struct rpc_request *dcerpc_decode_saslauthd_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_saslauthd *r);
NTSTATUS dcerpc_decode_saslauthd(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct decode_saslauthd *r);
#endif /* _HEADER_RPC_sasl_helpers */
