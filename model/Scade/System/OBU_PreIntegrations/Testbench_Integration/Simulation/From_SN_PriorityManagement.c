/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SN_PriorityManagement.h"

/* PriorityManagement::From_SN/ */
void From_SN_PriorityManagement(
  /* Condition1/ */
  kcg_bool Condition1,
  /* Condition5/ */
  kcg_bool Condition5,
  /* Condition13/ */
  kcg_bool Condition13,
  /* Condition21/ */
  kcg_bool Condition21,
  /* Condition25/ */
  kcg_bool Condition25,
  /* Condition28/ */
  kcg_bool Condition28,
  /* Condition29/ */
  kcg_bool Condition29,
  /* Condition34/ */
  kcg_bool Condition34,
  /* Condition44/ */
  kcg_bool Condition44,
  /* Condition45/ */
  kcg_bool Condition45,
  /* Condition61/ */
  kcg_bool Condition61,
  /* Condition71/ */
  kcg_bool Condition71,
  /* ConditionSN2TR/ */
  kcg_bool ConditionSN2TR,
  /* previousMode_Loc/ */
  T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc,
  outC_From_SN_PriorityManagement *outC)
{
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _8_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _9_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _10_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _11_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _12_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _13_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _14_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _15_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _16_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _17_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _18_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _19_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _20_FromSN_To_NewMode_partial;
  /* FromSN_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _21_FromSN_To_NewMode_partial;

  outC->_L4 = Condition45;
  outC->_L3 = Condition44;
  outC->_L9 = outC->_L3 | outC->_L4;
  outC->_L1 = Condition61;
  outC->_L5 = Condition5;
  outC->_L8 = outC->_L5 | outC->_L1;
  outC->Condition2SH = outC->_L8;
  outC->Condition2SR = outC->_L9;
  outC->IfBlock1_clock = Condition1;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    FromSN_To_NewMode_partial = outC->_L1_then_IfBlock1;
    outC->FromSN_To_NewMode = FromSN_To_NewMode_partial;
  }
  else {
    outC->else_clock_IfBlock1 = Condition29;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _21_FromSN_To_NewMode_partial = outC->_L1_then_else_IfBlock1;
      _1_FromSN_To_NewMode_partial = _21_FromSN_To_NewMode_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = Condition13;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _2_FromSN_To_NewMode_partial = outC->_L1_then_else_else_IfBlock1;
        _20_FromSN_To_NewMode_partial = _2_FromSN_To_NewMode_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->Condition2SR;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = SR_Level_And_Mode_Types_Pkg;
          _19_FromSN_To_NewMode_partial = outC->_L1_then_else_else_else_IfBlock1;
          _3_FromSN_To_NewMode_partial = _19_FromSN_To_NewMode_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = ConditionSN2TR;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L1_then_else_else_else_else_IfBlock1 = TR_Level_And_Mode_Types_Pkg;
            _4_FromSN_To_NewMode_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _18_FromSN_To_NewMode_partial = _4_FromSN_To_NewMode_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = Condition28;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L1_then_else_else_else_else_else_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
              _17_FromSN_To_NewMode_partial =
                outC->_L1_then_else_else_else_else_else_IfBlock1;
              _5_FromSN_To_NewMode_partial = _17_FromSN_To_NewMode_partial;
            }
            else {
              outC->else_clock_else_else_else_else_else_IfBlock1 = Condition25;
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L1_then_else_else_else_else_else_else_IfBlock1 =
                  FS_Level_And_Mode_Types_Pkg;
                _6_FromSN_To_NewMode_partial =
                  outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                _16_FromSN_To_NewMode_partial = _6_FromSN_To_NewMode_partial;
              }
              else {
                outC->else_clock_else_else_else_else_else_else_IfBlock1 = outC->Condition2SH;
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1 =
                    SH_Level_And_Mode_Types_Pkg;
                  _15_FromSN_To_NewMode_partial =
                    outC->_L2_then_else_else_else_else_else_else_else_IfBlock1;
                  _7_FromSN_To_NewMode_partial = _15_FromSN_To_NewMode_partial;
                }
                else {
                  outC->else_clock_else_else_else_else_else_else_else_IfBlock1 = Condition21;
                  /* IfBlock1:else:else:else:else:else:else:else:else: */
                  if (outC->else_clock_else_else_else_else_else_else_else_IfBlock1) {
                    outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      UN_Level_And_Mode_Types_Pkg;
                    _8_FromSN_To_NewMode_partial =
                      outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1;
                    _14_FromSN_To_NewMode_partial = _8_FromSN_To_NewMode_partial;
                  }
                  else {
                    outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1 = Condition71;
                    /* IfBlock1:else:else:else:else:else:else:else:else:else: */
                    if (outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1) {
                      outC->_L1_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        LS_Level_And_Mode_Types_Pkg;
                      _13_FromSN_To_NewMode_partial =
                        outC->_L1_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      _9_FromSN_To_NewMode_partial = _13_FromSN_To_NewMode_partial;
                    }
                    else {
                      outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        Condition34;
                      /* IfBlock1:else:else:else:else:else:else:else:else:else:else: */
                      if (outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1) {
                        outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          OS_Level_And_Mode_Types_Pkg;
                        _10_FromSN_To_NewMode_partial =
                          outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _12_FromSN_To_NewMode_partial = _10_FromSN_To_NewMode_partial;
                      }
                      else {
                        outC->_L1_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          previousMode_Loc;
                        _11_FromSN_To_NewMode_partial =
                          outC->_L1_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _12_FromSN_To_NewMode_partial = _11_FromSN_To_NewMode_partial;
                      }
                      _9_FromSN_To_NewMode_partial = _12_FromSN_To_NewMode_partial;
                    }
                    _14_FromSN_To_NewMode_partial = _9_FromSN_To_NewMode_partial;
                  }
                  _7_FromSN_To_NewMode_partial = _14_FromSN_To_NewMode_partial;
                }
                _16_FromSN_To_NewMode_partial = _7_FromSN_To_NewMode_partial;
              }
              _5_FromSN_To_NewMode_partial = _16_FromSN_To_NewMode_partial;
            }
            _18_FromSN_To_NewMode_partial = _5_FromSN_To_NewMode_partial;
          }
          _3_FromSN_To_NewMode_partial = _18_FromSN_To_NewMode_partial;
        }
        _20_FromSN_To_NewMode_partial = _3_FromSN_To_NewMode_partial;
      }
      _1_FromSN_To_NewMode_partial = _20_FromSN_To_NewMode_partial;
    }
    outC->FromSN_To_NewMode = _1_FromSN_To_NewMode_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void From_SN_init_PriorityManagement(outC_From_SN_PriorityManagement *outC)
{
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L1 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_true;
  outC->Condition2SH = kcg_true;
  outC->Condition2SR = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->FromSN_To_NewMode = NP_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void From_SN_reset_PriorityManagement(outC_From_SN_PriorityManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** From_SN_PriorityManagement.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

