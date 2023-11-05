/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_MARQSTREASON_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_MARQSTREASON_to_int/ */
void CAST_Q_MARQSTREASON_to_int_TM_conversions(
  /* q_marqstreason/ */
  Q_MARQSTREASON q_marqstreason,
  outC_CAST_Q_MARQSTREASON_to_int_TM_conversions *outC)
{
  /* q_marqstreason_int/ */
  static kcg_int32 q_marqstreason_int_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* q_marqstreason_int/ */
  static kcg_int32 _1_q_marqstreason_int_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* q_marqstreason_int/ */
  static kcg_int32 _3_q_marqstreason_int_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* q_marqstreason_int/ */
  static kcg_int32 _5_q_marqstreason_int_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* q_marqstreason_int/ */
  static kcg_int32 _7_q_marqstreason_int_partial;
  /* error/ */
  static kcg_bool _8_error_partial;
  /* q_marqstreason_int/ */
  static kcg_int32 _9_q_marqstreason_int_partial;
  /* error/ */
  static kcg_bool _10_error_partial;
  /* error/ */
  static kcg_bool _11_error_partial;
  /* q_marqstreason_int/ */
  static kcg_int32 _12_q_marqstreason_int_partial;
  /* error/ */
  static kcg_bool _13_error_partial;
  /* q_marqstreason_int/ */
  static kcg_int32 _14_q_marqstreason_int_partial;
  /* error/ */
  static kcg_bool _15_error_partial;
  /* q_marqstreason_int/ */
  static kcg_int32 _16_q_marqstreason_int_partial;
  /* error/ */
  static kcg_bool _17_error_partial;
  /* q_marqstreason_int/ */
  static kcg_int32 _18_q_marqstreason_int_partial;
  static kcg_bool noname;

  outC->_L2 = q_marqstreason;
  outC->q_marqstreason_in = outC->_L2;
  outC->IfBlock1_clock = outC->q_marqstreason_in ==
    ENUM_Q_MARQSTREASON_driver_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = kcg_false;
    error_partial = outC->_L3_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_marqstreason_in ==
      ENUM_Q_MARQSTREASON_timer_preindication_LOA_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = kcg_false;
      _17_error_partial = outC->_L3_then_else_IfBlock1;
      _2_error_partial = _17_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->q_marqstreason_in ==
        ENUM_Q_MARQSTREASON_section_timer_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L4_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L4_then_else_else_IfBlock1;
        _15_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->q_marqstreason_in ==
          ENUM_Q_MARQSTREASON_track_description_deleted_TM_conversions;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L3_then_else_else_else_IfBlock1 = kcg_false;
          _13_error_partial = outC->_L3_then_else_else_else_IfBlock1;
          _6_error_partial = _13_error_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = outC->q_marqstreason_in ==
            ENUM_Q_MARQSTREASON_TAF_TM_conversions;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L2_then_else_else_else_else_IfBlock1 = kcg_false;
            _8_error_partial = outC->_L2_then_else_else_else_else_IfBlock1;
            _11_error_partial = _8_error_partial;
          }
          else {
            outC->_L2_else_else_else_else_else_IfBlock1 = kcg_true;
            _10_error_partial = outC->_L2_else_else_else_else_else_IfBlock1;
            _11_error_partial = _10_error_partial;
          }
          _6_error_partial = _11_error_partial;
        }
        _15_error_partial = _6_error_partial;
      }
      _2_error_partial = _15_error_partial;
    }
    outC->error = _2_error_partial;
  }
  outC->_L4 = outC->error;
  noname = outC->_L4;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L2_then_IfBlock1 = INT_Q_MARQSTREASON_driver_TM_conversions;
    q_marqstreason_int_partial = outC->_L2_then_IfBlock1;
    outC->q_marqstreason_int = q_marqstreason_int_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 =
        INT_Q_MARQSTREASON_timer_preindication_LOA_TM_conversions;
      _18_q_marqstreason_int_partial = outC->_L1_then_else_IfBlock1;
      _1_q_marqstreason_int_partial = _18_q_marqstreason_int_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 =
          INT_Q_MARQSTREASON_section_timer_TM_conversions;
        _3_q_marqstreason_int_partial = outC->_L1_then_else_else_IfBlock1;
        _16_q_marqstreason_int_partial = _3_q_marqstreason_int_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L2_then_else_else_else_IfBlock1 =
            INT_Q_LINKREACTION_Apply_servicebrake_TM_conversions;
          _14_q_marqstreason_int_partial = outC->_L2_then_else_else_else_IfBlock1;
          _5_q_marqstreason_int_partial = _14_q_marqstreason_int_partial;
        }
        else {
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L1_then_else_else_else_else_IfBlock1 =
              INT_Q_MARQSTREASON_track_description_deleted_TM_conversions;
            _7_q_marqstreason_int_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _12_q_marqstreason_int_partial = _7_q_marqstreason_int_partial;
          }
          else {
            outC->_L1_else_else_else_else_else_IfBlock1 =
              INT_Q_MARQSTREASON_driver_TM_conversions;
            _9_q_marqstreason_int_partial = outC->_L1_else_else_else_else_else_IfBlock1;
            _12_q_marqstreason_int_partial = _9_q_marqstreason_int_partial;
          }
          _5_q_marqstreason_int_partial = _12_q_marqstreason_int_partial;
        }
        _16_q_marqstreason_int_partial = _5_q_marqstreason_int_partial;
      }
      _1_q_marqstreason_int_partial = _16_q_marqstreason_int_partial;
    }
    outC->q_marqstreason_int = _1_q_marqstreason_int_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Q_MARQSTREASON_to_int_init_TM_conversions(
  outC_CAST_Q_MARQSTREASON_to_int_TM_conversions *outC)
{
  outC->_L4 = kcg_true;
  outC->_L2 = Q_MARQSTREASON_Start_selected_by_driver;
  outC->error = kcg_true;
  outC->q_marqstreason_in = Q_MARQSTREASON_Start_selected_by_driver;
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->q_marqstreason_int = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Q_MARQSTREASON_to_int_reset_TM_conversions(
  outC_CAST_Q_MARQSTREASON_to_int_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Q_MARQSTREASON_to_int_TM_conversions.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

