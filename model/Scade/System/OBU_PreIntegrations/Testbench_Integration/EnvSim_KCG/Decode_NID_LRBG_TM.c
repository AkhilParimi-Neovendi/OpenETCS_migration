/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Decode_NID_LRBG_TM.h"

/* TM::Decode_NID_LRBG/ */
void Decode_NID_LRBG_TM(
  /* NID_LRBG_in/ */
  NID_LRBG NID_LRBG_in,
  outC_Decode_NID_LRBG_TM *outC)
{
  outC->_L2 = kcg_lit_int64(100000);
  outC->_L1 = NID_LRBG_in;
  outC->_L4 = outC->_L1 % outC->_L2;
  outC->_L3 = outC->_L1 / outC->_L2;
  outC->NID_BG_out = outC->_L4;
  outC->NID_C_out = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void Decode_NID_LRBG_init_TM(outC_Decode_NID_LRBG_TM *outC)
{
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->NID_BG_out = kcg_lit_int64(0);
  outC->NID_C_out = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Decode_NID_LRBG_reset_TM(outC_Decode_NID_LRBG_TM *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Decode_NID_LRBG_TM.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

