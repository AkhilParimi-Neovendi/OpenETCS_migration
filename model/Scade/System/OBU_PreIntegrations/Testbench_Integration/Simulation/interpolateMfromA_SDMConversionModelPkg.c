/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "interpolateMfromA_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::interpolateMfromA/ */
void interpolateMfromA_SDMConversionModelPkg(
  /* a/ */
  A_internal_Type_Obu_BasicTypes_Pkg a,
  /* a12/ */
  A_internal_Type_Obu_BasicTypes_Pkg a12,
  /* a23/ */
  A_internal_Type_Obu_BasicTypes_Pkg a23,
  /* m12/ */
  A_internal_Type_Obu_BasicTypes_Pkg m12,
  /* m23/ */
  A_internal_Type_Obu_BasicTypes_Pkg m23,
  outC_interpolateMfromA_SDMConversionModelPkg *outC)
{
  /* m/ */
  static A_internal_Type_Obu_BasicTypes_Pkg m_partial;
  /* m/ */
  static A_internal_Type_Obu_BasicTypes_Pkg _1_m_partial;
  /* m/ */
  static A_internal_Type_Obu_BasicTypes_Pkg _2_m_partial;
  /* m/ */
  static A_internal_Type_Obu_BasicTypes_Pkg _3_m_partial;

  outC->IfBlock1_clock = a <= a12;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = m12;
    m_partial = outC->_L1_then_IfBlock1;
    outC->m = m_partial;
  }
  else {
    outC->else_clock_IfBlock1 = a23 <= a;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = m23;
      _3_m_partial = outC->_L1_then_else_IfBlock1;
      _1_m_partial = _3_m_partial;
    }
    else {
      outC->_L5_else_else_IfBlock1 = a12;
      outC->_L4_else_else_IfBlock1 = a23;
      outC->_L6_else_else_IfBlock1 = outC->_L4_else_else_IfBlock1 -
        outC->_L5_else_else_IfBlock1;
      outC->_L3_else_else_IfBlock1 = a12;
      outC->_L1_else_else_IfBlock1 = a;
      outC->_L2_else_else_IfBlock1 = outC->_L1_else_else_IfBlock1 -
        outC->_L3_else_else_IfBlock1;
      outC->_L8_else_else_IfBlock1 = m12;
      outC->_L7_else_else_IfBlock1 = m23;
      outC->_L9_else_else_IfBlock1 = outC->_L7_else_else_IfBlock1 -
        outC->_L8_else_else_IfBlock1;
      outC->_L10_else_else_IfBlock1 = outC->_L9_else_else_IfBlock1 *
        outC->_L2_else_else_IfBlock1;
      outC->_L11_else_else_IfBlock1 = outC->_L10_else_else_IfBlock1 /
        outC->_L6_else_else_IfBlock1;
      outC->_L13_else_else_IfBlock1 = m12;
      outC->_L12_else_else_IfBlock1 = outC->_L13_else_else_IfBlock1 +
        outC->_L11_else_else_IfBlock1;
      _2_m_partial = outC->_L12_else_else_IfBlock1;
      _1_m_partial = _2_m_partial;
    }
    outC->m = _1_m_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void interpolateMfromA_init_SDMConversionModelPkg(
  outC_interpolateMfromA_SDMConversionModelPkg *outC)
{
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L2_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L3_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L5_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L4_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L6_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L7_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L8_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L9_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L10_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L11_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L12_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L13_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_lit_int64(0);
  outC->m = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void interpolateMfromA_reset_SDMConversionModelPkg(
  outC_interpolateMfromA_SDMConversionModelPkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** interpolateMfromA_SDMConversionModelPkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

