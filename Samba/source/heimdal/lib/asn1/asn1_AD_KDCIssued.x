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
encode_AD_KDCIssued(unsigned char *p, size_t len, const AD_KDCIssued *data, size_t *size)
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

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 3, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* i-sname */
if((data)->i_sname) {
size_t Top_tag_oldret = ret;
ret = 0;
e = encode_PrincipalName(p, len, (data)->i_sname, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 2, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* i-realm */
if((data)->i_realm) {
size_t Top_tag_oldret = ret;
ret = 0;
e = encode_Realm(p, len, (data)->i_realm, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 1, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* ad-checksum */
{
size_t Top_tag_oldret = ret;
ret = 0;
e = encode_Checksum(p, len, &(data)->ad_checksum, &l);
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
decode_AD_KDCIssued(const unsigned char *p, size_t len, AD_KDCIssued *data, size_t *size)
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
size_t ad_checksum_datalen, ad_checksum_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 0, &ad_checksum_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
ad_checksum_oldlen = len;
if (ad_checksum_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = ad_checksum_datalen;
e = decode_Checksum(p, len, &(data)->ad_checksum, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = ad_checksum_oldlen - ad_checksum_datalen;
}
{
size_t i_realm_datalen, i_realm_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 1, &i_realm_datalen, &l);
if(e) {
(data)->i_realm = NULL;
} else {
(data)->i_realm = calloc(1, sizeof(*(data)->i_realm));
if ((data)->i_realm == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
i_realm_oldlen = len;
if (i_realm_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = i_realm_datalen;
e = decode_Realm(p, len, (data)->i_realm, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = i_realm_oldlen - i_realm_datalen;
}
}
{
size_t i_sname_datalen, i_sname_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 2, &i_sname_datalen, &l);
if(e) {
(data)->i_sname = NULL;
} else {
(data)->i_sname = calloc(1, sizeof(*(data)->i_sname));
if ((data)->i_sname == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
i_sname_oldlen = len;
if (i_sname_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = i_sname_datalen;
e = decode_PrincipalName(p, len, (data)->i_sname, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = i_sname_oldlen - i_sname_datalen;
}
}
{
size_t elements_datalen, elements_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 3, &elements_datalen, &l);
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
free_AD_KDCIssued(data);
return e;
}

void
free_AD_KDCIssued(AD_KDCIssued *data)
{
free_Checksum(&(data)->ad_checksum);
if((data)->i_realm) {
free_Realm((data)->i_realm);
free((data)->i_realm);
(data)->i_realm = NULL;
}
if((data)->i_sname) {
free_PrincipalName((data)->i_sname);
free((data)->i_sname);
(data)->i_sname = NULL;
}
free_AuthorizationData(&(data)->elements);
}

size_t
length_AD_KDCIssued(const AD_KDCIssued *data)
{
size_t ret = 0;
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_Checksum(&(data)->ad_checksum);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
if((data)->i_realm){
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_Realm((data)->i_realm);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
if((data)->i_sname){
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_PrincipalName((data)->i_sname);
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
copy_AD_KDCIssued(const AD_KDCIssued *from, AD_KDCIssued *to)
{
memset(to, 0, sizeof(*to));
if(copy_Checksum(&(from)->ad_checksum, &(to)->ad_checksum)) goto fail;
if((from)->i_realm) {
(to)->i_realm = malloc(sizeof(*(to)->i_realm));
if((to)->i_realm == NULL) goto fail;
if(copy_Realm((from)->i_realm, (to)->i_realm)) goto fail;
}else
(to)->i_realm = NULL;
if((from)->i_sname) {
(to)->i_sname = malloc(sizeof(*(to)->i_sname));
if((to)->i_sname == NULL) goto fail;
if(copy_PrincipalName((from)->i_sname, (to)->i_sname)) goto fail;
}else
(to)->i_sname = NULL;
if(copy_AuthorizationData(&(from)->elements, &(to)->elements)) goto fail;
return 0;
fail:
free_AD_KDCIssued(to);
return ENOMEM;
}

