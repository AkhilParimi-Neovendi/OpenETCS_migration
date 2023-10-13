/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Decode_NID_PACKET_TM_TrainToTrack.h"

/* TM_TrainToTrack::Decode_NID_PACKET/ */
void Decode_NID_PACKET_TM_TrainToTrack(
  /* Meta/ */
  kcg_int64 Meta,
  /* Packet_ID/ */
  kcg_int64 Packet_ID,
  outC_Decode_NID_PACKET_TM_TrainToTrack *outC)
{
  outC->_L2 = Packet_ID;
  outC->_L1 = Meta;
  outC->_L3 = outC->_L1 == outC->_L2;
  outC->Valid = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void Decode_NID_PACKET_init_TM_TrainToTrack(
  outC_Decode_NID_PACKET_TM_TrainToTrack *outC)
{
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->Valid = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Decode_NID_PACKET_reset_TM_TrainToTrack(
  outC_Decode_NID_PACKET_TM_TrainToTrack *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Decode_NID_PACKET_TM_TrainToTrack.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

