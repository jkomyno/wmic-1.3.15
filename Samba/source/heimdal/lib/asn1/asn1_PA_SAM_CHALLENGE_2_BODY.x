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
encode_PA_SAM_CHALLENGE_2_BODY(unsigned char *p, size_t len, const PA_SAM_CHALLENGE_2_BODY *data, size_t *size)
{
size_t ret = 0;
size_t l;
int i, e;

i = 0;
/* sam-etype */
{
size_t Top_tag_oldret = ret;
ret = 0;
e = encode_krb5int32(p, len, &(data)->sam_etype, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 9, &l);
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

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 8, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* sam-pk-for-sad */
if((data)->sam_pk_for_sad) {
size_t Top_tag_oldret = ret;
ret = 0;
e = encode_EncryptionKey(p, len, (data)->sam_pk_for_sad, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 7, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* sam-response-prompt */
if((data)->sam_response_prompt) {
size_t Top_tag_oldret = ret;
ret = 0;
e = der_put_general_string(p, len, (data)->sam_response_prompt, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_GeneralString, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 6, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* sam-challenge */
if((data)->sam_challenge) {
size_t Top_tag_oldret = ret;
ret = 0;
e = der_put_general_string(p, len, (data)->sam_challenge, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_GeneralString, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 5, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* sam-challenge-label */
if((data)->sam_challenge_label) {
size_t Top_tag_oldret = ret;
ret = 0;
e = der_put_general_string(p, len, (data)->sam_challenge_label, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_GeneralString, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 4, &l);
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

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 3, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* sam-type-name */
if((data)->sam_type_name) {
size_t Top_tag_oldret = ret;
ret = 0;
e = der_put_general_string(p, len, (data)->sam_type_name, &l);
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
decode_PA_SAM_CHALLENGE_2_BODY(const unsigned char *p, size_t len, PA_SAM_CHALLENGE_2_BODY *data, size_t *size)
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
size_t sam_type_name_datalen, sam_type_name_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 2, &sam_type_name_datalen, &l);
if(e) {
(data)->sam_type_name = NULL;
} else {
(data)->sam_type_name = calloc(1, sizeof(*(data)->sam_type_name));
if ((data)->sam_type_name == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
sam_type_name_oldlen = len;
if (sam_type_name_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_type_name_datalen;
{
size_t sam_type_name_Tag_datalen, sam_type_name_Tag_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, PRIM, UT_GeneralString, &sam_type_name_Tag_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
sam_type_name_Tag_oldlen = len;
if (sam_type_name_Tag_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_type_name_Tag_datalen;
e = der_get_general_string(p, len, (data)->sam_type_name, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = sam_type_name_Tag_oldlen - sam_type_name_Tag_datalen;
}
len = sam_type_name_oldlen - sam_type_name_datalen;
}
}
{
size_t sam_track_id_datalen, sam_track_id_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 3, &sam_track_id_datalen, &l);
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
size_t sam_challenge_label_datalen, sam_challenge_label_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 4, &sam_challenge_label_datalen, &l);
if(e) {
(data)->sam_challenge_label = NULL;
} else {
(data)->sam_challenge_label = calloc(1, sizeof(*(data)->sam_challenge_label));
if ((data)->sam_challenge_label == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
sam_challenge_label_oldlen = len;
if (sam_challenge_label_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_challenge_label_datalen;
{
size_t sam_challenge_label_Tag_datalen, sam_challenge_label_Tag_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, PRIM, UT_GeneralString, &sam_challenge_label_Tag_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
sam_challenge_label_Tag_oldlen = len;
if (sam_challenge_label_Tag_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_challenge_label_Tag_datalen;
e = der_get_general_string(p, len, (data)->sam_challenge_label, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = sam_challenge_label_Tag_oldlen - sam_challenge_label_Tag_datalen;
}
len = sam_challenge_label_oldlen - sam_challenge_label_datalen;
}
}
{
size_t sam_challenge_datalen, sam_challenge_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 5, &sam_challenge_datalen, &l);
if(e) {
(data)->sam_challenge = NULL;
} else {
(data)->sam_challenge = calloc(1, sizeof(*(data)->sam_challenge));
if ((data)->sam_challenge == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
sam_challenge_oldlen = len;
if (sam_challenge_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_challenge_datalen;
{
size_t sam_challenge_Tag_datalen, sam_challenge_Tag_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, PRIM, UT_GeneralString, &sam_challenge_Tag_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
sam_challenge_Tag_oldlen = len;
if (sam_challenge_Tag_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_challenge_Tag_datalen;
e = der_get_general_string(p, len, (data)->sam_challenge, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = sam_challenge_Tag_oldlen - sam_challenge_Tag_datalen;
}
len = sam_challenge_oldlen - sam_challenge_datalen;
}
}
{
size_t sam_response_prompt_datalen, sam_response_prompt_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 6, &sam_response_prompt_datalen, &l);
if(e) {
(data)->sam_response_prompt = NULL;
} else {
(data)->sam_response_prompt = calloc(1, sizeof(*(data)->sam_response_prompt));
if ((data)->sam_response_prompt == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
sam_response_prompt_oldlen = len;
if (sam_response_prompt_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_response_prompt_datalen;
{
size_t sam_response_prompt_Tag_datalen, sam_response_prompt_Tag_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, PRIM, UT_GeneralString, &sam_response_prompt_Tag_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
sam_response_prompt_Tag_oldlen = len;
if (sam_response_prompt_Tag_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_response_prompt_Tag_datalen;
e = der_get_general_string(p, len, (data)->sam_response_prompt, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = sam_response_prompt_Tag_oldlen - sam_response_prompt_Tag_datalen;
}
len = sam_response_prompt_oldlen - sam_response_prompt_datalen;
}
}
{
size_t sam_pk_for_sad_datalen, sam_pk_for_sad_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 7, &sam_pk_for_sad_datalen, &l);
if(e) {
(data)->sam_pk_for_sad = NULL;
} else {
(data)->sam_pk_for_sad = calloc(1, sizeof(*(data)->sam_pk_for_sad));
if ((data)->sam_pk_for_sad == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
sam_pk_for_sad_oldlen = len;
if (sam_pk_for_sad_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_pk_for_sad_datalen;
e = decode_EncryptionKey(p, len, (data)->sam_pk_for_sad, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = sam_pk_for_sad_oldlen - sam_pk_for_sad_datalen;
}
}
{
size_t sam_nonce_datalen, sam_nonce_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 8, &sam_nonce_datalen, &l);
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
size_t sam_etype_datalen, sam_etype_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 9, &sam_etype_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
sam_etype_oldlen = len;
if (sam_etype_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_etype_datalen;
e = decode_krb5int32(p, len, &(data)->sam_etype, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = sam_etype_oldlen - sam_etype_datalen;
}
len = Top_oldlen - Top_datalen;
}
if(size) *size = ret;
return 0;
fail:
free_PA_SAM_CHALLENGE_2_BODY(data);
return e;
}

void
free_PA_SAM_CHALLENGE_2_BODY(PA_SAM_CHALLENGE_2_BODY *data)
{
free_krb5int32(&(data)->sam_type);
free_SAMFlags(&(data)->sam_flags);
if((data)->sam_type_name) {
der_free_general_string((data)->sam_type_name);
free((data)->sam_type_name);
(data)->sam_type_name = NULL;
}
if((data)->sam_track_id) {
der_free_general_string((data)->sam_track_id);
free((data)->sam_track_id);
(data)->sam_track_id = NULL;
}
if((data)->sam_challenge_label) {
der_free_general_string((data)->sam_challenge_label);
free((data)->sam_challenge_label);
(data)->sam_challenge_label = NULL;
}
if((data)->sam_challenge) {
der_free_general_string((data)->sam_challenge);
free((data)->sam_challenge);
(data)->sam_challenge = NULL;
}
if((data)->sam_response_prompt) {
der_free_general_string((data)->sam_response_prompt);
free((data)->sam_response_prompt);
(data)->sam_response_prompt = NULL;
}
if((data)->sam_pk_for_sad) {
free_EncryptionKey((data)->sam_pk_for_sad);
free((data)->sam_pk_for_sad);
(data)->sam_pk_for_sad = NULL;
}
free_krb5int32(&(data)->sam_nonce);
free_krb5int32(&(data)->sam_etype);
}

size_t
length_PA_SAM_CHALLENGE_2_BODY(const PA_SAM_CHALLENGE_2_BODY *data)
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
if((data)->sam_type_name){
size_t Top_tag_oldret = ret;
ret = 0;
ret += der_length_general_string((data)->sam_type_name);
ret += 1 + der_length_len (ret);
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
if((data)->sam_challenge_label){
size_t Top_tag_oldret = ret;
ret = 0;
ret += der_length_general_string((data)->sam_challenge_label);
ret += 1 + der_length_len (ret);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
if((data)->sam_challenge){
size_t Top_tag_oldret = ret;
ret = 0;
ret += der_length_general_string((data)->sam_challenge);
ret += 1 + der_length_len (ret);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
if((data)->sam_response_prompt){
size_t Top_tag_oldret = ret;
ret = 0;
ret += der_length_general_string((data)->sam_response_prompt);
ret += 1 + der_length_len (ret);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
if((data)->sam_pk_for_sad){
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_EncryptionKey((data)->sam_pk_for_sad);
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
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_krb5int32(&(data)->sam_etype);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
ret += 1 + der_length_len (ret);
return ret;
}

int
copy_PA_SAM_CHALLENGE_2_BODY(const PA_SAM_CHALLENGE_2_BODY *from, PA_SAM_CHALLENGE_2_BODY *to)
{
memset(to, 0, sizeof(*to));
if(copy_krb5int32(&(from)->sam_type, &(to)->sam_type)) goto fail;
if(copy_SAMFlags(&(from)->sam_flags, &(to)->sam_flags)) goto fail;
if((from)->sam_type_name) {
(to)->sam_type_name = malloc(sizeof(*(to)->sam_type_name));
if((to)->sam_type_name == NULL) goto fail;
if(der_copy_general_string((from)->sam_type_name, (to)->sam_type_name)) goto fail;
}else
(to)->sam_type_name = NULL;
if((from)->sam_track_id) {
(to)->sam_track_id = malloc(sizeof(*(to)->sam_track_id));
if((to)->sam_track_id == NULL) goto fail;
if(der_copy_general_string((from)->sam_track_id, (to)->sam_track_id)) goto fail;
}else
(to)->sam_track_id = NULL;
if((from)->sam_challenge_label) {
(to)->sam_challenge_label = malloc(sizeof(*(to)->sam_challenge_label));
if((to)->sam_challenge_label == NULL) goto fail;
if(der_copy_general_string((from)->sam_challenge_label, (to)->sam_challenge_label)) goto fail;
}else
(to)->sam_challenge_label = NULL;
if((from)->sam_challenge) {
(to)->sam_challenge = malloc(sizeof(*(to)->sam_challenge));
if((to)->sam_challenge == NULL) goto fail;
if(der_copy_general_string((from)->sam_challenge, (to)->sam_challenge)) goto fail;
}else
(to)->sam_challenge = NULL;
if((from)->sam_response_prompt) {
(to)->sam_response_prompt = malloc(sizeof(*(to)->sam_response_prompt));
if((to)->sam_response_prompt == NULL) goto fail;
if(der_copy_general_string((from)->sam_response_prompt, (to)->sam_response_prompt)) goto fail;
}else
(to)->sam_response_prompt = NULL;
if((from)->sam_pk_for_sad) {
(to)->sam_pk_for_sad = malloc(sizeof(*(to)->sam_pk_for_sad));
if((to)->sam_pk_for_sad == NULL) goto fail;
if(copy_EncryptionKey((from)->sam_pk_for_sad, (to)->sam_pk_for_sad)) goto fail;
}else
(to)->sam_pk_for_sad = NULL;
if(copy_krb5int32(&(from)->sam_nonce, &(to)->sam_nonce)) goto fail;
if(copy_krb5int32(&(from)->sam_etype, &(to)->sam_etype)) goto fail;
return 0;
fail:
free_PA_SAM_CHALLENGE_2_BODY(to);
return ENOMEM;
}

