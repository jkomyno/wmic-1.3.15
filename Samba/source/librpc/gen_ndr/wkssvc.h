/* header auto-generated by pidl */

#include "librpc/gen_ndr/srvsvc.h"
#ifndef _HEADER_wkssvc
#define _HEADER_wkssvc

struct wkssvc_NetWkstaInfo100 {
	enum srvsvc_PlatformId platform_id;
	const char *server_name;/* [unique,string,charset(UTF16)] */
	const char *domain_name;/* [unique,string,charset(UTF16)] */
	uint32_t version_major;
	uint32_t version_minor;
};

struct wkssvc_NetWkstaInfo101 {
	enum srvsvc_PlatformId platform_id;
	const char *server_name;/* [unique,string,charset(UTF16)] */
	const char *domain_name;/* [unique,string,charset(UTF16)] */
	uint32_t version_major;
	uint32_t version_minor;
	const char *lan_root;/* [unique,string,charset(UTF16)] */
};

struct wkssvc_NetWkstaInfo102 {
	enum srvsvc_PlatformId platform_id;
	const char *server_name;/* [unique,string,charset(UTF16)] */
	const char *domain_name;/* [unique,string,charset(UTF16)] */
	uint32_t version_major;
	uint32_t version_minor;
	const char *lan_root;/* [unique,string,charset(UTF16)] */
	uint32_t logged_on_users;
};

struct wkssvc_NetWkstaInfo502 {
	uint32_t char_wait;
	uint32_t collection_time;
	uint32_t maximum_collection_count;
	uint32_t keep_connection;
	uint32_t max_commands;
	uint32_t session_timeout;
	uint32_t size_char_buf;
	uint32_t max_threads;
	uint32_t lock_quota;
	uint32_t lock_increment;
	uint32_t lock_maximum;
	uint32_t pipe_increment;
	uint32_t pipe_maximum;
	uint32_t cache_file_timeout;
	uint32_t dormant_file_limit;
	uint32_t read_ahead_throughput;
	uint32_t num_mailslot_buffers;
	uint32_t num_srv_announce_buffers;
	uint32_t max_illegal_dgram_events;
	uint32_t dgram_event_reset_freq;
	uint32_t log_election_packets;
	uint32_t use_opportunistic_locking;
	uint32_t use_unlock_behind;
	uint32_t use_close_behind;
	uint32_t buf_named_pipes;
	uint32_t use_lock_read_unlock;
	uint32_t utilize_nt_caching;
	uint32_t use_raw_read;
	uint32_t use_raw_write;
	uint32_t use_write_raw_data;
	uint32_t use_encryption;
	uint32_t buf_files_deny_write;
	uint32_t buf_read_only_files;
	uint32_t force_core_create_mode;
	uint32_t use_512_byte_max_transfer;
};

struct wkssvc_NetWkstaInfo1010 {
	uint32_t char_wait;
};

struct wkssvc_NetWkstaInfo1011 {
	uint32_t collection_time;
};

struct wkssvc_NetWkstaInfo1012 {
	uint32_t maximum_collection_count;
};

struct wkssvc_NetWkstaInfo1013 {
	uint32_t keep_connection;
};

struct wkssvc_NetWkstaInfo1018 {
	uint32_t session_timeout;
};

struct wkssvc_NetWkstaInfo1023 {
	uint32_t size_char_buf;
};

struct wkssvc_NetWkstaInfo1027 {
	uint32_t errorlog_sz;
};

struct wkssvc_NetWkstaInfo1033 {
	uint32_t max_threads;
};

union wkssvc_NetWkstaInfo {
	struct wkssvc_NetWkstaInfo100 *info100;/* [unique,case(100)] */
	struct wkssvc_NetWkstaInfo101 *info101;/* [unique,case(101)] */
	struct wkssvc_NetWkstaInfo102 *info102;/* [unique,case(102)] */
	struct wkssvc_NetWkstaInfo502 *info502;/* [unique,case(502)] */
	struct wkssvc_NetWkstaInfo1010 *info1010;/* [unique,case(1010)] */
	struct wkssvc_NetWkstaInfo1011 *info1011;/* [unique,case(1011)] */
	struct wkssvc_NetWkstaInfo1012 *info1012;/* [unique,case(1012)] */
	struct wkssvc_NetWkstaInfo1013 *info1013;/* [unique,case(1013)] */
	struct wkssvc_NetWkstaInfo1018 *info1018;/* [unique,case(1018)] */
	struct wkssvc_NetWkstaInfo1023 *info1023;/* [unique,case(1023)] */
	struct wkssvc_NetWkstaInfo1027 *info1027;/* [unique,case(1027)] */
	struct wkssvc_NetWkstaInfo1033 *info1033;/* [unique,case(1033)] */
};

struct USER_INFO_0 {
	const char *user;/* [unique,string,charset(UTF16)] */
};

struct USER_INFO_0_CONTAINER {
	uint32_t entries_read;
	struct USER_INFO_0 *user0;/* [unique,size_is(entries_read)] */
};

struct USER_INFO_1 {
	const char *user_name;/* [unique,string,charset(UTF16)] */
	const char *logon_domain;/* [unique,string,charset(UTF16)] */
	const char *other_domains;/* [unique,string,charset(UTF16)] */
	const char *logon_server;/* [unique,string,charset(UTF16)] */
};

struct USER_INFO_1_CONTAINER {
	uint32_t entries_read;
	struct USER_INFO_1 *user1;/* [unique,size_is(entries_read)] */
};

union WKS_USER_ENUM_UNION {
	struct USER_INFO_0_CONTAINER *user0;/* [unique,case(0)] */
	struct USER_INFO_1_CONTAINER *user1;/* [unique,case] */
}/* [switch_type(uint32)] */;

struct wkssvc_NetWkstaTransportInfo0 {
	uint32_t quality_of_service;
	uint32_t vc_count;
	const char *name;/* [unique,string,charset(UTF16)] */
	const char *address;/* [unique,string,charset(UTF16)] */
	uint32_t wan_link;
};

struct wkssvc_NetWkstaTransportCtr0 {
	uint32_t count;
	struct wkssvc_NetWkstaTransportInfo0 *array;/* [unique,size_is(count)] */
};

union wkssvc_NetWkstaTransportCtr {
	struct wkssvc_NetWkstaTransportCtr0 *ctr0;/* [unique,case(0)] */
};

struct wkssvc_PasswordBuffer {
	uint8_t data[524];
};

/* bitmap wkssvc_joinflags */
#define WKSSVC_JOIN_FLAGS_DEFER_SPN ( 0x00000100 )
#define WKSSVC_JOIN_FLAGS_MACHINE_PWD_PASSED ( 0x00000080 )
#define WKSSVC_JOIN_FLAGS_JOIN_UNSECURE ( 0x00000040 )
#define WKSSVC_JOIN_FLAGS_DOMAIN_JOIN_IF_JOINED ( 0x00000020 )
#define WKSSVC_JOIN_FLAGS_WIN9X_UPGRADE ( 0x00000010 )
#define WKSSVC_JOIN_FLAGS_ACCOUNT_DELETE ( 0x00000004 )
#define WKSSVC_JOIN_FLAGS_ACCOUNT_CREATE ( 0x00000002 )
#define WKSSVC_JOIN_FLAGS_JOIN_TYPE ( 0x00000001 )

/* bitmap wkssvc_renameflags */
#define WKSSVC_JOIN_FLAGS_ACCOUNT_CREATE ( 0x00000002 )


struct wkssvc_NetWkstaGetInfo {
	struct {
		const char *server_name;/* [unique,string,charset(UTF16)] */
		uint32_t level;
	} in;

	struct {
		union wkssvc_NetWkstaInfo *info;/* [ref,switch_is(level)] */
		WERROR result;
	} out;

};


struct wkssvc_NetWkstaSetInfo {
	struct {
		const char *server_name;/* [unique,string,charset(UTF16)] */
		uint32_t level;
		union wkssvc_NetWkstaInfo *info;/* [ref,switch_is(level)] */
		uint32_t *parm_error;/* [ref] */
	} in;

	struct {
		uint32_t *parm_error;/* [ref] */
		WERROR result;
	} out;

};


struct wkssvc_NetWkstaEnumUsers {
	struct {
		const char *server_name;/* [unique,string,charset(UTF16)] */
		uint32_t level;
		union WKS_USER_ENUM_UNION *users;/* [ref] */
		uint32_t prefmaxlen;
		uint32_t *resumehandle;/* [ref] */
	} in;

	struct {
		union WKS_USER_ENUM_UNION *users;/* [ref] */
		uint32_t *entriesread;/* [unique] */
		uint32_t *totalentries;/* [unique] */
		uint32_t *resumehandle;/* [ref] */
		WERROR result;
	} out;

};


struct WKSSVC_NETRWKSTAUSERGETINFO {
	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRWKSTAUSERSETINFO {
	struct {
		WERROR result;
	} out;

};


struct wkssvc_NetWkstaTransportEnum {
	struct {
		const char *server_name;/* [unique,string,charset(UTF16)] */
		uint32_t level;
		union wkssvc_NetWkstaTransportCtr *ctr;/* [ref,switch_is(level)] */
		uint32_t max_buffer;
		uint32_t *resume_handle;/* [unique] */
	} in;

	struct {
		uint32_t level;
		union wkssvc_NetWkstaTransportCtr *ctr;/* [ref,switch_is(level)] */
		uint32_t totalentries;
		uint32_t *resume_handle;/* [unique] */
		WERROR result;
	} out;

};


struct WKSSVC_NETRWKSTATRANSPORTADD {
	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRWKSTATRANSPORTDEL {
	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRUSEADD {
	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRUSEGETINFO {
	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRUSEDEL {
	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRUSEENUM {
	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRMESSAGEBUFFERSEND {
	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRWORKSTATIONSTATISTICSGET {
	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRLOGONDOMAINNAMEADD {
	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRLOGONDOMAINNAMEDEL {
	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRJOINDOMAIN {
	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRUNJOINDOMAIN {
	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRRENAMEMACHINEINDOMAIN {
	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRVALIDATENAME {
	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRGETJOININFORMATION {
	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRGETJOINABLEOUS {
	struct {
		WERROR result;
	} out;

};


struct wkssvc_NetrJoinDomain2 {
	struct {
		const char *server_name;/* [unique,string,charset(UTF16)] */
		const char *domain_name;/* [ref,string,charset(UTF16)] */
		const char *account_name;/* [unique,string,charset(UTF16)] */
		const char *admin_account;/* [unique,string,charset(UTF16)] */
		struct wkssvc_PasswordBuffer *encrypted_password;/* [unique] */
		uint32_t join_flags;
	} in;

	struct {
		WERROR result;
	} out;

};


struct wkssvc_NetrUnjoinDomain2 {
	struct {
		const char *server_name;/* [unique,string,charset(UTF16)] */
		const char *account;/* [unique,string,charset(UTF16)] */
		struct wkssvc_PasswordBuffer *encrypted_password;/* [unique] */
		uint32_t unjoin_flags;
	} in;

	struct {
		WERROR result;
	} out;

};


struct wkssvc_NetrRenameMachineInDomain2 {
	struct {
		const char *server_name;/* [unique,string,charset(UTF16)] */
		const char *NewMachineName;/* [unique,string,charset(UTF16)] */
		const char *Account;/* [unique,string,charset(UTF16)] */
		struct wkssvc_PasswordBuffer *EncryptedPassword;/* [unique] */
		uint32_t RenameOptions;
	} in;

	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRVALIDATENAME2 {
	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRGETJOINABLEOUS2 {
	struct {
		WERROR result;
	} out;

};


struct wkssvc_NetrAddAlternateComputerName {
	struct {
		const char *server_name;/* [unique,string,charset(UTF16)] */
		const char *NewAlternateMachineName;/* [unique,string,charset(UTF16)] */
		const char *Account;/* [unique,string,charset(UTF16)] */
		struct wkssvc_PasswordBuffer *EncryptedPassword;/* [unique] */
		uint32_t Reserved;
	} in;

	struct {
		WERROR result;
	} out;

};


struct wkssvc_NetrRemoveAlternateComputerName {
	struct {
		const char *server_name;/* [unique,string,charset(UTF16)] */
		const char *AlternateMachineNameToRemove;/* [unique,string,charset(UTF16)] */
		const char *Account;/* [unique,string,charset(UTF16)] */
		struct wkssvc_PasswordBuffer *EncryptedPassword;/* [unique] */
		uint32_t Reserved;
	} in;

	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRSETPRIMARYCOMPUTERNAME {
	struct {
		WERROR result;
	} out;

};


struct WKSSVC_NETRENUMERATECOMPUTERNAMES {
	struct {
		WERROR result;
	} out;

};

#endif /* _HEADER_wkssvc */
