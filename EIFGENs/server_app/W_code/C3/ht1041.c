/*
 * Code for class HTTP_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1041_8089(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_8090(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_8091(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_8092(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_8093(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_8094(EIF_REFERENCE);
extern void EIF_Minit1041(void);

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
EIF_TYPED_VALUE F1041_8089 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	return r;
}

/* {HTTP_CONSTANTS}.default_https_port */
EIF_TYPED_VALUE F1041_8090 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 443L);
	return r;
}

/* {HTTP_CONSTANTS}.http_version_1_0 */
RTOID (F1041_8091)


EIF_TYPED_VALUE F1041_8091 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1041_8091,14147,RTMS_EX_H("HTTP/1.0",8,303094320));
}

/* {HTTP_CONSTANTS}.http_version_1_1 */
RTOID (F1041_8092)


EIF_TYPED_VALUE F1041_8092 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1041_8092,14148,RTMS_EX_H("HTTP/1.1",8,303094321));
}

/* {HTTP_CONSTANTS}.crlf */
RTOID (F1041_8093)


EIF_TYPED_VALUE F1041_8093 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1041_8093,14149,RTMS_EX_H("\015\012",2,3338));
}

/* {HTTP_CONSTANTS}.default_bufsize */
EIF_TYPED_VALUE F1041_8094 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
	return r;
}

void EIF_Minit1041 (void)
{
	GTCX
	RTOTS (8091,F1041_8091)
	RTOTS (8092,F1041_8092)
	RTOTS (8093,F1041_8093)
}


#ifdef __cplusplus
}
#endif
