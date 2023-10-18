/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SR_PriorityManagement.h"

/* PriorityManagement::From_SR/ */
void From_SR_PriorityManagement(
  /* Condition1/ */
  kcg_bool Condition1,
  /* Condition5/ */
  kcg_bool Condition5,
  /* Condition6/ */
  kcg_bool Condition6,
  /* Condition13/ */
  kcg_bool Condition13,
  /* Condition21/ */
  kcg_bool Condition21,
  /* Condition28/ */
  kcg_bool Condition28,
  /* Condition29/ */
  kcg_bool Condition29,
  /* Condition31/ */
  kcg_bool Condition31,
  /* Condition32/ */
  kcg_bool Condition32,
  /* Condition40/ */
  kcg_bool Condition40,
  /* Condition46/ */
  kcg_bool Condition46,
  /* Condition51/ */
  kcg_bool Condition51,
  /* Condition56/ */
  kcg_bool Condition56,
  /* Condition59/ */
  kcg_bool Condition59,
  /* Condition72/ */
  kcg_bool Condition72,
  /* ConditionSR2TR/ */
  kcg_bool ConditionSR2TR,
  /* previousMode_Loc/ */
  T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc,
  outC_From_SR_PriorityManagement *outC)
{
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _8_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _9_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _10_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _11_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _12_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _13_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _14_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _15_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _16_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _17_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _18_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _19_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _20_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _21_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _22_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _23_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _24_FromSR_To_NewMode_partial;
  /* FromSR_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _25_FromSR_To_NewMode_partial;

  outC->_L2 = Condition32;
  outC->_L1 = Condition31;
  outC->_L13 = outC->_L1 | outC->_L2;
  outC->_L7 = Condition51;
  outC->_L5 = Condition6;
  outC->_L3 = Condition5;
  outC->_L12 = outC->_L3 | outC->_L5 | outC->_L7;
  outC->IfBlock1_clock = Condition1;
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->else_clock_IfBlock1 = Condition29;
    if (outC->else_clock_IfBlock1) {
    }
    else {
      outC->else_clock_else_IfBlock1 = Condition13;
      if (outC->else_clock_else_IfBlock1) {
      }
      else {
        outC->else_clock_else_else_IfBlock1 = ConditionSR2TR;
        if (outC->else_clock_else_else_IfBlock1) {
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = Condition28;
          if (outC->else_clock_else_else_else_IfBlock1) {
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = Condition46;
          }
        }
      }
    }
  }
  outC->Condition2SH = outC->_L12;
  if (outC->IfBlock1_clock) {
  }
  else if (outC->else_clock_IfBlock1) {
  }
  else if (outC->else_clock_else_IfBlock1) {
  }
  else if (outC->else_clock_else_else_IfBlock1) {
  }
  else if (outC->else_clock_else_else_else_IfBlock1) {
  }
  else if (outC->else_clock_else_else_else_else_IfBlock1) {
  }
  else {
    outC->else_clock_else_else_else_else_else_IfBlock1 = outC->Condition2SH;
    if (outC->else_clock_else_else_else_else_else_IfBlock1) {
    }
    else {
      outC->else_clock_else_else_else_else_else_else_IfBlock1 = Condition56;
      if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
      }
      else {
        outC->else_clock_else_else_else_else_else_else_else_IfBlock1 = Condition72;
      }
    }
  }
  outC->Condition2FS = outC->_L13;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    FromSR_To_NewMode_partial = outC->_L1_then_IfBlock1;
    outC->FromSR_To_NewMode = FromSR_To_NewMode_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _25_FromSR_To_NewMode_partial = outC->_L1_then_else_IfBlock1;
      _1_FromSR_To_NewMode_partial = _25_FromSR_To_NewMode_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _2_FromSR_To_NewMode_partial = outC->_L1_then_else_else_IfBlock1;
        _24_FromSR_To_NewMode_partial = _2_FromSR_To_NewMode_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = TR_Level_And_Mode_Types_Pkg;
          _23_FromSR_To_NewMode_partial = outC->_L1_then_else_else_else_IfBlock1;
          _3_FromSR_To_NewMode_partial = _23_FromSR_To_NewMode_partial;
        }
        else {
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L1_then_else_else_else_else_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
            _4_FromSR_To_NewMode_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _22_FromSR_To_NewMode_partial = _4_FromSR_To_NewMode_partial;
          }
          else {
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L1_then_else_else_else_else_else_IfBlock1 = NL_Level_And_Mode_Types_Pkg;
              _21_FromSR_To_NewMode_partial =
                outC->_L1_then_else_else_else_else_else_IfBlock1;
              _5_FromSR_To_NewMode_partial = _21_FromSR_To_NewMode_partial;
            }
            else {
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L2_then_else_else_else_else_else_else_IfBlock1 =
                  SH_Level_And_Mode_Types_Pkg;
                _6_FromSR_To_NewMode_partial =
                  outC->_L2_then_else_else_else_else_else_else_IfBlock1;
                _20_FromSR_To_NewMode_partial = _6_FromSR_To_NewMode_partial;
              }
              else {
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L1_then_else_else_else_else_else_else_else_IfBlock1 =
                    SN_Level_And_Mode_Types_Pkg;
                  _19_FromSR_To_NewMode_partial =
                    outC->_L1_then_else_else_else_else_else_else_else_IfBlock1;
                  _7_FromSR_To_NewMode_partial = _19_FromSR_To_NewMode_partial;
                }
                else {
                  /* IfBlock1:else:else:else:else:else:else:else:else: */
                  if (outC->else_clock_else_else_else_else_else_else_else_IfBlock1) {
                    outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      LS_Level_And_Mode_Types_Pkg;
                    _8_FromSR_To_NewMode_partial =
                      outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1;
                    _18_FromSR_To_NewMode_partial = _8_FromSR_To_NewMode_partial;
                  }
                  else {
                    outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->Condition2FS;
                    /* IfBlock1:else:else:else:else:else:else:else:else:else: */
                    if (outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1) {
                      outC->_L1_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        SR_Level_And_Mode_Types_Pkg;
                      _17_FromSR_To_NewMode_partial =
                        outC->_L1_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      _9_FromSR_To_NewMode_partial = _17_FromSR_To_NewMode_partial;
                    }
                    else {
                      outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        Condition40;
                      /* IfBlock1:else:else:else:else:else:else:else:else:else:else: */
                      if (outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1) {
                        outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          OS_Level_And_Mode_Types_Pkg;
                        _10_FromSR_To_NewMode_partial =
                          outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _16_FromSR_To_NewMode_partial = _10_FromSR_To_NewMode_partial;
                      }
                      else {
                        outC->else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          Condition21;
                        /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else: */
                        if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                          outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            UN_Level_And_Mode_Types_Pkg;
                          _15_FromSR_To_NewMode_partial =
                            outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                          _11_FromSR_To_NewMode_partial = _15_FromSR_To_NewMode_partial;
                        }
                        else {
                          outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            Condition59;
                          /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else: */
                          if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                            outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              RV_Level_And_Mode_Types_Pkg;
                            _12_FromSR_To_NewMode_partial =
                              outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            _14_FromSR_To_NewMode_partial = _12_FromSR_To_NewMode_partial;
                          }
                          else {
                            outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              previousMode_Loc;
                            _13_FromSR_To_NewMode_partial =
                              outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            _14_FromSR_To_NewMode_partial = _13_FromSR_To_NewMode_partial;
                          }
                          _11_FromSR_To_NewMode_partial = _14_FromSR_To_NewMode_partial;
                        }
                        _16_FromSR_To_NewMode_partial = _11_FromSR_To_NewMode_partial;
                      }
                      _9_FromSR_To_NewMode_partial = _16_FromSR_To_NewMode_partial;
                    }
                    _18_FromSR_To_NewMode_partial = _9_FromSR_To_NewMode_partial;
                  }
                  _7_FromSR_To_NewMode_partial = _18_FromSR_To_NewMode_partial;
                }
                _20_FromSR_To_NewMode_partial = _7_FromSR_To_NewMode_partial;
              }
              _5_FromSR_To_NewMode_partial = _20_FromSR_To_NewMode_partial;
            }
            _22_FromSR_To_NewMode_partial = _5_FromSR_To_NewMode_partial;
          }
          _3_FromSR_To_NewMode_partial = _22_FromSR_To_NewMode_partial;
        }
        _24_FromSR_To_NewMode_partial = _3_FromSR_To_NewMode_partial;
      }
      _1_FromSR_To_NewMode_partial = _24_FromSR_To_NewMode_partial;
    }
    outC->FromSR_To_NewMode = _1_FromSR_To_NewMode_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void From_SR_init_PriorityManagement(outC_From_SR_PriorityManagement *outC)
{
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L7 = kcg_true;
  outC->Condition2SH = kcg_true;
  outC->Condition2FS = kcg_true;
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
  outC->FromSR_To_NewMode = NP_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void From_SR_reset_PriorityManagement(outC_From_SR_PriorityManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** From_SR_PriorityManagement.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

