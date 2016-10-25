#ifndef __TORTURE_NBENCH_PROTO_H__
#define __TORTURE_NBENCH_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from torture/nbench/nbio.c  */

double nbio_result(void);
BOOL nb_tick(void);
void nb_alarm(int sig);
void nbio_shmem(int n, int t_timelimit, int t_warmup);
void nb_setup(struct smbcli_state *cli, int id);
void nb_unlink(const char *fname, int attr, NTSTATUS status);
void nb_createx(const char *fname, 
		uint_t create_options, uint_t create_disposition, int handle,
		NTSTATUS status);
void nb_writex(int handle, int offset, int size, int ret_size, NTSTATUS status);
void nb_write(int handle, int offset, int size, int ret_size, NTSTATUS status);
void nb_lockx(int handle, uint_t offset, int size, NTSTATUS status);
void nb_unlockx(int handle, uint_t offset, int size, NTSTATUS status);
void nb_readx(int handle, int offset, int size, int ret_size, NTSTATUS status);
void nb_close(int handle, NTSTATUS status);
void nb_rmdir(const char *dname, NTSTATUS status);
void nb_mkdir(const char *dname, NTSTATUS status);
void nb_rename(const char *old, const char *new, NTSTATUS status);
void nb_qpathinfo(const char *fname, int level, NTSTATUS status);
void nb_qfileinfo(int fnum, int level, NTSTATUS status);
void nb_sfileinfo(int fnum, int level, NTSTATUS status);
void nb_qfsinfo(int level, NTSTATUS status);
void nb_findfirst(const char *mask, int level, int maxcnt, int count, NTSTATUS status);
void nb_flush(int fnum, NTSTATUS status);
void nb_sleep(int usec, NTSTATUS status);
void nb_deltree(const char *dname);

/* The following definitions come from torture/nbench/nbench.c  */

BOOL torture_nbench(struct torture_context *torture);
NTSTATUS torture_nbench_init(void);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __TORTURE_NBENCH_PROTO_H__ */
