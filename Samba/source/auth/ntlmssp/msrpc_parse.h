#ifndef __AUTH_NTLMSSP_MSRPC_PARSE_H__
#define __AUTH_NTLMSSP_MSRPC_PARSE_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from auth/ntlmssp/ntlmssp_parse.c  */

BOOL msrpc_gen(TALLOC_CTX *mem_ctx, DATA_BLOB *blob,
	       const char *format, ...);
BOOL msrpc_parse(TALLOC_CTX *mem_ctx, const DATA_BLOB *blob,
		 const char *format, ...);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __AUTH_NTLMSSP_MSRPC_PARSE_H__ */

