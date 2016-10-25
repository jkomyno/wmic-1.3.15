[SUBSYSTEM::LIBCMDLINE_CREDENTIALS]
PRIVATE_PROTO_HEADER = credentials.h
OBJ_FILES = credentials.o
PUBLIC_DEPENDENCIES = CREDENTIALS LIBPOPT

[SUBSYSTEM::POPT_SAMBA]
PUBLIC_HEADERS = popt_common.h 
OBJ_FILES = popt_common.o
PUBLIC_DEPENDENCIES = LIBPOPT

[SUBSYSTEM::POPT_CREDENTIALS]
PRIVATE_PROTO_HEADER = popt_credentials.h
OBJ_FILES = popt_credentials.o
PUBLIC_DEPENDENCIES = CREDENTIALS_KRB5 LIBCMDLINE_CREDENTIALS LIBPOPT
PRIVATE_DEPENDENCIES = LIBSAMBA-UTIL