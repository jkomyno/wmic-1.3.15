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
encode_PA_SAM_RESPONSE_2(unsigned char *p, size_t len, const PA_SAM_RESPONSE_2 *data, size_t *size)
{
size_t ret = 0;
size_t l;
int i, e;

i = 0;
/* sam-nonce */
{
size_t Top_tag_oldret = ret;
ret = 0;
e = encode_krb5int32(p, len, &(data)->sam_nonce, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 4, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* sam-enc-nonce-or-sad */
{
size_t Top_tag_oldret = ret;
ret = 0;
e = encode_EncryptedData(p, len, &(data)->sam_enc_nonce_or_sad, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 3, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* sam-track-id */
if((data)->sam_track_id) {
size_t Top_tag_oldret = ret;
ret = 0;
e = der_put_general_string(p, len, (data)->sam_track_id, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_GeneralString, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 2, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* sam-flags */
{
size_t Top_tag_oldret = ret;
ret = 0;
e = encode_SAMFlags(p, len, &(data)->sam_flags, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 1, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* sam-type */
{
size_t Top_tag_oldret = ret;
ret = 0;
e = encode_krb5int32(p, len, &(data)->sam_type, &l);
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
decode_PA_SAM_RESPONSE_2(const unsigned char *p, size_t len, PA_SAM_RESPONSE_2 *data, size_t *size)
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
size_t sam_type_datalen, sam_type_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 0, &sam_type_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
sam_type_oldlen = len;
if (sam_type_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_type_datalen;
e = decode_krb5int32(p, len, &(data)->sam_type, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = sam_type_oldlen - sam_type_datalen;
}
{
size_t sam_flags_datalen, sam_flags_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 1, &sam_flags_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
sam_flags_oldlen = len;
if (sam_flags_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_flags_datalen;
e = decode_SAMFlags(p, len, &(data)->sam_flags, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = sam_flags_oldlen - sam_flags_datalen;
}
{
size_t sam_track_id_datalen, sam_track_id_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 2, &sam_track_id_datalen, &l);
if(e) {
(data)->sam_track_id = NULL;
} else {
(data)->sam_track_id = calloc(1, sizeof(*(data)->sam_track_id));
if ((data)->sam_track_id == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
sam_track_id_oldlen = len;
if (sam_track_id_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_track_id_datalen;
{
size_t sam_track_id_Tag_datalen, sam_track_id_Tag_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, PRIM, UT_GeneralString, &sam_track_id_Tag_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
sam_track_id_Tag_oldlen = len;
if (sam_track_id_Tag_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_track_id_Tag_datalen;
e = der_get_general_string(p, len, (data)->sam_track_id, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = sam_track_id_Tag_oldlen - sam_track_id_Tag_datalen;
}
len = sam_track_id_oldlen - sam_track_id_datalen;
}
}
{
size_t sam_enc_nonce_or_sad_datalen, sam_enc_nonce_or_sad_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 3, &sam_enc_nonce_or_sad_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
sam_enc_nonce_or_sad_oldlen = len;
if (sam_enc_nonce_or_sad_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_enc_nonce_or_sad_datalen;
e = decode_EncryptedData(p, len, &(data)->sam_enc_nonce_or_sad, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = sam_enc_nonce_or_sad_oldlen - sam_enc_nonce_or_sad_datalen;
}
{
size_t sam_nonce_datalen, sam_nonce_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 4, &sam_nonce_datalen, &l);
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
len = Top_oldlen - Top_datalen;
}
if(size) *size = ret;
return 0;
fail:
free_PA_SAM_RESPONSE_2(data);
return e;
}

void
free_PA_SAM_RESPONSE_2(PA_SAM_RESPONSE_2 *data)
{
free_krb5int32(&(data)->sam_type);
free_SAMFlags(&(data)->sam_flags);
if((data)->sam_track_id) {
der_free_general_string((data)->sam_track_id);
free((data)->sam_track_id);
(data)->sam_track_id = NULL;
}
free_EncryptedData(&(data)->sam_enc_nonce_or_sad);
free_krb5int32(&(data)->sam_nonce);
}

size_t
length_PA_SAM_RESPONSE_2(const PA_SAM_RESPONSE_2 *data)
{
size_t ret = 0;
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_krb5int32(&(data)->sam_type);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_SAMFlags(&(data)->sam_flags);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
if((data)->sam_track_id){
size_t Top_tag_oldret = ret;
ret = 0;
ret += der_length_general_string((data)->sam_track_id);
ret += 1 + der_length_len (ret);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_EncryptedData(&(data)->sam_enc_nonce_or_sad);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_krb5int32(&(data)->sam_nonce);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
ret += 1 + der_length_len (ret);
return ret;
}

int
copy_PA_SAM_RESPONSE_2(const PA_SAM_RESPONSE_2 *from, PA_SAM_RESPONSE_2 *to)
{
memset(to, 0, sizeof(*to));
if(copy_krb5int32(&(from)->sam_type, &(to)->sam_type)) goto fail;
if(copy_SAMFlags(&(from)->sam_flags, &(to)->sam_flags)) goto fail;
if((from)->sam_track_id) {
(to)->sam_track_id = malloc(sizeof(*(to)->sam_track_id));
if((to)->sam_track_id == NULL) goto fail;
if(der_copy_general_string((from)->sam_track_id, (to)->sam_track_id)) goto fail;
}else
(to)->sam_track_id = NULL;
if(copy_EncryptedData(&(from)->sam_enc_nonce_or_sad, &(to)->sam_enc_nonce_or_sad)) goto fail;
if(copy_krb5int32(&(from)->sam_nonce, &(to)->sam_nonce)) goto fail;
return 0;
fail:
free_PA_SAM_RESPONSE_2(to);
return ENOMEM;
}

