/* header auto-generated by pidl */

#include "librpc/gen_ndr/efs.h"

#ifndef _HEADER_NDR_efs
#define _HEADER_NDR_efs

#include "librpc/ndr/libndr.h"
#define DCERPC_EFS_UUID "c681d488-d850-11d0-8c52-00c04fd90f7e"
#define DCERPC_EFS_VERSION 1.0
#define DCERPC_EFS_NAME "efs"
#define DCERPC_EFS_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_efs;
NTSTATUS dcerpc_server_efs_init(void);
#define DCERPC_EFSRPCOPENFILERAW (0x00)

#define DCERPC_EFSRPCREADFILERAW (0x01)

#define DCERPC_EFSRPCWRITEFILERAW (0x02)

#define DCERPC_EFSRPCCLOSERAW (0x03)

#define DCERPC_EFSRPCENCRYPTFILESRV (0x04)

#define DCERPC_EFSRPCDECRYPTFILESRV (0x05)

#define DCERPC_EFSRPCQUERYUSERSONFILE (0x06)

#define DCERPC_EFSRPCQUERYRECOVERYAGENTS (0x07)

#define DCERPC_EFSRPCREMOVEUSERSFROMFILE (0x08)

#define DCERPC_EFSRPCADDUSERSTOFILE (0x09)

#define DCERPC_EFSRPCSETFILEENCRYPTIONKEY (0x0a)

#define DCERPC_EFSRPCNOTSUPPORTED (0x0b)

#define DCERPC_EFSRPCFILEKEYINFO (0x0c)

#define DCERPC_EFSRPCDUPLICATEENCRYPTIONINFOFILE (0x0d)

#define DCERPC_EFS_CALL_COUNT (14)
void ndr_print_EFS_HASH_BLOB(struct ndr_print *ndr, const char *name, const struct EFS_HASH_BLOB *r);
void ndr_print_ENCRYPTION_CERTIFICATE_HASH(struct ndr_print *ndr, const char *name, const struct ENCRYPTION_CERTIFICATE_HASH *r);
void ndr_print_ENCRYPTION_CERTIFICATE_HASH_LIST(struct ndr_print *ndr, const char *name, const struct ENCRYPTION_CERTIFICATE_HASH_LIST *r);
void ndr_print_EFS_CERTIFICATE_BLOB(struct ndr_print *ndr, const char *name, const struct EFS_CERTIFICATE_BLOB *r);
void ndr_print_ENCRYPTION_CERTIFICATE(struct ndr_print *ndr, const char *name, const struct ENCRYPTION_CERTIFICATE *r);
void ndr_print_EfsRpcOpenFileRaw(struct ndr_print *ndr, const char *name, int flags, const struct EfsRpcOpenFileRaw *r);
void ndr_print_EfsRpcReadFileRaw(struct ndr_print *ndr, const char *name, int flags, const struct EfsRpcReadFileRaw *r);
void ndr_print_EfsRpcWriteFileRaw(struct ndr_print *ndr, const char *name, int flags, const struct EfsRpcWriteFileRaw *r);
void ndr_print_EfsRpcCloseRaw(struct ndr_print *ndr, const char *name, int flags, const struct EfsRpcCloseRaw *r);
void ndr_print_EfsRpcEncryptFileSrv(struct ndr_print *ndr, const char *name, int flags, const struct EfsRpcEncryptFileSrv *r);
void ndr_print_EfsRpcDecryptFileSrv(struct ndr_print *ndr, const char *name, int flags, const struct EfsRpcDecryptFileSrv *r);
void ndr_print_EfsRpcQueryUsersOnFile(struct ndr_print *ndr, const char *name, int flags, const struct EfsRpcQueryUsersOnFile *r);
void ndr_print_EfsRpcQueryRecoveryAgents(struct ndr_print *ndr, const char *name, int flags, const struct EfsRpcQueryRecoveryAgents *r);
void ndr_print_EfsRpcRemoveUsersFromFile(struct ndr_print *ndr, const char *name, int flags, const struct EfsRpcRemoveUsersFromFile *r);
void ndr_print_EfsRpcAddUsersToFile(struct ndr_print *ndr, const char *name, int flags, const struct EfsRpcAddUsersToFile *r);
void ndr_print_EfsRpcSetFileEncryptionKey(struct ndr_print *ndr, const char *name, int flags, const struct EfsRpcSetFileEncryptionKey *r);
void ndr_print_EfsRpcNotSupported(struct ndr_print *ndr, const char *name, int flags, const struct EfsRpcNotSupported *r);
void ndr_print_EfsRpcFileKeyInfo(struct ndr_print *ndr, const char *name, int flags, const struct EfsRpcFileKeyInfo *r);
void ndr_print_EfsRpcDuplicateEncryptionInfoFile(struct ndr_print *ndr, const char *name, int flags, const struct EfsRpcDuplicateEncryptionInfoFile *r);
#endif /* _HEADER_NDR_efs */
