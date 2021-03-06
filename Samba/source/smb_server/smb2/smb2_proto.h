#ifndef __SMB_SERVER_SMB2_SMB2_PROTO_H__
#define __SMB_SERVER_SMB2_SMB2_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from smb_server/smb2/receive.c  */

NTSTATUS smb2srv_setup_reply(struct smb2srv_request *req, uint16_t body_fixed_size,
			     BOOL body_dynamic_present, uint32_t body_dynamic_size);
void smb2srv_send_reply(struct smb2srv_request *req);
void smb2srv_send_error(struct smb2srv_request *req, NTSTATUS error);
NTSTATUS smbsrv_recv_smb2_request(void *private, DATA_BLOB blob);
NTSTATUS smb2srv_queue_pending(struct smb2srv_request *req);
void smb2srv_cancel_recv(struct smb2srv_request *req);
NTSTATUS smbsrv_init_smb2_connection(struct smbsrv_connection *smb_conn);

/* The following definitions come from smb_server/smb2/negprot.c  */

void smb2srv_negprot_recv(struct smb2srv_request *req);
void smb2srv_reply_smb_negprot(struct smbsrv_request *smb_req);

/* The following definitions come from smb_server/smb2/sesssetup.c  */

void smb2srv_sesssetup_recv(struct smb2srv_request *req);
void smb2srv_logoff_recv(struct smb2srv_request *req);

/* The following definitions come from smb_server/smb2/tcon.c  */

struct ntvfs_handle *smb2srv_pull_handle(struct smb2srv_request *req, const uint8_t *base, uint_t offset);
void smb2srv_push_handle(uint8_t *base, uint_t offset, struct ntvfs_handle *ntvfs);
void smb2srv_tcon_recv(struct smb2srv_request *req);
void smb2srv_tdis_recv(struct smb2srv_request *req);

/* The following definitions come from smb_server/smb2/fileio.c  */

void smb2srv_create_recv(struct smb2srv_request *req);
void smb2srv_close_recv(struct smb2srv_request *req);
void smb2srv_flush_recv(struct smb2srv_request *req);
void smb2srv_read_recv(struct smb2srv_request *req);
void smb2srv_write_recv(struct smb2srv_request *req);
void smb2srv_lock_recv(struct smb2srv_request *req);
void smb2srv_ioctl_recv(struct smb2srv_request *req);
void smb2srv_notify_recv(struct smb2srv_request *req);
void smb2srv_break_recv(struct smb2srv_request *req);

/* The following definitions come from smb_server/smb2/fileinfo.c  */

void smb2srv_getinfo_recv(struct smb2srv_request *req);
void smb2srv_setinfo_recv(struct smb2srv_request *req);

/* The following definitions come from smb_server/smb2/find.c  */

void smb2srv_find_recv(struct smb2srv_request *req);

/* The following definitions come from smb_server/smb2/keepalive.c  */

void smb2srv_keepalive_recv(struct smb2srv_request *req);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __SMB_SERVER_SMB2_SMB2_PROTO_H__ */

