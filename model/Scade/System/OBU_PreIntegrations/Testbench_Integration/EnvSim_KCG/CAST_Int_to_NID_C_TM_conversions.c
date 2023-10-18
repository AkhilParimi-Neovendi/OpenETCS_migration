/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_C_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_C/ */
void CAST_Int_to_NID_C_TM_conversions(
  /* nid_c_int/ */
  kcg_int64 nid_c_int,
  outC_CAST_Int_to_NID_C_TM_conversions *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;

  outC->_L11 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(1023);
  outC->_L1 = nid_c_int;
  outC->_L9 = outC->_L1 > outC->_L10;
  outC->_L8 = outC->_L1 < outC->_L11;
  _1_noname = outC->_L8;
  noname = outC->_L9;
  outC->nid_c = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_NID_C_init_TM_conversions(
  outC_CAST_Int_to_NID_C_TM_conversions *outC)
{
  outC->_L11 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L1 = kcg_lit_int64(0);
  outC->nid_c = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_NID_C_reset_TM_conversions(
  outC_CAST_Int_to_NID_C_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_NID_C_TM_conversions.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

