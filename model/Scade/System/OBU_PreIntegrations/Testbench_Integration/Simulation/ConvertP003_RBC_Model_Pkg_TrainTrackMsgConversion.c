/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003/ */
void ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* newP003/ */
  P003_TM_TrainToTrack *newP003,
  outC_ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  static NID_PACKET noname;
  static L_PACKET _1_noname;
  static P003_nid_radio_list_t_TM_TrainToTrack _2_noname;

  kcg_copy_P003_TM_TrainToTrack(&outC->_L1, newP003);
  outC->_L46 = outC->_L1.valid;
  outC->_L45 = outC->_L1.nid_packet;
  outC->_L44 = outC->_L1.l_packet;
  outC->_L43 = outC->_L1.n_iter;
  kcg_copy_P003_nid_radio_list_t_TM_TrainToTrack(
    &outC->_L42,
    &outC->_L1.nid_radio);
  kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(
    &outC->_L41,
    (aNID_RADIO_T_Packet_TrainTypes_Pkg *)
      &cEMPTY_ANID_RADIO_RBC_Model_Pkg_TrainTrackMsgConversion);
  kcg_copy_P003_nid_radio_list_t_TM_TrainToTrack(&_2_noname, &outC->_L42);
  _1_noname = outC->_L44;
  noname = outC->_L45;
  outC->_L39.valid = outC->_L46;
  outC->_L39.number = outC->_L43;
  kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(
    &outC->_L39.aNID_RADIO,
    &outC->_L41);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &outC->oldP003,
    &outC->_L39);
}

#ifndef KCG_USER_DEFINED_INIT
void ConvertP003_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  for (idx = 0; idx < 5; idx++) {
    outC->_L42[idx] = kcg_lit_int32(0);
  }
  outC->_L43 = kcg_lit_int32(0);
  outC->_L44 = kcg_lit_int32(0);
  outC->_L45 = kcg_lit_int32(0);
  outC->_L46 = kcg_true;
  for (idx2 = 0; idx2 < 1; idx2++) {
    outC->_L41[idx2].valid = kcg_true;
    for (idx1 = 0; idx1 < 15; idx1++) {
      outC->_L41[idx2].telephoneNumber[idx1] = kcg_lit_int32(0);
    }
  }
  outC->_L39.valid = kcg_true;
  outC->_L39.number = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 1; idx4++) {
    outC->_L39.aNID_RADIO[idx4].valid = kcg_true;
    for (idx3 = 0; idx3 < 15; idx3++) {
      outC->_L39.aNID_RADIO[idx4].telephoneNumber[idx3] = kcg_lit_int32(0);
    }
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_packet = kcg_lit_int32(0);
  outC->_L1.l_packet = kcg_lit_int32(0);
  outC->_L1.n_iter = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L1.nid_radio[idx5] = kcg_lit_int32(0);
  }
  outC->oldP003.valid = kcg_true;
  outC->oldP003.number = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 1; idx7++) {
    outC->oldP003.aNID_RADIO[idx7].valid = kcg_true;
    for (idx6 = 0; idx6 < 15; idx6++) {
      outC->oldP003.aNID_RADIO[idx7].telephoneNumber[idx6] = kcg_lit_int32(0);
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ConvertP003_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

