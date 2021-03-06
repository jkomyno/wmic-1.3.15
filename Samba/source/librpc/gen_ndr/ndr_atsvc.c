/* parser auto-generated by pidl */

#include "includes.h"
#include "libcli/util/nterr.h"
#include "librpc/gen_ndr/ndr_misc.h"
#include "librpc/gen_ndr/ndr_dcerpc.h"
#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/ndr_atsvc.h"

static NTSTATUS ndr_push_atsvc_DaysOfMonth(struct ndr_push *ndr, int ndr_flags, uint32_t r)
{
	NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r));
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_atsvc_DaysOfMonth(struct ndr_pull *ndr, int ndr_flags, uint32_t *r)
{
	uint32_t v;
	NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &v));
	*r = v;
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_atsvc_DaysOfMonth(struct ndr_print *ndr, const char *name, uint32_t r)
{
	ndr_print_uint32(ndr, name, r);
	ndr->depth++;
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "First", First, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Second", Second, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Third", Third, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Fourth", Fourth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Fifth", Fifth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Sixth", Sixth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Seventh", Seventh, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Eight", Eight, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Ninth", Ninth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Tenth", Tenth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Eleventh", Eleventh, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Twelfth", Twelfth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Thitteenth", Thitteenth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Fourteenth", Fourteenth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Fifteenth", Fifteenth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Sixteenth", Sixteenth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Seventeenth", Seventeenth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Eighteenth", Eighteenth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Ninteenth", Ninteenth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Twentyth", Twentyth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Twentyfirst", Twentyfirst, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Twentysecond", Twentysecond, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Twentythird", Twentythird, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Twentyfourth", Twentyfourth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Twentyfifth", Twentyfifth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Twentysixth", Twentysixth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Twentyseventh", Twentyseventh, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Twentyeighth", Twentyeighth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Twentyninth", Twentyninth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Thirtieth", Thirtieth, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "Thirtyfirst", Thirtyfirst, r);
	ndr->depth--;
}

static NTSTATUS ndr_push_atsvc_Flags(struct ndr_push *ndr, int ndr_flags, uint8_t r)
{
	NDR_CHECK(ndr_push_uint8(ndr, NDR_SCALARS, r));
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_atsvc_Flags(struct ndr_pull *ndr, int ndr_flags, uint8_t *r)
{
	uint8_t v;
	NDR_CHECK(ndr_pull_uint8(ndr, NDR_SCALARS, &v));
	*r = v;
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_atsvc_Flags(struct ndr_print *ndr, const char *name, uint8_t r)
{
	ndr_print_uint8(ndr, name, r);
	ndr->depth++;
	ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "JOB_RUN_PERIODICALLY", JOB_RUN_PERIODICALLY, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "JOB_EXEC_ERROR", JOB_EXEC_ERROR, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "JOB_RUNS_TODAY", JOB_RUNS_TODAY, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "JOB_ADD_CURRENT_DATE", JOB_ADD_CURRENT_DATE, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "JOB_NONINTERACTIVE", JOB_NONINTERACTIVE, r);
	ndr->depth--;
}

static NTSTATUS ndr_push_atsvc_DaysOfWeek(struct ndr_push *ndr, int ndr_flags, uint8_t r)
{
	NDR_CHECK(ndr_push_uint8(ndr, NDR_SCALARS, r));
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_atsvc_DaysOfWeek(struct ndr_pull *ndr, int ndr_flags, uint8_t *r)
{
	uint8_t v;
	NDR_CHECK(ndr_pull_uint8(ndr, NDR_SCALARS, &v));
	*r = v;
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_atsvc_DaysOfWeek(struct ndr_print *ndr, const char *name, uint8_t r)
{
	ndr_print_uint8(ndr, name, r);
	ndr->depth++;
	ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "DAYSOFWEEK_MONDAY", DAYSOFWEEK_MONDAY, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "DAYSOFWEEK_TUESDAY", DAYSOFWEEK_TUESDAY, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "DAYSOFWEEK_WEDNESDAY", DAYSOFWEEK_WEDNESDAY, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "DAYSOFWEEK_THURSDAY", DAYSOFWEEK_THURSDAY, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "DAYSOFWEEK_FRIDAY", DAYSOFWEEK_FRIDAY, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "DAYSOFWEEK_SATURDAY", DAYSOFWEEK_SATURDAY, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint8_t), "DAYSOFWEEK_SUNDAY", DAYSOFWEEK_SUNDAY, r);
	ndr->depth--;
}

static NTSTATUS ndr_push_atsvc_JobInfo(struct ndr_push *ndr, int ndr_flags, const struct atsvc_JobInfo *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->job_time));
		NDR_CHECK(ndr_push_atsvc_DaysOfMonth(ndr, NDR_SCALARS, r->days_of_month));
		NDR_CHECK(ndr_push_atsvc_DaysOfWeek(ndr, NDR_SCALARS, r->days_of_week));
		NDR_CHECK(ndr_push_atsvc_Flags(ndr, NDR_SCALARS, r->flags));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->command));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->command) {
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, ndr_charset_length(r->command, CH_UTF16)));
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, 0));
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, ndr_charset_length(r->command, CH_UTF16)));
			NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, r->command, ndr_charset_length(r->command, CH_UTF16), sizeof(uint16_t), CH_UTF16));
		}
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_atsvc_JobInfo(struct ndr_pull *ndr, int ndr_flags, struct atsvc_JobInfo *r)
{
	uint32_t _ptr_command;
	TALLOC_CTX *_mem_save_command_0;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->job_time));
		NDR_CHECK(ndr_pull_atsvc_DaysOfMonth(ndr, NDR_SCALARS, &r->days_of_month));
		NDR_CHECK(ndr_pull_atsvc_DaysOfWeek(ndr, NDR_SCALARS, &r->days_of_week));
		NDR_CHECK(ndr_pull_atsvc_Flags(ndr, NDR_SCALARS, &r->flags));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_command));
		if (_ptr_command) {
			NDR_PULL_ALLOC(ndr, r->command);
		} else {
			r->command = NULL;
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->command) {
			_mem_save_command_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->command, 0);
			NDR_CHECK(ndr_pull_array_size(ndr, &r->command));
			NDR_CHECK(ndr_pull_array_length(ndr, &r->command));
			if (ndr_get_array_length(ndr, &r->command) > ndr_get_array_size(ndr, &r->command)) {
				return ndr_pull_error(ndr, NDR_ERR_ARRAY_SIZE, "Bad array size %u should exceed array length %u", ndr_get_array_size(ndr, &r->command), ndr_get_array_length(ndr, &r->command));
			}
			NDR_CHECK(ndr_check_string_terminator(ndr, ndr_get_array_length(ndr, &r->command), sizeof(uint16_t)));
			NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->command, ndr_get_array_length(ndr, &r->command), sizeof(uint16_t), CH_UTF16));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_command_0, 0);
		}
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_atsvc_JobInfo(struct ndr_print *ndr, const char *name, const struct atsvc_JobInfo *r)
{
	ndr_print_struct(ndr, name, "atsvc_JobInfo");
	ndr->depth++;
	ndr_print_uint32(ndr, "job_time", r->job_time);
	ndr_print_atsvc_DaysOfMonth(ndr, "days_of_month", r->days_of_month);
	ndr_print_atsvc_DaysOfWeek(ndr, "days_of_week", r->days_of_week);
	ndr_print_atsvc_Flags(ndr, "flags", r->flags);
	ndr_print_ptr(ndr, "command", r->command);
	ndr->depth++;
	if (r->command) {
		ndr_print_string(ndr, "command", r->command);
	}
	ndr->depth--;
	ndr->depth--;
}

static NTSTATUS ndr_push_atsvc_JobEnumInfo(struct ndr_push *ndr, int ndr_flags, const struct atsvc_JobEnumInfo *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->job_id));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->job_time));
		NDR_CHECK(ndr_push_atsvc_DaysOfMonth(ndr, NDR_SCALARS, r->days_of_month));
		NDR_CHECK(ndr_push_atsvc_DaysOfWeek(ndr, NDR_SCALARS, r->days_of_week));
		NDR_CHECK(ndr_push_atsvc_Flags(ndr, NDR_SCALARS, r->flags));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->command));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->command) {
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, ndr_charset_length(r->command, CH_UTF16)));
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, 0));
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, ndr_charset_length(r->command, CH_UTF16)));
			NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, r->command, ndr_charset_length(r->command, CH_UTF16), sizeof(uint16_t), CH_UTF16));
		}
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_atsvc_JobEnumInfo(struct ndr_pull *ndr, int ndr_flags, struct atsvc_JobEnumInfo *r)
{
	uint32_t _ptr_command;
	TALLOC_CTX *_mem_save_command_0;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->job_id));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->job_time));
		NDR_CHECK(ndr_pull_atsvc_DaysOfMonth(ndr, NDR_SCALARS, &r->days_of_month));
		NDR_CHECK(ndr_pull_atsvc_DaysOfWeek(ndr, NDR_SCALARS, &r->days_of_week));
		NDR_CHECK(ndr_pull_atsvc_Flags(ndr, NDR_SCALARS, &r->flags));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_command));
		if (_ptr_command) {
			NDR_PULL_ALLOC(ndr, r->command);
		} else {
			r->command = NULL;
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->command) {
			_mem_save_command_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->command, 0);
			NDR_CHECK(ndr_pull_array_size(ndr, &r->command));
			NDR_CHECK(ndr_pull_array_length(ndr, &r->command));
			if (ndr_get_array_length(ndr, &r->command) > ndr_get_array_size(ndr, &r->command)) {
				return ndr_pull_error(ndr, NDR_ERR_ARRAY_SIZE, "Bad array size %u should exceed array length %u", ndr_get_array_size(ndr, &r->command), ndr_get_array_length(ndr, &r->command));
			}
			NDR_CHECK(ndr_check_string_terminator(ndr, ndr_get_array_length(ndr, &r->command), sizeof(uint16_t)));
			NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->command, ndr_get_array_length(ndr, &r->command), sizeof(uint16_t), CH_UTF16));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_command_0, 0);
		}
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_atsvc_JobEnumInfo(struct ndr_print *ndr, const char *name, const struct atsvc_JobEnumInfo *r)
{
	ndr_print_struct(ndr, name, "atsvc_JobEnumInfo");
	ndr->depth++;
	ndr_print_uint32(ndr, "job_id", r->job_id);
	ndr_print_uint32(ndr, "job_time", r->job_time);
	ndr_print_atsvc_DaysOfMonth(ndr, "days_of_month", r->days_of_month);
	ndr_print_atsvc_DaysOfWeek(ndr, "days_of_week", r->days_of_week);
	ndr_print_atsvc_Flags(ndr, "flags", r->flags);
	ndr_print_ptr(ndr, "command", r->command);
	ndr->depth++;
	if (r->command) {
		ndr_print_string(ndr, "command", r->command);
	}
	ndr->depth--;
	ndr->depth--;
}

static NTSTATUS ndr_push_atsvc_enum_ctr(struct ndr_push *ndr, int ndr_flags, const struct atsvc_enum_ctr *r)
{
	uint32_t cntr_first_entry_1;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->entries_read));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->first_entry));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->first_entry) {
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->entries_read));
			for (cntr_first_entry_1 = 0; cntr_first_entry_1 < r->entries_read; cntr_first_entry_1++) {
				NDR_CHECK(ndr_push_atsvc_JobEnumInfo(ndr, NDR_SCALARS, &r->first_entry[cntr_first_entry_1]));
			}
			for (cntr_first_entry_1 = 0; cntr_first_entry_1 < r->entries_read; cntr_first_entry_1++) {
				NDR_CHECK(ndr_push_atsvc_JobEnumInfo(ndr, NDR_BUFFERS, &r->first_entry[cntr_first_entry_1]));
			}
		}
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_atsvc_enum_ctr(struct ndr_pull *ndr, int ndr_flags, struct atsvc_enum_ctr *r)
{
	uint32_t _ptr_first_entry;
	uint32_t cntr_first_entry_1;
	TALLOC_CTX *_mem_save_first_entry_0;
	TALLOC_CTX *_mem_save_first_entry_1;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->entries_read));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_first_entry));
		if (_ptr_first_entry) {
			NDR_PULL_ALLOC(ndr, r->first_entry);
		} else {
			r->first_entry = NULL;
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->first_entry) {
			_mem_save_first_entry_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->first_entry, 0);
			NDR_CHECK(ndr_pull_array_size(ndr, &r->first_entry));
			NDR_PULL_ALLOC_N(ndr, r->first_entry, ndr_get_array_size(ndr, &r->first_entry));
			_mem_save_first_entry_1 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->first_entry, 0);
			for (cntr_first_entry_1 = 0; cntr_first_entry_1 < r->entries_read; cntr_first_entry_1++) {
				NDR_CHECK(ndr_pull_atsvc_JobEnumInfo(ndr, NDR_SCALARS, &(r->first_entry)[cntr_first_entry_1]));
			}
			for (cntr_first_entry_1 = 0; cntr_first_entry_1 < r->entries_read; cntr_first_entry_1++) {
				NDR_CHECK(ndr_pull_atsvc_JobEnumInfo(ndr, NDR_BUFFERS, &(r->first_entry)[cntr_first_entry_1]));
			}
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_first_entry_1, 0);
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_first_entry_0, 0);
		}
		if (r->first_entry) {
			NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->first_entry, r->entries_read));
		}
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_atsvc_enum_ctr(struct ndr_print *ndr, const char *name, const struct atsvc_enum_ctr *r)
{
	uint32_t cntr_first_entry_1;
	ndr_print_struct(ndr, name, "atsvc_enum_ctr");
	ndr->depth++;
	ndr_print_uint32(ndr, "entries_read", r->entries_read);
	ndr_print_ptr(ndr, "first_entry", r->first_entry);
	ndr->depth++;
	if (r->first_entry) {
		ndr->print(ndr, "%s: ARRAY(%d)", "first_entry", r->entries_read);
		ndr->depth++;
		for (cntr_first_entry_1=0;cntr_first_entry_1<r->entries_read;cntr_first_entry_1++) {
			char *idx_1=NULL;
			asprintf(&idx_1, "[%d]", cntr_first_entry_1);
			if (idx_1) {
				ndr_print_atsvc_JobEnumInfo(ndr, "first_entry", &r->first_entry[cntr_first_entry_1]);
				free(idx_1);
			}
		}
		ndr->depth--;
	}
	ndr->depth--;
	ndr->depth--;
}

static NTSTATUS ndr_push_atsvc_JobAdd(struct ndr_push *ndr, int flags, const struct atsvc_JobAdd *r)
{
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->in.servername));
		if (r->in.servername) {
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, ndr_charset_length(r->in.servername, CH_UTF16)));
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, 0));
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, ndr_charset_length(r->in.servername, CH_UTF16)));
			NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, r->in.servername, ndr_charset_length(r->in.servername, CH_UTF16), sizeof(uint16_t), CH_UTF16));
		}
		if (r->in.job_info == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_atsvc_JobInfo(ndr, NDR_SCALARS|NDR_BUFFERS, r->in.job_info));
	}
	if (flags & NDR_OUT) {
		if (r->out.job_id == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->out.job_id));
		NDR_CHECK(ndr_push_NTSTATUS(ndr, NDR_SCALARS, r->out.result));
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_atsvc_JobAdd(struct ndr_pull *ndr, int flags, struct atsvc_JobAdd *r)
{
	uint32_t _ptr_servername;
	TALLOC_CTX *_mem_save_servername_0;
	TALLOC_CTX *_mem_save_job_info_0;
	TALLOC_CTX *_mem_save_job_id_0;
	if (flags & NDR_IN) {
		ZERO_STRUCT(r->out);

		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_servername));
		if (_ptr_servername) {
			NDR_PULL_ALLOC(ndr, r->in.servername);
		} else {
			r->in.servername = NULL;
		}
		if (r->in.servername) {
			_mem_save_servername_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->in.servername, 0);
			NDR_CHECK(ndr_pull_array_size(ndr, &r->in.servername));
			NDR_CHECK(ndr_pull_array_length(ndr, &r->in.servername));
			if (ndr_get_array_length(ndr, &r->in.servername) > ndr_get_array_size(ndr, &r->in.servername)) {
				return ndr_pull_error(ndr, NDR_ERR_ARRAY_SIZE, "Bad array size %u should exceed array length %u", ndr_get_array_size(ndr, &r->in.servername), ndr_get_array_length(ndr, &r->in.servername));
			}
			NDR_CHECK(ndr_check_string_terminator(ndr, ndr_get_array_length(ndr, &r->in.servername), sizeof(uint16_t)));
			NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->in.servername, ndr_get_array_length(ndr, &r->in.servername), sizeof(uint16_t), CH_UTF16));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_servername_0, 0);
		}
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->in.job_info);
		}
		_mem_save_job_info_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->in.job_info, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_atsvc_JobInfo(ndr, NDR_SCALARS|NDR_BUFFERS, r->in.job_info));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_job_info_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_PULL_ALLOC(ndr, r->out.job_id);
		ZERO_STRUCTP(r->out.job_id);
	}
	if (flags & NDR_OUT) {
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.job_id);
		}
		_mem_save_job_id_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.job_id, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, r->out.job_id));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_job_id_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_NTSTATUS(ndr, NDR_SCALARS, &r->out.result));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_atsvc_JobAdd(struct ndr_print *ndr, const char *name, int flags, const struct atsvc_JobAdd *r)
{
	ndr_print_struct(ndr, name, "atsvc_JobAdd");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "atsvc_JobAdd");
		ndr->depth++;
		ndr_print_ptr(ndr, "servername", r->in.servername);
		ndr->depth++;
		if (r->in.servername) {
			ndr_print_string(ndr, "servername", r->in.servername);
		}
		ndr->depth--;
		ndr_print_ptr(ndr, "job_info", r->in.job_info);
		ndr->depth++;
		ndr_print_atsvc_JobInfo(ndr, "job_info", r->in.job_info);
		ndr->depth--;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "atsvc_JobAdd");
		ndr->depth++;
		ndr_print_ptr(ndr, "job_id", r->out.job_id);
		ndr->depth++;
		ndr_print_uint32(ndr, "job_id", *r->out.job_id);
		ndr->depth--;
		ndr_print_NTSTATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_atsvc_JobDel(struct ndr_push *ndr, int flags, const struct atsvc_JobDel *r)
{
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->in.servername));
		if (r->in.servername) {
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, ndr_charset_length(r->in.servername, CH_UTF16)));
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, 0));
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, ndr_charset_length(r->in.servername, CH_UTF16)));
			NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, r->in.servername, ndr_charset_length(r->in.servername, CH_UTF16), sizeof(uint16_t), CH_UTF16));
		}
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.min_job_id));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.max_job_id));
	}
	if (flags & NDR_OUT) {
		NDR_CHECK(ndr_push_NTSTATUS(ndr, NDR_SCALARS, r->out.result));
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_atsvc_JobDel(struct ndr_pull *ndr, int flags, struct atsvc_JobDel *r)
{
	uint32_t _ptr_servername;
	TALLOC_CTX *_mem_save_servername_0;
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_servername));
		if (_ptr_servername) {
			NDR_PULL_ALLOC(ndr, r->in.servername);
		} else {
			r->in.servername = NULL;
		}
		if (r->in.servername) {
			_mem_save_servername_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->in.servername, 0);
			NDR_CHECK(ndr_pull_array_size(ndr, &r->in.servername));
			NDR_CHECK(ndr_pull_array_length(ndr, &r->in.servername));
			if (ndr_get_array_length(ndr, &r->in.servername) > ndr_get_array_size(ndr, &r->in.servername)) {
				return ndr_pull_error(ndr, NDR_ERR_ARRAY_SIZE, "Bad array size %u should exceed array length %u", ndr_get_array_size(ndr, &r->in.servername), ndr_get_array_length(ndr, &r->in.servername));
			}
			NDR_CHECK(ndr_check_string_terminator(ndr, ndr_get_array_length(ndr, &r->in.servername), sizeof(uint16_t)));
			NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->in.servername, ndr_get_array_length(ndr, &r->in.servername), sizeof(uint16_t), CH_UTF16));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_servername_0, 0);
		}
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.min_job_id));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.max_job_id));
	}
	if (flags & NDR_OUT) {
		NDR_CHECK(ndr_pull_NTSTATUS(ndr, NDR_SCALARS, &r->out.result));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_atsvc_JobDel(struct ndr_print *ndr, const char *name, int flags, const struct atsvc_JobDel *r)
{
	ndr_print_struct(ndr, name, "atsvc_JobDel");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "atsvc_JobDel");
		ndr->depth++;
		ndr_print_ptr(ndr, "servername", r->in.servername);
		ndr->depth++;
		if (r->in.servername) {
			ndr_print_string(ndr, "servername", r->in.servername);
		}
		ndr->depth--;
		ndr_print_uint32(ndr, "min_job_id", r->in.min_job_id);
		ndr_print_uint32(ndr, "max_job_id", r->in.max_job_id);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "atsvc_JobDel");
		ndr->depth++;
		ndr_print_NTSTATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

static NTSTATUS ndr_push_atsvc_JobEnum(struct ndr_push *ndr, int flags, const struct atsvc_JobEnum *r)
{
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->in.servername));
		if (r->in.servername) {
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, ndr_charset_length(r->in.servername, CH_UTF16)));
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, 0));
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, ndr_charset_length(r->in.servername, CH_UTF16)));
			NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, r->in.servername, ndr_charset_length(r->in.servername, CH_UTF16), sizeof(uint16_t), CH_UTF16));
		}
		if (r->in.ctr == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_atsvc_enum_ctr(ndr, NDR_SCALARS|NDR_BUFFERS, r->in.ctr));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.preferred_max_len));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->in.resume_handle));
		if (r->in.resume_handle) {
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->in.resume_handle));
		}
	}
	if (flags & NDR_OUT) {
		if (r->out.ctr == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_atsvc_enum_ctr(ndr, NDR_SCALARS|NDR_BUFFERS, r->out.ctr));
		if (r->out.total_entries == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->out.total_entries));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->out.resume_handle));
		if (r->out.resume_handle) {
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->out.resume_handle));
		}
		NDR_CHECK(ndr_push_NTSTATUS(ndr, NDR_SCALARS, r->out.result));
	}
	return NT_STATUS_OK;
}

static NTSTATUS ndr_pull_atsvc_JobEnum(struct ndr_pull *ndr, int flags, struct atsvc_JobEnum *r)
{
	uint32_t _ptr_servername;
	uint32_t _ptr_resume_handle;
	TALLOC_CTX *_mem_save_servername_0;
	TALLOC_CTX *_mem_save_ctr_0;
	TALLOC_CTX *_mem_save_total_entries_0;
	TALLOC_CTX *_mem_save_resume_handle_0;
	if (flags & NDR_IN) {
		ZERO_STRUCT(r->out);

		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_servername));
		if (_ptr_servername) {
			NDR_PULL_ALLOC(ndr, r->in.servername);
		} else {
			r->in.servername = NULL;
		}
		if (r->in.servername) {
			_mem_save_servername_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->in.servername, 0);
			NDR_CHECK(ndr_pull_array_size(ndr, &r->in.servername));
			NDR_CHECK(ndr_pull_array_length(ndr, &r->in.servername));
			if (ndr_get_array_length(ndr, &r->in.servername) > ndr_get_array_size(ndr, &r->in.servername)) {
				return ndr_pull_error(ndr, NDR_ERR_ARRAY_SIZE, "Bad array size %u should exceed array length %u", ndr_get_array_size(ndr, &r->in.servername), ndr_get_array_length(ndr, &r->in.servername));
			}
			NDR_CHECK(ndr_check_string_terminator(ndr, ndr_get_array_length(ndr, &r->in.servername), sizeof(uint16_t)));
			NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->in.servername, ndr_get_array_length(ndr, &r->in.servername), sizeof(uint16_t), CH_UTF16));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_servername_0, 0);
		}
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->in.ctr);
		}
		_mem_save_ctr_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->in.ctr, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_atsvc_enum_ctr(ndr, NDR_SCALARS|NDR_BUFFERS, r->in.ctr));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_ctr_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.preferred_max_len));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_resume_handle));
		if (_ptr_resume_handle) {
			NDR_PULL_ALLOC(ndr, r->in.resume_handle);
		} else {
			r->in.resume_handle = NULL;
		}
		if (r->in.resume_handle) {
			_mem_save_resume_handle_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->in.resume_handle, 0);
			NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, r->in.resume_handle));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_resume_handle_0, 0);
		}
		NDR_PULL_ALLOC(ndr, r->out.ctr);
		*r->out.ctr = *r->in.ctr;
		NDR_PULL_ALLOC(ndr, r->out.total_entries);
		ZERO_STRUCTP(r->out.total_entries);
	}
	if (flags & NDR_OUT) {
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.ctr);
		}
		_mem_save_ctr_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.ctr, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_atsvc_enum_ctr(ndr, NDR_SCALARS|NDR_BUFFERS, r->out.ctr));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_ctr_0, LIBNDR_FLAG_REF_ALLOC);
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.total_entries);
		}
		_mem_save_total_entries_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.total_entries, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, r->out.total_entries));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_total_entries_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_resume_handle));
		if (_ptr_resume_handle) {
			NDR_PULL_ALLOC(ndr, r->out.resume_handle);
		} else {
			r->out.resume_handle = NULL;
		}
		if (r->out.resume_handle) {
			_mem_save_resume_handle_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->out.resume_handle, 0);
			NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, r->out.resume_handle));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_resume_handle_0, 0);
		}
		NDR_CHECK(ndr_pull_NTSTATUS(ndr, NDR_SCALARS, &r->out.result));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_atsvc_JobEnum(struct ndr_print *ndr, const char *name, int flags, const struct atsvc_JobEnum *r)
{
	ndr_print_struct(ndr, name, "atsvc_JobEnum");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "atsvc_JobEnum");
		ndr->depth++;
		ndr_print_ptr(ndr, "servername", r->in.servername);
		ndr->depth++;
		if (r->in.servername) {
			ndr_print_string(ndr, "servername", r->in.servername);
		}
		ndr->depth--;
		ndr_print_ptr(ndr, "ctr", r->in.ctr);
		ndr->depth++;
		ndr_print_atsvc_enum_ctr(ndr, "ctr", r->in.ctr);
		ndr->depth--;
		ndr_print_uint32(ndr, "preferred_max_len", r->in.preferred_max_len);
		ndr_print_ptr(ndr, "resume_handle", r->in.resume_handle);
		ndr->depth++;
		if (r->in.resume_handle) {
			ndr_print_uint32(ndr, "resume_handle", *r->in.resume_handle);
		}
		ndr->depth--;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "atsvc_JobEnum");
		ndr->depth++;
		ndr_print_ptr(ndr, "ctr", r->out.ctr);
		ndr->depth++;
		ndr_print_atsvc_enum_ctr(ndr, "ctr", r->out.ctr);
		ndr->depth--;
		ndr_print_ptr(ndr, "total_entries", r->out.total_entries);
		ndr->depth++;
		ndr_print_uint32(ndr, "total_entries", *r->out.total_entries);
		ndr->depth--;
		ndr_print_ptr(ndr, "resume_handle", r->out.resume_handle);
		ndr->depth++;
		if (r->out.resume_handle) {
			ndr_print_uint32(ndr, "resume_handle", *r->out.resume_handle);
		}
		ndr->depth--;
		ndr_print_NTSTATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

_PUBLIC_ NTSTATUS ndr_push_atsvc_JobGetInfo(struct ndr_push *ndr, int flags, const struct atsvc_JobGetInfo *r)
{
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->in.servername));
		if (r->in.servername) {
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, ndr_charset_length(r->in.servername, CH_UTF16)));
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, 0));
			NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, ndr_charset_length(r->in.servername, CH_UTF16)));
			NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, r->in.servername, ndr_charset_length(r->in.servername, CH_UTF16), sizeof(uint16_t), CH_UTF16));
		}
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.job_id));
	}
	if (flags & NDR_OUT) {
		if (r->out.job_info == NULL) return NT_STATUS_INVALID_PARAMETER_MIX;
		NDR_CHECK(ndr_push_unique_ptr(ndr, *r->out.job_info));
		if (*r->out.job_info) {
			NDR_CHECK(ndr_push_atsvc_JobInfo(ndr, NDR_SCALARS|NDR_BUFFERS, *r->out.job_info));
		}
		NDR_CHECK(ndr_push_NTSTATUS(ndr, NDR_SCALARS, r->out.result));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ NTSTATUS ndr_pull_atsvc_JobGetInfo(struct ndr_pull *ndr, int flags, struct atsvc_JobGetInfo *r)
{
	uint32_t _ptr_servername;
	uint32_t _ptr_job_info;
	TALLOC_CTX *_mem_save_servername_0;
	TALLOC_CTX *_mem_save_job_info_0;
	TALLOC_CTX *_mem_save_job_info_1;
	if (flags & NDR_IN) {
		ZERO_STRUCT(r->out);

		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_servername));
		if (_ptr_servername) {
			NDR_PULL_ALLOC(ndr, r->in.servername);
		} else {
			r->in.servername = NULL;
		}
		if (r->in.servername) {
			_mem_save_servername_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->in.servername, 0);
			NDR_CHECK(ndr_pull_array_size(ndr, &r->in.servername));
			NDR_CHECK(ndr_pull_array_length(ndr, &r->in.servername));
			if (ndr_get_array_length(ndr, &r->in.servername) > ndr_get_array_size(ndr, &r->in.servername)) {
				return ndr_pull_error(ndr, NDR_ERR_ARRAY_SIZE, "Bad array size %u should exceed array length %u", ndr_get_array_size(ndr, &r->in.servername), ndr_get_array_length(ndr, &r->in.servername));
			}
			NDR_CHECK(ndr_check_string_terminator(ndr, ndr_get_array_length(ndr, &r->in.servername), sizeof(uint16_t)));
			NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->in.servername, ndr_get_array_length(ndr, &r->in.servername), sizeof(uint16_t), CH_UTF16));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_servername_0, 0);
		}
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.job_id));
		NDR_PULL_ALLOC(ndr, r->out.job_info);
		ZERO_STRUCTP(r->out.job_info);
	}
	if (flags & NDR_OUT) {
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.job_info);
		}
		_mem_save_job_info_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.job_info, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_job_info));
		if (_ptr_job_info) {
			NDR_PULL_ALLOC(ndr, *r->out.job_info);
		} else {
			*r->out.job_info = NULL;
		}
		if (*r->out.job_info) {
			_mem_save_job_info_1 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, *r->out.job_info, 0);
			NDR_CHECK(ndr_pull_atsvc_JobInfo(ndr, NDR_SCALARS|NDR_BUFFERS, *r->out.job_info));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_job_info_1, 0);
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_job_info_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_NTSTATUS(ndr, NDR_SCALARS, &r->out.result));
	}
	return NT_STATUS_OK;
}

_PUBLIC_ void ndr_print_atsvc_JobGetInfo(struct ndr_print *ndr, const char *name, int flags, const struct atsvc_JobGetInfo *r)
{
	ndr_print_struct(ndr, name, "atsvc_JobGetInfo");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "atsvc_JobGetInfo");
		ndr->depth++;
		ndr_print_ptr(ndr, "servername", r->in.servername);
		ndr->depth++;
		if (r->in.servername) {
			ndr_print_string(ndr, "servername", r->in.servername);
		}
		ndr->depth--;
		ndr_print_uint32(ndr, "job_id", r->in.job_id);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "atsvc_JobGetInfo");
		ndr->depth++;
		ndr_print_ptr(ndr, "job_info", r->out.job_info);
		ndr->depth++;
		ndr_print_ptr(ndr, "job_info", *r->out.job_info);
		ndr->depth++;
		if (*r->out.job_info) {
			ndr_print_atsvc_JobInfo(ndr, "job_info", *r->out.job_info);
		}
		ndr->depth--;
		ndr->depth--;
		ndr_print_NTSTATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

static const struct dcerpc_interface_call atsvc_calls[] = {
	{
		"atsvc_JobAdd",
		sizeof(struct atsvc_JobAdd),
		(ndr_push_flags_fn_t) ndr_push_atsvc_JobAdd,
		(ndr_pull_flags_fn_t) ndr_pull_atsvc_JobAdd,
		(ndr_print_function_t) ndr_print_atsvc_JobAdd,
		False,
	},
	{
		"atsvc_JobDel",
		sizeof(struct atsvc_JobDel),
		(ndr_push_flags_fn_t) ndr_push_atsvc_JobDel,
		(ndr_pull_flags_fn_t) ndr_pull_atsvc_JobDel,
		(ndr_print_function_t) ndr_print_atsvc_JobDel,
		False,
	},
	{
		"atsvc_JobEnum",
		sizeof(struct atsvc_JobEnum),
		(ndr_push_flags_fn_t) ndr_push_atsvc_JobEnum,
		(ndr_pull_flags_fn_t) ndr_pull_atsvc_JobEnum,
		(ndr_print_function_t) ndr_print_atsvc_JobEnum,
		False,
	},
	{
		"atsvc_JobGetInfo",
		sizeof(struct atsvc_JobGetInfo),
		(ndr_push_flags_fn_t) ndr_push_atsvc_JobGetInfo,
		(ndr_pull_flags_fn_t) ndr_pull_atsvc_JobGetInfo,
		(ndr_print_function_t) ndr_print_atsvc_JobGetInfo,
		False,
	},
	{ NULL, 0, NULL, NULL, NULL, False }
};

static const char * const atsvc_endpoint_strings[] = {
	"ncacn_np:[\\pipe\\atsvc]", 
	"ncalrpc:", 
};

static const struct dcerpc_endpoint_list atsvc_endpoints = {
	.count	= 2,
	.names	= atsvc_endpoint_strings
};

static const char * const atsvc_authservice_strings[] = {
	"host", 
};

static const struct dcerpc_authservice_list atsvc_authservices = {
	.count	= 2,
	.names	= atsvc_authservice_strings
};


const struct dcerpc_interface_table dcerpc_table_atsvc = {
	.name		= "atsvc",
	.syntax_id	= {
		{0x1ff70682,0x0a51,0x30e8,{0x07,0x6d},{0x74,0x0b,0xe8,0xce,0xe9,0x8b}},
		DCERPC_ATSVC_VERSION
	},
	.helpstring	= DCERPC_ATSVC_HELPSTRING,
	.num_calls	= 4,
	.calls		= atsvc_calls,
	.endpoints	= &atsvc_endpoints,
	.authservices	= &atsvc_authservices
};

