/* header auto-generated by pidl */

#include "librpc/gen_ndr/nbt.h"
#ifndef _HEADER_wrepl
#define _HEADER_wrepl

#define WINS_REPLICATION_PORT	( 42 )
#define WREPL_OPCODE_BITS	( 0x7800 )
struct wrepl_ip {
	const char * owner;
	const char * ip;
}/* [flag(LIBNDR_FLAG_BIGENDIAN)] */;

struct wrepl_address_list {
	uint32_t num_ips;
	struct wrepl_ip *ips;
}/* [flag(LIBNDR_FLAG_LITTLE_ENDIAN)] */;

union wrepl_addresses {
	const char * ip;/* [case(0)] */
	struct wrepl_address_list addresses;/* [case(2)] */
}/* [nodiscriminant] */;

enum wrepl_name_type {
	WREPL_TYPE_UNIQUE=0x0,
	WREPL_TYPE_GROUP=0x1,
	WREPL_TYPE_SGROUP=0x2,
	WREPL_TYPE_MHOMED=0x3
};

enum wrepl_name_state {
	WREPL_STATE_ACTIVE=0x0,
	WREPL_STATE_RELEASED=0x1,
	WREPL_STATE_TOMBSTONE=0x2,
	WREPL_STATE_RESERVED=0x3
};

enum wrepl_name_node {
	WREPL_NODE_B=0x0,
	WREPL_NODE_P=0x1,
	WREPL_NODE_M=0x2,
	WREPL_NODE_H=0x3
};

/* bitmap wrepl_flags */
#define WREPL_FLAGS_RECORD_TYPE ( 0x00000003 )
#define WREPL_FLAGS_RECORD_STATE ( 0x0000000C )
#define WREPL_FLAGS_REGISTERED_LOCAL ( 0x00000010 )
#define WREPL_FLAGS_NODE_TYPE ( 0x00000060 )
#define WREPL_FLAGS_IS_STATIC ( 0x00000080 )

enum wrepl_group_flag {
	WREPL_GROUP_FLAG_NO_GROUP=0x00000000,
	WREPL_GROUP_FLAG_IS_GROUP=0x00000001
};

struct wrepl_wins_name {
	struct nbt_name * name;
	uint32_t flags;
	enum wrepl_group_flag is_group;/* [value((((((flags)&WREPL_FLAGS_RECORD_TYPE)==WREPL_TYPE_GROUP)||(((flags)&WREPL_FLAGS_RECORD_TYPE)==WREPL_TYPE_SGROUP))?WREPL_GROUP_FLAG_IS_GROUP:WREPL_GROUP_FLAG_NO_GROUP)),flag(LIBNDR_FLAG_LITTLE_ENDIAN)] */
	uint64_t id;
	union wrepl_addresses addresses;/* [switch_is(flags&2)] */
	const char * unknown;
};

struct wrepl_send_reply {
	uint32_t num_names;
	struct wrepl_wins_name *names;
};

struct wrepl_wins_owner {
	const char * address;
	uint64_t max_version;
	uint64_t min_version;
	uint32_t type;
};

struct wrepl_table {
	uint32_t partner_count;
	struct wrepl_wins_owner *partners;
	const char * initiator;
};

enum wrepl_replication_cmd {
	WREPL_REPL_TABLE_QUERY=0,
	WREPL_REPL_TABLE_REPLY=1,
	WREPL_REPL_SEND_REQUEST=2,
	WREPL_REPL_SEND_REPLY=3,
	WREPL_REPL_UPDATE=4,
	WREPL_REPL_UPDATE2=5,
	WREPL_REPL_INFORM=8,
	WREPL_REPL_INFORM2=9
};

union wrepl_replication_info {
	struct wrepl_table table;/* [case(WREPL_REPL_TABLE_REPLY)] */
	struct wrepl_wins_owner owner;/* [case(WREPL_REPL_SEND_REQUEST)] */
	struct wrepl_send_reply reply;/* [case(WREPL_REPL_SEND_REPLY)] */
}/* [nodiscriminant] */;

struct wrepl_replication {
	enum wrepl_replication_cmd command;
	union wrepl_replication_info info;/* [switch_is(command)] */
};

struct wrepl_start {
	uint32_t assoc_ctx;
	uint16_t minor_version;
	uint16_t major_version;
};

struct wrepl_stop {
	uint32_t reason;
};

enum wrepl_mess_type {
	WREPL_START_ASSOCIATION=0,
	WREPL_START_ASSOCIATION_REPLY=1,
	WREPL_STOP_ASSOCIATION=2,
	WREPL_REPLICATION=3
};

union wrepl_message {
	struct wrepl_start start;/* [case(WREPL_START_ASSOCIATION)] */
	struct wrepl_start start_reply;/* [case(WREPL_START_ASSOCIATION_REPLY)] */
	struct wrepl_stop stop;/* [case(WREPL_STOP_ASSOCIATION)] */
	struct wrepl_replication replication;/* [case(WREPL_REPLICATION)] */
}/* [nodiscriminant] */;

struct wrepl_packet {
	uint32_t opcode;
	uint32_t assoc_ctx;
	enum wrepl_mess_type mess_type;
	union wrepl_message message;/* [switch_is(mess_type)] */
	DATA_BLOB padding;/* [flag(LIBNDR_FLAG_REMAINING)] */
}/* [gensize,public,flag(LIBNDR_FLAG_BIGENDIAN|LIBNDR_PRINT_ARRAY_HEX)] */;

struct wrepl_wrap {
	uint32_t size;/* [value(ndr_size_wrepl_packet(&packet,ndr->flags))] */
	struct wrepl_packet packet;
}/* [public,flag(LIBNDR_FLAG_BIGENDIAN|LIBNDR_PRINT_ARRAY_HEX)] */;


struct decode_winsrepl {
	struct {
		struct wrepl_wrap p;
	} in;

};

#endif /* _HEADER_wrepl */
