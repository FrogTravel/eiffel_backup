/*
 * Class COMMANDS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1003 [] = {0xFF01,227,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1003 [] = {0xFF01,244,1002,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1003 [] = {0xFF01,1002,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1003 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1003 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1003 [] = {0xFF01,1002,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1003 [] = {0xFF01,1002,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1003 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1003 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1003 [] = {0xFF01,227,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1003 [] = {0xFF01,227,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1003 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1003 [] = {0xFF01,1002,0xFFFF};
static const EIF_TYPE_INDEX egt_13_1003 [] = {0xFF01,1071,0xFFFF};
static const EIF_TYPE_INDEX egt_14_1003 [] = {0xFF01,232,0xFFFF};


static const struct desc_info desc_1003[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1003), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1003), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1003), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1003), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1003), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1003), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1003), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1003), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1003), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1003), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1003), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1003), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x07D5 /*1002*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BD /*222*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1003), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13714, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_1003), 13715, 0},
	{EIF_GENERIC(egt_14_1003), 13716, 8},
	{EIF_NON_GENERIC(0x01AB /*213*/), 13717, 16},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13718, 0xFFFFFFFF},
};
void Init1003(void)
{
	IDSC(desc_1003, 0, 1002);
	IDSC(desc_1003 + 1, 1, 1002);
	IDSC(desc_1003 + 32, 406, 1002);
}


#ifdef __cplusplus
}
#endif