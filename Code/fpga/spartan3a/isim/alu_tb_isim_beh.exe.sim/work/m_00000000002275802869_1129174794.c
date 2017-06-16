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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/REPO/FinalProject/Code/fpga/spartan3a/protection.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {7, 0};
static int ng6[] = {6, 0};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {2, 0};
static int ng9[] = {5, 0};
static int ng10[] = {3, 0};



static void Always_11_0(char *t0)
{
    char t16[8];
    char t18[8];
    char t19[8];
    char t20[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t17;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    char *t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(11, ng0);

LAB5:    xsi_set_current_line(12, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(13, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB12;

LAB13:
LAB14:    goto LAB11;

LAB9:    xsi_set_current_line(14, ng0);

LAB15:    xsi_set_current_line(15, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t7 = (t16 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 6);
    *((unsigned int *)t16) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 6);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t13 & 3U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 3U);
    t14 = ((char*)((ng4)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t16, 32, t14, 32);
    t15 = (t0 + 2248);
    t22 = (t0 + 2248);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng5)));
    t26 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t19, t20, t21, ((int*)(t24)), 2, t25, 32, 1, t26, 32, 1);
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t27);
    t6 = (!(t28));
    t29 = (t20 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t6 && t31);
    t33 = (t21 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB19;

LAB20:
LAB18:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t7 = (t16 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 6);
    *((unsigned int *)t16) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 6);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t13 & 3U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 3U);
    t14 = ((char*)((ng7)));
    memset(t18, 0, 8);
    t15 = (t16 + 4);
    t22 = (t14 + 4);
    t28 = *((unsigned int *)t16);
    t30 = *((unsigned int *)t14);
    t34 = (t28 ^ t30);
    t37 = *((unsigned int *)t15);
    t39 = *((unsigned int *)t22);
    t40 = (t37 ^ t39);
    t43 = (t34 | t40);
    t44 = *((unsigned int *)t15);
    t45 = *((unsigned int *)t22);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB24;

LAB21:    if (t46 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t18) = 1;

LAB24:    t24 = (t18 + 4);
    t49 = *((unsigned int *)t24);
    t50 = (~(t49));
    t51 = *((unsigned int *)t18);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t7 = (t16 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 6);
    *((unsigned int *)t16) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 6);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t13 & 3U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 3U);
    t14 = ((char*)((ng3)));
    memset(t18, 0, 8);
    t15 = (t16 + 4);
    t22 = (t14 + 4);
    t28 = *((unsigned int *)t16);
    t30 = *((unsigned int *)t14);
    t34 = (t28 ^ t30);
    t37 = *((unsigned int *)t15);
    t39 = *((unsigned int *)t22);
    t40 = (t37 ^ t39);
    t43 = (t34 | t40);
    t44 = *((unsigned int *)t15);
    t45 = *((unsigned int *)t22);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB38;

LAB35:    if (t46 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t18) = 1;

LAB38:    t24 = (t18 + 4);
    t49 = *((unsigned int *)t24);
    t50 = (~(t49));
    t51 = *((unsigned int *)t18);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB39;

LAB40:
LAB41:    goto LAB11;

LAB12:    xsi_set_current_line(13, ng0);
    t14 = ((char*)((ng2)));
    t15 = (t0 + 2248);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 8);
    goto LAB14;

LAB16:    xsi_set_current_line(15, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    goto LAB18;

LAB19:    t37 = *((unsigned int *)t21);
    t38 = (t37 + 0);
    t39 = *((unsigned int *)t19);
    t40 = *((unsigned int *)t20);
    t41 = (t39 - t40);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t15, t18, t38, *((unsigned int *)t20), t42);
    goto LAB20;

LAB23:    t23 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(18, ng0);

LAB28:    xsi_set_current_line(19, ng0);
    t25 = (t0 + 1528U);
    t26 = *((char **)t25);
    t25 = (t0 + 2248);
    t27 = (t0 + 2248);
    t29 = (t27 + 72U);
    t33 = *((char **)t29);
    t54 = ((char*)((ng8)));
    t55 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t19, t20, t21, ((int*)(t33)), 2, t54, 32, 1, t55, 32, 1);
    t56 = (t19 + 4);
    t57 = *((unsigned int *)t56);
    t6 = (!(t57));
    t58 = (t20 + 4);
    t59 = *((unsigned int *)t58);
    t31 = (!(t59));
    t32 = (t6 && t31);
    t60 = (t21 + 4);
    t61 = *((unsigned int *)t60);
    t35 = (!(t61));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t7 = (t16 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 3);
    *((unsigned int *)t16) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 3);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t13 & 7U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 7U);
    t14 = ((char*)((ng4)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t16, 32, t14, 32);
    t15 = (t0 + 2248);
    t22 = (t0 + 2248);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng9)));
    t26 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t19, t20, t21, ((int*)(t24)), 2, t25, 32, 1, t26, 32, 1);
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t27);
    t6 = (!(t28));
    t29 = (t20 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t6 && t31);
    t33 = (t21 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t7 = (t16 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t16) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t13 & 7U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 7U);
    t14 = (t0 + 2408);
    t15 = (t0 + 2408);
    t22 = (t15 + 72U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng8)));
    t25 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t18, t19, t20, ((int*)(t23)), 2, t24, 32, 1, t25, 32, 1);
    t26 = (t18 + 4);
    t28 = *((unsigned int *)t26);
    t6 = (!(t28));
    t27 = (t19 + 4);
    t30 = *((unsigned int *)t27);
    t31 = (!(t30));
    t32 = (t6 && t31);
    t29 = (t20 + 4);
    t34 = *((unsigned int *)t29);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB33;

LAB34:    goto LAB27;

LAB29:    t62 = *((unsigned int *)t21);
    t38 = (t62 + 0);
    t63 = *((unsigned int *)t19);
    t64 = *((unsigned int *)t20);
    t41 = (t63 - t64);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t25, t26, t38, *((unsigned int *)t20), t42);
    goto LAB30;

LAB31:    t37 = *((unsigned int *)t21);
    t38 = (t37 + 0);
    t39 = *((unsigned int *)t19);
    t40 = *((unsigned int *)t20);
    t41 = (t39 - t40);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t15, t18, t38, *((unsigned int *)t20), t42);
    goto LAB32;

LAB33:    t37 = *((unsigned int *)t20);
    t38 = (t37 + 0);
    t39 = *((unsigned int *)t18);
    t40 = *((unsigned int *)t19);
    t41 = (t39 - t40);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t14, t16, t38, *((unsigned int *)t19), t42);
    goto LAB34;

LAB37:    t23 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(24, ng0);

LAB42:    xsi_set_current_line(25, ng0);
    t25 = (t0 + 2408);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t29 = ((char*)((ng10)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_lshift(t19, 12, t27, 12, t29, 32);
    t33 = (t0 + 2408);
    xsi_vlogvar_assign_value(t33, t19, 0, 0, 12);
    goto LAB41;

}


extern void work_m_00000000002275802869_1129174794_init()
{
	static char *pe[] = {(void *)Always_11_0};
	xsi_register_didat("work_m_00000000002275802869_1129174794", "isim/alu_tb_isim_beh.exe.sim/work/m_00000000002275802869_1129174794.didat");
	xsi_register_executes(pe);
}
