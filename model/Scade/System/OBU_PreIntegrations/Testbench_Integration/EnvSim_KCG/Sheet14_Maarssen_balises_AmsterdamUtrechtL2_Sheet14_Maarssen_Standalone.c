/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Maarssen_balises/ */
void Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* SectionData_in/ */
  TrackSectionData_T_InfraLib *SectionData_in,
  outC_Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC)
{
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L1, SectionData_in);
  /* _L3=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen#1)/ */
  Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L1,
    &outC->Context_Balises0011_Maarssen_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L3,
    &outC->Context_Balises0011_Maarssen_1.SectionData_out);
  /* _L2=(AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS#1)/ */
  Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &outC->_L3,
    &outC->Context_Balises0012_MaarssenUtrechtCS_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L2,
    &outC->Context_Balises0012_MaarssenUtrechtCS_1.SectionData_out);
  kcg_copy_TrackSectionData_T_InfraLib(&outC->SectionData_out, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void Sheet14_Maarssen_balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC_Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

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
  for (idx = 0; idx < 30; idx++) {
    outC->_L3.BG_Message.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L3.BG_Message.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L3.BG_Message.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L3.BG_Message.Messages.PacketHeaders[idx].startAddress =
      kcg_lit_int32(0);
    outC->_L3.BG_Message.Messages.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L3.BG_Message.Messages.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L2.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L2.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L2.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L2.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L2.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L2.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L2.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L2.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L2.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L2.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L2.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L2.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L2.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L2.BG_Message.Messages.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L2.BG_Message.Messages.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L2.BG_Message.Messages.PacketHeaders[idx2].valid = kcg_true;
    outC->_L2.BG_Message.Messages.PacketHeaders[idx2].startAddress =
      kcg_lit_int32(0);
    outC->_L2.BG_Message.Messages.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L2.BG_Message.Messages.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L1.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L1.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L1.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L1.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L1.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L1.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L1.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L1.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L1.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L1.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L1.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L1.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L1.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L1.BG_Message.Messages.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L1.BG_Message.Messages.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L1.BG_Message.Messages.PacketHeaders[idx4].valid = kcg_true;
    outC->_L1.BG_Message.Messages.PacketHeaders[idx4].startAddress =
      kcg_lit_int32(0);
    outC->_L1.BG_Message.Messages.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L1.BG_Message.Messages.PacketData[idx5] = kcg_lit_int32(0);
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
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx6].nid_packet =
      kcg_lit_int32(0);
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx6].q_dir =
      Q_DIR_Reverse;
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx6].valid = kcg_true;
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx6].startAddress =
      kcg_lit_int32(0);
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx6].endAddress =
      kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->SectionData_out.BG_Message.Messages.PacketData[idx7] = kcg_lit_int32(0);
  }
  /* _L2=(AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS#1)/ */
  Balises0012_MaarssenUtrechtCS_init_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &outC->Context_Balises0012_MaarssenUtrechtCS_1);
  /* _L3=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen#1)/ */
  Balises0011_Maarssen_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balises0011_Maarssen_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Sheet14_Maarssen_balises_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC_Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC)
{
  /* _L2=(AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS#1)/ */
  Balises0012_MaarssenUtrechtCS_reset_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &outC->Context_Balises0012_MaarssenUtrechtCS_1);
  /* _L3=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen#1)/ */
  Balises0011_Maarssen_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balises0011_Maarssen_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

