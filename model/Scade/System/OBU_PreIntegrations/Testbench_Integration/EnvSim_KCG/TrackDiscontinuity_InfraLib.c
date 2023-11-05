/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackDiscontinuity_InfraLib.h"

/* InfraLib::TrackDiscontinuity/ */
void TrackDiscontinuity_InfraLib(
  /* SectionData_in/ */
  TrackSectionData_T_InfraLib *SectionData_in,
  /* StartSection/ */
  kcg_int32 StartSection,
  /* EndSection/ */
  kcg_int32 EndSection,
  outC_TrackDiscontinuity_InfraLib *outC)
{
  static kcg_float32 op_call;

  outC->_L8_Abs_3_int32 = kcg_lit_int32(0);
  outC->_L2 = StartSection;
  outC->_L3 = EndSection;
  outC->_L49 = outC->_L3 - outC->_L2;
  outC->A_Input_Abs_3_int32 = outC->_L49;
  outC->_L5_Abs_3_int32 = outC->A_Input_Abs_3_int32;
  outC->_L3_Abs_3_int32 = - outC->_L5_Abs_3_int32;
  outC->_L1_Abs_3_int32 = outC->_L8_Abs_3_int32 <= outC->_L5_Abs_3_int32;
  /* @1/_L2= */
  if (outC->_L1_Abs_3_int32) {
    outC->_L2_Abs_3_int32 = outC->_L5_Abs_3_int32;
  }
  else {
    outC->_L2_Abs_3_int32 = outC->_L3_Abs_3_int32;
  }
  outC->A_Output_Abs_3_int32 = outC->_L2_Abs_3_int32;
  outC->_L50 = outC->A_Output_Abs_3_int32;
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L16, SectionData_in);
  kcg_copy_TrainPosRaw_T_InfraLib(&outC->_L81, &outC->_L16.TrainPosRaw);
  outC->_L83 = outC->_L81.OffsetTotal;
  outC->_L57 = outC->_L83 + outC->_L50;
  outC->_L59 = /* _L59= */(kcg_float32) outC->_L57;
  outC->_L82 = outC->_L81.TrainPos_in;
  outC->_L62 = outC->_L82 < outC->_L59;
  outC->_L60 = /* _L60= */(kcg_float32) outC->_L83;
  outC->_L61 = outC->_L82 >= outC->_L60;
  outC->_L63 = outC->_L61 & outC->_L62;
  outC->every = outC->_L63;
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L80, SectionData_in);
  if (outC->every) {
    /* _L79=(InfraLib::TrackDiscontinuity_CalcTrainPos#2)/ */
    TrackDiscontinuity_CalcTrainPos_InfraLib(
      outC->_L49,
      outC->_L2,
      &outC->_L80,
      &outC->Context_TrackDiscontinuity_CalcTrainPos_2);
    op_call = outC->Context_TrackDiscontinuity_CalcTrainPos_2.TrainPosCalibrated;
  }
  outC->NewOffset = outC->_L57;
  outC->_L91 = outC->NewOffset;
  kcg_copy_TrainPosRaw_T_InfraLib(&outC->_L90, &outC->_L81);
  if (kcg_true) {
    outC->_L90.OffsetTotal = outC->_L91;
  }
  if (outC->every) {
    outC->_L79 = op_call;
  }
  else {
    outC->_L79 = kcg_lit_float32(0.0);
  }
  kcg_copy_TrainPosRaw_T_InfraLib(&outC->_L89, &outC->_L90);
  if (kcg_true) {
    outC->_L89.TrainPosCalibrated = outC->_L79;
  }
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L88, &outC->_L16);
  if (kcg_true) {
    kcg_copy_TrainPosRaw_T_InfraLib(&outC->_L88.TrainPosRaw, &outC->_L89);
  }
  kcg_copy_TrackSectionData_T_InfraLib(&outC->SectionData_out, &outC->_L88);
}

#ifndef KCG_USER_DEFINED_INIT
void TrackDiscontinuity_init_InfraLib(outC_TrackDiscontinuity_InfraLib *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L91 = kcg_lit_int32(0);
  outC->_L90.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L90.OffsetTotal = kcg_lit_int32(0);
  outC->_L90.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L89.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L89.OffsetTotal = kcg_lit_int32(0);
  outC->_L89.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L88.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L88.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L88.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L88.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L88.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L88.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L88.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L88.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L88.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L88.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L88.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L88.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L88.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L88.BG_Message.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L88.BG_Message.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L88.BG_Message.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L88.BG_Message.Messages.PacketHeaders[idx].startAddress =
      kcg_lit_int32(0);
    outC->_L88.BG_Message.Messages.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L88.BG_Message.Messages.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L83 = kcg_lit_int32(0);
  outC->_L82 = kcg_lit_float32(0.0);
  outC->_L81.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L81.OffsetTotal = kcg_lit_int32(0);
  outC->_L81.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L80.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L80.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L80.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L80.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L80.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L80.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L80.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L80.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L80.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L80.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L80.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L80.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L80.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L80.BG_Message.Messages.PacketHeaders[idx2].nid_packet =
      kcg_lit_int32(0);
    outC->_L80.BG_Message.Messages.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L80.BG_Message.Messages.PacketHeaders[idx2].valid = kcg_true;
    outC->_L80.BG_Message.Messages.PacketHeaders[idx2].startAddress =
      kcg_lit_int32(0);
    outC->_L80.BG_Message.Messages.PacketHeaders[idx2].endAddress =
      kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L80.BG_Message.Messages.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L79 = kcg_lit_float32(0.0);
  outC->_L63 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L60 = kcg_lit_float32(0.0);
  outC->_L59 = kcg_lit_float32(0.0);
  outC->_L57 = kcg_lit_int32(0);
  outC->_L50 = kcg_lit_int32(0);
  outC->_L49 = kcg_lit_int32(0);
  outC->_L16.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L16.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L16.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L16.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L16.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L16.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L16.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L16.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L16.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L16.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L16.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L16.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L16.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L16.BG_Message.Messages.PacketHeaders[idx4].nid_packet =
      kcg_lit_int32(0);
    outC->_L16.BG_Message.Messages.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L16.BG_Message.Messages.PacketHeaders[idx4].valid = kcg_true;
    outC->_L16.BG_Message.Messages.PacketHeaders[idx4].startAddress =
      kcg_lit_int32(0);
    outC->_L16.BG_Message.Messages.PacketHeaders[idx4].endAddress =
      kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L16.BG_Message.Messages.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->NewOffset = kcg_lit_int32(0);
  outC->every = kcg_true;
  outC->_L1_Abs_3_int32 = kcg_true;
  outC->_L2_Abs_3_int32 = kcg_lit_int32(0);
  outC->_L3_Abs_3_int32 = kcg_lit_int32(0);
  outC->_L5_Abs_3_int32 = kcg_lit_int32(0);
  outC->_L8_Abs_3_int32 = kcg_lit_int32(0);
  outC->A_Input_Abs_3_int32 = kcg_lit_int32(0);
  outC->A_Output_Abs_3_int32 = kcg_lit_int32(0);
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
  /* _L79=(InfraLib::TrackDiscontinuity_CalcTrainPos#2)/ */
  TrackDiscontinuity_CalcTrainPos_init_InfraLib(
    &outC->Context_TrackDiscontinuity_CalcTrainPos_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrackDiscontinuity_reset_InfraLib(outC_TrackDiscontinuity_InfraLib *outC)
{
  /* _L79=(InfraLib::TrackDiscontinuity_CalcTrainPos#2)/ */
  TrackDiscontinuity_CalcTrainPos_reset_InfraLib(
    &outC->Context_TrackDiscontinuity_CalcTrainPos_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: InfraLib::TrackDiscontinuity/
  @1: (math::Abs#3)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrackDiscontinuity_InfraLib.c
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

