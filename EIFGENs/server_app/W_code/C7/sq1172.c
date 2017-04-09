/*
 * Code for class SQLITE_RESULT_CODE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1172_10260(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10261(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10262(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10263(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10264(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10265(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10266(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10267(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10268(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10269(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10270(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10271(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10272(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10273(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10274(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10275(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10276(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10277(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10278(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10279(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10280(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10281(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10282(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10283(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10284(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10285(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10286(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10287(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10288(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10289(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10290(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1172_10291(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1172(void);

#ifdef __cplusplus
}
#endif

#include <sqlite3.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_RESULT_CODE}.mask */
EIF_TYPED_VALUE F1172_10260 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 255L);
	return r;
}

/* {SQLITE_RESULT_CODE}.failure_mask */
EIF_TYPED_VALUE F1172_10261 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	return r;
}

/* {SQLITE_RESULT_CODE}.ok */
EIF_TYPED_VALUE F1172_10262 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ok";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16262);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16262);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_OK;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_error */
EIF_TYPED_VALUE F1172_10263 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_error";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16263);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16263);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_ERROR;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_internal */
EIF_TYPED_VALUE F1172_10264 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_internal";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16264);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16264);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_INTERNAL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_perm */
EIF_TYPED_VALUE F1172_10265 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_perm";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16265);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16265);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_PERM;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_abort */
EIF_TYPED_VALUE F1172_10266 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_abort";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16266);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16266);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_ABORT;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_busy */
EIF_TYPED_VALUE F1172_10267 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_busy";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16267);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16267);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_BUSY;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_locked */
EIF_TYPED_VALUE F1172_10268 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_locked";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16268);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16268);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_LOCKED;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_no_mem */
EIF_TYPED_VALUE F1172_10269 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_no_mem";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16269);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16269);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_NOMEM;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_read_only */
EIF_TYPED_VALUE F1172_10270 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_read_only";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16270);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16270);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_READONLY;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_interrupt */
EIF_TYPED_VALUE F1172_10271 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_interrupt";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16271);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16271);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_INTERRUPT;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_io_err */
EIF_TYPED_VALUE F1172_10272 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_io_err";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16272);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16272);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_IOERR;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_corrupt */
EIF_TYPED_VALUE F1172_10273 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_corrupt";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16273);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16273);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_CORRUPT;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_not_found */
EIF_TYPED_VALUE F1172_10274 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_not_found";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16274);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16274);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_NOTFOUND;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_full */
EIF_TYPED_VALUE F1172_10275 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_full";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16275);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16275);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_FULL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_cant_open */
EIF_TYPED_VALUE F1172_10276 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_cant_open";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16276);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16276);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_CANTOPEN;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_protocol */
EIF_TYPED_VALUE F1172_10277 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_protocol";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16277);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16277);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_PROTOCOL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_empty */
EIF_TYPED_VALUE F1172_10278 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_empty";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16278);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16278);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_EMPTY;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_schema */
EIF_TYPED_VALUE F1172_10279 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_schema";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16279);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16279);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_SCHEMA;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_too_big */
EIF_TYPED_VALUE F1172_10280 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_too_big";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16280);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16280);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_TOOBIG;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_constraint */
EIF_TYPED_VALUE F1172_10281 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_constraint";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16281);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16281);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_CONSTRAINT;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_mismatch */
EIF_TYPED_VALUE F1172_10282 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_mismatch";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16282);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16282);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_MISMATCH;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_misuse */
EIF_TYPED_VALUE F1172_10283 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_misuse";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16283);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16283);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_MISUSE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_nolfs */
EIF_TYPED_VALUE F1172_10284 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_nolfs";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16284);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16284);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_NOLFS;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_auth */
EIF_TYPED_VALUE F1172_10285 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_auth";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16285);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16285);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_AUTH;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_format */
EIF_TYPED_VALUE F1172_10286 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_format";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16286);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16286);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_FORMAT;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_range */
EIF_TYPED_VALUE F1172_10287 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_range";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16287);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16287);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_RANGE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.e_not_a_db */
EIF_TYPED_VALUE F1172_10288 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "e_not_a_db";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16288);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16288);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_NOTADB;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.row */
EIF_TYPED_VALUE F1172_10289 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "row";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16289);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16289);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_ROW;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.done */
EIF_TYPED_VALUE F1172_10290 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "done";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 0, 16290);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1171, Current, 16290);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SQLITE_DONE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SQLITE_RESULT_CODE}.is_valid_result_code */
EIF_TYPED_VALUE F1172_10291 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid_result_code";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN tb10;
	EIF_BOOLEAN tb11;
	EIF_BOOLEAN tb12;
	EIF_BOOLEAN tb13;
	EIF_BOOLEAN tb14;
	EIF_BOOLEAN tb15;
	EIF_BOOLEAN tb16;
	EIF_BOOLEAN tb17;
	EIF_BOOLEAN tb18;
	EIF_BOOLEAN tb19;
	EIF_BOOLEAN tb20;
	EIF_BOOLEAN tb21;
	EIF_BOOLEAN tb22;
	EIF_BOOLEAN tb23;
	EIF_BOOLEAN tb24;
	EIF_BOOLEAN tb25;
	EIF_BOOLEAN tb26;
	EIF_BOOLEAN tb27;
	EIF_BOOLEAN tb28;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1171, Current, 0, 1, 16291);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1171, Current, 16291);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tb4 = '\01';
	tb5 = '\01';
	tb6 = '\01';
	tb7 = '\01';
	tb8 = '\01';
	tb9 = '\01';
	tb10 = '\01';
	tb11 = '\01';
	tb12 = '\01';
	tb13 = '\01';
	tb14 = '\01';
	tb15 = '\01';
	tb16 = '\01';
	tb17 = '\01';
	tb18 = '\01';
	tb19 = '\01';
	tb20 = '\01';
	tb21 = '\01';
	tb22 = '\01';
	tb23 = '\01';
	tb24 = '\01';
	tb25 = '\01';
	tb26 = '\01';
	tb27 = '\01';
	tb28 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7661, dtype))(Current)).it_i4);
	if (!(EIF_BOOLEAN)(arg1 == ti4_1)) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7662, dtype))(Current)).it_i4);
		tb28 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb28) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7663, dtype))(Current)).it_i4);
		tb27 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb27) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7664, dtype))(Current)).it_i4);
		tb26 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb26) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7665, dtype))(Current)).it_i4);
		tb25 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb25) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7666, dtype))(Current)).it_i4);
		tb24 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb24) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7667, dtype))(Current)).it_i4);
		tb23 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb23) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7668, dtype))(Current)).it_i4);
		tb22 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb22) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7669, dtype))(Current)).it_i4);
		tb21 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb21) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7670, dtype))(Current)).it_i4);
		tb20 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb20) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7671, dtype))(Current)).it_i4);
		tb19 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb19) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7672, dtype))(Current)).it_i4);
		tb18 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb18) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7673, dtype))(Current)).it_i4);
		tb17 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb17) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7674, dtype))(Current)).it_i4);
		tb16 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb16) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7675, dtype))(Current)).it_i4);
		tb15 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb15) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7676, dtype))(Current)).it_i4);
		tb14 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb14) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7677, dtype))(Current)).it_i4);
		tb13 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb13) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7678, dtype))(Current)).it_i4);
		tb12 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb12) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7679, dtype))(Current)).it_i4);
		tb11 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb11) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7680, dtype))(Current)).it_i4);
		tb10 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb10) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7681, dtype))(Current)).it_i4);
		tb9 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb9) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7682, dtype))(Current)).it_i4);
		tb8 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb8) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7683, dtype))(Current)).it_i4);
		tb7 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb7) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7684, dtype))(Current)).it_i4);
		tb6 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb6) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7685, dtype))(Current)).it_i4);
		tb5 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb5) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7686, dtype))(Current)).it_i4);
		tb4 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb4) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7687, dtype))(Current)).it_i4);
		tb3 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb3) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7688, dtype))(Current)).it_i4);
		tb2 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb2) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7689, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

void EIF_Minit1172 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
