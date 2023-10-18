/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_FS_PriorityManagement.h"

/* PriorityManagement::From_FS/ */
void From_FS_PriorityManagement(
  /* Condition1/ */
  kcg_bool Condition1,
  /* Condition5/ */
  kcg_bool Condition5,
  /* Condition6/ */
  kcg_bool Condition6,
  /* Condition13/ */
  kcg_bool Condition13,
  /* Condition15/ */
  kcg_bool Condition15,
  /* Condition21/ */
  kcg_bool Condition21,
  /* Condition28/ */
  kcg_bool Condition28,
  /* Condition29/ */
  kcg_bool Condition29,
  /* Condition37/ */
  kcg_bool Condition37,
  /* Condition40/ */
  kcg_bool Condition40,
  /* Condition46/ */
  kcg_bool Condition46,
  /* Condition50/ */
  kcg_bool Condition50,
  /* Condition51/ */
  kcg_bool Condition51,
  /* Condition56/ */
  kcg_bool Condition56,
  /* Condition59/ */
  kcg_bool Condition59,
  /* Condition70/ */
  kcg_bool Condition70,
  /* Condition72/ */
  kcg_bool Condition72,
  /* ConditionFS2TR/ */
  kcg_bool ConditionFS2TR,
  /* previousMode_Loc/ */
  T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc,
  outC_From_FS_PriorityManagement *outC)
{
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _8_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _9_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _10_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _11_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _12_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _13_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _14_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _15_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _16_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _17_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _18_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _19_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _20_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _21_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _22_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _23_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _24_FromFS_To_NewMode_partial;
  /* FromFS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _25_FromFS_To_NewMode_partial;

  outC->_L11 = Condition40;
  outC->_L10 = Condition15;
  outC->_L14 = outC->_L10 | outC->_L11;
  outC->_L9 = Condition72;
  outC->_L8 = Condition70;
  outC->_L13 = outC->_L8 | outC->_L9;
  outC->_L5 = Condition51;
  outC->_L4 = Condition50;
  outC->_L3 = Condition6;
  outC->_L2 = Condition5;
  outC->_L12 = outC->_L2 | outC->_L3 | outC->_L4 | outC->_L5;
  outC->Condition2OS = outC->_L14;
  outC->Condition2LS = outC->_L13;
  outC->Condition2SH = outC->_L12;
  outC->IfBlock1_clock = Condition1;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    FromFS_To_NewMode_partial = outC->_L1_then_IfBlock1;
    outC->FromFS_To_NewMode = FromFS_To_NewMode_partial;
  }
  else {
    outC->else_clock_IfBlock1 = Condition29;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _25_FromFS_To_NewMode_partial = outC->_L1_then_else_IfBlock1;
      _1_FromFS_To_NewMode_partial = _25_FromFS_To_NewMode_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = Condition13;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _2_FromFS_To_NewMode_partial = outC->_L1_then_else_else_IfBlock1;
        _24_FromFS_To_NewMode_partial = _2_FromFS_To_NewMode_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = ConditionFS2TR;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = TR_Level_And_Mode_Types_Pkg;
          _23_FromFS_To_NewMode_partial = outC->_L1_then_else_else_else_IfBlock1;
          _3_FromFS_To_NewMode_partial = _23_FromFS_To_NewMode_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = Condition28;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L1_then_else_else_else_else_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
            _4_FromFS_To_NewMode_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _22_FromFS_To_NewMode_partial = _4_FromFS_To_NewMode_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = Condition46;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L1_then_else_else_else_else_else_IfBlock1 = NL_Level_And_Mode_Types_Pkg;
              _21_FromFS_To_NewMode_partial =
                outC->_L1_then_else_else_else_else_else_IfBlock1;
              _5_FromFS_To_NewMode_partial = _21_FromFS_To_NewMode_partial;
            }
            else {
              outC->else_clock_else_else_else_else_else_IfBlock1 = outC->Condition2SH;
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L2_then_else_else_else_else_else_else_IfBlock1 =
                  SH_Level_And_Mode_Types_Pkg;
                _6_FromFS_To_NewMode_partial =
                  outC->_L2_then_else_else_else_else_else_else_IfBlock1;
                _20_FromFS_To_NewMode_partial = _6_FromFS_To_NewMode_partial;
              }
              else {
                outC->else_clock_else_else_else_else_else_else_IfBlock1 = Condition56;
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L1_then_else_else_else_else_else_else_else_IfBlock1 =
                    SN_Level_And_Mode_Types_Pkg;
                  _19_FromFS_To_NewMode_partial =
                    outC->_L1_then_else_else_else_else_else_else_else_IfBlock1;
                  _7_FromFS_To_NewMode_partial = _19_FromFS_To_NewMode_partial;
                }
                else {
                  outC->else_clock_else_else_else_else_else_else_else_IfBlock1 =
                    outC->Condition2LS;
                  /* IfBlock1:else:else:else:else:else:else:else:else: */
                  if (outC->else_clock_else_else_else_else_else_else_else_IfBlock1) {
                    outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      LS_Level_And_Mode_Types_Pkg;
                    _8_FromFS_To_NewMode_partial =
                      outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1;
                    _18_FromFS_To_NewMode_partial = _8_FromFS_To_NewMode_partial;
                  }
                  else {
                    outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1 = Condition37;
                    /* IfBlock1:else:else:else:else:else:else:else:else:else: */
                    if (outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1) {
                      outC->_L1_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        SR_Level_And_Mode_Types_Pkg;
                      _17_FromFS_To_NewMode_partial =
                        outC->_L1_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      _9_FromFS_To_NewMode_partial = _17_FromFS_To_NewMode_partial;
                    }
                    else {
                      outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        outC->Condition2OS;
                      /* IfBlock1:else:else:else:else:else:else:else:else:else:else: */
                      if (outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1) {
                        outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          OS_Level_And_Mode_Types_Pkg;
                        _10_FromFS_To_NewMode_partial =
                          outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _16_FromFS_To_NewMode_partial = _10_FromFS_To_NewMode_partial;
                      }
                      else {
                        outC->else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          Condition21;
                        /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else: */
                        if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                          outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            UN_Level_And_Mode_Types_Pkg;
                          _15_FromFS_To_NewMode_partial =
                            outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                          _11_FromFS_To_NewMode_partial = _15_FromFS_To_NewMode_partial;
                        }
                        else {
                          outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            Condition59;
                          /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else: */
                          if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                            outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              RV_Level_And_Mode_Types_Pkg;
                            _12_FromFS_To_NewMode_partial =
                              outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            _14_FromFS_To_NewMode_partial = _12_FromFS_To_NewMode_partial;
                          }
                          else {
                            outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              previousMode_Loc;
                            _13_FromFS_To_NewMode_partial =
                              outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            _14_FromFS_To_NewMode_partial = _13_FromFS_To_NewMode_partial;
                          }
                          _11_FromFS_To_NewMode_partial = _14_FromFS_To_NewMode_partial;
                        }
                        _16_FromFS_To_NewMode_partial = _11_FromFS_To_NewMode_partial;
                      }
                      _9_FromFS_To_NewMode_partial = _16_FromFS_To_NewMode_partial;
                    }
                    _18_FromFS_To_NewMode_partial = _9_FromFS_To_NewMode_partial;
                  }
                  _7_FromFS_To_NewMode_partial = _18_FromFS_To_NewMode_partial;
                }
                _20_FromFS_To_NewMode_partial = _7_FromFS_To_NewMode_partial;
              }
              _5_FromFS_To_NewMode_partial = _20_FromFS_To_NewMode_partial;
            }
            _22_FromFS_To_NewMode_partial = _5_FromFS_To_NewMode_partial;
          }
          _3_FromFS_To_NewMode_partial = _22_FromFS_To_NewMode_partial;
        }
        _24_FromFS_To_NewMode_partial = _3_FromFS_To_NewMode_partial;
      }
      _1_FromFS_To_NewMode_partial = _24_FromFS_To_NewMode_partial;
    }
    outC->FromFS_To_NewMode = _1_FromFS_To_NewMode_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void From_FS_init_PriorityManagement(outC_From_FS_PriorityManagement *outC)
{
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->Condition2OS = kcg_true;
  outC->Condition2LS = kcg_true;
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
  outC->FromFS_To_NewMode = NP_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void From_FS_reset_PriorityManagement(outC_From_FS_PriorityManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** From_FS_PriorityManagement.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

