/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_L_PACKET_to_int_TM_conversions.h"

/* TM_conversions::CAST_L_PACKET_to_int/ */
void CAST_L_PACKET_to_int_TM_conversions(
  /* l_packet/ */
  L_PACKET l_packet,
  outC_CAST_L_PACKET_to_int_TM_conversions *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;

  outC->_L13 = kcg_lit_int32(8191);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L1 = l_packet;
  outC->l_packet_int = outC->_L1;
  outC->_L9 = outC->_L1 > outC->_L13;
  outC->_L8 = outC->_L1 < outC->_L12;
  _1_noname = outC->_L8;
  noname = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_L_PACKET_to_int_init_TM_conversions(
  outC_CAST_L_PACKET_to_int_TM_conversions *outC)
{
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L1 = kcg_lit_int32(0);
  outC->l_packet_int = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_L_PACKET_to_int_reset_TM_conversions(
  outC_CAST_L_PACKET_to_int_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_L_PACKET_to_int_TM_conversions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

