/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h"

/* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613/ */
void Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  /* SectionData_in/ */
  TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises *outC)
{
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L3, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L13, &outC->_L3.BG_Message);
  outC->_L14 = outC->_L3.TrainPosRaw.TrainPosCalibrated;
  /* _L1=(AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balise_Group_352#1)/ */
  Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->_L13,
    outC->_L14,
    (BaliseGroupData_TM *) &BG352_Balises426,
    &outC->Context_Balise_Group_352_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L1,
    &outC->Context_Balise_Group_352_1.BG_message_out);
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L15, &outC->_L3);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&outC->_L15.BG_Message, &outC->_L1);
  }
  kcg_copy_TrackSectionData_T_InfraLib(&outC->SectionData_out, &outC->_L15);
}

#ifndef KCG_USER_DEFINED_INIT
void Balises0001_Amstel_UB_Signal_611_to_613_init_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  outC_Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;

  outC->_L15.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L15.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L15.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L15.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L15.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L15.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L15.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L15.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L15.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L15.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L15.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L15.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L15.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L15.BG_Message.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L15.BG_Message.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L15.BG_Message.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L15.BG_Message.Messages.PacketHeaders[idx].startAddress =
      kcg_lit_int32(0);
    outC->_L15.BG_Message.Messages.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L15.BG_Message.Messages.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L14 = kcg_lit_float32(0.0);
  outC->_L13.Header.q_updown = kcg_lit_int32(0);
  outC->_L13.Header.m_version = kcg_lit_int32(0);
  outC->_L13.Header.q_media = kcg_lit_int32(0);
  outC->_L13.Header.n_pig = kcg_lit_int32(0);
  outC->_L13.Header.n_total = kcg_lit_int32(0);
  outC->_L13.Header.m_dup = kcg_lit_int32(0);
  outC->_L13.Header.m_mcount = kcg_lit_int32(0);
  outC->_L13.Header.nid_c = kcg_lit_int32(0);
  outC->_L13.Header.nid_bg = kcg_lit_int32(0);
  outC->_L13.Header.q_link = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L13.Messages.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L13.Messages.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L13.Messages.PacketHeaders[idx2].valid = kcg_true;
    outC->_L13.Messages.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L13.Messages.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L13.Messages.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L3.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L3.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L3.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L3.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L3.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L3.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L3.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L3.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L3.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L3.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L3.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L3.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L3.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L3.BG_Message.Messages.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L3.BG_Message.Messages.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L3.BG_Message.Messages.PacketHeaders[idx4].valid = kcg_true;
    outC->_L3.BG_Message.Messages.PacketHeaders[idx4].startAddress =
      kcg_lit_int32(0);
    outC->_L3.BG_Message.Messages.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L3.BG_Message.Messages.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L1.Header.q_updown = kcg_lit_int32(0);
  outC->_L1.Header.m_version = kcg_lit_int32(0);
  outC->_L1.Header.q_media = kcg_lit_int32(0);
  outC->_L1.Header.n_pig = kcg_lit_int32(0);
  outC->_L1.Header.n_total = kcg_lit_int32(0);
  outC->_L1.Header.m_dup = kcg_lit_int32(0);
  outC->_L1.Header.m_mcount = kcg_lit_int32(0);
  outC->_L1.Header.nid_c = kcg_lit_int32(0);
  outC->_L1.Header.nid_bg = kcg_lit_int32(0);
  outC->_L1.Header.q_link = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L1.Messages.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L1.Messages.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L1.Messages.PacketHeaders[idx6].valid = kcg_true;
    outC->_L1.Messages.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L1.Messages.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L1.Messages.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->SectionData_out.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->SectionData_out.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->SectionData_out.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->SectionData_out.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->SectionData_out.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->SectionData_out.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->SectionData_out.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->SectionData_out.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->SectionData_out.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->SectionData_out.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->SectionData_out.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->SectionData_out.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->SectionData_out.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx8].nid_packet =
      kcg_lit_int32(0);
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx8].q_dir =
      Q_DIR_Reverse;
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx8].valid = kcg_true;
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx8].startAddress =
      kcg_lit_int32(0);
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx8].endAddress =
      kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->SectionData_out.BG_Message.Messages.PacketData[idx9] = kcg_lit_int32(0);
  }
  /* _L1=(AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balise_Group_352#1)/ */
  Balise_Group_352_init_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->Context_Balise_Group_352_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Balises0001_Amstel_UB_Signal_611_to_613_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  outC_Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises *outC)
{
  /* _L1=(AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balise_Group_352#1)/ */
  Balise_Group_352_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->Context_Balise_Group_352_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

