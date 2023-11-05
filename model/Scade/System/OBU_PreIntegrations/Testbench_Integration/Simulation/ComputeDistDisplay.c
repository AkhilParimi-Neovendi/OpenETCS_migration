/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ComputeDistDisplay.h"

/* ComputeDistDisplay/ */
void ComputeDistDisplay(
  /* MaxLinearDistance/ */
  kcg_float32 MaxLinearDistance,
  /* MaxLogDistance/ */
  kcg_float32 MaxLogDistance,
  /* ObjectPosition/ */
  kcg_float32 ObjectPosition,
  /* TrainPosition/ */
  kcg_float32 TrainPosition,
  /* Zoomlevel/ */
  kcg_int32 Zoomlevel,
  outC_ComputeDistDisplay *outC)
{
  /* ObjectScreenYPosition/ */
  static kcg_float32 ObjectScreenYPosition_partial;
  /* ObjectScreenYPosition/ */
  static kcg_float32 _1_ObjectScreenYPosition_partial;
  /* ObjectScreenYPosition/ */
  static kcg_float32 _2_ObjectScreenYPosition_partial;
  /* ObjectScreenYPosition/ */
  static kcg_float32 _3_ObjectScreenYPosition_partial;
  /* ObjectScreenYPosition/ */
  static kcg_float32 _4_ObjectScreenYPosition_partial;
  /* ObjectScreenYPosition/ */
  static kcg_float32 _5_ObjectScreenYPosition_partial;

  outC->_L7 = TrainPosition;
  outC->_L6 = ObjectPosition;
  outC->_L8 = outC->_L6 - outC->_L7;
  outC->l_objectDistance = outC->_L8;
  outC->_L5 = Zoomlevel;
  kcg_copy_array_float32_6(&outC->_L3, (array_float32_6 *) &LinearScaleFactors);
  if ((kcg_lit_int32(0) <= outC->_L5) & (outC->_L5 < kcg_lit_int32(6))) {
    outC->_L2 = outC->_L3[outC->_L5];
  }
  else {
    outC->_L2 = kcg_lit_float32(-1.0);
  }
  outC->linearScaleFactor = outC->_L2;
  outC->IfBlock1_clock = outC->l_objectDistance <= MaxLinearDistance;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L4_then_IfBlock1 = outC->linearScaleFactor;
    outC->_L1_then_IfBlock1 = outC->l_objectDistance;
    outC->_L2_then_IfBlock1 = outC->_L1_then_IfBlock1 / outC->_L4_then_IfBlock1;
    ObjectScreenYPosition_partial = outC->_L2_then_IfBlock1;
    outC->ObjectScreenYPosition = ObjectScreenYPosition_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->l_objectDistance < kcg_lit_float32(0.0);
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L2_then_else_IfBlock1 = kcg_lit_float32(0.0);
      _5_ObjectScreenYPosition_partial = outC->_L2_then_else_IfBlock1;
      _1_ObjectScreenYPosition_partial = _5_ObjectScreenYPosition_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->l_objectDistance > MaxLogDistance;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = kcg_lit_float32(262.0);
        _2_ObjectScreenYPosition_partial = outC->_L1_then_else_else_IfBlock1;
        _4_ObjectScreenYPosition_partial = _2_ObjectScreenYPosition_partial;
      }
      else {
        outC->_L13_else_else_else_IfBlock1 = MaxLinearDistance;
        outC->_L9_else_else_else_IfBlock1 =
          /* IfBlock1:else:else:else:_L9=(mathext::LogR#2)/ */
          LogR32_mathext_mathextimpl(outC->_L13_else_else_else_IfBlock1);
        outC->_L8_else_else_else_IfBlock1 = ScaleLine5;
        outC->_L1_else_else_else_IfBlock1 = outC->l_objectDistance;
        outC->_L2_else_else_else_IfBlock1 =
          /* IfBlock1:else:else:else:_L2=(mathext::LogR#1)/ */
          LogR32_mathext_mathextimpl(outC->_L1_else_else_else_IfBlock1);
        outC->_L3_else_else_else_IfBlock1 = outC->_L2_else_else_else_IfBlock1 -
          outC->_L9_else_else_else_IfBlock1;
        outC->_L6_else_else_else_IfBlock1 = logScaleFactor;
        outC->_L5_else_else_else_IfBlock1 = outC->_L6_else_else_else_IfBlock1 *
          outC->_L3_else_else_else_IfBlock1;
        outC->_L7_else_else_else_IfBlock1 = outC->_L5_else_else_else_IfBlock1 +
          outC->_L8_else_else_else_IfBlock1;
        _3_ObjectScreenYPosition_partial = outC->_L7_else_else_else_IfBlock1;
        _4_ObjectScreenYPosition_partial = _3_ObjectScreenYPosition_partial;
      }
      _1_ObjectScreenYPosition_partial = _4_ObjectScreenYPosition_partial;
    }
    outC->ObjectScreenYPosition = _1_ObjectScreenYPosition_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ComputeDistDisplay_init(outC_ComputeDistDisplay *outC)
{
  static kcg_size idx;

  outC->_L8 = kcg_lit_float32(0.0);
  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L5 = kcg_lit_int32(0);
  for (idx = 0; idx < 6; idx++) {
    outC->_L3[idx] = kcg_lit_float32(0.0);
  }
  outC->_L2 = kcg_lit_float32(0.0);
  outC->l_objectDistance = kcg_lit_float32(0.0);
  outC->linearScaleFactor = kcg_lit_float32(0.0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L2_then_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L2_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L3_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L5_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L6_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L7_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L8_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L9_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L13_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L1_then_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L2_then_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L4_then_IfBlock1 = kcg_lit_float32(0.0);
  outC->ObjectScreenYPosition = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


void ComputeDistDisplay_reset(outC_ComputeDistDisplay *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ComputeDistDisplay.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

