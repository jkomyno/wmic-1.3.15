/* header auto-generated by pidl */

#include "librpc/gen_ndr/keysvc.h"

#ifndef _HEADER_NDR_keysvc
#define _HEADER_NDR_keysvc

#include "librpc/ndr/libndr.h"
#define DCERPC_KEYSVC_UUID "8d0ffe72-d252-11d0-bf8f-00c04fd9126b"
#define DCERPC_KEYSVC_VERSION 1.0
#define DCERPC_KEYSVC_NAME "keysvc"
#define DCERPC_KEYSVC_HELPSTRING "Cryptographic Key Services"
extern const struct dcerpc_interface_table dcerpc_table_keysvc;
NTSTATUS dcerpc_server_keysvc_init(void);
#define DCERPC_KEYSVC_UNKNOWN0 (0x00)

#define DCERPC_KEYSVC_CALL_COUNT (1)
void ndr_print_keysvc_Unknown0(struct ndr_print *ndr, const char *name, int flags, const struct keysvc_Unknown0 *r);
#endif /* _HEADER_NDR_keysvc */
