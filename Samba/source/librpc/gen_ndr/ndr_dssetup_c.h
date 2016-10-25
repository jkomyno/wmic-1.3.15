#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/dssetup.h"
#ifndef _HEADER_RPC_dssetup
#define _HEADER_RPC_dssetup

extern const struct dcerpc_interface_table dcerpc_table_dssetup;

struct rpc_request *dcerpc_dssetup_DsRoleGetPrimaryDomainInformation_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleGetPrimaryDomainInformation *r);
NTSTATUS dcerpc_dssetup_DsRoleGetPrimaryDomainInformation(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleGetPrimaryDomainInformation *r);

struct rpc_request *dcerpc_dssetup_DsRoleDnsNameToFlatName_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleDnsNameToFlatName *r);
NTSTATUS dcerpc_dssetup_DsRoleDnsNameToFlatName(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleDnsNameToFlatName *r);

struct rpc_request *dcerpc_dssetup_DsRoleDcAsDc_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleDcAsDc *r);
NTSTATUS dcerpc_dssetup_DsRoleDcAsDc(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleDcAsDc *r);

struct rpc_request *dcerpc_dssetup_DsRoleDcAsReplica_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleDcAsReplica *r);
NTSTATUS dcerpc_dssetup_DsRoleDcAsReplica(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleDcAsReplica *r);

struct rpc_request *dcerpc_dssetup_DsRoleDemoteDc_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleDemoteDc *r);
NTSTATUS dcerpc_dssetup_DsRoleDemoteDc(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleDemoteDc *r);

struct rpc_request *dcerpc_dssetup_DsRoleGetDcOperationProgress_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleGetDcOperationProgress *r);
NTSTATUS dcerpc_dssetup_DsRoleGetDcOperationProgress(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleGetDcOperationProgress *r);

struct rpc_request *dcerpc_dssetup_DsRoleGetDcOperationResults_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleGetDcOperationResults *r);
NTSTATUS dcerpc_dssetup_DsRoleGetDcOperationResults(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleGetDcOperationResults *r);

struct rpc_request *dcerpc_dssetup_DsRoleCancel_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleCancel *r);
NTSTATUS dcerpc_dssetup_DsRoleCancel(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleCancel *r);

struct rpc_request *dcerpc_dssetup_DsRoleServerSaveStateForUpgrade_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleServerSaveStateForUpgrade *r);
NTSTATUS dcerpc_dssetup_DsRoleServerSaveStateForUpgrade(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleServerSaveStateForUpgrade *r);

struct rpc_request *dcerpc_dssetup_DsRoleUpgradeDownlevelServer_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleUpgradeDownlevelServer *r);
NTSTATUS dcerpc_dssetup_DsRoleUpgradeDownlevelServer(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleUpgradeDownlevelServer *r);

struct rpc_request *dcerpc_dssetup_DsRoleAbortDownlevelServerUpgrade_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleAbortDownlevelServerUpgrade *r);
NTSTATUS dcerpc_dssetup_DsRoleAbortDownlevelServerUpgrade(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct dssetup_DsRoleAbortDownlevelServerUpgrade *r);
#endif /* _HEADER_RPC_dssetup */
