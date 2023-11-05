/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP005_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005/ */
void ConvertP005_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* newP005/ */
  P005_TM_TrainToTrack *newP005,
  outC_ConvertP005_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  static NID_PACKET noname;
  static L_PACKET _1_noname;

  kcg_copy_P005_TM_TrainToTrack(&outC->_L1, newP005);
  outC->_L3 = outC->_L1.l_packet;
  _1_noname = outC->_L3;
  outC->_L4 = outC->_L1.nid_packet;
  noname = outC->_L4;
  outC->_L5 = outC->_L1.valid;
  outC->_L2 = outC->_L1.nid_opeartional;
  outC->_L7.valid = outC->_L5;
  outC->_L7.TrainRunningNumber = outC->_L2;
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->oldP005,
    &outC->_L7);
}

#ifndef KCG_USER_DEFINED_INIT
void ConvertP005_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP005_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  outC->_L7.valid = kcg_true;
  outC->_L7.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_packet = kcg_lit_int32(0);
  outC->_L1.l_packet = kcg_lit_int32(0);
  outC->_L1.nid_opeartional = kcg_lit_int32(0);
  outC->oldP005.valid = kcg_true;
  outC->oldP005.TrainRunningNumber = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ConvertP005_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP005_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertP005_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

