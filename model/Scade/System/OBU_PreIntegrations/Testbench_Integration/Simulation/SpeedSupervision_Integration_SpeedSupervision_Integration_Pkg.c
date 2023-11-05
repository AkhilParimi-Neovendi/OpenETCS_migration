/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.h"

/* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration/ */
void SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg(
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* TrainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* dataFromTrackAtlas/ */
  DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTrackAtlas,
  /* Service_brake_requested_by_modes_and_levels/ */
  kcg_bool Service_brake_requested_by_modes_and_levels,
  /* Emergency_brake_requested_by_modes_and_levels/ */
  kcg_bool Emergency_brake_requested_by_modes_and_levels,
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC)
{
  static kcg_bool noname;
  static DataForSupervision_nextGen_t_TrackAtlasTypes _1_noname;
  static TargetCollection_T_TargetManagement_types _2_noname;
  static Target_T_TargetManagement_types _3_noname;
  static speedSupervisionForDMI_T_DMI_Types_Pkg _4_noname;
  static CurveCollection_T_CalcBrakingCurves_types _5_noname;

  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L22, TrainPosition);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L34, trainProps);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->_L162,
    dataFromTrackAtlas);
  /* _L54=(SDM_Input_Wrappers::SDM_InputWrapper#1)/ */
  SDM_InputWrapper_SDM_Input_Wrappers(
    &outC->_L22,
    &outC->_L34,
    &outC->_L162,
    &outC->Context_SDM_InputWrapper_1);
  kcg_copy_MRSP_internal_T_TargetManagement_types(
    &outC->_L54,
    &outC->Context_SDM_InputWrapper_1.mrsp_out);
  outC->_L59 = outC->Context_SDM_InputWrapper_1.mrsp_update_out;
  kcg_copy_MA_section_real_T_TargetManagement_types(
    &outC->_L55,
    &outC->Context_SDM_InputWrapper_1.ma_out);
  outC->_L58 = outC->Context_SDM_InputWrapper_1.ma_update_out;
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(
    &outC->_L48,
    &outC->Context_SDM_InputWrapper_1.trainLocations);
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->_L189,
    &outC->Context_SDM_InputWrapper_1.gp_out);
  outC->_L163 = outC->Context_SDM_InputWrapper_1.gp_update_out;
  outC->_L233 = outC->Context_SDM_InputWrapper_1.offsetAntennaL1;
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(
    &outC->Trainlocations_internal,
    &outC->_L48);
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(
    &outC->_L86,
    &outC->Trainlocations_internal);
  /* _L81=(TargetManagement_pkg::TargetManagement#2)/ */
  TargetManagement_TargetManagement_pkg(
    &outC->_L54,
    outC->_L59,
    &outC->_L55,
    outC->_L58,
    &outC->_L48,
    &outC->Context_TargetManagement_2);
  kcg_copy_TargetCollection_T_TargetManagement_types(
    &outC->_L81,
    &outC->Context_TargetManagement_2.targetCollection);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L143, trainData);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L21, NationalValues);
  /* _L139=(SDMModelPkg::ABrakeFactory#1)/ */
  ABrakeFactory_SDMModelPkg(
    &outC->_L143,
    &outC->_L21,
    &outC->Context_ABrakeFactory_1);
  kcg_copy_t_Brake_t_SDMModelPkg(
    &outC->_L139,
    &outC->Context_ABrakeFactory_1.T_b);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(
    &outC->_L186,
    &outC->Context_ABrakeFactory_1.aBrakeSafe);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(
    &outC->_L187,
    &outC->Context_ABrakeFactory_1.aBrakeService);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L193, trainData);
  kcg_copy_TargetCollection_T_TargetManagement_types(
    &outC->targetCollection,
    &outC->_L81);
  kcg_copy_TargetCollection_T_TargetManagement_types(
    &outC->_L196,
    &outC->targetCollection);
  /* _L190=(SDM_GradientAcceleration_Pkg::AGradient#1)/ */
  AGradient_SDM_GradientAcceleration_Pkg(
    &outC->_L48,
    &outC->_L189,
    outC->_L163,
    &outC->_L193,
    &outC->_L196,
    &outC->Context_AGradient_1);
  kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(
    &outC->_L190,
    &outC->Context_AGradient_1.A_gradient);
  /* _L208=(SDMModelPkg::addGradient#3)/ */
  addGradient_SDMModelPkg(
    &outC->_L186,
    &outC->_L190,
    &outC->Context_addGradient_3);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(
    &outC->_L208,
    &outC->Context_addGradient_3.aSafe);
  /* _L206=(SDMModelPkg::addGradient#1)/ */
  addGradient_SDMModelPkg(
    &outC->_L187,
    &outC->_L190,
    &outC->Context_addGradient_1);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(
    &outC->_L206,
    &outC->Context_addGradient_1.aSafe);
  /* _L43=(CalcBrakingCurves_Pkg::CalcBrakingCurves_integration#1)/ */
  CalcBrakingCurves_integration_CalcBrakingCurves_Pkg(
    &outC->_L86,
    &outC->_L81,
    &outC->_L208,
    &outC->_L206,
    &outC->Context_CalcBrakingCurves_integration_1);
  kcg_copy_CurveCollection_T_CalcBrakingCurves_types(
    &outC->_L43,
    &outC->Context_CalcBrakingCurves_integration_1.curveCollection);
  kcg_copy_CurveCollection_T_CalcBrakingCurves_types(
    &outC->CurveCollection,
    &outC->_L43);
  kcg_copy_CurveCollection_T_CalcBrakingCurves_types(
    &outC->_L254,
    &outC->CurveCollection);
  kcg_copy_CurveCollection_T_CalcBrakingCurves_types(&_5_noname, &outC->_L254);
  kcg_copy_TargetCollection_T_TargetManagement_types(
    &outC->_L102,
    &outC->targetCollection);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L239, TrainPosition);
  kcg_copy_MRSP_internal_T_TargetManagement_types(
    &outC->MRSP_internal,
    &outC->_L54);
  kcg_copy_MRSP_internal_T_TargetManagement_types(
    &outC->_L98,
    &outC->MRSP_internal);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L24, odometry);
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(
    &outC->_L96,
    &outC->Trainlocations_internal);
  kcg_copy_TargetCollection_T_TargetManagement_types(
    &outC->_L97,
    &outC->targetCollection);
  kcg_copy_MA_section_real_T_TargetManagement_types(
    &outC->MA_internal,
    &outC->_L55);
  kcg_copy_MA_section_real_T_TargetManagement_types(
    &outC->_L216,
    &outC->MA_internal);
  kcg_copy_t_Brake_t_SDMModelPkg(&outC->T_b, &outC->_L139);
  kcg_copy_t_Brake_t_SDMModelPkg(&outC->_L225, &outC->T_b);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L141, NationalValues);
  outC->_L230 = kcg_true;
  outC->_L232 = !outC->_L230;
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L228, NationalValues);
  outC->_L227 = outC->_L228.q_nvsbfbperm;
  /* _L229= */
  switch (outC->_L227) {
    case Q_NVSBFBPERM_Yes :
      outC->_L229 = outC->_L230;
      break;
    default :
      outC->_L229 = outC->_L232;
      break;
  }
  outC->_L226 = kcg_true;
  outC->_L94 = kcg_lit_int32(800);
  outC->_L275 = kcg_lit_int32(1200);
  outC->_L185.isSB_FBAvailable = outC->_L229;
  outC->_L185.isSB_CmdAvailable = outC->_L226;
  outC->_L185.isTCOAvailable = outC->_L226;
  outC->_L185.T_traction_cut_off = outC->_L94;
  outC->_L185.offsetAntennaL1 = outC->_L233;
  outC->_L185.T_b_limit = outC->_L275;
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(
    &outC->trainData_extras,
    &outC->_L185);
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(
    &outC->_L222,
    &outC->trainData_extras);
  /* _L111=(TargetLimits_Pkg::SDMLimitLocations#4)/ */
  SDMLimitLocations_TargetLimits_Pkg(
    &outC->_L98,
    &outC->_L24,
    &outC->_L96,
    &outC->_L97,
    &outC->_L43,
    &outC->_L216,
    &outC->_L225,
    &outC->_L141,
    &outC->_L222,
    &outC->Context_SDMLimitLocations_4);
  kcg_copy_Speeds_T_SDM_Types_Pkg(
    &outC->_L111,
    &outC->Context_SDMLimitLocations_4.speeds);
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(
    &outC->_L112,
    &outC->Context_SDMLimitLocations_4.locations);
  kcg_copy_Target_T_TargetManagement_types(
    &outC->_L113,
    &outC->Context_SDMLimitLocations_4.MostRestrictiveDisplayedTarget);
  outC->_L114 = outC->Context_SDMLimitLocations_4.FLOIisSBI1;
  outC->_L210 = Service_brake_requested_by_modes_and_levels;
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L241, NationalValues);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L242, odometry);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L243, TrainPosition);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L244, trainData);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->_L246,
    dataFromTrackAtlas);
  /* _L240=(SDM_Input_Wrappers::SimpleValidityCheck#1)/ */
  SimpleValidityCheck_SDM_Input_Wrappers(
    &outC->_L241,
    &outC->_L242,
    &outC->_L243,
    &outC->_L244,
    &outC->_L246,
    &outC->Context_SimpleValidityCheck_1);
  outC->_L240 = outC->Context_SimpleValidityCheck_1.exception;
  outC->_L211 = Emergency_brake_requested_by_modes_and_levels;
  outC->_L247 = outC->_L211 | outC->_L240;
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L215, NationalValues);
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(
    &outC->_L223,
    &outC->trainData_extras);
  /* _L3=(SDM_Commands_Pkg::SDM_Commands#1)/ */
  SDM_Commands_SDM_Commands_Pkg(
    &outC->_L102,
    &outC->_L239,
    &outC->_L111,
    &outC->_L112,
    &outC->_L113,
    outC->_L114,
    outC->_L210,
    outC->_L247,
    &outC->_L215,
    &outC->_L223,
    &outC->Context_SDM_Commands_1);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->_L3,
    &outC->Context_SDM_Commands_1.sdmToDMI);
  kcg_copy_SDM_Commands_T_SDM_Types_Pkg(
    &outC->_L65,
    &outC->Context_SDM_Commands_1.sdmCmd);
  outC->_L66 = outC->Context_SDM_Commands_1.targetSpeedReached;
  outC->_L212 = outC->Context_SDM_Commands_1.eoaOverpassed;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->_L214,
    &outC->Context_SDM_Commands_1.brakeCmd);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->sdmToDMILocal,
    &outC->_L3);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->_L277,
    &outC->sdmToDMILocal);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(&_4_noname, &outC->_L277);
  kcg_copy_Target_T_TargetManagement_types(&outC->MRDT, &outC->_L113);
  kcg_copy_Target_T_TargetManagement_types(&outC->_L256, &outC->MRDT);
  kcg_copy_Target_T_TargetManagement_types(&_3_noname, &outC->_L256);
  kcg_copy_TargetCollection_T_TargetManagement_types(
    &outC->_L255,
    &outC->targetCollection);
  kcg_copy_TargetCollection_T_TargetManagement_types(&_2_noname, &outC->_L255);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->_L276,
    dataFromTrackAtlas);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(&_1_noname, &outC->_L276);
  kcg_copy_Target_T_TargetManagement_types(&outC->_L250, &outC->MRDT);
  noname = outC->_L240;
  outC->Target_Speed_Reached = outC->_L66;
  outC->EOA_overpassed = outC->_L212;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->brakeCmd, &outC->_L214);
  kcg_copy_SDM_Commands_T_SDM_Types_Pkg(&outC->sdmCommands, &outC->_L65);
  kcg_copy_Target_T_TargetManagement_types(&outC->target, &outC->_L250);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(&outC->sdmToDMI, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void SpeedSupervision_Integration_init_SpeedSupervision_Integration_Pkg(
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC)
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
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;
  static kcg_size idx36;
  static kcg_size idx37;
  static kcg_size idx38;
  static kcg_size idx39;
  static kcg_size idx40;
  static kcg_size idx41;
  static kcg_size idx42;
  static kcg_size idx43;
  static kcg_size idx44;
  static kcg_size idx45;
  static kcg_size idx46;
  static kcg_size idx47;
  static kcg_size idx48;
  static kcg_size idx49;
  static kcg_size idx50;
  static kcg_size idx51;
  static kcg_size idx52;
  static kcg_size idx53;
  static kcg_size idx54;
  static kcg_size idx55;
  static kcg_size idx56;
  static kcg_size idx57;
  static kcg_size idx58;
  static kcg_size idx59;
  static kcg_size idx60;
  static kcg_size idx61;
  static kcg_size idx62;
  static kcg_size idx63;
  static kcg_size idx64;
  static kcg_size idx65;
  static kcg_size idx66;
  static kcg_size idx67;
  static kcg_size idx68;
  static kcg_size idx69;
  static kcg_size idx70;
  static kcg_size idx71;
  static kcg_size idx72;
  static kcg_size idx73;
  static kcg_size idx74;
  static kcg_size idx75;
  static kcg_size idx76;
  static kcg_size idx77;
  static kcg_size idx78;
  static kcg_size idx79;
  static kcg_size idx80;
  static kcg_size idx81;
  static kcg_size idx82;
  static kcg_size idx83;
  static kcg_size idx84;
  static kcg_size idx85;
  static kcg_size idx86;
  static kcg_size idx87;
  static kcg_size idx88;
  static kcg_size idx89;
  static kcg_size idx90;
  static kcg_size idx91;
  static kcg_size idx92;
  static kcg_size idx93;
  static kcg_size idx94;
  static kcg_size idx95;
  static kcg_size idx96;
  static kcg_size idx97;
  static kcg_size idx98;
  static kcg_size idx99;
  static kcg_size idx100;
  static kcg_size idx101;
  static kcg_size idx102;
  static kcg_size idx103;
  static kcg_size idx104;
  static kcg_size idx105;
  static kcg_size idx106;
  static kcg_size idx107;
  static kcg_size idx108;
  static kcg_size idx109;
  static kcg_size idx110;
  static kcg_size idx111;
  static kcg_size idx112;
  static kcg_size idx113;
  static kcg_size idx114;
  static kcg_size idx115;
  static kcg_size idx116;
  static kcg_size idx117;
  static kcg_size idx118;
  static kcg_size idx119;
  static kcg_size idx120;
  static kcg_size idx121;
  static kcg_size idx122;
  static kcg_size idx123;
  static kcg_size idx124;

  outC->_L277.valid = kcg_true;
  outC->_L277.targetSpeed = kcg_lit_int32(0);
  outC->_L277.permittedSpeed = kcg_lit_int32(0);
  outC->_L277.releaseSpeed = kcg_lit_int32(0);
  outC->_L277.locationBrakeTarget = kcg_lit_int32(0);
  outC->_L277.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L277.interventionSpeed = kcg_lit_int32(0);
  outC->_L277.sup_status = CSM_DMI_Types_Pkg;
  outC->_L277.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->_L277.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L276.freshMA = kcg_true;
  outC->_L276.MA.valid = kcg_true;
  outC->_L276.MA.Level = MA_L1_TrackAtlasTypes;
  outC->_L276.MA.q_dir = Q_DIR_Reverse;
  outC->_L276.MA.v_main = kcg_lit_int32(0);
  outC->_L276.MA.v_loa = kcg_lit_int32(0);
  outC->_L276.MA.t_loa_unlimited = kcg_true;
  outC->_L276.MA.t_loa = kcg_lit_int32(0);
  outC->_L276.MA.n_iter = kcg_lit_int32(0);
  for (idx = 0; idx < 10; idx++) {
    outC->_L276.MA.sections[idx].valid = kcg_true;
    outC->_L276.MA.sections[idx].q_endsection = kcg_true;
    outC->_L276.MA.sections[idx].l_section = kcg_lit_int32(0);
    outC->_L276.MA.sections[idx].q_sectiontimer = kcg_true;
    outC->_L276.MA.sections[idx].t_sectiontimer = kcg_lit_int32(0);
    outC->_L276.MA.sections[idx].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L276.MA.q_dangerpoint = kcg_true;
  outC->_L276.MA.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L276.MA.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L276.MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L276.MA.q_overlap = kcg_true;
  outC->_L276.MA.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L276.MA.overlap.v_release = kcg_lit_int32(0);
  outC->_L276.MA.overlap.calc_v_release_onboard = kcg_true;
  outC->_L276.MA.q_endtimer = kcg_true;
  outC->_L276.MA.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L276.MA.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L276.freshGradientProfile = kcg_true;
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L276.GradientProfile[idx1].valid = kcg_true;
    outC->_L276.GradientProfile[idx1].Loc_Absolute = kcg_lit_int32(0);
    outC->_L276.GradientProfile[idx1].Loc_LRBG = kcg_lit_int32(0);
    outC->_L276.GradientProfile[idx1].Gradient = kcg_lit_int32(0);
    outC->_L276.GradientProfile[idx1].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L276.freshMRSP = kcg_true;
  for (idx2 = 0; idx2 < 110; idx2++) {
    outC->_L276.MRSP[idx2].valid = kcg_true;
    outC->_L276.MRSP[idx2].Loc_Abs = kcg_lit_int32(0);
    outC->_L276.MRSP[idx2].Loc_LRBG = kcg_lit_int32(0);
    outC->_L276.MRSP[idx2].MRS = kcg_lit_int32(0);
  }
  outC->_L275 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 110; idx7++) {
    for (idx3 = 0; idx3 < 114; idx3++) {
      outC->_L254.MRSP_EBD_curves[idx7].distances[idx3] = kcg_lit_float32(0.0);
    }
    for (idx4 = 0; idx4 < 114; idx4++) {
      outC->_L254.MRSP_EBD_curves[idx7].speeds[idx4] = kcg_lit_float32(0.0);
    }
    for (idx5 = 0; idx5 < 114; idx5++) {
      outC->_L254.MRSP_EBD_curves[idx7].accelerations[idx5] = kcg_lit_float32(0.0);
    }
    for (idx6 = 0; idx6 < 114; idx6++) {
      outC->_L254.MRSP_EBD_curves[idx7].valid[idx6] = kcg_true;
    }
  }
  for (idx8 = 0; idx8 < 114; idx8++) {
    outC->_L254.EOA_SBD_curve.distances[idx8] = kcg_lit_float32(0.0);
  }
  for (idx9 = 0; idx9 < 114; idx9++) {
    outC->_L254.EOA_SBD_curve.speeds[idx9] = kcg_lit_float32(0.0);
  }
  for (idx10 = 0; idx10 < 114; idx10++) {
    outC->_L254.EOA_SBD_curve.accelerations[idx10] = kcg_lit_float32(0.0);
  }
  for (idx11 = 0; idx11 < 114; idx11++) {
    outC->_L254.EOA_SBD_curve.valid[idx11] = kcg_true;
  }
  for (idx12 = 0; idx12 < 114; idx12++) {
    outC->_L254.SvL_LoA_EBD_curve.distances[idx12] = kcg_lit_float32(0.0);
  }
  for (idx13 = 0; idx13 < 114; idx13++) {
    outC->_L254.SvL_LoA_EBD_curve.speeds[idx13] = kcg_lit_float32(0.0);
  }
  for (idx14 = 0; idx14 < 114; idx14++) {
    outC->_L254.SvL_LoA_EBD_curve.accelerations[idx14] = kcg_lit_float32(0.0);
  }
  for (idx15 = 0; idx15 < 114; idx15++) {
    outC->_L254.SvL_LoA_EBD_curve.valid[idx15] = kcg_true;
  }
  for (idx16 = 0; idx16 < 114; idx16++) {
    outC->_L254.GUI_curve.distances[idx16] = kcg_lit_float32(0.0);
  }
  for (idx17 = 0; idx17 < 114; idx17++) {
    outC->_L254.GUI_curve.speeds[idx17] = kcg_lit_float32(0.0);
  }
  for (idx18 = 0; idx18 < 114; idx18++) {
    outC->_L254.GUI_curve.accelerations[idx18] = kcg_lit_float32(0.0);
  }
  for (idx19 = 0; idx19 < 114; idx19++) {
    outC->_L254.GUI_curve.valid[idx19] = kcg_true;
  }
  outC->_L254.GUI_curve_enabled = kcg_true;
  outC->_L255.updatedTargetList = kcg_true;
  for (idx20 = 0; idx20 < 110; idx20++) {
    outC->_L255.MRSP_targetList[idx20].targetType = EoA_TargetManagement_types;
    outC->_L255.MRSP_targetList[idx20].distance = kcg_lit_float32(0.0);
    outC->_L255.MRSP_targetList[idx20].speed = kcg_lit_float32(0.0);
  }
  outC->_L255.EOA_target.targetType = EoA_TargetManagement_types;
  outC->_L255.EOA_target.distance = kcg_lit_float32(0.0);
  outC->_L255.EOA_target.speed = kcg_lit_float32(0.0);
  outC->_L255.SvL_LoA_target.targetType = EoA_TargetManagement_types;
  outC->_L255.SvL_LoA_target.distance = kcg_lit_float32(0.0);
  outC->_L255.SvL_LoA_target.speed = kcg_lit_float32(0.0);
  outC->_L256.targetType = EoA_TargetManagement_types;
  outC->_L256.distance = kcg_lit_int32(0);
  outC->_L256.speed = kcg_lit_int32(0);
  outC->_L256.valid = kcg_true;
  outC->_L250.targetType = EoA_TargetManagement_types;
  outC->_L250.distance = kcg_lit_int32(0);
  outC->_L250.speed = kcg_lit_int32(0);
  outC->_L250.valid = kcg_true;
  outC->_L247 = kcg_true;
  outC->_L246.freshMA = kcg_true;
  outC->_L246.MA.valid = kcg_true;
  outC->_L246.MA.Level = MA_L1_TrackAtlasTypes;
  outC->_L246.MA.q_dir = Q_DIR_Reverse;
  outC->_L246.MA.v_main = kcg_lit_int32(0);
  outC->_L246.MA.v_loa = kcg_lit_int32(0);
  outC->_L246.MA.t_loa_unlimited = kcg_true;
  outC->_L246.MA.t_loa = kcg_lit_int32(0);
  outC->_L246.MA.n_iter = kcg_lit_int32(0);
  for (idx21 = 0; idx21 < 10; idx21++) {
    outC->_L246.MA.sections[idx21].valid = kcg_true;
    outC->_L246.MA.sections[idx21].q_endsection = kcg_true;
    outC->_L246.MA.sections[idx21].l_section = kcg_lit_int32(0);
    outC->_L246.MA.sections[idx21].q_sectiontimer = kcg_true;
    outC->_L246.MA.sections[idx21].t_sectiontimer = kcg_lit_int32(0);
    outC->_L246.MA.sections[idx21].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L246.MA.q_dangerpoint = kcg_true;
  outC->_L246.MA.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L246.MA.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L246.MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L246.MA.q_overlap = kcg_true;
  outC->_L246.MA.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L246.MA.overlap.v_release = kcg_lit_int32(0);
  outC->_L246.MA.overlap.calc_v_release_onboard = kcg_true;
  outC->_L246.MA.q_endtimer = kcg_true;
  outC->_L246.MA.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L246.MA.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L246.freshGradientProfile = kcg_true;
  for (idx22 = 0; idx22 < 50; idx22++) {
    outC->_L246.GradientProfile[idx22].valid = kcg_true;
    outC->_L246.GradientProfile[idx22].Loc_Absolute = kcg_lit_int32(0);
    outC->_L246.GradientProfile[idx22].Loc_LRBG = kcg_lit_int32(0);
    outC->_L246.GradientProfile[idx22].Gradient = kcg_lit_int32(0);
    outC->_L246.GradientProfile[idx22].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L246.freshMRSP = kcg_true;
  for (idx23 = 0; idx23 < 110; idx23++) {
    outC->_L246.MRSP[idx23].valid = kcg_true;
    outC->_L246.MRSP[idx23].Loc_Abs = kcg_lit_int32(0);
    outC->_L246.MRSP[idx23].Loc_LRBG = kcg_lit_int32(0);
    outC->_L246.MRSP[idx23].MRS = kcg_lit_int32(0);
  }
  outC->_L244.valid = kcg_true;
  outC->_L244.acknowledgedByDriver = kcg_true;
  outC->_L244.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L244.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L244.trainLength = kcg_lit_int32(0);
  outC->_L244.brakePerctage = kcg_lit_int32(0);
  outC->_L244.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L244.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L244.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L244.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L244.axleNumber = kcg_lit_int32(0);
  outC->_L244.numberNationalSystems = kcg_lit_int32(0);
  for (idx24 = 0; idx24 < 5; idx24++) {
    outC->_L244.nationSystems[idx24] = kcg_lit_int32(0);
  }
  outC->_L244.numberTractionSystems = kcg_lit_int32(0);
  for (idx25 = 0; idx25 < 4; idx25++) {
    outC->_L244.tractionSystem[idx25].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L244.tractionSystem[idx25].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L243.valid = kcg_true;
  outC->_L243.timestamp = kcg_lit_int32(0);
  outC->_L243.trainPositionIsUnknown = kcg_true;
  outC->_L243.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L243.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L243.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L243.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L243.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L243.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L243.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L243.LRBG.valid = kcg_true;
  outC->_L243.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L243.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L243.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L243.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L243.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L243.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L243.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L243.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L243.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L243.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L243.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L243.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L243.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L243.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L243.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L243.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L243.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L243.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L243.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L243.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L243.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L243.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L243.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L243.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L243.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L243.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L243.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx26 = 0; idx26 < 33; idx26++) {
    outC->_L243.LRBG.infoFromPassing.linkedBGs[idx26].valid = kcg_true;
    outC->_L243.LRBG.infoFromPassing.linkedBGs[idx26].nid_LRBG = kcg_lit_int32(0);
    outC->_L243.LRBG.infoFromPassing.linkedBGs[idx26].q_dir = Q_DIR_Reverse;
    outC->_L243.LRBG.infoFromPassing.linkedBGs[idx26].q_scale = Q_SCALE_10_cm_scale;
    outC->_L243.LRBG.infoFromPassing.linkedBGs[idx26].d_link = kcg_lit_int32(0);
    outC->_L243.LRBG.infoFromPassing.linkedBGs[idx26].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L243.LRBG.infoFromPassing.linkedBGs[idx26].nid_c = kcg_lit_int32(0);
    outC->_L243.LRBG.infoFromPassing.linkedBGs[idx26].nid_bg = kcg_lit_int32(0);
    outC->_L243.LRBG.infoFromPassing.linkedBGs[idx26].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L243.LRBG.infoFromPassing.linkedBGs[idx26].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L243.LRBG.infoFromPassing.linkedBGs[idx26].q_locacc = kcg_lit_int32(0);
  }
  outC->_L243.LRBG.missed = kcg_true;
  outC->_L243.prvLRBG.valid = kcg_true;
  outC->_L243.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L243.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L243.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L243.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L243.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L243.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L243.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L243.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L243.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L243.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L243.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L243.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L243.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L243.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L243.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx27 = 0; idx27 < 33; idx27++) {
    outC->_L243.prvLRBG.infoFromPassing.linkedBGs[idx27].valid = kcg_true;
    outC->_L243.prvLRBG.infoFromPassing.linkedBGs[idx27].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L243.prvLRBG.infoFromPassing.linkedBGs[idx27].q_dir = Q_DIR_Reverse;
    outC->_L243.prvLRBG.infoFromPassing.linkedBGs[idx27].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L243.prvLRBG.infoFromPassing.linkedBGs[idx27].d_link = kcg_lit_int32(0);
    outC->_L243.prvLRBG.infoFromPassing.linkedBGs[idx27].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L243.prvLRBG.infoFromPassing.linkedBGs[idx27].nid_c = kcg_lit_int32(0);
    outC->_L243.prvLRBG.infoFromPassing.linkedBGs[idx27].nid_bg = kcg_lit_int32(0);
    outC->_L243.prvLRBG.infoFromPassing.linkedBGs[idx27].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L243.prvLRBG.infoFromPassing.linkedBGs[idx27].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L243.prvLRBG.infoFromPassing.linkedBGs[idx27].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L243.prvLRBG.missed = kcg_true;
  outC->_L243.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L243.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L243.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L243.linkingIsUsedOnboard = kcg_true;
  outC->_L243.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L243.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L243.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L242.valid = kcg_true;
  outC->_L242.timestamp = kcg_lit_int32(0);
  outC->_L242.odo.o_nominal = kcg_lit_int32(0);
  outC->_L242.odo.o_min = kcg_lit_int32(0);
  outC->_L242.odo.o_max = kcg_lit_int32(0);
  outC->_L242.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L242.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L242.speed.v_lower = kcg_lit_int32(0);
  outC->_L242.speed.v_upper = kcg_lit_int32(0);
  outC->_L242.acceleration = kcg_lit_int32(0);
  outC->_L242.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L242.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L241.valid = kcg_true;
  outC->_L241.q_dir = Q_DIR_Reverse;
  outC->_L241.d_validnv = kcg_lit_int32(0);
  for (idx28 = 0; idx28 < 7; idx28++) {
    outC->_L241.nid_cArray[idx28].valid = kcg_true;
    outC->_L241.nid_cArray[idx28].nid_c = kcg_lit_int32(0);
  }
  outC->_L241.v_nvshunt = kcg_lit_int32(0);
  outC->_L241.v_nvstff = kcg_lit_int32(0);
  outC->_L241.v_nvonsight = kcg_lit_int32(0);
  outC->_L241.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L241.v_nvunfit = kcg_lit_int32(0);
  outC->_L241.v_nvrel = kcg_lit_int32(0);
  outC->_L241.d_nvroll = kcg_lit_int32(0);
  outC->_L241.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L241.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L241.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L241.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L241.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L241.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L241.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L241.d_nvovtrp = kcg_lit_int32(0);
  outC->_L241.t_nvovtrp = kcg_lit_int32(0);
  outC->_L241.d_nvpotrp = kcg_lit_int32(0);
  outC->_L241.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L241.t_nvcontact = kcg_lit_int32(0);
  outC->_L241.m_nvderun = M_NVDERUN_No;
  outC->_L241.d_nvstff = kcg_lit_int32(0);
  outC->_L241.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L241.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L241.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L241.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L241.q_nvlocacc = kcg_lit_int32(0);
  outC->_L241.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L241.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L241.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx30 = 0; idx30 < 7; idx30++) {
    outC->_L241.nvkvintsetArray[idx30].valid = kcg_true;
    outC->_L241.nvkvintsetArray[idx30].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L241.nvkvintsetArray[idx30].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L241.nvkvintsetArray[idx30].a_nvp23 = kcg_lit_float32(0.0);
    for (idx29 = 0; idx29 < 7; idx29++) {
      outC->_L241.nvkvintsetArray[idx30].nvkintArray[idx29].valid = kcg_true;
      outC->_L241.nvkvintsetArray[idx30].nvkintArray[idx29].v_nvkvint =
        kcg_lit_int32(0);
      outC->_L241.nvkvintsetArray[idx30].nvkintArray[idx29].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L241.nvkvintsetArray[idx30].nvkintArray[idx29].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx31 = 0; idx31 < 7; idx31++) {
    outC->_L241.nvkrintArray[idx31].valid = kcg_true;
    outC->_L241.nvkrintArray[idx31].l_nvkrint = L_NVKRINT_0m;
    outC->_L241.nvkrintArray[idx31].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L241.m_nvktint = kcg_lit_float32(0.0);
  outC->_L240 = kcg_true;
  outC->_L239.valid = kcg_true;
  outC->_L239.timestamp = kcg_lit_int32(0);
  outC->_L239.trainPositionIsUnknown = kcg_true;
  outC->_L239.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L239.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L239.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L239.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L239.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L239.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L239.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L239.LRBG.valid = kcg_true;
  outC->_L239.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L239.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L239.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L239.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L239.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L239.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L239.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L239.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L239.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L239.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L239.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L239.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L239.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L239.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L239.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L239.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L239.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L239.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L239.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L239.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L239.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L239.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L239.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L239.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L239.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L239.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L239.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx32 = 0; idx32 < 33; idx32++) {
    outC->_L239.LRBG.infoFromPassing.linkedBGs[idx32].valid = kcg_true;
    outC->_L239.LRBG.infoFromPassing.linkedBGs[idx32].nid_LRBG = kcg_lit_int32(0);
    outC->_L239.LRBG.infoFromPassing.linkedBGs[idx32].q_dir = Q_DIR_Reverse;
    outC->_L239.LRBG.infoFromPassing.linkedBGs[idx32].q_scale = Q_SCALE_10_cm_scale;
    outC->_L239.LRBG.infoFromPassing.linkedBGs[idx32].d_link = kcg_lit_int32(0);
    outC->_L239.LRBG.infoFromPassing.linkedBGs[idx32].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L239.LRBG.infoFromPassing.linkedBGs[idx32].nid_c = kcg_lit_int32(0);
    outC->_L239.LRBG.infoFromPassing.linkedBGs[idx32].nid_bg = kcg_lit_int32(0);
    outC->_L239.LRBG.infoFromPassing.linkedBGs[idx32].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L239.LRBG.infoFromPassing.linkedBGs[idx32].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L239.LRBG.infoFromPassing.linkedBGs[idx32].q_locacc = kcg_lit_int32(0);
  }
  outC->_L239.LRBG.missed = kcg_true;
  outC->_L239.prvLRBG.valid = kcg_true;
  outC->_L239.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L239.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L239.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L239.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L239.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L239.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L239.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L239.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L239.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L239.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L239.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L239.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L239.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L239.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L239.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx33 = 0; idx33 < 33; idx33++) {
    outC->_L239.prvLRBG.infoFromPassing.linkedBGs[idx33].valid = kcg_true;
    outC->_L239.prvLRBG.infoFromPassing.linkedBGs[idx33].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L239.prvLRBG.infoFromPassing.linkedBGs[idx33].q_dir = Q_DIR_Reverse;
    outC->_L239.prvLRBG.infoFromPassing.linkedBGs[idx33].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L239.prvLRBG.infoFromPassing.linkedBGs[idx33].d_link = kcg_lit_int32(0);
    outC->_L239.prvLRBG.infoFromPassing.linkedBGs[idx33].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L239.prvLRBG.infoFromPassing.linkedBGs[idx33].nid_c = kcg_lit_int32(0);
    outC->_L239.prvLRBG.infoFromPassing.linkedBGs[idx33].nid_bg = kcg_lit_int32(0);
    outC->_L239.prvLRBG.infoFromPassing.linkedBGs[idx33].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L239.prvLRBG.infoFromPassing.linkedBGs[idx33].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L239.prvLRBG.infoFromPassing.linkedBGs[idx33].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L239.prvLRBG.missed = kcg_true;
  outC->_L239.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L239.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L239.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L239.linkingIsUsedOnboard = kcg_true;
  outC->_L239.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L239.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L239.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L233 = kcg_lit_int32(0);
  outC->_L232 = kcg_true;
  outC->_L230 = kcg_true;
  outC->_L229 = kcg_true;
  outC->_L228.valid = kcg_true;
  outC->_L228.q_dir = Q_DIR_Reverse;
  outC->_L228.d_validnv = kcg_lit_int32(0);
  for (idx34 = 0; idx34 < 7; idx34++) {
    outC->_L228.nid_cArray[idx34].valid = kcg_true;
    outC->_L228.nid_cArray[idx34].nid_c = kcg_lit_int32(0);
  }
  outC->_L228.v_nvshunt = kcg_lit_int32(0);
  outC->_L228.v_nvstff = kcg_lit_int32(0);
  outC->_L228.v_nvonsight = kcg_lit_int32(0);
  outC->_L228.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L228.v_nvunfit = kcg_lit_int32(0);
  outC->_L228.v_nvrel = kcg_lit_int32(0);
  outC->_L228.d_nvroll = kcg_lit_int32(0);
  outC->_L228.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L228.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L228.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L228.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L228.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L228.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L228.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L228.d_nvovtrp = kcg_lit_int32(0);
  outC->_L228.t_nvovtrp = kcg_lit_int32(0);
  outC->_L228.d_nvpotrp = kcg_lit_int32(0);
  outC->_L228.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L228.t_nvcontact = kcg_lit_int32(0);
  outC->_L228.m_nvderun = M_NVDERUN_No;
  outC->_L228.d_nvstff = kcg_lit_int32(0);
  outC->_L228.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L228.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L228.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L228.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L228.q_nvlocacc = kcg_lit_int32(0);
  outC->_L228.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L228.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L228.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx36 = 0; idx36 < 7; idx36++) {
    outC->_L228.nvkvintsetArray[idx36].valid = kcg_true;
    outC->_L228.nvkvintsetArray[idx36].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L228.nvkvintsetArray[idx36].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L228.nvkvintsetArray[idx36].a_nvp23 = kcg_lit_float32(0.0);
    for (idx35 = 0; idx35 < 7; idx35++) {
      outC->_L228.nvkvintsetArray[idx36].nvkintArray[idx35].valid = kcg_true;
      outC->_L228.nvkvintsetArray[idx36].nvkintArray[idx35].v_nvkvint =
        kcg_lit_int32(0);
      outC->_L228.nvkvintsetArray[idx36].nvkintArray[idx35].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L228.nvkvintsetArray[idx36].nvkintArray[idx35].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx37 = 0; idx37 < 7; idx37++) {
    outC->_L228.nvkrintArray[idx37].valid = kcg_true;
    outC->_L228.nvkrintArray[idx37].l_nvkrint = L_NVKRINT_0m;
    outC->_L228.nvkrintArray[idx37].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L228.m_nvktint = kcg_lit_float32(0.0);
  outC->_L227 = Q_NVSBFBPERM_No;
  outC->_L226 = kcg_true;
  for (idx38 = 0; idx38 < 2; idx38++) {
    outC->_L225.emergency[idx38] = kcg_lit_float32(0.0);
  }
  for (idx39 = 0; idx39 < 2; idx39++) {
    outC->_L225.service[idx39] = kcg_lit_float32(0.0);
  }
  outC->_L223.isSB_FBAvailable = kcg_true;
  outC->_L223.isSB_CmdAvailable = kcg_true;
  outC->_L223.isTCOAvailable = kcg_true;
  outC->_L223.T_traction_cut_off = kcg_lit_int32(0);
  outC->_L223.offsetAntennaL1 = kcg_lit_int32(0);
  outC->_L223.T_b_limit = kcg_lit_int32(0);
  outC->_L222.isSB_FBAvailable = kcg_true;
  outC->_L222.isSB_CmdAvailable = kcg_true;
  outC->_L222.isTCOAvailable = kcg_true;
  outC->_L222.T_traction_cut_off = kcg_lit_int32(0);
  outC->_L222.offsetAntennaL1 = kcg_lit_int32(0);
  outC->_L222.T_b_limit = kcg_lit_int32(0);
  outC->_L216.valid = kcg_true;
  outC->_L216.v_main = kcg_lit_float32(0.0);
  outC->_L216.EOA.Location = kcg_lit_float32(0.0);
  outC->_L216.EOA.TargetSpeed = kcg_lit_float32(0.0);
  outC->_L216.DP_valid = kcg_true;
  outC->_L216.DangerPoint = kcg_lit_float32(0.0);
  outC->_L216.OL_valid = kcg_true;
  outC->_L216.Overlap = kcg_lit_float32(0.0);
  outC->_L216.q_calculate_release = kcg_true;
  outC->_L216.ReleaseSpeed = kcg_lit_float32(0.0);
  outC->_L216.level = MA_L1_TrackAtlasTypes;
  outC->_L215.valid = kcg_true;
  outC->_L215.q_dir = Q_DIR_Reverse;
  outC->_L215.d_validnv = kcg_lit_int32(0);
  for (idx40 = 0; idx40 < 7; idx40++) {
    outC->_L215.nid_cArray[idx40].valid = kcg_true;
    outC->_L215.nid_cArray[idx40].nid_c = kcg_lit_int32(0);
  }
  outC->_L215.v_nvshunt = kcg_lit_int32(0);
  outC->_L215.v_nvstff = kcg_lit_int32(0);
  outC->_L215.v_nvonsight = kcg_lit_int32(0);
  outC->_L215.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L215.v_nvunfit = kcg_lit_int32(0);
  outC->_L215.v_nvrel = kcg_lit_int32(0);
  outC->_L215.d_nvroll = kcg_lit_int32(0);
  outC->_L215.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L215.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L215.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L215.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L215.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L215.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L215.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L215.d_nvovtrp = kcg_lit_int32(0);
  outC->_L215.t_nvovtrp = kcg_lit_int32(0);
  outC->_L215.d_nvpotrp = kcg_lit_int32(0);
  outC->_L215.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L215.t_nvcontact = kcg_lit_int32(0);
  outC->_L215.m_nvderun = M_NVDERUN_No;
  outC->_L215.d_nvstff = kcg_lit_int32(0);
  outC->_L215.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L215.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L215.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L215.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L215.q_nvlocacc = kcg_lit_int32(0);
  outC->_L215.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L215.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L215.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx42 = 0; idx42 < 7; idx42++) {
    outC->_L215.nvkvintsetArray[idx42].valid = kcg_true;
    outC->_L215.nvkvintsetArray[idx42].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L215.nvkvintsetArray[idx42].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L215.nvkvintsetArray[idx42].a_nvp23 = kcg_lit_float32(0.0);
    for (idx41 = 0; idx41 < 7; idx41++) {
      outC->_L215.nvkvintsetArray[idx42].nvkintArray[idx41].valid = kcg_true;
      outC->_L215.nvkvintsetArray[idx42].nvkintArray[idx41].v_nvkvint =
        kcg_lit_int32(0);
      outC->_L215.nvkvintsetArray[idx42].nvkintArray[idx41].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L215.nvkvintsetArray[idx42].nvkintArray[idx41].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx43 = 0; idx43 < 7; idx43++) {
    outC->_L215.nvkrintArray[idx43].valid = kcg_true;
    outC->_L215.nvkrintArray[idx43].l_nvkrint = L_NVKRINT_0m;
    outC->_L215.nvkrintArray[idx43].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L215.m_nvktint = kcg_lit_float32(0.0);
  outC->_L214.valid = kcg_true;
  outC->_L214.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L214.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L212 = kcg_true;
  outC->_L211 = kcg_true;
  outC->_L210 = kcg_true;
  for (idx44 = 0; idx44 < 100; idx44++) {
    outC->_L208.distance_definition[idx44] = kcg_lit_float32(0.0);
  }
  for (idx45 = 0; idx45 < 14; idx45++) {
    outC->_L208.speed_definition[idx45] = kcg_lit_float32(0.0);
  }
  for (idx47 = 0; idx47 < 14; idx47++) {
    for (idx46 = 0; idx46 < 100; idx46++) {
      outC->_L208.data[idx47][idx46] = kcg_lit_float32(0.0);
    }
  }
  for (idx48 = 0; idx48 < 100; idx48++) {
    outC->_L206.distance_definition[idx48] = kcg_lit_float32(0.0);
  }
  for (idx49 = 0; idx49 < 14; idx49++) {
    outC->_L206.speed_definition[idx49] = kcg_lit_float32(0.0);
  }
  for (idx51 = 0; idx51 < 14; idx51++) {
    for (idx50 = 0; idx50 < 100; idx50++) {
      outC->_L206.data[idx51][idx50] = kcg_lit_float32(0.0);
    }
  }
  outC->_L196.updatedTargetList = kcg_true;
  for (idx52 = 0; idx52 < 110; idx52++) {
    outC->_L196.MRSP_targetList[idx52].targetType = EoA_TargetManagement_types;
    outC->_L196.MRSP_targetList[idx52].distance = kcg_lit_float32(0.0);
    outC->_L196.MRSP_targetList[idx52].speed = kcg_lit_float32(0.0);
  }
  outC->_L196.EOA_target.targetType = EoA_TargetManagement_types;
  outC->_L196.EOA_target.distance = kcg_lit_float32(0.0);
  outC->_L196.EOA_target.speed = kcg_lit_float32(0.0);
  outC->_L196.SvL_LoA_target.targetType = EoA_TargetManagement_types;
  outC->_L196.SvL_LoA_target.distance = kcg_lit_float32(0.0);
  outC->_L196.SvL_LoA_target.speed = kcg_lit_float32(0.0);
  for (idx53 = 0; idx53 < 100; idx53++) {
    outC->_L190[idx53].position = kcg_lit_float32(0.0);
    outC->_L190[idx53].gradient_acceleration = kcg_lit_float32(0.0);
    outC->_L190[idx53].valid = kcg_true;
  }
  outC->_L193.valid = kcg_true;
  outC->_L193.acknowledgedByDriver = kcg_true;
  outC->_L193.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L193.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L193.trainLength = kcg_lit_int32(0);
  outC->_L193.brakePerctage = kcg_lit_int32(0);
  outC->_L193.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L193.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L193.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L193.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L193.axleNumber = kcg_lit_int32(0);
  outC->_L193.numberNationalSystems = kcg_lit_int32(0);
  for (idx54 = 0; idx54 < 5; idx54++) {
    outC->_L193.nationSystems[idx54] = kcg_lit_int32(0);
  }
  outC->_L193.numberTractionSystems = kcg_lit_int32(0);
  for (idx55 = 0; idx55 < 4; idx55++) {
    outC->_L193.tractionSystem[idx55].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L193.tractionSystem[idx55].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx56 = 0; idx56 < 50; idx56++) {
    outC->_L189[idx56].location = kcg_lit_float32(0.0);
    outC->_L189[idx56].gradient = kcg_lit_float32(0.0);
    outC->_L189[idx56].valid = kcg_true;
  }
  for (idx57 = 0; idx57 < 100; idx57++) {
    outC->_L186.distance_definition[idx57] = kcg_lit_float32(0.0);
  }
  for (idx58 = 0; idx58 < 14; idx58++) {
    outC->_L186.speed_definition[idx58] = kcg_lit_float32(0.0);
  }
  for (idx60 = 0; idx60 < 14; idx60++) {
    for (idx59 = 0; idx59 < 100; idx59++) {
      outC->_L186.data[idx60][idx59] = kcg_lit_float32(0.0);
    }
  }
  for (idx61 = 0; idx61 < 100; idx61++) {
    outC->_L187.distance_definition[idx61] = kcg_lit_float32(0.0);
  }
  for (idx62 = 0; idx62 < 14; idx62++) {
    outC->_L187.speed_definition[idx62] = kcg_lit_float32(0.0);
  }
  for (idx64 = 0; idx64 < 14; idx64++) {
    for (idx63 = 0; idx63 < 100; idx63++) {
      outC->_L187.data[idx64][idx63] = kcg_lit_float32(0.0);
    }
  }
  outC->_L185.isSB_FBAvailable = kcg_true;
  outC->_L185.isSB_CmdAvailable = kcg_true;
  outC->_L185.isTCOAvailable = kcg_true;
  outC->_L185.T_traction_cut_off = kcg_lit_int32(0);
  outC->_L185.offsetAntennaL1 = kcg_lit_int32(0);
  outC->_L185.T_b_limit = kcg_lit_int32(0);
  outC->_L163 = kcg_true;
  outC->_L162.freshMA = kcg_true;
  outC->_L162.MA.valid = kcg_true;
  outC->_L162.MA.Level = MA_L1_TrackAtlasTypes;
  outC->_L162.MA.q_dir = Q_DIR_Reverse;
  outC->_L162.MA.v_main = kcg_lit_int32(0);
  outC->_L162.MA.v_loa = kcg_lit_int32(0);
  outC->_L162.MA.t_loa_unlimited = kcg_true;
  outC->_L162.MA.t_loa = kcg_lit_int32(0);
  outC->_L162.MA.n_iter = kcg_lit_int32(0);
  for (idx65 = 0; idx65 < 10; idx65++) {
    outC->_L162.MA.sections[idx65].valid = kcg_true;
    outC->_L162.MA.sections[idx65].q_endsection = kcg_true;
    outC->_L162.MA.sections[idx65].l_section = kcg_lit_int32(0);
    outC->_L162.MA.sections[idx65].q_sectiontimer = kcg_true;
    outC->_L162.MA.sections[idx65].t_sectiontimer = kcg_lit_int32(0);
    outC->_L162.MA.sections[idx65].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L162.MA.q_dangerpoint = kcg_true;
  outC->_L162.MA.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L162.MA.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L162.MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L162.MA.q_overlap = kcg_true;
  outC->_L162.MA.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L162.MA.overlap.v_release = kcg_lit_int32(0);
  outC->_L162.MA.overlap.calc_v_release_onboard = kcg_true;
  outC->_L162.MA.q_endtimer = kcg_true;
  outC->_L162.MA.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L162.MA.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L162.freshGradientProfile = kcg_true;
  for (idx66 = 0; idx66 < 50; idx66++) {
    outC->_L162.GradientProfile[idx66].valid = kcg_true;
    outC->_L162.GradientProfile[idx66].Loc_Absolute = kcg_lit_int32(0);
    outC->_L162.GradientProfile[idx66].Loc_LRBG = kcg_lit_int32(0);
    outC->_L162.GradientProfile[idx66].Gradient = kcg_lit_int32(0);
    outC->_L162.GradientProfile[idx66].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L162.freshMRSP = kcg_true;
  for (idx67 = 0; idx67 < 110; idx67++) {
    outC->_L162.MRSP[idx67].valid = kcg_true;
    outC->_L162.MRSP[idx67].Loc_Abs = kcg_lit_int32(0);
    outC->_L162.MRSP[idx67].Loc_LRBG = kcg_lit_int32(0);
    outC->_L162.MRSP[idx67].MRS = kcg_lit_int32(0);
  }
  outC->_L143.valid = kcg_true;
  outC->_L143.acknowledgedByDriver = kcg_true;
  outC->_L143.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L143.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L143.trainLength = kcg_lit_int32(0);
  outC->_L143.brakePerctage = kcg_lit_int32(0);
  outC->_L143.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L143.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L143.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L143.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L143.axleNumber = kcg_lit_int32(0);
  outC->_L143.numberNationalSystems = kcg_lit_int32(0);
  for (idx68 = 0; idx68 < 5; idx68++) {
    outC->_L143.nationSystems[idx68] = kcg_lit_int32(0);
  }
  outC->_L143.numberTractionSystems = kcg_lit_int32(0);
  for (idx69 = 0; idx69 < 4; idx69++) {
    outC->_L143.tractionSystem[idx69].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L143.tractionSystem[idx69].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L141.valid = kcg_true;
  outC->_L141.q_dir = Q_DIR_Reverse;
  outC->_L141.d_validnv = kcg_lit_int32(0);
  for (idx70 = 0; idx70 < 7; idx70++) {
    outC->_L141.nid_cArray[idx70].valid = kcg_true;
    outC->_L141.nid_cArray[idx70].nid_c = kcg_lit_int32(0);
  }
  outC->_L141.v_nvshunt = kcg_lit_int32(0);
  outC->_L141.v_nvstff = kcg_lit_int32(0);
  outC->_L141.v_nvonsight = kcg_lit_int32(0);
  outC->_L141.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L141.v_nvunfit = kcg_lit_int32(0);
  outC->_L141.v_nvrel = kcg_lit_int32(0);
  outC->_L141.d_nvroll = kcg_lit_int32(0);
  outC->_L141.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L141.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L141.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L141.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L141.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L141.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L141.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L141.d_nvovtrp = kcg_lit_int32(0);
  outC->_L141.t_nvovtrp = kcg_lit_int32(0);
  outC->_L141.d_nvpotrp = kcg_lit_int32(0);
  outC->_L141.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L141.t_nvcontact = kcg_lit_int32(0);
  outC->_L141.m_nvderun = M_NVDERUN_No;
  outC->_L141.d_nvstff = kcg_lit_int32(0);
  outC->_L141.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L141.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L141.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L141.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L141.q_nvlocacc = kcg_lit_int32(0);
  outC->_L141.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L141.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L141.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx72 = 0; idx72 < 7; idx72++) {
    outC->_L141.nvkvintsetArray[idx72].valid = kcg_true;
    outC->_L141.nvkvintsetArray[idx72].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L141.nvkvintsetArray[idx72].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L141.nvkvintsetArray[idx72].a_nvp23 = kcg_lit_float32(0.0);
    for (idx71 = 0; idx71 < 7; idx71++) {
      outC->_L141.nvkvintsetArray[idx72].nvkintArray[idx71].valid = kcg_true;
      outC->_L141.nvkvintsetArray[idx72].nvkintArray[idx71].v_nvkvint =
        kcg_lit_int32(0);
      outC->_L141.nvkvintsetArray[idx72].nvkintArray[idx71].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L141.nvkvintsetArray[idx72].nvkintArray[idx71].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx73 = 0; idx73 < 7; idx73++) {
    outC->_L141.nvkrintArray[idx73].valid = kcg_true;
    outC->_L141.nvkrintArray[idx73].l_nvkrint = L_NVKRINT_0m;
    outC->_L141.nvkrintArray[idx73].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L141.m_nvktint = kcg_lit_float32(0.0);
  for (idx74 = 0; idx74 < 2; idx74++) {
    outC->_L139.emergency[idx74] = kcg_lit_float32(0.0);
  }
  for (idx75 = 0; idx75 < 2; idx75++) {
    outC->_L139.service[idx75] = kcg_lit_float32(0.0);
  }
  outC->_L111.V_est = kcg_lit_int32(0);
  outC->_L111.V_MRSP = kcg_lit_int32(0);
  outC->_L111.V_release = kcg_lit_int32(0);
  outC->_L111.V_target = kcg_lit_int32(0);
  outC->_L111.v_p_mrdt = kcg_lit_int32(0);
  outC->_L111.v_p_dmi = kcg_lit_int32(0);
  outC->_L111.v_sbi_mrdt = kcg_lit_int32(0);
  outC->_L111.v_FLOI_dmi = kcg_lit_int32(0);
  outC->_L111.dV_warning_V_MRSP = kcg_lit_int32(0);
  outC->_L111.dV_warning_V_target = kcg_lit_int32(0);
  outC->_L111.dV_sbi_V_MRSP = kcg_lit_int32(0);
  outC->_L111.dV_sbi_V_target = kcg_lit_int32(0);
  outC->_L111.dV_ebi_V_MRSP = kcg_lit_int32(0);
  outC->_L111.dV_ebi_V_target = kcg_lit_int32(0);
  outC->_L111.OdoStandStill = kcg_true;
  outC->_L112.SBD_preindication_location = kcg_lit_int32(0);
  outC->_L112.EBD_preindication_location = kcg_lit_int32(0);
  outC->_L112.EBD_RSM_start_location = kcg_lit_int32(0);
  outC->_L112.SBD_RSM_start_location = kcg_lit_int32(0);
  outC->_L112.d_I_of_V_est = kcg_lit_int32(0);
  outC->_L112.d_I_of_V_MRSP = kcg_lit_int32(0);
  outC->_L112.d_P_of_V_est = kcg_lit_int32(0);
  outC->_L112.d_W_of_V_est = kcg_lit_int32(0);
  outC->_L112.d_FLOI_of_V_est = kcg_lit_int32(0);
  outC->_L112.d_EBI_of_V_est = kcg_lit_int32(0);
  outC->_L112.FLOI_of_V_est = kcg_lit_int32(0);
  outC->_L112.SBI1_of_V_est = kcg_lit_int32(0);
  outC->_L112.SBI2_of_V_est = kcg_lit_int32(0);
  outC->_L112.d_target = kcg_lit_int32(0);
  outC->_L112.d_eoa = kcg_lit_int32(0);
  outC->_L112.d_svl = kcg_lit_int32(0);
  outC->_L112.Preindication_EBD_location_valid = kcg_true;
  outC->_L112.Preindication_SBD_location_valid = kcg_true;
  outC->_L112.RSM_start_location_EBD_valid = kcg_true;
  outC->_L112.RSM_start_location_SBD_valid = kcg_true;
  outC->_L113.targetType = EoA_TargetManagement_types;
  outC->_L113.distance = kcg_lit_int32(0);
  outC->_L113.speed = kcg_lit_int32(0);
  outC->_L113.valid = kcg_true;
  outC->_L114 = kcg_true;
  outC->_L102.updatedTargetList = kcg_true;
  for (idx76 = 0; idx76 < 110; idx76++) {
    outC->_L102.MRSP_targetList[idx76].targetType = EoA_TargetManagement_types;
    outC->_L102.MRSP_targetList[idx76].distance = kcg_lit_float32(0.0);
    outC->_L102.MRSP_targetList[idx76].speed = kcg_lit_float32(0.0);
  }
  outC->_L102.EOA_target.targetType = EoA_TargetManagement_types;
  outC->_L102.EOA_target.distance = kcg_lit_float32(0.0);
  outC->_L102.EOA_target.speed = kcg_lit_float32(0.0);
  outC->_L102.SvL_LoA_target.targetType = EoA_TargetManagement_types;
  outC->_L102.SvL_LoA_target.distance = kcg_lit_float32(0.0);
  outC->_L102.SvL_LoA_target.speed = kcg_lit_float32(0.0);
  for (idx77 = 0; idx77 < 110; idx77++) {
    outC->_L98[idx77].Loc_Abs = kcg_lit_float32(0.0);
    outC->_L98[idx77].MRS = kcg_lit_float32(0.0);
    outC->_L98[idx77].valid = kcg_true;
  }
  outC->_L97.updatedTargetList = kcg_true;
  for (idx78 = 0; idx78 < 110; idx78++) {
    outC->_L97.MRSP_targetList[idx78].targetType = EoA_TargetManagement_types;
    outC->_L97.MRSP_targetList[idx78].distance = kcg_lit_float32(0.0);
    outC->_L97.MRSP_targetList[idx78].speed = kcg_lit_float32(0.0);
  }
  outC->_L97.EOA_target.targetType = EoA_TargetManagement_types;
  outC->_L97.EOA_target.distance = kcg_lit_float32(0.0);
  outC->_L97.EOA_target.speed = kcg_lit_float32(0.0);
  outC->_L97.SvL_LoA_target.targetType = EoA_TargetManagement_types;
  outC->_L97.SvL_LoA_target.distance = kcg_lit_float32(0.0);
  outC->_L97.SvL_LoA_target.speed = kcg_lit_float32(0.0);
  outC->_L96.trainPositionIsValid = kcg_true;
  outC->_L96.d_est_frontendPos = kcg_lit_float32(0.0);
  outC->_L96.d_minSafeFrontEndPos = kcg_lit_float32(0.0);
  outC->_L96.d_maxSafeFrontEndPos = kcg_lit_float32(0.0);
  outC->_L96.d_LRBG = kcg_lit_float32(0.0);
  outC->_L96.d_accLRBG = kcg_lit_float32(0.0);
  outC->_L94 = kcg_lit_int32(0);
  outC->_L86.trainPositionIsValid = kcg_true;
  outC->_L86.d_est_frontendPos = kcg_lit_float32(0.0);
  outC->_L86.d_minSafeFrontEndPos = kcg_lit_float32(0.0);
  outC->_L86.d_maxSafeFrontEndPos = kcg_lit_float32(0.0);
  outC->_L86.d_LRBG = kcg_lit_float32(0.0);
  outC->_L86.d_accLRBG = kcg_lit_float32(0.0);
  outC->_L81.updatedTargetList = kcg_true;
  for (idx79 = 0; idx79 < 110; idx79++) {
    outC->_L81.MRSP_targetList[idx79].targetType = EoA_TargetManagement_types;
    outC->_L81.MRSP_targetList[idx79].distance = kcg_lit_float32(0.0);
    outC->_L81.MRSP_targetList[idx79].speed = kcg_lit_float32(0.0);
  }
  outC->_L81.EOA_target.targetType = EoA_TargetManagement_types;
  outC->_L81.EOA_target.distance = kcg_lit_float32(0.0);
  outC->_L81.EOA_target.speed = kcg_lit_float32(0.0);
  outC->_L81.SvL_LoA_target.targetType = EoA_TargetManagement_types;
  outC->_L81.SvL_LoA_target.distance = kcg_lit_float32(0.0);
  outC->_L81.SvL_LoA_target.speed = kcg_lit_float32(0.0);
  outC->_L65.valid = kcg_true;
  outC->_L65.estimatedSpeed = kcg_lit_int32(0);
  outC->_L65.valid_v_est = kcg_true;
  outC->_L65.permittedSpeed = kcg_lit_int32(0);
  outC->_L65.valid_v_permitted = kcg_true;
  outC->_L65.releaseSpeed = kcg_lit_int32(0);
  outC->_L65.valid_v_release = kcg_true;
  outC->_L65.mrdtSpeed = kcg_lit_int32(0);
  outC->_L65.valid_v_mrdt = kcg_true;
  outC->_L65.sbiSpeed = kcg_lit_int32(0);
  outC->_L65.valid_v_sbi = kcg_true;
  outC->_L65.targetDistance = kcg_lit_int32(0);
  outC->_L65.valid_targetDistance = kcg_true;
  outC->_L65.supervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->_L65.sdmType = CSM_SDM_Types_Pkg;
  outC->_L65.revokedSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->_L65.triggeredSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->_L65.revokedSB = kcg_true;
  outC->_L65.triggeredSB = kcg_true;
  outC->_L65.revokedEB = kcg_true;
  outC->_L65.triggeredEB = kcg_true;
  outC->_L65.revokedTCO = kcg_true;
  outC->_L65.triggeredTCO = kcg_true;
  outC->_L65.ebCmd = kcg_true;
  outC->_L66 = kcg_true;
  outC->_L59 = kcg_true;
  outC->_L58 = kcg_true;
  outC->_L55.valid = kcg_true;
  outC->_L55.v_main = kcg_lit_float32(0.0);
  outC->_L55.EOA.Location = kcg_lit_float32(0.0);
  outC->_L55.EOA.TargetSpeed = kcg_lit_float32(0.0);
  outC->_L55.DP_valid = kcg_true;
  outC->_L55.DangerPoint = kcg_lit_float32(0.0);
  outC->_L55.OL_valid = kcg_true;
  outC->_L55.Overlap = kcg_lit_float32(0.0);
  outC->_L55.q_calculate_release = kcg_true;
  outC->_L55.ReleaseSpeed = kcg_lit_float32(0.0);
  outC->_L55.level = MA_L1_TrackAtlasTypes;
  for (idx80 = 0; idx80 < 110; idx80++) {
    outC->_L54[idx80].Loc_Abs = kcg_lit_float32(0.0);
    outC->_L54[idx80].MRS = kcg_lit_float32(0.0);
    outC->_L54[idx80].valid = kcg_true;
  }
  outC->_L48.trainPositionIsValid = kcg_true;
  outC->_L48.d_est_frontendPos = kcg_lit_float32(0.0);
  outC->_L48.d_minSafeFrontEndPos = kcg_lit_float32(0.0);
  outC->_L48.d_maxSafeFrontEndPos = kcg_lit_float32(0.0);
  outC->_L48.d_LRBG = kcg_lit_float32(0.0);
  outC->_L48.d_accLRBG = kcg_lit_float32(0.0);
  for (idx85 = 0; idx85 < 110; idx85++) {
    for (idx81 = 0; idx81 < 114; idx81++) {
      outC->_L43.MRSP_EBD_curves[idx85].distances[idx81] = kcg_lit_float32(0.0);
    }
    for (idx82 = 0; idx82 < 114; idx82++) {
      outC->_L43.MRSP_EBD_curves[idx85].speeds[idx82] = kcg_lit_float32(0.0);
    }
    for (idx83 = 0; idx83 < 114; idx83++) {
      outC->_L43.MRSP_EBD_curves[idx85].accelerations[idx83] = kcg_lit_float32(0.0);
    }
    for (idx84 = 0; idx84 < 114; idx84++) {
      outC->_L43.MRSP_EBD_curves[idx85].valid[idx84] = kcg_true;
    }
  }
  for (idx86 = 0; idx86 < 114; idx86++) {
    outC->_L43.EOA_SBD_curve.distances[idx86] = kcg_lit_float32(0.0);
  }
  for (idx87 = 0; idx87 < 114; idx87++) {
    outC->_L43.EOA_SBD_curve.speeds[idx87] = kcg_lit_float32(0.0);
  }
  for (idx88 = 0; idx88 < 114; idx88++) {
    outC->_L43.EOA_SBD_curve.accelerations[idx88] = kcg_lit_float32(0.0);
  }
  for (idx89 = 0; idx89 < 114; idx89++) {
    outC->_L43.EOA_SBD_curve.valid[idx89] = kcg_true;
  }
  for (idx90 = 0; idx90 < 114; idx90++) {
    outC->_L43.SvL_LoA_EBD_curve.distances[idx90] = kcg_lit_float32(0.0);
  }
  for (idx91 = 0; idx91 < 114; idx91++) {
    outC->_L43.SvL_LoA_EBD_curve.speeds[idx91] = kcg_lit_float32(0.0);
  }
  for (idx92 = 0; idx92 < 114; idx92++) {
    outC->_L43.SvL_LoA_EBD_curve.accelerations[idx92] = kcg_lit_float32(0.0);
  }
  for (idx93 = 0; idx93 < 114; idx93++) {
    outC->_L43.SvL_LoA_EBD_curve.valid[idx93] = kcg_true;
  }
  for (idx94 = 0; idx94 < 114; idx94++) {
    outC->_L43.GUI_curve.distances[idx94] = kcg_lit_float32(0.0);
  }
  for (idx95 = 0; idx95 < 114; idx95++) {
    outC->_L43.GUI_curve.speeds[idx95] = kcg_lit_float32(0.0);
  }
  for (idx96 = 0; idx96 < 114; idx96++) {
    outC->_L43.GUI_curve.accelerations[idx96] = kcg_lit_float32(0.0);
  }
  for (idx97 = 0; idx97 < 114; idx97++) {
    outC->_L43.GUI_curve.valid[idx97] = kcg_true;
  }
  outC->_L43.GUI_curve_enabled = kcg_true;
  outC->_L34.nid_engine = kcg_lit_int32(0);
  outC->_L34.nid_operational = kcg_lit_int32(0);
  outC->_L34.l_train = kcg_lit_int32(0);
  outC->_L34.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L34.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L34.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L34.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L34.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L34.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L34.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L34.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L34.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L34.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L34.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L34.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L24.valid = kcg_true;
  outC->_L24.timestamp = kcg_lit_int32(0);
  outC->_L24.odo.o_nominal = kcg_lit_int32(0);
  outC->_L24.odo.o_min = kcg_lit_int32(0);
  outC->_L24.odo.o_max = kcg_lit_int32(0);
  outC->_L24.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L24.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L24.speed.v_lower = kcg_lit_int32(0);
  outC->_L24.speed.v_upper = kcg_lit_int32(0);
  outC->_L24.acceleration = kcg_lit_int32(0);
  outC->_L24.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L24.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L22.valid = kcg_true;
  outC->_L22.timestamp = kcg_lit_int32(0);
  outC->_L22.trainPositionIsUnknown = kcg_true;
  outC->_L22.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L22.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L22.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L22.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L22.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L22.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L22.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L22.LRBG.valid = kcg_true;
  outC->_L22.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L22.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L22.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L22.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L22.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L22.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L22.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L22.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L22.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L22.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L22.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L22.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L22.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L22.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L22.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L22.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L22.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L22.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L22.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L22.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L22.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L22.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L22.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L22.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L22.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L22.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L22.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx98 = 0; idx98 < 33; idx98++) {
    outC->_L22.LRBG.infoFromPassing.linkedBGs[idx98].valid = kcg_true;
    outC->_L22.LRBG.infoFromPassing.linkedBGs[idx98].nid_LRBG = kcg_lit_int32(0);
    outC->_L22.LRBG.infoFromPassing.linkedBGs[idx98].q_dir = Q_DIR_Reverse;
    outC->_L22.LRBG.infoFromPassing.linkedBGs[idx98].q_scale = Q_SCALE_10_cm_scale;
    outC->_L22.LRBG.infoFromPassing.linkedBGs[idx98].d_link = kcg_lit_int32(0);
    outC->_L22.LRBG.infoFromPassing.linkedBGs[idx98].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L22.LRBG.infoFromPassing.linkedBGs[idx98].nid_c = kcg_lit_int32(0);
    outC->_L22.LRBG.infoFromPassing.linkedBGs[idx98].nid_bg = kcg_lit_int32(0);
    outC->_L22.LRBG.infoFromPassing.linkedBGs[idx98].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L22.LRBG.infoFromPassing.linkedBGs[idx98].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L22.LRBG.infoFromPassing.linkedBGs[idx98].q_locacc = kcg_lit_int32(0);
  }
  outC->_L22.LRBG.missed = kcg_true;
  outC->_L22.prvLRBG.valid = kcg_true;
  outC->_L22.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L22.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L22.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L22.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L22.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L22.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L22.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L22.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L22.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L22.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L22.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L22.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L22.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L22.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L22.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx99 = 0; idx99 < 33; idx99++) {
    outC->_L22.prvLRBG.infoFromPassing.linkedBGs[idx99].valid = kcg_true;
    outC->_L22.prvLRBG.infoFromPassing.linkedBGs[idx99].nid_LRBG = kcg_lit_int32(0);
    outC->_L22.prvLRBG.infoFromPassing.linkedBGs[idx99].q_dir = Q_DIR_Reverse;
    outC->_L22.prvLRBG.infoFromPassing.linkedBGs[idx99].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L22.prvLRBG.infoFromPassing.linkedBGs[idx99].d_link = kcg_lit_int32(0);
    outC->_L22.prvLRBG.infoFromPassing.linkedBGs[idx99].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L22.prvLRBG.infoFromPassing.linkedBGs[idx99].nid_c = kcg_lit_int32(0);
    outC->_L22.prvLRBG.infoFromPassing.linkedBGs[idx99].nid_bg = kcg_lit_int32(0);
    outC->_L22.prvLRBG.infoFromPassing.linkedBGs[idx99].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L22.prvLRBG.infoFromPassing.linkedBGs[idx99].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L22.prvLRBG.infoFromPassing.linkedBGs[idx99].q_locacc = kcg_lit_int32(0);
  }
  outC->_L22.prvLRBG.missed = kcg_true;
  outC->_L22.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L22.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L22.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L22.linkingIsUsedOnboard = kcg_true;
  outC->_L22.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L22.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L22.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L21.valid = kcg_true;
  outC->_L21.q_dir = Q_DIR_Reverse;
  outC->_L21.d_validnv = kcg_lit_int32(0);
  for (idx100 = 0; idx100 < 7; idx100++) {
    outC->_L21.nid_cArray[idx100].valid = kcg_true;
    outC->_L21.nid_cArray[idx100].nid_c = kcg_lit_int32(0);
  }
  outC->_L21.v_nvshunt = kcg_lit_int32(0);
  outC->_L21.v_nvstff = kcg_lit_int32(0);
  outC->_L21.v_nvonsight = kcg_lit_int32(0);
  outC->_L21.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L21.v_nvunfit = kcg_lit_int32(0);
  outC->_L21.v_nvrel = kcg_lit_int32(0);
  outC->_L21.d_nvroll = kcg_lit_int32(0);
  outC->_L21.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L21.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L21.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L21.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L21.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L21.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L21.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L21.d_nvovtrp = kcg_lit_int32(0);
  outC->_L21.t_nvovtrp = kcg_lit_int32(0);
  outC->_L21.d_nvpotrp = kcg_lit_int32(0);
  outC->_L21.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L21.t_nvcontact = kcg_lit_int32(0);
  outC->_L21.m_nvderun = M_NVDERUN_No;
  outC->_L21.d_nvstff = kcg_lit_int32(0);
  outC->_L21.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L21.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L21.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L21.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L21.q_nvlocacc = kcg_lit_int32(0);
  outC->_L21.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L21.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L21.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx102 = 0; idx102 < 7; idx102++) {
    outC->_L21.nvkvintsetArray[idx102].valid = kcg_true;
    outC->_L21.nvkvintsetArray[idx102].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L21.nvkvintsetArray[idx102].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L21.nvkvintsetArray[idx102].a_nvp23 = kcg_lit_float32(0.0);
    for (idx101 = 0; idx101 < 7; idx101++) {
      outC->_L21.nvkvintsetArray[idx102].nvkintArray[idx101].valid = kcg_true;
      outC->_L21.nvkvintsetArray[idx102].nvkintArray[idx101].v_nvkvint =
        kcg_lit_int32(0);
      outC->_L21.nvkvintsetArray[idx102].nvkintArray[idx101].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L21.nvkvintsetArray[idx102].nvkintArray[idx101].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx103 = 0; idx103 < 7; idx103++) {
    outC->_L21.nvkrintArray[idx103].valid = kcg_true;
    outC->_L21.nvkrintArray[idx103].l_nvkrint = L_NVKRINT_0m;
    outC->_L21.nvkrintArray[idx103].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L21.m_nvktint = kcg_lit_float32(0.0);
  outC->_L3.valid = kcg_true;
  outC->_L3.targetSpeed = kcg_lit_int32(0);
  outC->_L3.permittedSpeed = kcg_lit_int32(0);
  outC->_L3.releaseSpeed = kcg_lit_int32(0);
  outC->_L3.locationBrakeTarget = kcg_lit_int32(0);
  outC->_L3.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L3.interventionSpeed = kcg_lit_int32(0);
  outC->_L3.sup_status = CSM_DMI_Types_Pkg;
  outC->_L3.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->_L3.distanceIndicationPoint = kcg_lit_int32(0);
  outC->sdmToDMILocal.valid = kcg_true;
  outC->sdmToDMILocal.targetSpeed = kcg_lit_int32(0);
  outC->sdmToDMILocal.permittedSpeed = kcg_lit_int32(0);
  outC->sdmToDMILocal.releaseSpeed = kcg_lit_int32(0);
  outC->sdmToDMILocal.locationBrakeTarget = kcg_lit_int32(0);
  outC->sdmToDMILocal.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->sdmToDMILocal.interventionSpeed = kcg_lit_int32(0);
  outC->sdmToDMILocal.sup_status = CSM_DMI_Types_Pkg;
  outC->sdmToDMILocal.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->sdmToDMILocal.distanceIndicationPoint = kcg_lit_int32(0);
  for (idx108 = 0; idx108 < 110; idx108++) {
    for (idx104 = 0; idx104 < 114; idx104++) {
      outC->CurveCollection.MRSP_EBD_curves[idx108].distances[idx104] =
        kcg_lit_float32(0.0);
    }
    for (idx105 = 0; idx105 < 114; idx105++) {
      outC->CurveCollection.MRSP_EBD_curves[idx108].speeds[idx105] =
        kcg_lit_float32(0.0);
    }
    for (idx106 = 0; idx106 < 114; idx106++) {
      outC->CurveCollection.MRSP_EBD_curves[idx108].accelerations[idx106] =
        kcg_lit_float32(0.0);
    }
    for (idx107 = 0; idx107 < 114; idx107++) {
      outC->CurveCollection.MRSP_EBD_curves[idx108].valid[idx107] = kcg_true;
    }
  }
  for (idx109 = 0; idx109 < 114; idx109++) {
    outC->CurveCollection.EOA_SBD_curve.distances[idx109] = kcg_lit_float32(0.0);
  }
  for (idx110 = 0; idx110 < 114; idx110++) {
    outC->CurveCollection.EOA_SBD_curve.speeds[idx110] = kcg_lit_float32(0.0);
  }
  for (idx111 = 0; idx111 < 114; idx111++) {
    outC->CurveCollection.EOA_SBD_curve.accelerations[idx111] = kcg_lit_float32(
        0.0);
  }
  for (idx112 = 0; idx112 < 114; idx112++) {
    outC->CurveCollection.EOA_SBD_curve.valid[idx112] = kcg_true;
  }
  for (idx113 = 0; idx113 < 114; idx113++) {
    outC->CurveCollection.SvL_LoA_EBD_curve.distances[idx113] = kcg_lit_float32(
        0.0);
  }
  for (idx114 = 0; idx114 < 114; idx114++) {
    outC->CurveCollection.SvL_LoA_EBD_curve.speeds[idx114] = kcg_lit_float32(0.0);
  }
  for (idx115 = 0; idx115 < 114; idx115++) {
    outC->CurveCollection.SvL_LoA_EBD_curve.accelerations[idx115] =
      kcg_lit_float32(0.0);
  }
  for (idx116 = 0; idx116 < 114; idx116++) {
    outC->CurveCollection.SvL_LoA_EBD_curve.valid[idx116] = kcg_true;
  }
  for (idx117 = 0; idx117 < 114; idx117++) {
    outC->CurveCollection.GUI_curve.distances[idx117] = kcg_lit_float32(0.0);
  }
  for (idx118 = 0; idx118 < 114; idx118++) {
    outC->CurveCollection.GUI_curve.speeds[idx118] = kcg_lit_float32(0.0);
  }
  for (idx119 = 0; idx119 < 114; idx119++) {
    outC->CurveCollection.GUI_curve.accelerations[idx119] = kcg_lit_float32(0.0);
  }
  for (idx120 = 0; idx120 < 114; idx120++) {
    outC->CurveCollection.GUI_curve.valid[idx120] = kcg_true;
  }
  outC->CurveCollection.GUI_curve_enabled = kcg_true;
  outC->MRDT.targetType = EoA_TargetManagement_types;
  outC->MRDT.distance = kcg_lit_int32(0);
  outC->MRDT.speed = kcg_lit_int32(0);
  outC->MRDT.valid = kcg_true;
  for (idx121 = 0; idx121 < 2; idx121++) {
    outC->T_b.emergency[idx121] = kcg_lit_float32(0.0);
  }
  for (idx122 = 0; idx122 < 2; idx122++) {
    outC->T_b.service[idx122] = kcg_lit_float32(0.0);
  }
  outC->trainData_extras.isSB_FBAvailable = kcg_true;
  outC->trainData_extras.isSB_CmdAvailable = kcg_true;
  outC->trainData_extras.isTCOAvailable = kcg_true;
  outC->trainData_extras.T_traction_cut_off = kcg_lit_int32(0);
  outC->trainData_extras.offsetAntennaL1 = kcg_lit_int32(0);
  outC->trainData_extras.T_b_limit = kcg_lit_int32(0);
  outC->MA_internal.valid = kcg_true;
  outC->MA_internal.v_main = kcg_lit_float32(0.0);
  outC->MA_internal.EOA.Location = kcg_lit_float32(0.0);
  outC->MA_internal.EOA.TargetSpeed = kcg_lit_float32(0.0);
  outC->MA_internal.DP_valid = kcg_true;
  outC->MA_internal.DangerPoint = kcg_lit_float32(0.0);
  outC->MA_internal.OL_valid = kcg_true;
  outC->MA_internal.Overlap = kcg_lit_float32(0.0);
  outC->MA_internal.q_calculate_release = kcg_true;
  outC->MA_internal.ReleaseSpeed = kcg_lit_float32(0.0);
  outC->MA_internal.level = MA_L1_TrackAtlasTypes;
  for (idx123 = 0; idx123 < 110; idx123++) {
    outC->MRSP_internal[idx123].Loc_Abs = kcg_lit_float32(0.0);
    outC->MRSP_internal[idx123].MRS = kcg_lit_float32(0.0);
    outC->MRSP_internal[idx123].valid = kcg_true;
  }
  outC->Trainlocations_internal.trainPositionIsValid = kcg_true;
  outC->Trainlocations_internal.d_est_frontendPos = kcg_lit_float32(0.0);
  outC->Trainlocations_internal.d_minSafeFrontEndPos = kcg_lit_float32(0.0);
  outC->Trainlocations_internal.d_maxSafeFrontEndPos = kcg_lit_float32(0.0);
  outC->Trainlocations_internal.d_LRBG = kcg_lit_float32(0.0);
  outC->Trainlocations_internal.d_accLRBG = kcg_lit_float32(0.0);
  outC->targetCollection.updatedTargetList = kcg_true;
  for (idx124 = 0; idx124 < 110; idx124++) {
    outC->targetCollection.MRSP_targetList[idx124].targetType =
      EoA_TargetManagement_types;
    outC->targetCollection.MRSP_targetList[idx124].distance = kcg_lit_float32(0.0);
    outC->targetCollection.MRSP_targetList[idx124].speed = kcg_lit_float32(0.0);
  }
  outC->targetCollection.EOA_target.targetType = EoA_TargetManagement_types;
  outC->targetCollection.EOA_target.distance = kcg_lit_float32(0.0);
  outC->targetCollection.EOA_target.speed = kcg_lit_float32(0.0);
  outC->targetCollection.SvL_LoA_target.targetType = EoA_TargetManagement_types;
  outC->targetCollection.SvL_LoA_target.distance = kcg_lit_float32(0.0);
  outC->targetCollection.SvL_LoA_target.speed = kcg_lit_float32(0.0);
  outC->Target_Speed_Reached = kcg_true;
  outC->EOA_overpassed = kcg_true;
  outC->brakeCmd.valid = kcg_true;
  outC->brakeCmd.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->brakeCmd.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->sdmCommands.valid = kcg_true;
  outC->sdmCommands.estimatedSpeed = kcg_lit_int32(0);
  outC->sdmCommands.valid_v_est = kcg_true;
  outC->sdmCommands.permittedSpeed = kcg_lit_int32(0);
  outC->sdmCommands.valid_v_permitted = kcg_true;
  outC->sdmCommands.releaseSpeed = kcg_lit_int32(0);
  outC->sdmCommands.valid_v_release = kcg_true;
  outC->sdmCommands.mrdtSpeed = kcg_lit_int32(0);
  outC->sdmCommands.valid_v_mrdt = kcg_true;
  outC->sdmCommands.sbiSpeed = kcg_lit_int32(0);
  outC->sdmCommands.valid_v_sbi = kcg_true;
  outC->sdmCommands.targetDistance = kcg_lit_int32(0);
  outC->sdmCommands.valid_targetDistance = kcg_true;
  outC->sdmCommands.supervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCommands.sdmType = CSM_SDM_Types_Pkg;
  outC->sdmCommands.revokedSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCommands.triggeredSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCommands.revokedSB = kcg_true;
  outC->sdmCommands.triggeredSB = kcg_true;
  outC->sdmCommands.revokedEB = kcg_true;
  outC->sdmCommands.triggeredEB = kcg_true;
  outC->sdmCommands.revokedTCO = kcg_true;
  outC->sdmCommands.triggeredTCO = kcg_true;
  outC->sdmCommands.ebCmd = kcg_true;
  outC->target.targetType = EoA_TargetManagement_types;
  outC->target.distance = kcg_lit_int32(0);
  outC->target.speed = kcg_lit_int32(0);
  outC->target.valid = kcg_true;
  outC->sdmToDMI.valid = kcg_true;
  outC->sdmToDMI.targetSpeed = kcg_lit_int32(0);
  outC->sdmToDMI.permittedSpeed = kcg_lit_int32(0);
  outC->sdmToDMI.releaseSpeed = kcg_lit_int32(0);
  outC->sdmToDMI.locationBrakeTarget = kcg_lit_int32(0);
  outC->sdmToDMI.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->sdmToDMI.interventionSpeed = kcg_lit_int32(0);
  outC->sdmToDMI.sup_status = CSM_DMI_Types_Pkg;
  outC->sdmToDMI.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->sdmToDMI.distanceIndicationPoint = kcg_lit_int32(0);
  /* _L3=(SDM_Commands_Pkg::SDM_Commands#1)/ */
  SDM_Commands_init_SDM_Commands_Pkg(&outC->Context_SDM_Commands_1);
  /* _L240=(SDM_Input_Wrappers::SimpleValidityCheck#1)/ */
  SimpleValidityCheck_init_SDM_Input_Wrappers(
    &outC->Context_SimpleValidityCheck_1);
  /* _L111=(TargetLimits_Pkg::SDMLimitLocations#4)/ */
  SDMLimitLocations_init_TargetLimits_Pkg(&outC->Context_SDMLimitLocations_4);
  /* _L43=(CalcBrakingCurves_Pkg::CalcBrakingCurves_integration#1)/ */
  CalcBrakingCurves_integration_init_CalcBrakingCurves_Pkg(
    &outC->Context_CalcBrakingCurves_integration_1);
  /* _L206=(SDMModelPkg::addGradient#1)/ */
  addGradient_init_SDMModelPkg(&outC->Context_addGradient_1);
  /* _L208=(SDMModelPkg::addGradient#3)/ */
  addGradient_init_SDMModelPkg(&outC->Context_addGradient_3);
  /* _L190=(SDM_GradientAcceleration_Pkg::AGradient#1)/ */
  AGradient_init_SDM_GradientAcceleration_Pkg(&outC->Context_AGradient_1);
  /* _L139=(SDMModelPkg::ABrakeFactory#1)/ */
  ABrakeFactory_init_SDMModelPkg(&outC->Context_ABrakeFactory_1);
  /* _L81=(TargetManagement_pkg::TargetManagement#2)/ */
  TargetManagement_init_TargetManagement_pkg(&outC->Context_TargetManagement_2);
  /* _L54=(SDM_Input_Wrappers::SDM_InputWrapper#1)/ */
  SDM_InputWrapper_init_SDM_Input_Wrappers(&outC->Context_SDM_InputWrapper_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SpeedSupervision_Integration_reset_SpeedSupervision_Integration_Pkg(
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC)
{
  /* _L3=(SDM_Commands_Pkg::SDM_Commands#1)/ */
  SDM_Commands_reset_SDM_Commands_Pkg(&outC->Context_SDM_Commands_1);
  /* _L240=(SDM_Input_Wrappers::SimpleValidityCheck#1)/ */
  SimpleValidityCheck_reset_SDM_Input_Wrappers(
    &outC->Context_SimpleValidityCheck_1);
  /* _L111=(TargetLimits_Pkg::SDMLimitLocations#4)/ */
  SDMLimitLocations_reset_TargetLimits_Pkg(&outC->Context_SDMLimitLocations_4);
  /* _L43=(CalcBrakingCurves_Pkg::CalcBrakingCurves_integration#1)/ */
  CalcBrakingCurves_integration_reset_CalcBrakingCurves_Pkg(
    &outC->Context_CalcBrakingCurves_integration_1);
  /* _L206=(SDMModelPkg::addGradient#1)/ */
  addGradient_reset_SDMModelPkg(&outC->Context_addGradient_1);
  /* _L208=(SDMModelPkg::addGradient#3)/ */
  addGradient_reset_SDMModelPkg(&outC->Context_addGradient_3);
  /* _L190=(SDM_GradientAcceleration_Pkg::AGradient#1)/ */
  AGradient_reset_SDM_GradientAcceleration_Pkg(&outC->Context_AGradient_1);
  /* _L139=(SDMModelPkg::ABrakeFactory#1)/ */
  ABrakeFactory_reset_SDMModelPkg(&outC->Context_ABrakeFactory_1);
  /* _L81=(TargetManagement_pkg::TargetManagement#2)/ */
  TargetManagement_reset_TargetManagement_pkg(
    &outC->Context_TargetManagement_2);
  /* _L54=(SDM_Input_Wrappers::SDM_InputWrapper#1)/ */
  SDM_InputWrapper_reset_SDM_Input_Wrappers(&outC->Context_SDM_InputWrapper_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg(
  SV_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *SV,
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC)
{
  kcg_save_SV_SDM_InputWrapper_SDM_Input_Wrappers(
    &SV->Context_SDM_InputWrapper_1,
    &outC->Context_SDM_InputWrapper_1);
  kcg_save_SV_TargetManagement_TargetManagement_pkg(
    &SV->Context_TargetManagement_2,
    &outC->Context_TargetManagement_2);
  kcg_save_SV_AGradient_SDM_GradientAcceleration_Pkg(
    &SV->Context_AGradient_1,
    &outC->Context_AGradient_1);
  kcg_save_SV_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg(
    &SV->Context_CalcBrakingCurves_integration_1,
    &outC->Context_CalcBrakingCurves_integration_1);
  kcg_save_SV_SDMLimitLocations_TargetLimits_Pkg(
    &SV->Context_SDMLimitLocations_4,
    &outC->Context_SDMLimitLocations_4);
  kcg_save_SV_SDM_Commands_SDM_Commands_Pkg(
    &SV->Context_SDM_Commands_1,
    &outC->Context_SDM_Commands_1);
}

void kcg_load_SV_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg(
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC,
  SV_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *SV)
{
  kcg_load_SV_SDM_InputWrapper_SDM_Input_Wrappers(
    &outC->Context_SDM_InputWrapper_1,
    &SV->Context_SDM_InputWrapper_1);
  kcg_load_SV_TargetManagement_TargetManagement_pkg(
    &outC->Context_TargetManagement_2,
    &SV->Context_TargetManagement_2);
  kcg_load_SV_AGradient_SDM_GradientAcceleration_Pkg(
    &outC->Context_AGradient_1,
    &SV->Context_AGradient_1);
  kcg_load_SV_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg(
    &outC->Context_CalcBrakingCurves_integration_1,
    &SV->Context_CalcBrakingCurves_integration_1);
  kcg_load_SV_SDMLimitLocations_TargetLimits_Pkg(
    &outC->Context_SDMLimitLocations_4,
    &SV->Context_SDMLimitLocations_4);
  kcg_load_SV_SDM_Commands_SDM_Commands_Pkg(
    &outC->Context_SDM_Commands_1,
    &SV->Context_SDM_Commands_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

