/*
 * Code for class SHA1
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F998_7360(EIF_REFERENCE);
extern EIF_TYPED_VALUE F998_7361(EIF_REFERENCE);
extern EIF_TYPED_VALUE F998_7362(EIF_REFERENCE);
extern EIF_TYPED_VALUE F998_7363(EIF_REFERENCE);
extern void F998_7364(EIF_REFERENCE);
extern void F998_7365(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F998_7366(EIF_REFERENCE);
extern EIF_TYPED_VALUE F998_7367(EIF_REFERENCE);
extern EIF_TYPED_VALUE F998_7368(EIF_REFERENCE);
extern EIF_TYPED_VALUE F998_7369(EIF_REFERENCE);
extern EIF_TYPED_VALUE F998_7370(EIF_REFERENCE);
extern EIF_TYPED_VALUE F998_7371(EIF_REFERENCE);
extern EIF_TYPED_VALUE F998_7372(EIF_REFERENCE);
extern EIF_TYPED_VALUE F998_7373(EIF_REFERENCE);
extern EIF_TYPED_VALUE F998_7374(EIF_REFERENCE);
extern void F998_7375(EIF_REFERENCE);
extern void F998_7376(EIF_REFERENCE);
extern void F998_7377(EIF_REFERENCE);
extern void F998_7378(EIF_REFERENCE);
extern void F998_7379(EIF_REFERENCE);
extern void F998_7380(EIF_REFERENCE);
extern void F998_7381(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F998_7382(EIF_REFERENCE);
extern EIF_TYPED_VALUE F998_7383(EIF_REFERENCE);
extern EIF_TYPED_VALUE F998_7384(EIF_REFERENCE);
extern EIF_TYPED_VALUE F998_7385(EIF_REFERENCE);
extern EIF_TYPED_VALUE F998_7386(EIF_REFERENCE);
extern EIF_TYPED_VALUE F998_7387(EIF_REFERENCE);
extern EIF_TYPED_VALUE F998_7388(EIF_REFERENCE);
extern EIF_TYPED_VALUE F998_7389(EIF_REFERENCE);
extern EIF_TYPED_VALUE F998_7390(EIF_REFERENCE);
extern void EIF_Minit998(void);

#ifdef __cplusplus
}
#endif

#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SHA1}.make */
void F998_7360 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 997, Current, 0, 0, 13527);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(997, Current, 13527);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5219, 0xF80001D9, 0); /* schedule */
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 80L);
	if (ui4_1< 0) {
		eraise ("non_negative_argument", EN_RT_CHECK);
	}
	tr1 = RTLNSP2(RTWCT(5219, dtype, Dftype(Current)).id,0,ui4_1,sizeof(EIF_NATURAL_32), EIF_TRUE);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2419, Dtype(tr1)))(tr1, uu4_1x, ui4_1x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5219, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5217, 0xF800022D, 0); /* buffer */
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5203, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	if (ui4_1< 0) {
		eraise ("non_negative_argument", EN_RT_CHECK);
	}
	tr1 = RTLNSP2(RTWCT(5217, dtype, Dftype(Current)).id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2419, Dtype(tr1)))(tr1, uu1_1x, ui4_1x);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5217, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5204, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
#undef uu4_1
#undef uu1_1
}

/* {SHA1}.digest */
EIF_TYPED_VALUE F998_7361 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "digest";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_64 loc2 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT64, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	
	RTEAA(l_feature_name, 997, Current, 7, 0, 13528);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(997, Current, 13528);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(5218, dtype));
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x3C000000, 1, 0); /* loc2 */
	loc2 = *(EIF_NATURAL_64 *)(Current + RTWA(5210, dtype));
	RTHOOK(3);
	RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
	loc3 = *(EIF_NATURAL_32 *)(Current + RTWA(5231, dtype));
	RTHOOK(4);
	RTDBGAL(Current, 4, 0x38000000, 1, 0); /* loc4 */
	loc4 = *(EIF_NATURAL_32 *)(Current + RTWA(5232, dtype));
	RTHOOK(5);
	RTDBGAL(Current, 5, 0x38000000, 1, 0); /* loc5 */
	loc5 = *(EIF_NATURAL_32 *)(Current + RTWA(5233, dtype));
	RTHOOK(6);
	RTDBGAL(Current, 6, 0x38000000, 1, 0); /* loc6 */
	loc6 = *(EIF_NATURAL_32 *)(Current + RTWA(5234, dtype));
	RTHOOK(7);
	RTDBGAL(Current, 7, 0x38000000, 1, 0); /* loc7 */
	loc7 = *(EIF_NATURAL_32 *)(Current + RTWA(5235, dtype));
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5213, dtype))(Current);
	RTHOOK(9);
	RTDBGAL(Current, 0, 0xF800022D, 0,0); /* Result */
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5202, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,557,204,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2419, Dtype(tr1)))(tr1, uu1_1x, ui4_1x);
	RTNHOOK(9,1);
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5231, dtype));
	uu4_1 = tu4_1;
	ur1 = Result;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5190, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(11);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5232, dtype));
	uu4_1 = tu4_1;
	ur1 = Result;
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5190, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(12);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5233, dtype));
	uu4_1 = tu4_1;
	ur1 = Result;
	ui4_1 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5190, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(13);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5234, dtype));
	uu4_1 = tu4_1;
	ur1 = Result;
	ui4_1 = ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5190, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(14);
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5235, dtype));
	uu4_1 = tu4_1;
	ur1 = Result;
	ui4_1 = ((EIF_INTEGER_32) 16L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5190, dtype))(Current, uu4_1x, ur1x, ui4_1x);
	RTHOOK(15);
	RTDBGAA(Current, dtype, 5218, 0x10000000, 1); /* buffer_offset */
	*(EIF_INTEGER_32 *)(Current + RTWA(5218, dtype)) = (EIF_INTEGER_32) loc1;
	RTHOOK(16);
	RTDBGAA(Current, dtype, 5210, 0x3C000000, 1); /* byte_count */
	*(EIF_NATURAL_64 *)(Current + RTWA(5210, dtype)) = (EIF_NATURAL_64) loc2;
	RTHOOK(17);
	RTDBGAA(Current, dtype, 5231, 0x38000000, 1); /* h1 */
	*(EIF_NATURAL_32 *)(Current + RTWA(5231, dtype)) = (EIF_NATURAL_32) loc3;
	RTHOOK(18);
	RTDBGAA(Current, dtype, 5232, 0x38000000, 1); /* h2 */
	*(EIF_NATURAL_32 *)(Current + RTWA(5232, dtype)) = (EIF_NATURAL_32) loc4;
	RTHOOK(19);
	RTDBGAA(Current, dtype, 5233, 0x38000000, 1); /* h3 */
	*(EIF_NATURAL_32 *)(Current + RTWA(5233, dtype)) = (EIF_NATURAL_32) loc5;
	RTHOOK(20);
	RTDBGAA(Current, dtype, 5234, 0x38000000, 1); /* h4 */
	*(EIF_NATURAL_32 *)(Current + RTWA(5234, dtype)) = (EIF_NATURAL_32) loc6;
	RTHOOK(21);
	RTDBGAA(Current, dtype, 5235, 0x38000000, 1); /* h5 */
	*(EIF_NATURAL_32 *)(Current + RTWA(5235, dtype)) = (EIF_NATURAL_32) loc7;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu1_1
}

/* {SHA1}.digest_count */
EIF_TYPED_VALUE F998_7362 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
	return r;
}

/* {SHA1}.block_size */
EIF_TYPED_VALUE F998_7363 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	return r;
}

/* {SHA1}.reset */
void F998_7364 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 997, Current, 0, 0, 13531);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(997, Current, 13531);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5217, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2448, "replace_all", tr1))(tr1, uu1_1x);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2448, "replace_all", tr1))(tr1, uu4_1x);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5210, 0x3C000000, 1); /* byte_count */
	*(EIF_NATURAL_64 *)(Current + RTWA(5210, dtype)) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5218, 0x10000000, 1); /* buffer_offset */
	*(EIF_INTEGER_32 *)(Current + RTWA(5218, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5220, 0x38000000, 1); /* a */
	*(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 5221, 0x38000000, 1); /* b */
	*(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 5222, 0x38000000, 1); /* c */
	*(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 5223, 0x38000000, 1); /* d */
	*(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 5224, 0x38000000, 1); /* e */
	*(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(10);
	RTDBGAA(Current, dtype, 5231, 0x38000000, 1); /* h1 */
	*(EIF_NATURAL_32 *)(Current + RTWA(5231, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1732584193L);
	RTHOOK(11);
	RTDBGAA(Current, dtype, 5232, 0x38000000, 1); /* h2 */
	*(EIF_NATURAL_32 *)(Current + RTWA(5232, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4023233417));
	RTHOOK(12);
	RTDBGAA(Current, dtype, 5233, 0x38000000, 1); /* h3 */
	*(EIF_NATURAL_32 *)(Current + RTWA(5233, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(2562383102));
	RTHOOK(13);
	RTDBGAA(Current, dtype, 5234, 0x38000000, 1); /* h4 */
	*(EIF_NATURAL_32 *)(Current + RTWA(5234, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 271733878L);
	RTHOOK(14);
	RTDBGAA(Current, dtype, 5235, 0x38000000, 1); /* h5 */
	*(EIF_NATURAL_32 *)(Current + RTWA(5235, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3285377520));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef uu4_1
#undef uu1_1
}

/* {SHA1}.update_from_byte */
void F998_7365 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_from_byte";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_n1
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 997, Current, 1, 1, 13532);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(997, Current, 13532);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5218, dtype));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF800022D, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5217, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	uu1_1 = arg1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5218, dtype));
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2429, "put", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5218, 0x10000000, 1); /* buffer_offset */
	(*(EIF_INTEGER_32 *)(Current + RTWA(5218, dtype)))++;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5210, 0x3C000000, 1); /* byte_count */
	(*(EIF_NATURAL_64 *)(Current + RTWA(5210, dtype))) += (EIF_NATURAL_64) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5218, dtype));
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2415, "upper", loc1))(loc1)).it_i4);
	if ((EIF_BOOLEAN) (ti4_2 > ti4_3)) {
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5225, dtype))(Current);
		RTHOOK(7);
		RTDBGAA(Current, dtype, 5218, 0x10000000, 1); /* buffer_offset */
		*(EIF_INTEGER_32 *)(Current + RTWA(5218, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("buffer_offset_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5218, dtype));
		RTCO(tr1);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5203, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) % ti4_3))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uu1_1
#undef arg1
}

/* {SHA1}.schedule_buffer */
void F998_7366 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "schedule_buffer";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,loc5);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 997, Current, 5, 0, 13533);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(997, Current, 13533);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("buffer_offset_reset", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5218, dtype));
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 64L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 4, 0xF800022D, 0, 0); /* loc4 */
	loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5217, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	RTDBGAL(Current, 5, 0xF80001D9, 0, 0); /* loc5 */
	loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2414, "lower", loc5))(loc5)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2414, "lower", loc4))(loc4)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2415, "upper", loc4))(loc4)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 > loc3)) break;
		RTHOOK(8);
		ur1 = loc4;
		ui4_1 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5188, dtype))(Current, ur1x, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2429, "put", loc5))(loc5, uu4_1x, ui4_1x);
		RTHOOK(9);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1 += ((EIF_INTEGER_32) 4L);
		RTHOOK(10);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uu4_1
}

/* {SHA1}.buffer */
EIF_TYPED_VALUE F998_7367 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5217,Dtype(Current)));
	return r;
}


/* {SHA1}.buffer_offset */
EIF_TYPED_VALUE F998_7368 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5218,Dtype(Current)));
	return r;
}


/* {SHA1}.schedule */
EIF_TYPED_VALUE F998_7369 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5219,Dtype(Current)));
	return r;
}


/* {SHA1}.a */
EIF_TYPED_VALUE F998_7370 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5220,Dtype(Current)));
	return r;
}


/* {SHA1}.b */
EIF_TYPED_VALUE F998_7371 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5221,Dtype(Current)));
	return r;
}


/* {SHA1}.c */
EIF_TYPED_VALUE F998_7372 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5222,Dtype(Current)));
	return r;
}


/* {SHA1}.d */
EIF_TYPED_VALUE F998_7373 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5223,Dtype(Current)));
	return r;
}


/* {SHA1}.e */
EIF_TYPED_VALUE F998_7374 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5224,Dtype(Current)));
	return r;
}


/* {SHA1}.process_block */
void F998_7375 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "process_block";
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 997, Current, 0, 0, 13542);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(997, Current, 13542);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5216, dtype))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5230, dtype))(Current);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5220, 0x38000000, 1); /* a */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5231, dtype));
	*(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5221, 0x38000000, 1); /* b */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5232, dtype));
	*(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5222, 0x38000000, 1); /* c */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5233, dtype));
	*(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 5223, 0x38000000, 1); /* d */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5234, dtype));
	*(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 5224, 0x38000000, 1); /* e */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5235, dtype));
	*(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype)) = (EIF_NATURAL_32) tu4_1;
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5229, dtype))(Current);
	RTHOOK(9);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5228, dtype))(Current);
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5227, dtype))(Current);
	RTHOOK(11);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5226, dtype))(Current);
	RTHOOK(12);
	RTDBGAA(Current, dtype, 5231, 0x38000000, 1); /* h1 */
	tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
	(*(EIF_NATURAL_32 *)(Current + RTWA(5231, dtype))) += tu4_2;
	RTHOOK(13);
	RTDBGAA(Current, dtype, 5232, 0x38000000, 1); /* h2 */
	tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
	(*(EIF_NATURAL_32 *)(Current + RTWA(5232, dtype))) += tu4_2;
	RTHOOK(14);
	RTDBGAA(Current, dtype, 5233, 0x38000000, 1); /* h3 */
	tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
	(*(EIF_NATURAL_32 *)(Current + RTWA(5233, dtype))) += tu4_2;
	RTHOOK(15);
	RTDBGAA(Current, dtype, 5234, 0x38000000, 1); /* h4 */
	tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
	(*(EIF_NATURAL_32 *)(Current + RTWA(5234, dtype))) += tu4_2;
	RTHOOK(16);
	RTDBGAA(Current, dtype, 5235, 0x38000000, 1); /* h5 */
	tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
	(*(EIF_NATURAL_32 *)(Current + RTWA(5235, dtype))) += tu4_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {SHA1}.do_round_4 */
void F998_7376 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "do_round_4";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_NATURAL_32 tu4_5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 997, Current, 2, 0, 13543);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(997, Current, 13543);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 60L);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 4L))) break;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 5224, 0x38000000, 1); /* e */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5193, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5239, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(5);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 5221, 0x38000000, 1); /* b */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 5223, 0x38000000, 1); /* d */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5193, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5239, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(8);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(9);
		RTDBGAA(Current, dtype, 5220, 0x38000000, 1); /* a */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		RTDBGAA(Current, dtype, 5222, 0x38000000, 1); /* c */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5193, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5239, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(11);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(12);
		RTDBGAA(Current, dtype, 5224, 0x38000000, 1); /* e */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(13);
		RTDBGAA(Current, dtype, 5221, 0x38000000, 1); /* b */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5193, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5239, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(14);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(15);
		RTDBGAA(Current, dtype, 5223, 0x38000000, 1); /* d */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(16);
		RTDBGAA(Current, dtype, 5220, 0x38000000, 1); /* a */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5193, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5239, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(17);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(18);
		RTDBGAA(Current, dtype, 5222, 0x38000000, 1); /* c */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(19);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
}

/* {SHA1}.do_round_3 */
void F998_7377 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "do_round_3";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_NATURAL_32 tu4_5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 997, Current, 2, 0, 13544);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(997, Current, 13544);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 40L);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 4L))) break;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 5224, 0x38000000, 1); /* e */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5192, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5238, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(5);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 5221, 0x38000000, 1); /* b */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 5223, 0x38000000, 1); /* d */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5192, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5238, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(8);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(9);
		RTDBGAA(Current, dtype, 5220, 0x38000000, 1); /* a */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		RTDBGAA(Current, dtype, 5222, 0x38000000, 1); /* c */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5192, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5238, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(11);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(12);
		RTDBGAA(Current, dtype, 5224, 0x38000000, 1); /* e */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(13);
		RTDBGAA(Current, dtype, 5221, 0x38000000, 1); /* b */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5192, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5238, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(14);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(15);
		RTDBGAA(Current, dtype, 5223, 0x38000000, 1); /* d */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(16);
		RTDBGAA(Current, dtype, 5220, 0x38000000, 1); /* a */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5192, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5238, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(17);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(18);
		RTDBGAA(Current, dtype, 5222, 0x38000000, 1); /* c */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(19);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
}

/* {SHA1}.do_round_2 */
void F998_7378 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "do_round_2";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_NATURAL_32 tu4_5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 997, Current, 2, 0, 13545);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(997, Current, 13545);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 4L))) break;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 5224, 0x38000000, 1); /* e */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5193, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5237, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(5);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 5221, 0x38000000, 1); /* b */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 5223, 0x38000000, 1); /* d */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5193, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5237, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(8);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(9);
		RTDBGAA(Current, dtype, 5220, 0x38000000, 1); /* a */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		RTDBGAA(Current, dtype, 5222, 0x38000000, 1); /* c */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5193, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5237, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(11);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(12);
		RTDBGAA(Current, dtype, 5224, 0x38000000, 1); /* e */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(13);
		RTDBGAA(Current, dtype, 5221, 0x38000000, 1); /* b */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5193, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5237, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(14);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(15);
		RTDBGAA(Current, dtype, 5223, 0x38000000, 1); /* d */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(16);
		RTDBGAA(Current, dtype, 5220, 0x38000000, 1); /* a */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5193, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5237, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(17);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(18);
		RTDBGAA(Current, dtype, 5222, 0x38000000, 1); /* c */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(19);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
}

/* {SHA1}.do_round_1 */
void F998_7379 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "do_round_1";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_NATURAL_32 tu4_5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 997, Current, 2, 0, 13546);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(997, Current, 13546);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 4L))) break;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 5224, 0x38000000, 1); /* e */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5191, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5236, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(5);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 5221, 0x38000000, 1); /* b */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 5223, 0x38000000, 1); /* d */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5191, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5236, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(8);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(9);
		RTDBGAA(Current, dtype, 5220, 0x38000000, 1); /* a */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(10);
		RTDBGAA(Current, dtype, 5222, 0x38000000, 1); /* c */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5191, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5236, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(11);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(12);
		RTDBGAA(Current, dtype, 5224, 0x38000000, 1); /* e */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(13);
		RTDBGAA(Current, dtype, 5221, 0x38000000, 1); /* b */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5191, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5236, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(14);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(15);
		RTDBGAA(Current, dtype, 5223, 0x38000000, 1); /* d */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(16);
		RTDBGAA(Current, dtype, 5220, 0x38000000, 1); /* a */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype));
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5221, dtype));
		uu4_1 = tu4_2;
		ui4_1 = ((EIF_INTEGER_32) 5L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_1 = tu4_3;
		tu4_4 = *(EIF_NATURAL_32 *)(Current + RTWA(5223, dtype));
		uu4_2 = tu4_4;
		tu4_5 = *(EIF_NATURAL_32 *)(Current + RTWA(5224, dtype));
		uu4_3 = tu4_5;
		tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5191, dtype))(Current, uu4_1x, uu4_2x, uu4_3x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc2;
		tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tu4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5236, dtype))(Current)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5220, dtype)) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_2) + tu4_3) + tu4_4) + tu4_5);
		RTHOOK(17);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(18);
		RTDBGAA(Current, dtype, 5222, 0x38000000, 1); /* c */
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype));
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 30L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5222, dtype)) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(19);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
}

/* {SHA1}.expand_word_block */
void F998_7380 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "expand_word_block";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	
	RTEAA(l_feature_name, 997, Current, 2, 0, 13547);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(997, Current, 13547);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	for (;;) {
		RTHOOK(2);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 80L))) break;
		RTHOOK(3);
		RTDBGAL(Current, 2, 0x38000000, 1, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 3L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 8L));
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		uu4_1 = tu4_2;
		tu4_2 = eif_bit_xor(tu4_1,uu4_1);
		RTNHOOK(3,1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 14L));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		tu4_1 = eif_bit_xor(tu4_2,uu4_1);
		RTNHOOK(3,2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 16L));
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2413, "item", tr1))(tr1, ui4_1x)).it_n4);
		uu4_1 = tu4_2;
		tu4_2 = eif_bit_xor(tu4_1,uu4_1);
		loc2 = (EIF_NATURAL_32) tu4_2;
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5219, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		uu4_1 = loc2;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, uu4_1x, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2429, "put", tr1))(tr1, uu4_1x, ui4_1x);
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
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
}

/* {SHA1}.process_length */
void F998_7381 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "process_length";
	RTEX;
#define arg1 arg1x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n8 = * (EIF_NATURAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 997, Current, 0, 1, 13548);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(997, Current, 13548);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = ((EIF_INTEGER_32) 56L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5205, dtype))(Current, uu1_1x);
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 48L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5205, dtype))(Current, uu1_1x);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 40L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5205, dtype))(Current, uu1_1x);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 32L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5205, dtype))(Current, uu1_1x);
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 24L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5205, dtype))(Current, uu1_1x);
	RTHOOK(6);
	ui4_1 = ((EIF_INTEGER_32) 16L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5205, dtype))(Current, uu1_1x);
	RTHOOK(7);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tu8_1 = eif_bit_shift_right(arg1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) tu8_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5205, dtype))(Current, uu1_1x);
	RTHOOK(8);
	tu1_1 = (EIF_NATURAL_8) arg1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5205, dtype))(Current, uu1_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef uu1_1
#undef arg1
}

/* {SHA1}.h1 */
EIF_TYPED_VALUE F998_7382 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5231,Dtype(Current)));
	return r;
}


/* {SHA1}.h2 */
EIF_TYPED_VALUE F998_7383 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5232,Dtype(Current)));
	return r;
}


/* {SHA1}.h3 */
EIF_TYPED_VALUE F998_7384 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5233,Dtype(Current)));
	return r;
}


/* {SHA1}.h4 */
EIF_TYPED_VALUE F998_7385 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5234,Dtype(Current)));
	return r;
}


/* {SHA1}.h5 */
EIF_TYPED_VALUE F998_7386 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5235,Dtype(Current)));
	return r;
}


/* {SHA1}.k1 */
EIF_TYPED_VALUE F998_7387 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 1518500249U);
	return r;
}

/* {SHA1}.k2 */
EIF_TYPED_VALUE F998_7388 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 1859775393U);
	return r;
}

/* {SHA1}.k3 */
EIF_TYPED_VALUE F998_7389 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 2400959708U);
	return r;
}

/* {SHA1}.k4 */
EIF_TYPED_VALUE F998_7390 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 3395469782U);
	return r;
}

void EIF_Minit998 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
