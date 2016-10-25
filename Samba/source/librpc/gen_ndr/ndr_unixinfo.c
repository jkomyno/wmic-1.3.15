/* parser auto-generated by pidl */

#include "includes.h"
#include "libcli/util/nterr.h"
#include "librpc/gen_ndr/ndr_misc.h"
#include "librpc/gen_ndr/ndr_dcerpc.h"
#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/ndr_unixinfo.h"

#include "librpc/gen_ndr/ndr_security.h"
static NTSTATUS ndr_push_unixinfo_GetPWUidInfo(struct ndr_push *ndr, int ndr_flags, const struct unixinfo_GetPWUidInfo *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_NTSTATUS(ndr, NDR_SCALARS, r->status));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->homedir));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->shell));
			ndr->flags = _flags_save_string;
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_unixinfo_GetPWUidInfo(struct ndr_pull *ndr, int ndr_flags, struct unixinfo_GetPWUidInfo *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_NTSTATUS(ndr, NDR_SCALARS, &r->status));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->homedir));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->shell));
			ndr->flags = _flags_save_string;
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_unixinfo_GetPWUidInfo(struct ndr_print *ndr, const char *name, const struct unixinfo_GetPWUidInfo *r)
{
	ndr_print_struct(ndr, name, "unixinfo_GetPWUidInfo");
	ndr->depth++;
	ndr_print_NTSTATUS(ndr, "status", r->status);
	ndr_print_string(ndr, "homedir", r->homedir);
	ndr_print_string(ndr, "shell", r->shell);
	ndr->depth--;
}

static NTSTATUS ndr_push_unixinfo_SidToUid(struct ndr_push *ndr, int flags, const struct unixinfo_SidToUid *r)
{
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_push_dom_sid(ndr, NDR_SCALARS, &r->in.sid));
	}
	if (flags & NDR_OUT) {
		if (r->out.uid == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, *r->out.uid));
		NDR_CHECK(ndr_push_NTSTATUS(ndr, NDR_SCALARS, r->out.result));
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_unixinfo_SidToUid(struct ndr_pull *ndr, int flags, struct unixinfo_SidToUid *r)
{
	TALLOC_CTX *_mem_save_uid_0;
	if (flags & NDR_IN) {
		ZERO_STRUCT(r->out);

		NDR_CHECK(ndr_pull_dom_sid(ndr, NDR_SCALARS, &r->in.sid));
		NDR_PULL_ALLOC(ndr, r->out.uid);
		ZERO_STRUCTP(r->out.uid);
	}
	if (flags & NDR_OUT) {
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.uid);
		}
		_mem_save_uid_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.uid, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, r->out.uid));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_uid_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_NTSTATUS(ndr, NDR_SCALARS, &r->out.result));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_unixinfo_SidToUid(struct ndr_print *ndr, const char *name, int flags, const struct unixinfo_SidToUid *r)
{
	ndr_print_struct(ndr, name, "unixinfo_SidToUid");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "unixinfo_SidToUid");
		ndr->depth++;
		ndr_print_dom_sid(ndr, "sid", &r->in.sid);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "unixinfo_SidToUid");
		ndr->depth++;
		ndr_print_ptr(ndr, "uid", r->out.uid);
		ndr->depth++;
		ndr_print_hyper(ndr, "uid", *r->out.uid);
		ndr->depth--;
		ndr_print_NTSTATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_unixinfo_UidToSid(struct ndr_push *ndr, int flags, const struct unixinfo_UidToSid *r)
{
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->in.uid));
	}
	if (flags & NDR_OUT) {
		if (r->out.sid == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_dom_sid(ndr, NDR_SCALARS, r->out.sid));
		NDR_CHECK(ndr_push_NTSTATUS(ndr, NDR_SCALARS, r->out.result));
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_unixinfo_UidToSid(struct ndr_pull *ndr, int flags, struct unixinfo_UidToSid *r)
{
	TALLOC_CTX *_mem_save_sid_0;
	if (flags & NDR_IN) {
		ZERO_STRUCT(r->out);

		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->in.uid));
		NDR_PULL_ALLOC(ndr, r->out.sid);
		ZERO_STRUCTP(r->out.sid);
	}
	if (flags & NDR_OUT) {
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.sid);
		}
		_mem_save_sid_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.sid, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_dom_sid(ndr, NDR_SCALARS, r->out.sid));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_sid_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_NTSTATUS(ndr, NDR_SCALARS, &r->out.result));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_unixinfo_UidToSid(struct ndr_print *ndr, const char *name, int flags, const struct unixinfo_UidToSid *r)
{
	ndr_print_struct(ndr, name, "unixinfo_UidToSid");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "unixinfo_UidToSid");
		ndr->depth++;
		ndr_print_hyper(ndr, "uid", r->in.uid);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "unixinfo_UidToSid");
		ndr->depth++;
		ndr_print_ptr(ndr, "sid", r->out.sid);
		ndr->depth++;
		ndr_print_dom_sid(ndr, "sid", r->out.sid);
		ndr->depth--;
		ndr_print_NTSTATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_unixinfo_SidToGid(struct ndr_push *ndr, int flags, const struct unixinfo_SidToGid *r)
{
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_push_dom_sid(ndr, NDR_SCALARS, &r->in.sid));
	}
	if (flags & NDR_OUT) {
		if (r->out.gid == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, *r->out.gid));
		NDR_CHECK(ndr_push_NTSTATUS(ndr, NDR_SCALARS, r->out.result));
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_unixinfo_SidToGid(struct ndr_pull *ndr, int flags, struct unixinfo_SidToGid *r)
{
	TALLOC_CTX *_mem_save_gid_0;
	if (flags & NDR_IN) {
		ZERO_STRUCT(r->out);

		NDR_CHECK(ndr_pull_dom_sid(ndr, NDR_SCALARS, &r->in.sid));
		NDR_PULL_ALLOC(ndr, r->out.gid);
		ZERO_STRUCTP(r->out.gid);
	}
	if (flags & NDR_OUT) {
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.gid);
		}
		_mem_save_gid_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.gid, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, r->out.gid));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_gid_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_NTSTATUS(ndr, NDR_SCALARS, &r->out.result));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_unixinfo_SidToGid(struct ndr_print *ndr, const char *name, int flags, const struct unixinfo_SidToGid *r)
{
	ndr_print_struct(ndr, name, "unixinfo_SidToGid");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "unixinfo_SidToGid");
		ndr->depth++;
		ndr_print_dom_sid(ndr, "sid", &r->in.sid);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "unixinfo_SidToGid");
		ndr->depth++;
		ndr_print_ptr(ndr, "gid", r->out.gid);
		ndr->depth++;
		ndr_print_hyper(ndr, "gid", *r->out.gid);
		ndr->depth--;
		ndr_print_NTSTATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_unixinfo_GidToSid(struct ndr_push *ndr, int flags, const struct unixinfo_GidToSid *r)
{
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->in.gid));
	}
	if (flags & NDR_OUT) {
		if (r->out.sid == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_dom_sid(ndr, NDR_SCALARS, r->out.sid));
		NDR_CHECK(ndr_push_NTSTATUS(ndr, NDR_SCALARS, r->out.result));
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_unixinfo_GidToSid(struct ndr_pull *ndr, int flags, struct unixinfo_GidToSid *r)
{
	TALLOC_CTX *_mem_save_sid_0;
	if (flags & NDR_IN) {
		ZERO_STRUCT(r->out);

		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->in.gid));
		NDR_PULL_ALLOC(ndr, r->out.sid);
		ZERO_STRUCTP(r->out.sid);
	}
	if (flags & NDR_OUT) {
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.sid);
		}
		_mem_save_sid_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.sid, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_dom_sid(ndr, NDR_SCALARS, r->out.sid));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_sid_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_NTSTATUS(ndr, NDR_SCALARS, &r->out.result));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_unixinfo_GidToSid(struct ndr_print *ndr, const char *name, int flags, const struct unixinfo_GidToSid *r)
{
	ndr_print_struct(ndr, name, "unixinfo_GidToSid");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "unixinfo_GidToSid");
		ndr->depth++;
		ndr_print_hyper(ndr, "gid", r->in.gid);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "unixinfo_GidToSid");
		ndr->depth++;
		ndr_print_ptr(ndr, "sid", r->out.sid);
		ndr->depth++;
		ndr_print_dom_sid(ndr, "sid", r->out.sid);
		ndr->depth--;
		ndr_print_NTSTATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_unixinfo_GetPWUid(struct ndr_push *ndr, int flags, const struct unixinfo_GetPWUid *r)
{
	uint32_t cntr_uids_0;
	uint32_t cntr_infos_0;
	if (flags & NDR_IN) {
		if (r->in.count == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->in.count));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->in.count));
		for (cntr_uids_0 = 0; cntr_uids_0 < *r->in.count; cntr_uids_0++) {
			NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->in.uids[cntr_uids_0]));
		}
	}
	if (flags & NDR_OUT) {
		if (r->out.count == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->out.count));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->out.count));
		for (cntr_infos_0 = 0; cntr_infos_0 < *r->out.count; cntr_infos_0++) {
			NDR_CHECK(ndr_push_unixinfo_GetPWUidInfo(ndr, NDR_SCALARS, &r->out.infos[cntr_infos_0]));
		}
		NDR_CHECK(ndr_push_NTSTATUS(ndr, NDR_SCALARS, r->out.result));
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_unixinfo_GetPWUid(struct ndr_pull *ndr, int flags, struct unixinfo_GetPWUid *r)
{
	uint32_t cntr_uids_0;
	uint32_t cntr_infos_0;
	TALLOC_CTX *_mem_save_count_0;
	TALLOC_CTX *_mem_save_uids_0;
	TALLOC_CTX *_mem_save_infos_0;
	if (flags & NDR_IN) {
		ZERO_STRUCT(r->out);

		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->in.count);
		}
		_mem_save_count_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->in.count, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, r->in.count));
		if (*r->in.count < 0 || *r->in.count > 1023) {
			return ndr_pull_error(ndr, NDR_ERR_RANGE, "value out of range");
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_count_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_array_size(ndr, &r->in.uids));
		NDR_PULL_ALLOC_N(ndr, r->in.uids, ndr_get_array_size(ndr, &r->in.uids));
		_mem_save_uids_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->in.uids, 0);
		for (cntr_uids_0 = 0; cntr_uids_0 < *r->in.count; cntr_uids_0++) {
			NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &(r->in.uids)[cntr_uids_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_uids_0, 0);
		NDR_PULL_ALLOC(ndr, r->out.count);
		*r->out.count = *r->in.count;
		if (r->in.uids) {
			if (r->in.count == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
			NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->in.uids, *r->in.count));
		}
	}
	if (flags & NDR_OUT) {
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.count);
		}
		_mem_save_count_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.count, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, r->out.count));
		if (*r->out.count < 0 || *r->out.count > 1023) {
			return ndr_pull_error(ndr, NDR_ERR_RANGE, "value out of range");
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_count_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_array_size(ndr, &r->out.infos));
		NDR_PULL_ALLOC_N(ndr, r->out.infos, ndr_get_array_size(ndr, &r->out.infos));
		_mem_save_infos_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.infos, 0);
		for (cntr_infos_0 = 0; cntr_infos_0 < *r->out.count; cntr_infos_0++) {
			NDR_CHECK(ndr_pull_unixinfo_GetPWUidInfo(ndr, NDR_SCALARS, &(r->out.infos)[cntr_infos_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_infos_0, 0);
		NDR_CHECK(ndr_pull_NTSTATUS(ndr, NDR_SCALARS, &r->out.result));
		if (r->out.infos) {
			if (r->out.count == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
			NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->out.infos, *r->out.count));
		}
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_unixinfo_GetPWUid(struct ndr_print *ndr, const char *name, int flags, const struct unixinfo_GetPWUid *r)
{
	uint32_t cntr_uids_0;
	uint32_t cntr_infos_0;
	ndr_print_struct(ndr, name, "unixinfo_GetPWUid");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "unixinfo_GetPWUid");
		ndr->depth++;
		ndr_print_ptr(ndr, "count", r->in.count);
		ndr->depth++;
		ndr_print_uint32(ndr, "count", *r->in.count);
		ndr->depth--;
		ndr->print(ndr, "%s: ARRAY(%d)", "uids", *r->in.count);
		ndr->depth++;
		for (cntr_uids_0=0;cntr_uids_0<*r->in.count;cntr_uids_0++) {
			char *idx_0=NULL;
			asprintf(&idx_0, "[%d]", cntr_uids_0);
			if (idx_0) {
				ndr_print_hyper(ndr, "uids", r->in.uids[cntr_uids_0]);
				free(idx_0);
			}
		}
		ndr->depth--;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "unixinfo_GetPWUid");
		ndr->depth++;
		ndr_print_ptr(ndr, "count", r->out.count);
		ndr->depth++;
		ndr_print_uint32(ndr, "count", *r->out.count);
		ndr->depth--;
		ndr->print(ndr, "%s: ARRAY(%d)", "infos", *r->out.count);
		ndr->depth++;
		for (cntr_infos_0=0;cntr_infos_0<*r->out.count;cntr_infos_0++) {
			char *idx_0=NULL;
			asprintf(&idx_0, "[%d]", cntr_infos_0);
			if (idx_0) {
				ndr_print_unixinfo_GetPWUidInfo(ndr, "infos", &r->out.infos[cntr_infos_0]);
				free(idx_0);
			}
		}
		ndr->depth--;
		ndr_print_NTSTATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

static const struct dcerpc_interface_call unixinfo_calls[] = {
	{
		"unixinfo_SidToUid",
		sizeof(struct unixinfo_SidToUid),
		(ndr_push_flags_fn_t) ndr_push_unixinfo_SidToUid,
		(ndr_pull_flags_fn_t) ndr_pull_unixinfo_SidToUid,
		(ndr_print_function_t) ndr_print_unixinfo_SidToUid,
		False,
	},
	{
		"unixinfo_UidToSid",
		sizeof(struct unixinfo_UidToSid),
		(ndr_push_flags_fn_t) ndr_push_unixinfo_UidToSid,
		(ndr_pull_flags_fn_t) ndr_pull_unixinfo_UidToSid,
		(ndr_print_function_t) ndr_print_unixinfo_UidToSid,
		False,
	},
	{
		"unixinfo_SidToGid",
		sizeof(struct unixinfo_SidToGid),
		(ndr_push_flags_fn_t) ndr_push_unixinfo_SidToGid,
		(ndr_pull_flags_fn_t) ndr_pull_unixinfo_SidToGid,
		(ndr_print_function_t) ndr_print_unixinfo_SidToGid,
		False,
	},
	{
		"unixinfo_GidToSid",
		sizeof(struct unixinfo_GidToSid),
		(ndr_push_flags_fn_t) ndr_push_unixinfo_GidToSid,
		(ndr_pull_flags_fn_t) ndr_pull_unixinfo_GidToSid,
		(ndr_print_function_t) ndr_print_unixinfo_GidToSid,
		False,
	},
	{
		"unixinfo_GetPWUid",
		sizeof(struct unixinfo_GetPWUid),
		(ndr_push_flags_fn_t) ndr_push_unixinfo_GetPWUid,
		(ndr_pull_flags_fn_t) ndr_pull_unixinfo_GetPWUid,
		(ndr_print_function_t) ndr_print_unixinfo_GetPWUid,
		False,
	},
	{ NULL, 0, NULL, NULL, NULL, False }
};

static const char * const unixinfo_endpoint_strings[] = {
	"ncacn_np:[\\pipe\\unixinfo]", 
	"ncacn_ip_tcp:", 
	"ncalrpc:", 
};

static const struct dcerpc_endpoint_list unixinfo_endpoints = {
	.count	= 3,
	.names	= unixinfo_endpoint_strings
};

static const char * const unixinfo_authservice_strings[] = {
	"host", 
};

static const struct dcerpc_authservice_list unixinfo_authservices = {
	.count	= 3,
	.names	= unixinfo_authservice_strings
};


const struct dcerpc_interface_table dcerpc_table_unixinfo = {
	.name		= "unixinfo",
	.syntax_id	= {
		{0x9c54e310,0xa955,0x4885,{0xbd,0x31},{0x78,0x78,0x71,0x47,0xdf,0xa6}},
		DCERPC_UNIXINFO_VERSION
	},
	.helpstring	= DCERPC_UNIXINFO_HELPSTRING,
	.num_calls	= 5,
	.calls		= unixinfo_calls,
	.endpoints	= &unixinfo_endpoints,
	.authservices	= &unixinfo_authservices
};
