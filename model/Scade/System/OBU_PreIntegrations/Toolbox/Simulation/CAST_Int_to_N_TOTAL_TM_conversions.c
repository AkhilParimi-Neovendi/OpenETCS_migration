/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_N_TOTAL_TM_conversions.h"

/* TM_conversions::CAST_Int_to_N_TOTAL/ */
void CAST_Int_to_N_TOTAL_TM_conversions(
  /* int_in/ */
  kcg_int32 int_in,
  outC_CAST_Int_to_N_TOTAL_TM_conversions *outC)
{
  /* n_pig/ */
  N_TOTAL n_pig_partial;
  /* error/ */
  kcg_bool error_partial;
  /* n_pig/ */
  N_TOTAL _1_n_pig_partial;
  /* error/ */
  kcg_bool _2_error_partial;
  /* n_pig/ */
  N_TOTAL _3_n_pig_partial;
  /* error/ */
  kcg_bool _4_error_partial;
  /* n_pig/ */
  N_TOTAL _5_n_pig_partial;
  /* error/ */
  kcg_bool _6_error_partial;
  /* n_pig/ */
  N_TOTAL _7_n_pig_partial;
  /* error/ */
  kcg_bool _8_error_partial;
  /* n_pig/ */
  N_TOTAL _9_n_pig_partial;
  /* error/ */
  kcg_bool _10_error_partial;
  /* n_pig/ */
  N_TOTAL _11_n_pig_partial;
  /* error/ */
  kcg_bool _12_error_partial;
  /* n_pig/ */
  N_TOTAL _13_n_pig_partial;
  /* error/ */
  kcg_bool _14_error_partial;
  /* error/ */
  kcg_bool _15_error_partial;
  /* n_pig/ */
  N_TOTAL _16_n_pig_partial;
  /* error/ */
  kcg_bool _17_error_partial;
  /* n_pig/ */
  N_TOTAL _18_n_pig_partial;
  /* error/ */
  kcg_bool _19_error_partial;
  /* n_pig/ */
  N_TOTAL _20_n_pig_partial;
  /* error/ */
  kcg_bool _21_error_partial;
  /* n_pig/ */
  N_TOTAL _22_n_pig_partial;
  /* error/ */
  kcg_bool _23_error_partial;
  /* n_pig/ */
  N_TOTAL _24_n_pig_partial;
  /* error/ */
  kcg_bool _25_error_partial;
  /* n_pig/ */
  N_TOTAL _26_n_pig_partial;
  /* error/ */
  kcg_bool _27_error_partial;
  /* n_pig/ */
  N_TOTAL _28_n_pig_partial;
  /* error/ */
  kcg_bool _29_error_partial;
  /* n_pig/ */
  N_TOTAL _30_n_pig_partial;
  kcg_bool noname;

  outC->_L3 = int_in;
  outC->n_total_in = outC->_L3;
  outC->IfBlock1_clock = outC->n_total_in == INT_N_TOTAL_1_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = kcg_false;
    error_partial = outC->_L3_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->n_total_in == INT_N_TOTAL_2_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = kcg_false;
      _29_error_partial = outC->_L3_then_else_IfBlock1;
      _2_error_partial = _29_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->n_total_in ==
        INT_N_TOTAL_3_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L3_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L3_then_else_else_IfBlock1;
        _27_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->n_total_in ==
          INT_N_TOTAL_4_TM_conversions;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L3_then_else_else_else_IfBlock1 = kcg_false;
          _25_error_partial = outC->_L3_then_else_else_else_IfBlock1;
          _6_error_partial = _25_error_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = outC->n_total_in ==
            INT_N_TOTAL_5_TM_conversions;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L3_then_else_else_else_else_IfBlock1 = kcg_false;
            _8_error_partial = outC->_L3_then_else_else_else_else_IfBlock1;
            _23_error_partial = _8_error_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = outC->n_total_in ==
              INT_N_TOTAL_6_TM_conversions;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L5_then_else_else_else_else_else_IfBlock1 = kcg_false;
              _21_error_partial = outC->_L5_then_else_else_else_else_else_IfBlock1;
              _10_error_partial = _21_error_partial;
            }
            else {
              outC->_2_else_clock_else_else_else_else_else_IfBlock1 =
                outC->n_total_in == INT_N_TOTAL_7_TM_conversions;
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->_2_else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L3_then_else_else_else_else_else_else_IfBlock1 = kcg_false;
                _12_error_partial = outC->_L3_then_else_else_else_else_else_else_IfBlock1;
                _19_error_partial = _12_error_partial;
              }
              else {
                outC->_1_else_clock_else_else_else_else_else_else_IfBlock1 =
                  outC->n_total_in == INT_N_TOTAL_8_TM_conversions;
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->_1_else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L34_then_else_else_else_else_else_else_else_IfBlock1 = kcg_false;
                  _17_error_partial = outC->_L34_then_else_else_else_else_else_else_else_IfBlock1;
                  _14_error_partial = _17_error_partial;
                }
                else {
                  outC->_L4_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
                  _15_error_partial = outC->_L4_else_else_else_else_else_else_else_else_IfBlock1;
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
    outC->_L2_then_IfBlock1 = ENUM_N_TOTAL_1_TM_conversions;
    n_pig_partial = outC->_L2_then_IfBlock1;
    outC->n_pig = n_pig_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = ENUM_N_TOTAL_2_TM_conversions;
      _30_n_pig_partial = outC->_L1_then_else_IfBlock1;
      _1_n_pig_partial = _30_n_pig_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = ENUM_N_TOTAL_3_TM_conversions;
        _3_n_pig_partial = outC->_L1_then_else_else_IfBlock1;
        _28_n_pig_partial = _3_n_pig_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = ENUM_N_TOTAL_4_TM_conversions;
          _26_n_pig_partial = outC->_L1_then_else_else_else_IfBlock1;
          _5_n_pig_partial = _26_n_pig_partial;
        }
        else {
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L1_then_else_else_else_else_IfBlock1 = ENUM_N_TOTAL_5_TM_conversions;
            _7_n_pig_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _24_n_pig_partial = _7_n_pig_partial;
          }
          else {
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L2_then_else_else_else_else_else_IfBlock1 =
                ENUM_N_TOTAL_6_TM_conversions;
              _22_n_pig_partial = outC->_L2_then_else_else_else_else_else_IfBlock1;
              _9_n_pig_partial = _22_n_pig_partial;
            }
            else {
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->_2_else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L1_then_else_else_else_else_else_else_IfBlock1 =
                  ENUM_N_TOTAL_7_TM_conversions;
                _11_n_pig_partial = outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                _20_n_pig_partial = _11_n_pig_partial;
              }
              else {
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->_1_else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L13_then_else_else_else_else_else_else_else_IfBlock1 =
                    ENUM_N_TOTAL_8_TM_conversions;
                  _18_n_pig_partial = outC->_L13_then_else_else_else_else_else_else_else_IfBlock1;
                  _13_n_pig_partial = _18_n_pig_partial;
                }
                else {
                  outC->_L1_else_else_else_else_else_else_else_else_IfBlock1 =
                    ENUM_N_TOTAL_8_TM_conversions;
                  _16_n_pig_partial = outC->_L1_else_else_else_else_else_else_else_else_IfBlock1;
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
void CAST_Int_to_N_TOTAL_init_TM_conversions(
  outC_CAST_Int_to_N_TOTAL_TM_conversions *outC)
{
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
  outC->error = kcg_true;
  outC->n_total_in = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_IfBlock1 = N_TOTAL_1_balise_in_the_group;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = N_TOTAL_1_balise_in_the_group;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L5_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_IfBlock1 =
    N_TOTAL_1_balise_in_the_group;
  outC->_2_else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L34_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L13_then_else_else_else_else_else_else_else_IfBlock1 =
    N_TOTAL_1_balise_in_the_group;
  outC->_L4_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_IfBlock1 =
    N_TOTAL_1_balise_in_the_group;
  outC->_1_else_clock_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_IfBlock1 =
    N_TOTAL_1_balise_in_the_group;
  outC->_L3_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = N_TOTAL_1_balise_in_the_group;
  outC->_L3_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = N_TOTAL_1_balise_in_the_group;
  outC->_L3_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1 = N_TOTAL_1_balise_in_the_group;
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->n_pig = N_TOTAL_1_balise_in_the_group;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_N_TOTAL_reset_TM_conversions(
  outC_CAST_Int_to_N_TOTAL_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_N_TOTAL_TM_conversions.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

