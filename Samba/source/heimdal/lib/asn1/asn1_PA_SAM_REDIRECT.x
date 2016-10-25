/* Generated from k5.asn1 */
/* Do not edit */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <krb5-types.h>
#include <krb5_asn1.h>
#include <asn1_err.h>
#include <der.h>
#include <parse_units.h>

int
encode_PA_SAM_REDIRECT(unsigned char *p, size_t len, const PA_SAM_REDIRECT *data, size_t *size)
{
size_t ret = 0;
size_t l;
int i, e;

i = 0;
e = encode_HostAddresses(p, len, data, &l);
if (e) return e;
p -= l; len -= l; ret += l;

*size = ret;
return 0;
}

int
decode_PA_SAM_REDIRECT(const unsigned char *p, size_t len, PA_SAM_REDIRECT *data, size_t *size)
{
size_t ret = 0;
size_t l;
int e;

memset(data, 0, sizeof(*data));
e = decode_HostAddresses(p, len, data, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
if(size) *size = ret;
return 0;
fail:
free_PA_SAM_REDIRECT(data);
return e;
}

void
free_PA_SAM_REDIRECT(PA_SAM_REDIRECT *data)
{
free_HostAddresses(data);
}

size_t
length_PA_SAM_REDIRECT(const PA_SAM_REDIRECT *data)
{
size_t ret = 0;
ret += length_HostAddresses(data);
return ret;
}

int
copy_PA_SAM_REDIRECT(const PA_SAM_REDIRECT *from, PA_SAM_REDIRECT *to)
{
memset(to, 0, sizeof(*to));
if(copy_HostAddresses(from, to)) goto fail;
return 0;
fail:
free_PA_SAM_REDIRECT(to);
return ENOMEM;
}

