/* header auto-generated by pidl */

#include "librpc/gen_ndr/security.h"
#include "librpc/gen_ndr/netlogon.h"
#include "librpc/gen_ndr/samr.h"
#ifndef _HEADER_krb5pac
#define _HEADER_krb5pac

struct PAC_LOGON_NAME {
	NTTIME logon_time;
	const char * account_name;/* [flag(LIBNDR_FLAG_STR_SIZE2|LIBNDR_FLAG_STR_NOTERM|LIBNDR_FLAG_STR_BYTESIZE)] */
};

struct PAC_SIGNATURE_DATA {
	uint32_t type;
	DATA_BLOB signature;/* [flag(LIBNDR_FLAG_REMAINING)] */
}/* [public,flag(LIBNDR_PRINT_ARRAY_HEX)] */;

struct PAC_LOGON_INFO {
	struct netr_SamInfo3 info3;
	struct dom_sid2 *res_group_dom_sid;/* [unique] */
	struct samr_RidWithAttributeArray res_groups;
}/* [gensize] */;

struct PAC_LOGON_INFO_CTR {
	uint32_t unknown1;/* [value(0x00081001)] */
	uint32_t unknown2;/* [value(0xCCCCCCCC)] */
	uint32_t _ndr_size;/* [value(NDR_ROUND(ndr_size_PAC_LOGON_INFO(info,ndr->flags)+4,8))] */
	uint32_t unknown3;/* [value(0x00000000)] */
	struct PAC_LOGON_INFO *info;/* [unique] */
};

enum PAC_TYPE {
	PAC_TYPE_LOGON_INFO=1,
	PAC_TYPE_SRV_CHECKSUM=6,
	PAC_TYPE_KDC_CHECKSUM=7,
	PAC_TYPE_LOGON_NAME=10
};

union PAC_INFO {
	struct PAC_LOGON_INFO_CTR logon_info;/* [case(PAC_TYPE_LOGON_INFO)] */
	struct PAC_SIGNATURE_DATA srv_cksum;/* [case(PAC_TYPE_SRV_CHECKSUM)] */
	struct PAC_SIGNATURE_DATA kdc_cksum;/* [case(PAC_TYPE_KDC_CHECKSUM)] */
	struct PAC_LOGON_NAME logon_name;/* [case(PAC_TYPE_LOGON_NAME)] */
}/* [gensize,nodiscriminant,public] */;

struct PAC_BUFFER {
	enum PAC_TYPE type;
	uint32_t _ndr_size;/* [value(_ndr_size_PAC_INFO(info,type,0))] */
	union PAC_INFO *info;/* [relative,subcontext_size(_subcontext_size_PAC_INFO(r,ndr->flags)),subcontext(0),switch_is(type),flag(LIBNDR_FLAG_ALIGN8)] */
	uint32_t _pad;/* [value(0)] */
}/* [noprint,nopull,public,nopush] */;

struct PAC_DATA {
	uint32_t num_buffers;
	uint32_t version;
	struct PAC_BUFFER *buffers;
}/* [public] */;

struct DATA_BLOB_REM {
	DATA_BLOB remaining;/* [flag(LIBNDR_FLAG_REMAINING)] */
};

struct PAC_BUFFER_RAW {
	enum PAC_TYPE type;
	uint32_t ndr_size;
	struct DATA_BLOB_REM *info;/* [relative,subcontext_size(NDR_ROUND(r->ndr_size,8)),subcontext(0),flag(LIBNDR_FLAG_ALIGN8)] */
	uint32_t _pad;/* [value(0)] */
}/* [public] */;

struct PAC_DATA_RAW {
	uint32_t num_buffers;
	uint32_t version;
	struct PAC_BUFFER_RAW *buffers;
}/* [public] */;


struct decode_pac {
	struct {
		struct PAC_DATA pac;
	} in;

};


struct decode_pac_raw {
	struct {
		struct PAC_DATA_RAW pac;
	} in;

};


struct decode_login_info {
	struct {
		struct PAC_LOGON_INFO logon_info;
	} in;

};

#endif /* _HEADER_krb5pac */
