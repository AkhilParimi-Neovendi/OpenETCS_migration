/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_M_SupervisionDisplay_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_M_SupervisionDisplay/ */
void CAST_int_to_M_SupervisionDisplay_DATA_Variables(
  /* m_supervisiondisplay_int/ */
  M_SupervisionDisplay_INT_T_DATA m_supervisiondisplay_int,
  outC_CAST_int_to_M_SupervisionDisplay_DATA_Variables *outC)
{
  /* m_supervisiondisplay_ct/ */
  static M_SupervisionDisplay_T_DMI_Types_Pkg m_supervisiondisplay_ct_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* m_supervisiondisplay_ct/ */
  static M_SupervisionDisplay_T_DMI_Types_Pkg _1_m_supervisiondisplay_ct_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* m_supervisiondisplay_ct/ */
  static M_SupervisionDisplay_T_DMI_Types_Pkg _3_m_supervisiondisplay_ct_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* m_supervisiondisplay_ct/ */
  static M_SupervisionDisplay_T_DMI_Types_Pkg _5_m_supervisiondisplay_ct_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* m_supervisiondisplay_ct/ */
  static M_SupervisionDisplay_T_DMI_Types_Pkg _7_m_supervisiondisplay_ct_partial;
  /* error/ */
  static kcg_bool _8_error_partial;
  /* m_supervisiondisplay_ct/ */
  static M_SupervisionDisplay_T_DMI_Types_Pkg _9_m_supervisiondisplay_ct_partial;
  /* error/ */
  static kcg_bool _10_error_partial;
  /* error/ */
  static kcg_bool _11_error_partial;
  /* m_supervisiondisplay_ct/ */
  static M_SupervisionDisplay_T_DMI_Types_Pkg _12_m_supervisiondisplay_ct_partial;
  /* error/ */
  static kcg_bool _13_error_partial;
  /* m_supervisiondisplay_ct/ */
  static M_SupervisionDisplay_T_DMI_Types_Pkg _14_m_supervisiondisplay_ct_partial;
  /* error/ */
  static kcg_bool _15_error_partial;
  /* m_supervisiondisplay_ct/ */
  static M_SupervisionDisplay_T_DMI_Types_Pkg _16_m_supervisiondisplay_ct_partial;
  /* error/ */
  static kcg_bool _17_error_partial;
  /* m_supervisiondisplay_ct/ */
  static M_SupervisionDisplay_T_DMI_Types_Pkg _18_m_supervisiondisplay_ct_partial;
  static kcg_bool noname;

  outC->IfBlock1_clock = m_supervisiondisplay_int ==
    INT_M_SupervisionDisplay_T_supDis_normal;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = kcg_false;
    error_partial = outC->_L3_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = m_supervisiondisplay_int ==
      INT_M_SupervisionDisplay_T_supDis_indication;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L2_then_else_IfBlock1 = kcg_false;
      _17_error_partial = outC->_L2_then_else_IfBlock1;
      _2_error_partial = _17_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = m_supervisiondisplay_int ==
        INT_M_SupervisionDisplay_T_supDis_overspeed;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L3_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L3_then_else_else_IfBlock1;
        _15_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = m_supervisiondisplay_int ==
          INT_M_SupervisionDisplay_T_supDis_warning;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L2_then_else_else_else_IfBlock1 = kcg_false;
          _13_error_partial = outC->_L2_then_else_else_else_IfBlock1;
          _6_error_partial = _13_error_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = m_supervisiondisplay_int ==
            INT_M_SupervisionDisplay_T_supDis_intervention;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L2_then_else_else_else_else_IfBlock1 = kcg_false;
            _8_error_partial = outC->_L2_then_else_else_else_else_IfBlock1;
            _11_error_partial = _8_error_partial;
          }
          else {
            outC->_L3_else_else_else_else_else_IfBlock1 = kcg_true;
            _10_error_partial = outC->_L3_else_else_else_else_else_IfBlock1;
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
  outC->_L1 = outC->error;
  noname = outC->_L1;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L2_then_IfBlock1 = ENUM_M_SupervisionDisplay_T_supDis_normal;
    m_supervisiondisplay_ct_partial = outC->_L2_then_IfBlock1;
    outC->m_supervisiondisplay_ct = m_supervisiondisplay_ct_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = ENUM_M_SupervisionDisplay_T_supDis_indication;
      _18_m_supervisiondisplay_ct_partial = outC->_L1_then_else_IfBlock1;
      _1_m_supervisiondisplay_ct_partial = _18_m_supervisiondisplay_ct_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 =
          ENUM_M_SupervisionDisplay_T_supDis_overspeed;
        _3_m_supervisiondisplay_ct_partial = outC->_L1_then_else_else_IfBlock1;
        _16_m_supervisiondisplay_ct_partial = _3_m_supervisiondisplay_ct_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 =
            ENUM_M_SupervisionDisplay_T_supDis_warning;
          _14_m_supervisiondisplay_ct_partial = outC->_L1_then_else_else_else_IfBlock1;
          _5_m_supervisiondisplay_ct_partial = _14_m_supervisiondisplay_ct_partial;
        }
        else {
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L1_then_else_else_else_else_IfBlock1 =
              ENUM_M_SupervisionDisplay_T_supDis_intervention;
            _7_m_supervisiondisplay_ct_partial =
              outC->_L1_then_else_else_else_else_IfBlock1;
            _12_m_supervisiondisplay_ct_partial = _7_m_supervisiondisplay_ct_partial;
          }
          else {
            outC->_L4_else_else_else_else_else_IfBlock1 =
              ENUM_M_SupervisionDisplay_T_supDis_normal;
            _9_m_supervisiondisplay_ct_partial =
              outC->_L4_else_else_else_else_else_IfBlock1;
            _12_m_supervisiondisplay_ct_partial = _9_m_supervisiondisplay_ct_partial;
          }
          _5_m_supervisiondisplay_ct_partial = _12_m_supervisiondisplay_ct_partial;
        }
        _16_m_supervisiondisplay_ct_partial = _5_m_supervisiondisplay_ct_partial;
      }
      _1_m_supervisiondisplay_ct_partial = _16_m_supervisiondisplay_ct_partial;
    }
    outC->m_supervisiondisplay_ct = _1_m_supervisiondisplay_ct_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_M_SupervisionDisplay_init_DATA_Variables(
  outC_CAST_int_to_M_SupervisionDisplay_DATA_Variables *outC)
{
  outC->_L1 = kcg_true;
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L2_then_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_IfBlock1 = supDis_normal_DMI_Types_Pkg;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = supDis_normal_DMI_Types_Pkg;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L4_else_else_else_else_else_IfBlock1 = supDis_normal_DMI_Types_Pkg;
  outC->_L3_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = supDis_normal_DMI_Types_Pkg;
  outC->_L2_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = supDis_normal_DMI_Types_Pkg;
  outC->_L3_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1 = supDis_normal_DMI_Types_Pkg;
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->m_supervisiondisplay_ct = supDis_normal_DMI_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_M_SupervisionDisplay_reset_DATA_Variables(
  outC_CAST_int_to_M_SupervisionDisplay_DATA_Variables *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_M_SupervisionDisplay_DATA_Variables.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

