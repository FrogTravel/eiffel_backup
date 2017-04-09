/*
 * Class SQLITE_STATEMENT_ITERATION_CURSOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1189 [] = {0xFF01,227,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1189 [] = {0xFF01,244,1188,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1189 [] = {0xFF01,1188,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1189 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1189 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1189 [] = {0xFF01,1188,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1189 [] = {0xFF01,1188,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1189 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1189 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1189 [] = {0xFF01,227,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1189 [] = {0xFF01,227,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1189 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1189 [] = {0xFF01,1188,0xFFFF};
static const EIF_TYPE_INDEX egt_13_1189 [] = {0xFF01,1177,0xFFFF};
static const EIF_TYPE_INDEX egt_14_1189 [] = {0xFF01,1193,0xFFFF};
static const EIF_TYPE_INDEX egt_15_1189 [] = {0xFF01,1200,0xFF01,0,0xFFFF};
static const EIF_TYPE_INDEX egt_16_1189 [] = {0xFF01,263,0xFF01,1200,0xFF01,0,0xFFFF};
static const EIF_TYPE_INDEX egt_17_1189 [] = {0xFF01,1200,0xFF01,0,0xFFFF};
static const EIF_TYPE_INDEX egt_18_1189 [] = {0xFF01,1189,0xFFFF};
static const EIF_TYPE_INDEX egt_19_1189 [] = {263,0xFF01,1200,0xFF01,0,0xFFFF};
static const EIF_TYPE_INDEX egt_20_1189 [] = {0xFF02,1184,0xFFFF};
static const EIF_TYPE_INDEX egt_21_1189 [] = {0xFF01,269,0xFF01,1184,0xFFFF};
static const EIF_TYPE_INDEX egt_22_1189 [] = {0xFF01,1184,0xFFFF};
static const EIF_TYPE_INDEX egt_23_1189 [] = {0xFF01,1184,0xFFFF};
static const EIF_TYPE_INDEX egt_24_1189 [] = {0xFF01,270,0xFF01,1184,0xFFFF};
static const EIF_TYPE_INDEX egt_25_1189 [] = {0xFF01,1184,0xFFFF};


static const struct desc_info desc_1189[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1189), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1189), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1189), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1189), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1189), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1189), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1189), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1189), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1189), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1189), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1189), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1189), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0949 /*1188*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BD /*222*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1189), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 16338, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_1189), 16339, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16340, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_1189), 16385, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 16383, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 16384, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16347, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16348, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16349, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BD /*222*/), 16350, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16351, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0187 /*195*/), 16352, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16353, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16354, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16355, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16356, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16357, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BD /*222*/), 16358, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BD /*222*/), 16359, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16360, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16361, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16362, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16363, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BD /*222*/), 16364, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BD /*222*/), 16365, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BD /*222*/), 16366, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BD /*222*/), 16367, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BD /*222*/), 16368, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BD /*222*/), 16369, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BD /*222*/), 16370, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BD /*222*/), 16341, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16342, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16343, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16344, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16345, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16346, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16371, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BD /*222*/), 16372, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BD /*222*/), 16373, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16374, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16375, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16376, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16377, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16378, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16379, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BD /*222*/), 16380, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16381, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16382, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 16470, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 16471, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 16472, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 16473, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16474, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 16475, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16476, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_1189), 16480, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 16477, 0xFFFFFFFF},
	{EIF_GENERIC(egt_16_1189), 16478, 0xFFFFFFFF},
	{EIF_GENERIC(egt_17_1189), 16479, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16481, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16482, 0xFFFFFFFF},
	{EIF_GENERIC(egt_18_1189), 16483, 0},
	{EIF_GENERIC(egt_19_1189), 16484, 8},
	{EIF_NON_GENERIC(0x01AB /*213*/), 16487, 28},
	{EIF_NON_GENERIC(0x018D /*198*/), 16489, 24},
	{EIF_GENERIC(NULL), 16490, 0xFFFFFFFF},
	{EIF_GENERIC(egt_20_1189), 16492, 16},
	{EIF_GENERIC(egt_21_1189), 16493, 0xFFFFFFFF},
	{EIF_GENERIC(egt_22_1189), 16485, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 16488, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16491, 0xFFFFFFFF},
	{EIF_GENERIC(egt_23_1189), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_24_1189), 16486, 0xFFFFFFFF},
	{EIF_GENERIC(egt_25_1189), 0x00, 0xFFFFFFFF},
};
void Init1189(void)
{
	IDSC(desc_1189, 0, 1188);
	IDSC(desc_1189 + 1, 1, 1188);
	IDSC(desc_1189 + 32, 586, 1188);
	IDSC(desc_1189 + 35, 571, 1188);
	IDSC(desc_1189 + 38, 573, 1188);
	IDSC(desc_1189 + 68, 574, 1188);
	IDSC(desc_1189 + 80, 585, 1188);
	IDSC(desc_1189 + 87, 575, 1188);
	IDSC(desc_1189 + 91, 563, 1188);
	IDSC(desc_1189 + 100, 253, 1188);
	IDSC(desc_1189 + 104, 102, 1188);
}


#ifdef __cplusplus
}
#endif