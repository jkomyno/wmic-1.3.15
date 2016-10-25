/* header auto-generated by pidl */

#ifndef _HEADER_opendb
#define _HEADER_opendb

struct opendb_entry {
	uint32_t server;
	uint32_t stream_id;
	uint32_t share_access;
	uint32_t access_mask;
	void* file_handle;
	uint8_t delete_on_close;
	uint32_t oplock_level;
};

struct opendb_pending {
	uint32_t server;
	void* notify_ptr;
};

struct opendb_file {
	uint8_t delete_on_close;
	const char * path;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	uint32_t num_entries;
	struct opendb_entry *entries;
	uint32_t num_pending;
	struct opendb_pending *pending;
}/* [public] */;

#endif /* _HEADER_opendb */