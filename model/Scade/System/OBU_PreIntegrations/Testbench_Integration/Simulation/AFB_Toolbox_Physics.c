/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AFB_Toolbox_Physics.h"

/* Toolbox::Physics::AFB/ */
void AFB_Toolbox_Physics(
  /* targetSpeed/ */
  kcg_float64 targetSpeed,
  /* traction/ */
  kcg_float64 traction,
  /* brake/ */
  kcg_float64 brake,
  /* currentSpeed/ */
  kcg_float64 currentSpeed,
  outC_AFB_Toolbox_Physics *outC)
{
  /* calculatedAcceleration/ */
  static kcg_float64 calculatedAcceleration_partial;
  /* calculatedAcceleration/ */
  static kcg_float64 _1_calculatedAcceleration_partial;
  /* calculatedAcceleration/ */
  static kcg_float64 _2_calculatedAcceleration_partial;
  /* calculatedAcceleration/ */
  static kcg_float64 _3_calculatedAcceleration_partial;
  /* calculatedAcceleration/ */
  static kcg_float64 _4_calculatedAcceleration_partial;
  /* calculatedAcceleration/ */
  static kcg_float64 _5_calculatedAcceleration_partial;

  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = targetSpeed;
  outC->_L1 = outC->_L2 > outC->_L3;
  outC->afbActive = outC->_L1;
  outC->IfBlock1_clock = outC->afbActive;
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->_L4_FlipFlopSet_1 = outC->_L2_FlipFlopSet_1;
    outC->_L11_else_IfBlock1 = kcg_lit_float64(0.0);
    outC->_L10_else_IfBlock1 = traction;
    outC->_L9_else_IfBlock1 = outC->_L10_else_IfBlock1 == outC->_L11_else_IfBlock1;
    outC->Reset_FlipFlopSet_1 = outC->_L9_else_IfBlock1;
    outC->_L6_FlipFlopSet_1 = outC->Reset_FlipFlopSet_1;
    outC->_L11_FlipFlopSet_1 = !outC->_L6_FlipFlopSet_1;
    outC->_L12_FlipFlopSet_1 = outC->_L11_FlipFlopSet_1 & outC->_L4_FlipFlopSet_1;
    outC->_L14_else_IfBlock1 = kcg_lit_float64(0.0);
    outC->_L12_else_IfBlock1 = brake;
    outC->_L13_else_IfBlock1 = outC->_L12_else_IfBlock1 > outC->_L14_else_IfBlock1;
    outC->Set_FlipFlopSet_1 = outC->_L13_else_IfBlock1;
    outC->_L5_FlipFlopSet_1 = outC->Set_FlipFlopSet_1;
    outC->_L13_FlipFlopSet_1 = outC->_L5_FlipFlopSet_1 | outC->_L12_FlipFlopSet_1;
    outC->Init_FlipFlopSet_1 = kcg_false;
    outC->_L10_FlipFlopSet_1 = outC->Init_FlipFlopSet_1;
    /* @1/_L2= */
    if (outC->init) {
      outC->_L2_FlipFlopSet_1 = outC->_L10_FlipFlopSet_1;
    }
    else {
      outC->_L2_FlipFlopSet_1 = outC->_L13_FlipFlopSet_1;
    }
    outC->FFS_Output_FlipFlopSet_1 = outC->_L2_FlipFlopSet_1;
  }
  outC->_L6 = kcg_lit_float64(0.8);
  outC->_L5 = targetSpeed;
  outC->_L4 = outC->_L5 - outC->_L6;
  outC->realTargetSpeed = outC->_L4;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->IfBlock2_clock_then_IfBlock1 = (currentSpeed < outC->realTargetSpeed +
        kcg_lit_float64(0.5)) & (currentSpeed > outC->realTargetSpeed -
        kcg_lit_float64(0.5));
    /* IfBlock1:then:IfBlock2: */
    if (outC->IfBlock2_clock_then_IfBlock1) {
      outC->_L1_then_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
      _4_calculatedAcceleration_partial = outC->_L1_then_IfBlock2_then_IfBlock1;
      calculatedAcceleration_partial = _4_calculatedAcceleration_partial;
    }
    else {
      outC->else_clock_IfBlock2_then_IfBlock1 = currentSpeed < outC->realTargetSpeed;
      /* IfBlock1:then:IfBlock2:else: */
      if (outC->else_clock_IfBlock2_then_IfBlock1) {
        outC->_L16_then_else_IfBlock2_then_IfBlock1 = cSimulationTractionBoost_Toolbox;
        outC->_L14_then_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(5.5);
        outC->_L5_then_else_IfBlock2_then_IfBlock1 = currentSpeed;
        outC->_L6_then_else_IfBlock2_then_IfBlock1 = outC->realTargetSpeed;
        outC->_L7_then_else_IfBlock2_then_IfBlock1 =
          outC->_L6_then_else_IfBlock2_then_IfBlock1 -
          outC->_L5_then_else_IfBlock2_then_IfBlock1;
        outC->_L13_then_else_IfBlock2_then_IfBlock1 =
          outC->_L7_then_else_IfBlock2_then_IfBlock1 /
          outC->_L14_then_else_IfBlock2_then_IfBlock1;
        outC->_L10_then_else_IfBlock2_then_IfBlock1 = traction;
        outC->_L11_then_else_IfBlock2_then_IfBlock1 =
          outC->_L10_then_else_IfBlock2_then_IfBlock1 *
          outC->_L13_then_else_IfBlock2_then_IfBlock1;
        outC->_L9_then_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(5.5);
        outC->_L8_then_else_IfBlock2_then_IfBlock1 =
          outC->_L7_then_else_IfBlock2_then_IfBlock1 >
          outC->_L9_then_else_IfBlock2_then_IfBlock1;
        /* IfBlock1:then:IfBlock2:else:then:_L3= */
        if (outC->_L8_then_else_IfBlock2_then_IfBlock1) {
          outC->_L3_then_else_IfBlock2_then_IfBlock1 =
            outC->_L10_then_else_IfBlock2_then_IfBlock1;
        }
        else {
          outC->_L3_then_else_IfBlock2_then_IfBlock1 =
            outC->_L11_then_else_IfBlock2_then_IfBlock1;
        }
        outC->_L15_then_else_IfBlock2_then_IfBlock1 =
          outC->_L3_then_else_IfBlock2_then_IfBlock1 *
          outC->_L16_then_else_IfBlock2_then_IfBlock1;
        _1_calculatedAcceleration_partial = outC->_L15_then_else_IfBlock2_then_IfBlock1;
        _3_calculatedAcceleration_partial = _1_calculatedAcceleration_partial;
      }
      else {
        outC->_L19_else_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(-100.0);
        outC->_L18_else_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(5.5);
        outC->_L17_else_else_IfBlock2_then_IfBlock1 = outC->realTargetSpeed;
        outC->_L14_else_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(5.5);
        outC->_L10_else_else_IfBlock2_then_IfBlock1 = currentSpeed;
        outC->_L9_else_else_IfBlock2_then_IfBlock1 =
          outC->_L10_else_else_IfBlock2_then_IfBlock1 -
          outC->_L17_else_else_IfBlock2_then_IfBlock1;
        outC->_L13_else_else_IfBlock2_then_IfBlock1 =
          outC->_L9_else_else_IfBlock2_then_IfBlock1 /
          outC->_L14_else_else_IfBlock2_then_IfBlock1;
        outC->_L12_else_else_IfBlock2_then_IfBlock1 =
          outC->_L19_else_else_IfBlock2_then_IfBlock1 *
          outC->_L13_else_else_IfBlock2_then_IfBlock1;
        outC->_L15_else_else_IfBlock2_then_IfBlock1 =
          outC->_L9_else_else_IfBlock2_then_IfBlock1 >
          outC->_L18_else_else_IfBlock2_then_IfBlock1;
        /* IfBlock1:then:IfBlock2:else:else:_L16= */
        if (outC->_L15_else_else_IfBlock2_then_IfBlock1) {
          outC->_L16_else_else_IfBlock2_then_IfBlock1 =
            outC->_L19_else_else_IfBlock2_then_IfBlock1;
        }
        else {
          outC->_L16_else_else_IfBlock2_then_IfBlock1 =
            outC->_L12_else_else_IfBlock2_then_IfBlock1;
        }
        _2_calculatedAcceleration_partial = outC->_L16_else_else_IfBlock2_then_IfBlock1;
        _3_calculatedAcceleration_partial = _2_calculatedAcceleration_partial;
      }
      calculatedAcceleration_partial = _3_calculatedAcceleration_partial;
    }
    outC->calculatedAcceleration = calculatedAcceleration_partial;
  }
  else {
    outC->_L27_else_IfBlock1 = cSimulationTractionBoost_Toolbox;
    outC->_L19_else_IfBlock1 = traction;
    outC->_L26_else_IfBlock1 = outC->_L19_else_IfBlock1 * outC->_L27_else_IfBlock1;
    outC->_L17_else_IfBlock1 = brake;
    outC->_L18_else_IfBlock1 = - outC->_L17_else_IfBlock1;
    outC->_L6_else_IfBlock1 = outC->FFS_Output_FlipFlopSet_1;
    /* IfBlock1:else:_L16= */
    if (outC->_L6_else_IfBlock1) {
      outC->_L16_else_IfBlock1 = outC->_L18_else_IfBlock1;
    }
    else {
      outC->_L16_else_IfBlock1 = outC->_L26_else_IfBlock1;
    }
    _5_calculatedAcceleration_partial = outC->_L16_else_IfBlock1;
    outC->calculatedAcceleration = _5_calculatedAcceleration_partial;
    outC->init = kcg_false;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void AFB_init_Toolbox_Physics(outC_AFB_Toolbox_Physics *outC)
{
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_true;
  outC->realTargetSpeed = kcg_lit_float64(0.0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L6_else_IfBlock1 = kcg_true;
  outC->_L9_else_IfBlock1 = kcg_true;
  outC->_L10_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L11_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L12_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L13_else_IfBlock1 = kcg_true;
  outC->_L14_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L16_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L18_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L17_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L19_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L27_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L26_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L1_then_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->else_clock_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L9_else_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L10_else_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L12_else_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L13_else_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L14_else_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L15_else_else_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L16_else_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L17_else_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L18_else_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L19_else_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L14_then_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L13_then_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L11_then_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L10_then_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L9_then_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L8_then_else_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L7_then_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L6_then_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L5_then_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L3_then_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L15_then_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L16_then_else_IfBlock2_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->IfBlock2_clock_then_IfBlock1 = kcg_true;
  outC->_L10_FlipFlopSet_1 = kcg_true;
  outC->_L4_FlipFlopSet_1 = kcg_true;
  outC->_L5_FlipFlopSet_1 = kcg_true;
  outC->_L6_FlipFlopSet_1 = kcg_true;
  outC->_L11_FlipFlopSet_1 = kcg_true;
  outC->_L12_FlipFlopSet_1 = kcg_true;
  outC->_L13_FlipFlopSet_1 = kcg_true;
  outC->Set_FlipFlopSet_1 = kcg_true;
  outC->Reset_FlipFlopSet_1 = kcg_true;
  outC->Init_FlipFlopSet_1 = kcg_true;
  outC->FFS_Output_FlipFlopSet_1 = kcg_true;
  outC->_L2_FlipFlopSet_1 = kcg_true;
  outC->init = kcg_true;
  outC->afbActive = kcg_true;
  outC->calculatedAcceleration = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AFB_reset_Toolbox_Physics(outC_AFB_Toolbox_Physics *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_AFB_Toolbox_Physics(
  SV_AFB_Toolbox_Physics *SV,
  outC_AFB_Toolbox_Physics *outC)
{
  SV->Context__L2_FlipFlopSet_1 = outC->_L2_FlipFlopSet_1;
  SV->Context_init = outC->init;
}

void kcg_load_SV_AFB_Toolbox_Physics(
  outC_AFB_Toolbox_Physics *outC,
  SV_AFB_Toolbox_Physics *SV)
{
  outC->_L2_FlipFlopSet_1 = SV->Context__L2_FlipFlopSet_1;
  outC->init = SV->Context_init;
}

/*
  Expanded instances for: Toolbox::Physics::AFB/
  @1: (digital::FlipFlopSet#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AFB_Toolbox_Physics.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

