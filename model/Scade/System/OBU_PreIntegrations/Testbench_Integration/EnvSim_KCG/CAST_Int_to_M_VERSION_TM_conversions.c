/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_VERSION_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_VERSION/ */
void CAST_Int_to_M_VERSION_TM_conversions(
  /* m_version_int/ */
  kcg_int32 m_version_int,
  outC_CAST_Int_to_M_VERSION_TM_conversions *outC)
{
  /* m_version/ */
  static M_VERSION m_version_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* m_version/ */
  static M_VERSION _1_m_version_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* m_version/ */
  static M_VERSION _3_m_version_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* m_version/ */
  static M_VERSION _5_m_version_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* error/ */
  static kcg_bool _7_error_partial;
  /* m_version/ */
  static M_VERSION _8_m_version_partial;
  /* error/ */
  static kcg_bool _9_error_partial;
  /* m_version/ */
  static M_VERSION _10_m_version_partial;
  /* error/ */
  static kcg_bool _11_error_partial;
  /* m_version/ */
  static M_VERSION _12_m_version_partial;
  /* error/ */
  static kcg_bool _13_error_partial;
  /* m_version/ */
  static M_VERSION _14_m_version_partial;
  static kcg_bool noname;

  outC->_L4 = m_version_int;
  outC->m_version_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_version_in <=
    INT_M_VERSION_previous_M_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L5_then_IfBlock1 = kcg_false;
    error_partial = outC->_L5_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_version_in ==
      INT_M_VERSION_1_0_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L5_then_else_IfBlock1 = kcg_false;
      _13_error_partial = outC->_L5_then_else_IfBlock1;
      _2_error_partial = _13_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->m_version_in ==
        INT_M_VERSION_1_1_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L4_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L4_then_else_else_IfBlock1;
        _11_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->m_version_in ==
          INT_M_VERSION_2_0_TM_conversions;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L4_then_else_else_else_IfBlock1 = kcg_false;
          _9_error_partial = outC->_L4_then_else_else_else_IfBlock1;
          _6_error_partial = _9_error_partial;
        }
        else {
          outC->_L1_else_else_else_else_IfBlock1 = kcg_true;
          _7_error_partial = outC->_L1_else_else_else_else_IfBlock1;
          _6_error_partial = _7_error_partial;
        }
        _11_error_partial = _6_error_partial;
      }
      _2_error_partial = _11_error_partial;
    }
    outC->error = _2_error_partial;
  }
  outC->_L5 = outC->error;
  noname = outC->_L5;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L4_then_IfBlock1 = ENUM_M_VERSION_Previous_versions_TM_conversions;
    m_version_partial = outC->_L4_then_IfBlock1;
    outC->m_version = m_version_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = ENUM_M_VERSION_Version_1_0_TM_conversions;
      _14_m_version_partial = outC->_L3_then_else_IfBlock1;
      _1_m_version_partial = _14_m_version_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = ENUM_M_VERSION_Version_1_1_TM_conversions;
        _3_m_version_partial = outC->_L2_then_else_else_IfBlock1;
        _12_m_version_partial = _3_m_version_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L2_then_else_else_else_IfBlock1 =
            ENUM_M_VERSION_Version_2_0_TM_conversions;
          _10_m_version_partial = outC->_L2_then_else_else_else_IfBlock1;
          _5_m_version_partial = _10_m_version_partial;
        }
        else {
          outC->_L2_else_else_else_else_IfBlock1 =
            ENUM_M_VERSION_Previous_versions_TM_conversions;
          _8_m_version_partial = outC->_L2_else_else_else_else_IfBlock1;
          _5_m_version_partial = _8_m_version_partial;
        }
        _12_m_version_partial = _5_m_version_partial;
      }
      _1_m_version_partial = _12_m_version_partial;
    }
    outC->m_version = _1_m_version_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_M_VERSION_init_TM_conversions(
  outC_CAST_Int_to_M_VERSION_TM_conversions *outC)
{
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_int32(0);
  outC->error = kcg_true;
  outC->m_version_in = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L5_then_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_else_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_M_VERSION_reset_TM_conversions(
  outC_CAST_Int_to_M_VERSION_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_M_VERSION_TM_conversions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

