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
encode_PA_SAM_CHALLENGE_2(unsigned char *p, size_t len, const PA_SAM_CHALLENGE_2 *data, size_t *size)
{
size_t ret = 0;
size_t l;
int i, e;

i = 0;
/* sam-cksum */
{
size_t Top_tag_oldret = ret;
ret = 0;
for(i = (&(data)->sam_cksum)->len - 1; i >= 0; --i) {
size_t sam_cksum_tag_tag_for_oldret = ret;
ret = 0;
e = encode_Checksum(p, len, &(&(data)->sam_cksum)->val[i], &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += sam_cksum_tag_tag_for_oldret;
}
e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, CONS, UT_Sequence, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 1, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* sam-body */
{
size_t Top_tag_oldret = ret;
ret = 0;
e = encode_PA_SAM_CHALLENGE_2_BODY(p, len, &(data)->sam_body, &l);
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
decode_PA_SAM_CHALLENGE_2(const unsigned char *p, size_t len, PA_SAM_CHALLENGE_2 *data, size_t *size)
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
size_t sam_body_datalen, sam_body_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 0, &sam_body_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
sam_body_oldlen = len;
if (sam_body_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_body_datalen;
e = decode_PA_SAM_CHALLENGE_2_BODY(p, len, &(data)->sam_body, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = sam_body_oldlen - sam_body_datalen;
}
{
size_t sam_cksum_datalen, sam_cksum_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 1, &sam_cksum_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
sam_cksum_oldlen = len;
if (sam_cksum_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_cksum_datalen;
{
size_t sam_cksum_Tag_datalen, sam_cksum_Tag_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, CONS, UT_Sequence, &sam_cksum_Tag_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
sam_cksum_Tag_oldlen = len;
if (sam_cksum_Tag_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = sam_cksum_Tag_datalen;
{
size_t sam_cksum_Tag_Tag_origlen = len;
size_t sam_cksum_Tag_Tag_oldret = ret;
void *sam_cksum_Tag_Tag_tmp;
ret = 0;
(&(data)->sam_cksum)->len = 0;
(&(data)->sam_cksum)->val = NULL;
while(ret < sam_cksum_Tag_Tag_origlen) {
sam_cksum_Tag_Tag_tmp = realloc((&(data)->sam_cksum)->val,     sizeof(*((&(data)->sam_cksum)->val)) * ((&(data)->sam_cksum)->len + 1));
if (sam_cksum_Tag_Tag_tmp == NULL) { goto fail; }
(&(data)->sam_cksum)->val = sam_cksum_Tag_Tag_tmp;
e = decode_Checksum(p, len, &(&(data)->sam_cksum)->val[(&(data)->sam_cksum)->len], &l);
if(e) goto fail;
p += l; len -= l; ret += l;
(&(data)->sam_cksum)->len++;
len = sam_cksum_Tag_Tag_origlen - ret;
}
ret += sam_cksum_Tag_Tag_oldret;
}
len = sam_cksum_Tag_oldlen - sam_cksum_Tag_datalen;
}
len = sam_cksum_oldlen - sam_cksum_datalen;
}
len = Top_oldlen - Top_datalen;
}
if(size) *size = ret;
return 0;
fail:
free_PA_SAM_CHALLENGE_2(data);
return e;
}

void
free_PA_SAM_CHALLENGE_2(PA_SAM_CHALLENGE_2 *data)
{
free_PA_SAM_CHALLENGE_2_BODY(&(data)->sam_body);
while((&(data)->sam_cksum)->len){
free_Checksum(&(&(data)->sam_cksum)->val[(&(data)->sam_cksum)->len-1]);
(&(data)->sam_cksum)->len--;
}
free((&(data)->sam_cksum)->val);
(&(data)->sam_cksum)->val = NULL;
}

size_t
length_PA_SAM_CHALLENGE_2(const PA_SAM_CHALLENGE_2 *data)
{
size_t ret = 0;
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_PA_SAM_CHALLENGE_2_BODY(&(data)->sam_body);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
{
size_t Top_tag_oldret = ret;
ret = 0;
{
int sam_cksum_tag_tag_oldret = ret;
int i;
ret = 0;
for(i = (&(data)->sam_cksum)->len - 1; i >= 0; --i){
int sam_cksum_tag_tag_for_oldret = ret;
ret = 0;
ret += length_Checksum(&(&(data)->sam_cksum)->val[i]);
ret += sam_cksum_tag_tag_for_oldret;
}
ret += sam_cksum_tag_tag_oldret;
}
ret += 1 + der_length_len (ret);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
ret += 1 + der_length_len (ret);
return ret;
}

int
copy_PA_SAM_CHALLENGE_2(const PA_SAM_CHALLENGE_2 *from, PA_SAM_CHALLENGE_2 *to)
{
memset(to, 0, sizeof(*to));
if(copy_PA_SAM_CHALLENGE_2_BODY(&(from)->sam_body, &(to)->sam_body)) goto fail;
if(((&(to)->sam_cksum)->val = malloc((&(from)->sam_cksum)->len * sizeof(*(&(to)->sam_cksum)->val))) == NULL && (&(from)->sam_cksum)->len != 0)
goto fail;
for((&(to)->sam_cksum)->len = 0; (&(to)->sam_cksum)->len < (&(from)->sam_cksum)->len; (&(to)->sam_cksum)->len++){
if(copy_Checksum(&(&(from)->sam_cksum)->val[(&(to)->sam_cksum)->len], &(&(to)->sam_cksum)->val[(&(to)->sam_cksum)->len])) goto fail;
}
return 0;
fail:
free_PA_SAM_CHALLENGE_2(to);
return ENOMEM;
}

