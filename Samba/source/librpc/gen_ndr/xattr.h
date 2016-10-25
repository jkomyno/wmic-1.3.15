/* header auto-generated by pidl */

#include "librpc/gen_ndr/security.h"
#ifndef _HEADER_xattr
#define _HEADER_xattr

#define XATTR_DOSATTRIB_NAME	( "user.DosAttrib" )
#define XATTR_DOSATTRIB_ESTIMATED_SIZE	( 64 )
#define XATTR_ATTRIB_FLAG_STICKY_WRITE_TIME	( 0x1 )
#define XATTR_DOSEAS_NAME	( "user.DosEAs" )
#define XATTR_DOSSTREAMS_NAME	( "user.DosStreams" )
#define XATTR_STREAM_FLAG_INTERNAL	( 0x00000001 )
#define XATTR_DOSSTREAM_PREFIX	( "user.DosStream." )
#define XATTR_MAX_STREAM_SIZE	( 0x4000 )
#define XATTR_NTACL_NAME	( "security.NTACL" )
struct xattr_DosInfo1 {
	uint32_t attrib;
	uint32_t ea_size;
	uint64_t size;
	uint64_t alloc_size;
	NTTIME create_time;
	NTTIME change_time;
};

struct xattr_DosInfo2 {
	uint32_t flags;
	uint32_t attrib;
	uint32_t ea_size;
	uint64_t size;
	uint64_t alloc_size;
	NTTIME create_time;
	NTTIME change_time;
	NTTIME write_time;
	const char * name;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
};

union xattr_DosInfo {
	struct xattr_DosInfo1 info1;/* [case] */
	struct xattr_DosInfo2 info2;/* [case(2)] */
}/* [switch_type(uint16)] */;

struct xattr_DosAttrib {
	uint16_t version;
	union xattr_DosInfo info;/* [switch_is(version)] */
}/* [public] */;

struct xattr_EA {
	const char * name;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	DATA_BLOB value;
};

struct xattr_DosEAs {
	uint16_t num_eas;
	struct xattr_EA *eas;/* [unique,size_is(num_eas)] */
}/* [public] */;

struct xattr_DosStream {
	uint32_t flags;
	uint64_t size;
	uint64_t alloc_size;
	const char * name;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
};

struct xattr_DosStreams {
	uint32_t num_streams;
	struct xattr_DosStream *streams;/* [unique,size_is(num_streams)] */
}/* [public] */;

union xattr_NTACL_Info {
	struct security_descriptor *sd;/* [unique,case] */
}/* [switch_type(uint16)] */;

struct xattr_NTACL {
	uint16_t version;
	union xattr_NTACL_Info info;/* [switch_is(version)] */
}/* [public] */;

#endif /* _HEADER_xattr */
