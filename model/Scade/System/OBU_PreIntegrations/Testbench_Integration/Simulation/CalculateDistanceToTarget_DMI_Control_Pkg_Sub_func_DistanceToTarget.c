/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"

/* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget/ */
void CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  /* DistanceToTarget/ */
  kcg_float32 DistanceToTarget,
  outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  /* InterpolatedDistanceToTarget/ */
  static kcg_float32 InterpolatedDistanceToTarget_partial;
  /* InterpolatedDistanceToTarget/ */
  static kcg_float32 _1_InterpolatedDistanceToTarget_partial;
  /* InterpolatedDistanceToTarget/ */
  static kcg_float32 _2_InterpolatedDistanceToTarget_partial;
  /* InterpolatedDistanceToTarget/ */
  static kcg_float32 _3_InterpolatedDistanceToTarget_partial;
  /* InterpolatedDistanceToTarget/ */
  static kcg_float32 _4_InterpolatedDistanceToTarget_partial;
  /* InterpolatedDistanceToTarget/ */
  static kcg_float32 _5_InterpolatedDistanceToTarget_partial;
  /* InterpolatedDistanceToTarget/ */
  static kcg_float32 last_InterpolatedDistanceToTarget;

  last_InterpolatedDistanceToTarget = outC->InterpolatedDistanceToTarget;
  outC->IfBlock1_clock = DistanceToTarget < kcg_lit_float32(0.0);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L8_then_IfBlock1 = kcg_lit_float32(-89.5);
    InterpolatedDistanceToTarget_partial = outC->_L8_then_IfBlock1;
    outC->InterpolatedDistanceToTarget = InterpolatedDistanceToTarget_partial;
  }
  else {
    outC->else_clock_IfBlock1 = DistanceToTarget < kcg_lit_float32(100.0);
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = kcg_lit_float32(0.33);
      outC->_L3_then_else_IfBlock1 = DistanceToTarget;
      outC->_L5_then_else_IfBlock1 = outC->_L3_then_else_IfBlock1 *
        outC->_L1_then_else_IfBlock1;
      outC->_L4_then_else_IfBlock1 = kcg_lit_float32(-89.5);
      outC->_L2_then_else_IfBlock1 = outC->_L4_then_else_IfBlock1 +
        outC->_L5_then_else_IfBlock1;
      _5_InterpolatedDistanceToTarget_partial = outC->_L2_then_else_IfBlock1;
      _1_InterpolatedDistanceToTarget_partial =
        _5_InterpolatedDistanceToTarget_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = DistanceToTarget > kcg_lit_float32(1000.0);
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = kcg_lit_float32(96.5);
        _2_InterpolatedDistanceToTarget_partial = outC->_L1_then_else_else_IfBlock1;
        _4_InterpolatedDistanceToTarget_partial =
          _2_InterpolatedDistanceToTarget_partial;
      }
      else {
        outC->_L10_else_else_else_IfBlock1 = Y100I1_DMI_Control_Pkg;
        outC->_L8_else_else_else_IfBlock1 = kcg_lit_float32(2.0);
        outC->_L2_else_else_else_IfBlock1 = DistanceToTarget;
        outC->_L6_else_else_else_IfBlock1 =
          /* IfBlock1:else:else:else:_L6=(mathext::LogR#1)/ */
          LogR32_mathext_mathextimpl(outC->_L2_else_else_else_IfBlock1);
        outC->_L7_else_else_else_IfBlock1 = outC->_L6_else_else_else_IfBlock1 -
          outC->_L8_else_else_else_IfBlock1;
        outC->_L5_else_else_else_IfBlock1 = Px100To1001_DMI_Control_Pkg;
        outC->_L3_else_else_else_IfBlock1 = outC->_L5_else_else_else_IfBlock1 *
          outC->_L7_else_else_else_IfBlock1;
        outC->_L9_else_else_else_IfBlock1 = outC->_L3_else_else_else_IfBlock1 +
          outC->_L10_else_else_else_IfBlock1;
        _3_InterpolatedDistanceToTarget_partial = outC->_L9_else_else_else_IfBlock1;
        _4_InterpolatedDistanceToTarget_partial =
          _3_InterpolatedDistanceToTarget_partial;
      }
      _1_InterpolatedDistanceToTarget_partial =
        _4_InterpolatedDistanceToTarget_partial;
    }
    outC->InterpolatedDistanceToTarget = _1_InterpolatedDistanceToTarget_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CalculateDistanceToTarget_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L2_then_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L3_then_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L4_then_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L5_then_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L5_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L3_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L2_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L6_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L7_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L8_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L9_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L10_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L1_then_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = kcg_lit_float32(0.0);
  outC->InterpolatedDistanceToTarget = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


void CalculateDistanceToTarget_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  outC->InterpolatedDistanceToTarget = kcg_lit_float32(0.0);
}


void kcg_save_SV_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  SV_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *SV,
  outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  SV->Context_InterpolatedDistanceToTarget = outC->InterpolatedDistanceToTarget;
}

void kcg_load_SV_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC,
  SV_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *SV)
{
  outC->InterpolatedDistanceToTarget = SV->Context_InterpolatedDistanceToTarget;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

