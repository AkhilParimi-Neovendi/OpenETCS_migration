/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SB_PriorityManagement.h"

/* PriorityManagement::From_SB/ */
void From_SB_PriorityManagement(
  /* Condition1/ */
  kcg_bool Condition1,
  /* Condition5/ */
  kcg_bool Condition5,
  /* Condition6/ */
  kcg_bool Condition6,
  /* Condition8/ */
  kcg_bool Condition8,
  /* Condition10/ */
  kcg_bool Condition10,
  /* Condition13/ */
  kcg_bool Condition13,
  /* Condition14/ */
  kcg_bool Condition14,
  /* Condition15/ */
  kcg_bool Condition15,
  /* Condition29/ */
  kcg_bool Condition29,
  /* Condition37/ */
  kcg_bool Condition37,
  /* Condition46/ */
  kcg_bool Condition46,
  /* Condition50/ */
  kcg_bool Condition50,
  /* Condition58/ */
  kcg_bool Condition58,
  /* Condition60/ */
  kcg_bool Condition60,
  /* Condition70/ */
  kcg_bool Condition70,
  /* ConditionSB2TR/ */
  kcg_bool ConditionSB2TR,
  /* previousMode_Loc/ */
  T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc,
  outC_From_SB_PriorityManagement *outC)
{
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _8_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _9_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _10_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _11_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _12_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _13_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _14_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _15_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _16_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _17_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _18_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _19_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _20_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _21_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _22_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _23_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _24_FromSB_To_NewMode_partial;
  /* FromSB_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _25_FromSB_To_NewMode_partial;

  outC->_L9 = Condition37;
  outC->_L8 = Condition8;
  outC->_L11 = outC->_L8 | outC->_L9;
  outC->_L4 = Condition50;
  outC->_L3 = Condition6;
  outC->_L2 = Condition5;
  outC->_L10 = outC->_L2 | outC->_L3 | outC->_L4;
  outC->Condition2SR = outC->_L11;
  outC->Condition2SH = outC->_L10;
  outC->IfBlock1_clock = Condition1;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    FromSB_To_NewMode_partial = outC->_L1_then_IfBlock1;
    outC->FromSB_To_NewMode = FromSB_To_NewMode_partial;
  }
  else {
    outC->else_clock_IfBlock1 = Condition29;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _25_FromSB_To_NewMode_partial = outC->_L1_then_else_IfBlock1;
      _1_FromSB_To_NewMode_partial = _25_FromSB_To_NewMode_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = Condition13;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _2_FromSB_To_NewMode_partial = outC->_L1_then_else_else_IfBlock1;
        _24_FromSB_To_NewMode_partial = _2_FromSB_To_NewMode_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = ConditionSB2TR;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = TR_Level_And_Mode_Types_Pkg;
          _23_FromSB_To_NewMode_partial = outC->_L1_then_else_else_else_IfBlock1;
          _3_FromSB_To_NewMode_partial = _23_FromSB_To_NewMode_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = Condition14;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L1_then_else_else_else_else_IfBlock1 = SL_Level_And_Mode_Types_Pkg;
            _4_FromSB_To_NewMode_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _22_FromSB_To_NewMode_partial = _4_FromSB_To_NewMode_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = Condition46;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L1_then_else_else_else_else_else_IfBlock1 = NL_Level_And_Mode_Types_Pkg;
              _21_FromSB_To_NewMode_partial =
                outC->_L1_then_else_else_else_else_else_IfBlock1;
              _5_FromSB_To_NewMode_partial = _21_FromSB_To_NewMode_partial;
            }
            else {
              outC->else_clock_else_else_else_else_else_IfBlock1 = outC->Condition2SH;
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L2_then_else_else_else_else_else_else_IfBlock1 =
                  SH_Level_And_Mode_Types_Pkg;
                _6_FromSB_To_NewMode_partial =
                  outC->_L2_then_else_else_else_else_else_else_IfBlock1;
                _20_FromSB_To_NewMode_partial = _6_FromSB_To_NewMode_partial;
              }
              else {
                outC->else_clock_else_else_else_else_else_else_IfBlock1 = Condition10;
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L1_then_else_else_else_else_else_else_else_IfBlock1 =
                    FS_Level_And_Mode_Types_Pkg;
                  _19_FromSB_To_NewMode_partial =
                    outC->_L1_then_else_else_else_else_else_else_else_IfBlock1;
                  _7_FromSB_To_NewMode_partial = _19_FromSB_To_NewMode_partial;
                }
                else {
                  outC->else_clock_else_else_else_else_else_else_else_IfBlock1 = Condition70;
                  /* IfBlock1:else:else:else:else:else:else:else:else: */
                  if (outC->else_clock_else_else_else_else_else_else_else_IfBlock1) {
                    outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      LS_Level_And_Mode_Types_Pkg;
                    _8_FromSB_To_NewMode_partial =
                      outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1;
                    _18_FromSB_To_NewMode_partial = _8_FromSB_To_NewMode_partial;
                  }
                  else {
                    outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->Condition2SR;
                    /* IfBlock1:else:else:else:else:else:else:else:else:else: */
                    if (outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1) {
                      outC->_L1_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        SR_Level_And_Mode_Types_Pkg;
                      _17_FromSB_To_NewMode_partial =
                        outC->_L1_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      _9_FromSB_To_NewMode_partial = _17_FromSB_To_NewMode_partial;
                    }
                    else {
                      outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        Condition15;
                      /* IfBlock1:else:else:else:else:else:else:else:else:else:else: */
                      if (outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1) {
                        outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          OS_Level_And_Mode_Types_Pkg;
                        _10_FromSB_To_NewMode_partial =
                          outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _16_FromSB_To_NewMode_partial = _10_FromSB_To_NewMode_partial;
                      }
                      else {
                        outC->else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          Condition60;
                        /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else: */
                        if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                          outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            UN_Level_And_Mode_Types_Pkg;
                          _15_FromSB_To_NewMode_partial =
                            outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                          _11_FromSB_To_NewMode_partial = _15_FromSB_To_NewMode_partial;
                        }
                        else {
                          outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            Condition58;
                          /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else: */
                          if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                            outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              SN_Level_And_Mode_Types_Pkg;
                            _12_FromSB_To_NewMode_partial =
                              outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            _14_FromSB_To_NewMode_partial = _12_FromSB_To_NewMode_partial;
                          }
                          else {
                            outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              previousMode_Loc;
                            _13_FromSB_To_NewMode_partial =
                              outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            _14_FromSB_To_NewMode_partial = _13_FromSB_To_NewMode_partial;
                          }
                          _11_FromSB_To_NewMode_partial = _14_FromSB_To_NewMode_partial;
                        }
                        _16_FromSB_To_NewMode_partial = _11_FromSB_To_NewMode_partial;
                      }
                      _9_FromSB_To_NewMode_partial = _16_FromSB_To_NewMode_partial;
                    }
                    _18_FromSB_To_NewMode_partial = _9_FromSB_To_NewMode_partial;
                  }
                  _7_FromSB_To_NewMode_partial = _18_FromSB_To_NewMode_partial;
                }
                _20_FromSB_To_NewMode_partial = _7_FromSB_To_NewMode_partial;
              }
              _5_FromSB_To_NewMode_partial = _20_FromSB_To_NewMode_partial;
            }
            _22_FromSB_To_NewMode_partial = _5_FromSB_To_NewMode_partial;
          }
          _3_FromSB_To_NewMode_partial = _22_FromSB_To_NewMode_partial;
        }
        _24_FromSB_To_NewMode_partial = _3_FromSB_To_NewMode_partial;
      }
      _1_FromSB_To_NewMode_partial = _24_FromSB_To_NewMode_partial;
    }
    outC->FromSB_To_NewMode = _1_FromSB_To_NewMode_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void From_SB_init_PriorityManagement(outC_From_SB_PriorityManagement *outC)
{
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->Condition2SR = kcg_true;
  outC->Condition2SH = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->FromSB_To_NewMode = NP_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void From_SB_reset_PriorityManagement(outC_From_SB_PriorityManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** From_SB_PriorityManagement.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

