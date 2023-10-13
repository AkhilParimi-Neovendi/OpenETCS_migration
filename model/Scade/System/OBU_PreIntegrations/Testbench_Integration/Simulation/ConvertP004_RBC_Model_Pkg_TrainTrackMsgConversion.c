/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP004_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004/ */
void ConvertP004_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* newP004/ */
  P004_TM_TrainToTrack *newP004,
  outC_ConvertP004_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  static NID_PACKET noname;
  static L_PACKET _1_noname;

  kcg_copy_P004_TM_TrainToTrack(&outC->_L1, newP004);
  outC->_L3 = outC->_L1.l_packet;
  _1_noname = outC->_L3;
  outC->_L4 = outC->_L1.nid_packet;
  noname = outC->_L4;
  outC->_L5 = outC->_L1.valid;
  outC->_L2 = outC->_L1.m_error;
  outC->_L6.valid = outC->_L5;
  outC->_L6.m_error = outC->_L2;
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&outC->oldP004, &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void ConvertP004_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP004_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  outC->_L6.valid = kcg_true;
  outC->_L6.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2 = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_packet = kcg_lit_int64(0);
  outC->_L1.l_packet = kcg_lit_int64(0);
  outC->_L1.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->oldP004.valid = kcg_true;
  outC->oldP004.m_error = M_ERROR_Balise_group_linking_consistency_error;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ConvertP004_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP004_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertP004_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

