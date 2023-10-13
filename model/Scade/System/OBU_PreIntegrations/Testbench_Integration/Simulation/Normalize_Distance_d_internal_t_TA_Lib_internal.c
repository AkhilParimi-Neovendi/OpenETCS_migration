/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Normalize_Distance_d_internal_t_TA_Lib_internal.h"

/* TA_Lib_internal::Normalize_Distance_d_internal_t/ */
void Normalize_Distance_d_internal_t_TA_Lib_internal(
  /* q_scale/ */
  Q_SCALE q_scale,
  /* d/ */
  kcg_int64 d,
  outC_Normalize_Distance_d_internal_t_TA_Lib_internal *outC)
{
  /* d_internal/ */
  static L_internal_Type_Obu_BasicTypes_Pkg d_internal_partial;
  /* d_internal/ */
  static L_internal_Type_Obu_BasicTypes_Pkg _1_d_internal_partial;
  /* d_internal/ */
  static L_internal_Type_Obu_BasicTypes_Pkg _2_d_internal_partial;
  /* d_internal/ */
  static L_internal_Type_Obu_BasicTypes_Pkg _3_d_internal_partial;

  outC->_L1 = q_scale;
  outC->q_scale_in = outC->_L1;
  outC->IfBlock1_clock = outC->q_scale_in == ENUM_Q_SCALE_10cm_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = kcg_lit_int64(10);
    outC->_L1_then_IfBlock1 = d;
    outC->_L2_then_IfBlock1 = outC->_L1_then_IfBlock1 * outC->_L3_then_IfBlock1;
    d_internal_partial = outC->_L2_then_IfBlock1;
    outC->d_internal = d_internal_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_scale_in == ENUM_Q_SCALE_1m_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L2_then_else_IfBlock1 = kcg_lit_int64(100);
      outC->_L1_then_else_IfBlock1 = d;
      outC->_L3_then_else_IfBlock1 = outC->_L1_then_else_IfBlock1 *
        outC->_L2_then_else_IfBlock1;
      _3_d_internal_partial = outC->_L3_then_else_IfBlock1;
      _1_d_internal_partial = _3_d_internal_partial;
    }
    else {
      outC->_L1_else_else_IfBlock1 = kcg_lit_int64(1000);
      outC->_L2_else_else_IfBlock1 = d;
      outC->_L3_else_else_IfBlock1 = outC->_L2_else_else_IfBlock1 *
        outC->_L1_else_else_IfBlock1;
      _2_d_internal_partial = outC->_L3_else_else_IfBlock1;
      _1_d_internal_partial = _2_d_internal_partial;
    }
    outC->d_internal = _1_d_internal_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Normalize_Distance_d_internal_t_init_TA_Lib_internal(
  outC_Normalize_Distance_d_internal_t_TA_Lib_internal *outC)
{
  outC->_L1 = Q_SCALE_10_cm_scale;
  outC->q_scale_in = Q_SCALE_10_cm_scale;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L2_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L3_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1 = kcg_lit_int64(0);
  outC->d_internal = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Normalize_Distance_d_internal_t_reset_TA_Lib_internal(
  outC_Normalize_Distance_d_internal_t_TA_Lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Normalize_Distance_d_internal_t_TA_Lib_internal.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

