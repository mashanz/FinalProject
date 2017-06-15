/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/REPO/FinalProject/Code/fpga/spartan3a/controller.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {32U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {40U, 0U};
static unsigned int ng9[] = {9U, 0U};
static unsigned int ng10[] = {11U, 0U};
static unsigned int ng11[] = {12U, 0U};
static unsigned int ng12[] = {6U, 0U};
static unsigned int ng13[] = {8U, 0U};
static unsigned int ng14[] = {7U, 0U};
static unsigned int ng15[] = {10U, 0U};
static int ng16[] = {0, 0};
static int ng17[] = {1, 0};



static void Always_81_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 5884U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 6656);
    *((int *)t2) = 1;
    t3 = (t0 + 5912);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 2372U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(82, ng0);
    t11 = (t0 + 4992);
    t12 = (t11 + 36U);
    t13 = *((char **)t12);
    t14 = (t0 + 5084);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 4);
    goto LAB7;

}

static void Always_83_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 6028U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 6664);
    *((int *)t2) = 1;
    t3 = (t0 + 6056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 2280U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(84, ng0);
    t11 = (t0 + 5084);
    t12 = (t11 + 36U);
    t13 = *((char **)t12);
    t14 = (t0 + 5176);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 4);
    goto LAB7;

}

static void Always_87_2(char *t0)
{
    char t14[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 6172U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 6672);
    *((int *)t2) = 1;
    t3 = (t0 + 6200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 2464U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 5176);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB8:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t13 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB33;

LAB34:
LAB36:
LAB35:    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4992);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB37:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(90, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4992);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB7;

LAB9:    xsi_set_current_line(93, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 4992);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB37;

LAB11:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 4992);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB37;

LAB13:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 4992);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB37;

LAB15:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 4992);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB37;

LAB17:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 3016U);
    t5 = *((char **)t3);
    t3 = (t0 + 2924U);
    t11 = *((char **)t3);
    t3 = (t0 + 2832U);
    t12 = *((char **)t3);
    t3 = (t0 + 2740U);
    t15 = *((char **)t3);
    t3 = (t0 + 2648U);
    t16 = *((char **)t3);
    t3 = (t0 + 2556U);
    t17 = *((char **)t3);
    xsi_vlogtype_concat(t14, 6, 6, 6U, t17, 1, t16, 1, t15, 1, t12, 1, t11, 1, t5, 1);

LAB38:    t3 = ((char*)((ng6)));
    t18 = xsi_vlog_unsigned_case_compare(t14, 6, t3, 6);
    if (t18 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t14, 6, t2, 6);
    if (t13 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t14, 6, t2, 6);
    if (t13 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t14, 6, t2, 6);
    if (t13 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t14, 6, t2, 6);
    if (t13 == 1)
        goto LAB47;

LAB48:
LAB50:
LAB49:    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4992);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB51:    goto LAB37;

LAB19:    xsi_set_current_line(111, ng0);
    t3 = (t0 + 3016U);
    t5 = *((char **)t3);
    t3 = (t0 + 2924U);
    t11 = *((char **)t3);
    t3 = (t0 + 2832U);
    t12 = *((char **)t3);
    t3 = (t0 + 2740U);
    t15 = *((char **)t3);
    t3 = (t0 + 2648U);
    t16 = *((char **)t3);
    t3 = (t0 + 2556U);
    t17 = *((char **)t3);
    xsi_vlogtype_concat(t21, 6, 6, 6U, t17, 1, t16, 1, t15, 1, t12, 1, t11, 1, t5, 1);

LAB52:    t3 = ((char*)((ng6)));
    t18 = xsi_vlog_unsigned_case_compare(t21, 6, t3, 6);
    if (t18 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t21, 6, t2, 6);
    if (t13 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB37;

LAB21:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 4992);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB37;

LAB23:    xsi_set_current_line(118, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 4992);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB37;

LAB25:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 4992);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB37;

LAB27:    xsi_set_current_line(120, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 4992);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB37;

LAB29:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 4992);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB37;

LAB31:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 4992);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB37;

LAB33:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 4992);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB37;

LAB39:    xsi_set_current_line(100, ng0);
    t19 = ((char*)((ng7)));
    t20 = (t0 + 4992);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 4);
    goto LAB51;

LAB41:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 4992);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB51;

LAB43:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 4992);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB51;

LAB45:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 4992);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB51;

LAB47:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 4992);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB51;

LAB53:    xsi_set_current_line(112, ng0);
    t19 = ((char*)((ng12)));
    t20 = (t0 + 4992);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 4);
    goto LAB57;

LAB55:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 4992);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB57;

}

static void Always_130_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 6316U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 6680);
    *((int *)t2) = 1;
    t3 = (t0 + 6344);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(131, ng0);

LAB5:    xsi_set_current_line(133, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t0 + 3428);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 3612);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 3796);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 3888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5268);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 3980);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4348);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4164);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4532);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4716);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4900);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 5176);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:
LAB34:
LAB33:    xsi_set_current_line(239, ng0);

LAB49:
LAB35:    goto LAB2;

LAB7:    xsi_set_current_line(149, ng0);

LAB36:    xsi_set_current_line(150, ng0);
    t7 = ((char*)((ng17)));
    t8 = (t0 + 3428);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4716);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3612);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4348);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4164);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 5268);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4532);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB35;

LAB9:    xsi_set_current_line(159, ng0);

LAB37:    xsi_set_current_line(160, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 3428);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4716);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4348);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4164);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 5268);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4532);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB35;

LAB11:    xsi_set_current_line(169, ng0);

LAB38:    xsi_set_current_line(170, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 3428);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4716);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3796);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4348);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4164);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 5268);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4532);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB35;

LAB13:    xsi_set_current_line(179, ng0);

LAB39:    xsi_set_current_line(180, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 3428);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4716);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4348);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4164);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 5268);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4532);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB35;

LAB15:    xsi_set_current_line(189, ng0);

LAB40:    xsi_set_current_line(190, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 4256);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4348);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4164);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB35;

LAB17:    xsi_set_current_line(194, ng0);

LAB41:    xsi_set_current_line(195, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 4256);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4348);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4164);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB35;

LAB19:    xsi_set_current_line(199, ng0);

LAB42:    xsi_set_current_line(200, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 3428);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4716);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB35;

LAB21:    xsi_set_current_line(203, ng0);

LAB43:    xsi_set_current_line(204, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 4900);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3980);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB35;

LAB23:    xsi_set_current_line(208, ng0);

LAB44:    xsi_set_current_line(209, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 3520);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4716);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB35;

LAB25:    xsi_set_current_line(212, ng0);

LAB45:    xsi_set_current_line(213, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 4256);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4348);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4164);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB35;

LAB27:    xsi_set_current_line(217, ng0);

LAB46:    xsi_set_current_line(218, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 4900);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3980);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB35;

LAB29:    xsi_set_current_line(222, ng0);

LAB47:    xsi_set_current_line(223, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 4256);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4348);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4164);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 5360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4532);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB35;

LAB31:    xsi_set_current_line(229, ng0);

LAB48:    xsi_set_current_line(230, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 5268);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4164);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4532);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB35;

}

static void Cont_245_4(char *t0)
{
    char t10[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;

LAB0:    t1 = (t0 + 6460U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(245, ng0);
    t2 = (t0 + 5268);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 5360);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t8 = (t0 + 3108U);
    t9 = *((char **)t8);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t9);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t8 = (t7 + 4);
    t14 = (t9 + 4);
    t15 = (t10 + 4);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB4;

LAB5:
LAB6:    t42 = *((unsigned int *)t4);
    t43 = *((unsigned int *)t10);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = (t4 + 4);
    t46 = (t10 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB7;

LAB8:
LAB9:    t69 = (t0 + 6732);
    t70 = (t69 + 32U);
    t71 = *((char **)t70);
    t72 = (t71 + 40U);
    t73 = *((char **)t72);
    memset(t73, 0, 8);
    t74 = 1U;
    t75 = t74;
    t76 = (t41 + 4);
    t77 = *((unsigned int *)t41);
    t74 = (t74 & t77);
    t78 = *((unsigned int *)t76);
    t75 = (t75 & t78);
    t79 = (t73 + 4);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t80 | t74);
    t81 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t81 | t75);
    xsi_driver_vfirst_trans(t69, 0, 0);
    t82 = (t0 + 6688);
    *((int *)t82) = 1;

LAB1:    return;
LAB4:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t10) = (t21 | t22);
    t23 = (t7 + 4);
    t24 = (t9 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    goto LAB6;

LAB7:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t4 + 4);
    t56 = (t10 + 4);
    t57 = *((unsigned int *)t55);
    t58 = (~(t57));
    t59 = *((unsigned int *)t4);
    t60 = (t59 & t58);
    t61 = *((unsigned int *)t56);
    t62 = (~(t61));
    t63 = *((unsigned int *)t10);
    t64 = (t63 & t62);
    t65 = (~(t60));
    t66 = (~(t64));
    t67 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t67 & t65);
    t68 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t68 & t66);
    goto LAB9;

}


extern void work_m_00000000000267247140_3092946469_init()
{
	static char *pe[] = {(void *)Always_81_0,(void *)Always_83_1,(void *)Always_87_2,(void *)Always_130_3,(void *)Cont_245_4};
	xsi_register_didat("work_m_00000000000267247140_3092946469", "isim/controller_tb_isim_beh.exe.sim/work/m_00000000000267247140_3092946469.didat");
	xsi_register_executes(pe);
}
