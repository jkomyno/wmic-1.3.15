#ifndef __LIBCLI_FINDDCS_H__
#define __LIBCLI_FINDDCS_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from libcli/finddcs.c  */

struct composite_context *finddcs_send(TALLOC_CTX *mem_ctx,
				       const char *domain_name,
				       int name_type,
				       struct dom_sid *domain_sid,
				       const char **methods,
				       struct event_context *event_ctx,
				       struct messaging_context *msg_ctx);
NTSTATUS finddcs_recv(struct composite_context *c, TALLOC_CTX *mem_ctx,
		      int *num_dcs, struct nbt_dc_name **dcs);
NTSTATUS finddcs(TALLOC_CTX *mem_ctx,
		 const char *domain_name, int name_type, 
		 struct dom_sid *domain_sid,
		 const char **methods,
		 struct event_context *event_ctx,
		 struct messaging_context *msg_ctx,
		 int *num_dcs, struct nbt_dc_name **dcs);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __LIBCLI_FINDDCS_H__ */
