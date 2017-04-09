/*
 * Code for class WEB_SOCKET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1072_8647(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1072_8648(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1072_8649(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1072_8650(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1072_8651(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1072_8652(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1072_8653(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1072_8654(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1072_8655(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1072_8656(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1072_8657(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1072_8658(EIF_REFERENCE);
extern void F1072_8659(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1072_8660(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1072_8661(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1072_8662(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1072_8663(EIF_REFERENCE);
extern void F1072_8664(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1072_8665(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1072_8666(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1072_8667(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1072_8668(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1072_8669(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1072_8670(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1072_8671(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1072_8672(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1072(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"
#include "eif_plug.h"
#include "eif_misc.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEB_SOCKET}.make */
void F1072_8647 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1071, Current, 1, 2, 14694);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1071, Current, 14694);
	RTCC(arg1, 1071, l_feature_name, 1, eif_new_type(1138, 0x01), 0x01);
	RTCC(arg2, 1071, l_feature_name, 2, eif_new_type(1007, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6306, 0xF8000472, 0); /* request */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(6306, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6307, 0xF80003EF, 0); /* response */
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(6307, dtype)) = (EIF_REFERENCE) RTCCL(arg2);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 6309, 0x04000000, 1); /* is_verbose */
	*(EIF_BOOLEAN *)(Current + RTWA(6309, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 6310, 0x10000000, 1); /* verbose_level */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6300, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6310, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7286, "input", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1064, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 6305, 0xF8000454, 0); /* socket */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6206, "source", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(6305, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(7);
		RTDBGAA(Current, dtype, 6305, 0xF8000454, 0); /* socket */
		tr1 = RTLNSMART(RTWCT(6305, dtype, Dftype(Current)).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6869, Dtype(tr1)))(tr1);
		RTNHOOK(7,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(6305, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		if (RTAL & CK_CHECK) {
			RTHOOK(8);
			RTCT("has_socket", EX_CHECK);
				RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef arg2
#undef arg1
}

/* {WEB_SOCKET}.socket */
EIF_TYPED_VALUE F1072_8648 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6305,Dtype(Current)));
	return r;
}


/* {WEB_SOCKET}.request */
EIF_TYPED_VALUE F1072_8649 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6306,Dtype(Current)));
	return r;
}


/* {WEB_SOCKET}.response */
EIF_TYPED_VALUE F1072_8650 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6307,Dtype(Current)));
	return r;
}


/* {WEB_SOCKET}.is_websocket */
EIF_TYPED_VALUE F1072_8651 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(6308,Dtype(Current)));
	return r;
}


/* {WEB_SOCKET}.is_verbose */
EIF_TYPED_VALUE F1072_8652 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(6309,Dtype(Current)));
	return r;
}


/* {WEB_SOCKET}.verbose_level */
EIF_TYPED_VALUE F1072_8653 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6310,Dtype(Current)));
	return r;
}


/* {WEB_SOCKET}.has_error */
EIF_TYPED_VALUE F1072_8654 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(6311,Dtype(Current)));
	return r;
}


/* {WEB_SOCKET}.is_ready_for_reading */
EIF_TYPED_VALUE F1072_8655 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_ready_for_reading";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1071, Current, 0, 0, 14702);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1071, Current, 14702);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6305, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6840, "ready_for_reading", tr1))(tr1)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {WEB_SOCKET}.is_open_read */
EIF_TYPED_VALUE F1072_8656 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_open_read";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1071, Current, 0, 0, 14703);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1071, Current, 14703);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6305, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tb1 = *(EIF_BOOLEAN *)(tr1 + RTVA(6829, "is_open_read", tr1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {WEB_SOCKET}.is_open_write */
EIF_TYPED_VALUE F1072_8657 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_open_write";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1071, Current, 0, 0, 14704);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1071, Current, 14704);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6305, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tb1 = *(EIF_BOOLEAN *)(tr1 + RTVA(6830, "is_open_write", tr1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {WEB_SOCKET}.socket_descriptor */
EIF_TYPED_VALUE F1072_8658 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "socket_descriptor";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1071, Current, 0, 0, 14705);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1071, Current, 14705);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6305, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3278, "descriptor", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {WEB_SOCKET}.set_is_verbose */
void F1072_8659 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_verbose";
	RTEX;
#define arg1 arg1x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1071, Current, 0, 1, 14706);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1071, Current, 14706);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 6309, 0x04000000, 1); /* is_verbose */
	*(EIF_BOOLEAN *)(Current + RTWA(6309, Dtype(Current))) = (EIF_BOOLEAN) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {WEB_SOCKET}.set_verbose_level */
void F1072_8660 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_verbose_level";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1071, Current, 0, 1, 14707);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1071, Current, 14707);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 6310, 0x10000000, 1); /* verbose_level */
	*(EIF_INTEGER_32 *)(Current + RTWA(6310, Dtype(Current))) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {WEB_SOCKET}.put_error */
void F1072_8661 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "put_error";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1071, Current, 0, 1, 14708);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1071, Current, 14708);
	RTCC(arg1, 1071, l_feature_name, 1, eif_new_type(225, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6307, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5467, "put_error", tr1))(tr1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {WEB_SOCKET}.log */
void F1072_8662 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "log";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1071, Current, 0, 2, 14683);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1071, Current, 14683);
	RTCC(arg1, 1071, l_feature_name, 1, eif_new_type(225, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6309, dtype));
	if (tb1) {
		RTHOOK(2);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6318, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef arg2
#undef arg1
}

/* {WEB_SOCKET}.open_ws_handshake */
void F1072_8663 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "open_ws_handshake";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(16);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLR(7,loc7);
	RTLR(8,loc8);
	RTLR(9,loc9);
	RTLR(10,tr2);
	RTLR(11,loc1);
	RTLR(12,loc2);
	RTLR(13,tr3);
	RTLR(14,ur2);
	RTLR(15,loc10);
	RTLIU(16);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	
	RTEAA(l_feature_name, 1071, Current, 10, 0, 14684);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1071, Current, 14684);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6308, 0x04000000, 1); /* is_websocket */
	*(EIF_BOOLEAN *)(Current + RTWA(6308, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6311, 0x04000000, 1); /* has_error */
	*(EIF_BOOLEAN *)(Current + RTWA(6311, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	RTDBGAL(Current, 3, 0xF8000472, 0, 0); /* loc3 */
	loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6306, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	RTDBGAL(Current, 4, 0xF80003EF, 0, 0); /* loc4 */
	loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6307, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(5);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6309, dtype));
	if (tb1) {
		RTHOOK(6);
		tr1 = RTMS_EX_H("\012Receive <====================",30,690522941);
		ur1 = tr1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6302, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6319, dtype))(Current, ur1x, ui4_1x);
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7283, "raw_header_data", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = RTCCL(tr1);
		if (EIF_TEST(loc5)) {
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4425, "as_readable_string_8", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6302, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6319, dtype))(Current, ur1x, ui4_1x);
		}
	}
	RTHOOK(9);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7294, "is_get_request_method", loc3))(loc3)).it_b);
	if (tb3) {
		tr1 = RTMS_EX_H("HTTP_UPGRADE",12,146432325);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7318, "meta_string_variable", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc6 = RTCCL(tr1);
		tb2 = EIF_TEST(loc6);
	}
	if (tb2) {
		tr1 = RTMS_EX_H("websocket",9,280170612);
		ur1 = tr1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4412, "is_case_insensitive_equal_general", loc6))(loc6, ur1x)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(10);
		RTDBGAA(Current, dtype, 6308, 0x04000000, 1); /* is_websocket */
		*(EIF_BOOLEAN *)(Current + RTWA(6308, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(11);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6305, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6795, "set_blocking", tr1))(tr1);
		RTHOOK(12);
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		tb5 = '\0';
		tr1 = RTMS_EX_H("HTTP_SEC_WEBSOCKET_KEY",22,120285529);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7318, "meta_string_variable", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc7 = RTCCL(tr1);
		if (EIF_TEST(loc7)) {
			tr1 = RTMS_EX_H("HTTP_CONNECTION",15,388356174);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7318, "meta_string_variable", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc8 = RTCCL(tr1);
			tb5 = EIF_TEST(loc8);
		}
		if (tb5) {
			tr1 = RTMS_EX_H("Upgrade",7,1972281957);
			ur1 = tr1;
			tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4414, "has_substring", loc8))(loc8, ur1x)).it_b);
			tb4 = tb5;
		}
		if (tb4) {
			tr1 = RTMS_EX_H("HTTP_SEC_WEBSOCKET_VERSION",26,867846734);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7318, "meta_string_variable", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc9 = RTCCL(tr1);
			tb3 = EIF_TEST(loc9);
		}
		if (tb3) {
			tr1 = RTMS_EX_H("13",2,12595);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4429, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4622, "is_case_insensitive_equal", loc9))(loc9, ur1x)).it_b);
			tb2 = tb3;
		}
		if (tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7351, "http_host", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb1) {
			RTHOOK(13);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6309, dtype));
			if (tb1) {
				RTHOOK(14);
				tr1 = RTMS_EX_H("key ",4,1801812256);
				ur1 = RTCCL(loc7);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr2);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6302, dtype))(Current)).it_i4);
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6319, dtype))(Current, ur1x, ui4_1x);
			}
			RTHOOK(15);
			RTDBGAL(Current, 1, 0xF80003E4, 0, 0); /* loc1 */
			tr1 = RTLN(eif_new_type(996, 0x01).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5214, Dtype(tr1)))(tr1);
			RTNHOOK(15,1);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(16);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6108, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", loc7))(loc7, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4425, "as_readable_string_8", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5206, "update_from_string", loc1))(loc1, ur1x);
			RTHOOK(17);
			RTDBGAL(Current, 2, 0xF80000E3, 0, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5424, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(17,1);
			ur1 = RTCCL(loc1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6323, dtype))(Current, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5978, "encoded_string", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc2 = (EIF_REFERENCE) RTCCL(tr2);
			RTHOOK(18);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5442, "header", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(18,1);
			tr2 = RTMS_EX_H("Upgrade",7,1972281957);
			ur1 = tr2;
			tr3 = RTMS_EX_H("websocket",9,280170612);
			ur2 = tr3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6581, "add_header_key_value", tr1))(tr1, ur1x, ur2x);
			RTHOOK(19);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5442, "header", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(19,1);
			tr2 = RTMS_EX_H("Connection",10,2015825262);
			ur1 = tr2;
			tr3 = RTMS_EX_H("Upgrade",7,1972281957);
			ur2 = tr3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6581, "add_header_key_value", tr1))(tr1, ur1x, ur2x);
			RTHOOK(20);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5442, "header", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(20,1);
			tr2 = RTMS_EX_H("Sec-WebSocket-Accept",20,1672249972);
			ur1 = tr2;
			ur2 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6581, "add_header_key_value", tr1))(tr1, ur1x, ur2x);
			RTHOOK(21);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6309, dtype));
			if (tb1) {
				RTHOOK(22);
				tr1 = RTMS_EX_H("\012================> Send Handshake",33,1754161765);
				ur1 = tr1;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6302, dtype))(Current)).it_i4);
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6319, dtype))(Current, ur1x, ui4_1x);
				RTHOOK(23);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5442, "header", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc10 = RTCCL(tr1);
				loc10 = RTRV(eif_new_type(1097, 0x01),loc10);
				if (EIF_TEST(loc10)) {
					RTHOOK(24);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6730, "string", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6302, dtype))(Current)).it_i4);
					ui4_1 = ti4_1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6319, dtype))(Current, ur1x, ui4_1x);
				}
			}
			RTHOOK(25);
			ui4_1 = ((EIF_INTEGER_32) 101L);
			tr1 = RTMS_EX_H("Switching Protocols",19,99036275);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5437, "set_status_code_with_reason_phrase", loc4))(loc4, ui4_1x, ur1x);
			RTHOOK(26);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5428, "wgi_response", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(26,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5671, "push", tr1))(tr1);
		} else {
			RTHOOK(27);
			RTDBGAA(Current, dtype, 6311, 0x04000000, 1); /* has_error */
			*(EIF_BOOLEAN *)(Current + RTWA(6311, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(28);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6309, dtype));
			if (tb1) {
				RTHOOK(29);
				tr1 = RTMS_EX_H("Error (opening_handshake)!!!",28,712452129);
				ur1 = tr1;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6302, dtype))(Current)).it_i4);
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6319, dtype))(Current, ur1x, ui4_1x);
			}
			RTHOOK(30);
			ui4_1 = ((EIF_INTEGER_32) 400L);
			tr1 = RTMS_EX_H("Bad Request",11,480473204);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5437, "set_status_code_with_reason_phrase", loc4))(loc4, ui4_1x, ur1x);
		}
	} else {
		RTHOOK(31);
		RTDBGAA(Current, dtype, 6308, 0x04000000, 1); /* is_websocket */
		*(EIF_BOOLEAN *)(Current + RTWA(6308, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
}

/* {WEB_SOCKET}.send */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1072_8664 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "send";
	RTEX;
	RTED;
	EIF_INTEGER_32 EIF_VOLATILE loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc5 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_64 EIF_VOLATILE loc6 = (EIF_NATURAL_64) 0;
	EIF_BOOLEAN EIF_VOLATILE loc7 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	EIF_NATURAL_64  EIF_VOLATILE tu8_1;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_NATURAL_32  EIF_VOLATILE tu4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_CHARACTER_8  EIF_VOLATILE tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(9);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,loc4);
	RTLR(6,loc3);
	RTLR(7,tr3);
	RTLR(8,saved_except);
	RTLIU(9);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_UINT64, &loc6);
	RTLU(SK_BOOL, &loc7);
	RTLXL;
	
	RTEAA(l_feature_name, 1071, Current, 7, 2, 14685);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1071, Current, 14685);
	RTCC(arg2, 1071, l_feature_name, 2, eif_new_type(225, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTE_T
	if (
		WDBG(1071,"ws")
	) {
		RTHOOK(1);
		tr1 = RTMS_EX_H(">>do_send (..., ",16,1164727328);
		ui4_1 = arg1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6116, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(", ..)\012",6,861530378);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	}
	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc7) {
		RTHOOK(3);
		RTDBGAL(Current, 4, 0xF80000E3, 0, 0); /* loc4 */
		tr1 = RTLN(eif_new_type(227, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4371, Dtype(tr1)))(tr1);
		RTNHOOK(3,1);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		ui4_1 = arg1;
		ti4_1 = eif_bit_or(((EIF_INTEGER_32) 128L),ui4_1);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4500, "append_code", loc4))(loc4, uu4_1x);
		RTHOOK(5);
		RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(4495, "count", arg2));
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		RTDBGAL(Current, 6, 0x3C000000, 1, 0); /* loc6 */
		tu8_1 = (EIF_NATURAL_64) loc5;
		loc6 = (EIF_NATURAL_64) tu8_1;
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc5 > ((EIF_INTEGER_32) 65535L))) {
			RTHOOK(8);
			ui4_1 = ((EIF_INTEGER_32) 127L);
			ti4_1 = eif_bit_or(((EIF_INTEGER_32) 0L),ui4_1);
			tu4_1 = (EIF_NATURAL_32) ti4_1;
			uu4_1 = tu4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4500, "append_code", loc4))(loc4, uu4_1x);
			RTHOOK(9);
			ui4_1 = ((EIF_INTEGER_32) 56L);
			tu8_1 = eif_bit_shift_right(loc6,ui4_1);
			tc1 = (EIF_CHARACTER_8) tu8_1;
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4547, "append_character", loc4))(loc4, uc1x);
			RTHOOK(10);
			ui4_1 = ((EIF_INTEGER_32) 48L);
			tu8_1 = eif_bit_shift_right(loc6,ui4_1);
			tc1 = (EIF_CHARACTER_8) tu8_1;
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4547, "append_character", loc4))(loc4, uc1x);
			RTHOOK(11);
			ui4_1 = ((EIF_INTEGER_32) 40L);
			tu8_1 = eif_bit_shift_right(loc6,ui4_1);
			tc1 = (EIF_CHARACTER_8) tu8_1;
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4547, "append_character", loc4))(loc4, uc1x);
			RTHOOK(12);
			ui4_1 = ((EIF_INTEGER_32) 32L);
			tu8_1 = eif_bit_shift_right(loc6,ui4_1);
			tc1 = (EIF_CHARACTER_8) tu8_1;
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4547, "append_character", loc4))(loc4, uc1x);
			RTHOOK(13);
			ui4_1 = ((EIF_INTEGER_32) 24L);
			tu8_1 = eif_bit_shift_right(loc6,ui4_1);
			tc1 = (EIF_CHARACTER_8) tu8_1;
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4547, "append_character", loc4))(loc4, uc1x);
			RTHOOK(14);
			ui4_1 = ((EIF_INTEGER_32) 16L);
			tu8_1 = eif_bit_shift_right(loc6,ui4_1);
			tc1 = (EIF_CHARACTER_8) tu8_1;
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4547, "append_character", loc4))(loc4, uc1x);
			RTHOOK(15);
			ui4_1 = ((EIF_INTEGER_32) 8L);
			tu8_1 = eif_bit_shift_right(loc6,ui4_1);
			tc1 = (EIF_CHARACTER_8) tu8_1;
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4547, "append_character", loc4))(loc4, uc1x);
			RTHOOK(16);
			tc1 = (EIF_CHARACTER_8) loc6;
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4547, "append_character", loc4))(loc4, uc1x);
		} else {
			RTHOOK(17);
			if ((EIF_BOOLEAN) (loc5 > ((EIF_INTEGER_32) 125L))) {
				RTHOOK(18);
				ui4_1 = ((EIF_INTEGER_32) 126L);
				ti4_1 = eif_bit_or(((EIF_INTEGER_32) 0L),ui4_1);
				tu4_1 = (EIF_NATURAL_32) ti4_1;
				uu4_1 = tu4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4500, "append_code", loc4))(loc4, uu4_1x);
				RTHOOK(19);
				ui4_1 = ((EIF_INTEGER_32) 8L);
				tu8_1 = eif_bit_shift_right(loc6,ui4_1);
				tu4_1 = (EIF_NATURAL_32) tu8_1;
				uu4_1 = tu4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4500, "append_code", loc4))(loc4, uu4_1x);
				RTHOOK(20);
				tc1 = (EIF_CHARACTER_8) loc6;
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4547, "append_character", loc4))(loc4, uc1x);
			} else {
				RTHOOK(21);
				tu4_1 = (EIF_NATURAL_32) loc6;
				uu4_1 = tu4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4500, "append_code", loc4))(loc4, uu4_1x);
			}
		}
		RTHOOK(22);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6305, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(22,1);
		ur1 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6917, "put_string_8_noexception", tr1))(tr1, ur1x);
		RTHOOK(23);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6305, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(23,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6757, "was_error", tr1))(tr1)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(24);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
			RTHOOK(25);
			if ((EIF_BOOLEAN) (loc5 < loc2)) {
				RTHOOK(26);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6305, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(26,1);
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6917, "put_string_8_noexception", tr1))(tr1, ur1x);
			} else {
				RTHOOK(27);
				RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				for (;;) {
					RTHOOK(28);
					tb1 = '\01';
					if (!(EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6305, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(28,1);
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6757, "was_error", tr1))(tr1)).it_b);
						tb1 = tb2;
					}
					if (tb1) break;
					if (
						WDBG(1071,"ws")
					) {
						RTHOOK(29);
						tr1 = RTMS_EX_H("Sending chunk ",14,1122291232);
						tr2 = c_outi((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H(" -> ",4,539835936);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr2 = c_outi((EIF_INTEGER_32) (loc1 + loc2));
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H(" / ",3,2109216);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr2 = c_outi(loc5);
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H("\012",1,10);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
					}
					RTHOOK(30);
					RTDBGAL(Current, 3, 0xF80000E1, 0, 0); /* loc3 */
					ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
					ui4_2 = (EIF_INTEGER_32) (loc1 + loc2);
					ti4_1 = eif_min_int32 (loc5,ui4_2);
					ui4_2 = ti4_1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4450, "substring", arg2))(arg2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc3 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(31);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6305, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(31,1);
					ur1 = RTCCL(loc3);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6917, "put_string_8_noexception", tr1))(tr1, ur1x);
					RTHOOK(32);
					ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(4495, "count", loc3));
					if ((EIF_BOOLEAN) (ti4_1 < loc2)) {
						RTHOOK(33);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					}
					RTHOOK(34);
					RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
					loc1 += loc2;
				}
				if (
					WDBG(1071,"ws")
				) {
					RTHOOK(35);
					tr1 = RTMS_EX_H("Sending chunk done\012",19,40282634);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(36);
	RTDBGAL(Current, 7, 0x04000000, 1, 0); /* loc7 */
	loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(37);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(37,1);
	tr2 = RTMS_EX_H("Internal error in ",18,1383194400);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr3);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr2))(tr2, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr2 = RTMS_EX_H(".do_send (conn, a_opcode=",25,965316925);
	ur1 = tr2;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr3))(tr3, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr3 = c_outi(arg1);
	ur1 = RTCCL(tr3);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr2))(tr2, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr2 = RTMS_EX_H(", a_message) !\012",15,1760484618);
	ur1 = tr2;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr3))(tr3, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(149, "put_string", tr1))(tr1, ur1x);
	RTHOOK(38);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(39);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(11);
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef uc1
#undef arg2
#undef arg1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WEB_SOCKET}.next_frame */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_TYPED_VALUE F1072_8665 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "next_frame";
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_64 EIF_VOLATILE loc5 = (EIF_NATURAL_64) 0;
	EIF_REFERENCE EIF_VOLATILE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc7 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc8 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc9 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc10 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc14 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE loc15 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc16 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc17 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_NATURAL_64  EIF_VOLATILE tu8_1;
	EIF_NATURAL_64  EIF_VOLATILE tu8_2;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_NATURAL_32  EIF_VOLATILE tu4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_BOOLEAN  EIF_VOLATILE tb3;
	EIF_BOOLEAN  EIF_VOLATILE tb4;
	EIF_CHARACTER_8  EIF_VOLATILE tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	RTLI(14);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLR(4,loc15);
	RTLR(5,Result);
	RTLR(6,tr2);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,ur2);
	RTLR(10,loc18);
	RTLR(11,loc19);
	RTLR(12,loc20);
	RTLR(13,saved_except);
	RTLIU(14);
	RTXSLS;
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_UINT64, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_BOOL, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_BOOL, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_BOOL, &loc16);
	RTLU(SK_BOOL, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_REF, &loc20);
	RTLXL;
	
	RTEAA(l_feature_name, 1071, Current, 20, 0, 14686);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1071, Current, 14686);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_in_blocking_mode", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6305, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		tb1 = *(EIF_BOOLEAN *)(tr1 + RTVA(6796, "is_blocking", tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc17) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF8000454, 0, 0); /* loc1 */
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6305, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (
			WDBG(1071,"ws")
		) {
			RTHOOK(4);
			tr1 = RTMS_EX_H("next_frame:\012",12,1666140682);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		}
		RTHOOK(5);
		RTDBGAL(Current, 16, 0x04000000, 1, 0); /* loc16 */
		loc16 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc9 || (EIF_BOOLEAN) !loc16)) break;
			RTHOOK(7);
			RTDBGAL(Current, 15, 0xF80000E3, 0, 0); /* loc15 */
			ur1 = RTCCL(loc1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			loc15 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6324, dtype))(Current, ur1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTHOOK(8);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4387, "is_empty", loc15))(loc15)).it_b);
			if (tb1) {
				RTHOOK(9);
				RTDBGAL(Current, 16, 0x04000000, 1, 0); /* loc16 */
				loc16 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				if (
					WDBG(1071,"ws")
				) {
					RTHOOK(10);
					tr1 = RTMS_EX_H("[ERROR] incomplete_data!\012",25,898468106);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
				}
			} else {
				RTHOOK(11);
				RTDBGAL(Current, 12, 0x10000000, 1, 0); /* loc12 */
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", loc15))(loc15, ui4_1x)).it_c1);
				ti4_1 = (EIF_INTEGER_32) (tc1);
				loc12 = (EIF_INTEGER_32) ti4_1;
				if (
					WDBG(1071,"ws")
				) {
					RTHOOK(12);
					tr1 = RTMS_EX_H("   fin,rsv(3),opcode(4)=",24,500954941);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
					RTHOOK(13);
					ui4_1 = loc12;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6327, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
					RTHOOK(14);
					tr1 = RTMS_EX_H("\012",1,10);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
				}
				RTHOOK(15);
				RTDBGAL(Current, 9, 0x04000000, 1, 0); /* loc9 */
				ui4_1 = ((EIF_INTEGER_32) 128L);
				ti4_1 = eif_bit_and(loc12,ui4_1);
				loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
				RTHOOK(16);
				RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
				ui4_1 = ((EIF_INTEGER_32) 112L);
				ti4_1 = eif_bit_and(loc12,ui4_1);
				loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
				RTHOOK(17);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				ui4_1 = ((EIF_INTEGER_32) 15L);
				ti4_1 = eif_bit_and(loc12,ui4_1);
				loc2 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(18);
				if ((EIF_BOOLEAN)(Result != NULL)) {
					RTHOOK(19);
					ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(7166, "opcode", Result));
					if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
						RTHOOK(20);
						RTDBGAL(Current, 0, 0xF8000468, 0,0); /* Result */
						tr1 = RTLN(eif_new_type(1128, 0x01).id);
						ui4_1 = loc2;
						ub1 = loc9;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7164, Dtype(tr1)))(tr1, ui4_1x, ub1x);
						RTNHOOK(20,1);
						Result = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(21);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6119, dtype))(Current)).it_i4);
						ui4_1 = ti4_1;
						tr1 = RTMS_EX_H("Unexpected injected frame",25,836959589);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7192, "report_error", Result))(Result, ui4_1x, ur1x);
					} else {
						RTHOOK(22);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6109, dtype))(Current)).it_i4);
						if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
							RTHOOK(23);
							ub1 = loc9;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7176, "update_fin", Result))(Result, ub1x);
						} else {
							RTHOOK(24);
							ui4_1 = loc2;
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6115, dtype))(Current, ui4_1x)).it_b);
							if (tb1) {
								RTHOOK(25);
								RTDBGAL(Current, 0, 0xF8000468, 0,0); /* Result */
								tr1 = RTLN(eif_new_type(1128, 0x01).id);
								ui4_1 = loc2;
								ur1 = RTCCL(Result);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7165, Dtype(tr1)))(tr1, ui4_1x, ur1x);
								RTNHOOK(25,1);
								Result = (EIF_REFERENCE) RTCCL(tr1);
							} else {
								RTHOOK(26);
								RTDBGAL(Current, 0, 0xF8000468, 0,0); /* Result */
								tr1 = RTLN(eif_new_type(1128, 0x01).id);
								ui4_1 = loc2;
								ub1 = loc9;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7164, Dtype(tr1)))(tr1, ui4_1x, ub1x);
								RTNHOOK(26,1);
								Result = (EIF_REFERENCE) RTCCL(tr1);
								RTHOOK(27);
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6119, dtype))(Current)).it_i4);
								ui4_1 = ti4_1;
								tr1 = RTMS_EX_H("Unexpected frame",16,577179749);
								ur1 = tr1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7192, "report_error", Result))(Result, ui4_1x, ur1x);
							}
						}
					}
				} else {
					RTHOOK(28);
					RTDBGAL(Current, 0, 0xF8000468, 0,0); /* Result */
					tr1 = RTLN(eif_new_type(1128, 0x01).id);
					ui4_1 = loc2;
					ub1 = loc9;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7164, Dtype(tr1)))(tr1, ui4_1x, ub1x);
					RTNHOOK(28,1);
					Result = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(29);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7181, "is_continuation", Result))(Result)).it_b);
					if (tb1) {
						RTHOOK(30);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6119, dtype))(Current)).it_i4);
						ui4_1 = ti4_1;
						tr1 = RTMS_EX_H("There is no message to continue!",32,1953732129);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7192, "report_error", Result))(Result, ui4_1x, ur1x);
					}
				}
				RTHOOK(31);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7186, "is_valid", Result))(Result)).it_b);
				if (tb1) {
					RTHOOK(32);
					tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6309, dtype));
					if (tb1) {
						RTHOOK(33);
						tr1 = RTMS_EX_H("+ frame ",8,772171040);
						ui4_1 = loc2;
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6116, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H(" (fin=",6,1781407293);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr2 = (loc9 ? makestr ("True", 4) : makestr ("False", 5));
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H(")",1,41);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6302, dtype))(Current)).it_i4);
						ui4_1 = ti4_1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6319, dtype))(Current, ur1x, ui4_1x);
					}
					RTHOOK(34);
					if ((EIF_BOOLEAN) !loc8) {
						RTHOOK(35);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6119, dtype))(Current)).it_i4);
						ui4_1 = ti4_1;
						tr1 = RTMS_EX_H("RSV values MUST be 0 unless an extension is negotiated that defines meanings for non-zero values",96,334031731);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7192, "report_error", Result))(Result, ui4_1x, ur1x);
					}
				} else {
					RTHOOK(36);
					tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6309, dtype));
					if (tb1) {
						RTHOOK(37);
						tr1 = RTMS_EX_H("+ INVALID frame ",16,1924702496);
						ui4_1 = loc2;
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6116, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H(" (fin=",6,1781407293);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr2 = (loc9 ? makestr ("True", 4) : makestr ("False", 5));
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H(")",1,41);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6302, dtype))(Current)).it_i4);
						ui4_1 = ti4_1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6319, dtype))(Current, ur1x, ui4_1x);
					}
				}
				RTHOOK(38);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7186, "is_valid", Result))(Result)).it_b);
				if (tb1) {
					RTHOOK(39);
					tb1 = '\01';
					tb2 = '\01';
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7180, "is_text", Result))(Result)).it_b);
					if (!tb3) {
						tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7179, "is_binary", Result))(Result)).it_b);
						tb2 = tb3;
					}
					if (!tb2) {
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7183, "is_control", Result))(Result)).it_b);
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(40);
						RTDBGAL(Current, 15, 0xF80000E3, 0, 0); /* loc15 */
						ur1 = RTCCL(loc1);
						ui4_1 = ((EIF_INTEGER_32) 1L);
						loc15 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6324, dtype))(Current, ur1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTHOOK(41);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4387, "is_empty", loc15))(loc15)).it_b);
						if (tb1) {
							RTHOOK(42);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6121, dtype))(Current)).it_i4);
							ui4_1 = ti4_1;
							tr1 = RTMS_EX_H("Incomplete data for mask and payload len",40,1456822638);
							ur1 = tr1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7192, "report_error", Result))(Result, ui4_1x, ur1x);
						} else {
							RTHOOK(43);
							RTDBGAL(Current, 12, 0x10000000, 1, 0); /* loc12 */
							ui4_1 = ((EIF_INTEGER_32) 1L);
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", loc15))(loc15, ui4_1x)).it_c1);
							ti4_1 = (EIF_INTEGER_32) (tc1);
							loc12 = (EIF_INTEGER_32) ti4_1;
							if (
								WDBG(1071,"ws")
							) {
								RTHOOK(44);
								tr1 = RTMS_EX_H("   mask,payload_len(7)=",23,1570231613);
								ur1 = tr1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
								RTHOOK(45);
								ui4_1 = loc12;
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6327, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr1);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
								RTHOOK(46);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(46,1);
								(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(168, "put_new_line", tr1))(tr1);
							}
							RTHOOK(47);
							RTDBGAL(Current, 10, 0x04000000, 1, 0); /* loc10 */
							ui4_1 = ((EIF_INTEGER_32) 128L);
							ti4_1 = eif_bit_and(loc12,ui4_1);
							loc10 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
							RTHOOK(48);
							RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
							ui4_1 = ((EIF_INTEGER_32) 127L);
							ti4_1 = eif_bit_and(loc12,ui4_1);
							loc3 = (EIF_INTEGER_32) ti4_1;
							if (
								WDBG(1071,"ws")
							) {
								RTHOOK(49);
								tr1 = RTMS_EX_H("   payload_len=",15,323625533);
								tr2 = c_outi(loc3);
								ur1 = RTCCL(tr2);
								tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr2);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
								RTHOOK(50);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(50,1);
								(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(168, "put_new_line", tr1))(tr1);
							}
							RTHOOK(51);
							tb1 = '\0';
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7183, "is_control", Result))(Result)).it_b);
							if (tb2) {
								tb1 = (EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 125L));
							}
							if (tb1) {
								RTHOOK(52);
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6119, dtype))(Current)).it_i4);
								ui4_1 = ti4_1;
								tr1 = RTMS_EX_H("Control frame MUST have a payload length of 125 bytes or less",61,828906867);
								ur1 = tr1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7192, "report_error", Result))(Result, ui4_1x, ur1x);
							} else {
								RTHOOK(53);
								if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 127L))) {
									RTHOOK(54);
									RTDBGAL(Current, 15, 0xF80000E3, 0, 0); /* loc15 */
									ur1 = RTCCL(loc1);
									ui4_1 = ((EIF_INTEGER_32) 8L);
									loc15 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6324, dtype))(Current, ur1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									if (
										WDBG(1071,"ws")
									) {
										RTHOOK(55);
										tr1 = RTMS_EX_H("   extended payload length=",27,911882301);
										ur1 = RTCCL(loc15);
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6328, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr2);
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr2);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
										RTHOOK(56);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										RTNHOOK(56,1);
										(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(168, "put_new_line", tr1))(tr1);
									}
									RTHOOK(57);
									ti4_1 = *(EIF_INTEGER_32 *)(loc15 + RTVA(4495, "count", loc15));
									if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 8L))) {
										RTHOOK(58);
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6121, dtype))(Current)).it_i4);
										ui4_1 = ti4_1;
										tr1 = RTMS_EX_H("Incomplete data for 64 bit Extended payload length",50,680332136);
										ur1 = tr1;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7192, "report_error", Result))(Result, ui4_1x, ur1x);
									} else {
										RTHOOK(59);
										RTDBGAL(Current, 5, 0x3C000000, 1, 0); /* loc5 */
										ui4_1 = ((EIF_INTEGER_32) 8L);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", loc15))(loc15, ui4_1x)).it_c1);
										tu4_1 = (EIF_NATURAL_32) tc1;
										RTNHOOK(59,1);
										tu8_1 = (EIF_NATURAL_64) tu4_1;
										loc5 = (EIF_NATURAL_64) tu8_1;
										RTHOOK(60);
										RTDBGAL(Current, 5, 0x3C000000, 1, 0); /* loc5 */
										ui4_1 = ((EIF_INTEGER_32) 7L);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", loc15))(loc15, ui4_1x)).it_c1);
										tu4_1 = (EIF_NATURAL_32) tc1;
										RTNHOOK(60,1);
										tu8_1 = (EIF_NATURAL_64) tu4_1;
										ui4_1 = ((EIF_INTEGER_32) 8L);
										tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
										uu8_1 = tu8_2;
										tu8_1 = eif_bit_or(loc5,uu8_1);
										loc5 = (EIF_NATURAL_64) tu8_1;
										RTHOOK(61);
										RTDBGAL(Current, 5, 0x3C000000, 1, 0); /* loc5 */
										ui4_1 = ((EIF_INTEGER_32) 6L);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", loc15))(loc15, ui4_1x)).it_c1);
										tu4_1 = (EIF_NATURAL_32) tc1;
										RTNHOOK(61,1);
										tu8_1 = (EIF_NATURAL_64) tu4_1;
										ui4_1 = ((EIF_INTEGER_32) 16L);
										tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
										uu8_1 = tu8_2;
										tu8_1 = eif_bit_or(loc5,uu8_1);
										loc5 = (EIF_NATURAL_64) tu8_1;
										RTHOOK(62);
										RTDBGAL(Current, 5, 0x3C000000, 1, 0); /* loc5 */
										ui4_1 = ((EIF_INTEGER_32) 5L);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", loc15))(loc15, ui4_1x)).it_c1);
										tu4_1 = (EIF_NATURAL_32) tc1;
										RTNHOOK(62,1);
										tu8_1 = (EIF_NATURAL_64) tu4_1;
										ui4_1 = ((EIF_INTEGER_32) 24L);
										tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
										uu8_1 = tu8_2;
										tu8_1 = eif_bit_or(loc5,uu8_1);
										loc5 = (EIF_NATURAL_64) tu8_1;
										RTHOOK(63);
										RTDBGAL(Current, 5, 0x3C000000, 1, 0); /* loc5 */
										ui4_1 = ((EIF_INTEGER_32) 4L);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", loc15))(loc15, ui4_1x)).it_c1);
										tu4_1 = (EIF_NATURAL_32) tc1;
										RTNHOOK(63,1);
										tu8_1 = (EIF_NATURAL_64) tu4_1;
										ui4_1 = ((EIF_INTEGER_32) 32L);
										tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
										uu8_1 = tu8_2;
										tu8_1 = eif_bit_or(loc5,uu8_1);
										loc5 = (EIF_NATURAL_64) tu8_1;
										RTHOOK(64);
										RTDBGAL(Current, 5, 0x3C000000, 1, 0); /* loc5 */
										ui4_1 = ((EIF_INTEGER_32) 3L);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", loc15))(loc15, ui4_1x)).it_c1);
										tu4_1 = (EIF_NATURAL_32) tc1;
										RTNHOOK(64,1);
										tu8_1 = (EIF_NATURAL_64) tu4_1;
										ui4_1 = ((EIF_INTEGER_32) 40L);
										tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
										uu8_1 = tu8_2;
										tu8_1 = eif_bit_or(loc5,uu8_1);
										loc5 = (EIF_NATURAL_64) tu8_1;
										RTHOOK(65);
										RTDBGAL(Current, 5, 0x3C000000, 1, 0); /* loc5 */
										ui4_1 = ((EIF_INTEGER_32) 2L);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", loc15))(loc15, ui4_1x)).it_c1);
										tu4_1 = (EIF_NATURAL_32) tc1;
										RTNHOOK(65,1);
										tu8_1 = (EIF_NATURAL_64) tu4_1;
										ui4_1 = ((EIF_INTEGER_32) 48L);
										tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
										uu8_1 = tu8_2;
										tu8_1 = eif_bit_or(loc5,uu8_1);
										loc5 = (EIF_NATURAL_64) tu8_1;
										RTHOOK(66);
										RTDBGAL(Current, 5, 0x3C000000, 1, 0); /* loc5 */
										ui4_1 = ((EIF_INTEGER_32) 1L);
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", loc15))(loc15, ui4_1x)).it_c1);
										tu4_1 = (EIF_NATURAL_32) tc1;
										RTNHOOK(66,1);
										tu8_1 = (EIF_NATURAL_64) tu4_1;
										ui4_1 = ((EIF_INTEGER_32) 56L);
										tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
										uu8_1 = tu8_2;
										tu8_1 = eif_bit_or(loc5,uu8_1);
										loc5 = (EIF_NATURAL_64) tu8_1;
									}
								} else {
									RTHOOK(67);
									if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 126L))) {
										RTHOOK(68);
										RTDBGAL(Current, 15, 0xF80000E3, 0, 0); /* loc15 */
										ur1 = RTCCL(loc1);
										ui4_1 = ((EIF_INTEGER_32) 2L);
										loc15 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6324, dtype))(Current, ur1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										if (
											WDBG(1071,"ws")
										) {
											RTHOOK(69);
											tr1 = RTMS_EX_H("   extended payload length bits=",32,1012217917);
											ur1 = RTCCL(loc15);
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6328, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ur1 = RTCCL(tr2);
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ur1 = RTCCL(tr2);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
											RTHOOK(70);
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											RTNHOOK(70,1);
											(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(168, "put_new_line", tr1))(tr1);
										}
										RTHOOK(71);
										ti4_1 = *(EIF_INTEGER_32 *)(loc15 + RTVA(4495, "count", loc15));
										if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 2L))) {
											RTHOOK(72);
											ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6121, dtype))(Current)).it_i4);
											ui4_1 = ti4_1;
											tr1 = RTMS_EX_H("Incomplete data for 16 bit Extended payload length",50,2027008104);
											ur1 = tr1;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7192, "report_error", Result))(Result, ui4_1x, ur1x);
										} else {
											RTHOOK(73);
											RTDBGAL(Current, 5, 0x3C000000, 1, 0); /* loc5 */
											ui4_1 = ((EIF_INTEGER_32) 2L);
											tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", loc15))(loc15, ui4_1x)).it_c1);
											tu4_1 = (EIF_NATURAL_32) tc1;
											RTNHOOK(73,1);
											tu8_1 = (EIF_NATURAL_64) tu4_1;
											loc5 = (EIF_NATURAL_64) tu8_1;
											RTHOOK(74);
											RTDBGAL(Current, 5, 0x3C000000, 1, 0); /* loc5 */
											ui4_1 = ((EIF_INTEGER_32) 1L);
											tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", loc15))(loc15, ui4_1x)).it_c1);
											tu4_1 = (EIF_NATURAL_32) tc1;
											RTNHOOK(74,1);
											tu8_1 = (EIF_NATURAL_64) tu4_1;
											ui4_1 = ((EIF_INTEGER_32) 8L);
											tu8_2 = eif_bit_shift_left(tu8_1,ui4_1);
											uu8_1 = tu8_2;
											tu8_1 = eif_bit_or(loc5,uu8_1);
											loc5 = (EIF_NATURAL_64) tu8_1;
										}
									} else {
										RTHOOK(75);
										RTDBGAL(Current, 5, 0x3C000000, 1, 0); /* loc5 */
										tu8_1 = (EIF_NATURAL_64) loc3;
										loc5 = (EIF_NATURAL_64) tu8_1;
									}
								}
							}
							if (
								WDBG(1071,"ws")
							) {
								RTHOOK(76);
								tr1 = RTMS_EX_H("   Full payload length=",23,2091989309);
								tr2 = c_outu64(loc5);
								ur1 = RTCCL(tr2);
								tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr2);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
								RTHOOK(77);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(77,1);
								(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(168, "put_new_line", tr1))(tr1);
							}
							RTHOOK(78);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7186, "is_valid", Result))(Result)).it_b);
							if (tb1) {
								RTHOOK(79);
								if (loc10) {
									RTHOOK(80);
									RTDBGAL(Current, 6, 0xF80000E1, 0, 0); /* loc6 */
									ur1 = RTCCL(loc1);
									ui4_1 = ((EIF_INTEGER_32) 4L);
									loc6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6324, dtype))(Current, ur1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									if (
										WDBG(1071,"ws")
									) {
										RTHOOK(81);
										tr1 = RTMS_EX_H("   Masking key bits=",20,488202045);
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4426, "as_string_8", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr2);
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6328, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr2);
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr2);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
										RTHOOK(82);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										RTNHOOK(82,1);
										(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(168, "put_new_line", tr1))(tr1);
									}
									RTHOOK(83);
									ti4_1 = *(EIF_INTEGER_32 *)(loc6 + RTVA(4495, "count", loc6));
									if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 4L))) {
										if (
											WDBG(1071,"ws")
										) {
											RTHOOK(84);
											tr1 = RTMS_EX_H("masking-key read stream -> ",27,1833744160);
											ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(3295, "bytes_read", loc1));
											RTNHOOK(84,1);
											tr2 = c_outi(ti4_1);
											ur1 = RTCCL(tr2);
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr1 = RTMS_EX_H(" bits\012",6,1832906506);
											ur1 = tr1;
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ur1 = RTCCL(tr1);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
										}
										RTHOOK(85);
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6121, dtype))(Current)).it_i4);
										ui4_1 = ti4_1;
										tr1 = RTMS_EX_H("Incomplete data for Masking-key",31,862081145);
										ur1 = tr1;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7192, "report_error", Result))(Result, ui4_1x, ur1x);
										RTHOOK(86);
										RTDBGAL(Current, 6, 0xF80000E1, 0, 0); /* loc6 */
										loc6 = (EIF_REFERENCE) NULL;
									}
								} else {
									RTHOOK(87);
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6119, dtype))(Current)).it_i4);
									ui4_1 = ti4_1;
									tr1 = RTMS_EX_H("All frames sent from client to server are masked!",49,1203725089);
									ur1 = tr1;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7192, "report_error", Result))(Result, ui4_1x, ur1x);
								}
								RTHOOK(88);
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7186, "is_valid", Result))(Result)).it_b);
								if (tb1) {
									RTHOOK(89);
									RTDBGAL(Current, 11, 0x10000000, 1, 0); /* loc11 */
									loc11 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
									RTHOOK(90);
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4153, 213))(Current)).it_i4);
									tu8_1 = (EIF_NATURAL_64) ti4_1;
									if ((EIF_BOOLEAN) (loc5 > tu8_1)) {
										RTHOOK(91);
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6123, dtype))(Current)).it_i4);
										ui4_1 = ti4_1;
										tr1 = RTMS_EX_H("Can not handle payload data (len=",33,1567580477);
										tr2 = c_outu64(loc5);
										ur1 = RTCCL(tr2);
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										tr1 = RTMS_EX_H(")",1,41);
										ur1 = tr1;
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr1);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7192, "report_error", Result))(Result, ui4_1x, ur1x);
									} else {
										RTHOOK(92);
										RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
										ti4_1 = (EIF_INTEGER_32) loc5;
										loc3 = (EIF_INTEGER_32) ti4_1;
									}
									RTHOOK(93);
									RTDBGAL(Current, 13, 0x10000000, 1, 0); /* loc13 */
									loc13 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
									RTHOOK(94);
									RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
									loc4 = (EIF_INTEGER_32) loc3;
									for (;;) {
										RTHOOK(95);
										tb1 = '\01';
										if (!(EIF_BOOLEAN) ((EIF_BOOLEAN) (loc13 >= loc3) || (EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L)))) {
											tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7186, "is_valid", Result))(Result)).it_b);
											tb1 = (EIF_BOOLEAN) !tb2;
										}
										if (tb1) break;
										RTHOOK(96);
										if ((EIF_BOOLEAN) (loc4 < loc11)) {
											RTHOOK(97);
											RTDBGAL(Current, 11, 0x10000000, 1, 0); /* loc11 */
											loc11 = (EIF_INTEGER_32) loc4;
										}
										RTHOOK(98);
										ui4_1 = loc11;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3348, "read_stream", loc1))(loc1, ui4_1x);
										RTHOOK(99);
										RTDBGAL(Current, 14, 0x10000000, 1, 0); /* loc14 */
										ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(3295, "bytes_read", loc1));
										loc14 = (EIF_INTEGER_32) ti4_1;
										if (
											WDBG(1071,"ws")
										) {
											RTHOOK(100);
											tr1 = RTMS_EX_H("read chunk size=",16,936176957);
											tr2 = c_outi(loc11);
											ur1 = RTCCL(tr2);
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr1 = RTMS_EX_H(" fetch_count=",13,29176381);
											ur1 = tr1;
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr2 = c_outi(loc13);
											ur1 = RTCCL(tr2);
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr1 = RTMS_EX_H(" l_len=",7,957941821);
											ur1 = tr1;
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr2 = c_outi(loc3);
											ur1 = RTCCL(tr2);
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr1 = RTMS_EX_H(" -> ",4,539835936);
											ur1 = tr1;
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr2 = c_outi(loc14);
											ur1 = RTCCL(tr2);
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr1 = RTMS_EX_H("bytes\012",6,2146410762);
											ur1 = tr1;
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ur1 = RTCCL(tr1);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
										}
										RTHOOK(101);
										if ((EIF_BOOLEAN) (loc14 > ((EIF_INTEGER_32) 0L))) {
											RTHOOK(102);
											RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
											loc4 -= loc14;
											RTHOOK(103);
											RTDBGAL(Current, 7, 0xF80000E3, 0, 0); /* loc7 */
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3282, "last_string", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											loc7 = (EIF_REFERENCE) RTCCL(tr1);
											RTHOOK(104);
											if ((EIF_BOOLEAN)(loc6 != NULL)) {
												RTHOOK(105);
												ur1 = RTCCL(loc7);
												ui4_1 = (EIF_INTEGER_32) (loc13 + ((EIF_INTEGER_32) 1L));
												ur2 = RTCCL(loc6);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6325, dtype))(Current, ur1x, ui4_1x, ur2x);
											} else {
												if (RTAL & CK_CHECK) {
													RTHOOK(106);
													RTCT("client_frame_should_always_be_encoded", EX_CHECK);
														RTCF;
												}
											}
											RTHOOK(107);
											RTDBGAL(Current, 13, 0x10000000, 1, 0); /* loc13 */
											loc13 += loc14;
											RTHOOK(108);
											ur1 = RTCCL(loc7);
											ui4_1 = loc14;
											ub1 = (EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L));
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7191, "append_payload_data_chop", Result))(Result, ur1x, ui4_1x, ub1x);
										} else {
											RTHOOK(109);
											ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6125, dtype))(Current)).it_i4);
											ui4_1 = ti4_1;
											tr1 = RTMS_EX_H("Issue reading payload data...",29,1343256878);
											ur1 = tr1;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7192, "report_error", Result))(Result, ui4_1x, ur1x);
										}
									}
									RTHOOK(110);
									tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6309, dtype));
									if (tb2) {
										RTHOOK(111);
										tr1 = RTMS_EX_H("  Received ",11,1261468448);
										tr2 = c_outi(loc13);
										ur1 = RTCCL(tr2);
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										tr1 = RTMS_EX_H(" out of ",8,816120864);
										ur1 = tr1;
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										tr2 = c_outi(loc3);
										ur1 = RTCCL(tr2);
										tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										tr1 = RTMS_EX_H(" bytes <===============",23,1291323965);
										ur1 = tr1;
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr1);
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6302, dtype))(Current)).it_i4);
										ui4_1 = ti4_1;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6319, dtype))(Current, ur1x, ui4_1x);
									}
									if (
										WDBG(1071,"ws")
									) {
										RTHOOK(112);
										tr1 = RTMS_EX_H(" -> ",4,539835936);
										ur1 = tr1;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
										RTHOOK(113);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7170, "payload_data", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										loc18 = RTCCL(tr1);
										if (EIF_TEST(loc18)) {
											RTHOOK(114);
											RTDBGAL(Current, 15, 0xF80000E3, 0, 0); /* loc15 */
											ui4_1 = loc13;
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4452, "tail", loc18))(loc18, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											loc15 = (EIF_REFERENCE) RTCCL(tr1);
											RTHOOK(115);
											ti4_1 = *(EIF_INTEGER_32 *)(loc15 + RTVA(4495, "count", loc15));
											if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 50L))) {
												RTHOOK(116);
												ui4_1 = ((EIF_INTEGER_32) 50L);
												tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4451, "head", loc15))(loc15, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												tr2 = RTMS_EX_H("..",2,11822);
												ur1 = tr2;
												tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												ur1 = RTCCL(tr2);
												tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6329, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												ur1 = RTCCL(tr1);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
											} else {
												RTHOOK(117);
												ur1 = RTCCL(loc15);
												tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6329, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												ur1 = RTCCL(tr1);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
											}
											RTHOOK(118);
											tr1 = RTMS_EX_H("\012",1,10);
											ur1 = tr1;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
											RTHOOK(119);
											tb2 = '\0';
											tb3 = '\0';
											tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7180, "is_text", Result))(Result)).it_b);
											if (tb4) {
												tb4 = *(EIF_BOOLEAN *)(Result + RTVA(7167, "is_fin", Result));
												tb3 = tb4;
											}
											if (tb3) {
												ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(7168, "fragment_count", Result));
												tb2 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
											}
											if (tb2) {
												RTHOOK(120);
												tr1 = RTMS_EX_H(" -> ",4,539835936);
												ur1 = tr1;
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
												RTHOOK(121);
												ti4_1 = *(EIF_INTEGER_32 *)(loc15 + RTVA(4495, "count", loc15));
												if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 50L))) {
													RTHOOK(122);
													ui4_1 = ((EIF_INTEGER_32) 50L);
													tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4451, "head", loc15))(loc15, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													tr2 = RTMS_EX_H("..",2,11822);
													ur1 = tr2;
													tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													ur1 = RTCCL(tr2);
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
												} else {
													RTHOOK(123);
													ur1 = RTCCL(loc15);
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
												}
												RTHOOK(124);
												tr1 = RTMS_EX_H("\012",1,10);
												ur1 = tr1;
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			RTHOOK(125);
			if ((EIF_BOOLEAN)(Result != NULL)) {
				RTHOOK(126);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7172, "error", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc19 = RTCCL(tr1);
				if (EIF_TEST(loc19)) {
					RTHOOK(127);
					tb2 = *(EIF_BOOLEAN *)(Current + RTWA(6309, dtype));
					if (tb2) {
						RTHOOK(128);
						tr1 = RTMS_EX_H("  !Invalid frame: ",18,1454169376);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4960, "string", loc19))(loc19)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4449, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr2);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6302, dtype))(Current)).it_i4);
						ui4_1 = ti4_1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6319, dtype))(Current, ur1x, ui4_1x);
					}
				}
				RTHOOK(129);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7175, "is_injected_control", Result))(Result)).it_b);
				if (tb2) {
					RTHOOK(130);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7174, "parent", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc20 = RTCCL(tr1);
					if (EIF_TEST(loc20)) {
						RTHOOK(131);
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7186, "is_valid", Result))(Result)).it_b);
						if ((EIF_BOOLEAN) !tb2) {
							RTHOOK(132);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6119, dtype))(Current)).it_i4);
							ui4_1 = ti4_1;
							tr1 = RTMS_EX_H("Invalid injected frame",22,278324581);
							ur1 = tr1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7192, "report_error", loc20))(loc20, ui4_1x, ur1x);
						}
						RTHOOK(133);
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7182, "is_connection_close", Result))(Result)).it_b);
						if (tb2) {
							RTHOOK(134);
							ub1 = (EIF_BOOLEAN) 1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7176, "update_fin", loc20))(loc20, ub1x);
							RTHOOK(135);
							RTDBGAL(Current, 9, 0x04000000, 1, 0); /* loc9 */
							tb2 = *(EIF_BOOLEAN *)(Result + RTVA(7167, "is_fin", Result));
							loc9 = (EIF_BOOLEAN) tb2;
						} else {
							RTHOOK(136);
							RTDBGAL(Current, 0, 0xF8000468, 0,0); /* Result */
							Result = (EIF_REFERENCE) RTCCL(loc20);
							RTHOOK(137);
							RTDBGAL(Current, 9, 0x04000000, 1, 0); /* loc9 */
							tb2 = *(EIF_BOOLEAN *)(loc20 + RTVA(7167, "is_fin", loc20));
							loc9 = (EIF_BOOLEAN) tb2;
							if (RTAL & CK_CHECK) {
								RTHOOK(138);
								RTCT("inside_fragmented_frame", EX_CHECK);
								if ((EIF_BOOLEAN) !loc9) {
									RTCK;
								} else {
									RTCF;
								}
							}
						}
					} else {
						if (RTAL & CK_CHECK) {
							RTHOOK(139);
							RTCT("has_parent", EX_CHECK);
								RTCF;
						}
						RTHOOK(140);
						RTDBGAL(Current, 9, 0x04000000, 1, 0); /* loc9 */
						loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					}
				}
				RTHOOK(141);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7186, "is_valid", Result))(Result)).it_b);
				if ((EIF_BOOLEAN) !tb2) {
					RTHOOK(142);
					RTDBGAL(Current, 16, 0x04000000, 1, 0); /* loc16 */
					loc16 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
			} else {
				RTHOOK(143);
				RTDBGAL(Current, 16, 0x04000000, 1, 0); /* loc16 */
				loc16 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		}
	}
	RTHOOK(144);
	RTDBGAA(Current, dtype, 6311, 0x04000000, 1); /* has_error */
	tb2 = '\01';
	if (!(EIF_BOOLEAN)(Result == NULL)) {
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7188, "has_error", Result))(Result)).it_b);
		tb2 = tb3;
	}
	*(EIF_BOOLEAN *)(Current + RTWA(6311, dtype)) = (EIF_BOOLEAN) tb2;
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(145);
	RTDBGAL(Current, 17, 0x04000000, 1, 0); /* loc17 */
	loc17 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(146);
	if ((EIF_BOOLEAN)(Result != NULL)) {
		RTHOOK(147);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6125, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		tr1 = RTMS_EX_H("Internal error",14,2047764850);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7192, "report_error", Result))(Result, ui4_1x, ur1x);
	}
	RTHOOK(148);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(149);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(22);
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef uu8_1
#undef ui4_1
#undef ub1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WEB_SOCKET}.digest */
EIF_TYPED_VALUE F1072_8666 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "digest";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 1071, Current, 3, 1, 14687);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1071, Current, 14687);
	RTCC(arg1, 1071, l_feature_name, 1, eif_new_type(996, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF800022D, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5200, "digest", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80000E3, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(227, 0x01).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2279, "count", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4370, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2414, "lower", loc1))(loc1)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2415, "upper", loc1))(loc1)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		RTHOOK(6);
		ui4_1 = loc2;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", loc1))(loc1, ui4_1x)).it_n1);
		tc1 = (EIF_CHARACTER_8) tu1_1;
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4547, "append_character", Result))(Result, uc1x);
		RTHOOK(7);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {WEB_SOCKET}.next_bytes */
EIF_TYPED_VALUE F1072_8667 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "next_bytes";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 1071, Current, 2, 2, 14688);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1071, Current, 14688);
	RTCC(arg1, 1071, l_feature_name, 1, eif_new_type(1108, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80000E3, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(227, 0x01).id);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4370, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg2;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(5);
		ui4_1 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3348, "read_stream", arg1))(arg1, ui4_1x);
		RTHOOK(6);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3295, "bytes_read", arg1));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3282, "last_string", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4534, "append", Result))(Result, ur1x);
			RTHOOK(9);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			loc1 -= loc2;
		} else {
			RTHOOK(10);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {WEB_SOCKET}.unmask */
void F1072_8668 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "unmask";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 1071, Current, 2, 3, 14689);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1071, Current, 14689);
	RTCC(arg1, 1071, l_feature_name, 1, eif_new_type(227, 0x01), 0x01);
	RTCC(arg3, 1071, l_feature_name, 3, eif_new_type(225, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4495, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(4);
		ui4_1 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4372, "code", arg1))(arg1, ui4_1x)).it_n4);
		RTNHOOK(4,1);
		ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) (((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))) - ((EIF_INTEGER_32) 1L))) % ((EIF_INTEGER_32) 4L))) + ((EIF_INTEGER_32) 1L));
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", arg3))(arg3, ui4_1x)).it_c1);
		tu4_2 = (EIF_NATURAL_32) tc1;
		uu4_1 = tu4_2;
		tu4_2 = eif_bit_xor(tu4_1,uu4_1);
		uu4_1 = tu4_2;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4496, "put_code", arg1))(arg1, uu4_1x, ui4_1x);
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef ui4_1
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {WEB_SOCKET}.append_chunk_unmasked */
void F1072_8669 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "append_chunk_unmasked";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg4);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 1071, Current, 2, 4, 14690);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1071, Current, 14690);
	RTCC(arg1, 1071, l_feature_name, 1, eif_new_type(225, 0x01), 0x01);
	RTCC(arg3, 1071, l_feature_name, 3, eif_new_type(225, 0x01), 0x01);
	RTCC(arg4, 1071, l_feature_name, 4, eif_new_type(227, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4495, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(4);
		ui4_1 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4372, "code", arg1))(arg1, ui4_1x)).it_n4);
		RTNHOOK(4,1);
		ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) (((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))) - ((EIF_INTEGER_32) 1L))) % ((EIF_INTEGER_32) 4L))) + ((EIF_INTEGER_32) 1L));
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", arg3))(arg3, ui4_1x)).it_c1);
		tu4_2 = (EIF_NATURAL_32) tc1;
		uu4_1 = tu4_2;
		tu4_2 = eif_bit_xor(tu4_1,uu4_1);
		uu4_1 = tu4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4500, "append_code", arg4))(arg4, uu4_1x);
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef ui4_1
#undef uu4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEB_SOCKET}.to_byte_representation */
EIF_TYPED_VALUE F1072_8670 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "to_byte_representation";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1071, Current, 1, 1, 14691);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1071, Current, 14691);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 255L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80000E3, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(227, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4370, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 2L))) break;
		RTHOOK(5);
		ui4_1 = (EIF_INTEGER_32) (loc1 % ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4531, "prepend_integer", Result))(Result, ui4_1x);
		RTHOOK(6);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1 /= ((EIF_INTEGER_32) 2L);
	}
	RTHOOK(7);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4531, "prepend_integer", Result))(Result, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {WEB_SOCKET}.string_to_byte_representation */
EIF_TYPED_VALUE F1072_8671 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "string_to_byte_representation";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 1071, Current, 2, 1, 14692);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1071, Current, 14692);
	RTCC(arg1, 1071, l_feature_name, 1, eif_new_type(227, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4495, "count", arg1));
		RTTE((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4495, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF80000E3, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(227, 0x01).id);
	ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) * loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4370, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(7);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4387, "is_empty", Result))(Result)).it_b);
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(8);
				uc1 = (EIF_CHARACTER_8) ':';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4547, "append_character", Result))(Result, uc1x);
			}
			RTHOOK(9);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", arg1))(arg1, ui4_1x)).it_c1);
			ti4_1 = (EIF_INTEGER_32) (tc1);
			ui4_1 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6327, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4534, "append", Result))(Result, ur1x);
			RTHOOK(10);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {WEB_SOCKET}.string_to_byte_hexa_representation */
EIF_TYPED_VALUE F1072_8672 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "string_to_byte_hexa_representation";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 1071, Current, 3, 1, 14693);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1071, Current, 14693);
	RTCC(arg1, 1071, l_feature_name, 1, eif_new_type(227, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4495, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80000E3, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(227, 0x01).id);
	ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) * loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4370, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(6);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4387, "is_empty", Result))(Result)).it_b);
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(7);
				uc1 = (EIF_CHARACTER_8) ':';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4547, "append_character", Result))(Result, uc1x);
			}
			RTHOOK(8);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", arg1))(arg1, ui4_1x)).it_c1);
			ti4_1 = (EIF_INTEGER_32) (tc1);
			loc3 = (EIF_INTEGER_32) ti4_1;
			if (RTAL & CK_CHECK) {
				RTHOOK(9);
				RTCT(NULL, EX_CHECK);
				if ((EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 255L))) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(10);
			ui4_1 = ((EIF_INTEGER_32) 4L);
			ti4_1 = eif_bit_shift_right(loc3,ui4_1);
			ui4_1 = ((EIF_INTEGER_32) 15L);
			ti4_2 = eif_bit_and((ti4_1),ui4_1);
			tr1 = RTLN(eif_new_type(213, 0x00).id);
			*(EIF_INTEGER_32 *)tr1 = ti4_2;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4186, "to_hex_character", tr1))(tr1)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4547, "append_character", Result))(Result, uc1x);
			RTHOOK(11);
			ui4_1 = ((EIF_INTEGER_32) 15L);
			ti4_1 = eif_bit_and((loc3),ui4_1);
			tr1 = RTLN(eif_new_type(213, 0x00).id);
			*(EIF_INTEGER_32 *)tr1 = ti4_1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4186, "to_hex_character", tr1))(tr1)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4547, "append_character", Result))(Result, uc1x);
			RTHOOK(12);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uc1
#undef arg1
}

void EIF_Minit1072 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
