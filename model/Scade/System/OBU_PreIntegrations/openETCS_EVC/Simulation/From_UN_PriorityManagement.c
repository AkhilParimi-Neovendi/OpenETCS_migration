/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_UN_PriorityManagement.h"

/* PriorityManagement::From_UN/ */
void From_UN_PriorityManagement(
  /* Condition1/ */
  kcg_bool Condition1,
  /* Condition5/ */
  kcg_bool Condition5,
  /* Condition13/ */
  kcg_bool Condition13,
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
  /* Condition56/ */
  kcg_bool Condition56,
  /* Condition61/ */
  kcg_bool Condition61,
  /* Condition71/ */
  kcg_bool Condition71,
  /* ConditionUN2TR/ */
  kcg_bool ConditionUN2TR,
  /* previousMode_Loc/ */
  T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc,
  outC_From_UN_PriorityManagement *outC)
{
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _1_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _2_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _3_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _4_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _5_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _6_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _7_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _8_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _9_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _10_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _11_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _12_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _13_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _14_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _15_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _16_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _17_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _18_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _19_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _20_FromUN_To_NewMode_partial;
  /* FromUN_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _21_FromUN_To_NewMode_partial;

  outC->_L2 = Condition45;
  outC->_L5 = Condition44;
  outC->_L8 = outC->_L5 | outC->_L2;
  outC->_L1 = Condition61;
  outC->_L3 = Condition5;
  outC->_L7 = outC->_L3 | outC->_L1;
  outC->IfBlock1_clock = Condition1;
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->else_clock_IfBlock1 = Condition29;
    if (outC->else_clock_IfBlock1) {
    }
    else {
      outC->else_clock_else_IfBlock1 = Condition13;
    }
  }
  outC->Condition2SR = outC->_L8;
  if (outC->IfBlock1_clock) {
  }
  else if (outC->else_clock_IfBlock1) {
  }
  else if (outC->else_clock_else_IfBlock1) {
  }
  else {
    outC->else_clock_else_else_IfBlock1 = outC->Condition2SR;
    if (outC->else_clock_else_else_IfBlock1) {
    }
    else {
      outC->else_clock_else_else_else_IfBlock1 = ConditionUN2TR;
      if (outC->else_clock_else_else_else_IfBlock1) {
      }
      else {
        outC->else_clock_else_else_else_else_IfBlock1 = Condition28;
        if (outC->else_clock_else_else_else_else_IfBlock1) {
        }
        else {
          outC->_5_else_clock_else_else_else_else_else_IfBlock1 = Condition25;
        }
      }
    }
  }
  outC->Condition2SH = outC->_L7;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    FromUN_To_NewMode_partial = outC->_L1_then_IfBlock1;
    outC->FromUN_To_NewMode = FromUN_To_NewMode_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _21_FromUN_To_NewMode_partial = outC->_L1_then_else_IfBlock1;
      _1_FromUN_To_NewMode_partial = _21_FromUN_To_NewMode_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _2_FromUN_To_NewMode_partial = outC->_L1_then_else_else_IfBlock1;
        _20_FromUN_To_NewMode_partial = _2_FromUN_To_NewMode_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = SR_Level_And_Mode_Types_Pkg;
          _19_FromUN_To_NewMode_partial = outC->_L1_then_else_else_else_IfBlock1;
          _3_FromUN_To_NewMode_partial = _19_FromUN_To_NewMode_partial;
        }
        else {
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L1_then_else_else_else_else_IfBlock1 = TR_Level_And_Mode_Types_Pkg;
            _4_FromUN_To_NewMode_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _18_FromUN_To_NewMode_partial = _4_FromUN_To_NewMode_partial;
          }
          else {
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L19_then_else_else_else_else_else_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
              _17_FromUN_To_NewMode_partial =
                outC->_L19_then_else_else_else_else_else_IfBlock1;
              _5_FromUN_To_NewMode_partial = _17_FromUN_To_NewMode_partial;
            }
            else {
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->_5_else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L1_then_else_else_else_else_else_else_IfBlock1 =
                  FS_Level_And_Mode_Types_Pkg;
                _6_FromUN_To_NewMode_partial =
                  outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                _16_FromUN_To_NewMode_partial = _6_FromUN_To_NewMode_partial;
              }
              else {
                outC->_1_else_clock_else_else_else_else_else_else_IfBlock1 = outC->Condition2SH;
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->_1_else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1 =
                    SH_Level_And_Mode_Types_Pkg;
                  _15_FromUN_To_NewMode_partial =
                    outC->_L2_then_else_else_else_else_else_else_else_IfBlock1;
                  _7_FromUN_To_NewMode_partial = _15_FromUN_To_NewMode_partial;
                }
                else {
                  outC->_4_else_clock_else_else_else_else_else_else_else_IfBlock1 = Condition56;
                  /* IfBlock1:else:else:else:else:else:else:else:else: */
                  if (outC->_4_else_clock_else_else_else_else_else_else_else_IfBlock1) {
                    outC->_L16_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      SN_Level_And_Mode_Types_Pkg;
                    _8_FromUN_To_NewMode_partial =
                      outC->_L16_then_else_else_else_else_else_else_else_else_IfBlock1;
                    _14_FromUN_To_NewMode_partial = _8_FromUN_To_NewMode_partial;
                  }
                  else {
                    outC->_2_else_clock_else_else_else_else_else_else_else_else_IfBlock1 =
                      Condition71;
                    /* IfBlock1:else:else:else:else:else:else:else:else:else: */
                    if (outC->_2_else_clock_else_else_else_else_else_else_else_else_IfBlock1) {
                      outC->_L18_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        LS_Level_And_Mode_Types_Pkg;
                      _13_FromUN_To_NewMode_partial =
                        outC->_L18_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      _9_FromUN_To_NewMode_partial = _13_FromUN_To_NewMode_partial;
                    }
                    else {
                      outC->_3_else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        Condition34;
                      /* IfBlock1:else:else:else:else:else:else:else:else:else:else: */
                      if (outC->_3_else_clock_else_else_else_else_else_else_else_else_else_IfBlock1) {
                        outC->_L17_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          OS_Level_And_Mode_Types_Pkg;
                        _10_FromUN_To_NewMode_partial =
                          outC->_L17_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _12_FromUN_To_NewMode_partial = _10_FromUN_To_NewMode_partial;
                      }
                      else {
                        outC->_L1_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          previousMode_Loc;
                        _11_FromUN_To_NewMode_partial =
                          outC->_L1_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _12_FromUN_To_NewMode_partial = _11_FromUN_To_NewMode_partial;
                      }
                      _9_FromUN_To_NewMode_partial = _12_FromUN_To_NewMode_partial;
                    }
                    _14_FromUN_To_NewMode_partial = _9_FromUN_To_NewMode_partial;
                  }
                  _7_FromUN_To_NewMode_partial = _14_FromUN_To_NewMode_partial;
                }
                _16_FromUN_To_NewMode_partial = _7_FromUN_To_NewMode_partial;
              }
              _5_FromUN_To_NewMode_partial = _16_FromUN_To_NewMode_partial;
            }
            _18_FromUN_To_NewMode_partial = _5_FromUN_To_NewMode_partial;
          }
          _3_FromUN_To_NewMode_partial = _18_FromUN_To_NewMode_partial;
        }
        _20_FromUN_To_NewMode_partial = _3_FromUN_To_NewMode_partial;
      }
      _1_FromUN_To_NewMode_partial = _20_FromUN_To_NewMode_partial;
    }
    outC->FromUN_To_NewMode = _1_FromUN_To_NewMode_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void From_UN_init_PriorityManagement(outC_From_UN_PriorityManagement *outC)
{
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L5 = kcg_true;
  outC->Condition2SR = kcg_true;
  outC->Condition2SH = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L19_then_else_else_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->_5_else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->_4_else_clock_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L18_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->_3_else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->_L17_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->_2_else_clock_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L16_then_else_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->_1_else_clock_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->FromUN_To_NewMode = NP_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void From_UN_reset_PriorityManagement(outC_From_UN_PriorityManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** From_UN_PriorityManagement.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

