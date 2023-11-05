/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_MARQSTREASON_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_MARQSTREASON/ */
void CAST_Int_to_Q_MARQSTREASON_TM_conversions(
  /* q_marqstreason_int/ */
  kcg_int32 q_marqstreason_int,
  outC_CAST_Int_to_Q_MARQSTREASON_TM_conversions *outC)
{
  /* q_marqstreason/ */
  Q_MARQSTREASON q_marqstreason_partial;
  /* error/ */
  kcg_bool error_partial;
  /* q_marqstreason/ */
  Q_MARQSTREASON _1_q_marqstreason_partial;
  /* error/ */
  kcg_bool _2_error_partial;
  /* q_marqstreason/ */
  Q_MARQSTREASON _3_q_marqstreason_partial;
  /* error/ */
  kcg_bool _4_error_partial;
  /* q_marqstreason/ */
  Q_MARQSTREASON _5_q_marqstreason_partial;
  /* error/ */
  kcg_bool _6_error_partial;
  /* q_marqstreason/ */
  Q_MARQSTREASON _7_q_marqstreason_partial;
  /* error/ */
  kcg_bool _8_error_partial;
  /* q_marqstreason/ */
  Q_MARQSTREASON _9_q_marqstreason_partial;
  /* error/ */
  kcg_bool _10_error_partial;
  /* error/ */
  kcg_bool _11_error_partial;
  /* q_marqstreason/ */
  Q_MARQSTREASON _12_q_marqstreason_partial;
  /* error/ */
  kcg_bool _13_error_partial;
  /* q_marqstreason/ */
  Q_MARQSTREASON _14_q_marqstreason_partial;
  /* error/ */
  kcg_bool _15_error_partial;
  /* q_marqstreason/ */
  Q_MARQSTREASON _16_q_marqstreason_partial;
  /* error/ */
  kcg_bool _17_error_partial;
  /* q_marqstreason/ */
  Q_MARQSTREASON _18_q_marqstreason_partial;
  kcg_bool noname;

  outC->_L2 = q_marqstreason_int;
  outC->q_marqstreason_in = outC->_L2;
  outC->IfBlock1_clock = outC->q_marqstreason_in ==
    INT_Q_MARQSTREASON_driver_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = kcg_false;
    error_partial = outC->_L3_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_marqstreason_in ==
      INT_Q_MARQSTREASON_timer_preindication_LOA_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = kcg_false;
      _17_error_partial = outC->_L3_then_else_IfBlock1;
      _2_error_partial = _17_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->q_marqstreason_in ==
        INT_Q_MARQSTREASON_section_timer_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L4_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L4_then_else_else_IfBlock1;
        _15_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->q_marqstreason_in ==
          INT_Q_MARQSTREASON_track_description_deleted_TM_conversions;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L3_then_else_else_else_IfBlock1 = kcg_false;
          _13_error_partial = outC->_L3_then_else_else_else_IfBlock1;
          _6_error_partial = _13_error_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = outC->q_marqstreason_in ==
            INT_Q_MARQSTREASON_TAF_TM_conversions;
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
    outC->_L2_then_IfBlock1 = ENUM_Q_MARQSTREASON_driver_TM_conversions;
    q_marqstreason_partial = outC->_L2_then_IfBlock1;
    outC->q_marqstreason = q_marqstreason_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 =
        ENUM_Q_MARQSTREASON_timer_preindication_LOA_TM_conversions;
      _18_q_marqstreason_partial = outC->_L1_then_else_IfBlock1;
      _1_q_marqstreason_partial = _18_q_marqstreason_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 =
          ENUM_Q_MARQSTREASON_section_timer_TM_conversions;
        _3_q_marqstreason_partial = outC->_L1_then_else_else_IfBlock1;
        _16_q_marqstreason_partial = _3_q_marqstreason_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L2_then_else_else_else_IfBlock1 =
            ENUM_Q_MARQSTREASON_track_description_deleted_TM_conversions;
          _14_q_marqstreason_partial = outC->_L2_then_else_else_else_IfBlock1;
          _5_q_marqstreason_partial = _14_q_marqstreason_partial;
        }
        else {
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L1_then_else_else_else_else_IfBlock1 =
              ENUM_Q_MARQSTREASON_TAF_TM_conversions;
            _7_q_marqstreason_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _12_q_marqstreason_partial = _7_q_marqstreason_partial;
          }
          else {
            outC->_L1_else_else_else_else_else_IfBlock1 =
              ENUM_Q_MARQSTREASON_driver_TM_conversions;
            _9_q_marqstreason_partial = outC->_L1_else_else_else_else_else_IfBlock1;
            _12_q_marqstreason_partial = _9_q_marqstreason_partial;
          }
          _5_q_marqstreason_partial = _12_q_marqstreason_partial;
        }
        _16_q_marqstreason_partial = _5_q_marqstreason_partial;
      }
      _1_q_marqstreason_partial = _16_q_marqstreason_partial;
    }
    outC->q_marqstreason = _1_q_marqstreason_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_Q_MARQSTREASON_init_TM_conversions(
  outC_CAST_Int_to_Q_MARQSTREASON_TM_conversions *outC)
{
  outC->_L4 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  outC->error = kcg_true;
  outC->q_marqstreason_in = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_IfBlock1 = Q_MARQSTREASON_Start_selected_by_driver;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_else_else_IfBlock1 =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L2_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L4_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1 = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->q_marqstreason = Q_MARQSTREASON_Start_selected_by_driver;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_Q_MARQSTREASON_reset_TM_conversions(
  outC_CAST_Int_to_Q_MARQSTREASON_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_Q_MARQSTREASON_TM_conversions.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

