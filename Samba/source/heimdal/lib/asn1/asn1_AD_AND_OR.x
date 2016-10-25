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
encode_AD_AND_OR(unsigned char *p, size_t len, const AD_AND_OR *data, size_t *size)
{
size_t ret = 0;
size_t l;
int i, e;

i = 0;
/* elements */
{
size_t Top_tag_oldret = ret;
ret = 0;
e = encode_AuthorizationData(p, len, &(data)->elements, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 1, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* condition-count */
{
size_t Top_tag_oldret = ret;
ret = 0;
e = der_put_heim_integer(p, len, &(data)->condition_count, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_Integer, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 0, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, CONS, UT_Sequence, &l);
if (e) return e;
p -= l; len -= l; ret += l;

*size = ret;
return 0;
}

int
decode_AD_AND_OR(const unsigned char *p, size_t len, AD_AND_OR *data, size_t *size)
{
size_t ret = 0;
size_t l;
int e;

memset(data, 0, sizeof(*data));
{
size_t Top_datalen, Top_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, CONS, UT_Sequence, &Top_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
Top_oldlen = len;
if (Top_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = Top_datalen;
{
size_t condition_count_datalen, condition_count_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 0, &condition_count_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
condition_count_oldlen = len;
if (condition_count_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = condition_count_datalen;
{
size_t condition_count_Tag_datalen, condition_count_Tag_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, PRIM, UT_Integer, &condition_count_Tag_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
condition_count_Tag_oldlen = len;
if (condition_count_Tag_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = condition_count_Tag_datalen;
e = der_get_heim_integer(p, len, &(data)->condition_count, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = condition_count_Tag_oldlen - condition_count_Tag_datalen;
}
len = condition_count_oldlen - condition_count_datalen;
}
{
size_t elements_datalen, elements_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 1, &elements_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
elements_oldlen = len;
if (elements_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = elements_datalen;
e = decode_AuthorizationData(p, len, &(data)->elements, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = elements_oldlen - elements_datalen;
}
len = Top_oldlen - Top_datalen;
}
if(size) *size = ret;
return 0;
fail:
free_AD_AND_OR(data);
return e;
}

void
free_AD_AND_OR(AD_AND_OR *data)
{
der_free_heim_integer(&(data)->condition_count);
free_AuthorizationData(&(data)->elements);
}

size_t
length_AD_AND_OR(const AD_AND_OR *data)
{
size_t ret = 0;
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += der_length_heim_integer(&(data)->condition_count);
ret += 1 + der_length_len (ret);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_AuthorizationData(&(data)->elements);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
ret += 1 + der_length_len (ret);
return ret;
}

int
copy_AD_AND_OR(const AD_AND_OR *from, AD_AND_OR *to)
{
memset(to, 0, sizeof(*to));
if(der_copy_heim_integer(&(from)->condition_count, &(to)->condition_count)) goto fail;
if(copy_AuthorizationData(&(from)->elements, &(to)->elements)) goto fail;
return 0;
fail:
free_AD_AND_OR(to);
return ENOMEM;
}

