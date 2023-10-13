/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckValidityPacket58_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::CheckValidityPacket58/ */
void CheckValidityPacket58_ProvidePositionReport_Pkg(
  /* bgCommonHeader/ */
  BG_Header_T_BG_Types_Pkg *bgCommonHeader,
  /* reportedBGs/ */
  ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  outC_CheckValidityPacket58_ProvidePositionReport_Pkg *outC)
{
  /* reportedBGs/ */
  static ReportedBGList_T_ProvidePositionReport_Pkg last_reportedBGs;

  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &last_reportedBGs,
    &outC->mem_reportedBGs);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->mem_reportedBGs,
    reportedBGs);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L49, bgCommonHeader);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L31, &outC->_L49.bgPosition);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L50, &outC->_L31.odo);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(&outC->_L5, reportedBGs);
  outC->_L32 = outC->_L49.nid_bg;
  /* _L35=(ProvidePositionReport_Pkg::BG_hasBeenReported#1)/ */
  BG_hasBeenReported_ProvidePositionReport_Pkg(
    &outC->_L5,
    outC->_L32,
    &outC->_L50,
    &outC->Context_BG_hasBeenReported_1);
  outC->_L35 = outC->Context_BG_hasBeenReported_1.found;
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->_L33,
    &outC->Context_BG_hasBeenReported_1.updatedBGs);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->updatedBGs,
    &outC->_L33);
  outC->found = outC->_L35;
}

#ifndef KCG_USER_DEFINED_INIT
void CheckValidityPacket58_init_ProvidePositionReport_Pkg(
  outC_CheckValidityPacket58_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L50.o_nominal = kcg_lit_int64(0);
  outC->_L50.o_min = kcg_lit_int64(0);
  outC->_L50.o_max = kcg_lit_int64(0);
  outC->_L49.valid = kcg_true;
  outC->_L49.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L49.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L49.q_media = Q_MEDIA_Balise;
  outC->_L49.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L49.m_mcount = kcg_lit_int64(0);
  outC->_L49.nid_c = kcg_lit_int64(0);
  outC->_L49.nid_bg = kcg_lit_int64(0);
  outC->_L49.q_link = Q_LINK_Unlinked;
  outC->_L49.bgPosition.valid = kcg_true;
  outC->_L49.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L49.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L49.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L49.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L49.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L49.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L49.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L49.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L49.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L49.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L49.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L49.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int64(0);
  outC->_L49.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(0);
  outC->_L49.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(0);
  outC->_L49.q_nvlocacc = kcg_lit_int64(0);
  outC->_L49.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L49.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L49.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L35 = kcg_true;
  for (idx = 0; idx < 8; idx++) {
    outC->_L33[idx].valid = kcg_true;
    outC->_L33[idx].nidBG = kcg_lit_int64(0);
    outC->_L33[idx].location.nominal = kcg_lit_int64(0);
    outC->_L33[idx].location.d_min = kcg_lit_int64(0);
    outC->_L33[idx].location.d_max = kcg_lit_int64(0);
  }
  outC->_L32 = kcg_lit_int64(0);
  outC->_L31.valid = kcg_true;
  outC->_L31.timestamp = kcg_lit_int64(0);
  outC->_L31.odo.o_nominal = kcg_lit_int64(0);
  outC->_L31.odo.o_min = kcg_lit_int64(0);
  outC->_L31.odo.o_max = kcg_lit_int64(0);
  outC->_L31.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L31.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L31.speed.v_lower = kcg_lit_int64(0);
  outC->_L31.speed.v_upper = kcg_lit_int64(0);
  outC->_L31.acceleration = kcg_lit_int64(0);
  outC->_L31.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L31.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  for (idx1 = 0; idx1 < 8; idx1++) {
    outC->_L5[idx1].valid = kcg_true;
    outC->_L5[idx1].nidBG = kcg_lit_int64(0);
    outC->_L5[idx1].location.nominal = kcg_lit_int64(0);
    outC->_L5[idx1].location.d_min = kcg_lit_int64(0);
    outC->_L5[idx1].location.d_max = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 8; idx2++) {
    outC->updatedBGs[idx2].valid = kcg_true;
    outC->updatedBGs[idx2].nidBG = kcg_lit_int64(0);
    outC->updatedBGs[idx2].location.nominal = kcg_lit_int64(0);
    outC->updatedBGs[idx2].location.d_min = kcg_lit_int64(0);
    outC->updatedBGs[idx2].location.d_max = kcg_lit_int64(0);
  }
  outC->found = kcg_true;
  /* _L35=(ProvidePositionReport_Pkg::BG_hasBeenReported#1)/ */
  BG_hasBeenReported_init_ProvidePositionReport_Pkg(
    &outC->Context_BG_hasBeenReported_1);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->mem_reportedBGs,
    (ReportedBGList_T_ProvidePositionReport_Pkg *)
      &cReportedBGList_ProvidePositionReport_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckValidityPacket58_reset_ProvidePositionReport_Pkg(
  outC_CheckValidityPacket58_ProvidePositionReport_Pkg *outC)
{
  /* _L35=(ProvidePositionReport_Pkg::BG_hasBeenReported#1)/ */
  BG_hasBeenReported_reset_ProvidePositionReport_Pkg(
    &outC->Context_BG_hasBeenReported_1);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->mem_reportedBGs,
    (ReportedBGList_T_ProvidePositionReport_Pkg *)
      &cReportedBGList_ProvidePositionReport_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_CheckValidityPacket58_ProvidePositionReport_Pkg(
  SV_CheckValidityPacket58_ProvidePositionReport_Pkg *SV,
  outC_CheckValidityPacket58_ProvidePositionReport_Pkg *outC)
{
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &SV->Context_mem_reportedBGs,
    &outC->mem_reportedBGs);
}

void kcg_load_SV_CheckValidityPacket58_ProvidePositionReport_Pkg(
  outC_CheckValidityPacket58_ProvidePositionReport_Pkg *outC,
  SV_CheckValidityPacket58_ProvidePositionReport_Pkg *SV)
{
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->mem_reportedBGs,
    &SV->Context_mem_reportedBGs);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckValidityPacket58_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

