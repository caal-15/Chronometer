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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/Documentos/Electronica/DigiClock/cont.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_0163514710_0394614162_p_0(char *t0)
{
    char t13[16];
    char t19[16];
    char t27[16];
    char t35[16];
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
    unsigned char t11;
    unsigned char t12;
    int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    int t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    int t38;
    unsigned char t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;

LAB0:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4944);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(44, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t5 = t1;
    memset(t5, (unsigned char)2, 4U);
    t6 = (t0 + 5088);
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
    t5 = (t0 + 5152);
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
    t5 = (t0 + 5216);
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
    t5 = (t0 + 5280);
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
    t2 = (t0 + 7832U);
    t6 = (t0 + 7922);
    t8 = (t13 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t14 = (3 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t15;
    t16 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t5, t2, t6, t13);
    if (t16 == 1)
        goto LAB16;

LAB17:    t12 = (unsigned char)0;

LAB18:    if (t12 == 1)
        goto LAB13;

LAB14:    t11 = (unsigned char)0;

LAB15:    if (t11 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7832U);
    t5 = (t0 + 7950);
    t7 = (t13 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t14 = (3 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t15;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t13);
    if (t11 == 1)
        goto LAB26;

LAB27:    t4 = (unsigned char)0;

LAB28:    if (t4 == 1)
        goto LAB23;

LAB24:    t3 = (unsigned char)0;

LAB25:    if (t3 != 0)
        goto LAB21;

LAB22:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7832U);
    t5 = (t0 + 7970);
    t7 = (t13 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t14 = (3 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t15;
    t4 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t13);
    if (t4 == 1)
        goto LAB33;

LAB34:    t3 = (unsigned char)0;

LAB35:    if (t3 != 0)
        goto LAB31;

LAB32:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7832U);
    t5 = (t0 + 7982);
    t7 = (t13 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t14 = (3 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t15;
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t5, t13);
    if (t3 != 0)
        goto LAB38;

LAB39:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(50, ng0);
    t37 = (t0 + 7938);
    t41 = (t0 + 5088);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memcpy(t45, t37, 4U);
    xsi_driver_first_trans_fast(t41);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 7942);
    t5 = (t0 + 5152);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 7946);
    t5 = (t0 + 5216);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 7880U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t13, t2, t1, 1);
    t6 = (t13 + 12U);
    t15 = *((unsigned int *)t6);
    t46 = (1U * t15);
    t3 = (4U != t46);
    if (t3 == 1)
        goto LAB19;

LAB20:    t7 = (t0 + 5280);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    memcpy(t17, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB8;

LAB10:    t29 = (t0 + 2472U);
    t32 = *((char **)t29);
    t29 = (t0 + 7880U);
    t33 = (t0 + 7934);
    t36 = (t35 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = 0;
    t37 = (t36 + 4U);
    *((int *)t37) = 3;
    t37 = (t36 + 8U);
    *((int *)t37) = 1;
    t38 = (3 - 0);
    t15 = (t38 * 1);
    t15 = (t15 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t15;
    t39 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t32, t29, t33, t35);
    t4 = t39;
    goto LAB12;

LAB13:    t21 = (t0 + 2312U);
    t24 = *((char **)t21);
    t21 = (t0 + 7864U);
    t25 = (t0 + 7930);
    t28 = (t27 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 0;
    t29 = (t28 + 4U);
    *((int *)t29) = 3;
    t29 = (t28 + 8U);
    *((int *)t29) = 1;
    t30 = (3 - 0);
    t15 = (t30 * 1);
    t15 = (t15 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t15;
    t31 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t24, t21, t25, t27);
    t11 = t31;
    goto LAB15;

LAB16:    t9 = (t0 + 2152U);
    t10 = *((char **)t9);
    t9 = (t0 + 7848U);
    t17 = (t0 + 7926);
    t20 = (t19 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 3;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t22 = (3 - 0);
    t15 = (t22 * 1);
    t15 = (t15 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t15;
    t23 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t10, t9, t17, t19);
    t12 = t23;
    goto LAB18;

LAB19:    xsi_size_not_matching(4U, t46, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(55, ng0);
    t28 = (t0 + 7962);
    t32 = (t0 + 5088);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t36 = (t34 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t28, 4U);
    xsi_driver_first_trans_fast(t32);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 7966);
    t5 = (t0 + 5152);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 7864U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t13, t2, t1, 1);
    t6 = (t13 + 12U);
    t15 = *((unsigned int *)t6);
    t46 = (1U * t15);
    t3 = (4U != t46);
    if (t3 == 1)
        goto LAB29;

LAB30:    t7 = (t0 + 5216);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    memcpy(t17, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB8;

LAB23:    t20 = (t0 + 2312U);
    t21 = *((char **)t20);
    t20 = (t0 + 7864U);
    t24 = (t0 + 7958);
    t26 = (t27 + 0U);
    t28 = (t26 + 0U);
    *((int *)t28) = 0;
    t28 = (t26 + 4U);
    *((int *)t28) = 3;
    t28 = (t26 + 8U);
    *((int *)t28) = 1;
    t30 = (3 - 0);
    t15 = (t30 * 1);
    t15 = (t15 + 1);
    t28 = (t26 + 12U);
    *((unsigned int *)t28) = t15;
    t16 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t21, t20, t24, t27);
    t3 = t16;
    goto LAB25;

LAB26:    t8 = (t0 + 2152U);
    t9 = *((char **)t8);
    t8 = (t0 + 7848U);
    t10 = (t0 + 7954);
    t18 = (t19 + 0U);
    t20 = (t18 + 0U);
    *((int *)t20) = 0;
    t20 = (t18 + 4U);
    *((int *)t20) = 3;
    t20 = (t18 + 8U);
    *((int *)t20) = 1;
    t22 = (3 - 0);
    t15 = (t22 * 1);
    t15 = (t15 + 1);
    t20 = (t18 + 12U);
    *((unsigned int *)t20) = t15;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t9, t8, t10, t19);
    t4 = t12;
    goto LAB28;

LAB29:    xsi_size_not_matching(4U, t46, 0);
    goto LAB30;

LAB31:    xsi_set_current_line(59, ng0);
    t20 = (t0 + 2152U);
    t21 = *((char **)t20);
    t20 = (t0 + 7848U);
    t24 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t27, t21, t20, 1);
    t25 = (t27 + 12U);
    t15 = *((unsigned int *)t25);
    t46 = (1U * t15);
    t12 = (4U != t46);
    if (t12 == 1)
        goto LAB36;

LAB37:    t26 = (t0 + 5152);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t32 = (t29 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t24, 4U);
    xsi_driver_first_trans_fast(t26);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 7978);
    t5 = (t0 + 5088);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB8;

LAB33:    t8 = (t0 + 2152U);
    t9 = *((char **)t8);
    t8 = (t0 + 7848U);
    t10 = (t0 + 7974);
    t18 = (t19 + 0U);
    t20 = (t18 + 0U);
    *((int *)t20) = 0;
    t20 = (t18 + 4U);
    *((int *)t20) = 3;
    t20 = (t18 + 8U);
    *((int *)t20) = 1;
    t22 = (3 - 0);
    t15 = (t22 * 1);
    t15 = (t15 + 1);
    t20 = (t18 + 12U);
    *((unsigned int *)t20) = t15;
    t11 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t9, t8, t10, t19);
    t3 = t11;
    goto LAB35;

LAB36:    xsi_size_not_matching(4U, t46, 0);
    goto LAB37;

LAB38:    xsi_set_current_line(63, ng0);
    t8 = (t0 + 1992U);
    t9 = *((char **)t8);
    t8 = (t0 + 7832U);
    t10 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t19, t9, t8, 1);
    t17 = (t19 + 12U);
    t15 = *((unsigned int *)t17);
    t46 = (1U * t15);
    t4 = (4U != t46);
    if (t4 == 1)
        goto LAB40;

LAB41:    t18 = (t0 + 5088);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t24 = (t21 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t10, 4U);
    xsi_driver_first_trans_fast(t18);
    goto LAB8;

LAB40:    xsi_size_not_matching(4U, t46, 0);
    goto LAB41;

}

static void work_a_0163514710_0394614162_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(70, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5344);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4960);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0163514710_0394614162_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(71, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 5408);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4976);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0163514710_0394614162_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(72, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 5472);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4992);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0163514710_0394614162_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(73, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5536);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5008);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0163514710_0394614162_init()
{
	static char *pe[] = {(void *)work_a_0163514710_0394614162_p_0,(void *)work_a_0163514710_0394614162_p_1,(void *)work_a_0163514710_0394614162_p_2,(void *)work_a_0163514710_0394614162_p_3,(void *)work_a_0163514710_0394614162_p_4};
	xsi_register_didat("work_a_0163514710_0394614162", "isim/tb_Cont_isim_beh.exe.sim/work/a_0163514710_0394614162.didat");
	xsi_register_executes(pe);
}
