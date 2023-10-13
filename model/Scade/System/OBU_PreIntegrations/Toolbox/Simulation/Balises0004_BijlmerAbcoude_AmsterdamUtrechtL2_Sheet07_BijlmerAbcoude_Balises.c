/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises.h"

/* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balises0004_BijlmerAbcoude/ */
void Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
  /* SectionData_in/ */
  TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises *outC)
{
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L3, &outC->_L6.BG_Message);
  outC->_L2 = outC->_L6.TrainPosRaw.TrainPosCalibrated;
  /* _L1=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balise_Group_371#1)/ */
  Balise_Group_371_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->_L3,
    outC->_L2,
    (BaliseGroupData_TM *) &BG371_Balises426,
    &outC->Context_Balise_Group_371_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L1,
    &outC->Context_Balise_Group_371_1.BG_message_out);
  /* _L7=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balise_Group_372#1)/ */
  Balise_Group_372_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->_L1,
    outC->_L2,
    (BaliseGroupData_TM *) &BG372_Balises426,
    &outC->Context_Balise_Group_372_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L7,
    &outC->Context_Balise_Group_372_1.BG_message_out);
  /* _L8=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balise_Group_373#2)/ */
  Balise_Group_373_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->_L7,
    outC->_L2,
    (BaliseGroupData_TM *) &BG373_Balises426,
    &outC->Context_Balise_Group_373_2);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L8,
    &outC->Context_Balise_Group_373_2.BG_message_out);
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L4, &outC->_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&outC->_L4.BG_Message, &outC->_L8);
  }
  kcg_copy_TrackSectionData_T_InfraLib(&outC->SectionData_out, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void Balises0004_BijlmerAbcoude_init_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
  outC_Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;

  outC->_L8.Header.q_updown = kcg_lit_int64(0);
  outC->_L8.Header.m_version = kcg_lit_int64(0);
  outC->_L8.Header.q_media = kcg_lit_int64(0);
  outC->_L8.Header.n_pig = kcg_lit_int64(0);
  outC->_L8.Header.n_total = kcg_lit_int64(0);
  outC->_L8.Header.m_dup = kcg_lit_int64(0);
  outC->_L8.Header.m_mcount = kcg_lit_int64(0);
  outC->_L8.Header.nid_c = kcg_lit_int64(0);
  outC->_L8.Header.nid_bg = kcg_lit_int64(0);
  outC->_L8.Header.q_link = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L8.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L8.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L8.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L8.Messages.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L8.Messages.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L8.Messages.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L7.Header.q_updown = kcg_lit_int64(0);
  outC->_L7.Header.m_version = kcg_lit_int64(0);
  outC->_L7.Header.q_media = kcg_lit_int64(0);
  outC->_L7.Header.n_pig = kcg_lit_int64(0);
  outC->_L7.Header.n_total = kcg_lit_int64(0);
  outC->_L7.Header.m_dup = kcg_lit_int64(0);
  outC->_L7.Header.m_mcount = kcg_lit_int64(0);
  outC->_L7.Header.nid_c = kcg_lit_int64(0);
  outC->_L7.Header.nid_bg = kcg_lit_int64(0);
  outC->_L7.Header.q_link = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L7.Messages.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L7.Messages.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L7.Messages.PacketHeaders[idx2].valid = kcg_true;
    outC->_L7.Messages.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L7.Messages.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L7.Messages.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L6.TrainPosRaw.TrainPos_in = kcg_lit_float64(0.0);
  outC->_L6.TrainPosRaw.OffsetTotal = kcg_lit_int64(0);
  outC->_L6.TrainPosRaw.TrainPosCalibrated = kcg_lit_float64(0.0);
  outC->_L6.BG_Message.Header.q_updown = kcg_lit_int64(0);
  outC->_L6.BG_Message.Header.m_version = kcg_lit_int64(0);
  outC->_L6.BG_Message.Header.q_media = kcg_lit_int64(0);
  outC->_L6.BG_Message.Header.n_pig = kcg_lit_int64(0);
  outC->_L6.BG_Message.Header.n_total = kcg_lit_int64(0);
  outC->_L6.BG_Message.Header.m_dup = kcg_lit_int64(0);
  outC->_L6.BG_Message.Header.m_mcount = kcg_lit_int64(0);
  outC->_L6.BG_Message.Header.nid_c = kcg_lit_int64(0);
  outC->_L6.BG_Message.Header.nid_bg = kcg_lit_int64(0);
  outC->_L6.BG_Message.Header.q_link = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L6.BG_Message.Messages.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L6.BG_Message.Messages.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L6.BG_Message.Messages.PacketHeaders[idx4].valid = kcg_true;
    outC->_L6.BG_Message.Messages.PacketHeaders[idx4].startAddress =
      kcg_lit_int64(0);
    outC->_L6.BG_Message.Messages.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L6.BG_Message.Messages.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L1.Header.q_updown = kcg_lit_int64(0);
  outC->_L1.Header.m_version = kcg_lit_int64(0);
  outC->_L1.Header.q_media = kcg_lit_int64(0);
  outC->_L1.Header.n_pig = kcg_lit_int64(0);
  outC->_L1.Header.n_total = kcg_lit_int64(0);
  outC->_L1.Header.m_dup = kcg_lit_int64(0);
  outC->_L1.Header.m_mcount = kcg_lit_int64(0);
  outC->_L1.Header.nid_c = kcg_lit_int64(0);
  outC->_L1.Header.nid_bg = kcg_lit_int64(0);
  outC->_L1.Header.q_link = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L1.Messages.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L1.Messages.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L1.Messages.PacketHeaders[idx6].valid = kcg_true;
    outC->_L1.Messages.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->_L1.Messages.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L1.Messages.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L3.Header.q_updown = kcg_lit_int64(0);
  outC->_L3.Header.m_version = kcg_lit_int64(0);
  outC->_L3.Header.q_media = kcg_lit_int64(0);
  outC->_L3.Header.n_pig = kcg_lit_int64(0);
  outC->_L3.Header.n_total = kcg_lit_int64(0);
  outC->_L3.Header.m_dup = kcg_lit_int64(0);
  outC->_L3.Header.m_mcount = kcg_lit_int64(0);
  outC->_L3.Header.nid_c = kcg_lit_int64(0);
  outC->_L3.Header.nid_bg = kcg_lit_int64(0);
  outC->_L3.Header.q_link = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L3.Messages.PacketHeaders[idx8].nid_packet = kcg_lit_int64(0);
    outC->_L3.Messages.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L3.Messages.PacketHeaders[idx8].valid = kcg_true;
    outC->_L3.Messages.PacketHeaders[idx8].startAddress = kcg_lit_int64(0);
    outC->_L3.Messages.PacketHeaders[idx8].endAddress = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L3.Messages.PacketData[idx9] = kcg_lit_int64(0);
  }
  outC->_L4.TrainPosRaw.TrainPos_in = kcg_lit_float64(0.0);
  outC->_L4.TrainPosRaw.OffsetTotal = kcg_lit_int64(0);
  outC->_L4.TrainPosRaw.TrainPosCalibrated = kcg_lit_float64(0.0);
  outC->_L4.BG_Message.Header.q_updown = kcg_lit_int64(0);
  outC->_L4.BG_Message.Header.m_version = kcg_lit_int64(0);
  outC->_L4.BG_Message.Header.q_media = kcg_lit_int64(0);
  outC->_L4.BG_Message.Header.n_pig = kcg_lit_int64(0);
  outC->_L4.BG_Message.Header.n_total = kcg_lit_int64(0);
  outC->_L4.BG_Message.Header.m_dup = kcg_lit_int64(0);
  outC->_L4.BG_Message.Header.m_mcount = kcg_lit_int64(0);
  outC->_L4.BG_Message.Header.nid_c = kcg_lit_int64(0);
  outC->_L4.BG_Message.Header.nid_bg = kcg_lit_int64(0);
  outC->_L4.BG_Message.Header.q_link = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L4.BG_Message.Messages.PacketHeaders[idx10].nid_packet =
      kcg_lit_int64(0);
    outC->_L4.BG_Message.Messages.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L4.BG_Message.Messages.PacketHeaders[idx10].valid = kcg_true;
    outC->_L4.BG_Message.Messages.PacketHeaders[idx10].startAddress =
      kcg_lit_int64(0);
    outC->_L4.BG_Message.Messages.PacketHeaders[idx10].endAddress =
      kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L4.BG_Message.Messages.PacketData[idx11] = kcg_lit_int64(0);
  }
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
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx12].nid_packet =
      kcg_lit_int64(0);
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx12].q_dir =
      Q_DIR_Reverse;
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx12].valid = kcg_true;
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx12].startAddress =
      kcg_lit_int64(0);
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx12].endAddress =
      kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->SectionData_out.BG_Message.Messages.PacketData[idx13] = kcg_lit_int64(0);
  }
  /* _L8=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balise_Group_373#2)/ */
  Balise_Group_373_init_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->Context_Balise_Group_373_2);
  /* _L7=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balise_Group_372#1)/ */
  Balise_Group_372_init_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->Context_Balise_Group_372_1);
  /* _L1=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balise_Group_371#1)/ */
  Balise_Group_371_init_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->Context_Balise_Group_371_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Balises0004_BijlmerAbcoude_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
  outC_Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises *outC)
{
  /* _L8=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balise_Group_373#2)/ */
  Balise_Group_373_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->Context_Balise_Group_373_2);
  /* _L7=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balise_Group_372#1)/ */
  Balise_Group_372_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->Context_Balise_Group_372_1);
  /* _L1=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balise_Group_371#1)/ */
  Balise_Group_371_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->Context_Balise_Group_371_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises.c
** Generation date: 2023-09-12T13:45:52
*************************************************************$ */

