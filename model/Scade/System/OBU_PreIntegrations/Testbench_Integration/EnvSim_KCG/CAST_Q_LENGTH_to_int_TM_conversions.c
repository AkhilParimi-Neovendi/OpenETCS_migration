/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_LENGTH_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_LENGTH_to_int/ */
void CAST_Q_LENGTH_to_int_TM_conversions(
  /* q_length/ */
  Q_LENGTH q_length,
  outC_CAST_Q_LENGTH_to_int_TM_conversions *outC)
{
  /* q_length_int/ */
  static kcg_int32 q_length_int_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* q_length_int/ */
  static kcg_int32 _1_q_length_int_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* q_length_int/ */
  static kcg_int32 _3_q_length_int_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* q_length_int/ */
  static kcg_int32 _5_q_length_int_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* error/ */
  static kcg_bool _7_error_partial;
  /* q_length_int/ */
  static kcg_int32 _8_q_length_int_partial;
  /* error/ */
  static kcg_bool _9_error_partial;
  /* q_length_int/ */
  static kcg_int32 _10_q_length_int_partial;
  /* error/ */
  static kcg_bool _11_error_partial;
  /* q_length_int/ */
  static kcg_int32 _12_q_length_int_partial;
  /* error/ */
  static kcg_bool _13_error_partial;
  /* q_length_int/ */
  static kcg_int32 _14_q_length_int_partial;
  static kcg_bool noname;

  outC->_L2 = q_length;
  outC->q_length_in = outC->_L2;
  outC->IfBlock1_clock = outC->q_length_in ==
    ENUM_Q_LENGTH_no_info_available_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = kcg_false;
    error_partial = outC->_L3_then_IfBlock1;
    outC->_L2_then_IfBlock1 = INT_Q_LENGTH_no_info_available_TM_conversions;
    q_length_int_partial = outC->_L2_then_IfBlock1;
    outC->q_length_int = q_length_int_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_length_in ==
      ENUM_Q_LENGTH_confimed_by_device_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = kcg_false;
      _13_error_partial = outC->_L3_then_else_IfBlock1;
      outC->_L1_then_else_IfBlock1 = INT_Q_LENGTH_confimed_by_device_TM_conversions;
      _14_q_length_int_partial = outC->_L1_then_else_IfBlock1;
      _1_q_length_int_partial = _14_q_length_int_partial;
      _2_error_partial = _13_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->q_length_in ==
        ENUM_Q_LENGTH_confimed_by_driver_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L4_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L4_then_else_else_IfBlock1;
        outC->_L1_then_else_else_IfBlock1 =
          INT_Q_LENGTH_confimed_by_driver_TM_conversions;
        _3_q_length_int_partial = outC->_L1_then_else_else_IfBlock1;
        _12_q_length_int_partial = _3_q_length_int_partial;
        _11_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->q_length_in ==
          ENUM_Q_LENGTH_integrity_lost_TM_conversions;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L3_then_else_else_else_IfBlock1 = kcg_false;
          _9_error_partial = outC->_L3_then_else_else_else_IfBlock1;
          outC->_L1_then_else_else_else_IfBlock1 =
            INT_Q_LENGTH_integrity_lost_TM_conversions;
          _10_q_length_int_partial = outC->_L1_then_else_else_else_IfBlock1;
          _5_q_length_int_partial = _10_q_length_int_partial;
          _6_error_partial = _9_error_partial;
        }
        else {
          outC->_L2_else_else_else_else_IfBlock1 = kcg_true;
          _7_error_partial = outC->_L2_else_else_else_else_IfBlock1;
          outC->_L1_else_else_else_else_IfBlock1 =
            INT_Q_LENGTH_integrity_lost_TM_conversions;
          _8_q_length_int_partial = outC->_L1_else_else_else_else_IfBlock1;
          _5_q_length_int_partial = _8_q_length_int_partial;
          _6_error_partial = _7_error_partial;
        }
        _12_q_length_int_partial = _5_q_length_int_partial;
        _11_error_partial = _6_error_partial;
      }
      _1_q_length_int_partial = _12_q_length_int_partial;
      _2_error_partial = _11_error_partial;
    }
    outC->q_length_int = _1_q_length_int_partial;
    outC->error = _2_error_partial;
  }
  outC->_L5 = outC->error;
  noname = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Q_LENGTH_to_int_init_TM_conversions(
  outC_CAST_Q_LENGTH_to_int_TM_conversions *outC)
{
  outC->_L5 = kcg_true;
  outC->_L2 = Q_LENGTH_No_train_integrity_information_available;
  outC->error = kcg_true;
  outC->q_length_in = Q_LENGTH_No_train_integrity_information_available;
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L1_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->q_length_int = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Q_LENGTH_to_int_reset_TM_conversions(
  outC_CAST_Q_LENGTH_to_int_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Q_LENGTH_to_int_TM_conversions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

