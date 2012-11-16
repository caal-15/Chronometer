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
static const char *ng0 = "/home/pin3da/Repos/Chronometer/bcd.vhd";
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_207919886985903570_503743352(char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3807574445_1329833589_p_0(char *t0)
{
    char t32[16];
    char t35[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    int t15;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    int t28;
    char *t29;
    int t31;
    char *t33;
    char *t36;
    char *t37;
    int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2984);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = (t0 + 4686);
    t13 = xsi_mem_cmp(t1, t3, 4U);
    if (t13 == 1)
        goto LAB9;

LAB19:    t7 = (t0 + 4690);
    t14 = xsi_mem_cmp(t7, t3, 4U);
    if (t14 == 1)
        goto LAB10;

LAB20:    t9 = (t0 + 4694);
    t15 = xsi_mem_cmp(t9, t3, 4U);
    if (t15 == 1)
        goto LAB11;

LAB21:    t11 = (t0 + 4698);
    t16 = xsi_mem_cmp(t11, t3, 4U);
    if (t16 == 1)
        goto LAB12;

LAB22:    t17 = (t0 + 4702);
    t19 = xsi_mem_cmp(t17, t3, 4U);
    if (t19 == 1)
        goto LAB13;

LAB23:    t20 = (t0 + 4706);
    t22 = xsi_mem_cmp(t20, t3, 4U);
    if (t22 == 1)
        goto LAB14;

LAB24:    t23 = (t0 + 4710);
    t25 = xsi_mem_cmp(t23, t3, 4U);
    if (t25 == 1)
        goto LAB15;

LAB25:    t26 = (t0 + 4714);
    t28 = xsi_mem_cmp(t26, t3, 4U);
    if (t28 == 1)
        goto LAB16;

LAB26:    t29 = (t0 + 4718);
    t31 = xsi_mem_cmp(t29, t3, 4U);
    if (t31 == 1)
        goto LAB17;

LAB27:
LAB18:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 4794);
    t4 = (t35 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 0;
    t7 = (t4 + 4U);
    *((int *)t7) = 7;
    t7 = (t4 + 8U);
    *((int *)t7) = 1;
    t13 = (7 - 0);
    t39 = (t13 * 1);
    t39 = (t39 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t39;
    t7 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t32, t1, t35);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t41 = (1U * t39);
    t2 = (8U != t41);
    if (t2 == 1)
        goto LAB47;

LAB48:    t9 = (t0 + 3064);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);

LAB8:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 4678);
    t8 = (t0 + 3064);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 8U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB6;

LAB9:    xsi_set_current_line(41, ng0);
    t33 = (t0 + 4722);
    t36 = (t35 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = 0;
    t37 = (t36 + 4U);
    *((int *)t37) = 7;
    t37 = (t36 + 8U);
    *((int *)t37) = 1;
    t38 = (7 - 0);
    t39 = (t38 * 1);
    t39 = (t39 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t39;
    t37 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t32, t33, t35);
    t40 = (t32 + 12U);
    t39 = *((unsigned int *)t40);
    t41 = (1U * t39);
    t2 = (8U != t41);
    if (t2 == 1)
        goto LAB29;

LAB30:    t42 = (t0 + 3064);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memcpy(t46, t37, 8U);
    xsi_driver_first_trans_fast_port(t42);
    goto LAB8;

LAB10:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 4730);
    t4 = (t35 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 0;
    t7 = (t4 + 4U);
    *((int *)t7) = 7;
    t7 = (t4 + 8U);
    *((int *)t7) = 1;
    t13 = (7 - 0);
    t39 = (t13 * 1);
    t39 = (t39 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t39;
    t7 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t32, t1, t35);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t41 = (1U * t39);
    t2 = (8U != t41);
    if (t2 == 1)
        goto LAB31;

LAB32:    t9 = (t0 + 3064);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB8;

LAB11:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 4738);
    t4 = (t35 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 0;
    t7 = (t4 + 4U);
    *((int *)t7) = 7;
    t7 = (t4 + 8U);
    *((int *)t7) = 1;
    t13 = (7 - 0);
    t39 = (t13 * 1);
    t39 = (t39 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t39;
    t7 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t32, t1, t35);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t41 = (1U * t39);
    t2 = (8U != t41);
    if (t2 == 1)
        goto LAB33;

LAB34:    t9 = (t0 + 3064);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB8;

LAB12:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 4746);
    t4 = (t35 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 0;
    t7 = (t4 + 4U);
    *((int *)t7) = 7;
    t7 = (t4 + 8U);
    *((int *)t7) = 1;
    t13 = (7 - 0);
    t39 = (t13 * 1);
    t39 = (t39 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t39;
    t7 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t32, t1, t35);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t41 = (1U * t39);
    t2 = (8U != t41);
    if (t2 == 1)
        goto LAB35;

LAB36:    t9 = (t0 + 3064);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB8;

LAB13:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 4754);
    t4 = (t35 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 0;
    t7 = (t4 + 4U);
    *((int *)t7) = 7;
    t7 = (t4 + 8U);
    *((int *)t7) = 1;
    t13 = (7 - 0);
    t39 = (t13 * 1);
    t39 = (t39 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t39;
    t7 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t32, t1, t35);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t41 = (1U * t39);
    t2 = (8U != t41);
    if (t2 == 1)
        goto LAB37;

LAB38:    t9 = (t0 + 3064);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB8;

LAB14:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 4762);
    t4 = (t35 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 0;
    t7 = (t4 + 4U);
    *((int *)t7) = 7;
    t7 = (t4 + 8U);
    *((int *)t7) = 1;
    t13 = (7 - 0);
    t39 = (t13 * 1);
    t39 = (t39 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t39;
    t7 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t32, t1, t35);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t41 = (1U * t39);
    t2 = (8U != t41);
    if (t2 == 1)
        goto LAB39;

LAB40:    t9 = (t0 + 3064);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB8;

LAB15:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 4770);
    t4 = (t35 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 0;
    t7 = (t4 + 4U);
    *((int *)t7) = 7;
    t7 = (t4 + 8U);
    *((int *)t7) = 1;
    t13 = (7 - 0);
    t39 = (t13 * 1);
    t39 = (t39 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t39;
    t7 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t32, t1, t35);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t41 = (1U * t39);
    t2 = (8U != t41);
    if (t2 == 1)
        goto LAB41;

LAB42:    t9 = (t0 + 3064);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB8;

LAB16:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 4778);
    t4 = (t35 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 0;
    t7 = (t4 + 4U);
    *((int *)t7) = 7;
    t7 = (t4 + 8U);
    *((int *)t7) = 1;
    t13 = (7 - 0);
    t39 = (t13 * 1);
    t39 = (t39 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t39;
    t7 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t32, t1, t35);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t41 = (1U * t39);
    t2 = (8U != t41);
    if (t2 == 1)
        goto LAB43;

LAB44:    t9 = (t0 + 3064);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB8;

LAB17:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 4786);
    t4 = (t35 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 0;
    t7 = (t4 + 4U);
    *((int *)t7) = 7;
    t7 = (t4 + 8U);
    *((int *)t7) = 1;
    t13 = (7 - 0);
    t39 = (t13 * 1);
    t39 = (t39 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t39;
    t7 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t32, t1, t35);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t41 = (1U * t39);
    t2 = (8U != t41);
    if (t2 == 1)
        goto LAB45;

LAB46:    t9 = (t0 + 3064);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB8;

LAB28:;
LAB29:    xsi_size_not_matching(8U, t41, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(8U, t41, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(8U, t41, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(8U, t41, 0);
    goto LAB36;

LAB37:    xsi_size_not_matching(8U, t41, 0);
    goto LAB38;

LAB39:    xsi_size_not_matching(8U, t41, 0);
    goto LAB40;

LAB41:    xsi_size_not_matching(8U, t41, 0);
    goto LAB42;

LAB43:    xsi_size_not_matching(8U, t41, 0);
    goto LAB44;

LAB45:    xsi_size_not_matching(8U, t41, 0);
    goto LAB46;

LAB47:    xsi_size_not_matching(8U, t41, 0);
    goto LAB48;

}


extern void work_a_3807574445_1329833589_init()
{
	static char *pe[] = {(void *)work_a_3807574445_1329833589_p_0};
	xsi_register_didat("work_a_3807574445_1329833589", "isim/tb_chronometer_isim_beh.exe.sim/work/a_3807574445_1329833589.didat");
	xsi_register_executes(pe);
}
