/*
 * Code for class HTTP_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1044_8102(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1044_8103(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1044_8104(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1044_8105(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1044_8106(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1044_8107(EIF_REFERENCE);
extern void EIF_Minit1044(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTP_CONSTANTS}.default_http_port */
EIF_TYPED_VALUE F1044_8102 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	return r;
}

/* {HTTP_CONSTANTS}.default_https_port */
EIF_TYPED_VALUE F1044_8103 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 443L);
	return r;
}

/* {HTTP_CONSTANTS}.http_version_1_0 */
RTOID (F1044_8104)


EIF_TYPED_VALUE F1044_8104 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1044_8104,14162,RTMS_EX_H("HTTP/1.0",8,303094320));
}

/* {HTTP_CONSTANTS}.http_version_1_1 */
RTOID (F1044_8105)


EIF_TYPED_VALUE F1044_8105 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1044_8105,14163,RTMS_EX_H("HTTP/1.1",8,303094321));
}

/* {HTTP_CONSTANTS}.crlf */
RTOID (F1044_8106)


EIF_TYPED_VALUE F1044_8106 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1044_8106,14164,RTMS_EX_H("\015\012",2,3338));
}

/* {HTTP_CONSTANTS}.default_bufsize */
EIF_TYPED_VALUE F1044_8107 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
	return r;
}

void EIF_Minit1044 (void)
{
	GTCX
	RTOTS (8104,F1044_8104)
	RTOTS (8105,F1044_8105)
	RTOTS (8106,F1044_8106)
}


#ifdef __cplusplus
}
#endif
