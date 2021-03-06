#ifndef __NTVFS_IPC_PROTO_H__
#define __NTVFS_IPC_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from ntvfs/ipc/vfs_ipc.c  */

NTSTATUS ntvfs_ipc_init(void);

/* The following definitions come from ntvfs/ipc/ipc_rap.c  */

NTSTATUS ipc_rap_call(TALLOC_CTX *mem_ctx, struct smb_trans2 *trans);

/* The following definitions come from ntvfs/ipc/rap_server.c  */

NTSTATUS rap_netshareenum(TALLOC_CTX *mem_ctx,
			  struct rap_NetShareEnum *r);
NTSTATUS rap_netserverenum2(TALLOC_CTX *mem_ctx,
			    struct rap_NetServerEnum2 *r);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __NTVFS_IPC_PROTO_H__ */

