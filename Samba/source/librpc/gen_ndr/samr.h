/* header auto-generated by pidl */

#include "librpc/gen_ndr/misc.h"
#include "librpc/gen_ndr/lsa.h"
#include "librpc/gen_ndr/security.h"
#ifndef _HEADER_samr
#define _HEADER_samr

#define SAMR_ENUM_USERS_MULTIPLIER	( 54 )
/* bitmap samr_AcctFlags */
#define ACB_DISABLED ( 0x00000001 )
#define ACB_HOMDIRREQ ( 0x00000002 )
#define ACB_PWNOTREQ ( 0x00000004 )
#define ACB_TEMPDUP ( 0x00000008 )
#define ACB_NORMAL ( 0x00000010 )
#define ACB_MNS ( 0x00000020 )
#define ACB_DOMTRUST ( 0x00000040 )
#define ACB_WSTRUST ( 0x00000080 )
#define ACB_SVRTRUST ( 0x00000100 )
#define ACB_PWNOEXP ( 0x00000200 )
#define ACB_AUTOLOCK ( 0x00000400 )
#define ACB_ENC_TXT_PWD_ALLOWED ( 0x00000800 )
#define ACB_SMARTCARD_REQUIRED ( 0x00001000 )
#define ACB_TRUSTED_FOR_DELEGATION ( 0x00002000 )
#define ACB_NOT_DELEGATED ( 0x00004000 )
#define ACB_USE_DES_KEY_ONLY ( 0x00008000 )
#define ACB_DONT_REQUIRE_PREAUTH ( 0x00010000 )
#define ACB_PW_EXPIRED ( 0x00020000 )
#define ACB_NO_AUTH_DATA_REQD ( 0x00080000 )

struct samr_SamEntry {
	uint32_t idx;
	struct lsa_String name;
};

struct samr_SamArray {
	uint32_t count;
	struct samr_SamEntry *entries;/* [unique,size_is(count)] */
};

enum samr_Role {
	ROLE_STANDALONE=0,
	ROLE_DOMAIN_MEMBER=1,
	ROLE_DOMAIN_BDC=2,
	ROLE_DOMAIN_PDC=3
};

/* bitmap samr_PasswordProperties */
#define DOMAIN_PASSWORD_COMPLEX ( 0x00000001 )
#define DOMAIN_PASSWORD_NO_ANON_CHANGE ( 0x00000002 )
#define DOMAIN_PASSWORD_NO_CLEAR_CHANGE ( 0x00000004 )
#define DOMAIN_PASSWORD_LOCKOUT_ADMINS ( 0x00000008 )
#define DOMAIN_PASSWORD_STORE_CLEARTEXT ( 0x00000010 )
#define DOMAIN_REFUSE_PASSWORD_CHANGE ( 0x00000020 )

struct samr_DomInfo1 {
	uint16_t min_password_length;
	uint16_t password_history_length;
	uint32_t password_properties;
	int64_t max_password_age;
	int64_t min_password_age;
};

struct samr_DomInfo2 {
	NTTIME force_logoff_time;
	struct lsa_String comment;
	struct lsa_String domain_name;
	struct lsa_String primary;
	uint64_t sequence_num;
	uint32_t unknown2;
	enum samr_Role role;
	uint32_t unknown3;
	uint32_t num_users;
	uint32_t num_groups;
	uint32_t num_aliases;
};

struct samr_DomInfo3 {
	NTTIME force_logoff_time;
};

struct samr_DomInfo4 {
	struct lsa_String comment;
};

struct samr_DomInfo5 {
	struct lsa_String domain_name;
};

struct samr_DomInfo6 {
	struct lsa_String primary;
};

struct samr_DomInfo7 {
	enum samr_Role role;
};

struct samr_DomInfo8 {
	uint64_t sequence_num;
	NTTIME domain_create_time;
};

struct samr_DomInfo9 {
	uint32_t unknown;
};

struct samr_DomInfo11 {
	struct samr_DomInfo2 info2;
	uint64_t lockout_duration;
	uint64_t lockout_window;
	uint16_t lockout_threshold;
};

struct samr_DomInfo12 {
	uint64_t lockout_duration;
	uint64_t lockout_window;
	uint16_t lockout_threshold;
};

struct samr_DomInfo13 {
	uint64_t sequence_num;
	NTTIME domain_create_time;
	uint32_t unknown1;
	uint32_t unknown2;
};

union samr_DomainInfo {
	struct samr_DomInfo1 info1;/* [case] */
	struct samr_DomInfo2 info2;/* [case(2)] */
	struct samr_DomInfo3 info3;/* [case(3)] */
	struct samr_DomInfo4 info4;/* [case(4)] */
	struct samr_DomInfo5 info5;/* [case(5)] */
	struct samr_DomInfo6 info6;/* [case(6)] */
	struct samr_DomInfo7 info7;/* [case(7)] */
	struct samr_DomInfo8 info8;/* [case(8)] */
	struct samr_DomInfo9 info9;/* [case(9)] */
	struct samr_DomInfo11 info11;/* [case(11)] */
	struct samr_DomInfo12 info12;/* [case(12)] */
	struct samr_DomInfo13 info13;/* [case(13)] */
}/* [switch_type(uint16)] */;

struct samr_Ids {
	uint32_t count;/* [range(0,1024)] */
	uint32_t *ids;/* [unique,size_is(count)] */
};

/* bitmap samr_GroupAttrs */
#define SE_GROUP_MANDATORY ( 0x00000001 )
#define SE_GROUP_ENABLED_BY_DEFAULT ( 0x00000002 )
#define SE_GROUP_ENABLED ( 0x00000004 )
#define SE_GROUP_OWNER ( 0x00000008 )
#define SE_GROUP_USE_FOR_DENY_ONLY ( 0x00000010 )
#define SE_GROUP_RESOURCE ( 0x20000000 )
#define SE_GROUP_LOGON_ID ( 0xC0000000 )

struct samr_GroupInfoAll {
	struct lsa_String name;
	uint32_t attributes;
	uint32_t num_members;
	struct lsa_String description;
};

struct samr_GroupInfoAttributes {
	uint32_t attributes;
};

struct samr_GroupInfoDescription {
	struct lsa_String description;
};

enum samr_GroupInfoEnum {
	GROUPINFOALL=1,
	GROUPINFONAME=2,
	GROUPINFOATTRIBUTES=3,
	GROUPINFODESCRIPTION=4,
	GROUPINFOALL2=5
};

union samr_GroupInfo {
	struct samr_GroupInfoAll all;/* [case(GROUPINFOALL)] */
	struct lsa_String name;/* [case(GROUPINFONAME)] */
	struct samr_GroupInfoAttributes attributes;/* [case(GROUPINFOATTRIBUTES)] */
	struct lsa_String description;/* [case(GROUPINFODESCRIPTION)] */
	struct samr_GroupInfoAll all2;/* [case(GROUPINFOALL2)] */
}/* [switch_type(samr_GroupInfoEnum)] */;

struct samr_RidTypeArray {
	uint32_t count;
	uint32_t *rids;/* [unique,size_is(count)] */
	uint32_t *types;/* [unique,size_is(count)] */
};

struct samr_AliasInfoAll {
	struct lsa_String name;
	uint32_t num_members;
	struct lsa_String description;
};

enum samr_AliasInfoEnum {
	ALIASINFOALL=1,
	ALIASINFONAME=2,
	ALIASINFODESCRIPTION=3
};

union samr_AliasInfo {
	struct samr_AliasInfoAll all;/* [case(ALIASINFOALL)] */
	struct lsa_String name;/* [case(ALIASINFONAME)] */
	struct lsa_String description;/* [case(ALIASINFODESCRIPTION)] */
}/* [switch_type(samr_AliasInfoEnum)] */;

struct samr_UserInfo1 {
	struct lsa_String account_name;
	struct lsa_String full_name;
	uint32_t primary_gid;
	struct lsa_String description;
	struct lsa_String comment;
};

struct samr_UserInfo2 {
	struct lsa_String comment;
	struct lsa_String unknown;
	uint16_t country_code;
	uint16_t code_page;
};

struct samr_LogonHours {
	uint16_t units_per_week;
	uint8_t *bits;/* [unique,length_is(units_per_week/8),size_is(1260)] */
}/* [public,flag(LIBNDR_PRINT_ARRAY_HEX)] */;

struct samr_UserInfo3 {
	struct lsa_String account_name;
	struct lsa_String full_name;
	uint32_t rid;
	uint32_t primary_gid;
	struct lsa_String home_directory;
	struct lsa_String home_drive;
	struct lsa_String logon_script;
	struct lsa_String profile_path;
	struct lsa_String workstations;
	NTTIME last_logon;
	NTTIME last_logoff;
	NTTIME last_password_change;
	NTTIME allow_password_change;
	NTTIME force_password_change;
	struct samr_LogonHours logon_hours;
	uint16_t bad_password_count;
	uint16_t logon_count;
	uint32_t acct_flags;
};

struct samr_UserInfo4 {
	struct samr_LogonHours logon_hours;
};

struct samr_UserInfo5 {
	struct lsa_String account_name;
	struct lsa_String full_name;
	uint32_t rid;
	uint32_t primary_gid;
	struct lsa_String home_directory;
	struct lsa_String home_drive;
	struct lsa_String logon_script;
	struct lsa_String profile_path;
	struct lsa_String description;
	struct lsa_String workstations;
	NTTIME last_logon;
	NTTIME last_logoff;
	struct samr_LogonHours logon_hours;
	uint16_t bad_password_count;
	uint16_t logon_count;
	NTTIME last_password_change;
	NTTIME acct_expiry;
	uint32_t acct_flags;
};

struct samr_UserInfo6 {
	struct lsa_String account_name;
	struct lsa_String full_name;
};

struct samr_UserInfo7 {
	struct lsa_String account_name;
};

struct samr_UserInfo8 {
	struct lsa_String full_name;
};

struct samr_UserInfo9 {
	uint32_t primary_gid;
};

struct samr_UserInfo10 {
	struct lsa_String home_directory;
	struct lsa_String home_drive;
};

struct samr_UserInfo11 {
	struct lsa_String logon_script;
};

struct samr_UserInfo12 {
	struct lsa_String profile_path;
};

struct samr_UserInfo13 {
	struct lsa_String description;
};

struct samr_UserInfo14 {
	struct lsa_String workstations;
};

struct samr_UserInfo16 {
	uint32_t acct_flags;
};

struct samr_UserInfo17 {
	NTTIME acct_expiry;
};

struct samr_UserInfo20 {
	struct lsa_String parameters;
};

/* bitmap samr_FieldsPresent */
#define SAMR_FIELD_ACCOUNT_NAME ( 0x00000001 )
#define SAMR_FIELD_FULL_NAME ( 0x00000002 )
#define SAMR_FIELD_PRIMARY_GID ( 0x00000008 )
#define SAMR_FIELD_DESCRIPTION ( 0x00000010 )
#define SAMR_FIELD_COMMENT ( 0x00000020 )
#define SAMR_FIELD_HOME_DIRECTORY ( 0x00000040 )
#define SAMR_FIELD_HOME_DRIVE ( 0x00000080 )
#define SAMR_FIELD_LOGON_SCRIPT ( 0x00000100 )
#define SAMR_FIELD_PROFILE_PATH ( 0x00000200 )
#define SAMR_FIELD_WORKSTATIONS ( 0x00000400 )
#define SAMR_FIELD_LOGON_HOURS ( 0x00002000 )
#define SAMR_FIELD_ACCT_FLAGS ( 0x00100000 )
#define SAMR_FIELD_PARAMETERS ( 0x00200000 )
#define SAMR_FIELD_COUNTRY_CODE ( 0x00400000 )
#define SAMR_FIELD_CODE_PAGE ( 0x00800000 )
#define SAMR_FIELD_PASSWORD ( 0x01000000 )
#define SAMR_FIELD_PASSWORD2 ( 0x02000000 )

struct samr_UserInfo21 {
	NTTIME last_logon;
	NTTIME last_logoff;
	NTTIME last_password_change;
	NTTIME acct_expiry;
	NTTIME allow_password_change;
	NTTIME force_password_change;
	struct lsa_String account_name;
	struct lsa_String full_name;
	struct lsa_String home_directory;
	struct lsa_String home_drive;
	struct lsa_String logon_script;
	struct lsa_String profile_path;
	struct lsa_String description;
	struct lsa_String workstations;
	struct lsa_String comment;
	struct lsa_String parameters;
	struct lsa_String unknown1;
	struct lsa_String unknown2;
	struct lsa_String unknown3;
	uint32_t buf_count;
	uint8_t *buffer;/* [unique,size_is(buf_count)] */
	uint32_t rid;
	uint32_t primary_gid;
	uint32_t acct_flags;
	uint32_t fields_present;
	struct samr_LogonHours logon_hours;
	uint16_t bad_password_count;
	uint16_t logon_count;
	uint16_t country_code;
	uint16_t code_page;
	uint8_t nt_password_set;
	uint8_t lm_password_set;
	uint8_t password_expired;
	uint8_t unknown4;
};

struct samr_CryptPassword {
	uint8_t data[516];
}/* [public,flag(LIBNDR_PRINT_ARRAY_HEX)] */;

struct samr_UserInfo23 {
	struct samr_UserInfo21 info;
	struct samr_CryptPassword password;
};

struct samr_UserInfo24 {
	struct samr_CryptPassword password;
	uint8_t pw_len;
};

struct samr_CryptPasswordEx {
	uint8_t data[532];
}/* [flag(LIBNDR_PRINT_ARRAY_HEX)] */;

struct samr_UserInfo25 {
	struct samr_UserInfo21 info;
	struct samr_CryptPasswordEx password;
};

struct samr_UserInfo26 {
	struct samr_CryptPasswordEx password;
	uint8_t pw_len;
};

union samr_UserInfo {
	struct samr_UserInfo1 info1;/* [case] */
	struct samr_UserInfo2 info2;/* [case(2)] */
	struct samr_UserInfo3 info3;/* [case(3)] */
	struct samr_UserInfo4 info4;/* [case(4)] */
	struct samr_UserInfo5 info5;/* [case(5)] */
	struct samr_UserInfo6 info6;/* [case(6)] */
	struct samr_UserInfo7 info7;/* [case(7)] */
	struct samr_UserInfo8 info8;/* [case(8)] */
	struct samr_UserInfo9 info9;/* [case(9)] */
	struct samr_UserInfo10 info10;/* [case(10)] */
	struct samr_UserInfo11 info11;/* [case(11)] */
	struct samr_UserInfo12 info12;/* [case(12)] */
	struct samr_UserInfo13 info13;/* [case(13)] */
	struct samr_UserInfo14 info14;/* [case(14)] */
	struct samr_UserInfo16 info16;/* [case(16)] */
	struct samr_UserInfo17 info17;/* [case(17)] */
	struct samr_UserInfo20 info20;/* [case(20)] */
	struct samr_UserInfo21 info21;/* [case(21)] */
	struct samr_UserInfo23 info23;/* [case(23)] */
	struct samr_UserInfo24 info24;/* [case(24)] */
	struct samr_UserInfo25 info25;/* [case(25)] */
	struct samr_UserInfo26 info26;/* [case(26)] */
}/* [switch_type(uint16)] */;

struct samr_Password {
	uint8_t hash[16];
}/* [public,flag(LIBNDR_PRINT_ARRAY_HEX)] */;

struct samr_RidWithAttribute {
	uint32_t rid;
	uint32_t attributes;
}/* [public] */;

struct samr_RidWithAttributeArray {
	uint32_t count;
	struct samr_RidWithAttribute *rids;/* [unique,size_is(count)] */
}/* [public] */;

struct samr_DispEntryGeneral {
	uint32_t idx;
	uint32_t rid;
	uint32_t acct_flags;
	struct lsa_String account_name;
	struct lsa_String full_name;
	struct lsa_String description;
};

struct samr_DispInfoGeneral {
	uint32_t count;
	struct samr_DispEntryGeneral *entries;/* [unique,size_is(count)] */
};

struct samr_DispEntryFull {
	uint32_t idx;
	uint32_t rid;
	uint32_t acct_flags;
	struct lsa_String account_name;
	struct lsa_String description;
};

struct samr_DispInfoFull {
	uint32_t count;
	struct samr_DispEntryFull *entries;/* [unique,size_is(count)] */
};

struct samr_DispEntryFullGroup {
	uint32_t idx;
	uint32_t rid;
	uint32_t acct_flags;
	struct lsa_String account_name;
	struct lsa_String description;
};

struct samr_DispInfoFullGroups {
	uint32_t count;
	struct samr_DispEntryFullGroup *entries;/* [unique,size_is(count)] */
};

struct samr_DispEntryAscii {
	uint32_t idx;
	struct lsa_AsciiString account_name;
};

struct samr_DispInfoAscii {
	uint32_t count;
	struct samr_DispEntryAscii *entries;/* [unique,size_is(count)] */
};

union samr_DispInfo {
	struct samr_DispInfoGeneral info1;/* [case] */
	struct samr_DispInfoFull info2;/* [case(2)] */
	struct samr_DispInfoFullGroups info3;/* [case(3)] */
	struct samr_DispInfoAscii info4;/* [case(4)] */
	struct samr_DispInfoAscii info5;/* [case(5)] */
}/* [switch_type(uint16)] */;

struct samr_PwInfo {
	uint16_t min_password_length;
	uint32_t password_properties;
};

struct samr_ChangeReject {
	enum samr_RejectReason reason;
	uint32_t unknown1;
	uint32_t unknown2;
};

struct samr_ConnectInfo1 {
	uint32_t unknown1;
	uint32_t unknown2;
};

union samr_ConnectInfo {
	struct samr_ConnectInfo1 info1;/* [case] */
};


struct samr_Connect {
	struct {
		uint16_t *system_name;/* [unique] */
		uint32_t access_mask;
	} in;

	struct {
		struct policy_handle *connect_handle;/* [ref] */
		NTSTATUS result;
	} out;

};


struct samr_Close {
	struct {
		struct policy_handle *handle;/* [ref] */
	} in;

	struct {
		struct policy_handle *handle;/* [ref] */
		NTSTATUS result;
	} out;

};


struct samr_SetSecurity {
	struct {
		struct policy_handle *handle;/* [ref] */
		uint32_t sec_info;
		struct sec_desc_buf *sdbuf;/* [ref] */
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_QuerySecurity {
	struct {
		struct policy_handle *handle;/* [ref] */
		uint32_t sec_info;
	} in;

	struct {
		struct sec_desc_buf *sdbuf;/* [unique] */
		NTSTATUS result;
	} out;

};


struct samr_Shutdown {
	struct {
		struct policy_handle *connect_handle;/* [ref] */
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_LookupDomain {
	struct {
		struct policy_handle *connect_handle;/* [ref] */
		struct lsa_String *domain_name;/* [ref] */
	} in;

	struct {
		struct dom_sid2 *sid;/* [unique] */
		NTSTATUS result;
	} out;

};


struct samr_EnumDomains {
	struct {
		struct policy_handle *connect_handle;/* [ref] */
		uint32_t *resume_handle;/* [ref] */
		uint32_t buf_size;
	} in;

	struct {
		uint32_t *resume_handle;/* [ref] */
		struct samr_SamArray *sam;/* [unique] */
		uint32_t num_entries;
		NTSTATUS result;
	} out;

};


struct samr_OpenDomain {
	struct {
		struct policy_handle *connect_handle;/* [ref] */
		uint32_t access_mask;
		struct dom_sid2 *sid;/* [ref] */
	} in;

	struct {
		struct policy_handle *domain_handle;/* [ref] */
		NTSTATUS result;
	} out;

};


struct samr_QueryDomainInfo {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		uint16_t level;
	} in;

	struct {
		union samr_DomainInfo *info;/* [unique,switch_is(level)] */
		NTSTATUS result;
	} out;

};


struct samr_SetDomainInfo {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		uint16_t level;
		union samr_DomainInfo *info;/* [ref,switch_is(level)] */
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_CreateDomainGroup {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		struct lsa_String *name;/* [ref] */
		uint32_t access_mask;
	} in;

	struct {
		struct policy_handle *group_handle;/* [ref] */
		uint32_t *rid;/* [ref] */
		NTSTATUS result;
	} out;

};


struct samr_EnumDomainGroups {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		uint32_t *resume_handle;/* [ref] */
		uint32_t max_size;
	} in;

	struct {
		uint32_t *resume_handle;/* [ref] */
		struct samr_SamArray *sam;/* [unique] */
		uint32_t num_entries;
		NTSTATUS result;
	} out;

};


struct samr_CreateUser {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		struct lsa_String *account_name;/* [ref] */
		uint32_t access_mask;
	} in;

	struct {
		struct policy_handle *user_handle;/* [ref] */
		uint32_t *rid;/* [ref] */
		NTSTATUS result;
	} out;

};


struct samr_EnumDomainUsers {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		uint32_t *resume_handle;/* [ref] */
		uint32_t acct_flags;
		uint32_t max_size;
	} in;

	struct {
		uint32_t *resume_handle;/* [ref] */
		struct samr_SamArray *sam;/* [unique] */
		uint32_t num_entries;
		NTSTATUS result;
	} out;

};


struct samr_CreateDomAlias {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		struct lsa_String *alias_name;/* [ref] */
		uint32_t access_mask;
	} in;

	struct {
		struct policy_handle *alias_handle;/* [ref] */
		uint32_t *rid;/* [ref] */
		NTSTATUS result;
	} out;

};


struct samr_EnumDomainAliases {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		uint32_t *resume_handle;/* [ref] */
		uint32_t acct_flags;
	} in;

	struct {
		uint32_t *resume_handle;/* [ref] */
		struct samr_SamArray *sam;/* [unique] */
		uint32_t num_entries;
		NTSTATUS result;
	} out;

};


struct samr_GetAliasMembership {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		struct lsa_SidArray *sids;/* [ref] */
	} in;

	struct {
		struct samr_Ids *rids;/* [ref] */
		NTSTATUS result;
	} out;

};


struct samr_LookupNames {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		uint32_t num_names;/* [range(0,1000)] */
		struct lsa_String *names;/* [length_is(num_names),size_is(1000)] */
	} in;

	struct {
		struct samr_Ids rids;
		struct samr_Ids types;
		NTSTATUS result;
	} out;

};


struct samr_LookupRids {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		uint32_t num_rids;/* [range(0,1000)] */
		uint32_t *rids;/* [length_is(num_rids),size_is(1000)] */
	} in;

	struct {
		struct lsa_Strings names;
		struct samr_Ids types;
		NTSTATUS result;
	} out;

};


struct samr_OpenGroup {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		uint32_t access_mask;
		uint32_t rid;
	} in;

	struct {
		struct policy_handle *group_handle;/* [ref] */
		NTSTATUS result;
	} out;

};


struct samr_QueryGroupInfo {
	struct {
		struct policy_handle *group_handle;/* [ref] */
		enum samr_GroupInfoEnum level;
	} in;

	struct {
		union samr_GroupInfo *info;/* [unique,switch_is(level)] */
		NTSTATUS result;
	} out;

};


struct samr_SetGroupInfo {
	struct {
		struct policy_handle *group_handle;/* [ref] */
		enum samr_GroupInfoEnum level;
		union samr_GroupInfo *info;/* [ref,switch_is(level)] */
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_AddGroupMember {
	struct {
		struct policy_handle *group_handle;/* [ref] */
		uint32_t rid;
		uint32_t flags;
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_DeleteDomainGroup {
	struct {
		struct policy_handle *group_handle;/* [ref] */
	} in;

	struct {
		struct policy_handle *group_handle;/* [ref] */
		NTSTATUS result;
	} out;

};


struct samr_DeleteGroupMember {
	struct {
		struct policy_handle *group_handle;/* [ref] */
		uint32_t rid;
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_QueryGroupMember {
	struct {
		struct policy_handle *group_handle;/* [ref] */
	} in;

	struct {
		struct samr_RidTypeArray *rids;/* [unique] */
		NTSTATUS result;
	} out;

};


struct samr_SetMemberAttributesOfGroup {
	struct {
		struct policy_handle *group_handle;/* [ref] */
		uint32_t unknown1;
		uint32_t unknown2;
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_OpenAlias {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		uint32_t access_mask;
		uint32_t rid;
	} in;

	struct {
		struct policy_handle *alias_handle;/* [ref] */
		NTSTATUS result;
	} out;

};


struct samr_QueryAliasInfo {
	struct {
		struct policy_handle *alias_handle;/* [ref] */
		enum samr_AliasInfoEnum level;
	} in;

	struct {
		union samr_AliasInfo *info;/* [unique,switch_is(level)] */
		NTSTATUS result;
	} out;

};


struct samr_SetAliasInfo {
	struct {
		struct policy_handle *alias_handle;/* [ref] */
		enum samr_AliasInfoEnum level;
		union samr_AliasInfo *info;/* [ref,switch_is(level)] */
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_DeleteDomAlias {
	struct {
		struct policy_handle *alias_handle;/* [ref] */
	} in;

	struct {
		struct policy_handle *alias_handle;/* [ref] */
		NTSTATUS result;
	} out;

};


struct samr_AddAliasMember {
	struct {
		struct policy_handle *alias_handle;/* [ref] */
		struct dom_sid2 *sid;/* [ref] */
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_DeleteAliasMember {
	struct {
		struct policy_handle *alias_handle;/* [ref] */
		struct dom_sid2 *sid;/* [ref] */
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_GetMembersInAlias {
	struct {
		struct policy_handle *alias_handle;/* [ref] */
	} in;

	struct {
		struct lsa_SidArray *sids;/* [ref] */
		NTSTATUS result;
	} out;

};


struct samr_OpenUser {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		uint32_t access_mask;
		uint32_t rid;
	} in;

	struct {
		struct policy_handle *user_handle;/* [ref] */
		NTSTATUS result;
	} out;

};


struct samr_DeleteUser {
	struct {
		struct policy_handle *user_handle;/* [ref] */
	} in;

	struct {
		struct policy_handle *user_handle;/* [ref] */
		NTSTATUS result;
	} out;

};


struct samr_QueryUserInfo {
	struct {
		struct policy_handle *user_handle;/* [ref] */
		uint16_t level;
	} in;

	struct {
		union samr_UserInfo *info;/* [unique,switch_is(level)] */
		NTSTATUS result;
	} out;

};


struct samr_SetUserInfo {
	struct {
		struct policy_handle *user_handle;/* [ref] */
		uint16_t level;
		union samr_UserInfo *info;/* [ref,switch_is(level)] */
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_ChangePasswordUser {
	struct {
		struct policy_handle *user_handle;/* [ref] */
		uint8_t lm_present;
		struct samr_Password *old_lm_crypted;/* [unique] */
		struct samr_Password *new_lm_crypted;/* [unique] */
		uint8_t nt_present;
		struct samr_Password *old_nt_crypted;/* [unique] */
		struct samr_Password *new_nt_crypted;/* [unique] */
		uint8_t cross1_present;
		struct samr_Password *nt_cross;/* [unique] */
		uint8_t cross2_present;
		struct samr_Password *lm_cross;/* [unique] */
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_GetGroupsForUser {
	struct {
		struct policy_handle *user_handle;/* [ref] */
	} in;

	struct {
		struct samr_RidWithAttributeArray *rids;/* [unique] */
		NTSTATUS result;
	} out;

};


struct samr_QueryDisplayInfo {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		uint16_t level;
		uint32_t start_idx;
		uint32_t max_entries;
		uint32_t buf_size;
	} in;

	struct {
		uint32_t total_size;
		uint32_t returned_size;
		union samr_DispInfo info;/* [switch_is(level)] */
		NTSTATUS result;
	} out;

};


struct samr_GetDisplayEnumerationIndex {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		uint16_t level;
		struct lsa_String name;
	} in;

	struct {
		uint32_t idx;
		NTSTATUS result;
	} out;

};


struct samr_TestPrivateFunctionsDomain {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_TestPrivateFunctionsUser {
	struct {
		struct policy_handle *user_handle;/* [ref] */
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_GetUserPwInfo {
	struct {
		struct policy_handle *user_handle;/* [ref] */
	} in;

	struct {
		struct samr_PwInfo info;
		NTSTATUS result;
	} out;

};


struct samr_RemoveMemberFromForeignDomain {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		struct dom_sid2 *sid;/* [ref] */
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_QueryDomainInfo2 {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		uint16_t level;
	} in;

	struct {
		union samr_DomainInfo *info;/* [unique,switch_is(level)] */
		NTSTATUS result;
	} out;

};


struct samr_QueryUserInfo2 {
	struct {
		struct policy_handle *user_handle;/* [ref] */
		uint16_t level;
	} in;

	struct {
		union samr_UserInfo *info;/* [unique,switch_is(level)] */
		NTSTATUS result;
	} out;

};


struct samr_QueryDisplayInfo2 {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		uint16_t level;
		uint32_t start_idx;
		uint32_t max_entries;
		uint32_t buf_size;
	} in;

	struct {
		uint32_t total_size;
		uint32_t returned_size;
		union samr_DispInfo info;/* [switch_is(level)] */
		NTSTATUS result;
	} out;

};


struct samr_GetDisplayEnumerationIndex2 {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		uint16_t level;
		struct lsa_String name;
	} in;

	struct {
		uint32_t idx;
		NTSTATUS result;
	} out;

};


struct samr_CreateUser2 {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		struct lsa_String *account_name;/* [ref] */
		uint32_t acct_flags;
		uint32_t access_mask;
	} in;

	struct {
		struct policy_handle *user_handle;/* [ref] */
		uint32_t *access_granted;/* [ref] */
		uint32_t *rid;/* [ref] */
		NTSTATUS result;
	} out;

};


struct samr_QueryDisplayInfo3 {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		uint16_t level;
		uint32_t start_idx;
		uint32_t max_entries;
		uint32_t buf_size;
	} in;

	struct {
		uint32_t total_size;
		uint32_t returned_size;
		union samr_DispInfo info;/* [switch_is(level)] */
		NTSTATUS result;
	} out;

};


struct samr_AddMultipleMembersToAlias {
	struct {
		struct policy_handle *alias_handle;/* [ref] */
		struct lsa_SidArray *sids;/* [ref] */
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_RemoveMultipleMembersFromAlias {
	struct {
		struct policy_handle *alias_handle;/* [ref] */
		struct lsa_SidArray *sids;/* [ref] */
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_OemChangePasswordUser2 {
	struct {
		struct lsa_AsciiString *server;/* [unique] */
		struct lsa_AsciiString *account;/* [ref] */
		struct samr_CryptPassword *password;/* [unique] */
		struct samr_Password *hash;/* [unique] */
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_ChangePasswordUser2 {
	struct {
		struct lsa_String *server;/* [unique] */
		struct lsa_String *account;/* [ref] */
		struct samr_CryptPassword *nt_password;/* [unique] */
		struct samr_Password *nt_verifier;/* [unique] */
		uint8_t lm_change;
		struct samr_CryptPassword *lm_password;/* [unique] */
		struct samr_Password *lm_verifier;/* [unique] */
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_GetDomPwInfo {
	struct {
		struct lsa_String *domain_name;/* [unique] */
	} in;

	struct {
		struct samr_PwInfo info;
		NTSTATUS result;
	} out;

};


struct samr_Connect2 {
	struct {
		const char *system_name;/* [unique,string,charset(UTF16)] */
		uint32_t access_mask;
	} in;

	struct {
		struct policy_handle *connect_handle;/* [ref] */
		NTSTATUS result;
	} out;

};


struct samr_SetUserInfo2 {
	struct {
		struct policy_handle *user_handle;/* [ref] */
		uint16_t level;
		union samr_UserInfo *info;/* [ref,switch_is(level)] */
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_SetBootKeyInformation {
	struct {
		struct policy_handle *connect_handle;/* [ref] */
		uint32_t unknown1;
		uint32_t unknown2;
		uint32_t unknown3;
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_GetBootKeyInformation {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
	} in;

	struct {
		uint32_t unknown;
		NTSTATUS result;
	} out;

};


struct samr_Connect3 {
	struct {
		const char *system_name;/* [unique,string,charset(UTF16)] */
		uint32_t unknown;
		uint32_t access_mask;
	} in;

	struct {
		struct policy_handle *connect_handle;/* [ref] */
		NTSTATUS result;
	} out;

};


struct samr_Connect4 {
	struct {
		const char *system_name;/* [unique,string,charset(UTF16)] */
		uint32_t unknown;
		uint32_t access_mask;
	} in;

	struct {
		struct policy_handle *connect_handle;/* [ref] */
		NTSTATUS result;
	} out;

};


struct samr_ChangePasswordUser3 {
	struct {
		struct lsa_String *server;/* [unique] */
		struct lsa_String *account;/* [ref] */
		struct samr_CryptPassword *nt_password;/* [unique] */
		struct samr_Password *nt_verifier;/* [unique] */
		uint8_t lm_change;
		struct samr_CryptPassword *lm_password;/* [unique] */
		struct samr_Password *lm_verifier;/* [unique] */
		struct samr_CryptPassword *password3;/* [unique] */
	} in;

	struct {
		struct samr_DomInfo1 *dominfo;/* [unique] */
		struct samr_ChangeReject *reject;/* [unique] */
		NTSTATUS result;
	} out;

};


struct samr_Connect5 {
	struct {
		const char *system_name;/* [unique,string,charset(UTF16)] */
		uint32_t access_mask;
		uint32_t level;
		union samr_ConnectInfo *info;/* [ref,switch_is(level)] */
	} in;

	struct {
		uint32_t level;
		union samr_ConnectInfo *info;/* [ref,switch_is(level)] */
		struct policy_handle *connect_handle;/* [ref] */
		NTSTATUS result;
	} out;

};


struct samr_RidToSid {
	struct {
		struct policy_handle *domain_handle;/* [ref] */
		uint32_t rid;
	} in;

	struct {
		struct dom_sid2 *sid;/* [unique] */
		NTSTATUS result;
	} out;

};


struct samr_SetDsrmPassword {
	struct {
		struct lsa_String *name;/* [unique] */
		uint32_t unknown;
		struct samr_Password *hash;/* [unique] */
	} in;

	struct {
		NTSTATUS result;
	} out;

};


struct samr_ValidatePassword {
	struct {
		NTSTATUS result;
	} out;

};

#endif /* _HEADER_samr */