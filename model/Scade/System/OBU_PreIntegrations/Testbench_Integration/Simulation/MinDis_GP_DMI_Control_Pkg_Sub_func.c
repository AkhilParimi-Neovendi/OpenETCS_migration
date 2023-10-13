/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MinDis_GP_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::MinDis_GP/ */
void MinDis_GP_DMI_Control_Pkg_Sub_func(
  /* acc/ */
  GP_DMI_Control_Pkg_Sub_func *acc,
  /* visable/ */
  kcg_bool visable,
  /* start_gp/ */
  kcg_float64 start_gp,
  /* end_gp/ */
  kcg_float64 end_gp,
  outC_MinDis_GP_DMI_Control_Pkg_Sub_func *outC)
{
  /* acc_out/ */
  static GP_DMI_Control_Pkg_Sub_func acc_out_partial;
  /* visable_out/ */
  static kcg_bool visable_out_partial;
  /* start_out/ */
  static kcg_float64 start_out_partial;
  /* end_out/ */
  static kcg_float64 end_out_partial;
  /* acc_out/ */
  static GP_DMI_Control_Pkg_Sub_func _1_acc_out_partial;
  /* visable_out/ */
  static kcg_bool _2_visable_out_partial;
  /* start_out/ */
  static kcg_float64 _3_start_out_partial;
  /* end_out/ */
  static kcg_float64 _4_end_out_partial;
  /* end_out/ */
  static kcg_float64 _5_end_out_partial;
  /* start_out/ */
  static kcg_float64 _6_start_out_partial;
  /* visable_out/ */
  static kcg_bool _7_visable_out_partial;
  /* acc_out/ */
  static GP_DMI_Control_Pkg_Sub_func _8_acc_out_partial;
  /* end_out/ */
  static kcg_float64 _9_end_out_partial;
  /* start_out/ */
  static kcg_float64 _10_start_out_partial;
  /* visable_out/ */
  static kcg_bool _11_visable_out_partial;
  /* acc_out/ */
  static GP_DMI_Control_Pkg_Sub_func _12_acc_out_partial;
  static GP_DMI_Control_Pkg_Sub_func noname;

  kcg_copy_GP_DMI_Control_Pkg_Sub_func(&outC->_L4, acc);
  kcg_copy_GP_DMI_Control_Pkg_Sub_func(&noname, &outC->_L4);
  outC->IfBlock1_clock = (start_gp >= kcg_lit_float64(0.0)) & (end_gp -
      start_gp > kcg_lit_float64(1.0)) & visable;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L5_then_IfBlock1 = kcg_true;
    outC->_L6_then_IfBlock1 = start_gp;
    outC->_L2_then_IfBlock1 = end_gp;
    outC->_L7_then_IfBlock1.visable = outC->_L5_then_IfBlock1;
    outC->_L7_then_IfBlock1.start_gp = outC->_L6_then_IfBlock1;
    outC->_L7_then_IfBlock1.end_gp = outC->_L2_then_IfBlock1;
    kcg_copy_GP_DMI_Control_Pkg_Sub_func(
      &acc_out_partial,
      &outC->_L7_then_IfBlock1);
    visable_out_partial = outC->_L5_then_IfBlock1;
    end_out_partial = outC->_L2_then_IfBlock1;
    start_out_partial = outC->_L6_then_IfBlock1;
    kcg_copy_GP_DMI_Control_Pkg_Sub_func(&outC->acc_out, &acc_out_partial);
    outC->visable_out = visable_out_partial;
    outC->start_out = start_out_partial;
    outC->end_out = end_out_partial;
  }
  else {
    outC->else_clock_IfBlock1 = (start_gp <= kcg_lit_float64(0.0)) & (end_gp >
        kcg_lit_float64(1.0)) & visable;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L2_then_else_IfBlock1 = kcg_true;
      outC->_L6_then_else_IfBlock1 = kcg_lit_float64(0.0);
      outC->_L1_then_else_IfBlock1 = end_gp;
      outC->_L7_then_else_IfBlock1.visable = outC->_L2_then_else_IfBlock1;
      outC->_L7_then_else_IfBlock1.start_gp = outC->_L6_then_else_IfBlock1;
      outC->_L7_then_else_IfBlock1.end_gp = outC->_L1_then_else_IfBlock1;
      kcg_copy_GP_DMI_Control_Pkg_Sub_func(
        &_12_acc_out_partial,
        &outC->_L7_then_else_IfBlock1);
      _9_end_out_partial = outC->_L1_then_else_IfBlock1;
      _11_visable_out_partial = outC->_L2_then_else_IfBlock1;
      _10_start_out_partial = outC->_L6_then_else_IfBlock1;
      kcg_copy_GP_DMI_Control_Pkg_Sub_func(&_1_acc_out_partial, &_12_acc_out_partial);
      _2_visable_out_partial = _11_visable_out_partial;
      _3_start_out_partial = _10_start_out_partial;
      _4_end_out_partial = _9_end_out_partial;
    }
    else {
      outC->_L7_else_else_IfBlock1 = kcg_false;
      outC->_L5_else_else_IfBlock1 = start_gp;
      outC->_L3_else_else_IfBlock1 = end_gp;
      _5_end_out_partial = outC->_L3_else_else_IfBlock1;
      outC->_L4_else_else_IfBlock1.visable = outC->_L7_else_else_IfBlock1;
      outC->_L4_else_else_IfBlock1.start_gp = outC->_L5_else_else_IfBlock1;
      outC->_L4_else_else_IfBlock1.end_gp = outC->_L3_else_else_IfBlock1;
      kcg_copy_GP_DMI_Control_Pkg_Sub_func(
        &_8_acc_out_partial,
        &outC->_L4_else_else_IfBlock1);
      _7_visable_out_partial = outC->_L7_else_else_IfBlock1;
      _6_start_out_partial = outC->_L5_else_else_IfBlock1;
      kcg_copy_GP_DMI_Control_Pkg_Sub_func(&_1_acc_out_partial, &_8_acc_out_partial);
      _2_visable_out_partial = _7_visable_out_partial;
      _3_start_out_partial = _6_start_out_partial;
      _4_end_out_partial = _5_end_out_partial;
    }
    kcg_copy_GP_DMI_Control_Pkg_Sub_func(&outC->acc_out, &_1_acc_out_partial);
    outC->visable_out = _2_visable_out_partial;
    outC->start_out = _3_start_out_partial;
    outC->end_out = _4_end_out_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void MinDis_GP_init_DMI_Control_Pkg_Sub_func(
  outC_MinDis_GP_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L4.visable = kcg_true;
  outC->_L4.start_gp = kcg_lit_float64(0.0);
  outC->_L4.end_gp = kcg_lit_float64(0.0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L7_then_else_IfBlock1.visable = kcg_true;
  outC->_L7_then_else_IfBlock1.start_gp = kcg_lit_float64(0.0);
  outC->_L7_then_else_IfBlock1.end_gp = kcg_lit_float64(0.0);
  outC->_L6_then_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L1_then_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L2_then_else_IfBlock1 = kcg_true;
  outC->_L7_else_else_IfBlock1 = kcg_true;
  outC->_L5_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L3_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L4_else_else_IfBlock1.visable = kcg_true;
  outC->_L4_else_else_IfBlock1.start_gp = kcg_lit_float64(0.0);
  outC->_L4_else_else_IfBlock1.end_gp = kcg_lit_float64(0.0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->_L6_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L7_then_IfBlock1.visable = kcg_true;
  outC->_L7_then_IfBlock1.start_gp = kcg_lit_float64(0.0);
  outC->_L7_then_IfBlock1.end_gp = kcg_lit_float64(0.0);
  outC->end_out = kcg_lit_float64(0.0);
  outC->start_out = kcg_lit_float64(0.0);
  outC->visable_out = kcg_true;
  outC->acc_out.visable = kcg_true;
  outC->acc_out.start_gp = kcg_lit_float64(0.0);
  outC->acc_out.end_gp = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MinDis_GP_reset_DMI_Control_Pkg_Sub_func(
  outC_MinDis_GP_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MinDis_GP_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

