/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcDMI_output_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcDMI_output/ */
void CalcDMI_output_SDM_Commands_Pkg(
  /* in_sdmCmd/ */
  SDM_Commands_T_SDM_Types_Pkg *in_sdmCmd,
  /* limit_locations/ */
  SDM_Locations_T_SDM_Types_Pkg *limit_locations,
  /* trainLocations/ */
  trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  outC_CalcDMI_output_SDM_Commands_Pkg *outC)
{
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&outC->_L47, limit_locations);
  outC->_L107 = outC->_L47.Preindication_EBD_location_valid;
  outC->_L38 = cDMIUnknownSpeed_DMI_Types_Pkg;
  outC->_L61 = outC->_L47.EBD_preindication_location;
  outC->_L98 = outC->_L47.Preindication_EBD_location_valid;
  /* _L99= */
  if (outC->_L98) {
    outC->_L99 = outC->_L61;
  }
  else {
    outC->_L99 = outC->_L38;
  }
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L91, trainLocations);
  outC->_L90 = outC->_L91.maxSafeFrontEndPostion;
  outC->_L63 = outC->_L47.d_I_of_V_MRSP;
  outC->_L92 = outC->_L63 - outC->_L90;
  /* _L94= */
  if (outC->_L107) {
    outC->_L94 = outC->_L92;
  }
  else {
    outC->_L94 = outC->_L38;
  }
  outC->_L73 = TSM_DMI_Types_Pkg;
  outC->_L83 = PIM_DMI_Types_Pkg;
  outC->_L87 = outC->_L63 >= outC->_L90;
  /* _L88= */
  if (outC->_L87) {
    outC->_L88 = outC->_L83;
  }
  else {
    outC->_L88 = outC->_L73;
  }
  outC->_L82 = supDis_normal_DMI_Types_Pkg;
  outC->_L81 = supDis_intervention_DMI_Types_Pkg;
  outC->_L80 = supDis_warning_DMI_Types_Pkg;
  outC->_L79 = supDis_overspeed_DMI_Types_Pkg;
  outC->_L78 = supDis_indication_DMI_Types_Pkg;
  outC->_L77 = supDis_normal_DMI_Types_Pkg;
  kcg_copy_SDM_Commands_T_SDM_Types_Pkg(&outC->_L1, in_sdmCmd);
  outC->_L22 = outC->_L1.supervisionStatus;
  /* _L76= */
  switch (outC->_L22) {
    case Normal_Supervision_SDM_Types_Pkg :
      outC->_L76 = outC->_L77;
      break;
    case Indication_Supervision_SDM_Types_Pkg :
      outC->_L76 = outC->_L78;
      break;
    case Overspeed_Supervision_SDM_Types_Pkg :
      outC->_L76 = outC->_L79;
      break;
    case Warning_Supervision_SDM_Types_Pkg :
      outC->_L76 = outC->_L80;
      break;
    case Intervention_Supervision_SDM_Types_Pkg :
      outC->_L76 = outC->_L81;
      break;
    default :
      outC->_L76 = outC->_L82;
      break;
  }
  outC->_L75 = CSM_DMI_Types_Pkg;
  outC->_L74 = RSM_DMI_Types_Pkg;
  outC->_L72 = supervision_status_unknown_DMI_Types_Pkg;
  outC->_L21 = outC->_L1.sdmType;
  /* _L70= */
  switch (outC->_L21) {
    case CSM_SDM_Types_Pkg :
      outC->_L70 = outC->_L75;
      break;
    case RSM_SDM_Types_Pkg :
      outC->_L70 = outC->_L74;
      break;
    case TSM_SDM_Types_Pkg :
      outC->_L70 = outC->_L88;
      break;
    default :
      outC->_L70 = outC->_L72;
      break;
  }
  outC->_L44 = outC->_L1.sbiSpeed;
  outC->_L43 = outC->_L1.valid_v_sbi;
  /* _L57= */
  if (outC->_L43) {
    outC->_L57 = outC->_L44;
  }
  else {
    outC->_L57 = outC->_L38;
  }
  outC->_L35 = outC->_L1.releaseSpeed;
  outC->_L34 = outC->_L1.valid_v_release;
  /* _L56= */
  if (outC->_L34) {
    outC->_L56 = outC->_L35;
  }
  else {
    outC->_L56 = outC->_L38;
  }
  outC->_L33 = outC->_L1.permittedSpeed;
  outC->_L32 = outC->_L1.valid_v_permitted;
  /* _L55= */
  if (outC->_L32) {
    outC->_L55 = outC->_L33;
  }
  else {
    outC->_L55 = outC->_L38;
  }
  outC->_L41 = outC->_L1.mrdtSpeed;
  outC->_L40 = outC->_L1.valid_v_mrdt;
  /* _L54= */
  if (outC->_L40) {
    outC->_L54 = outC->_L41;
  }
  else {
    outC->_L54 = outC->_L38;
  }
  outC->_L46 = outC->_L1.targetDistance;
  outC->_L28 = Undefined_Supervision_SDM_Types_Pkg;
  outC->_L27 = outC->_L28 != outC->_L22;
  outC->_L20.valid = outC->_L27;
  outC->_L20.targetSpeed = outC->_L54;
  outC->_L20.permittedSpeed = outC->_L55;
  outC->_L20.releaseSpeed = outC->_L56;
  outC->_L20.locationBrakeTarget = outC->_L46;
  outC->_L20.location_brake_curve_starting_point = outC->_L99;
  outC->_L20.interventionSpeed = outC->_L57;
  outC->_L20.sup_status = outC->_L70;
  outC->_L20.supervisionDisplay = outC->_L76;
  outC->_L20.distanceIndicationPoint = outC->_L94;
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(&outC->sdmToDMI, &outC->_L20);
}

#ifndef KCG_USER_DEFINED_INIT
void CalcDMI_output_init_SDM_Commands_Pkg(
  outC_CalcDMI_output_SDM_Commands_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L107 = kcg_true;
  outC->_L99 = kcg_lit_int64(0);
  outC->_L98 = kcg_true;
  outC->_L94 = kcg_lit_int64(0);
  outC->_L92 = kcg_lit_int64(0);
  outC->_L90 = kcg_lit_int64(0);
  outC->_L91.valid = kcg_true;
  outC->_L91.timestamp = kcg_lit_int64(0);
  outC->_L91.trainPositionIsUnknown = kcg_true;
  outC->_L91.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L91.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L91.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L91.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L91.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L91.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L91.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L91.LRBG.valid = kcg_true;
  outC->_L91.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L91.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L91.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L91.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L91.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L91.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L91.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L91.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L91.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L91.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L91.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L91.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L91.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L91.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L91.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L91.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L91.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L91.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L91.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L91.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L91.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L91.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L91.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L91.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L91.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L91.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L91.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L91.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L91.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L91.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L91.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L91.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L91.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L91.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L91.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L91.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L91.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L91.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L91.LRBG.missed = kcg_true;
  outC->_L91.prvLRBG.valid = kcg_true;
  outC->_L91.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L91.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L91.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L91.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L91.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L91.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L91.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L91.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L91.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L91.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L91.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L91.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L91.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L91.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L91.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L91.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L91.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L91.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L91.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L91.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L91.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L91.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L91.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L91.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L91.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L91.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L91.prvLRBG.missed = kcg_true;
  outC->_L91.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L91.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L91.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L91.linkingIsUsedOnboard = kcg_true;
  outC->_L91.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L91.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L91.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L88 = CSM_DMI_Types_Pkg;
  outC->_L87 = kcg_true;
  outC->_L83 = CSM_DMI_Types_Pkg;
  outC->_L82 = supDis_normal_DMI_Types_Pkg;
  outC->_L81 = supDis_normal_DMI_Types_Pkg;
  outC->_L80 = supDis_normal_DMI_Types_Pkg;
  outC->_L79 = supDis_normal_DMI_Types_Pkg;
  outC->_L78 = supDis_normal_DMI_Types_Pkg;
  outC->_L77 = supDis_normal_DMI_Types_Pkg;
  outC->_L76 = supDis_normal_DMI_Types_Pkg;
  outC->_L75 = CSM_DMI_Types_Pkg;
  outC->_L74 = CSM_DMI_Types_Pkg;
  outC->_L73 = CSM_DMI_Types_Pkg;
  outC->_L72 = CSM_DMI_Types_Pkg;
  outC->_L70 = CSM_DMI_Types_Pkg;
  outC->_L63 = kcg_lit_int64(0);
  outC->_L61 = kcg_lit_int64(0);
  outC->_L57 = kcg_lit_int64(0);
  outC->_L56 = kcg_lit_int64(0);
  outC->_L55 = kcg_lit_int64(0);
  outC->_L54 = kcg_lit_int64(0);
  outC->_L47.SBD_preindication_location = kcg_lit_int64(0);
  outC->_L47.EBD_preindication_location = kcg_lit_int64(0);
  outC->_L47.EBD_RSM_start_location = kcg_lit_int64(0);
  outC->_L47.SBD_RSM_start_location = kcg_lit_int64(0);
  outC->_L47.d_I_of_V_est = kcg_lit_int64(0);
  outC->_L47.d_I_of_V_MRSP = kcg_lit_int64(0);
  outC->_L47.d_P_of_V_est = kcg_lit_int64(0);
  outC->_L47.d_W_of_V_est = kcg_lit_int64(0);
  outC->_L47.d_FLOI_of_V_est = kcg_lit_int64(0);
  outC->_L47.d_EBI_of_V_est = kcg_lit_int64(0);
  outC->_L47.FLOI_of_V_est = kcg_lit_int64(0);
  outC->_L47.SBI1_of_V_est = kcg_lit_int64(0);
  outC->_L47.SBI2_of_V_est = kcg_lit_int64(0);
  outC->_L47.d_target = kcg_lit_int64(0);
  outC->_L47.d_eoa = kcg_lit_int64(0);
  outC->_L47.d_svl = kcg_lit_int64(0);
  outC->_L47.Preindication_EBD_location_valid = kcg_true;
  outC->_L47.Preindication_SBD_location_valid = kcg_true;
  outC->_L47.RSM_start_location_EBD_valid = kcg_true;
  outC->_L47.RSM_start_location_SBD_valid = kcg_true;
  outC->_L46 = kcg_lit_int64(0);
  outC->_L44 = kcg_lit_int64(0);
  outC->_L43 = kcg_true;
  outC->_L41 = kcg_lit_int64(0);
  outC->_L40 = kcg_true;
  outC->_L38 = kcg_lit_int64(0);
  outC->_L35 = kcg_lit_int64(0);
  outC->_L34 = kcg_true;
  outC->_L33 = kcg_lit_int64(0);
  outC->_L32 = kcg_true;
  outC->_L28 = Normal_Supervision_SDM_Types_Pkg;
  outC->_L27 = kcg_true;
  outC->_L22 = Normal_Supervision_SDM_Types_Pkg;
  outC->_L21 = CSM_SDM_Types_Pkg;
  outC->_L20.valid = kcg_true;
  outC->_L20.targetSpeed = kcg_lit_int64(0);
  outC->_L20.permittedSpeed = kcg_lit_int64(0);
  outC->_L20.releaseSpeed = kcg_lit_int64(0);
  outC->_L20.locationBrakeTarget = kcg_lit_int64(0);
  outC->_L20.location_brake_curve_starting_point = kcg_lit_int64(0);
  outC->_L20.interventionSpeed = kcg_lit_int64(0);
  outC->_L20.sup_status = CSM_DMI_Types_Pkg;
  outC->_L20.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->_L20.distanceIndicationPoint = kcg_lit_int64(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.estimatedSpeed = kcg_lit_int64(0);
  outC->_L1.valid_v_est = kcg_true;
  outC->_L1.permittedSpeed = kcg_lit_int64(0);
  outC->_L1.valid_v_permitted = kcg_true;
  outC->_L1.releaseSpeed = kcg_lit_int64(0);
  outC->_L1.valid_v_release = kcg_true;
  outC->_L1.mrdtSpeed = kcg_lit_int64(0);
  outC->_L1.valid_v_mrdt = kcg_true;
  outC->_L1.sbiSpeed = kcg_lit_int64(0);
  outC->_L1.valid_v_sbi = kcg_true;
  outC->_L1.targetDistance = kcg_lit_int64(0);
  outC->_L1.valid_targetDistance = kcg_true;
  outC->_L1.supervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->_L1.sdmType = CSM_SDM_Types_Pkg;
  outC->_L1.revokedSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->_L1.triggeredSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->_L1.revokedSB = kcg_true;
  outC->_L1.triggeredSB = kcg_true;
  outC->_L1.revokedEB = kcg_true;
  outC->_L1.triggeredEB = kcg_true;
  outC->_L1.revokedTCO = kcg_true;
  outC->_L1.triggeredTCO = kcg_true;
  outC->_L1.ebCmd = kcg_true;
  outC->sdmToDMI.valid = kcg_true;
  outC->sdmToDMI.targetSpeed = kcg_lit_int64(0);
  outC->sdmToDMI.permittedSpeed = kcg_lit_int64(0);
  outC->sdmToDMI.releaseSpeed = kcg_lit_int64(0);
  outC->sdmToDMI.locationBrakeTarget = kcg_lit_int64(0);
  outC->sdmToDMI.location_brake_curve_starting_point = kcg_lit_int64(0);
  outC->sdmToDMI.interventionSpeed = kcg_lit_int64(0);
  outC->sdmToDMI.sup_status = CSM_DMI_Types_Pkg;
  outC->sdmToDMI.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->sdmToDMI.distanceIndicationPoint = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalcDMI_output_reset_SDM_Commands_Pkg(
  outC_CalcDMI_output_SDM_Commands_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcDMI_output_SDM_Commands_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

