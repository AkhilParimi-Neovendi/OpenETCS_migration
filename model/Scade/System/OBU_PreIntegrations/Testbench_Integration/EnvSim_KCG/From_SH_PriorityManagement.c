/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SH_PriorityManagement.h"

/* PriorityManagement::From_SH/ */
void From_SH_PriorityManagement(
  /* Condition1/ */
  kcg_bool Condition1,
  /* Condtition13/ */
  kcg_bool Condtition13,
  /* Condition19/ */
  kcg_bool Condition19,
  /* Condition26/ */
  kcg_bool Condition26,
  /* Condition27/ */
  kcg_bool Condition27,
  /* Condition29/ */
  kcg_bool Condition29,
  /* Condition30/ */
  kcg_bool Condition30,
  /* Condition46/ */
  kcg_bool Condition46,
  /* ConditionSH2TR/ */
  kcg_bool ConditionSH2TR,
  /* previousMode_Loc/ */
  T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc,
  outC_From_SH_PriorityManagement *outC)
{
  /* FromSH_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg FromSH_To_NewMode_partial;
  /* FromSH_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromSH_To_NewMode_partial;
  /* FromSH_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromSH_To_NewMode_partial;
  /* FromSH_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromSH_To_NewMode_partial;
  /* FromSH_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromSH_To_NewMode_partial;
  /* FromSH_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromSH_To_NewMode_partial;
  /* FromSH_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromSH_To_NewMode_partial;
  /* FromSH_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromSH_To_NewMode_partial;
  /* FromSH_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _8_FromSH_To_NewMode_partial;
  /* FromSH_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _9_FromSH_To_NewMode_partial;
  /* FromSH_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _10_FromSH_To_NewMode_partial;
  /* FromSH_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _11_FromSH_To_NewMode_partial;
  /* FromSH_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _12_FromSH_To_NewMode_partial;
  /* FromSH_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _13_FromSH_To_NewMode_partial;

  outC->_L4 = Condition30;
  outC->_L3 = Condition27;
  outC->_L2 = Condition19;
  outC->_L5 = outC->_L2 | outC->_L3 | outC->_L4;
  outC->Condition2SB = outC->_L5;
  outC->IfBlock1_clock = Condition1;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    FromSH_To_NewMode_partial = outC->_L1_then_IfBlock1;
    outC->FromSH_To_NewMode = FromSH_To_NewMode_partial;
  }
  else {
    outC->else_clock_IfBlock1 = Condition29;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _13_FromSH_To_NewMode_partial = outC->_L1_then_else_IfBlock1;
      _1_FromSH_To_NewMode_partial = _13_FromSH_To_NewMode_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = Condtition13;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _2_FromSH_To_NewMode_partial = outC->_L1_then_else_else_IfBlock1;
        _12_FromSH_To_NewMode_partial = _2_FromSH_To_NewMode_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = ConditionSH2TR;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = TR_Level_And_Mode_Types_Pkg;
          _11_FromSH_To_NewMode_partial = outC->_L1_then_else_else_else_IfBlock1;
          _3_FromSH_To_NewMode_partial = _11_FromSH_To_NewMode_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = outC->Condition2SB;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L1_then_else_else_else_else_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
            _4_FromSH_To_NewMode_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _10_FromSH_To_NewMode_partial = _4_FromSH_To_NewMode_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = Condition46;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L1_then_else_else_else_else_else_IfBlock1 = NL_Level_And_Mode_Types_Pkg;
              _9_FromSH_To_NewMode_partial = outC->_L1_then_else_else_else_else_else_IfBlock1;
              _5_FromSH_To_NewMode_partial = _9_FromSH_To_NewMode_partial;
            }
            else {
              outC->else_clock_else_else_else_else_else_IfBlock1 = Condition26;
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L2_then_else_else_else_else_else_else_IfBlock1 =
                  PS_Level_And_Mode_Types_Pkg;
                _6_FromSH_To_NewMode_partial =
                  outC->_L2_then_else_else_else_else_else_else_IfBlock1;
                _8_FromSH_To_NewMode_partial = _6_FromSH_To_NewMode_partial;
              }
              else {
                outC->_L1_else_else_else_else_else_else_else_IfBlock1 = previousMode_Loc;
                _7_FromSH_To_NewMode_partial =
                  outC->_L1_else_else_else_else_else_else_else_IfBlock1;
                _8_FromSH_To_NewMode_partial = _7_FromSH_To_NewMode_partial;
              }
              _5_FromSH_To_NewMode_partial = _8_FromSH_To_NewMode_partial;
            }
            _10_FromSH_To_NewMode_partial = _5_FromSH_To_NewMode_partial;
          }
          _3_FromSH_To_NewMode_partial = _10_FromSH_To_NewMode_partial;
        }
        _12_FromSH_To_NewMode_partial = _3_FromSH_To_NewMode_partial;
      }
      _1_FromSH_To_NewMode_partial = _12_FromSH_To_NewMode_partial;
    }
    outC->FromSH_To_NewMode = _1_FromSH_To_NewMode_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void From_SH_init_PriorityManagement(outC_From_SH_PriorityManagement *outC)
{
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->Condition2SB = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->FromSH_To_NewMode = NP_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void From_SH_reset_PriorityManagement(outC_From_SH_PriorityManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** From_SH_PriorityManagement.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

