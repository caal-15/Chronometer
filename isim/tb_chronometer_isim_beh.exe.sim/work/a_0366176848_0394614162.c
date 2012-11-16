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

/* This file is designed for use with ISim build 0x54af6ca1 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/pin3da/Repos/Chronometer/cont59x2.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_1366267000076357978_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_0366176848_0394614162_p_0(char *t0)
{
    char t11[16];
    char t14[16];
    char t25[16];
    char t37[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned char t36;
    int t38;
    unsigned char t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4936);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(44, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t5 = t1;
    memset(t5, (unsigned char)2, 4U);
    t6 = (t0 + 5080);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(45, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 5144);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(46, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 5208);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(47, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 5272);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t2 = (t0 + 7776U);
    t6 = (t0 + 7866);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (3 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t4 = ieee_p_3620187407_sub_1366267000076357978_3965413181(IEEE_P_3620187407, t5, t2, t6, t11);
    if (t4 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7776U);
    t5 = (t0 + 7870);
    t7 = (t11 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t12 = (3 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t13;
    t4 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t11);
    if (t4 == 1)
        goto LAB14;

LAB15:    t3 = (unsigned char)0;

LAB16:    if (t3 != 0)
        goto LAB12;

LAB13:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7776U);
    t5 = (t0 + 7882);
    t7 = (t11 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t12 = (3 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t13;
    t18 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t11);
    if (t18 == 1)
        goto LAB24;

LAB25:    t4 = (unsigned char)0;

LAB26:    if (t4 == 1)
        goto LAB21;

LAB22:    t3 = (unsigned char)0;

LAB23:    if (t3 != 0)
        goto LAB19;

LAB20:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7776U);
    t5 = (t0 + 7902);
    t7 = (t11 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t12 = (3 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t13;
    t26 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t11);
    if (t26 == 1)
        goto LAB37;

LAB38:    t18 = (unsigned char)0;

LAB39:    if (t18 == 1)
        goto LAB34;

LAB35:    t4 = (unsigned char)0;

LAB36:    if (t4 == 1)
        goto LAB31;

LAB32:    t3 = (unsigned char)0;

LAB33:    if (t3 != 0)
        goto LAB29;

LAB30:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(50, ng0);
    t9 = (t0 + 1992U);
    t10 = *((char **)t9);
    t9 = (t0 + 7776U);
    t15 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t14, t10, t9, 1);
    t16 = (t14 + 12U);
    t13 = *((unsigned int *)t16);
    t17 = (1U * t13);
    t18 = (4U != t17);
    if (t18 == 1)
        goto LAB10;

LAB11:    t19 = (t0 + 5080);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t15, 4U);
    xsi_driver_first_trans_fast(t19);
    goto LAB8;

LAB10:    xsi_size_not_matching(4U, t17, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(52, ng0);
    t19 = (t0 + 2152U);
    t20 = *((char **)t19);
    t19 = (t0 + 7792U);
    t21 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t25, t20, t19, 1);
    t22 = (t25 + 12U);
    t13 = *((unsigned int *)t22);
    t17 = (1U * t13);
    t26 = (4U != t17);
    if (t26 == 1)
        goto LAB17;

LAB18:    t23 = (t0 + 5144);
    t27 = (t23 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t21, 4U);
    xsi_driver_first_trans_fast(t23);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 7878);
    t5 = (t0 + 5080);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB8;

LAB14:    t8 = (t0 + 2152U);
    t9 = *((char **)t8);
    t8 = (t0 + 7792U);
    t10 = (t0 + 7874);
    t16 = (t14 + 0U);
    t19 = (t16 + 0U);
    *((int *)t19) = 0;
    t19 = (t16 + 4U);
    *((int *)t19) = 3;
    t19 = (t16 + 8U);
    *((int *)t19) = 1;
    t24 = (3 - 0);
    t13 = (t24 * 1);
    t13 = (t13 + 1);
    t19 = (t16 + 12U);
    *((unsigned int *)t19) = t13;
    t18 = ieee_p_3620187407_sub_1366267000076357978_3965413181(IEEE_P_3620187407, t9, t8, t10, t14);
    t3 = t18;
    goto LAB16;

LAB17:    xsi_size_not_matching(4U, t17, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(55, ng0);
    t27 = (t0 + 7894);
    t29 = (t0 + 5080);
    t30 = (t29 + 56U);
    t33 = *((char **)t30);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t27, 4U);
    xsi_driver_first_trans_fast(t29);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 7898);
    t5 = (t0 + 5144);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 7808U);
    t5 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t11, t2, t1, 1);
    t6 = (t11 + 12U);
    t13 = *((unsigned int *)t6);
    t17 = (1U * t13);
    t3 = (4U != t17);
    if (t3 == 1)
        goto LAB27;

LAB28:    t7 = (t0 + 5208);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB8;

LAB21:    t19 = (t0 + 2312U);
    t20 = *((char **)t19);
    t19 = (t0 + 7808U);
    t21 = (t0 + 7890);
    t23 = (t25 + 0U);
    t27 = (t23 + 0U);
    *((int *)t27) = 0;
    t27 = (t23 + 4U);
    *((int *)t27) = 3;
    t27 = (t23 + 8U);
    *((int *)t27) = 1;
    t31 = (3 - 0);
    t13 = (t31 * 1);
    t13 = (t13 + 1);
    t27 = (t23 + 12U);
    *((unsigned int *)t27) = t13;
    t32 = ieee_p_3620187407_sub_1366267000076357978_3965413181(IEEE_P_3620187407, t20, t19, t21, t25);
    t3 = t32;
    goto LAB23;

LAB24:    t8 = (t0 + 2152U);
    t9 = *((char **)t8);
    t8 = (t0 + 7792U);
    t10 = (t0 + 7886);
    t16 = (t14 + 0U);
    t19 = (t16 + 0U);
    *((int *)t19) = 0;
    t19 = (t16 + 4U);
    *((int *)t19) = 3;
    t19 = (t16 + 8U);
    *((int *)t19) = 1;
    t24 = (3 - 0);
    t13 = (t24 * 1);
    t13 = (t13 + 1);
    t19 = (t16 + 12U);
    *((unsigned int *)t19) = t13;
    t26 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t9, t8, t10, t14);
    t4 = t26;
    goto LAB26;

LAB27:    xsi_size_not_matching(4U, t17, 0);
    goto LAB28;

LAB29:    xsi_set_current_line(59, ng0);
    t34 = (t0 + 7918);
    t40 = (t0 + 5080);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memcpy(t44, t34, 4U);
    xsi_driver_first_trans_fast(t40);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 7922);
    t5 = (t0 + 5144);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 7926);
    t5 = (t0 + 5208);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 7824U);
    t5 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t11, t2, t1, 1);
    t6 = (t11 + 12U);
    t13 = *((unsigned int *)t6);
    t17 = (1U * t13);
    t3 = (4U != t17);
    if (t3 == 1)
        goto LAB40;

LAB41:    t7 = (t0 + 5272);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB8;

LAB31:    t27 = (t0 + 2472U);
    t28 = *((char **)t27);
    t27 = (t0 + 7824U);
    t29 = (t0 + 7914);
    t33 = (t37 + 0U);
    t34 = (t33 + 0U);
    *((int *)t34) = 0;
    t34 = (t33 + 4U);
    *((int *)t34) = 3;
    t34 = (t33 + 8U);
    *((int *)t34) = 1;
    t38 = (3 - 0);
    t13 = (t38 * 1);
    t13 = (t13 + 1);
    t34 = (t33 + 12U);
    *((unsigned int *)t34) = t13;
    t39 = ieee_p_3620187407_sub_1366267000076357978_3965413181(IEEE_P_3620187407, t28, t27, t29, t37);
    t3 = t39;
    goto LAB33;

LAB34:    t19 = (t0 + 2312U);
    t20 = *((char **)t19);
    t19 = (t0 + 7808U);
    t21 = (t0 + 7910);
    t23 = (t25 + 0U);
    t27 = (t23 + 0U);
    *((int *)t27) = 0;
    t27 = (t23 + 4U);
    *((int *)t27) = 3;
    t27 = (t23 + 8U);
    *((int *)t27) = 1;
    t31 = (3 - 0);
    t13 = (t31 * 1);
    t13 = (t13 + 1);
    t27 = (t23 + 12U);
    *((unsigned int *)t27) = t13;
    t36 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t20, t19, t21, t25);
    t4 = t36;
    goto LAB36;

LAB37:    t8 = (t0 + 2152U);
    t9 = *((char **)t8);
    t8 = (t0 + 7792U);
    t10 = (t0 + 7906);
    t16 = (t14 + 0U);
    t19 = (t16 + 0U);
    *((int *)t19) = 0;
    t19 = (t16 + 4U);
    *((int *)t19) = 3;
    t19 = (t16 + 8U);
    *((int *)t19) = 1;
    t24 = (3 - 0);
    t13 = (t24 * 1);
    t13 = (t13 + 1);
    t19 = (t16 + 12U);
    *((unsigned int *)t19) = t13;
    t32 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t9, t8, t10, t14);
    t18 = t32;
    goto LAB39;

LAB40:    xsi_size_not_matching(4U, t17, 0);
    goto LAB41;

}

static void work_a_0366176848_0394614162_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(67, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5336);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4952);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0366176848_0394614162_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(68, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 5400);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4968);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0366176848_0394614162_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(69, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 5464);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4984);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0366176848_0394614162_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(70, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5528);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5000);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0366176848_0394614162_init()
{
	static char *pe[] = {(void *)work_a_0366176848_0394614162_p_0,(void *)work_a_0366176848_0394614162_p_1,(void *)work_a_0366176848_0394614162_p_2,(void *)work_a_0366176848_0394614162_p_3,(void *)work_a_0366176848_0394614162_p_4};
	xsi_register_didat("work_a_0366176848_0394614162", "isim/tb_chronometer_isim_beh.exe.sim/work/a_0366176848_0394614162.didat");
	xsi_register_executes(pe);
}
