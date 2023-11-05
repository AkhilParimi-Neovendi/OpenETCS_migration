/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DECODE_NID_LRBG_TM_conversions.h"

/* TM_conversions::DECODE_NID_LRBG/ */
void DECODE_NID_LRBG_TM_conversions(
  /* nid_lrbg/ */
  NID_LRBG nid_lrbg,
  outC_DECODE_NID_LRBG_TM_conversions *outC)
{
  outC->_L5 = kcg_lit_int32(100000);
  outC->_L1 = nid_lrbg;
  outC->_L4 = outC->_L1 / outC->_L5;
  /* _L2=(TM_conversions::CAST_Int_to_NID_C#1)/ */
  CAST_Int_to_NID_C_TM_conversions(
    outC->_L4,
    &outC->Context_CAST_Int_to_NID_C_1);
  outC->_L2 = outC->Context_CAST_Int_to_NID_C_1.nid_c;
  outC->nid_c = outC->_L2;
  outC->_L6 = nid_lrbg;
  outC->_L7 = outC->_L6 % outC->_L5;
  /* _L3=(TM_conversions::CAST_Int_to_NID_BG#1)/ */
  CAST_Int_to_NID_BG_TM_conversions(
    outC->_L7,
    &outC->Context_CAST_Int_to_NID_BG_1);
  outC->_L3 = outC->Context_CAST_Int_to_NID_BG_1.nid_bg;
  outC->nid_bg = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void DECODE_NID_LRBG_init_TM_conversions(
  outC_DECODE_NID_LRBG_TM_conversions *outC)
{
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->nid_bg = kcg_lit_int32(0);
  outC->nid_c = kcg_lit_int32(0);
  /* _L3=(TM_conversions::CAST_Int_to_NID_BG#1)/ */
  CAST_Int_to_NID_BG_init_TM_conversions(&outC->Context_CAST_Int_to_NID_BG_1);
  /* _L2=(TM_conversions::CAST_Int_to_NID_C#1)/ */
  CAST_Int_to_NID_C_init_TM_conversions(&outC->Context_CAST_Int_to_NID_C_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DECODE_NID_LRBG_reset_TM_conversions(
  outC_DECODE_NID_LRBG_TM_conversions *outC)
{
  /* _L3=(TM_conversions::CAST_Int_to_NID_BG#1)/ */
  CAST_Int_to_NID_BG_reset_TM_conversions(&outC->Context_CAST_Int_to_NID_BG_1);
  /* _L2=(TM_conversions::CAST_Int_to_NID_C#1)/ */
  CAST_Int_to_NID_C_reset_TM_conversions(&outC->Context_CAST_Int_to_NID_C_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DECODE_NID_LRBG_TM_conversions.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

