/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket003__GetOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__GetOnboardNumbers/ */
void RadioTrainTrackPacket003__GetOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
  /* inRadioTrainTrackPacket/ */
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket,
  outC_RadioTrainTrackPacket003__GetOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg *outC)
{
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &outC->_L1,
    inRadioTrainTrackPacket);
  kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(&outC->_L2, &outC->_L1.aNID_RADIO);
  kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(
    &outC->outOnboardPhoneNumbers,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrainTrackPacket003__GetOnboardNumbers_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
  outC_RadioTrainTrackPacket003__GetOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L2[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L2[idx1].telephoneNumber[idx] = kcg_lit_int32(0);
    }
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.number = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 1; idx3++) {
    outC->_L1.aNID_RADIO[idx3].valid = kcg_true;
    for (idx2 = 0; idx2 < 15; idx2++) {
      outC->_L1.aNID_RADIO[idx3].telephoneNumber[idx2] = kcg_lit_int32(0);
    }
  }
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->outOnboardPhoneNumbers[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->outOnboardPhoneNumbers[idx5].telephoneNumber[idx4] = kcg_lit_int32(0);
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrainTrackPacket003__GetOnboardNumbers_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
  outC_RadioTrainTrackPacket003__GetOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackPacket003__GetOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

