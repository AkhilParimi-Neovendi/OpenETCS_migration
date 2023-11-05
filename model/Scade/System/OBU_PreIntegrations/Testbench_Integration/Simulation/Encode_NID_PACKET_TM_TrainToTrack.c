/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Encode_NID_PACKET_TM_TrainToTrack.h"

/* TM_TrainToTrack::Encode_NID_PACKET/ */
void Encode_NID_PACKET_TM_TrainToTrack(
  /* valid/ */
  kcg_bool valid,
  /* nid_packet/ */
  NID_PACKET nid_packet,
  outC_Encode_NID_PACKET_TM_TrainToTrack *outC)
{
  outC->_L13 = nid_meta_p000_TM_radio_messages;
  outC->_L11 = kcg_lit_int32(0);
  outC->_L1 = nid_packet;
  outC->_L10 = outC->_L1 == outC->_L11;
  /* _L9= */
  if (outC->_L10) {
    outC->_L9 = outC->_L13;
  }
  else {
    outC->_L9 = outC->_L1;
  }
  outC->_L8 = INVALID_NID_PACKET_TM_TrainToTrack;
  outC->_L6 = valid;
  /* _L7= */
  if (outC->_L6) {
    outC->_L7 = outC->_L9;
  }
  else {
    outC->_L7 = outC->_L8;
  }
  outC->meta = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void Encode_NID_PACKET_init_TM_TrainToTrack(
  outC_Encode_NID_PACKET_TM_TrainToTrack *outC)
{
  outC->_L13 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_true;
  outC->_L1 = kcg_lit_int32(0);
  outC->meta = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Encode_NID_PACKET_reset_TM_TrainToTrack(
  outC_Encode_NID_PACKET_TM_TrainToTrack *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Encode_NID_PACKET_TM_TrainToTrack.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

