#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/browser.h"
#ifndef _HEADER_RPC_browser
#define _HEADER_RPC_browser

extern const struct dcerpc_interface_table dcerpc_table_browser;

struct rpc_request *dcerpc_BrowserrServerEnum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserrServerEnum *r);
NTSTATUS dcerpc_BrowserrServerEnum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserrServerEnum *r);

struct rpc_request *dcerpc_BrowserrDebugCall_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserrDebugCall *r);
NTSTATUS dcerpc_BrowserrDebugCall(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserrDebugCall *r);

struct rpc_request *dcerpc_BrowserrQueryOtherDomains_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserrQueryOtherDomains *r);
NTSTATUS dcerpc_BrowserrQueryOtherDomains(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserrQueryOtherDomains *r);

struct rpc_request *dcerpc_BrowserrResetNetlogonState_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserrResetNetlogonState *r);
NTSTATUS dcerpc_BrowserrResetNetlogonState(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserrResetNetlogonState *r);

struct rpc_request *dcerpc_BrowserrDebugTrace_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserrDebugTrace *r);
NTSTATUS dcerpc_BrowserrDebugTrace(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserrDebugTrace *r);

struct rpc_request *dcerpc_BrowserrQueryStatistics_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserrQueryStatistics *r);
NTSTATUS dcerpc_BrowserrQueryStatistics(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserrQueryStatistics *r);

struct rpc_request *dcerpc_BrowserResetStatistics_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserResetStatistics *r);
NTSTATUS dcerpc_BrowserResetStatistics(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserResetStatistics *r);

struct rpc_request *dcerpc_NetrBrowserStatisticsClear_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrBrowserStatisticsClear *r);
NTSTATUS dcerpc_NetrBrowserStatisticsClear(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrBrowserStatisticsClear *r);

struct rpc_request *dcerpc_NetrBrowserStatisticsGet_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrBrowserStatisticsGet *r);
NTSTATUS dcerpc_NetrBrowserStatisticsGet(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NetrBrowserStatisticsGet *r);

struct rpc_request *dcerpc_BrowserrSetNetlogonState_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserrSetNetlogonState *r);
NTSTATUS dcerpc_BrowserrSetNetlogonState(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserrSetNetlogonState *r);

struct rpc_request *dcerpc_BrowserrQueryEmulatedDomains_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserrQueryEmulatedDomains *r);
NTSTATUS dcerpc_BrowserrQueryEmulatedDomains(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserrQueryEmulatedDomains *r);

struct rpc_request *dcerpc_BrowserrServerEnumEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserrServerEnumEx *r);
NTSTATUS dcerpc_BrowserrServerEnumEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BrowserrServerEnumEx *r);
#endif /* _HEADER_RPC_browser */
