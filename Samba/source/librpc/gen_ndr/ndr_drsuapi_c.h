#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/drsuapi.h"
#ifndef _HEADER_RPC_drsuapi
#define _HEADER_RPC_drsuapi

extern const struct dcerpc_interface_table dcerpc_table_drsuapi;

struct rpc_request *dcerpc_drsuapi_DsBind_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsBind *r);
NTSTATUS dcerpc_drsuapi_DsBind(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsBind *r);

struct rpc_request *dcerpc_drsuapi_DsUnbind_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsUnbind *r);
NTSTATUS dcerpc_drsuapi_DsUnbind(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsUnbind *r);

struct rpc_request *dcerpc_drsuapi_DsReplicaSync_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsReplicaSync *r);
NTSTATUS dcerpc_drsuapi_DsReplicaSync(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsReplicaSync *r);

struct rpc_request *dcerpc_drsuapi_DsGetNCChanges_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsGetNCChanges *r);
NTSTATUS dcerpc_drsuapi_DsGetNCChanges(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsGetNCChanges *r);

struct rpc_request *dcerpc_drsuapi_DsReplicaUpdateRefs_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsReplicaUpdateRefs *r);
NTSTATUS dcerpc_drsuapi_DsReplicaUpdateRefs(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsReplicaUpdateRefs *r);

struct rpc_request *dcerpc_DRSUAPI_REPLICA_ADD_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_REPLICA_ADD *r);
NTSTATUS dcerpc_DRSUAPI_REPLICA_ADD(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_REPLICA_ADD *r);

struct rpc_request *dcerpc_DRSUAPI_REPLICA_DEL_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_REPLICA_DEL *r);
NTSTATUS dcerpc_DRSUAPI_REPLICA_DEL(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_REPLICA_DEL *r);

struct rpc_request *dcerpc_DRSUAPI_REPLICA_MODIFY_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_REPLICA_MODIFY *r);
NTSTATUS dcerpc_DRSUAPI_REPLICA_MODIFY(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_REPLICA_MODIFY *r);

struct rpc_request *dcerpc_DRSUAPI_VERIFY_NAMES_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_VERIFY_NAMES *r);
NTSTATUS dcerpc_DRSUAPI_VERIFY_NAMES(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_VERIFY_NAMES *r);

struct rpc_request *dcerpc_drsuapi_DsGetMemberships_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsGetMemberships *r);
NTSTATUS dcerpc_drsuapi_DsGetMemberships(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsGetMemberships *r);

struct rpc_request *dcerpc_DRSUAPI_INTER_DOMAIN_MOVE_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_INTER_DOMAIN_MOVE *r);
NTSTATUS dcerpc_DRSUAPI_INTER_DOMAIN_MOVE(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_INTER_DOMAIN_MOVE *r);

struct rpc_request *dcerpc_DRSUAPI_GET_NT4_CHANGELOG_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_GET_NT4_CHANGELOG *r);
NTSTATUS dcerpc_DRSUAPI_GET_NT4_CHANGELOG(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_GET_NT4_CHANGELOG *r);

struct rpc_request *dcerpc_drsuapi_DsCrackNames_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsCrackNames *r);
NTSTATUS dcerpc_drsuapi_DsCrackNames(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsCrackNames *r);

struct rpc_request *dcerpc_drsuapi_DsWriteAccountSpn_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsWriteAccountSpn *r);
NTSTATUS dcerpc_drsuapi_DsWriteAccountSpn(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsWriteAccountSpn *r);

struct rpc_request *dcerpc_drsuapi_DsRemoveDSServer_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsRemoveDSServer *r);
NTSTATUS dcerpc_drsuapi_DsRemoveDSServer(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsRemoveDSServer *r);

struct rpc_request *dcerpc_DRSUAPI_REMOVE_DS_DOMAIN_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_REMOVE_DS_DOMAIN *r);
NTSTATUS dcerpc_DRSUAPI_REMOVE_DS_DOMAIN(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_REMOVE_DS_DOMAIN *r);

struct rpc_request *dcerpc_drsuapi_DsGetDomainControllerInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsGetDomainControllerInfo *r);
NTSTATUS dcerpc_drsuapi_DsGetDomainControllerInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsGetDomainControllerInfo *r);

struct rpc_request *dcerpc_drsuapi_DsAddEntry_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsAddEntry *r);
NTSTATUS dcerpc_drsuapi_DsAddEntry(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsAddEntry *r);

struct rpc_request *dcerpc_DRSUAPI_EXECUTE_KCC_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_EXECUTE_KCC *r);
NTSTATUS dcerpc_DRSUAPI_EXECUTE_KCC(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_EXECUTE_KCC *r);

struct rpc_request *dcerpc_drsuapi_DsReplicaGetInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsReplicaGetInfo *r);
NTSTATUS dcerpc_drsuapi_DsReplicaGetInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsReplicaGetInfo *r);

struct rpc_request *dcerpc_DRSUAPI_ADD_SID_HISTORY_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_ADD_SID_HISTORY *r);
NTSTATUS dcerpc_DRSUAPI_ADD_SID_HISTORY(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_ADD_SID_HISTORY *r);

struct rpc_request *dcerpc_drsuapi_DsGetMemberships2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsGetMemberships2 *r);
NTSTATUS dcerpc_drsuapi_DsGetMemberships2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct drsuapi_DsGetMemberships2 *r);

struct rpc_request *dcerpc_DRSUAPI_REPLICA_VERIFY_OBJECTS_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_REPLICA_VERIFY_OBJECTS *r);
NTSTATUS dcerpc_DRSUAPI_REPLICA_VERIFY_OBJECTS(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_REPLICA_VERIFY_OBJECTS *r);

struct rpc_request *dcerpc_DRSUAPI_GET_OBJECT_EXISTENCE_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_GET_OBJECT_EXISTENCE *r);
NTSTATUS dcerpc_DRSUAPI_GET_OBJECT_EXISTENCE(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_GET_OBJECT_EXISTENCE *r);

struct rpc_request *dcerpc_DRSUAPI_QUERY_SITES_BY_COST_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_QUERY_SITES_BY_COST *r);
NTSTATUS dcerpc_DRSUAPI_QUERY_SITES_BY_COST(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DRSUAPI_QUERY_SITES_BY_COST *r);
#endif /* _HEADER_RPC_drsuapi */
