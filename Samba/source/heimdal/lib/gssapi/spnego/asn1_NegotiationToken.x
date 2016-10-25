/* Generated from spnego.asn1 */
/* Do not edit */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <krb5-types.h>
#include <spnego_asn1.h>
#include <asn1_err.h>
#include <der.h>
#include <parse_units.h>

int
encode_NegotiationToken(unsigned char *p, size_t len, const NegotiationToken *data, size_t *size)
{
size_t ret = 0;
size_t l;
int i, e;

i = 0;

switch((data)->element) {
case choice_NegotiationToken_negTokenResp: {size_t Top_oldret = ret;
ret = 0;
e = encode_NegTokenResp(p, len, &((data))->u.negTokenResp, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 1, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_oldret;
break;
}
case choice_NegotiationToken_negTokenInit: {size_t Top_oldret = ret;
ret = 0;
e = encode_NegTokenInit(p, len, &((data))->u.negTokenInit, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 0, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_oldret;
break;
}
};
*size = ret;
return 0;
}

int
decode_NegotiationToken(const unsigned char *p, size_t len, NegotiationToken *data, size_t *size)
{
size_t ret = 0;
size_t l;
int e;

memset(data, 0, sizeof(*data));
if (der_match_tag(p, len, ASN1_C_CONTEXT, CONS, 0, NULL) == 0) {
{
size_t negTokenInit_datalen, negTokenInit_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 0, &negTokenInit_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
negTokenInit_oldlen = len;
if (negTokenInit_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = negTokenInit_datalen;
e = decode_NegTokenInit(p, len, &(data)->u.negTokenInit, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = negTokenInit_oldlen - negTokenInit_datalen;
}
(data)->element = choice_NegotiationToken_negTokenInit;
}
else if (der_match_tag(p, len, ASN1_C_CONTEXT, CONS, 1, NULL) == 0) {
{
size_t negTokenResp_datalen, negTokenResp_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, CONS, 1, &negTokenResp_datalen, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
negTokenResp_oldlen = len;
if (negTokenResp_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = negTokenResp_datalen;
e = decode_NegTokenResp(p, len, &(data)->u.negTokenResp, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = negTokenResp_oldlen - negTokenResp_datalen;
}
(data)->element = choice_NegotiationToken_negTokenResp;
}
else {
e = ASN1_PARSE_ERROR;
goto fail;
}
if(size) *size = ret;
return 0;
fail:
free_NegotiationToken(data);
return e;
}

void
free_NegotiationToken(NegotiationToken *data)
{
switch((data)->element) {
case choice_NegotiationToken_negTokenInit:
free_NegTokenInit(&(data)->u.negTokenInit);
break;
case choice_NegotiationToken_negTokenResp:
free_NegTokenResp(&(data)->u.negTokenResp);
break;
}
}

size_t
length_NegotiationToken(const NegotiationToken *data)
{
size_t ret = 0;
switch((data)->element) {
case choice_NegotiationToken_negTokenInit:
{
size_t Top_oldret = ret;
ret = 0;
ret += length_NegTokenInit(&(data)->u.negTokenInit);
ret += 1 + der_length_len (ret);
ret += Top_oldret;
}
break;
case choice_NegotiationToken_negTokenResp:
{
size_t Top_oldret = ret;
ret = 0;
ret += length_NegTokenResp(&(data)->u.negTokenResp);
ret += 1 + der_length_len (ret);
ret += Top_oldret;
}
break;
}
return ret;
}

int
copy_NegotiationToken(const NegotiationToken *from, NegotiationToken *to)
{
memset(to, 0, sizeof(*to));
(to)->element = (from)->element;
switch((from)->element) {
case choice_NegotiationToken_negTokenInit:
if(copy_NegTokenInit(&(from)->u.negTokenInit, &(to)->u.negTokenInit)) goto fail;
break;
case choice_NegotiationToken_negTokenResp:
if(copy_NegTokenResp(&(from)->u.negTokenResp, &(to)->u.negTokenResp)) goto fail;
break;
}
return 0;
fail:
free_NegotiationToken(to);
return ENOMEM;
}

