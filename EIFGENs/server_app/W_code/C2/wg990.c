/*
 * Code for class WGI_STANDALONE_SERVER_OBSERVER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F990_7270(EIF_REFERENCE);
extern EIF_TYPED_VALUE F990_7271(EIF_REFERENCE);
extern EIF_TYPED_VALUE F990_7272(EIF_REFERENCE);
extern EIF_TYPED_VALUE F990_7273(EIF_REFERENCE);
extern void F990_7274(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F990_7275(EIF_REFERENCE);
extern void F990_7276(EIF_REFERENCE);
extern void EIF_Minit990(void);

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

/* {WGI_STANDALONE_SERVER_OBSERVER}.started */
EIF_TYPED_VALUE F990_7270 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5128,Dtype(Current)));
	return r;
}


/* {WGI_STANDALONE_SERVER_OBSERVER}.stopped */
EIF_TYPED_VALUE F990_7271 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5129,Dtype(Current)));
	return r;
}


/* {WGI_STANDALONE_SERVER_OBSERVER}.terminated */
EIF_TYPED_VALUE F990_7272 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5130,Dtype(Current)));
	return r;
}


/* {WGI_STANDALONE_SERVER_OBSERVER}.port */
EIF_TYPED_VALUE F990_7273 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5131,Dtype(Current)));
	return r;
}


/* {WGI_STANDALONE_SERVER_OBSERVER}.on_launched */
void F990_7274 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "on_launched";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
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
	
	RTEAA(l_feature_name, 989, Current, 0, 1, 13440);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(989, Current, 13440);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5128, 0x04000000, 1); /* started */
	*(EIF_BOOLEAN *)(Current + RTWA(5128, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5131, 0x10000000, 1); /* port */
	*(EIF_INTEGER_32 *)(Current + RTWA(5131, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("started_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5128, dtype));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("port_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5131, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {WGI_STANDALONE_SERVER_OBSERVER}.on_stopped */
void F990_7275 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "on_stopped";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 989, Current, 0, 0, 13441);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(989, Current, 13441);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5129, 0x04000000, 1); /* stopped */
	*(EIF_BOOLEAN *)(Current + RTWA(5129, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("stopped_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5129, dtype));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {WGI_STANDALONE_SERVER_OBSERVER}.on_terminated */
void F990_7276 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "on_terminated";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 989, Current, 0, 0, 13442);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(989, Current, 13442);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5131, 0x10000000, 1); /* port */
	*(EIF_INTEGER_32 *)(Current + RTWA(5131, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5130, 0x04000000, 1); /* terminated */
	*(EIF_BOOLEAN *)(Current + RTWA(5130, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("terminated_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5130, dtype));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit990 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
