/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackClose_InfraLib.h"

/* InfraLib::TrackClose/ */
void TrackClose_InfraLib(
  /* SectionData_in/ */
  TrackSectionData_T_InfraLib *SectionData_in,
  outC_TrackClose_InfraLib *outC)
{
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L1, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L6, &outC->_L1.BG_Message);
  kcg_copy_CompressedBaliseMessage_TM(&outC->BaliseMessage, &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void TrackClose_init_InfraLib(outC_TrackClose_InfraLib *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L6.Header.q_updown = kcg_lit_int64(0);
  outC->_L6.Header.m_version = kcg_lit_int64(0);
  outC->_L6.Header.q_media = kcg_lit_int64(0);
  outC->_L6.Header.n_pig = kcg_lit_int64(0);
  outC->_L6.Header.n_total = kcg_lit_int64(0);
  outC->_L6.Header.m_dup = kcg_lit_int64(0);
  outC->_L6.Header.m_mcount = kcg_lit_int64(0);
  outC->_L6.Header.nid_c = kcg_lit_int64(0);
  outC->_L6.Header.nid_bg = kcg_lit_int64(0);
  outC->_L6.Header.q_link = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L6.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L6.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L6.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L6.Messages.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L6.Messages.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L6.Messages.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L1.TrainPosRaw.TrainPos_in = kcg_lit_float64(0.0);
  outC->_L1.TrainPosRaw.OffsetTotal = kcg_lit_int64(0);
  outC->_L1.TrainPosRaw.TrainPosCalibrated = kcg_lit_float64(0.0);
  outC->_L1.BG_Message.Header.q_updown = kcg_lit_int64(0);
  outC->_L1.BG_Message.Header.m_version = kcg_lit_int64(0);
  outC->_L1.BG_Message.Header.q_media = kcg_lit_int64(0);
  outC->_L1.BG_Message.Header.n_pig = kcg_lit_int64(0);
  outC->_L1.BG_Message.Header.n_total = kcg_lit_int64(0);
  outC->_L1.BG_Message.Header.m_dup = kcg_lit_int64(0);
  outC->_L1.BG_Message.Header.m_mcount = kcg_lit_int64(0);
  outC->_L1.BG_Message.Header.nid_c = kcg_lit_int64(0);
  outC->_L1.BG_Message.Header.nid_bg = kcg_lit_int64(0);
  outC->_L1.BG_Message.Header.q_link = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L1.BG_Message.Messages.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L1.BG_Message.Messages.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L1.BG_Message.Messages.PacketHeaders[idx2].valid = kcg_true;
    outC->_L1.BG_Message.Messages.PacketHeaders[idx2].startAddress =
      kcg_lit_int64(0);
    outC->_L1.BG_Message.Messages.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L1.BG_Message.Messages.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->BaliseMessage.Header.q_updown = kcg_lit_int64(0);
  outC->BaliseMessage.Header.m_version = kcg_lit_int64(0);
  outC->BaliseMessage.Header.q_media = kcg_lit_int64(0);
  outC->BaliseMessage.Header.n_pig = kcg_lit_int64(0);
  outC->BaliseMessage.Header.n_total = kcg_lit_int64(0);
  outC->BaliseMessage.Header.m_dup = kcg_lit_int64(0);
  outC->BaliseMessage.Header.m_mcount = kcg_lit_int64(0);
  outC->BaliseMessage.Header.nid_c = kcg_lit_int64(0);
  outC->BaliseMessage.Header.nid_bg = kcg_lit_int64(0);
  outC->BaliseMessage.Header.q_link = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->BaliseMessage.Messages.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->BaliseMessage.Messages.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->BaliseMessage.Messages.PacketHeaders[idx4].valid = kcg_true;
    outC->BaliseMessage.Messages.PacketHeaders[idx4].startAddress =
      kcg_lit_int64(0);
    outC->BaliseMessage.Messages.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->BaliseMessage.Messages.PacketData[idx5] = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrackClose_reset_InfraLib(outC_TrackClose_InfraLib *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrackClose_InfraLib.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

