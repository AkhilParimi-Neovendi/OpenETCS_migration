/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackDiscontinuity_CalcTr_InfraLib.h"

/* InfraLib::TrackDiscontinuity_CalcTrainPos/ */
void TrackDiscontinuity_CalcTr_InfraLib(
  /* DeltaIn/ */
  kcg_int64 DeltaIn,
  /* StartSection/ */
  kcg_int64 StartSection,
  /* SectionDataIn/ */
  TrackSectionData_T_InfraLib *SectionDataIn,
  outC_TrackDiscontinuity_CalcTr_InfraLib *outC)
{
  outC->_L28 = StartSection;
  outC->_L33 = /* _L33= */(kcg_float64) outC->_L28;
  outC->_L20 = kcg_lit_int64(-1);
  outC->_L22 = kcg_lit_int64(1);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L15 = DeltaIn;
  outC->_L18 = outC->_L15 >= outC->_L19;
  /* _L21= */
  if (outC->_L18) {
    outC->_L21 = outC->_L22;
  }
  else {
    outC->_L21 = outC->_L20;
  }
  outC->_L24 = /* _L24= */(kcg_float64) outC->_L21;
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L27, SectionDataIn);
  kcg_copy_TrainPosRaw_T_InfraLib(&outC->_L29, &outC->_L27.TrainPosRaw);
  outC->_L30 = outC->_L29.OffsetTotal;
  outC->_L26 = /* _L26= */(kcg_float64) outC->_L30;
  outC->_L31 = outC->_L29.TrainPos_in;
  outC->_L23 = outC->_L31 - outC->_L26;
  outC->_L25 = outC->_L23 * outC->_L24;
  outC->_L32 = outC->_L25 + outC->_L33;
  outC->TrainPosCalibrated = outC->_L32;
}

#ifndef KCG_USER_DEFINED_INIT
void TrackDiscontinuity_CalcTr_init_InfraLib(
  outC_TrackDiscontinuity_CalcTr_InfraLib *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L32 = kcg_lit_float64(0.0);
  outC->_L33 = kcg_lit_float64(0.0);
  outC->_L31 = kcg_lit_float64(0.0);
  outC->_L30 = kcg_lit_int64(0);
  outC->_L29.TrainPos_in = kcg_lit_float64(0.0);
  outC->_L29.OffsetTotal = kcg_lit_int64(0);
  outC->_L29.TrainPosCalibrated = kcg_lit_float64(0.0);
  outC->_L27.TrainPosRaw.TrainPos_in = kcg_lit_float64(0.0);
  outC->_L27.TrainPosRaw.OffsetTotal = kcg_lit_int64(0);
  outC->_L27.TrainPosRaw.TrainPosCalibrated = kcg_lit_float64(0.0);
  outC->_L27.BG_Message.Header.q_updown = kcg_lit_int64(0);
  outC->_L27.BG_Message.Header.m_version = kcg_lit_int64(0);
  outC->_L27.BG_Message.Header.q_media = kcg_lit_int64(0);
  outC->_L27.BG_Message.Header.n_pig = kcg_lit_int64(0);
  outC->_L27.BG_Message.Header.n_total = kcg_lit_int64(0);
  outC->_L27.BG_Message.Header.m_dup = kcg_lit_int64(0);
  outC->_L27.BG_Message.Header.m_mcount = kcg_lit_int64(0);
  outC->_L27.BG_Message.Header.nid_c = kcg_lit_int64(0);
  outC->_L27.BG_Message.Header.nid_bg = kcg_lit_int64(0);
  outC->_L27.BG_Message.Header.q_link = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L27.BG_Message.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L27.BG_Message.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L27.BG_Message.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L27.BG_Message.Messages.PacketHeaders[idx].startAddress =
      kcg_lit_int64(0);
    outC->_L27.BG_Message.Messages.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L27.BG_Message.Messages.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L28 = kcg_lit_int64(0);
  outC->_L23 = kcg_lit_float64(0.0);
  outC->_L24 = kcg_lit_float64(0.0);
  outC->_L25 = kcg_lit_float64(0.0);
  outC->_L26 = kcg_lit_float64(0.0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L22 = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_true;
  outC->_L15 = kcg_lit_int64(0);
  outC->TrainPosCalibrated = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrackDiscontinuity_CalcTr_reset_InfraLib(
  outC_TrackDiscontinuity_CalcTr_InfraLib *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrackDiscontinuity_CalcTr_InfraLib.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

