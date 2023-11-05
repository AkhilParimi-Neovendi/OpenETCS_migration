/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_PS_PriorityManagement.h"

/* PriorityManagement::From_PS/ */
void From_PS_PriorityManagement(
  /* Condition1/ */
  kcg_bool Condition1,
  /* Condition13/ */
  kcg_bool Condition13,
  /* Condition14/ */
  kcg_bool Condition14,
  /* Condition22/ */
  kcg_bool Condition22,
  /* Condition23/ */
  kcg_bool Condition23,
  /* Condition29/ */
  kcg_bool Condition29,
  /* previousMode_Loc/ */
  T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc,
  outC_From_PS_PriorityManagement *outC)
{
  /* FromPS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg FromPS_To_NewMode_partial;
  /* FromPS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromPS_To_NewMode_partial;
  /* FromPS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromPS_To_NewMode_partial;
  /* FromPS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromPS_To_NewMode_partial;
  /* FromPS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromPS_To_NewMode_partial;
  /* FromPS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromPS_To_NewMode_partial;
  /* FromPS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromPS_To_NewMode_partial;
  /* FromPS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromPS_To_NewMode_partial;
  /* FromPS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _8_FromPS_To_NewMode_partial;
  /* FromPS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _9_FromPS_To_NewMode_partial;
  /* FromPS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _10_FromPS_To_NewMode_partial;
  /* FromPS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _11_FromPS_To_NewMode_partial;

  outC->IfBlock1_clock = Condition1;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    FromPS_To_NewMode_partial = outC->_L1_then_IfBlock1;
    outC->FromPS_To_NewMode = FromPS_To_NewMode_partial;
  }
  else {
    outC->else_clock_IfBlock1 = Condition29;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _11_FromPS_To_NewMode_partial = outC->_L1_then_else_IfBlock1;
      _1_FromPS_To_NewMode_partial = _11_FromPS_To_NewMode_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = Condition13;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _2_FromPS_To_NewMode_partial = outC->_L1_then_else_else_IfBlock1;
        _10_FromPS_To_NewMode_partial = _2_FromPS_To_NewMode_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = Condition22;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
          _9_FromPS_To_NewMode_partial = outC->_L1_then_else_else_else_IfBlock1;
          _3_FromPS_To_NewMode_partial = _9_FromPS_To_NewMode_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = Condition23;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L1_then_else_else_else_else_IfBlock1 = SH_Level_And_Mode_Types_Pkg;
            _4_FromPS_To_NewMode_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _8_FromPS_To_NewMode_partial = _4_FromPS_To_NewMode_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = Condition14;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L1_then_else_else_else_else_else_IfBlock1 = SL_Level_And_Mode_Types_Pkg;
              _7_FromPS_To_NewMode_partial = outC->_L1_then_else_else_else_else_else_IfBlock1;
              _5_FromPS_To_NewMode_partial = _7_FromPS_To_NewMode_partial;
            }
            else {
              outC->_L1_else_else_else_else_else_else_IfBlock1 = previousMode_Loc;
              _6_FromPS_To_NewMode_partial = outC->_L1_else_else_else_else_else_else_IfBlock1;
              _5_FromPS_To_NewMode_partial = _6_FromPS_To_NewMode_partial;
            }
            _8_FromPS_To_NewMode_partial = _5_FromPS_To_NewMode_partial;
          }
          _3_FromPS_To_NewMode_partial = _8_FromPS_To_NewMode_partial;
        }
        _10_FromPS_To_NewMode_partial = _3_FromPS_To_NewMode_partial;
      }
      _1_FromPS_To_NewMode_partial = _10_FromPS_To_NewMode_partial;
    }
    outC->FromPS_To_NewMode = _1_FromPS_To_NewMode_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void From_PS_init_PriorityManagement(outC_From_PS_PriorityManagement *outC)
{
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->_L1_else_else_else_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->FromPS_To_NewMode = NP_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void From_PS_reset_PriorityManagement(outC_From_PS_PriorityManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** From_PS_PriorityManagement.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

