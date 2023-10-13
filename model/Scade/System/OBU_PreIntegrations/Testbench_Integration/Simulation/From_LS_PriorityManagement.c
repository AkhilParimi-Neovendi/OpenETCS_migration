/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_LS_PriorityManagement.h"

/* PriorityManagement::From_LS/ */
void From_LS_PriorityManagement(
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
  /* Condition31/ */
  kcg_bool Condition31,
  /* Condition32/ */
  kcg_bool Condition32,
  /* Condition37/ */
  kcg_bool Condition37,
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
  /* Condition73/ */
  kcg_bool Condition73,
  /* ConditionLS2TR/ */
  kcg_bool ConditionLS2TR,
  /* previousMode_Loc/ */
  T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc,
  outC_From_LS_PriorityManagement *outC)
{
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _8_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _9_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _10_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _11_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _12_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _13_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _14_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _15_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _16_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _17_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _18_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _19_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _20_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _21_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _22_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _23_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _24_FromLS_To_NewMode_partial;
  /* FromLS_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _25_FromLS_To_NewMode_partial;

  outC->_L9 = Condition73;
  outC->_L5 = Condition15;
  outC->_L14 = outC->_L5 | outC->_L9;
  outC->_L1 = Condition32;
  outC->_L6 = Condition31;
  outC->_L13 = outC->_L6 | outC->_L1;
  outC->_L2 = Condition51;
  outC->_L8 = Condition50;
  outC->_L4 = Condition6;
  outC->_L11 = Condition5;
  outC->_L12 = outC->_L11 | outC->_L4 | outC->_L8 | outC->_L2;
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
        outC->else_clock_else_else_IfBlock1 = ConditionLS2TR;
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
    }
  }
  outC->Condition2FS = outC->_L13;
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
  else if (outC->else_clock_else_else_else_else_else_IfBlock1) {
  }
  else if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
  }
  else {
    outC->else_clock_else_else_else_else_else_else_else_IfBlock1 =
      outC->Condition2FS;
    if (outC->else_clock_else_else_else_else_else_else_else_IfBlock1) {
    }
    else {
      outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1 = Condition37;
    }
  }
  outC->Condition2OS = outC->_L14;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    FromLS_To_NewMode_partial = outC->_L1_then_IfBlock1;
    outC->FromLS_To_NewMode = FromLS_To_NewMode_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _25_FromLS_To_NewMode_partial = outC->_L1_then_else_IfBlock1;
      _1_FromLS_To_NewMode_partial = _25_FromLS_To_NewMode_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _2_FromLS_To_NewMode_partial = outC->_L1_then_else_else_IfBlock1;
        _24_FromLS_To_NewMode_partial = _2_FromLS_To_NewMode_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = TR_Level_And_Mode_Types_Pkg;
          _23_FromLS_To_NewMode_partial = outC->_L1_then_else_else_else_IfBlock1;
          _3_FromLS_To_NewMode_partial = _23_FromLS_To_NewMode_partial;
        }
        else {
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L1_then_else_else_else_else_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
            _4_FromLS_To_NewMode_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _22_FromLS_To_NewMode_partial = _4_FromLS_To_NewMode_partial;
          }
          else {
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L1_then_else_else_else_else_else_IfBlock1 = NL_Level_And_Mode_Types_Pkg;
              _21_FromLS_To_NewMode_partial =
                outC->_L1_then_else_else_else_else_else_IfBlock1;
              _5_FromLS_To_NewMode_partial = _21_FromLS_To_NewMode_partial;
            }
            else {
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L2_then_else_else_else_else_else_else_IfBlock1 =
                  SH_Level_And_Mode_Types_Pkg;
                _6_FromLS_To_NewMode_partial =
                  outC->_L2_then_else_else_else_else_else_else_IfBlock1;
                _20_FromLS_To_NewMode_partial = _6_FromLS_To_NewMode_partial;
              }
              else {
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L1_then_else_else_else_else_else_else_else_IfBlock1 =
                    SN_Level_And_Mode_Types_Pkg;
                  _19_FromLS_To_NewMode_partial =
                    outC->_L1_then_else_else_else_else_else_else_else_IfBlock1;
                  _7_FromLS_To_NewMode_partial = _19_FromLS_To_NewMode_partial;
                }
                else {
                  /* IfBlock1:else:else:else:else:else:else:else:else: */
                  if (outC->else_clock_else_else_else_else_else_else_else_IfBlock1) {
                    outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      FS_Level_And_Mode_Types_Pkg;
                    _8_FromLS_To_NewMode_partial =
                      outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1;
                    _18_FromLS_To_NewMode_partial = _8_FromLS_To_NewMode_partial;
                  }
                  else {
                    /* IfBlock1:else:else:else:else:else:else:else:else:else: */
                    if (outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1) {
                      outC->_L1_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        SR_Level_And_Mode_Types_Pkg;
                      _17_FromLS_To_NewMode_partial =
                        outC->_L1_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      _9_FromLS_To_NewMode_partial = _17_FromLS_To_NewMode_partial;
                    }
                    else {
                      outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        outC->Condition2OS;
                      /* IfBlock1:else:else:else:else:else:else:else:else:else:else: */
                      if (outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1) {
                        outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          OS_Level_And_Mode_Types_Pkg;
                        _10_FromLS_To_NewMode_partial =
                          outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _16_FromLS_To_NewMode_partial = _10_FromLS_To_NewMode_partial;
                      }
                      else {
                        outC->else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          Condition21;
                        /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else: */
                        if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                          outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            UN_Level_And_Mode_Types_Pkg;
                          _15_FromLS_To_NewMode_partial =
                            outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                          _11_FromLS_To_NewMode_partial = _15_FromLS_To_NewMode_partial;
                        }
                        else {
                          outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            Condition59;
                          /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else: */
                          if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                            outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              RV_Level_And_Mode_Types_Pkg;
                            _12_FromLS_To_NewMode_partial =
                              outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            _14_FromLS_To_NewMode_partial = _12_FromLS_To_NewMode_partial;
                          }
                          else {
                            outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              previousMode_Loc;
                            _13_FromLS_To_NewMode_partial =
                              outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            _14_FromLS_To_NewMode_partial = _13_FromLS_To_NewMode_partial;
                          }
                          _11_FromLS_To_NewMode_partial = _14_FromLS_To_NewMode_partial;
                        }
                        _16_FromLS_To_NewMode_partial = _11_FromLS_To_NewMode_partial;
                      }
                      _9_FromLS_To_NewMode_partial = _16_FromLS_To_NewMode_partial;
                    }
                    _18_FromLS_To_NewMode_partial = _9_FromLS_To_NewMode_partial;
                  }
                  _7_FromLS_To_NewMode_partial = _18_FromLS_To_NewMode_partial;
                }
                _20_FromLS_To_NewMode_partial = _7_FromLS_To_NewMode_partial;
              }
              _5_FromLS_To_NewMode_partial = _20_FromLS_To_NewMode_partial;
            }
            _22_FromLS_To_NewMode_partial = _5_FromLS_To_NewMode_partial;
          }
          _3_FromLS_To_NewMode_partial = _22_FromLS_To_NewMode_partial;
        }
        _24_FromLS_To_NewMode_partial = _3_FromLS_To_NewMode_partial;
      }
      _1_FromLS_To_NewMode_partial = _24_FromLS_To_NewMode_partial;
    }
    outC->FromLS_To_NewMode = _1_FromLS_To_NewMode_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void From_LS_init_PriorityManagement(outC_From_LS_PriorityManagement *outC)
{
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L11 = kcg_true;
  outC->Condition2SH = kcg_true;
  outC->Condition2FS = kcg_true;
  outC->Condition2OS = kcg_true;
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
  outC->FromLS_To_NewMode = NP_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void From_LS_reset_PriorityManagement(outC_From_LS_PriorityManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** From_LS_PriorityManagement.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

