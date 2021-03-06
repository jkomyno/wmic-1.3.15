/* parser auto-generated by pidl */

#include "includes.h"
#include "libcli/util/nterr.h"
#include "librpc/gen_ndr/ndr_misc.h"
#include "librpc/gen_ndr/ndr_dcerpc.h"
#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/ndr_xattr.h"

#include "librpc/gen_ndr/ndr_security.h"
static NTSTATUS ndr_push_xattr_DosInfo1(struct ndr_push *ndr, int ndr_flags, const struct xattr_DosInfo1 *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->attrib));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->ea_size));
		NDR_CHECK(ndr_push_udlong(ndr, NDR_SCALARS, r->size));
		NDR_CHECK(ndr_push_udlong(ndr, NDR_SCALARS, r->alloc_size));
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, r->create_time));
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, r->change_time));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_xattr_DosInfo1(struct ndr_pull *ndr, int ndr_flags, struct xattr_DosInfo1 *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->attrib));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->ea_size));
		NDR_CHECK(ndr_pull_udlong(ndr, NDR_SCALARS, &r->size));
		NDR_CHECK(ndr_pull_udlong(ndr, NDR_SCALARS, &r->alloc_size));
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, &r->create_time));
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, &r->change_time));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_xattr_DosInfo1(struct ndr_print *ndr, const char *name, const struct xattr_DosInfo1 *r)
{
	ndr_print_struct(ndr, name, "xattr_DosInfo1");
	ndr->depth++;
	ndr_print_uint32(ndr, "attrib", r->attrib);
	ndr_print_uint32(ndr, "ea_size", r->ea_size);
	ndr_print_udlong(ndr, "size", r->size);
	ndr_print_udlong(ndr, "alloc_size", r->alloc_size);
	ndr_print_NTTIME(ndr, "create_time", r->create_time);
	ndr_print_NTTIME(ndr, "change_time", r->change_time);
	ndr->depth--;
}

static NTSTATUS ndr_push_xattr_DosInfo2(struct ndr_push *ndr, int ndr_flags, const struct xattr_DosInfo2 *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->flags));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->attrib));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->ea_size));
		NDR_CHECK(ndr_push_udlong(ndr, NDR_SCALARS, r->size));
		NDR_CHECK(ndr_push_udlong(ndr, NDR_SCALARS, r->alloc_size));
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, r->create_time));
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, r->change_time));
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, r->write_time));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->name));
			ndr->flags = _flags_save_string;
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_xattr_DosInfo2(struct ndr_pull *ndr, int ndr_flags, struct xattr_DosInfo2 *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->flags));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->attrib));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->ea_size));
		NDR_CHECK(ndr_pull_udlong(ndr, NDR_SCALARS, &r->size));
		NDR_CHECK(ndr_pull_udlong(ndr, NDR_SCALARS, &r->alloc_size));
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, &r->create_time));
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, &r->change_time));
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, &r->write_time));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->name));
			ndr->flags = _flags_save_string;
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_xattr_DosInfo2(struct ndr_print *ndr, const char *name, const struct xattr_DosInfo2 *r)
{
	ndr_print_struct(ndr, name, "xattr_DosInfo2");
	ndr->depth++;
	ndr_print_uint32(ndr, "flags", r->flags);
	ndr_print_uint32(ndr, "attrib", r->attrib);
	ndr_print_uint32(ndr, "ea_size", r->ea_size);
	ndr_print_udlong(ndr, "size", r->size);
	ndr_print_udlong(ndr, "alloc_size", r->alloc_size);
	ndr_print_NTTIME(ndr, "create_time", r->create_time);
	ndr_print_NTTIME(ndr, "change_time", r->change_time);
	ndr_print_NTTIME(ndr, "write_time", r->write_time);
	ndr_print_string(ndr, "name", r->name);
	ndr->depth--;
}

static NTSTATUS ndr_push_xattr_DosInfo(struct ndr_push *ndr, int ndr_flags, const union xattr_DosInfo *r)
{
	int level;
	level = ndr_push_get_switch_value(ndr, r);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, level));
		switch (level) {
			case 1:
				NDR_CHECK(ndr_push_xattr_DosInfo1(ndr, NDR_SCALARS, &r->info1));
			break;

			case 2:
				NDR_CHECK(ndr_push_xattr_DosInfo2(ndr, NDR_SCALARS, &r->info2));
			break;

			default:
				return ndr_push_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u", level);
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		switch (level) {
			case 1:
			break;

			case 2:
			break;

			default:
				return ndr_push_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u", level);
		}
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_xattr_DosInfo(struct ndr_pull *ndr, int ndr_flags, union xattr_DosInfo *r)
{
	int level;
	uint16_t _level;
	level = ndr_pull_get_switch_value(ndr, r);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &_level));
		if (_level != level) {
			return ndr_pull_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u for xattr_DosInfo", _level);
		}
		switch (level) {
			case 1: {
				NDR_CHECK(ndr_pull_xattr_DosInfo1(ndr, NDR_SCALARS, &r->info1));
			break; }

			case 2: {
				NDR_CHECK(ndr_pull_xattr_DosInfo2(ndr, NDR_SCALARS, &r->info2));
			break; }

			default:
				return ndr_pull_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u", level);
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		switch (level) {
			case 1: {
			break; }

			case 2: {
			break; }

			default:
				return ndr_pull_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u", level);
		}
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_xattr_DosInfo(struct ndr_print *ndr, const char *name, const union xattr_DosInfo *r)
{
	int level;
	level = ndr_print_get_switch_value(ndr, r);
	ndr_print_union(ndr, name, level, "xattr_DosInfo");
	switch (level) {
		case 1:
			ndr_print_xattr_DosInfo1(ndr, "info1", &r->info1);
		break;

		case 2:
			ndr_print_xattr_DosInfo2(ndr, "info2", &r->info2);
		break;

		default:
			ndr_print_bad_level(ndr, name, level);
	}
}

_PUBLIC_ NTSTATUS ndr_push_xattr_DosAttrib(struct ndr_push *ndr, int ndr_flags, const struct xattr_DosAttrib *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->version));
		NDR_CHECK(ndr_push_set_switch_value(ndr, &r->info, r->version));
		NDR_CHECK(ndr_push_xattr_DosInfo(ndr, NDR_SCALARS, &r->info));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ NTSTATUS ndr_pull_xattr_DosAttrib(struct ndr_pull *ndr, int ndr_flags, struct xattr_DosAttrib *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->version));
		NDR_CHECK(ndr_pull_set_switch_value(ndr, &r->info, r->version));
		NDR_CHECK(ndr_pull_xattr_DosInfo(ndr, NDR_SCALARS, &r->info));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_xattr_DosAttrib(struct ndr_print *ndr, const char *name, const struct xattr_DosAttrib *r)
{
	ndr_print_struct(ndr, name, "xattr_DosAttrib");
	ndr->depth++;
	ndr_print_uint16(ndr, "version", r->version);
	ndr_print_set_switch_value(ndr, &r->info, r->version);
	ndr_print_xattr_DosInfo(ndr, "info", &r->info);
	ndr->depth--;
}

static NTSTATUS ndr_push_xattr_EA(struct ndr_push *ndr, int ndr_flags, const struct xattr_EA *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->name));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_push_DATA_BLOB(ndr, NDR_SCALARS, r->value));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_xattr_EA(struct ndr_pull *ndr, int ndr_flags, struct xattr_EA *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->name));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_pull_DATA_BLOB(ndr, NDR_SCALARS, &r->value));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_xattr_EA(struct ndr_print *ndr, const char *name, const struct xattr_EA *r)
{
	ndr_print_struct(ndr, name, "xattr_EA");
	ndr->depth++;
	ndr_print_string(ndr, "name", r->name);
	ndr_print_DATA_BLOB(ndr, "value", r->value);
	ndr->depth--;
}

_PUBLIC_ NTSTATUS ndr_push_xattr_DosEAs(struct ndr_push *ndr, int ndr_flags, const struct xattr_DosEAs *r)
{
	uint32_t cntr_eas_1;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->num_eas));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->eas));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->eas) {
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->num_eas));
			for (cntr_eas_1 = 0; cntr_eas_1 < r->num_eas; cntr_eas_1++) {
				NDR_CHECK(ndr_push_xattr_EA(ndr, NDR_SCALARS, &r->eas[cntr_eas_1]));
			}
		}
	}
	return NT_STATUS_OK;
}

_PUBLIC_ NTSTATUS ndr_pull_xattr_DosEAs(struct ndr_pull *ndr, int ndr_flags, struct xattr_DosEAs *r)
{
	uint32_t _ptr_eas;
	uint32_t cntr_eas_1;
	TALLOC_CTX *_mem_save_eas_0;
	TALLOC_CTX *_mem_save_eas_1;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->num_eas));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_eas));
		if (_ptr_eas) {
			NDR_PULL_ALLOC(ndr, r->eas);
		} else {
			r->eas = NULL;
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->eas) {
			_mem_save_eas_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->eas, 0);
			NDR_CHECK(ndr_pull_array_size(ndr, &r->eas));
			NDR_PULL_ALLOC_N(ndr, r->eas, ndr_get_array_size(ndr, &r->eas));
			_mem_save_eas_1 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->eas, 0);
			for (cntr_eas_1 = 0; cntr_eas_1 < r->num_eas; cntr_eas_1++) {
				NDR_CHECK(ndr_pull_xattr_EA(ndr, NDR_SCALARS, &(r->eas)[cntr_eas_1]));
			}
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_eas_1, 0);
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_eas_0, 0);
		}
		if (r->eas) {
			NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->eas, r->num_eas));
		}
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_xattr_DosEAs(struct ndr_print *ndr, const char *name, const struct xattr_DosEAs *r)
{
	uint32_t cntr_eas_1;
	ndr_print_struct(ndr, name, "xattr_DosEAs");
	ndr->depth++;
	ndr_print_uint16(ndr, "num_eas", r->num_eas);
	ndr_print_ptr(ndr, "eas", r->eas);
	ndr->depth++;
	if (r->eas) {
		ndr->print(ndr, "%s: ARRAY(%d)", "eas", r->num_eas);
		ndr->depth++;
		for (cntr_eas_1=0;cntr_eas_1<r->num_eas;cntr_eas_1++) {
			char *idx_1=NULL;
			asprintf(&idx_1, "[%d]", cntr_eas_1);
			if (idx_1) {
				ndr_print_xattr_EA(ndr, "eas", &r->eas[cntr_eas_1]);
				free(idx_1);
			}
		}
		ndr->depth--;
	}
	ndr->depth--;
	ndr->depth--;
}

static NTSTATUS ndr_push_xattr_DosStream(struct ndr_push *ndr, int ndr_flags, const struct xattr_DosStream *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->flags));
		NDR_CHECK(ndr_push_udlong(ndr, NDR_SCALARS, r->size));
		NDR_CHECK(ndr_push_udlong(ndr, NDR_SCALARS, r->alloc_size));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->name));
			ndr->flags = _flags_save_string;
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_xattr_DosStream(struct ndr_pull *ndr, int ndr_flags, struct xattr_DosStream *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->flags));
		NDR_CHECK(ndr_pull_udlong(ndr, NDR_SCALARS, &r->size));
		NDR_CHECK(ndr_pull_udlong(ndr, NDR_SCALARS, &r->alloc_size));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->name));
			ndr->flags = _flags_save_string;
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_xattr_DosStream(struct ndr_print *ndr, const char *name, const struct xattr_DosStream *r)
{
	ndr_print_struct(ndr, name, "xattr_DosStream");
	ndr->depth++;
	ndr_print_uint32(ndr, "flags", r->flags);
	ndr_print_udlong(ndr, "size", r->size);
	ndr_print_udlong(ndr, "alloc_size", r->alloc_size);
	ndr_print_string(ndr, "name", r->name);
	ndr->depth--;
}

_PUBLIC_ NTSTATUS ndr_push_xattr_DosStreams(struct ndr_push *ndr, int ndr_flags, const struct xattr_DosStreams *r)
{
	uint32_t cntr_streams_1;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->num_streams));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->streams));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->streams) {
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->num_streams));
			for (cntr_streams_1 = 0; cntr_streams_1 < r->num_streams; cntr_streams_1++) {
				NDR_CHECK(ndr_push_xattr_DosStream(ndr, NDR_SCALARS, &r->streams[cntr_streams_1]));
			}
		}
	}
	return NT_STATUS_OK;
}

_PUBLIC_ NTSTATUS ndr_pull_xattr_DosStreams(struct ndr_pull *ndr, int ndr_flags, struct xattr_DosStreams *r)
{
	uint32_t _ptr_streams;
	uint32_t cntr_streams_1;
	TALLOC_CTX *_mem_save_streams_0;
	TALLOC_CTX *_mem_save_streams_1;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->num_streams));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_streams));
		if (_ptr_streams) {
			NDR_PULL_ALLOC(ndr, r->streams);
		} else {
			r->streams = NULL;
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->streams) {
			_mem_save_streams_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->streams, 0);
			NDR_CHECK(ndr_pull_array_size(ndr, &r->streams));
			NDR_PULL_ALLOC_N(ndr, r->streams, ndr_get_array_size(ndr, &r->streams));
			_mem_save_streams_1 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->streams, 0);
			for (cntr_streams_1 = 0; cntr_streams_1 < r->num_streams; cntr_streams_1++) {
				NDR_CHECK(ndr_pull_xattr_DosStream(ndr, NDR_SCALARS, &(r->streams)[cntr_streams_1]));
			}
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_streams_1, 0);
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_streams_0, 0);
		}
		if (r->streams) {
			NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->streams, r->num_streams));
		}
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_xattr_DosStreams(struct ndr_print *ndr, const char *name, const struct xattr_DosStreams *r)
{
	uint32_t cntr_streams_1;
	ndr_print_struct(ndr, name, "xattr_DosStreams");
	ndr->depth++;
	ndr_print_uint32(ndr, "num_streams", r->num_streams);
	ndr_print_ptr(ndr, "streams", r->streams);
	ndr->depth++;
	if (r->streams) {
		ndr->print(ndr, "%s: ARRAY(%d)", "streams", r->num_streams);
		ndr->depth++;
		for (cntr_streams_1=0;cntr_streams_1<r->num_streams;cntr_streams_1++) {
			char *idx_1=NULL;
			asprintf(&idx_1, "[%d]", cntr_streams_1);
			if (idx_1) {
				ndr_print_xattr_DosStream(ndr, "streams", &r->streams[cntr_streams_1]);
				free(idx_1);
			}
		}
		ndr->depth--;
	}
	ndr->depth--;
	ndr->depth--;
}

static NTSTATUS ndr_push_xattr_NTACL_Info(struct ndr_push *ndr, int ndr_flags, const union xattr_NTACL_Info *r)
{
	int level;
	level = ndr_push_get_switch_value(ndr, r);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, level));
		switch (level) {
			case 1:
				NDR_CHECK(ndr_push_unique_ptr(ndr, r->sd));
			break;

			default:
				return ndr_push_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u", level);
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		switch (level) {
			case 1:
				if (r->sd) {
					NDR_CHECK(ndr_push_security_descriptor(ndr, NDR_SCALARS|NDR_BUFFERS, r->sd));
				}
			break;

			default:
				return ndr_push_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u", level);
		}
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_xattr_NTACL_Info(struct ndr_pull *ndr, int ndr_flags, union xattr_NTACL_Info *r)
{
	int level;
	uint16_t _level;
	TALLOC_CTX *_mem_save_sd_0;
	level = ndr_pull_get_switch_value(ndr, r);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &_level));
		if (_level != level) {
			return ndr_pull_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u for xattr_NTACL_Info", _level);
		}
		switch (level) {
			case 1: {
				uint32_t _ptr_sd;
				NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_sd));
				if (_ptr_sd) {
					NDR_PULL_ALLOC(ndr, r->sd);
				} else {
					r->sd = NULL;
				}
			break; }

			default:
				return ndr_pull_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u", level);
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		switch (level) {
			case 1: {
				if (r->sd) {
					_mem_save_sd_0 = NDR_PULL_GET_MEM_CTX(ndr);
					NDR_PULL_SET_MEM_CTX(ndr, r->sd, 0);
					NDR_CHECK(ndr_pull_security_descriptor(ndr, NDR_SCALARS|NDR_BUFFERS, r->sd));
					NDR_PULL_SET_MEM_CTX(ndr, _mem_save_sd_0, 0);
				}
			break; }

			default:
				return ndr_pull_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u", level);
		}
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_xattr_NTACL_Info(struct ndr_print *ndr, const char *name, const union xattr_NTACL_Info *r)
{
	int level;
	level = ndr_print_get_switch_value(ndr, r);
	ndr_print_union(ndr, name, level, "xattr_NTACL_Info");
	switch (level) {
		case 1:
			ndr_print_ptr(ndr, "sd", r->sd);
			ndr->depth++;
			if (r->sd) {
				ndr_print_security_descriptor(ndr, "sd", r->sd);
			}
			ndr->depth--;
		break;

		default:
			ndr_print_bad_level(ndr, name, level);
	}
}

_PUBLIC_ NTSTATUS ndr_push_xattr_NTACL(struct ndr_push *ndr, int ndr_flags, const struct xattr_NTACL *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->version));
		NDR_CHECK(ndr_push_set_switch_value(ndr, &r->info, r->version));
		NDR_CHECK(ndr_push_xattr_NTACL_Info(ndr, NDR_SCALARS, &r->info));
	}
	if (ndr_flags & NDR_BUFFERS) {
		NDR_CHECK(ndr_push_xattr_NTACL_Info(ndr, NDR_BUFFERS, &r->info));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ NTSTATUS ndr_pull_xattr_NTACL(struct ndr_pull *ndr, int ndr_flags, struct xattr_NTACL *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->version));
		NDR_CHECK(ndr_pull_set_switch_value(ndr, &r->info, r->version));
		NDR_CHECK(ndr_pull_xattr_NTACL_Info(ndr, NDR_SCALARS, &r->info));
	}
	if (ndr_flags & NDR_BUFFERS) {
		NDR_CHECK(ndr_pull_xattr_NTACL_Info(ndr, NDR_BUFFERS, &r->info));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_xattr_NTACL(struct ndr_print *ndr, const char *name, const struct xattr_NTACL *r)
{
	ndr_print_struct(ndr, name, "xattr_NTACL");
	ndr->depth++;
	ndr_print_uint16(ndr, "version", r->version);
	ndr_print_set_switch_value(ndr, &r->info, r->version);
	ndr_print_xattr_NTACL_Info(ndr, "info", &r->info);
	ndr->depth--;
}

