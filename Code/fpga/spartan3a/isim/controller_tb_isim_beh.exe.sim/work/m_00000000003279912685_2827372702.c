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
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static const char *ng3 = "controller.vcd";
static unsigned int ng4[] = {32U, 0U};
static const char *ng5 = "%s %s %s %s %s %s %s %s %s %s %s %s";
static int ng6[] = {1919246692, 0, 7169389, 0};
static int ng7[] = {1936876385, 0, 6384757, 0};
static int ng8[] = {1768911460, 0};
static int ng9[] = {1919513701, 0, 6910583, 0};
static int ng10[] = {1936876386, 0, 6384757, 0};
static int ng11[] = {1819635568, 0, 97, 0};
static int ng12[] = {1885562222, 0};
static int ng13[] = {1970430821, 0, 1885565807, 0};
static int ng14[] = {1734636404, 0, 29285, 0};
static int ng15[] = {1919513701, 0, 1919248247, 0};
static int ng16[] = {1869768039, 0, 1835363700, 0};
static int ng17[] = {1919513701, 0, 1835363703, 0};
static const char *ng18 = "opcode = %b";
static unsigned int ng19[] = {40U, 0U};
static unsigned int ng20[] = {0U, 0U};
static unsigned int ng21[] = {4U, 0U};
static unsigned int ng22[] = {1U, 0U};
static unsigned int ng23[] = {2U, 0U};
static unsigned int ng24[] = {8U, 0U};
static const char *ng25 = "%5b %6b %6b %6b %7b %5b %4b %8b %7b %6b %8b %7b";



static void Initial_294_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(295, ng0);

LAB2:    xsi_set_current_line(296, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(297, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(298, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(299, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2392);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_303_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3060U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(303, ng0);

LAB4:    xsi_set_current_line(304, ng0);
    t2 = (t0 + 2960);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(304, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2024);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(305, ng0);
    t2 = (t0 + 2960);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(305, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2024);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(306, ng0);
    t2 = (t0 + 2960);
    xsi_process_wait(t2, 4000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(306, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2024);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB2;

}

static void Always_309_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3204U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(309, ng0);

LAB4:    xsi_set_current_line(310, ng0);
    t2 = (t0 + 3104);
    xsi_process_wait(t2, 6000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(310, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2116);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(311, ng0);
    t2 = (t0 + 3104);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(311, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2116);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB2;

}

static void Initial_315_3(char *t0)
{

LAB0:    xsi_set_current_line(315, ng0);

LAB2:    xsi_set_current_line(316, ng0);
    xsi_vcd_dumpfile(ng3);
    xsi_set_current_line(317, ng0);
    xsi_vcd_dumpvars(t0);

LAB1:    return;
}

static void Initial_320_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 3492U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(320, ng0);

LAB4:    xsi_set_current_line(322, ng0);
    t2 = (t0 + 3392);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(322, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(322, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(323, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng7)));
    t4 = ((char*)((ng8)));
    t5 = ((char*)((ng9)));
    t6 = ((char*)((ng10)));
    t7 = ((char*)((ng11)));
    t8 = ((char*)((ng12)));
    t9 = ((char*)((ng13)));
    t10 = ((char*)((ng14)));
    t11 = ((char*)((ng15)));
    t12 = ((char*)((ng16)));
    t13 = ((char*)((ng17)));
    xsi_vlogfile_write(1, 0, 0, ng5, 13, t0, (char)118, t2, 56, (char)118, t3, 56, (char)118, t4, 32, (char)118, t5, 56, (char)118, t6, 56, (char)118, t7, 40, (char)118, t8, 32, (char)118, t9, 64, (char)118, t10, 48, (char)118, t11, 64, (char)118, t12, 64, (char)118, t13, 64);
    xsi_set_current_line(326, ng0);
    t2 = (t0 + 2300);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng18, 2, t0, (char)118, t4, 6);
    xsi_set_current_line(329, ng0);
    t2 = (t0 + 3392);
    xsi_process_wait(t2, 72000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(329, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 2300);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 6);
    xsi_set_current_line(330, ng0);
    t2 = (t0 + 2300);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng18, 2, t0, (char)118, t4, 6);
    xsi_set_current_line(333, ng0);
    t2 = (t0 + 3392);
    xsi_process_wait(t2, 56000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(333, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 2300);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 6);
    xsi_set_current_line(334, ng0);
    t2 = (t0 + 2300);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng18, 2, t0, (char)118, t4, 6);
    xsi_set_current_line(337, ng0);
    t2 = (t0 + 3392);
    xsi_process_wait(t2, 56000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(337, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 2300);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 6);
    xsi_set_current_line(338, ng0);
    t2 = (t0 + 2300);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng18, 2, t0, (char)118, t4, 6);
    xsi_set_current_line(339, ng0);
    t2 = (t0 + 3392);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(339, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 2392);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(342, ng0);
    t2 = (t0 + 3392);
    xsi_process_wait(t2, 8000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(342, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 2300);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 6);
    xsi_set_current_line(343, ng0);
    t2 = (t0 + 2300);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng18, 2, t0, (char)118, t4, 6);
    xsi_set_current_line(346, ng0);
    t2 = (t0 + 3392);
    xsi_process_wait(t2, 48000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(346, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 2300);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 6);
    xsi_set_current_line(347, ng0);
    t2 = (t0 + 2300);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng18, 2, t0, (char)118, t4, 6);
    xsi_set_current_line(350, ng0);
    t2 = (t0 + 3392);
    xsi_process_wait(t2, 56000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(350, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Always_354_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 3636U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(355, ng0);
    t2 = (t0 + 3536);
    xsi_process_wait(t2, 8000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(355, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 1152U);
    t5 = *((char **)t3);
    t3 = (t0 + 1428U);
    t6 = *((char **)t3);
    t3 = (t0 + 784U);
    t7 = *((char **)t3);
    t3 = (t0 + 1244U);
    t8 = *((char **)t3);
    t3 = (t0 + 1060U);
    t9 = *((char **)t3);
    t3 = (t0 + 876U);
    t10 = *((char **)t3);
    t3 = (t0 + 1336U);
    t11 = *((char **)t3);
    t3 = (t0 + 1612U);
    t12 = *((char **)t3);
    t3 = (t0 + 968U);
    t13 = *((char **)t3);
    t3 = (t0 + 1520U);
    t14 = *((char **)t3);
    t3 = (t0 + 692U);
    t15 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng25, 13, t0, (char)118, t4, 1, (char)118, t5, 1, (char)118, t6, 1, (char)118, t7, 4, (char)118, t8, 2, (char)118, t9, 2, (char)118, t10, 1, (char)118, t11, 2, (char)118, t12, 1, (char)118, t13, 1, (char)118, t14, 1, (char)118, t15, 1);
    goto LAB2;

}


extern void work_m_00000000003279912685_2827372702_init()
{
	static char *pe[] = {(void *)Initial_294_0,(void *)Always_303_1,(void *)Always_309_2,(void *)Initial_315_3,(void *)Initial_320_4,(void *)Always_354_5};
	xsi_register_didat("work_m_00000000003279912685_2827372702", "isim/controller_tb_isim_beh.exe.sim/work/m_00000000003279912685_2827372702.didat");
	xsi_register_executes(pe);
}
