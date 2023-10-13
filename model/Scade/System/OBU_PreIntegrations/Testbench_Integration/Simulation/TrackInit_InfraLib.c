/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackInit_InfraLib.h"

/* InfraLib::TrackInit/ */
void TrackInit_InfraLib(
  /* TrainPosIn/ */
  kcg_float64 TrainPosIn,
  /* InitialOffset/ */
  kcg_int64 InitialOffset,
  outC_TrackInit_InfraLib *outC)
{
  outC->_L12 = InitialOffset;
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L1 = TrainPosIn;
  outC->_L10.TrainPos_in = outC->_L1;
  outC->_L10.OffsetTotal = outC->_L12;
  outC->_L10.TrainPosCalibrated = outC->_L11;
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L4,
    (CompressedBaliseMessage_TM *) &DEFAULT_BTMMessage_TM);
  kcg_copy_TrainPosRaw_T_InfraLib(&outC->_L8.TrainPosRaw, &outC->_L10);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L8.BG_Message, &outC->_L4);
  kcg_copy_TrackSectionData_T_InfraLib(&outC->SectionData_out, &outC->_L8);
}

#ifndef KCG_USER_DEFINED_INIT
void TrackInit_init_InfraLib(outC_TrackInit_InfraLib *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L10.TrainPos_in = kcg_lit_float64(0.0);
  outC->_L10.OffsetTotal = kcg_lit_int64(0);
  outC->_L10.TrainPosCalibrated = kcg_lit_float64(0.0);
  outC->_L8.TrainPosRaw.TrainPos_in = kcg_lit_float64(0.0);
  outC->_L8.TrainPosRaw.OffsetTotal = kcg_lit_int64(0);
  outC->_L8.TrainPosRaw.TrainPosCalibrated = kcg_lit_float64(0.0);
  outC->_L8.BG_Message.Header.q_updown = kcg_lit_int64(0);
  outC->_L8.BG_Message.Header.m_version = kcg_lit_int64(0);
  outC->_L8.BG_Message.Header.q_media = kcg_lit_int64(0);
  outC->_L8.BG_Message.Header.n_pig = kcg_lit_int64(0);
  outC->_L8.BG_Message.Header.n_total = kcg_lit_int64(0);
  outC->_L8.BG_Message.Header.m_dup = kcg_lit_int64(0);
  outC->_L8.BG_Message.Header.m_mcount = kcg_lit_int64(0);
  outC->_L8.BG_Message.Header.nid_c = kcg_lit_int64(0);
  outC->_L8.BG_Message.Header.nid_bg = kcg_lit_int64(0);
  outC->_L8.BG_Message.Header.q_link = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L8.BG_Message.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L8.BG_Message.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L8.BG_Message.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L8.BG_Message.Messages.PacketHeaders[idx].startAddress =
      kcg_lit_int64(0);
    outC->_L8.BG_Message.Messages.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L8.BG_Message.Messages.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L4.Header.q_updown = kcg_lit_int64(0);
  outC->_L4.Header.m_version = kcg_lit_int64(0);
  outC->_L4.Header.q_media = kcg_lit_int64(0);
  outC->_L4.Header.n_pig = kcg_lit_int64(0);
  outC->_L4.Header.n_total = kcg_lit_int64(0);
  outC->_L4.Header.m_dup = kcg_lit_int64(0);
  outC->_L4.Header.m_mcount = kcg_lit_int64(0);
  outC->_L4.Header.nid_c = kcg_lit_int64(0);
  outC->_L4.Header.nid_bg = kcg_lit_int64(0);
  outC->_L4.Header.q_link = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L4.Messages.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L4.Messages.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L4.Messages.PacketHeaders[idx2].valid = kcg_true;
    outC->_L4.Messages.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L4.Messages.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L4.Messages.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L1 = kcg_lit_float64(0.0);
  outC->SectionData_out.TrainPosRaw.TrainPos_in = kcg_lit_float64(0.0);
  outC->SectionData_out.TrainPosRaw.OffsetTotal = kcg_lit_int64(0);
  outC->SectionData_out.TrainPosRaw.TrainPosCalibrated = kcg_lit_float64(0.0);
  outC->SectionData_out.BG_Message.Header.q_updown = kcg_lit_int64(0);
  outC->SectionData_out.BG_Message.Header.m_version = kcg_lit_int64(0);
  outC->SectionData_out.BG_Message.Header.q_media = kcg_lit_int64(0);
  outC->SectionData_out.BG_Message.Header.n_pig = kcg_lit_int64(0);
  outC->SectionData_out.BG_Message.Header.n_total = kcg_lit_int64(0);
  outC->SectionData_out.BG_Message.Header.m_dup = kcg_lit_int64(0);
  outC->SectionData_out.BG_Message.Header.m_mcount = kcg_lit_int64(0);
  outC->SectionData_out.BG_Message.Header.nid_c = kcg_lit_int64(0);
  outC->SectionData_out.BG_Message.Header.nid_bg = kcg_lit_int64(0);
  outC->SectionData_out.BG_Message.Header.q_link = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx4].nid_packet =
      kcg_lit_int64(0);
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx4].q_dir =
      Q_DIR_Reverse;
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx4].valid = kcg_true;
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx4].startAddress =
      kcg_lit_int64(0);
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx4].endAddress =
      kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->SectionData_out.BG_Message.Messages.PacketData[idx5] = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrackInit_reset_InfraLib(outC_TrackInit_InfraLib *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrackInit_InfraLib.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

