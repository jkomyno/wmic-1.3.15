#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/efs.h"
#ifndef _HEADER_RPC_efs
#define _HEADER_RPC_efs

extern const struct dcerpc_interface_table dcerpc_table_efs;

struct rpc_request *dcerpc_EfsRpcOpenFileRaw_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcOpenFileRaw *r);
NTSTATUS dcerpc_EfsRpcOpenFileRaw(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcOpenFileRaw *r);

struct rpc_request *dcerpc_EfsRpcReadFileRaw_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcReadFileRaw *r);
NTSTATUS dcerpc_EfsRpcReadFileRaw(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcReadFileRaw *r);

struct rpc_request *dcerpc_EfsRpcWriteFileRaw_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcWriteFileRaw *r);
NTSTATUS dcerpc_EfsRpcWriteFileRaw(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcWriteFileRaw *r);

struct rpc_request *dcerpc_EfsRpcCloseRaw_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcCloseRaw *r);
NTSTATUS dcerpc_EfsRpcCloseRaw(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcCloseRaw *r);

struct rpc_request *dcerpc_EfsRpcEncryptFileSrv_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcEncryptFileSrv *r);
NTSTATUS dcerpc_EfsRpcEncryptFileSrv(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcEncryptFileSrv *r);

struct rpc_request *dcerpc_EfsRpcDecryptFileSrv_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcDecryptFileSrv *r);
NTSTATUS dcerpc_EfsRpcDecryptFileSrv(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcDecryptFileSrv *r);

struct rpc_request *dcerpc_EfsRpcQueryUsersOnFile_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcQueryUsersOnFile *r);
NTSTATUS dcerpc_EfsRpcQueryUsersOnFile(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcQueryUsersOnFile *r);

struct rpc_request *dcerpc_EfsRpcQueryRecoveryAgents_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcQueryRecoveryAgents *r);
NTSTATUS dcerpc_EfsRpcQueryRecoveryAgents(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcQueryRecoveryAgents *r);

struct rpc_request *dcerpc_EfsRpcRemoveUsersFromFile_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcRemoveUsersFromFile *r);
NTSTATUS dcerpc_EfsRpcRemoveUsersFromFile(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcRemoveUsersFromFile *r);

struct rpc_request *dcerpc_EfsRpcAddUsersToFile_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcAddUsersToFile *r);
NTSTATUS dcerpc_EfsRpcAddUsersToFile(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcAddUsersToFile *r);

struct rpc_request *dcerpc_EfsRpcSetFileEncryptionKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcSetFileEncryptionKey *r);
NTSTATUS dcerpc_EfsRpcSetFileEncryptionKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcSetFileEncryptionKey *r);

struct rpc_request *dcerpc_EfsRpcNotSupported_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcNotSupported *r);
NTSTATUS dcerpc_EfsRpcNotSupported(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcNotSupported *r);

struct rpc_request *dcerpc_EfsRpcFileKeyInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcFileKeyInfo *r);
NTSTATUS dcerpc_EfsRpcFileKeyInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcFileKeyInfo *r);

struct rpc_request *dcerpc_EfsRpcDuplicateEncryptionInfoFile_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcDuplicateEncryptionInfoFile *r);
NTSTATUS dcerpc_EfsRpcDuplicateEncryptionInfoFile(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EfsRpcDuplicateEncryptionInfoFile *r);
#endif /* _HEADER_RPC_efs */
