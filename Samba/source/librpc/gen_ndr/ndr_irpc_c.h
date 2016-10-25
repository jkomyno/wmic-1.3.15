#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/irpc.h"
#ifndef _HEADER_RPC_irpc
#define _HEADER_RPC_irpc

extern const struct dcerpc_interface_table dcerpc_table_irpc;

struct rpc_request *dcerpc_irpc_uptime_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct irpc_uptime *r);
NTSTATUS dcerpc_irpc_uptime(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct irpc_uptime *r);

struct rpc_request *dcerpc_nbtd_information_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct nbtd_information *r);
NTSTATUS dcerpc_nbtd_information(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct nbtd_information *r);

struct rpc_request *dcerpc_nbtd_getdcname_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct nbtd_getdcname *r);
NTSTATUS dcerpc_nbtd_getdcname(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct nbtd_getdcname *r);

struct rpc_request *dcerpc_nbtd_proxy_wins_challenge_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct nbtd_proxy_wins_challenge *r);
NTSTATUS dcerpc_nbtd_proxy_wins_challenge(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct nbtd_proxy_wins_challenge *r);

struct rpc_request *dcerpc_nbtd_proxy_wins_release_demand_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct nbtd_proxy_wins_release_demand *r);
NTSTATUS dcerpc_nbtd_proxy_wins_release_demand(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct nbtd_proxy_wins_release_demand *r);

struct rpc_request *dcerpc_smbsrv_information_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct smbsrv_information *r);
NTSTATUS dcerpc_smbsrv_information(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct smbsrv_information *r);
#endif /* _HEADER_RPC_irpc */
