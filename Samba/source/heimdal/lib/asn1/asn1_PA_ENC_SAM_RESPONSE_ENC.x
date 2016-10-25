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
encode_PA_ENC_SAM_RESPONSE_ENC(unsigned char *p, size_t len, const PA_ENC_SAM_RESPONSE_ENC *data, size_t *size)
{
size_t ret = 0;
size_t l;
int i, e;

i = 0;
/* sam-sad */
if((data)->sam_sad) {
size_t Top_tag_oldret = ret;
ret = 0;
e = der_put_general_string(p, len, (data)->sam_sad, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_GeneralString, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 1, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* sam-nonce */
{
size_t Top_tag_oldret = ret;
ret = 0;
e = encode_krb5int32(p, len, &(data)->sam_nonce, &l);
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
decode_PA_ENC_SAM_RESPONSE_ENC(const unsigned char *p, size_t len, PA_ENC_SAM_RESPONSE_ENC *data, size_t *size)
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
size_t sam_nonce_datalen, sam_nonce_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 0, &sam_nonce_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
sam_nonce_oldlen = len;
if (sam_nonce_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_nonce_datalen;
e = decode_krb5int32(p, len, &(data)->sam_nonce, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = sam_nonce_oldlen - sam_nonce_datalen;
}
{
size_t sam_sad_datalen, sam_sad_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 1, &sam_sad_datalen, &l);
if(e) {
(data)->sam_sad = NULL;
} else {
(data)->sam_sad = calloc(1, sizeof(*(data)->sam_sad));
if ((data)->sam_sad == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
sam_sad_oldlen = len;
if (sam_sad_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_sad_datalen;
{
size_t sam_sad_Tag_datalen, sam_sad_Tag_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, PRIM, UT_GeneralString, &sam_sad_Tag_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
sam_sad_Tag_oldlen = len;
if (sam_sad_Tag_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_sad_Tag_datalen;
e = der_get_general_string(p, len, (data)->sam_sad, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = sam_sad_Tag_oldlen - sam_sad_Tag_datalen;
}
len = sam_sad_oldlen - sam_sad_datalen;
}
}
len = Top_oldlen - Top_datalen;
}
if(size) *size = ret;
return 0;
fail:
free_PA_ENC_SAM_RESPONSE_ENC(data);
return e;
}

void
free_PA_ENC_SAM_RESPONSE_ENC(PA_ENC_SAM_RESPONSE_ENC *data)
{
free_krb5int32(&(data)->sam_nonce);
if((data)->sam_sad) {
der_free_general_string((data)->sam_sad);
free((data)->sam_sad);
(data)->sam_sad = NULL;
}
}

size_t
length_PA_ENC_SAM_RESPONSE_ENC(const PA_ENC_SAM_RESPONSE_ENC *data)
{
size_t ret = 0;
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_krb5int32(&(data)->sam_nonce);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
if((data)->sam_sad){
size_t Top_tag_oldret = ret;
ret = 0;
ret += der_length_general_string((data)->sam_sad);
ret += 1 + der_length_len (ret);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
ret += 1 + der_length_len (ret);
return ret;
}

int
copy_PA_ENC_SAM_RESPONSE_ENC(const PA_ENC_SAM_RESPONSE_ENC *from, PA_ENC_SAM_RESPONSE_ENC *to)
{
memset(to, 0, sizeof(*to));
if(copy_krb5int32(&(from)->sam_nonce, &(to)->sam_nonce)) goto fail;
if((from)->sam_sad) {
(to)->sam_sad = malloc(sizeof(*(to)->sam_sad));
if((to)->sam_sad == NULL) goto fail;
if(der_copy_general_string((from)->sam_sad, (to)->sam_sad)) goto fail;
}else
(to)->sam_sad = NULL;
return 0;
fail:
free_PA_ENC_SAM_RESPONSE_ENC(to);
return ENOMEM;
}

