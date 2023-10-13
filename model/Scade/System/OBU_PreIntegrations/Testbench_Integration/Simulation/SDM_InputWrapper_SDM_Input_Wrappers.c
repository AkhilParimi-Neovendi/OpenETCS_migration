/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDM_InputWrapper_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::SDM_InputWrapper/ */
void SDM_InputWrapper_SDM_Input_Wrappers(
  /* TrainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* dataFromTrackAtlas/ */
  DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTrackAtlas,
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC)
{
  static kcg_size idx;
  static MA_section_real_T_TargetManagement_types tmp;
  static kcg_size idx1;
  static MA_section_real_T_TargetManagement_types op_call;

  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->_L268,
    dataFromTrackAtlas);
  outC->_L262 = outC->_L268.freshMA;
  outC->every = outC->_L262;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L263, &outC->_L268.MA);
  if (outC->every) {
    /* _L255=(SDM_Input_Wrappers::ConvertMA#2)/ */
    ConvertMA_SDM_Input_Wrappers(&outC->_L263, &outC->Context_ConvertMA_2);
    kcg_copy_MA_section_real_T_TargetManagement_types(
      &op_call,
      &outC->Context_ConvertMA_2.Ma_out);
  }
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L280, trainProps);
  outC->_L279 = outC->_L280.d_baliseAntenna_2_frontend.nominal;
  outC->_L281 = kcg_lit_int64(0);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->_L284,
    dataFromTrackAtlas);
  outC->_L282 = outC->_L284.MA.Level;
  /* _L271= */
  switch (outC->_L282) {
    case MA_L1_TrackAtlasTypes :
      outC->_L271 = outC->_L279;
      break;
    default :
      outC->_L271 = outC->_L281;
      break;
  }
  outC->offsetAntennaL1 = outC->_L271;
  /* _L289=(SDM_Input_Wrappers::defaultMA#1)/ */
  defaultMA_SDM_Input_Wrappers(&outC->Context_defaultMA_1);
  kcg_copy_MA_section_real_T_TargetManagement_types(
    &outC->_L289,
    &outC->Context_defaultMA_1.Ma_out);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L265,
    &outC->_L268.GradientProfile);
  /* _L269= */
  for (idx = 0; idx < 50; idx++) {
    /* _L269=(SDM_Input_Wrappers::ConvertGradient_section#1)/ */
    ConvertGradient_section_SDM_Input_Wrappers(
      &outC->_L265[idx],
      &outC->Context_ConvertGradient_section_1[idx]);
    kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
      &outC->_L269[idx],
      &outC->Context_ConvertGradient_section_1[idx].Gradient_section_int);
  }
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->gp_out,
    &outC->_L269);
  outC->_L264 = outC->_L268.freshGradientProfile;
  outC->gp_update_out = outC->_L264;
  outC->_L266 = outC->_L268.freshMRSP;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L267, &outC->_L268.MRSP);
  if (outC->every) {
    kcg_copy_MA_section_real_T_TargetManagement_types(&outC->_L255, &op_call);
  }
  else {
    /* _L255= */
    if (outC->init) {
      kcg_copy_MA_section_real_T_TargetManagement_types(&tmp, &outC->_L289);
    }
    else {
      kcg_copy_MA_section_real_T_TargetManagement_types(&tmp, &outC->_L255);
    }
    kcg_copy_MA_section_real_T_TargetManagement_types(&outC->_L255, &tmp);
  }
  outC->_L249 = kcg_lit_int64(2);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L237, TrainPosition);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L238,
    &outC->_L237.LRBG);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L239, &outC->_L238.location);
  outC->_L246 = outC->_L239.d_min;
  outC->_L245 = outC->_L239.d_max;
  outC->_L247 = outC->_L245 - outC->_L246;
  outC->_L248 = outC->_L247 / outC->_L249;
  /* _L250=(SDM_Types_Pkg::TransformL_intToL_real#16)/ */
  TransformL_intToL_real_SDM_Types_Pkg(
    outC->_L248,
    &outC->Context_TransformL_intToL_real_16);
  outC->_L250 = outC->Context_TransformL_intToL_real_16.loc_real;
  outC->_L240 = outC->_L239.nominal;
  /* _L241=(SDM_Types_Pkg::TransformL_intToL_real#12)/ */
  TransformL_intToL_real_SDM_Types_Pkg(
    outC->_L240,
    &outC->Context_TransformL_intToL_real_12);
  outC->_L241 = outC->Context_TransformL_intToL_real_12.loc_real;
  outC->mrsp_update_out = outC->_L266;
  outC->ma_update_out = outC->_L262;
  /* _L167= */
  for (idx1 = 0; idx1 < 110; idx1++) {
    /* _L167=(SDM_Input_Wrappers::ConvertMRSP_section)/ */
    ConvertMRSP_section_SDM_Input_Wrappers(
      &outC->_L267[idx1],
      &outC->Context_ConvertMRSP_section[idx1]);
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(
      &outC->_L167[idx1],
      &outC->Context_ConvertMRSP_section[idx1].MRSP_section_int);
  }
  kcg_copy_MA_section_real_T_TargetManagement_types(&outC->ma_out, &outC->_L255);
  kcg_copy_MRSP_internal_T_TargetManagement_types(&outC->mrsp_out, &outC->_L167);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L5, TrainPosition);
  outC->_L94 = outC->_L5.valid;
  outC->_L74 = outC->_L5.trainPositionIsUnknown;
  outC->_L77 = !outC->_L74;
  outC->_L95 = outC->_L77 & outC->_L94;
  outC->_L106 = outC->_L5.estimatedFrontEndPosition;
  /* _L105=(SDM_Types_Pkg::TransformL_intToL_real#9)/ */
  TransformL_intToL_real_SDM_Types_Pkg(
    outC->_L106,
    &outC->Context_TransformL_intToL_real_9);
  outC->_L105 = outC->Context_TransformL_intToL_real_9.loc_real;
  outC->_L75 = outC->_L5.minSafeFrontEndPosition;
  /* _L96=(SDM_Types_Pkg::TransformL_intToL_real#4)/ */
  TransformL_intToL_real_SDM_Types_Pkg(
    outC->_L75,
    &outC->Context_TransformL_intToL_real_4);
  outC->_L96 = outC->Context_TransformL_intToL_real_4.loc_real;
  outC->_L109 = outC->_L5.maxSafeFrontEndPostion;
  /* _L110=(SDM_Types_Pkg::TransformL_intToL_real#11)/ */
  TransformL_intToL_real_SDM_Types_Pkg(
    outC->_L109,
    &outC->Context_TransformL_intToL_real_11);
  outC->_L110 = outC->Context_TransformL_intToL_real_11.loc_real;
  outC->_L151.trainPositionIsValid = outC->_L95;
  outC->_L151.d_est_frontendPos = outC->_L105;
  outC->_L151.d_minSafeFrontEndPos = outC->_L96;
  outC->_L151.d_maxSafeFrontEndPos = outC->_L110;
  outC->_L151.d_LRBG = outC->_L241;
  outC->_L151.d_accLRBG = outC->_L250;
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(
    &outC->trainLocations,
    &outC->_L151);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void SDM_InputWrapper_init_SDM_Input_Wrappers(
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC)
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
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;

  outC->_L289.valid = kcg_true;
  outC->_L289.v_main = kcg_lit_float64(0.0);
  outC->_L289.EOA.Location = kcg_lit_float64(0.0);
  outC->_L289.EOA.TargetSpeed = kcg_lit_float64(0.0);
  outC->_L289.DP_valid = kcg_true;
  outC->_L289.DangerPoint = kcg_lit_float64(0.0);
  outC->_L289.OL_valid = kcg_true;
  outC->_L289.Overlap = kcg_lit_float64(0.0);
  outC->_L289.q_calculate_release = kcg_true;
  outC->_L289.ReleaseSpeed = kcg_lit_float64(0.0);
  outC->_L289.level = MA_L1_TrackAtlasTypes;
  outC->_L284.freshMA = kcg_true;
  outC->_L284.MA.valid = kcg_true;
  outC->_L284.MA.Level = MA_L1_TrackAtlasTypes;
  outC->_L284.MA.q_dir = Q_DIR_Reverse;
  outC->_L284.MA.v_main = kcg_lit_int64(0);
  outC->_L284.MA.v_loa = kcg_lit_int64(0);
  outC->_L284.MA.t_loa_unlimited = kcg_true;
  outC->_L284.MA.t_loa = kcg_lit_int64(0);
  outC->_L284.MA.n_iter = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L284.MA.sections[idx2].valid = kcg_true;
    outC->_L284.MA.sections[idx2].q_endsection = kcg_true;
    outC->_L284.MA.sections[idx2].l_section = kcg_lit_int64(0);
    outC->_L284.MA.sections[idx2].q_sectiontimer = kcg_true;
    outC->_L284.MA.sections[idx2].t_sectiontimer = kcg_lit_int64(0);
    outC->_L284.MA.sections[idx2].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L284.MA.q_dangerpoint = kcg_true;
  outC->_L284.MA.dangerpoint.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L284.MA.dangerpoint.v_release = kcg_lit_int64(0);
  outC->_L284.MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L284.MA.q_overlap = kcg_true;
  outC->_L284.MA.overlap.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L284.MA.overlap.v_release = kcg_lit_int64(0);
  outC->_L284.MA.overlap.calc_v_release_onboard = kcg_true;
  outC->_L284.MA.q_endtimer = kcg_true;
  outC->_L284.MA.endtimer_t.t_endtimer = kcg_lit_int64(0);
  outC->_L284.MA.endtimer_t.d_endtimerstoploc = kcg_lit_int64(0);
  outC->_L284.freshGradientProfile = kcg_true;
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L284.GradientProfile[idx3].valid = kcg_true;
    outC->_L284.GradientProfile[idx3].Loc_Absolute = kcg_lit_int64(0);
    outC->_L284.GradientProfile[idx3].Loc_LRBG = kcg_lit_int64(0);
    outC->_L284.GradientProfile[idx3].Gradient = kcg_lit_int64(0);
    outC->_L284.GradientProfile[idx3].L_Gradient = kcg_lit_int64(0);
  }
  outC->_L284.freshMRSP = kcg_true;
  for (idx4 = 0; idx4 < 110; idx4++) {
    outC->_L284.MRSP[idx4].valid = kcg_true;
    outC->_L284.MRSP[idx4].Loc_Abs = kcg_lit_int64(0);
    outC->_L284.MRSP[idx4].Loc_LRBG = kcg_lit_int64(0);
    outC->_L284.MRSP[idx4].MRS = kcg_lit_int64(0);
  }
  outC->_L282 = MA_L1_TrackAtlasTypes;
  outC->_L281 = kcg_lit_int64(0);
  outC->_L279 = kcg_lit_int64(0);
  outC->_L280.nid_engine = kcg_lit_int64(0);
  outC->_L280.nid_operational = kcg_lit_int64(0);
  outC->_L280.l_train = kcg_lit_int64(0);
  outC->_L280.d_baliseAntenna_2_frontend.nominal = kcg_lit_int64(0);
  outC->_L280.d_baliseAntenna_2_frontend.d_min = kcg_lit_int64(0);
  outC->_L280.d_baliseAntenna_2_frontend.d_max = kcg_lit_int64(0);
  outC->_L280.d_frontend_2_rearend.nominal = kcg_lit_int64(0);
  outC->_L280.d_frontend_2_rearend.d_min = kcg_lit_int64(0);
  outC->_L280.d_frontend_2_rearend.d_max = kcg_lit_int64(0);
  outC->_L280.locationAccuracy_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L280.locationAccuracy_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L280.locationAccuracy_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L280.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L280.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L280.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L271 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 50; idx5++) {
    outC->_L269[idx5].location = kcg_lit_float64(0.0);
    outC->_L269[idx5].gradient = kcg_lit_float64(0.0);
    outC->_L269[idx5].valid = kcg_true;
  }
  outC->_L268.freshMA = kcg_true;
  outC->_L268.MA.valid = kcg_true;
  outC->_L268.MA.Level = MA_L1_TrackAtlasTypes;
  outC->_L268.MA.q_dir = Q_DIR_Reverse;
  outC->_L268.MA.v_main = kcg_lit_int64(0);
  outC->_L268.MA.v_loa = kcg_lit_int64(0);
  outC->_L268.MA.t_loa_unlimited = kcg_true;
  outC->_L268.MA.t_loa = kcg_lit_int64(0);
  outC->_L268.MA.n_iter = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 10; idx6++) {
    outC->_L268.MA.sections[idx6].valid = kcg_true;
    outC->_L268.MA.sections[idx6].q_endsection = kcg_true;
    outC->_L268.MA.sections[idx6].l_section = kcg_lit_int64(0);
    outC->_L268.MA.sections[idx6].q_sectiontimer = kcg_true;
    outC->_L268.MA.sections[idx6].t_sectiontimer = kcg_lit_int64(0);
    outC->_L268.MA.sections[idx6].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L268.MA.q_dangerpoint = kcg_true;
  outC->_L268.MA.dangerpoint.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L268.MA.dangerpoint.v_release = kcg_lit_int64(0);
  outC->_L268.MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L268.MA.q_overlap = kcg_true;
  outC->_L268.MA.overlap.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L268.MA.overlap.v_release = kcg_lit_int64(0);
  outC->_L268.MA.overlap.calc_v_release_onboard = kcg_true;
  outC->_L268.MA.q_endtimer = kcg_true;
  outC->_L268.MA.endtimer_t.t_endtimer = kcg_lit_int64(0);
  outC->_L268.MA.endtimer_t.d_endtimerstoploc = kcg_lit_int64(0);
  outC->_L268.freshGradientProfile = kcg_true;
  for (idx7 = 0; idx7 < 50; idx7++) {
    outC->_L268.GradientProfile[idx7].valid = kcg_true;
    outC->_L268.GradientProfile[idx7].Loc_Absolute = kcg_lit_int64(0);
    outC->_L268.GradientProfile[idx7].Loc_LRBG = kcg_lit_int64(0);
    outC->_L268.GradientProfile[idx7].Gradient = kcg_lit_int64(0);
    outC->_L268.GradientProfile[idx7].L_Gradient = kcg_lit_int64(0);
  }
  outC->_L268.freshMRSP = kcg_true;
  for (idx8 = 0; idx8 < 110; idx8++) {
    outC->_L268.MRSP[idx8].valid = kcg_true;
    outC->_L268.MRSP[idx8].Loc_Abs = kcg_lit_int64(0);
    outC->_L268.MRSP[idx8].Loc_LRBG = kcg_lit_int64(0);
    outC->_L268.MRSP[idx8].MRS = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 110; idx9++) {
    outC->_L267[idx9].valid = kcg_true;
    outC->_L267[idx9].Loc_Abs = kcg_lit_int64(0);
    outC->_L267[idx9].Loc_LRBG = kcg_lit_int64(0);
    outC->_L267[idx9].MRS = kcg_lit_int64(0);
  }
  outC->_L266 = kcg_true;
  for (idx10 = 0; idx10 < 50; idx10++) {
    outC->_L265[idx10].valid = kcg_true;
    outC->_L265[idx10].Loc_Absolute = kcg_lit_int64(0);
    outC->_L265[idx10].Loc_LRBG = kcg_lit_int64(0);
    outC->_L265[idx10].Gradient = kcg_lit_int64(0);
    outC->_L265[idx10].L_Gradient = kcg_lit_int64(0);
  }
  outC->_L264 = kcg_true;
  outC->_L263.valid = kcg_true;
  outC->_L263.Level = MA_L1_TrackAtlasTypes;
  outC->_L263.q_dir = Q_DIR_Reverse;
  outC->_L263.v_main = kcg_lit_int64(0);
  outC->_L263.v_loa = kcg_lit_int64(0);
  outC->_L263.t_loa_unlimited = kcg_true;
  outC->_L263.t_loa = kcg_lit_int64(0);
  outC->_L263.n_iter = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 10; idx11++) {
    outC->_L263.sections[idx11].valid = kcg_true;
    outC->_L263.sections[idx11].q_endsection = kcg_true;
    outC->_L263.sections[idx11].l_section = kcg_lit_int64(0);
    outC->_L263.sections[idx11].q_sectiontimer = kcg_true;
    outC->_L263.sections[idx11].t_sectiontimer = kcg_lit_int64(0);
    outC->_L263.sections[idx11].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L263.q_dangerpoint = kcg_true;
  outC->_L263.dangerpoint.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L263.dangerpoint.v_release = kcg_lit_int64(0);
  outC->_L263.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L263.q_overlap = kcg_true;
  outC->_L263.overlap.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L263.overlap.v_release = kcg_lit_int64(0);
  outC->_L263.overlap.calc_v_release_onboard = kcg_true;
  outC->_L263.q_endtimer = kcg_true;
  outC->_L263.endtimer_t.t_endtimer = kcg_lit_int64(0);
  outC->_L263.endtimer_t.d_endtimerstoploc = kcg_lit_int64(0);
  outC->_L262 = kcg_true;
  outC->_L250 = kcg_lit_float64(0.0);
  outC->_L249 = kcg_lit_int64(0);
  outC->_L248 = kcg_lit_int64(0);
  outC->_L247 = kcg_lit_int64(0);
  outC->_L246 = kcg_lit_int64(0);
  outC->_L245 = kcg_lit_int64(0);
  outC->_L241 = kcg_lit_float64(0.0);
  outC->_L240 = kcg_lit_int64(0);
  outC->_L239.nominal = kcg_lit_int64(0);
  outC->_L239.d_min = kcg_lit_int64(0);
  outC->_L239.d_max = kcg_lit_int64(0);
  outC->_L238.valid = kcg_true;
  outC->_L238.nid_c = kcg_lit_int64(0);
  outC->_L238.nid_bg = kcg_lit_int64(0);
  outC->_L238.q_link = Q_LINK_Unlinked;
  outC->_L238.location.nominal = kcg_lit_int64(0);
  outC->_L238.location.d_min = kcg_lit_int64(0);
  outC->_L238.location.d_max = kcg_lit_int64(0);
  outC->_L238.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L238.infoFromLinking.valid = kcg_true;
  outC->_L238.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L238.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L238.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L238.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L238.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L238.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L238.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L238.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L238.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L238.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L238.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L238.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L238.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L238.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L238.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L238.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L238.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L238.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L238.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L238.infoFromPassing.valid = kcg_true;
  outC->_L238.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L238.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L238.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L238.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L238.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L238.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L238.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L238.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L238.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L238.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L238.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L238.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L238.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L238.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L238.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L238.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L238.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L238.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L238.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L238.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L238.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L238.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L238.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L238.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L238.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L238.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L238.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L238.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx12 = 0; idx12 < 33; idx12++) {
    outC->_L238.infoFromPassing.linkedBGs[idx12].valid = kcg_true;
    outC->_L238.infoFromPassing.linkedBGs[idx12].nid_LRBG = kcg_lit_int64(0);
    outC->_L238.infoFromPassing.linkedBGs[idx12].q_dir = Q_DIR_Reverse;
    outC->_L238.infoFromPassing.linkedBGs[idx12].q_scale = Q_SCALE_10_cm_scale;
    outC->_L238.infoFromPassing.linkedBGs[idx12].d_link = kcg_lit_int64(0);
    outC->_L238.infoFromPassing.linkedBGs[idx12].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L238.infoFromPassing.linkedBGs[idx12].nid_c = kcg_lit_int64(0);
    outC->_L238.infoFromPassing.linkedBGs[idx12].nid_bg = kcg_lit_int64(0);
    outC->_L238.infoFromPassing.linkedBGs[idx12].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L238.infoFromPassing.linkedBGs[idx12].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L238.infoFromPassing.linkedBGs[idx12].q_locacc = kcg_lit_int64(0);
  }
  outC->_L238.missed = kcg_true;
  outC->_L237.valid = kcg_true;
  outC->_L237.timestamp = kcg_lit_int64(0);
  outC->_L237.trainPositionIsUnknown = kcg_true;
  outC->_L237.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L237.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L237.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L237.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L237.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L237.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L237.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L237.LRBG.valid = kcg_true;
  outC->_L237.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L237.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L237.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L237.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L237.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L237.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L237.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L237.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L237.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L237.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L237.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L237.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L237.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L237.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L237.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L237.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L237.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L237.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L237.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L237.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L237.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L237.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L237.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L237.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L237.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L237.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L237.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx13 = 0; idx13 < 33; idx13++) {
    outC->_L237.LRBG.infoFromPassing.linkedBGs[idx13].valid = kcg_true;
    outC->_L237.LRBG.infoFromPassing.linkedBGs[idx13].nid_LRBG = kcg_lit_int64(0);
    outC->_L237.LRBG.infoFromPassing.linkedBGs[idx13].q_dir = Q_DIR_Reverse;
    outC->_L237.LRBG.infoFromPassing.linkedBGs[idx13].q_scale = Q_SCALE_10_cm_scale;
    outC->_L237.LRBG.infoFromPassing.linkedBGs[idx13].d_link = kcg_lit_int64(0);
    outC->_L237.LRBG.infoFromPassing.linkedBGs[idx13].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L237.LRBG.infoFromPassing.linkedBGs[idx13].nid_c = kcg_lit_int64(0);
    outC->_L237.LRBG.infoFromPassing.linkedBGs[idx13].nid_bg = kcg_lit_int64(0);
    outC->_L237.LRBG.infoFromPassing.linkedBGs[idx13].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L237.LRBG.infoFromPassing.linkedBGs[idx13].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L237.LRBG.infoFromPassing.linkedBGs[idx13].q_locacc = kcg_lit_int64(0);
  }
  outC->_L237.LRBG.missed = kcg_true;
  outC->_L237.prvLRBG.valid = kcg_true;
  outC->_L237.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L237.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L237.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L237.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L237.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L237.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L237.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L237.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L237.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L237.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L237.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L237.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L237.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L237.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L237.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx14 = 0; idx14 < 33; idx14++) {
    outC->_L237.prvLRBG.infoFromPassing.linkedBGs[idx14].valid = kcg_true;
    outC->_L237.prvLRBG.infoFromPassing.linkedBGs[idx14].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L237.prvLRBG.infoFromPassing.linkedBGs[idx14].q_dir = Q_DIR_Reverse;
    outC->_L237.prvLRBG.infoFromPassing.linkedBGs[idx14].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L237.prvLRBG.infoFromPassing.linkedBGs[idx14].d_link = kcg_lit_int64(0);
    outC->_L237.prvLRBG.infoFromPassing.linkedBGs[idx14].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L237.prvLRBG.infoFromPassing.linkedBGs[idx14].nid_c = kcg_lit_int64(0);
    outC->_L237.prvLRBG.infoFromPassing.linkedBGs[idx14].nid_bg = kcg_lit_int64(0);
    outC->_L237.prvLRBG.infoFromPassing.linkedBGs[idx14].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L237.prvLRBG.infoFromPassing.linkedBGs[idx14].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L237.prvLRBG.infoFromPassing.linkedBGs[idx14].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L237.prvLRBG.missed = kcg_true;
  outC->_L237.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L237.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L237.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L237.linkingIsUsedOnboard = kcg_true;
  outC->_L237.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L237.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L237.maxSafeRearEndPosition = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 110; idx15++) {
    outC->_L167[idx15].Loc_Abs = kcg_lit_float64(0.0);
    outC->_L167[idx15].MRS = kcg_lit_float64(0.0);
    outC->_L167[idx15].valid = kcg_true;
  }
  outC->_L151.trainPositionIsValid = kcg_true;
  outC->_L151.d_est_frontendPos = kcg_lit_float64(0.0);
  outC->_L151.d_minSafeFrontEndPos = kcg_lit_float64(0.0);
  outC->_L151.d_maxSafeFrontEndPos = kcg_lit_float64(0.0);
  outC->_L151.d_LRBG = kcg_lit_float64(0.0);
  outC->_L151.d_accLRBG = kcg_lit_float64(0.0);
  outC->_L109 = kcg_lit_int64(0);
  outC->_L110 = kcg_lit_float64(0.0);
  outC->_L105 = kcg_lit_float64(0.0);
  outC->_L106 = kcg_lit_int64(0);
  outC->_L96 = kcg_lit_float64(0.0);
  outC->_L95 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L77 = kcg_true;
  outC->_L75 = kcg_lit_int64(0);
  outC->_L74 = kcg_true;
  outC->_L5.valid = kcg_true;
  outC->_L5.timestamp = kcg_lit_int64(0);
  outC->_L5.trainPositionIsUnknown = kcg_true;
  outC->_L5.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L5.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L5.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L5.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L5.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L5.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L5.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L5.LRBG.valid = kcg_true;
  outC->_L5.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L5.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L5.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L5.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L5.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L5.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L5.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L5.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L5.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(
      0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(
      0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(
      0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L5.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx16 = 0; idx16 < 33; idx16++) {
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx16].valid = kcg_true;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx16].nid_LRBG = kcg_lit_int64(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx16].q_dir = Q_DIR_Reverse;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx16].q_scale = Q_SCALE_10_cm_scale;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx16].d_link = kcg_lit_int64(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx16].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx16].nid_c = kcg_lit_int64(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx16].nid_bg = kcg_lit_int64(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx16].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx16].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx16].q_locacc = kcg_lit_int64(0);
  }
  outC->_L5.LRBG.missed = kcg_true;
  outC->_L5.prvLRBG.valid = kcg_true;
  outC->_L5.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L5.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L5.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L5.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L5.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L5.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L5.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx17 = 0; idx17 < 33; idx17++) {
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx17].valid = kcg_true;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx17].nid_LRBG = kcg_lit_int64(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx17].q_dir = Q_DIR_Reverse;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx17].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx17].d_link = kcg_lit_int64(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx17].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx17].nid_c = kcg_lit_int64(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx17].nid_bg = kcg_lit_int64(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx17].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx17].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx17].q_locacc = kcg_lit_int64(0);
  }
  outC->_L5.prvLRBG.missed = kcg_true;
  outC->_L5.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L5.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L5.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L5.linkingIsUsedOnboard = kcg_true;
  outC->_L5.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L5.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L5.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->every = kcg_true;
  outC->_L255.valid = kcg_true;
  outC->_L255.v_main = kcg_lit_float64(0.0);
  outC->_L255.EOA.Location = kcg_lit_float64(0.0);
  outC->_L255.EOA.TargetSpeed = kcg_lit_float64(0.0);
  outC->_L255.DP_valid = kcg_true;
  outC->_L255.DangerPoint = kcg_lit_float64(0.0);
  outC->_L255.OL_valid = kcg_true;
  outC->_L255.Overlap = kcg_lit_float64(0.0);
  outC->_L255.q_calculate_release = kcg_true;
  outC->_L255.ReleaseSpeed = kcg_lit_float64(0.0);
  outC->_L255.level = MA_L1_TrackAtlasTypes;
  outC->init = kcg_true;
  outC->offsetAntennaL1 = kcg_lit_int64(0);
  outC->gp_update_out = kcg_true;
  for (idx18 = 0; idx18 < 50; idx18++) {
    outC->gp_out[idx18].location = kcg_lit_float64(0.0);
    outC->gp_out[idx18].gradient = kcg_lit_float64(0.0);
    outC->gp_out[idx18].valid = kcg_true;
  }
  outC->trainLocations.trainPositionIsValid = kcg_true;
  outC->trainLocations.d_est_frontendPos = kcg_lit_float64(0.0);
  outC->trainLocations.d_minSafeFrontEndPos = kcg_lit_float64(0.0);
  outC->trainLocations.d_maxSafeFrontEndPos = kcg_lit_float64(0.0);
  outC->trainLocations.d_LRBG = kcg_lit_float64(0.0);
  outC->trainLocations.d_accLRBG = kcg_lit_float64(0.0);
  outC->ma_update_out = kcg_true;
  outC->ma_out.valid = kcg_true;
  outC->ma_out.v_main = kcg_lit_float64(0.0);
  outC->ma_out.EOA.Location = kcg_lit_float64(0.0);
  outC->ma_out.EOA.TargetSpeed = kcg_lit_float64(0.0);
  outC->ma_out.DP_valid = kcg_true;
  outC->ma_out.DangerPoint = kcg_lit_float64(0.0);
  outC->ma_out.OL_valid = kcg_true;
  outC->ma_out.Overlap = kcg_lit_float64(0.0);
  outC->ma_out.q_calculate_release = kcg_true;
  outC->ma_out.ReleaseSpeed = kcg_lit_float64(0.0);
  outC->ma_out.level = MA_L1_TrackAtlasTypes;
  outC->mrsp_update_out = kcg_true;
  for (idx19 = 0; idx19 < 110; idx19++) {
    outC->mrsp_out[idx19].Loc_Abs = kcg_lit_float64(0.0);
    outC->mrsp_out[idx19].MRS = kcg_lit_float64(0.0);
    outC->mrsp_out[idx19].valid = kcg_true;
  }
  /* _L110=(SDM_Types_Pkg::TransformL_intToL_real#11)/ */
  TransformL_intToL_real_init_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_11);
  /* _L96=(SDM_Types_Pkg::TransformL_intToL_real#4)/ */
  TransformL_intToL_real_init_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_4);
  /* _L105=(SDM_Types_Pkg::TransformL_intToL_real#9)/ */
  TransformL_intToL_real_init_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_9);
  for (idx1 = 0; idx1 < 110; idx1++) {
    /* _L167=(SDM_Input_Wrappers::ConvertMRSP_section)/ */
    ConvertMRSP_section_init_SDM_Input_Wrappers(
      &outC->Context_ConvertMRSP_section[idx1]);
  }
  /* _L241=(SDM_Types_Pkg::TransformL_intToL_real#12)/ */
  TransformL_intToL_real_init_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_12);
  /* _L250=(SDM_Types_Pkg::TransformL_intToL_real#16)/ */
  TransformL_intToL_real_init_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_16);
  for (idx = 0; idx < 50; idx++) {
    /* _L269=(SDM_Input_Wrappers::ConvertGradient_section#1)/ */
    ConvertGradient_section_init_SDM_Input_Wrappers(
      &outC->Context_ConvertGradient_section_1[idx]);
  }
  /* _L289=(SDM_Input_Wrappers::defaultMA#1)/ */
  defaultMA_init_SDM_Input_Wrappers(&outC->Context_defaultMA_1);
  /* _L255=(SDM_Input_Wrappers::ConvertMA#2)/ */
  ConvertMA_init_SDM_Input_Wrappers(&outC->Context_ConvertMA_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SDM_InputWrapper_reset_SDM_Input_Wrappers(
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->init = kcg_true;
  /* _L110=(SDM_Types_Pkg::TransformL_intToL_real#11)/ */
  TransformL_intToL_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_11);
  /* _L96=(SDM_Types_Pkg::TransformL_intToL_real#4)/ */
  TransformL_intToL_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_4);
  /* _L105=(SDM_Types_Pkg::TransformL_intToL_real#9)/ */
  TransformL_intToL_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_9);
  for (idx1 = 0; idx1 < 110; idx1++) {
    /* _L167=(SDM_Input_Wrappers::ConvertMRSP_section)/ */
    ConvertMRSP_section_reset_SDM_Input_Wrappers(
      &outC->Context_ConvertMRSP_section[idx1]);
  }
  /* _L241=(SDM_Types_Pkg::TransformL_intToL_real#12)/ */
  TransformL_intToL_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_12);
  /* _L250=(SDM_Types_Pkg::TransformL_intToL_real#16)/ */
  TransformL_intToL_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_16);
  for (idx = 0; idx < 50; idx++) {
    /* _L269=(SDM_Input_Wrappers::ConvertGradient_section#1)/ */
    ConvertGradient_section_reset_SDM_Input_Wrappers(
      &outC->Context_ConvertGradient_section_1[idx]);
  }
  /* _L289=(SDM_Input_Wrappers::defaultMA#1)/ */
  defaultMA_reset_SDM_Input_Wrappers(&outC->Context_defaultMA_1);
  /* _L255=(SDM_Input_Wrappers::ConvertMA#2)/ */
  ConvertMA_reset_SDM_Input_Wrappers(&outC->Context_ConvertMA_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_SDM_InputWrapper_SDM_Input_Wrappers(
  SV_SDM_InputWrapper_SDM_Input_Wrappers *SV,
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC)
{
  kcg_copy_MA_section_real_T_TargetManagement_types(
    &SV->Context__L255,
    &outC->_L255);
  SV->Context_init = outC->init;
}

void kcg_load_SV_SDM_InputWrapper_SDM_Input_Wrappers(
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC,
  SV_SDM_InputWrapper_SDM_Input_Wrappers *SV)
{
  kcg_copy_MA_section_real_T_TargetManagement_types(
    &outC->_L255,
    &SV->Context__L255);
  outC->init = SV->Context_init;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SDM_InputWrapper_SDM_Input_Wrappers.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

