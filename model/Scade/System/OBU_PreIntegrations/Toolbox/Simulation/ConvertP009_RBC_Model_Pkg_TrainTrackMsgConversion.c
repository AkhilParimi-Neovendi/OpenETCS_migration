/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009/ */
void ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* newP009/ */
  P009_TM_TrainToTrack *newP009,
  outC_ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  NID_PACKET noname;
  L_PACKET _1_noname;

  kcg_copy_P009_TM_TrainToTrack(&outC->_L1, newP009);
  outC->_L3 = outC->_L1.l_packet;
  _1_noname = outC->_L3;
  outC->_L4 = outC->_L1.nid_packet;
  noname = outC->_L4;
  outC->_L5 = outC->_L1.valid;
  outC->_L2 = outC->_L1.nid_ltrbg;
  outC->_L6.valid = outC->_L5;
  outC->_L6.transitionInformation = outC->_L2;
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &outC->oldP009,
    &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void ConvertP009_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  outC->_L6.valid = kcg_true;
  outC->_L6.transitionInformation = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_packet = kcg_lit_int32(0);
  outC->_L1.l_packet = kcg_lit_int32(0);
  outC->_L1.nid_ltrbg = kcg_lit_int32(0);
  outC->oldP009.valid = kcg_true;
  outC->oldP009.transitionInformation = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ConvertP009_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

