/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_TR_PriorityManagement.h"

/* PriorityManagement::From_TR/ */
void From_TR_PriorityManagement(
  /* Condition1/ */
  kcg_bool Condition1,
  /* Condition7/ */
  kcg_bool Condition7,
  /* Condition13/ */
  kcg_bool Condition13,
  /* Condition29/ */
  kcg_bool Condition29,
  /* Condition62/ */
  kcg_bool Condition62,
  /* Condition63/ */
  kcg_bool Condition63,
  /* Condition68/ */
  kcg_bool Condition68,
  /* previousMode_Loc/ */
  T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc,
  outC_From_TR_PriorityManagement *outC)
{
  /* FromTR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg FromTR_To_NewMode_partial;
  /* FromTR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromTR_To_NewMode_partial;
  /* FromTR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromTR_To_NewMode_partial;
  /* FromTR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromTR_To_NewMode_partial;
  /* FromTR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromTR_To_NewMode_partial;
  /* FromTR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromTR_To_NewMode_partial;
  /* FromTR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromTR_To_NewMode_partial;
  /* FromTR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromTR_To_NewMode_partial;
  /* FromTR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _8_FromTR_To_NewMode_partial;
  /* FromTR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _9_FromTR_To_NewMode_partial;
  /* FromTR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _10_FromTR_To_NewMode_partial;
  /* FromTR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _11_FromTR_To_NewMode_partial;
  /* FromTR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _12_FromTR_To_NewMode_partial;
  /* FromTR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _13_FromTR_To_NewMode_partial;

  outC->IfBlock1_clock = Condition1;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    FromTR_To_NewMode_partial = outC->_L1_then_IfBlock1;
    outC->FromTR_To_NewMode = FromTR_To_NewMode_partial;
  }
  else {
    outC->else_clock_IfBlock1 = Condition29;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _13_FromTR_To_NewMode_partial = outC->_L1_then_else_IfBlock1;
      _1_FromTR_To_NewMode_partial = _13_FromTR_To_NewMode_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = Condition13;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _2_FromTR_To_NewMode_partial = outC->_L1_then_else_else_IfBlock1;
        _12_FromTR_To_NewMode_partial = _2_FromTR_To_NewMode_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = Condition68;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = SH_Level_And_Mode_Types_Pkg;
          _11_FromTR_To_NewMode_partial = outC->_L1_then_else_else_else_IfBlock1;
          _3_FromTR_To_NewMode_partial = _11_FromTR_To_NewMode_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = Condition7;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L1_then_else_else_else_else_IfBlock1 = PT_Level_And_Mode_Types_Pkg;
            _4_FromTR_To_NewMode_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _10_FromTR_To_NewMode_partial = _4_FromTR_To_NewMode_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = Condition62;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L1_then_else_else_else_else_else_IfBlock1 = UN_Level_And_Mode_Types_Pkg;
              _9_FromTR_To_NewMode_partial = outC->_L1_then_else_else_else_else_else_IfBlock1;
              _5_FromTR_To_NewMode_partial = _9_FromTR_To_NewMode_partial;
            }
            else {
              outC->else_clock_else_else_else_else_else_IfBlock1 = Condition63;
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L1_then_else_else_else_else_else_else_IfBlock1 =
                  SN_Level_And_Mode_Types_Pkg;
                _6_FromTR_To_NewMode_partial =
                  outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                _8_FromTR_To_NewMode_partial = _6_FromTR_To_NewMode_partial;
              }
              else {
                outC->_L1_else_else_else_else_else_else_else_IfBlock1 = previousMode_Loc;
                _7_FromTR_To_NewMode_partial =
                  outC->_L1_else_else_else_else_else_else_else_IfBlock1;
                _8_FromTR_To_NewMode_partial = _7_FromTR_To_NewMode_partial;
              }
              _5_FromTR_To_NewMode_partial = _8_FromTR_To_NewMode_partial;
            }
            _10_FromTR_To_NewMode_partial = _5_FromTR_To_NewMode_partial;
          }
          _3_FromTR_To_NewMode_partial = _10_FromTR_To_NewMode_partial;
        }
        _12_FromTR_To_NewMode_partial = _3_FromTR_To_NewMode_partial;
      }
      _1_FromTR_To_NewMode_partial = _12_FromTR_To_NewMode_partial;
    }
    outC->FromTR_To_NewMode = _1_FromTR_To_NewMode_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void From_TR_init_PriorityManagement(outC_From_TR_PriorityManagement *outC)
{
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->_L1_then_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->FromTR_To_NewMode = NP_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void From_TR_reset_PriorityManagement(outC_From_TR_PriorityManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** From_TR_PriorityManagement.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

