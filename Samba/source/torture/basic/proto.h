#ifndef __TORTURE_BASIC_PROTO_H__
#define __TORTURE_BASIC_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from torture/basic/base.c  */

NTSTATUS torture_base_init(void);

/* The following definitions come from torture/basic/misc.c  */

BOOL run_torture(struct torture_context *tctx, struct smbcli_state *cli, int dummy);
BOOL run_pipe_number(struct torture_context *tctx, 
					 struct smbcli_state *cli1);
BOOL torture_holdcon(struct torture_context *tctx);
BOOL run_maxfidtest(struct torture_context *tctx, struct smbcli_state *cli, int dummy);
BOOL torture_ioctl_test(struct torture_context *tctx, 
						struct smbcli_state *cli);
BOOL run_benchrw(struct torture_context *tctx);

/* The following definitions come from torture/basic/scanner.c  */

BOOL torture_trans2_scan(struct torture_context *torture, 
						 struct smbcli_state *cli);
BOOL torture_nttrans_scan(struct torture_context *torture, 
						  struct smbcli_state *cli);
BOOL torture_smb_scan(struct torture_context *torture);

/* The following definitions come from torture/basic/utable.c  */

bool torture_utable(struct torture_context *tctx, 
					struct smbcli_state *cli);
bool torture_casetable(struct torture_context *tctx, 
					   struct smbcli_state *cli);

/* The following definitions come from torture/basic/charset.c  */

BOOL torture_charset(struct torture_context *tctx, struct smbcli_state *cli);

/* The following definitions come from torture/basic/mangle_test.c  */

BOOL torture_mangle(struct torture_context *torture, 
					struct smbcli_state *cli);

/* The following definitions come from torture/basic/denytest.c  */

BOOL torture_denytest1(struct torture_context *tctx, 
					   struct smbcli_state *cli1);
BOOL torture_denytest2(struct torture_context *tctx, 
					   struct smbcli_state *cli1, 
					   struct smbcli_state *cli2);
BOOL torture_denytest3(struct torture_context *tctx, 
					   struct smbcli_state *cli1,
					   struct smbcli_state *cli2);
BOOL torture_ntdenytest1(struct torture_context *tctx, struct smbcli_state *cli, int client);
BOOL torture_ntdenytest2(struct torture_context *torture, 
						 struct smbcli_state *cli1,
						 struct smbcli_state *cli2);
BOOL torture_denydos_sharing(struct torture_context *tctx, 
							 struct smbcli_state *cli);

/* The following definitions come from torture/basic/aliases.c  */

struct torture_suite *torture_trans2_aliases(void);

/* The following definitions come from torture/basic/locking.c  */

bool torture_locktest1(struct torture_context *tctx, 
					   struct smbcli_state *cli1,
					   struct smbcli_state *cli2);
bool torture_locktest2(struct torture_context *tctx,
					   struct smbcli_state *cli);
bool torture_locktest3(struct torture_context *tctx, 
					   struct smbcli_state *cli1,
					   struct smbcli_state *cli2);
BOOL torture_locktest4(struct torture_context *tctx, 
					   struct smbcli_state *cli1,
					   struct smbcli_state *cli2);
BOOL torture_locktest5(struct torture_context *tctx, struct smbcli_state *cli1, 
					   struct smbcli_state *cli2);
BOOL torture_locktest6(struct torture_context *tctx, 
					   struct smbcli_state *cli);
BOOL torture_locktest7(struct torture_context *tctx, 
					   struct smbcli_state *cli1);
struct torture_suite *torture_base_locktest(void);

/* The following definitions come from torture/basic/secleak.c  */

BOOL torture_sec_leak(struct torture_context *tctx, struct smbcli_state *cli);

/* The following definitions come from torture/basic/rename.c  */

BOOL torture_test_rename(struct torture_context *tctx,
						 struct smbcli_state *cli1);

/* The following definitions come from torture/basic/dir.c  */

BOOL torture_dirtest1(struct torture_context *tctx, 
					  struct smbcli_state *cli);
BOOL torture_dirtest2(struct torture_context *tctx, 
					  struct smbcli_state *cli);

/* The following definitions come from torture/basic/delete.c  */

struct torture_suite *torture_test_delete(void);

/* The following definitions come from torture/basic/unlink.c  */

BOOL torture_unlinktest(struct torture_context *tctx, struct smbcli_state *cli);

/* The following definitions come from torture/basic/disconnect.c  */

BOOL torture_disconnect(struct torture_context *torture);

/* The following definitions come from torture/basic/delaywrite.c  */

struct torture_suite *torture_delay_write(void);

/* The following definitions come from torture/basic/attr.c  */

BOOL torture_openattrtest(struct torture_context *tctx, 
						  struct smbcli_state *cli1);

/* The following definitions come from torture/basic/properties.c  */

BOOL torture_test_properties(struct torture_context *torture, 
							 struct smbcli_state *cli);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __TORTURE_BASIC_PROTO_H__ */
