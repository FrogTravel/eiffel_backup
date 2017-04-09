/*
 * Code for class HTTPD_CONFIGURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1133_9777(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1133_9778(EIF_REFERENCE);
extern void F1133_9779(EIF_REFERENCE);
extern void F1133_9780(EIF_REFERENCE);
extern void F1133_9781(EIF_REFERENCE);
extern void F1133_9782(EIF_REFERENCE);
extern void F1133_9783(EIF_REFERENCE);
extern void EIF_Minit1133(void);

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

/* {HTTPD_CONFIGURATION}.server_details */
RTOID (F1133_9777)


EIF_TYPED_VALUE F1133_9777 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1133_9777,15811,RTMS_EX_H("Server: Standalone Eiffel Server",32,1003060338));
}

/* {HTTPD_CONFIGURATION}.has_secure_support */
EIF_TYPED_VALUE F1133_9778 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {HTTPD_CONFIGURATION}.set_secure_protocol_to_ssl_2_or_3 */
void F1133_9779 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_secure_protocol_to_ssl_2_or_3";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1132, Current, 0, 0, 15812);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1132, Current, 15812);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTPD_CONFIGURATION}.set_secure_protocol_to_tls_1_0 */
void F1133_9780 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_secure_protocol_to_tls_1_0";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1132, Current, 0, 0, 15813);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1132, Current, 15813);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTPD_CONFIGURATION}.set_secure_protocol_to_tls_1_1 */
void F1133_9781 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_secure_protocol_to_tls_1_1";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1132, Current, 0, 0, 15814);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1132, Current, 15814);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTPD_CONFIGURATION}.set_secure_protocol_to_tls_1_2 */
void F1133_9782 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_secure_protocol_to_tls_1_2";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1132, Current, 0, 0, 15815);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1132, Current, 15815);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTPD_CONFIGURATION}.set_secure_protocol_to_dtls_1_0 */
void F1133_9783 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_secure_protocol_to_dtls_1_0";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1132, Current, 0, 0, 15816);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1132, Current, 15816);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit1133 (void)
{
	GTCX
	RTOTS (9777,F1133_9777)
}


#ifdef __cplusplus
}
#endif
