#ifndef __LIBNET_LIBNET_PROTO_H__
#define __LIBNET_LIBNET_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from libnet/libnet.c  */

struct libnet_context *libnet_context_init(struct event_context *ev);

/* The following definitions come from libnet/libnet_passwd.c  */

NTSTATUS libnet_ChangePassword(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, union libnet_ChangePassword *r);
NTSTATUS libnet_SetPassword(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, union libnet_SetPassword *r);

/* The following definitions come from libnet/libnet_time.c  */

NTSTATUS libnet_RemoteTOD(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, union libnet_RemoteTOD *r);

/* The following definitions come from libnet/libnet_rpc.c  */

struct composite_context* libnet_RpcConnect_send(struct libnet_context *ctx,
						 TALLOC_CTX *mem_ctx,
						 struct libnet_RpcConnect *r);
NTSTATUS libnet_RpcConnect_recv(struct composite_context *c, struct libnet_context *ctx,
				TALLOC_CTX *mem_ctx, struct libnet_RpcConnect *r);
NTSTATUS libnet_RpcConnect(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			   struct libnet_RpcConnect *r);

/* The following definitions come from libnet/libnet_join.c  */

NTSTATUS libnet_JoinDomain(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, struct libnet_JoinDomain *r);
NTSTATUS libnet_Join(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, struct libnet_Join *r);

/* The following definitions come from libnet/libnet_site.c  */

NTSTATUS libnet_FindSite(TALLOC_CTX *ctx, struct libnet_JoinSite *r);
NTSTATUS libnet_JoinSite(struct ldb_context *remote_ldb,
			 struct libnet_JoinDomain *libnet_r);

/* The following definitions come from libnet/libnet_become_dc.c  */

struct composite_context *libnet_BecomeDC_send(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, struct libnet_BecomeDC *r);
NTSTATUS libnet_BecomeDC_recv(struct composite_context *c, TALLOC_CTX *mem_ctx, struct libnet_BecomeDC *r);
NTSTATUS libnet_BecomeDC(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, struct libnet_BecomeDC *r);

/* The following definitions come from libnet/libnet_unbecome_dc.c  */

struct composite_context *libnet_UnbecomeDC_send(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, struct libnet_UnbecomeDC *r);
NTSTATUS libnet_UnbecomeDC_recv(struct composite_context *c, TALLOC_CTX *mem_ctx, struct libnet_UnbecomeDC *r);
NTSTATUS libnet_UnbecomeDC(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, struct libnet_UnbecomeDC *r);

/* The following definitions come from libnet/libnet_vampire.c  */

NTSTATUS libnet_SamSync_netlogon(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, struct libnet_SamSync *r);

/* The following definitions come from libnet/libnet_samdump.c  */

NTSTATUS libnet_SamDump(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, struct libnet_SamDump *r);

/* The following definitions come from libnet/libnet_samdump_keytab.c  */

NTSTATUS libnet_SamDump_keytab(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, struct libnet_SamDump_keytab *r);

/* The following definitions come from libnet/libnet_samsync_ldb.c  */

NTSTATUS libnet_samsync_ldb(struct libnet_context *ctx, TALLOC_CTX *mem_ctx, struct libnet_samsync_ldb *r);

/* The following definitions come from libnet/libnet_user.c  */

struct composite_context* libnet_CreateUser_send(struct libnet_context *ctx,
						 TALLOC_CTX *mem_ctx,
						 struct libnet_CreateUser *r,
						 void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_CreateUser_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
				struct libnet_CreateUser *r);
NTSTATUS libnet_CreateUser(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			   struct libnet_CreateUser *r);
struct composite_context *libnet_DeleteUser_send(struct libnet_context *ctx,
						 TALLOC_CTX *mem_ctx,
						 struct libnet_DeleteUser *r,
						 void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_DeleteUser_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
				struct libnet_DeleteUser *r);
NTSTATUS libnet_DeleteUser(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			   struct libnet_DeleteUser *r);
struct composite_context *libnet_ModifyUser_send(struct libnet_context *ctx,
						 TALLOC_CTX *mem_ctx,
						 struct libnet_ModifyUser *r,
						 void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_ModifyUser_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
				struct libnet_ModifyUser *r);
NTSTATUS libnet_ModifyUser(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			   struct libnet_ModifyUser *r);
struct composite_context* libnet_UserInfo_send(struct libnet_context *ctx,
					       TALLOC_CTX *mem_ctx,
					       struct libnet_UserInfo *r,
					       void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_UserInfo_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
			      struct libnet_UserInfo *r);
NTSTATUS libnet_UserInfo(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			 struct libnet_UserInfo *r);
struct composite_context* libnet_UserList_send(struct libnet_context *ctx,
					       TALLOC_CTX *mem_ctx,
					       struct libnet_UserList *r,
					       void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_UserList_recv(struct composite_context* c, TALLOC_CTX *mem_ctx,
			      struct libnet_UserList *r);
NTSTATUS libnet_UserList(struct libnet_context *ctx,
			 TALLOC_CTX *mem_ctx,
			 struct libnet_UserList *r);

/* The following definitions come from libnet/libnet_share.c  */

NTSTATUS libnet_ListShares(struct libnet_context *ctx, 
			   TALLOC_CTX *mem_ctx, struct libnet_ListShares *r);
NTSTATUS libnet_AddShare(struct libnet_context *ctx,
			 TALLOC_CTX *mem_ctx, struct libnet_AddShare *r);
NTSTATUS libnet_DelShare(struct libnet_context *ctx,
			 TALLOC_CTX *mem_ctx, struct libnet_DelShare *r);

/* The following definitions come from libnet/libnet_lookup.c  */

struct composite_context *libnet_Lookup_send(struct libnet_context *ctx,
					     struct libnet_Lookup *io);
NTSTATUS libnet_Lookup_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
			    struct libnet_Lookup *io);
NTSTATUS libnet_Lookup(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
		       struct libnet_Lookup *io);
struct composite_context* libnet_LookupHost_send(struct libnet_context *ctx,
						 struct libnet_Lookup *io);
NTSTATUS libnet_LookupHost(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			   struct libnet_Lookup *io);
struct composite_context* libnet_LookupDCs_send(struct libnet_context *ctx,
						TALLOC_CTX *mem_ctx,
						struct libnet_LookupDCs *io);
NTSTATUS libnet_LookupDCs_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
			       struct libnet_LookupDCs *io);
NTSTATUS libnet_LookupDCs(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			  struct libnet_LookupDCs *io);
struct composite_context* libnet_LookupName_send(struct libnet_context *ctx,
						 TALLOC_CTX *mem_ctx,
						 struct libnet_LookupName *io,
						 void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_LookupName_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
				struct libnet_LookupName *io);
NTSTATUS libnet_LookupName(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			   struct libnet_LookupName *io);

/* The following definitions come from libnet/libnet_domain.c  */

struct composite_context *libnet_DomainOpenSamr_send(struct libnet_context *ctx,
						     struct libnet_DomainOpen *io,
						     void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_DomainOpenSamr_recv(struct composite_context *c, struct libnet_context *ctx,
				    TALLOC_CTX *mem_ctx, struct libnet_DomainOpen *io);
struct composite_context* libnet_DomainOpenLsa_send(struct libnet_context *ctx,
						    struct libnet_DomainOpen *io,
						    void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_DomainOpenLsa_recv(struct composite_context *c, struct libnet_context *ctx,
				   TALLOC_CTX *mem_ctx, struct libnet_DomainOpen *io);
struct composite_context* libnet_DomainOpen_send(struct libnet_context *ctx,
						 struct libnet_DomainOpen *io,
						 void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_DomainOpen_recv(struct composite_context *c, struct libnet_context *ctx,
				TALLOC_CTX *mem_ctx, struct libnet_DomainOpen *io);
NTSTATUS libnet_DomainOpen(struct libnet_context *ctx,
			   TALLOC_CTX *mem_ctx,
			   struct libnet_DomainOpen *io);
struct composite_context* libnet_DomainCloseLsa_send(struct libnet_context *ctx,
						     struct libnet_DomainClose *io,
						     void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_DomainCloseLsa_recv(struct composite_context *c, struct libnet_context *ctx,
				    TALLOC_CTX *mem_ctx, struct libnet_DomainClose *io);
struct composite_context* libnet_DomainCloseSamr_send(struct libnet_context *ctx,
						      struct libnet_DomainClose *io,
						      void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_DomainCloseSamr_recv(struct composite_context *c, struct libnet_context *ctx,
				     TALLOC_CTX *mem_ctx, struct libnet_DomainClose *io);
struct composite_context* libnet_DomainClose_send(struct libnet_context *ctx,
						  struct libnet_DomainClose *io,
						  void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_DomainClose_recv(struct composite_context *c, struct libnet_context *ctx,
				 TALLOC_CTX *mem_ctx, struct libnet_DomainClose *io);
NTSTATUS libnet_DomainClose(struct libnet_context *ctx, TALLOC_CTX *mem_ctx,
			    struct libnet_DomainClose *io);

/* The following definitions come from libnet/userinfo.c  */

struct composite_context *libnet_rpc_userinfo_send(struct dcerpc_pipe *p,
						   struct libnet_rpc_userinfo *io,
						   void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_rpc_userinfo_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
				  struct libnet_rpc_userinfo *io);
NTSTATUS libnet_rpc_userinfo(struct dcerpc_pipe *p,
			     TALLOC_CTX *mem_ctx,
			     struct libnet_rpc_userinfo *io);

/* The following definitions come from libnet/userman.c  */

struct composite_context *libnet_rpc_useradd_send(struct dcerpc_pipe *p,
						  struct libnet_rpc_useradd *io,
						  void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_rpc_useradd_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
				 struct libnet_rpc_useradd *io);
NTSTATUS libnet_rpc_useradd(struct dcerpc_pipe *p,
			    TALLOC_CTX *mem_ctx,
			    struct libnet_rpc_useradd *io);
struct composite_context *libnet_rpc_userdel_send(struct dcerpc_pipe *p,
						  struct libnet_rpc_userdel *io,
						  void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_rpc_userdel_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
				 struct libnet_rpc_userdel *io);
NTSTATUS libnet_rpc_userdel(struct dcerpc_pipe *p,
			    TALLOC_CTX *mem_ctx,
			    struct libnet_rpc_userdel *io);
struct composite_context *libnet_rpc_usermod_send(struct dcerpc_pipe *p,
						  struct libnet_rpc_usermod *io,
						  void (*monitor)(struct monitor_msg*));
NTSTATUS libnet_rpc_usermod_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
				 struct libnet_rpc_usermod *io);
NTSTATUS libnet_rpc_usermod(struct dcerpc_pipe *p,
			    TALLOC_CTX *mem_ctx,
			    struct libnet_rpc_usermod *io);

/* The following definitions come from libnet/prereq_domain.c  */

struct composite_context* samr_domain_opened(struct libnet_context *ctx,
					     const char *domain_name,
					     struct composite_context *parent_ctx,
					     struct libnet_DomainOpen *domain_open,
					     void (*continue_fn)(struct composite_context*),
					     void (*monitor)(struct monitor_msg*));
struct composite_context* lsa_domain_opened(struct libnet_context *ctx,
					    const char *domain_name,
					    struct composite_context *parent_ctx,
					    struct libnet_DomainOpen *domain_open,
					    void (*continue_fn)(struct composite_context*),
					    void (*monitor)(struct monitor_msg*));
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __LIBNET_LIBNET_PROTO_H__ */

