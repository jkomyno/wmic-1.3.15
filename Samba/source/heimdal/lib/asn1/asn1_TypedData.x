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
encode_TypedData(unsigned char *p, size_t len, const TypedData *data, size_t *size)
{
size_t ret = 0;
size_t l;
int i, e;

i = 0;
/* data-value */
if((data)->data_value) {
size_t Top_tag_oldret = ret;
ret = 0;
e = der_put_octet_string(p, len, (data)->data_value, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_OctetString, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 1, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* data-type */
{
size_t Top_tag_oldret = ret;
ret = 0;
e = encode_krb5int32(p, len, &(data)->data_type, &l);
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
decode_TypedData(const unsigned char *p, size_t len, TypedData *data, size_t *size)
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
size_t data_type_datalen, data_type_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 0, &data_type_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
data_type_oldlen = len;
if (data_type_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = data_type_datalen;
e = decode_krb5int32(p, len, &(data)->data_type, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = data_type_oldlen - data_type_datalen;
}
{
size_t data_value_datalen, data_value_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 1, &data_value_datalen, &l);
if(e) {
(data)->data_value = NULL;
} else {
(data)->data_value = calloc(1, sizeof(*(data)->data_value));
if ((data)->data_value == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
data_value_oldlen = len;
if (data_value_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = data_value_datalen;
{
size_t data_value_Tag_datalen, data_value_Tag_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, PRIM, UT_OctetString, &data_value_Tag_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
data_value_Tag_oldlen = len;
if (data_value_Tag_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = data_value_Tag_datalen;
e = der_get_octet_string(p, len, (data)->data_value, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = data_value_Tag_oldlen - data_value_Tag_datalen;
}
len = data_value_oldlen - data_value_datalen;
}
}
len = Top_oldlen - Top_datalen;
}
if(size) *size = ret;
return 0;
fail:
free_TypedData(data);
return e;
}

void
free_TypedData(TypedData *data)
{
free_krb5int32(&(data)->data_type);
if((data)->data_value) {
der_free_octet_string((data)->data_value);
free((data)->data_value);
(data)->data_value = NULL;
}
}

size_t
length_TypedData(const TypedData *data)
{
size_t ret = 0;
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_krb5int32(&(data)->data_type);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
if((data)->data_value){
size_t Top_tag_oldret = ret;
ret = 0;
ret += der_length_octet_string((data)->data_value);
ret += 1 + der_length_len (ret);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
ret += 1 + der_length_len (ret);
return ret;
}

int
copy_TypedData(const TypedData *from, TypedData *to)
{
memset(to, 0, sizeof(*to));
if(copy_krb5int32(&(from)->data_type, &(to)->data_type)) goto fail;
if((from)->data_value) {
(to)->data_value = malloc(sizeof(*(to)->data_value));
if((to)->data_value == NULL) goto fail;
if(der_copy_octet_string((from)->data_value, (to)->data_value)) goto fail;
}else
(to)->data_value = NULL;
return 0;
fail:
free_TypedData(to);
return ENOMEM;
}

