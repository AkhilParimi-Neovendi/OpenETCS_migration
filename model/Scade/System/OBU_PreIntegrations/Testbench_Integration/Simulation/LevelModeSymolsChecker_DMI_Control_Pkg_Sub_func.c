/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker/ */
void LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func(
  /* GroupIndex/ */
  kcg_int32 GroupIndex,
  /* SymbolIndex/ */
  kcg_int32 SymbolIndex,
  outC_LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_size idx;
  static kcg_bool acc;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_bool acc3;
  static kcg_size idx4;
  static kcg_int32 noname;
  static kcg_int32 _5_noname;

  outC->_L24 = GroupIndex;
  outC->_L13 = kcg_false;
  kcg_copy_array_int32_5(
    &outC->_L17,
    (array_int32_5 *) &ArrayOfIndex_YellowLevelSymbols_DMI_Control_Pkg);
  outC->_L4 = SymbolIndex;
  /* _L15/ */
  for (idx = 0; idx < 5; idx++) {
    outC->_L15[idx] = outC->_L4;
  }
  outC->_L19 = kcg_true;
  outC->_L23 = outC->_L13;
  /* _L22= */
  if (outC->_L19) {
    /* _L22= */
    for (idx1 = 0; idx1 < 5; idx1++) {
      acc = outC->_L23;
      /* _L22=(DMI_Control_Pkg::Utils::CheckElem_iterator#2)/ */
      CheckElem_iterator_DMI_Control_Pkg_Utils(
        acc,
        outC->_L17[idx1],
        outC->_L15[idx1],
        &outC->Context_CheckElem_iterator_2[idx1]);
      outC->_L23 = outC->Context_CheckElem_iterator_2[idx1].result;
      outC->_L22 = /* _L22= */(kcg_int32) (idx1 + 1);
      /* _L22= */
      if (!outC->Context_CheckElem_iterator_2[idx1].condition) {
        break;
      }
    }
  }
  else {
    outC->_L22 = kcg_lit_int32(0);
  }
  outC->_L12 = kcg_false;
  kcg_copy_array_int32_8(
    &outC->_L16,
    (array_int32_8 *) &ArrayOfIndex_YellowModeSymbols_DMI_Control_Pkg);
  /* _L14/ */
  for (idx2 = 0; idx2 < 8; idx2++) {
    outC->_L14[idx2] = outC->_L4;
  }
  outC->_L18 = kcg_true;
  outC->_L21 = outC->_L12;
  /* _L20= */
  if (outC->_L18) {
    /* _L20= */
    for (idx4 = 0; idx4 < 8; idx4++) {
      acc3 = outC->_L21;
      /* _L20=(DMI_Control_Pkg::Utils::CheckElem_iterator#1)/ */
      CheckElem_iterator_DMI_Control_Pkg_Utils(
        acc3,
        outC->_L16[idx4],
        outC->_L14[idx4],
        &outC->Context_CheckElem_iterator_1[idx4]);
      outC->_L21 = outC->Context_CheckElem_iterator_1[idx4].result;
      outC->_L20 = /* _L20= */(kcg_int32) (idx4 + 1);
      /* _L20= */
      if (!outC->Context_CheckElem_iterator_1[idx4].condition) {
        break;
      }
    }
  }
  else {
    outC->_L20 = kcg_lit_int32(0);
  }
  _5_noname = outC->_L22;
  noname = outC->_L20;
  outC->_L9 = cModeSymbol_IconGroup_DMI_Control_Pkg;
  outC->_L11 = outC->_L24 == outC->_L9;
  outC->_L7 = cLevelSymbol_IconGroup_DMI_Control_Pkg;
  outC->_L1 = GroupIndex;
  outC->_L10 = outC->_L1 == outC->_L7;
  outC->_L8 = outC->_L21 & outC->_L11;
  outC->_L6 = outC->_L10 & outC->_L23;
  outC->_L5 = outC->_L6 | outC->_L8;
  outC->CheckResult = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void LevelModeSymolsChecker_init_DMI_Control_Pkg_Sub_func(
  outC_LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L24 = kcg_lit_int32(0);
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_lit_int32(0);
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_lit_int32(0);
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L17[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 8; idx3++) {
    outC->_L16[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L15[idx4] = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 8; idx5++) {
    outC->_L14[idx5] = kcg_lit_int32(0);
  }
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L1 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->CheckResult = kcg_true;
  for (idx1 = 0; idx1 < 8; idx1++) {
    /* _L20=(DMI_Control_Pkg::Utils::CheckElem_iterator#1)/ */
    CheckElem_iterator_init_DMI_Control_Pkg_Utils(
      &outC->Context_CheckElem_iterator_1[idx1]);
  }
  for (idx = 0; idx < 5; idx++) {
    /* _L22=(DMI_Control_Pkg::Utils::CheckElem_iterator#2)/ */
    CheckElem_iterator_init_DMI_Control_Pkg_Utils(
      &outC->Context_CheckElem_iterator_2[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LevelModeSymolsChecker_reset_DMI_Control_Pkg_Sub_func(
  outC_LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  for (idx1 = 0; idx1 < 8; idx1++) {
    /* _L20=(DMI_Control_Pkg::Utils::CheckElem_iterator#1)/ */
    CheckElem_iterator_reset_DMI_Control_Pkg_Utils(
      &outC->Context_CheckElem_iterator_1[idx1]);
  }
  for (idx = 0; idx < 5; idx++) {
    /* _L22=(DMI_Control_Pkg::Utils::CheckElem_iterator#2)/ */
    CheckElem_iterator_reset_DMI_Control_Pkg_Utils(
      &outC->Context_CheckElem_iterator_2[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

