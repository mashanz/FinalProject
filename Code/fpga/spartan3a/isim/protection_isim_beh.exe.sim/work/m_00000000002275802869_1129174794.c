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
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {7, 0};
static int ng4[] = {6, 0};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {2, 0};
static int ng7[] = {5, 0};
static int ng8[] = {3, 0};
static unsigned int ng9[] = {1U, 0U};



static void Always_12_0(char *t0)
{
    char t13[8];
    char t15[8];
    char t17[8];
    char t18[8];
    char t19[8];
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
    unsigned int t14;
    char *t16;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
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
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 6);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 6);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 3U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 3U);
    t12 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t13, 32, t12, 32);
    t16 = (t0 + 2248);
    t20 = (t0 + 2248);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng3)));
    t24 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t17, t18, t19, ((int*)(t22)), 2, t23, 32, 1, t24, 32, 1);
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t18 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    t32 = (t19 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB9;

LAB10:
LAB8:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 6);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 6);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 3U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 3U);
    t12 = ((char*)((ng5)));
    memset(t15, 0, 8);
    t16 = (t13 + 4);
    t20 = (t12 + 4);
    t26 = *((unsigned int *)t13);
    t29 = *((unsigned int *)t12);
    t33 = (t26 ^ t29);
    t36 = *((unsigned int *)t16);
    t38 = *((unsigned int *)t20);
    t39 = (t36 ^ t38);
    t42 = (t33 | t39);
    t43 = *((unsigned int *)t16);
    t44 = *((unsigned int *)t20);
    t45 = (t43 | t44);
    t46 = (~(t45));
    t47 = (t42 & t46);
    if (t47 != 0)
        goto LAB14;

LAB11:    if (t45 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t15) = 1;

LAB14:    t22 = (t15 + 4);
    t48 = *((unsigned int *)t22);
    t49 = (~(t48));
    t50 = *((unsigned int *)t15);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 6);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 6);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 3U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 3U);
    t12 = ((char*)((ng9)));
    memset(t15, 0, 8);
    t16 = (t13 + 4);
    t20 = (t12 + 4);
    t26 = *((unsigned int *)t13);
    t29 = *((unsigned int *)t12);
    t33 = (t26 ^ t29);
    t36 = *((unsigned int *)t16);
    t38 = *((unsigned int *)t20);
    t39 = (t36 ^ t38);
    t42 = (t33 | t39);
    t43 = *((unsigned int *)t16);
    t44 = *((unsigned int *)t20);
    t45 = (t43 | t44);
    t46 = (~(t45));
    t47 = (t42 & t46);
    if (t47 != 0)
        goto LAB28;

LAB25:    if (t45 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t15) = 1;

LAB28:    t22 = (t15 + 4);
    t48 = *((unsigned int *)t22);
    t49 = (~(t48));
    t50 = *((unsigned int *)t15);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB29;

LAB30:
LAB31:    goto LAB2;

LAB6:    xsi_set_current_line(13, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 8);
    goto LAB8;

LAB9:    t36 = *((unsigned int *)t19);
    t37 = (t36 + 0);
    t38 = *((unsigned int *)t17);
    t39 = *((unsigned int *)t18);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t16, t15, t37, *((unsigned int *)t18), t41);
    goto LAB10;

LAB13:    t21 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(16, ng0);

LAB18:    xsi_set_current_line(17, ng0);
    t23 = (t0 + 1528U);
    t24 = *((char **)t23);
    t23 = (t0 + 2248);
    t25 = (t0 + 2248);
    t28 = (t25 + 72U);
    t32 = *((char **)t28);
    t53 = ((char*)((ng6)));
    t54 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t17, t18, t19, ((int*)(t32)), 2, t53, 32, 1, t54, 32, 1);
    t55 = (t17 + 4);
    t56 = *((unsigned int *)t55);
    t27 = (!(t56));
    t57 = (t18 + 4);
    t58 = *((unsigned int *)t57);
    t30 = (!(t58));
    t31 = (t27 && t30);
    t59 = (t19 + 4);
    t60 = *((unsigned int *)t59);
    t34 = (!(t60));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 3);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 3);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 7U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 7U);
    t12 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t13, 32, t12, 32);
    t16 = (t0 + 2248);
    t20 = (t0 + 2248);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng7)));
    t24 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t17, t18, t19, ((int*)(t22)), 2, t23, 32, 1, t24, 32, 1);
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t18 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    t32 = (t19 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 7U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 7U);
    t12 = (t0 + 2408);
    t16 = (t0 + 2408);
    t20 = (t16 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng6)));
    t23 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t15, t17, t18, ((int*)(t21)), 2, t22, 32, 1, t23, 32, 1);
    t24 = (t15 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (!(t26));
    t25 = (t17 + 4);
    t29 = *((unsigned int *)t25);
    t30 = (!(t29));
    t31 = (t27 && t30);
    t28 = (t18 + 4);
    t33 = *((unsigned int *)t28);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB23;

LAB24:    goto LAB17;

LAB19:    t61 = *((unsigned int *)t19);
    t37 = (t61 + 0);
    t62 = *((unsigned int *)t17);
    t63 = *((unsigned int *)t18);
    t40 = (t62 - t63);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t23, t24, t37, *((unsigned int *)t18), t41);
    goto LAB20;

LAB21:    t36 = *((unsigned int *)t19);
    t37 = (t36 + 0);
    t38 = *((unsigned int *)t17);
    t39 = *((unsigned int *)t18);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t16, t15, t37, *((unsigned int *)t18), t41);
    goto LAB22;

LAB23:    t36 = *((unsigned int *)t18);
    t37 = (t36 + 0);
    t38 = *((unsigned int *)t15);
    t39 = *((unsigned int *)t17);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t12, t13, t37, *((unsigned int *)t17), t41);
    goto LAB24;

LAB27:    t21 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(22, ng0);

LAB32:    xsi_set_current_line(23, ng0);
    t23 = (t0 + 2408);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t28 = ((char*)((ng8)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_lshift(t17, 12, t25, 12, t28, 32);
    t32 = (t0 + 2408);
    xsi_vlogvar_assign_value(t32, t17, 0, 0, 12);
    goto LAB31;

}


extern void work_m_00000000002275802869_1129174794_init()
{
	static char *pe[] = {(void *)Always_12_0};
	xsi_register_didat("work_m_00000000002275802869_1129174794", "isim/protection_isim_beh.exe.sim/work/m_00000000002275802869_1129174794.didat");
	xsi_register_executes(pe);
}
