/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_M_SUPERVISION_STATUS_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_M_SUPERVISION_STATUS/ */
void CAST_int_to_M_SUPERVISION_STATUS_DATA_Variables(
  /* m_supervision_status_int/ */
  M_SUPERVISION_STATUS_INT_T_DATA m_supervision_status_int,
  outC_CAST_int_to_M_SUPERVISION_STATUS_DATA_Variables *outC)
{
  /* m_supervision_status_ct/ */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg m_supervision_status_ct_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* m_supervision_status_ct/ */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg _1_m_supervision_status_ct_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* m_supervision_status_ct/ */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg _3_m_supervision_status_ct_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* m_supervision_status_ct/ */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg _5_m_supervision_status_ct_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* m_supervision_status_ct/ */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg _7_m_supervision_status_ct_partial;
  /* error/ */
  static kcg_bool _8_error_partial;
  /* m_supervision_status_ct/ */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg _9_m_supervision_status_ct_partial;
  /* error/ */
  static kcg_bool _10_error_partial;
  /* error/ */
  static kcg_bool _11_error_partial;
  /* m_supervision_status_ct/ */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg _12_m_supervision_status_ct_partial;
  /* error/ */
  static kcg_bool _13_error_partial;
  /* m_supervision_status_ct/ */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg _14_m_supervision_status_ct_partial;
  /* error/ */
  static kcg_bool _15_error_partial;
  /* m_supervision_status_ct/ */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg _16_m_supervision_status_ct_partial;
  /* error/ */
  static kcg_bool _17_error_partial;
  /* m_supervision_status_ct/ */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg _18_m_supervision_status_ct_partial;
  static kcg_bool noname;

  outC->IfBlock1_clock = m_supervision_status_int == INT_M_SUPERVISION_STATUS_CSM;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L4_then_IfBlock1 = ENUM_M_SUPERVISION_STATUS_CSM;
    m_supervision_status_ct_partial = outC->_L4_then_IfBlock1;
    outC->_L3_then_IfBlock1 = kcg_false;
    error_partial = outC->_L3_then_IfBlock1;
    outC->m_supervision_status_ct = m_supervision_status_ct_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = m_supervision_status_int ==
      INT_M_SUPERVISION_STATUS_PIM;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = ENUM_M_SUPERVISION_STATUS_PIM;
      _18_m_supervision_status_ct_partial = outC->_L3_then_else_IfBlock1;
      outC->_L2_then_else_IfBlock1 = kcg_false;
      _17_error_partial = outC->_L2_then_else_IfBlock1;
      _1_m_supervision_status_ct_partial = _18_m_supervision_status_ct_partial;
      _2_error_partial = _17_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = m_supervision_status_int ==
        INT_M_SUPERVISION_STATUS_TSM;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L4_then_else_else_IfBlock1 = ENUM_M_SUPERVISION_STATUS_TSM;
        _3_m_supervision_status_ct_partial = outC->_L4_then_else_else_IfBlock1;
        outC->_L3_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L3_then_else_else_IfBlock1;
        _16_m_supervision_status_ct_partial = _3_m_supervision_status_ct_partial;
        _15_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = m_supervision_status_int ==
          INT_M_SUPERVISION_STATUS_RSM;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L3_then_else_else_else_IfBlock1 = ENUM_M_SUPERVISION_STATUS_RSM;
          _14_m_supervision_status_ct_partial = outC->_L3_then_else_else_else_IfBlock1;
          outC->_L2_then_else_else_else_IfBlock1 = kcg_false;
          _13_error_partial = outC->_L2_then_else_else_else_IfBlock1;
          _5_m_supervision_status_ct_partial = _14_m_supervision_status_ct_partial;
          _6_error_partial = _13_error_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = m_supervision_status_int ==
            INT_M_SUPERVISION_STATUS_supervision_status_unknown;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L3_then_else_else_else_else_IfBlock1 =
              ENUM_M_SUPERVISION_STATUS_supervision_status_unknown;
            _7_m_supervision_status_ct_partial =
              outC->_L3_then_else_else_else_else_IfBlock1;
            outC->_L2_then_else_else_else_else_IfBlock1 = kcg_false;
            _8_error_partial = outC->_L2_then_else_else_else_else_IfBlock1;
            _12_m_supervision_status_ct_partial = _7_m_supervision_status_ct_partial;
            _11_error_partial = _8_error_partial;
          }
          else {
            outC->_L5_else_else_else_else_else_IfBlock1 = ENUM_M_SUPERVISION_STATUS_CSM;
            _9_m_supervision_status_ct_partial =
              outC->_L5_else_else_else_else_else_IfBlock1;
            outC->_L3_else_else_else_else_else_IfBlock1 = kcg_true;
            _10_error_partial = outC->_L3_else_else_else_else_else_IfBlock1;
            _12_m_supervision_status_ct_partial = _9_m_supervision_status_ct_partial;
            _11_error_partial = _10_error_partial;
          }
          _5_m_supervision_status_ct_partial = _12_m_supervision_status_ct_partial;
          _6_error_partial = _11_error_partial;
        }
        _16_m_supervision_status_ct_partial = _5_m_supervision_status_ct_partial;
        _15_error_partial = _6_error_partial;
      }
      _1_m_supervision_status_ct_partial = _16_m_supervision_status_ct_partial;
      _2_error_partial = _15_error_partial;
    }
    outC->m_supervision_status_ct = _1_m_supervision_status_ct_partial;
    outC->error = _2_error_partial;
  }
  outC->_L1 = outC->error;
  noname = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_M_SUPERVISION_STATUS_init_DATA_Variables(
  outC_CAST_int_to_M_SUPERVISION_STATUS_DATA_Variables *outC)
{
  outC->_L1 = kcg_true;
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1 = CSM_DMI_Types_Pkg;
  outC->_L2_then_else_IfBlock1 = kcg_true;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_IfBlock1 = CSM_DMI_Types_Pkg;
  outC->_L2_then_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L5_else_else_else_else_else_IfBlock1 = CSM_DMI_Types_Pkg;
  outC->_L2_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_else_IfBlock1 = CSM_DMI_Types_Pkg;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_IfBlock1 = CSM_DMI_Types_Pkg;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 = CSM_DMI_Types_Pkg;
  outC->m_supervision_status_ct = CSM_DMI_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_M_SUPERVISION_STATUS_reset_DATA_Variables(
  outC_CAST_int_to_M_SUPERVISION_STATUS_DATA_Variables *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_M_SUPERVISION_STATUS_DATA_Variables.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

