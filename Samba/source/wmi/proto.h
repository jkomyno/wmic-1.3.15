#ifndef __WMI_PROTO_H__
#define __WMI_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from wmi/wmic.c  */

char *string_CIMVAR(TALLOC_CTX *mem_ctx, union CIMVAR *v, enum CIMTYPE_ENUMERATION cimtype);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __WMI_PROTO_H__ */

