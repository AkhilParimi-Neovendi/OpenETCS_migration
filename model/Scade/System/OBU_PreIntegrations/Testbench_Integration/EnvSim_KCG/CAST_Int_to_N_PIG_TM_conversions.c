/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_N_PIG_TM_conversions.h"

/* TM_conversions::CAST_Int_to_N_PIG/ */
void CAST_Int_to_N_PIG_TM_conversions(
  /* n_pig_int/ */
  kcg_int64 n_pig_int,
  outC_CAST_Int_to_N_PIG_TM_conversions *outC)
{
  /* n_pig/ */
  static N_PIG n_pig_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* n_pig/ */
  static N_PIG _1_n_pig_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* n_pig/ */
  static N_PIG _3_n_pig_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* n_pig/ */
  static N_PIG _5_n_pig_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* n_pig/ */
  static N_PIG _7_n_pig_partial;
  /* error/ */
  static kcg_bool _8_error_partial;
  /* n_pig/ */
  static N_PIG _9_n_pig_partial;
  /* error/ */
  static kcg_bool _10_error_partial;
  /* n_pig/ */
  static N_PIG _11_n_pig_partial;
  /* error/ */
  static kcg_bool _12_error_partial;
  /* n_pig/ */
  static N_PIG _13_n_pig_partial;
  /* error/ */
  static kcg_bool _14_error_partial;
  /* error/ */
  static kcg_bool _15_error_partial;
  /* n_pig/ */
  static N_PIG _16_n_pig_partial;
  /* error/ */
  static kcg_bool _17_error_partial;
  /* n_pig/ */
  static N_PIG _18_n_pig_partial;
  /* error/ */
  static kcg_bool _19_error_partial;
  /* n_pig/ */
  static N_PIG _20_n_pig_partial;
  /* error/ */
  static kcg_bool _21_error_partial;
  /* n_pig/ */
  static N_PIG _22_n_pig_partial;
  /* error/ */
  static kcg_bool _23_error_partial;
  /* n_pig/ */
  static N_PIG _24_n_pig_partial;
  /* error/ */
  static kcg_bool _25_error_partial;
  /* n_pig/ */
  static N_PIG _26_n_pig_partial;
  /* error/ */
  static kcg_bool _27_error_partial;
  /* n_pig/ */
  static N_PIG _28_n_pig_partial;
  /* error/ */
  static kcg_bool _29_error_partial;
  /* n_pig/ */
  static N_PIG _30_n_pig_partial;
  static kcg_bool noname;

  outC->_L2 = n_pig_int;
  outC->n_pig_in = outC->_L2;
  outC->IfBlock1_clock = outC->n_pig_in == INT_N_PIG_1st_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = kcg_false;
    error_partial = outC->_L3_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->n_pig_in == INT_N_PIG_2nd_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = kcg_false;
      _29_error_partial = outC->_L3_then_else_IfBlock1;
      _2_error_partial = _29_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->n_pig_in == INT_N_PIG_3rd_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L4_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L4_then_else_else_IfBlock1;
        _27_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->n_pig_in ==
          INT_N_PIG_4th_TM_conversions;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L3_then_else_else_else_IfBlock1 = kcg_false;
          _25_error_partial = outC->_L3_then_else_else_else_IfBlock1;
          _6_error_partial = _25_error_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = outC->n_pig_in ==
            INT_N_PIG_5th_TM_conversions;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L3_then_else_else_else_else_IfBlock1 = kcg_false;
            _8_error_partial = outC->_L3_then_else_else_else_else_IfBlock1;
            _23_error_partial = _8_error_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = outC->n_pig_in ==
              INT_N_PIG_6th_TM_conversions;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L4_then_else_else_else_else_else_IfBlock1 = kcg_false;
              _21_error_partial = outC->_L4_then_else_else_else_else_else_IfBlock1;
              _10_error_partial = _21_error_partial;
            }
            else {
              outC->else_clock_else_else_else_else_else_IfBlock1 =
                outC->n_pig_in == INT_N_PIG_7th_TM_conversions;
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L3_then_else_else_else_else_else_else_IfBlock1 = kcg_false;
                _12_error_partial = outC->_L3_then_else_else_else_else_else_else_IfBlock1;
                _19_error_partial = _12_error_partial;
              }
              else {
                outC->else_clock_else_else_else_else_else_else_IfBlock1 =
                  outC->n_pig_in == INT_N_PIG_8th_TM_conversions;
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L4_then_else_else_else_else_else_else_else_IfBlock1 = kcg_false;
                  _17_error_partial = outC->_L4_then_else_else_else_else_else_else_else_IfBlock1;
                  _14_error_partial = _17_error_partial;
                }
                else {
                  outC->_L3_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
                  _15_error_partial = outC->_L3_else_else_else_else_else_else_else_else_IfBlock1;
                  _14_error_partial = _15_error_partial;
                }
                _19_error_partial = _14_error_partial;
              }
              _10_error_partial = _19_error_partial;
            }
            _23_error_partial = _10_error_partial;
          }
          _6_error_partial = _23_error_partial;
        }
        _27_error_partial = _6_error_partial;
      }
      _2_error_partial = _27_error_partial;
    }
    outC->error = _2_error_partial;
  }
  outC->_L4 = outC->error;
  noname = outC->_L4;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L2_then_IfBlock1 = ENUM_N_PIG_1st_TM_conversions;
    n_pig_partial = outC->_L2_then_IfBlock1;
    outC->n_pig = n_pig_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = ENUM_N_PIG_2nd_TM_conversions;
      _30_n_pig_partial = outC->_L1_then_else_IfBlock1;
      _1_n_pig_partial = _30_n_pig_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = ENUM_N_PIG_3rd_TM_conversions;
        _3_n_pig_partial = outC->_L1_then_else_else_IfBlock1;
        _28_n_pig_partial = _3_n_pig_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = ENUM_N_PIG_4th_TM_conversions;
          _26_n_pig_partial = outC->_L1_then_else_else_else_IfBlock1;
          _5_n_pig_partial = _26_n_pig_partial;
        }
        else {
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L1_then_else_else_else_else_IfBlock1 = ENUM_N_PIG_5th_TM_conversions;
            _7_n_pig_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _24_n_pig_partial = _7_n_pig_partial;
          }
          else {
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L2_then_else_else_else_else_else_IfBlock1 =
                ENUM_N_PIG_6th_TM_conversions;
              _22_n_pig_partial = outC->_L2_then_else_else_else_else_else_IfBlock1;
              _9_n_pig_partial = _22_n_pig_partial;
            }
            else {
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L1_then_else_else_else_else_else_else_IfBlock1 =
                  ENUM_N_PIG_7th_TM_conversions;
                _11_n_pig_partial = outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                _20_n_pig_partial = _11_n_pig_partial;
              }
              else {
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L1_then_else_else_else_else_else_else_else_IfBlock1 =
                    ENUM_N_PIG_8th_TM_conversions;
                  _18_n_pig_partial = outC->_L1_then_else_else_else_else_else_else_else_IfBlock1;
                  _13_n_pig_partial = _18_n_pig_partial;
                }
                else {
                  outC->_L2_else_else_else_else_else_else_else_else_IfBlock1 =
                    ENUM_N_PIG_8th_TM_conversions;
                  _16_n_pig_partial = outC->_L2_else_else_else_else_else_else_else_else_IfBlock1;
                  _13_n_pig_partial = _16_n_pig_partial;
                }
                _20_n_pig_partial = _13_n_pig_partial;
              }
              _9_n_pig_partial = _20_n_pig_partial;
            }
            _24_n_pig_partial = _9_n_pig_partial;
          }
          _5_n_pig_partial = _24_n_pig_partial;
        }
        _28_n_pig_partial = _5_n_pig_partial;
      }
      _1_n_pig_partial = _28_n_pig_partial;
    }
    outC->n_pig = _1_n_pig_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_N_PIG_init_TM_conversions(
  outC_CAST_Int_to_N_PIG_TM_conversions *outC)
{
  outC->_L4 = kcg_true;
  outC->_L2 = kcg_lit_int64(0);
  outC->error = kcg_true;
  outC->n_pig_in = kcg_lit_int64(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_IfBlock1 = N_PIG_I_am_the_1st;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = N_PIG_I_am_the_1st;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_IfBlock1 = N_PIG_I_am_the_1st;
  outC->else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_IfBlock1 = N_PIG_I_am_the_1st;
  outC->_L3_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_else_else_else_else_else_IfBlock1 = N_PIG_I_am_the_1st;
  outC->else_clock_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_IfBlock1 = N_PIG_I_am_the_1st;
  outC->_L3_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = N_PIG_I_am_the_1st;
  outC->_L3_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = N_PIG_I_am_the_1st;
  outC->_L4_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1 = N_PIG_I_am_the_1st;
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->n_pig = N_PIG_I_am_the_1st;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_N_PIG_reset_TM_conversions(
  outC_CAST_Int_to_N_PIG_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_N_PIG_TM_conversions.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

