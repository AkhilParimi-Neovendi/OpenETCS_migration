/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDMLimitLocations_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::SDMLimitLocations/ */
void SDMLimitLocations_TargetLimits_Pkg(
  /* MRSP_Profile/ */
  MRSP_internal_T_TargetManagement_types *MRSP_Profile,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* trainLocations/ */
  TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* targetCollection/ */
  TargetCollection_T_TargetManagement_types *targetCollection,
  /* curveCollection/ */
  CurveCollection_T_CalcBrakingCurves_types *curveCollection,
  /* MA/ */
  MA_section_real_T_TargetManagement_types *MA,
  /* T_b/ */
  t_Brake_t_SDMModelPkg *T_b,
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* trainData_int/ */
  trainData_internal_t_SDM_Types_Pkg *trainData_int,
  outC_SDMLimitLocations_TargetLimits_Pkg *outC)
{
  static L_internal_real_Type_SDM_Types_Pkg noname;
  static kcg_bool _1_noname;
  static kcg_bool _2_noname;
  static kcg_bool _3_noname;
  static kcg_bool _4_noname;

  kcg_copy_MRSP_internal_T_TargetManagement_types(&outC->_L996, MRSP_Profile);
  kcg_copy_TargetCollection_T_TargetManagement_types(
    &outC->_L879,
    targetCollection);
  kcg_copy_CurveCollection_T_CalcBrakingCurves_types(
    &outC->_L862,
    curveCollection);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L876, odometry);
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&outC->_L889, trainData_int);
  kcg_copy_t_Brake_t_SDMModelPkg(&outC->_L878, T_b);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L877, NationalValues);
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&outC->_L900, trainLocations);
  /* _L863=(TargetLimits_Pkg::TargetSelector#5)/ */
  TargetSelector_TargetLimits_Pkg(
    &outC->_L879,
    &outC->_L862,
    &outC->_L876,
    &outC->_L889,
    &outC->_L878,
    &outC->_L877,
    &outC->_L900,
    &outC->Context_TargetSelector_5);
  kcg_copy_Target_T_TargetManagement_types(
    &outC->_L863,
    &outC->Context_TargetSelector_5.MostRestrictiveDisplayedTarget);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->_L864,
    &outC->Context_TargetSelector_5.MostRestrictiveEBDCurve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->_L865,
    &outC->Context_TargetSelector_5.SBDcurve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->_L866,
    &outC->Context_TargetSelector_5.GUIcurve);
  outC->_L867 = outC->Context_TargetSelector_5.GUICurveEnabled;
  outC->_L868 = outC->Context_TargetSelector_5.V_Target;
  outC->_L902 = outC->Context_TargetSelector_5.V_P_MRDT;
  outC->_L869 = outC->Context_TargetSelector_5.D_EOA;
  outC->_L870 = outC->Context_TargetSelector_5.D_SvL;
  outC->_L871 = outC->Context_TargetSelector_5.v_est;
  kcg_copy_T_trac_t_TargetLimits_Pkg(
    &outC->_L873,
    &outC->Context_TargetSelector_5.T);
  outC->_L874 = outC->Context_TargetSelector_5.V_ura;
  kcg_copy_bec_t_TargetLimits_Pkg(
    &outC->_L875,
    &outC->Context_TargetSelector_5.bec);
  outC->_L881 = outC->Context_TargetSelector_5.D_SBI2;
  outC->_L882 = outC->Context_TargetSelector_5.valid_D_SBI2;
  outC->_L899 = outC->Context_TargetSelector_5.D_estfront;
  outC->_L898 = outC->Context_TargetSelector_5.D_maxsafefront;
  outC->_L1061 = outC->Context_TargetSelector_5.freshMRDT;
  outC->D_maxsafefront = outC->_L898;
  outC->_L997 = outC->D_maxsafefront;
  /* _L995=(SDM_Types_Pkg::getMRSFromMRSP#1)/ */
  getMRSFromMRSP_SDM_Types_Pkg(
    &outC->_L996,
    outC->_L997,
    &outC->Context_getMRSFromMRSP_1);
  outC->_L995 = outC->Context_getMRSFromMRSP_1.V_MRSP;
  /* _L1067=(SDM_Types_Pkg::TransformV_realToV_odo#21)/ */
  TransformV_realToV_odo_SDM_Types_Pkg(
    outC->_L995,
    &outC->Context_TransformV_realToV_odo_21);
  outC->_L1067 = outC->Context_TransformV_realToV_odo_21.v_odo;
  outC->V_MRSP = outC->_L1067;
  outC->_L923 = outC->V_MRSP;
  /* _L909=(SDM_Types_Pkg::dV_sbi_for_V#2)/ */
  dV_sbi_for_V_SDM_Types_Pkg(outC->_L923, &outC->Context_dV_sbi_for_V_2);
  outC->_L909 = outC->Context_dV_sbi_for_V_2.dv_sbi;
  outC->_L931 = outC->_L923 + outC->_L909;
  outC->I2_Min_1_int64 = outC->_L931;
  outC->_L22_Min_1_int64 = outC->I2_Min_1_int64;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->EBDcurve, &outC->_L864);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L53, &outC->EBDcurve);
  outC->V_est = outC->_L871;
  outC->_L44 = outC->V_est;
  outC->V_target = outC->_L868;
  outC->_L45 = outC->V_target;
  kcg_copy_bec_t_TargetLimits_Pkg(&outC->bec, &outC->_L875);
  kcg_copy_bec_t_TargetLimits_Pkg(&outC->_L35, &outC->bec);
  outC->_L499 = outC->D_maxsafefront;
  outC->_L897 = kcg_lit_float64(0.0);
  outC->_L901 = kcg_false;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->GUIcurve, &outC->_L866);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L894, &outC->GUIcurve);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->T, &outC->_L873);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L57, &outC->T);
  /* _L641=(TargetLimits_Pkg::v_SBI2#1)/ */
  v_SBI2_TargetLimits_Pkg(
    &outC->_L53,
    outC->_L44,
    outC->_L45,
    &outC->_L35,
    outC->_L499,
    outC->_L897,
    outC->_L901,
    &outC->_L894,
    &outC->_L57,
    &outC->Context_v_SBI2_1);
  outC->_L641 = outC->Context_v_SBI2_1.valid;
  outC->_L26 = outC->Context_v_SBI2_1.V_SBI2;
  /* _L1066=(SDM_Types_Pkg::TransformV_realToV_odo#20)/ */
  TransformV_realToV_odo_SDM_Types_Pkg(
    outC->_L26,
    &outC->Context_TransformV_realToV_odo_20);
  outC->_L1066 = outC->Context_TransformV_realToV_odo_20.v_odo;
  outC->freshMRDT = outC->_L1061;
  /* _L1058=(TargetLimits_Pkg::LowerOrHold#2)/ */
  LowerOrHold_TargetLimits_Pkg(
    outC->_L1066,
    (kcg_bool) !outC->freshMRDT,
    &outC->Context_LowerOrHold_2);
  outC->_L1058 = outC->Context_LowerOrHold_2.vo;
  outC->V_SBI2_lim = outC->_L1058;
  outC->_L1052 = outC->V_SBI2_lim;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->SBDcurve, &outC->_L865);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L51, &outC->SBDcurve);
  outC->_L41 = outC->V_est;
  outC->D_est = outC->_L899;
  outC->_L498 = outC->D_est;
  outC->D_EOA = outC->_L869;
  outC->_L341 = outC->D_EOA;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L823, &outC->T);
  /* _L642=(TargetLimits_Pkg::v_SBI1#1)/ */
  v_SBI1_TargetLimits_Pkg(
    &outC->_L51,
    outC->_L41,
    outC->_L498,
    outC->_L341,
    outC->_L897,
    outC->_L901,
    &outC->_L894,
    &outC->_L823,
    &outC->Context_v_SBI1_1);
  outC->_L642 = outC->Context_v_SBI1_1.valid;
  outC->_L25 = outC->Context_v_SBI1_1.V_SBI1;
  /* _L1065=(SDM_Types_Pkg::TransformV_realToV_odo#19)/ */
  TransformV_realToV_odo_SDM_Types_Pkg(
    outC->_L25,
    &outC->Context_TransformV_realToV_odo_19);
  outC->_L1065 = outC->Context_TransformV_realToV_odo_19.v_odo;
  /* _L1057=(TargetLimits_Pkg::LowerOrHold#1)/ */
  LowerOrHold_TargetLimits_Pkg(
    outC->_L1065,
    (kcg_bool) !outC->freshMRDT,
    &outC->Context_LowerOrHold_1);
  outC->_L1057 = outC->Context_LowerOrHold_1.vo;
  outC->V_SBI1_lim = outC->_L1057;
  outC->_L1051 = outC->V_SBI1_lim;
  outC->_L36 = outC->V_est;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L52, &outC->SBDcurve);
  outC->valid_D_SBI2 = outC->_L882;
  outC->_L813 = outC->valid_D_SBI2;
  outC->D_SBI2 = outC->_L881;
  outC->_L812 = outC->D_SBI2;
  outC->_L496 = outC->D_est;
  outC->_L497 = outC->D_maxsafefront;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L821, &outC->T);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L593, &outC->GUIcurve);
  outC->GUICurveEnabled = outC->_L867;
  outC->_L594 = outC->GUICurveEnabled;
  /* _L24=(TargetLimits_Pkg::d_limits#2)/ */
  d_limits_TargetLimits_Pkg(
    outC->_L36,
    &outC->_L52,
    outC->_L813,
    outC->_L812,
    outC->_L496,
    outC->_L497,
    &outC->_L821,
    &outC->_L593,
    outC->_L594,
    &outC->Context_d_limits_2);
  outC->_L24 = outC->Context_d_limits_2.D_I;
  outC->_L23 = outC->Context_d_limits_2.D_P;
  outC->_L22 = outC->Context_d_limits_2.D_W;
  outC->_L21 = outC->Context_d_limits_2.D_FLOI;
  outC->_L69 = outC->Context_d_limits_2.FLOIisSBI1;
  outC->FLOIis1 = outC->_L69;
  outC->_L1076 = outC->FLOIis1;
  /* _L70= */
  if (outC->_L1076) {
    outC->_L70 = outC->_L1051;
  }
  else {
    outC->_L70 = outC->_L1052;
  }
  outC->V_SBI_MRDT = outC->_L70;
  outC->_L937 = outC->V_SBI_MRDT;
  outC->I2_Max_1_int64 = outC->_L937;
  outC->_L2_Max_1_int64 = outC->I2_Max_1_int64;
  outC->_L920 = outC->V_target;
  /* _L1064=(SDM_Types_Pkg::TransformV_realToV_odo#18)/ */
  TransformV_realToV_odo_SDM_Types_Pkg(
    outC->_L920,
    &outC->Context_TransformV_realToV_odo_18);
  outC->_L1064 = outC->Context_TransformV_realToV_odo_18.v_odo;
  /* _L910=(SDM_Types_Pkg::dV_sbi_for_V#1)/ */
  dV_sbi_for_V_SDM_Types_Pkg(outC->_L1064, &outC->Context_dV_sbi_for_V_1);
  outC->_L910 = outC->Context_dV_sbi_for_V_1.dv_sbi;
  outC->_L928 = outC->_L1064 + outC->_L910;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L675, &outC->EBDcurve);
  outC->_L674 = outC->V_target;
  outC->_L694 = outC->D_EOA;
  kcg_copy_MA_section_real_T_TargetManagement_types(&outC->_L702, MA);
  outC->V_ura = outC->_L874;
  outC->_L701 = outC->V_ura;
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&outC->_L834, trainLocations);
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&outC->_L1049, trainData_int);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L833, &outC->T);
  /* _L671=(TargetLimits_Pkg::v_release#1)/ */
  v_release_TargetLimits_Pkg(
    &outC->_L675,
    outC->_L674,
    outC->_L694,
    &outC->_L702,
    outC->_L701,
    &outC->_L834,
    &outC->_L1049,
    &outC->_L833,
    &outC->Context_v_release_1);
  outC->_L671 = outC->Context_v_release_1.V_release;
  outC->_L672 = outC->Context_v_release_1.valid;
  outC->V_release = outC->_L671;
  outC->_L655 = outC->V_release;
  /* _L1029=(SDM_Types_Pkg::TransformV_realToV_odo#13)/ */
  TransformV_realToV_odo_SDM_Types_Pkg(
    outC->_L655,
    &outC->Context_TransformV_realToV_odo_13);
  outC->_L1029 = outC->Context_TransformV_realToV_odo_13.v_odo;
  outC->_L989 = SvL_TargetManagement_types;
  kcg_copy_Target_T_TargetManagement_types(&outC->MRDT, &outC->_L863);
  kcg_copy_Target_T_TargetManagement_types(&outC->_L993, &outC->MRDT);
  outC->_L994 = outC->_L993.targetType;
  outC->_L991 = outC->_L994 == outC->_L989;
  outC->_L990 = EoA_TargetManagement_types;
  outC->_L992 = outC->_L990 == outC->_L994;
  outC->_L988 = outC->_L992 | outC->_L991;
  outC->isEoAorSvL = outC->_L988;
  outC->_L1079 = outC->isEoAorSvL;
  /* _L927= */
  if (outC->_L1079) {
    outC->_L927 = outC->_L1029;
  }
  else {
    outC->_L927 = outC->_L928;
  }
  outC->I1_Max_1_int64 = outC->_L927;
  outC->_L1_Max_1_int64 = outC->I1_Max_1_int64;
  outC->_L3_Max_1_int64 = outC->_L1_Max_1_int64 >= outC->_L2_Max_1_int64;
  /* @2/_L4= */
  if (outC->_L3_Max_1_int64) {
    outC->_L4_Max_1_int64 = outC->_L1_Max_1_int64;
  }
  else {
    outC->_L4_Max_1_int64 = outC->_L2_Max_1_int64;
  }
  outC->Ma_Output_Max_1_int64 = outC->_L4_Max_1_int64;
  outC->_L934 = outC->Ma_Output_Max_1_int64;
  outC->I1_Min_1_int64 = outC->_L934;
  outC->_L21_Min_1_int64 = outC->I1_Min_1_int64;
  outC->_L25_Min_1_int64 = outC->_L21_Min_1_int64 <= outC->_L22_Min_1_int64;
  /* @1/_L24= */
  if (outC->_L25_Min_1_int64) {
    outC->_L24_Min_1_int64 = outC->_L21_Min_1_int64;
  }
  else {
    outC->_L24_Min_1_int64 = outC->_L22_Min_1_int64;
  }
  outC->Mi_Output_Min_1_int64 = outC->_L24_Min_1_int64;
  outC->I2_Min_2_int64 = outC->_L923;
  outC->_L22_Min_2_int64 = outC->I2_Min_2_int64;
  outC->V_P_MRDT = outC->_L902;
  outC->_L903 = outC->V_P_MRDT;
  /* _L1060=(TargetLimits_Pkg::LowerOrHold#3)/ */
  LowerOrHold_TargetLimits_Pkg(
    outC->_L903,
    (kcg_bool) !outC->freshMRDT,
    &outC->Context_LowerOrHold_3);
  outC->_L1060 = outC->Context_LowerOrHold_3.vo;
  outC->I2_Max_2_int64 = outC->_L1060;
  outC->_L2_Max_2_int64 = outC->I2_Max_2_int64;
  outC->_L489 = outC->V_target;
  /* _L1031=(SDM_Types_Pkg::TransformV_realToV_odo#15)/ */
  TransformV_realToV_odo_SDM_Types_Pkg(
    outC->_L489,
    &outC->Context_TransformV_realToV_odo_15);
  outC->_L1031 = outC->Context_TransformV_realToV_odo_15.v_odo;
  outC->I1_Max_2_int64 = outC->_L1031;
  outC->_L1_Max_2_int64 = outC->I1_Max_2_int64;
  outC->_L3_Max_2_int64 = outC->_L1_Max_2_int64 >= outC->_L2_Max_2_int64;
  /* @4/_L4= */
  if (outC->_L3_Max_2_int64) {
    outC->_L4_Max_2_int64 = outC->_L1_Max_2_int64;
  }
  else {
    outC->_L4_Max_2_int64 = outC->_L2_Max_2_int64;
  }
  outC->Ma_Output_Max_2_int64 = outC->_L4_Max_2_int64;
  outC->_L982 = outC->Ma_Output_Max_2_int64;
  outC->I1_Min_2_int64 = outC->_L982;
  outC->_L21_Min_2_int64 = outC->I1_Min_2_int64;
  outC->_L25_Min_2_int64 = outC->_L21_Min_2_int64 <= outC->_L22_Min_2_int64;
  /* @3/_L24= */
  if (outC->_L25_Min_2_int64) {
    outC->_L24_Min_2_int64 = outC->_L21_Min_2_int64;
  }
  else {
    outC->_L24_Min_2_int64 = outC->_L22_Min_2_int64;
  }
  outC->Mi_Output_Min_2_int64 = outC->_L24_Min_2_int64;
  outC->_L1078 = outC->isEoAorSvL;
  outC->_L1070 = outC->FLOIis1;
  outC->_L1075 = !outC->_L1070;
  kcg_copy_MRSP_internal_T_TargetManagement_types(&outC->_L132, MRSP_Profile);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L200, &outC->EBDcurve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L827, &outC->SBDcurve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L508, &outC->GUIcurve);
  outC->_L509 = outC->GUICurveEnabled;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L205, &outC->T);
  /* _L189=(TargetLimits_Pkg::MRSPPreindicationSelector#1)/ */
  MRSPPreindicationSelector_TargetLimits_Pkg(
    &outC->_L132,
    &outC->_L200,
    &outC->_L827,
    &outC->_L508,
    outC->_L509,
    outC->_L992,
    &outC->_L205,
    &outC->Context_MRSPPreindicationSelector_1);
  outC->_L189 = outC->Context_MRSPPreindicationSelector_1.D_preindication;
  outC->_L1050 = outC->Context_MRSPPreindicationSelector_1.D_I_V_MRSP;
  outC->_L191 = outC->Context_MRSPPreindicationSelector_1.valid;
  outC->_L1072 = outC->_L1070 & outC->_L191;
  outC->_L1071 = outC->_L191 & outC->_L1075;
  outC->_L1068 = outC->FLOIis1;
  outC->D_SvL = outC->_L870;
  outC->_L401 = outC->D_SvL;
  /* _L1048=(SDM_Types_Pkg::TransformL_realToL_int#16)/ */
  TransformL_realToL_int_SDM_Types_Pkg(
    outC->_L401,
    &outC->Context_TransformL_realToL_int_16);
  outC->_L1048 = outC->Context_TransformL_realToL_int_16.loc_int;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L349, &outC->EBDcurve);
  outC->_L346 = outC->V_target;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L350, &outC->T);
  /* _L343=(TargetLimits_Pkg::d_P_target#1)/ */
  d_P_target_TargetLimits_Pkg(
    &outC->_L349,
    outC->_L346,
    &outC->_L350,
    &outC->Context_d_P_target_1);
  outC->_L343 = outC->Context_d_P_target_1.valid;
  outC->_L344 = outC->Context_d_P_target_1.D_P_target;
  outC->_L987 = outC->D_maxsafefront;
  outC->_L986 = outC->D_est;
  outC->_L984 = outC->D_SvL;
  outC->_L985 = outC->D_EOA;
  /* _L983=(TargetLimits_Pkg::TargetDistance#1)/ */
  TargetDistance_TargetLimits_Pkg(
    outC->_L344,
    outC->_L987,
    outC->_L986,
    outC->_L984,
    outC->_L985,
    outC->_L1078,
    &outC->Context_TargetDistance_1);
  outC->_L983 = outC->Context_TargetDistance_1.targetDistance;
  /* _L1047=(SDM_Types_Pkg::TransformL_realToL_int#15)/ */
  TransformL_realToL_int_SDM_Types_Pkg(
    outC->_L983,
    &outC->Context_TransformL_realToL_int_15);
  outC->_L1047 = outC->Context_TransformL_realToL_int_15.loc_int;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L447, &outC->T);
  outC->_L822 = outC->_L447.bs2;
  outC->_L502 = outC->V_est;
  outC->_L448 = outC->_L502 * outC->_L822;
  outC->_L814 = outC->D_SBI2;
  outC->_L451 = outC->_L814 + outC->_L448;
  /* _L1045=(SDM_Types_Pkg::TransformL_realToL_int#13)/ */
  TransformL_realToL_int_SDM_Types_Pkg(
    outC->_L451,
    &outC->Context_TransformL_realToL_int_13);
  outC->_L1045 = outC->Context_TransformL_realToL_int_13.loc_int;
  /* _L1044=(SDM_Types_Pkg::TransformL_realToL_int#12)/ */
  TransformL_realToL_int_SDM_Types_Pkg(
    outC->_L22,
    &outC->Context_TransformL_realToL_int_12);
  outC->_L1044 = outC->Context_TransformL_realToL_int_12.loc_int;
  /* _L1043=(SDM_Types_Pkg::TransformL_realToL_int#11)/ */
  TransformL_realToL_int_SDM_Types_Pkg(
    outC->_L1050,
    &outC->Context_TransformL_realToL_int_11);
  outC->_L1043 = outC->Context_TransformL_realToL_int_11.loc_int;
  outC->_L96 = outC->V_release;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L99, &outC->EBDcurve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L100, &outC->SBDcurve);
  outC->_L495 = outC->D_maxsafefront;
  outC->_L494 = outC->D_est;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L90, &outC->T);
  /* _L88=(TargetLimits_Pkg::d_RSM_start#1)/ */
  d_RSM_start_TargetLimits_Pkg(
    outC->_L96,
    &outC->_L99,
    &outC->_L100,
    outC->_L495,
    outC->_L494,
    &outC->_L90,
    &outC->Context_d_RSM_start_1);
  outC->_L88 = outC->Context_d_RSM_start_1.D_FLOI;
  outC->_L87 = outC->Context_d_RSM_start_1.D_SBI2;
  outC->_L86 = outC->Context_d_RSM_start_1.D_SBI1;
  outC->_L604 = outC->Context_d_RSM_start_1.valid_SBI2;
  outC->_L605 = outC->Context_d_RSM_start_1.valid_SBI1;
  /* _L1042=(SDM_Types_Pkg::TransformL_realToL_int#10)/ */
  TransformL_realToL_int_SDM_Types_Pkg(
    outC->_L86,
    &outC->Context_TransformL_realToL_int_10);
  outC->_L1042 = outC->Context_TransformL_realToL_int_10.loc_int;
  outC->_L400 = outC->D_EOA;
  /* _L1041=(SDM_Types_Pkg::TransformL_realToL_int#9)/ */
  TransformL_realToL_int_SDM_Types_Pkg(
    outC->_L400,
    &outC->Context_TransformL_realToL_int_9);
  outC->_L1041 = outC->Context_TransformL_realToL_int_9.loc_int;
  /* _L1038=(SDM_Types_Pkg::TransformL_realToL_int#6)/ */
  TransformL_realToL_int_SDM_Types_Pkg(
    outC->_L21,
    &outC->Context_TransformL_realToL_int_6);
  outC->_L1038 = outC->Context_TransformL_realToL_int_6.loc_int;
  /* _L1037=(SDM_Types_Pkg::TransformL_realToL_int#5)/ */
  TransformL_realToL_int_SDM_Types_Pkg(
    outC->_L23,
    &outC->Context_TransformL_realToL_int_5);
  outC->_L1037 = outC->Context_TransformL_realToL_int_5.loc_int;
  /* _L1036=(SDM_Types_Pkg::TransformL_realToL_int#4)/ */
  TransformL_realToL_int_SDM_Types_Pkg(
    outC->_L24,
    &outC->Context_TransformL_realToL_int_4);
  outC->_L1036 = outC->Context_TransformL_realToL_int_4.loc_int;
  /* _L1035=(SDM_Types_Pkg::TransformL_realToL_int#3)/ */
  TransformL_realToL_int_SDM_Types_Pkg(
    outC->_L87,
    &outC->Context_TransformL_realToL_int_3);
  outC->_L1035 = outC->Context_TransformL_realToL_int_3.loc_int;
  outC->Dpi = outC->_L189;
  outC->_L208 = outC->Dpi;
  /* _L1033=(SDM_Types_Pkg::TransformL_realToL_int#1)/ */
  TransformL_realToL_int_SDM_Types_Pkg(
    outC->_L208,
    &outC->Context_TransformL_realToL_int_1);
  outC->_L1033 = outC->Context_TransformL_realToL_int_1.loc_int;
  outC->_L917 = outC->V_est;
  /* _L1017=(SDM_Types_Pkg::TransformV_realToV_odo#1)/ */
  TransformV_realToV_odo_SDM_Types_Pkg(
    outC->_L917,
    &outC->Context_TransformV_realToV_odo_1);
  outC->_L1017 = outC->Context_TransformV_realToV_odo_1.v_odo;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L1015, odometry);
  outC->_L1016 = outC->_L1015.motionState;
  outC->_L1014 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1013 = outC->_L1016 == outC->_L1014;
  outC->_L981 = outC->Mi_Output_Min_2_int64;
  outC->_L938 = outC->V_SBI_MRDT;
  outC->_L933 = outC->Mi_Output_Min_1_int64;
  outC->_L922 = outC->V_MRSP;
  /* _L914=(SDM_Types_Pkg::dV_ebi_for_V#1)/ */
  dV_ebi_for_V_SDM_Types_Pkg(outC->_L1064, &outC->Context_dV_ebi_for_V_1);
  outC->_L914 = outC->Context_dV_ebi_for_V_1.dv_ebi;
  /* _L911=(SDM_Types_Pkg::dV_ebi_for_V#2)/ */
  dV_ebi_for_V_SDM_Types_Pkg(outC->_L923, &outC->Context_dV_ebi_for_V_2);
  outC->_L911 = outC->Context_dV_ebi_for_V_2.dv_ebi;
  /* _L908=(SDM_Types_Pkg::dV_warning_for_V#1)/ */
  dV_warning_for_V_SDM_Types_Pkg(
    outC->_L1064,
    &outC->Context_dV_warning_for_V_1);
  outC->_L908 = outC->Context_dV_warning_for_V_1.dv_warning;
  /* _L907=(SDM_Types_Pkg::dV_warning_for_V#2)/ */
  dV_warning_for_V_SDM_Types_Pkg(
    outC->_L923,
    &outC->Context_dV_warning_for_V_2);
  outC->_L907 = outC->Context_dV_warning_for_V_2.dv_warning;
  outC->_L904.V_est = outC->_L1017;
  outC->_L904.V_MRSP = outC->_L922;
  outC->_L904.V_release = outC->_L1029;
  outC->_L904.V_target = outC->_L1031;
  outC->_L904.v_p_mrdt = outC->_L1060;
  outC->_L904.v_p_dmi = outC->_L981;
  outC->_L904.v_sbi_mrdt = outC->_L938;
  outC->_L904.v_FLOI_dmi = outC->_L933;
  outC->_L904.dV_warning_V_MRSP = outC->_L907;
  outC->_L904.dV_warning_V_target = outC->_L908;
  outC->_L904.dV_sbi_V_MRSP = outC->_L909;
  outC->_L904.dV_sbi_V_target = outC->_L910;
  outC->_L904.dV_ebi_V_MRSP = outC->_L911;
  outC->_L904.dV_ebi_V_target = outC->_L914;
  outC->_L904.OdoStandStill = outC->_L1013;
  kcg_copy_Target_T_TargetManagement_types(
    &outC->MostRestrictiveDisplayedTarget,
    &outC->_L863);
  _4_noname = outC->_L672;
  kcg_copy_Speeds_T_SDM_Types_Pkg(&outC->speeds, &outC->_L904);
  _3_noname = outC->_L642;
  _2_noname = outC->_L641;
  outC->valid_RSM2_start = outC->_L604;
  outC->_L609 = outC->valid_RSM2_start;
  outC->valid_RSM1_start = outC->_L605;
  outC->_L603 = outC->valid_RSM1_start;
  outC->FLOIisSBI1 = outC->_L1068;
  _1_noname = outC->_L343;
  noname = outC->_L88;
  outC->_L1.SBD_preindication_location = outC->_L1033;
  outC->_L1.EBD_preindication_location = outC->_L1033;
  outC->_L1.EBD_RSM_start_location = outC->_L1035;
  outC->_L1.SBD_RSM_start_location = outC->_L1042;
  outC->_L1.d_I_of_V_est = outC->_L1036;
  outC->_L1.d_I_of_V_MRSP = outC->_L1043;
  outC->_L1.d_P_of_V_est = outC->_L1037;
  outC->_L1.d_W_of_V_est = outC->_L1044;
  outC->_L1.d_FLOI_of_V_est = outC->_L1038;
  outC->_L1.d_EBI_of_V_est = outC->_L1045;
  outC->_L1.FLOI_of_V_est = outC->_L70;
  outC->_L1.SBI1_of_V_est = outC->_L1051;
  outC->_L1.SBI2_of_V_est = outC->_L1052;
  outC->_L1.d_target = outC->_L1047;
  outC->_L1.d_eoa = outC->_L1041;
  outC->_L1.d_svl = outC->_L1048;
  outC->_L1.Preindication_EBD_location_valid = outC->_L1071;
  outC->_L1.Preindication_SBD_location_valid = outC->_L1072;
  outC->_L1.RSM_start_location_EBD_valid = outC->_L609;
  outC->_L1.RSM_start_location_SBD_valid = outC->_L603;
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&outC->locations, &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void SDMLimitLocations_init_TargetLimits_Pkg(
  outC_SDMLimitLocations_TargetLimits_Pkg *outC)
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

  outC->_L1079 = kcg_true;
  outC->_L1078 = kcg_true;
  outC->_L1076 = kcg_true;
  outC->_L1075 = kcg_true;
  outC->_L1072 = kcg_true;
  outC->_L1071 = kcg_true;
  outC->_L1070 = kcg_true;
  outC->_L1068 = kcg_true;
  outC->_L1067 = kcg_lit_int64(0);
  outC->_L1066 = kcg_lit_int64(0);
  outC->_L1065 = kcg_lit_int64(0);
  outC->_L1064 = kcg_lit_int64(0);
  outC->_L1061 = kcg_true;
  outC->_L1060 = kcg_lit_int64(0);
  outC->_L1058 = kcg_lit_int64(0);
  outC->_L1057 = kcg_lit_int64(0);
  outC->_L1052 = kcg_lit_int64(0);
  outC->_L1051 = kcg_lit_int64(0);
  outC->_L1050 = kcg_lit_float64(0.0);
  outC->_L1049.isSB_FBAvailable = kcg_true;
  outC->_L1049.isSB_CmdAvailable = kcg_true;
  outC->_L1049.isTCOAvailable = kcg_true;
  outC->_L1049.T_traction_cut_off = kcg_lit_int64(0);
  outC->_L1049.offsetAntennaL1 = kcg_lit_int64(0);
  outC->_L1049.T_b_limit = kcg_lit_int64(0);
  outC->_L1048 = kcg_lit_int64(0);
  outC->_L1047 = kcg_lit_int64(0);
  outC->_L1045 = kcg_lit_int64(0);
  outC->_L1044 = kcg_lit_int64(0);
  outC->_L1043 = kcg_lit_int64(0);
  outC->_L1042 = kcg_lit_int64(0);
  outC->_L1041 = kcg_lit_int64(0);
  outC->_L1038 = kcg_lit_int64(0);
  outC->_L1037 = kcg_lit_int64(0);
  outC->_L1036 = kcg_lit_int64(0);
  outC->_L1035 = kcg_lit_int64(0);
  outC->_L1033 = kcg_lit_int64(0);
  outC->_L1031 = kcg_lit_int64(0);
  outC->_L1029 = kcg_lit_int64(0);
  outC->_L1017 = kcg_lit_int64(0);
  outC->_L1016 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1015.valid = kcg_true;
  outC->_L1015.timestamp = kcg_lit_int64(0);
  outC->_L1015.odo.o_nominal = kcg_lit_int64(0);
  outC->_L1015.odo.o_min = kcg_lit_int64(0);
  outC->_L1015.odo.o_max = kcg_lit_int64(0);
  outC->_L1015.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L1015.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L1015.speed.v_lower = kcg_lit_int64(0);
  outC->_L1015.speed.v_upper = kcg_lit_int64(0);
  outC->_L1015.acceleration = kcg_lit_int64(0);
  outC->_L1015.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1015.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1013 = kcg_true;
  outC->_L1014 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L997 = kcg_lit_float64(0.0);
  for (idx = 0; idx < 110; idx++) {
    outC->_L996[idx].Loc_Abs = kcg_lit_float64(0.0);
    outC->_L996[idx].MRS = kcg_lit_float64(0.0);
    outC->_L996[idx].valid = kcg_true;
  }
  outC->_L995 = kcg_lit_float64(0.0);
  outC->_L993.targetType = EoA_TargetManagement_types;
  outC->_L993.distance = kcg_lit_int64(0);
  outC->_L993.speed = kcg_lit_int64(0);
  outC->_L993.valid = kcg_true;
  outC->_L343 = kcg_true;
  outC->_L344 = kcg_lit_float64(0.0);
  outC->_L994 = EoA_TargetManagement_types;
  outC->_L988 = kcg_true;
  outC->_L989 = EoA_TargetManagement_types;
  outC->_L990 = EoA_TargetManagement_types;
  outC->_L991 = kcg_true;
  outC->_L992 = kcg_true;
  outC->_L986 = kcg_lit_float64(0.0);
  outC->_L987 = kcg_lit_float64(0.0);
  outC->_L984 = kcg_lit_float64(0.0);
  outC->_L985 = kcg_lit_float64(0.0);
  outC->_L983 = kcg_lit_float64(0.0);
  outC->_L982 = kcg_lit_int64(0);
  outC->_L981 = kcg_lit_int64(0);
  outC->_L938 = kcg_lit_int64(0);
  outC->_L937 = kcg_lit_int64(0);
  outC->_L927 = kcg_lit_int64(0);
  outC->_L928 = kcg_lit_int64(0);
  outC->_L931 = kcg_lit_int64(0);
  outC->_L933 = kcg_lit_int64(0);
  outC->_L934 = kcg_lit_int64(0);
  outC->_L923 = kcg_lit_int64(0);
  outC->_L922 = kcg_lit_int64(0);
  outC->_L920 = kcg_lit_float64(0.0);
  outC->_L917 = kcg_lit_float64(0.0);
  outC->_L904.V_est = kcg_lit_int64(0);
  outC->_L904.V_MRSP = kcg_lit_int64(0);
  outC->_L904.V_release = kcg_lit_int64(0);
  outC->_L904.V_target = kcg_lit_int64(0);
  outC->_L904.v_p_mrdt = kcg_lit_int64(0);
  outC->_L904.v_p_dmi = kcg_lit_int64(0);
  outC->_L904.v_sbi_mrdt = kcg_lit_int64(0);
  outC->_L904.v_FLOI_dmi = kcg_lit_int64(0);
  outC->_L904.dV_warning_V_MRSP = kcg_lit_int64(0);
  outC->_L904.dV_warning_V_target = kcg_lit_int64(0);
  outC->_L904.dV_sbi_V_MRSP = kcg_lit_int64(0);
  outC->_L904.dV_sbi_V_target = kcg_lit_int64(0);
  outC->_L904.dV_ebi_V_MRSP = kcg_lit_int64(0);
  outC->_L904.dV_ebi_V_target = kcg_lit_int64(0);
  outC->_L904.OdoStandStill = kcg_true;
  outC->_L907 = kcg_lit_int64(0);
  outC->_L908 = kcg_lit_int64(0);
  outC->_L909 = kcg_lit_int64(0);
  outC->_L910 = kcg_lit_int64(0);
  outC->_L911 = kcg_lit_int64(0);
  outC->_L914 = kcg_lit_int64(0);
  outC->_L903 = kcg_lit_int64(0);
  outC->_L902 = kcg_lit_int64(0);
  outC->_L901 = kcg_true;
  outC->_L900.trainPositionIsValid = kcg_true;
  outC->_L900.d_est_frontendPos = kcg_lit_float64(0.0);
  outC->_L900.d_minSafeFrontEndPos = kcg_lit_float64(0.0);
  outC->_L900.d_maxSafeFrontEndPos = kcg_lit_float64(0.0);
  outC->_L900.d_LRBG = kcg_lit_float64(0.0);
  outC->_L900.d_accLRBG = kcg_lit_float64(0.0);
  outC->_L899 = kcg_lit_float64(0.0);
  outC->_L898 = kcg_lit_float64(0.0);
  outC->_L897 = kcg_lit_float64(0.0);
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L894.distances[idx1] = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L894.speeds[idx2] = kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L894.accelerations[idx3] = kcg_lit_float64(0.0);
  }
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L894.valid[idx4] = kcg_true;
  }
  outC->_L889.isSB_FBAvailable = kcg_true;
  outC->_L889.isSB_CmdAvailable = kcg_true;
  outC->_L889.isTCOAvailable = kcg_true;
  outC->_L889.T_traction_cut_off = kcg_lit_int64(0);
  outC->_L889.offsetAntennaL1 = kcg_lit_int64(0);
  outC->_L889.T_b_limit = kcg_lit_int64(0);
  outC->_L882 = kcg_true;
  outC->_L881 = kcg_lit_float64(0.0);
  for (idx9 = 0; idx9 < 110; idx9++) {
    for (idx5 = 0; idx5 < 114; idx5++) {
      outC->_L862.MRSP_EBD_curves[idx9].distances[idx5] = kcg_lit_float64(0.0);
    }
    for (idx6 = 0; idx6 < 114; idx6++) {
      outC->_L862.MRSP_EBD_curves[idx9].speeds[idx6] = kcg_lit_float64(0.0);
    }
    for (idx7 = 0; idx7 < 114; idx7++) {
      outC->_L862.MRSP_EBD_curves[idx9].accelerations[idx7] = kcg_lit_float64(0.0);
    }
    for (idx8 = 0; idx8 < 114; idx8++) {
      outC->_L862.MRSP_EBD_curves[idx9].valid[idx8] = kcg_true;
    }
  }
  for (idx10 = 0; idx10 < 114; idx10++) {
    outC->_L862.EOA_SBD_curve.distances[idx10] = kcg_lit_float64(0.0);
  }
  for (idx11 = 0; idx11 < 114; idx11++) {
    outC->_L862.EOA_SBD_curve.speeds[idx11] = kcg_lit_float64(0.0);
  }
  for (idx12 = 0; idx12 < 114; idx12++) {
    outC->_L862.EOA_SBD_curve.accelerations[idx12] = kcg_lit_float64(0.0);
  }
  for (idx13 = 0; idx13 < 114; idx13++) {
    outC->_L862.EOA_SBD_curve.valid[idx13] = kcg_true;
  }
  for (idx14 = 0; idx14 < 114; idx14++) {
    outC->_L862.SvL_LoA_EBD_curve.distances[idx14] = kcg_lit_float64(0.0);
  }
  for (idx15 = 0; idx15 < 114; idx15++) {
    outC->_L862.SvL_LoA_EBD_curve.speeds[idx15] = kcg_lit_float64(0.0);
  }
  for (idx16 = 0; idx16 < 114; idx16++) {
    outC->_L862.SvL_LoA_EBD_curve.accelerations[idx16] = kcg_lit_float64(0.0);
  }
  for (idx17 = 0; idx17 < 114; idx17++) {
    outC->_L862.SvL_LoA_EBD_curve.valid[idx17] = kcg_true;
  }
  for (idx18 = 0; idx18 < 114; idx18++) {
    outC->_L862.GUI_curve.distances[idx18] = kcg_lit_float64(0.0);
  }
  for (idx19 = 0; idx19 < 114; idx19++) {
    outC->_L862.GUI_curve.speeds[idx19] = kcg_lit_float64(0.0);
  }
  for (idx20 = 0; idx20 < 114; idx20++) {
    outC->_L862.GUI_curve.accelerations[idx20] = kcg_lit_float64(0.0);
  }
  for (idx21 = 0; idx21 < 114; idx21++) {
    outC->_L862.GUI_curve.valid[idx21] = kcg_true;
  }
  outC->_L862.GUI_curve_enabled = kcg_true;
  outC->_L875.v = kcg_lit_float64(0.0);
  outC->_L875.d = kcg_lit_float64(0.0);
  outC->_L874 = kcg_lit_float64(0.0);
  outC->_L873.Traction = kcg_lit_float64(0.0);
  outC->_L873.berem = kcg_lit_float64(0.0);
  outC->_L873.bs = kcg_lit_float64(0.0);
  outC->_L873.bs1 = kcg_lit_float64(0.0);
  outC->_L873.bs2 = kcg_lit_float64(0.0);
  outC->_L873.inhComp = kcg_true;
  outC->_L873.indication = kcg_lit_float64(0.0);
  outC->_L871 = kcg_lit_float64(0.0);
  outC->_L870 = kcg_lit_float64(0.0);
  outC->_L869 = kcg_lit_float64(0.0);
  outC->_L868 = kcg_lit_float64(0.0);
  outC->_L867 = kcg_true;
  for (idx22 = 0; idx22 < 114; idx22++) {
    outC->_L866.distances[idx22] = kcg_lit_float64(0.0);
  }
  for (idx23 = 0; idx23 < 114; idx23++) {
    outC->_L866.speeds[idx23] = kcg_lit_float64(0.0);
  }
  for (idx24 = 0; idx24 < 114; idx24++) {
    outC->_L866.accelerations[idx24] = kcg_lit_float64(0.0);
  }
  for (idx25 = 0; idx25 < 114; idx25++) {
    outC->_L866.valid[idx25] = kcg_true;
  }
  for (idx26 = 0; idx26 < 114; idx26++) {
    outC->_L865.distances[idx26] = kcg_lit_float64(0.0);
  }
  for (idx27 = 0; idx27 < 114; idx27++) {
    outC->_L865.speeds[idx27] = kcg_lit_float64(0.0);
  }
  for (idx28 = 0; idx28 < 114; idx28++) {
    outC->_L865.accelerations[idx28] = kcg_lit_float64(0.0);
  }
  for (idx29 = 0; idx29 < 114; idx29++) {
    outC->_L865.valid[idx29] = kcg_true;
  }
  for (idx30 = 0; idx30 < 114; idx30++) {
    outC->_L864.distances[idx30] = kcg_lit_float64(0.0);
  }
  for (idx31 = 0; idx31 < 114; idx31++) {
    outC->_L864.speeds[idx31] = kcg_lit_float64(0.0);
  }
  for (idx32 = 0; idx32 < 114; idx32++) {
    outC->_L864.accelerations[idx32] = kcg_lit_float64(0.0);
  }
  for (idx33 = 0; idx33 < 114; idx33++) {
    outC->_L864.valid[idx33] = kcg_true;
  }
  outC->_L863.targetType = EoA_TargetManagement_types;
  outC->_L863.distance = kcg_lit_int64(0);
  outC->_L863.speed = kcg_lit_int64(0);
  outC->_L863.valid = kcg_true;
  outC->_L876.valid = kcg_true;
  outC->_L876.timestamp = kcg_lit_int64(0);
  outC->_L876.odo.o_nominal = kcg_lit_int64(0);
  outC->_L876.odo.o_min = kcg_lit_int64(0);
  outC->_L876.odo.o_max = kcg_lit_int64(0);
  outC->_L876.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L876.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L876.speed.v_lower = kcg_lit_int64(0);
  outC->_L876.speed.v_upper = kcg_lit_int64(0);
  outC->_L876.acceleration = kcg_lit_int64(0);
  outC->_L876.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L876.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L877.valid = kcg_true;
  outC->_L877.q_dir = Q_DIR_Reverse;
  outC->_L877.d_validnv = kcg_lit_int64(0);
  for (idx34 = 0; idx34 < 7; idx34++) {
    outC->_L877.nid_cArray[idx34].valid = kcg_true;
    outC->_L877.nid_cArray[idx34].nid_c = kcg_lit_int64(0);
  }
  outC->_L877.v_nvshunt = kcg_lit_int64(0);
  outC->_L877.v_nvstff = kcg_lit_int64(0);
  outC->_L877.v_nvonsight = kcg_lit_int64(0);
  outC->_L877.v_nvlimsuperv = kcg_lit_int64(0);
  outC->_L877.v_nvunfit = kcg_lit_int64(0);
  outC->_L877.v_nvrel = kcg_lit_int64(0);
  outC->_L877.d_nvroll = kcg_lit_int64(0);
  outC->_L877.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L877.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L877.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L877.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L877.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L877.v_nvallowovtrp = kcg_lit_int64(0);
  outC->_L877.v_nvsupovtrp = kcg_lit_int64(0);
  outC->_L877.d_nvovtrp = kcg_lit_int64(0);
  outC->_L877.t_nvovtrp = kcg_lit_int64(0);
  outC->_L877.d_nvpotrp = kcg_lit_int64(0);
  outC->_L877.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L877.t_nvcontact = kcg_lit_int64(0);
  outC->_L877.m_nvderun = M_NVDERUN_No;
  outC->_L877.d_nvstff = kcg_lit_int64(0);
  outC->_L877.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L877.a_nvmaxredadh1 = kcg_lit_float64(0.0);
  outC->_L877.a_nvmaxredadh2 = kcg_lit_float64(0.0);
  outC->_L877.a_nvmaxredadh3 = kcg_lit_float64(0.0);
  outC->_L877.q_nvlocacc = kcg_lit_int64(0);
  outC->_L877.m_nvavadh = kcg_lit_float64(0.0);
  outC->_L877.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L877.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx36 = 0; idx36 < 7; idx36++) {
    outC->_L877.nvkvintsetArray[idx36].valid = kcg_true;
    outC->_L877.nvkvintsetArray[idx36].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L877.nvkvintsetArray[idx36].a_nvp12 = kcg_lit_float64(0.0);
    outC->_L877.nvkvintsetArray[idx36].a_nvp23 = kcg_lit_float64(0.0);
    for (idx35 = 0; idx35 < 7; idx35++) {
      outC->_L877.nvkvintsetArray[idx36].nvkintArray[idx35].valid = kcg_true;
      outC->_L877.nvkvintsetArray[idx36].nvkintArray[idx35].v_nvkvint =
        kcg_lit_int64(0);
      outC->_L877.nvkvintsetArray[idx36].nvkintArray[idx35].m_nvkvint12 =
        kcg_lit_float64(0.0);
      outC->_L877.nvkvintsetArray[idx36].nvkintArray[idx35].m_nvkvint23 =
        kcg_lit_float64(0.0);
    }
  }
  for (idx37 = 0; idx37 < 7; idx37++) {
    outC->_L877.nvkrintArray[idx37].valid = kcg_true;
    outC->_L877.nvkrintArray[idx37].l_nvkrint = L_NVKRINT_0m;
    outC->_L877.nvkrintArray[idx37].m_nvkrint = kcg_lit_float64(0.0);
  }
  outC->_L877.m_nvktint = kcg_lit_float64(0.0);
  for (idx38 = 0; idx38 < 2; idx38++) {
    outC->_L878.emergency[idx38] = kcg_lit_float64(0.0);
  }
  for (idx39 = 0; idx39 < 2; idx39++) {
    outC->_L878.service[idx39] = kcg_lit_float64(0.0);
  }
  outC->_L879.updatedTargetList = kcg_true;
  for (idx40 = 0; idx40 < 110; idx40++) {
    outC->_L879.MRSP_targetList[idx40].targetType = EoA_TargetManagement_types;
    outC->_L879.MRSP_targetList[idx40].distance = kcg_lit_float64(0.0);
    outC->_L879.MRSP_targetList[idx40].speed = kcg_lit_float64(0.0);
  }
  outC->_L879.EOA_target.targetType = EoA_TargetManagement_types;
  outC->_L879.EOA_target.distance = kcg_lit_float64(0.0);
  outC->_L879.EOA_target.speed = kcg_lit_float64(0.0);
  outC->_L879.SvL_LoA_target.targetType = EoA_TargetManagement_types;
  outC->_L879.SvL_LoA_target.distance = kcg_lit_float64(0.0);
  outC->_L879.SvL_LoA_target.speed = kcg_lit_float64(0.0);
  outC->_L834.trainPositionIsValid = kcg_true;
  outC->_L834.d_est_frontendPos = kcg_lit_float64(0.0);
  outC->_L834.d_minSafeFrontEndPos = kcg_lit_float64(0.0);
  outC->_L834.d_maxSafeFrontEndPos = kcg_lit_float64(0.0);
  outC->_L834.d_LRBG = kcg_lit_float64(0.0);
  outC->_L834.d_accLRBG = kcg_lit_float64(0.0);
  outC->_L833.Traction = kcg_lit_float64(0.0);
  outC->_L833.berem = kcg_lit_float64(0.0);
  outC->_L833.bs = kcg_lit_float64(0.0);
  outC->_L833.bs1 = kcg_lit_float64(0.0);
  outC->_L833.bs2 = kcg_lit_float64(0.0);
  outC->_L833.inhComp = kcg_true;
  outC->_L833.indication = kcg_lit_float64(0.0);
  outC->_L90.Traction = kcg_lit_float64(0.0);
  outC->_L90.berem = kcg_lit_float64(0.0);
  outC->_L90.bs = kcg_lit_float64(0.0);
  outC->_L90.bs1 = kcg_lit_float64(0.0);
  outC->_L90.bs2 = kcg_lit_float64(0.0);
  outC->_L90.inhComp = kcg_true;
  outC->_L90.indication = kcg_lit_float64(0.0);
  for (idx41 = 0; idx41 < 114; idx41++) {
    outC->_L827.distances[idx41] = kcg_lit_float64(0.0);
  }
  for (idx42 = 0; idx42 < 114; idx42++) {
    outC->_L827.speeds[idx42] = kcg_lit_float64(0.0);
  }
  for (idx43 = 0; idx43 < 114; idx43++) {
    outC->_L827.accelerations[idx43] = kcg_lit_float64(0.0);
  }
  for (idx44 = 0; idx44 < 114; idx44++) {
    outC->_L827.valid[idx44] = kcg_true;
  }
  outC->_L823.Traction = kcg_lit_float64(0.0);
  outC->_L823.berem = kcg_lit_float64(0.0);
  outC->_L823.bs = kcg_lit_float64(0.0);
  outC->_L823.bs1 = kcg_lit_float64(0.0);
  outC->_L823.bs2 = kcg_lit_float64(0.0);
  outC->_L823.inhComp = kcg_true;
  outC->_L823.indication = kcg_lit_float64(0.0);
  outC->_L822 = kcg_lit_float64(0.0);
  outC->_L821.Traction = kcg_lit_float64(0.0);
  outC->_L821.berem = kcg_lit_float64(0.0);
  outC->_L821.bs = kcg_lit_float64(0.0);
  outC->_L821.bs1 = kcg_lit_float64(0.0);
  outC->_L821.bs2 = kcg_lit_float64(0.0);
  outC->_L821.inhComp = kcg_true;
  outC->_L821.indication = kcg_lit_float64(0.0);
  outC->_L814 = kcg_lit_float64(0.0);
  outC->_L813 = kcg_true;
  outC->_L812 = kcg_lit_float64(0.0);
  outC->_L702.valid = kcg_true;
  outC->_L702.v_main = kcg_lit_float64(0.0);
  outC->_L702.EOA.Location = kcg_lit_float64(0.0);
  outC->_L702.EOA.TargetSpeed = kcg_lit_float64(0.0);
  outC->_L702.DP_valid = kcg_true;
  outC->_L702.DangerPoint = kcg_lit_float64(0.0);
  outC->_L702.OL_valid = kcg_true;
  outC->_L702.Overlap = kcg_lit_float64(0.0);
  outC->_L702.q_calculate_release = kcg_true;
  outC->_L702.ReleaseSpeed = kcg_lit_float64(0.0);
  outC->_L702.level = MA_L1_TrackAtlasTypes;
  outC->_L701 = kcg_lit_float64(0.0);
  outC->_L694 = kcg_lit_float64(0.0);
  for (idx45 = 0; idx45 < 114; idx45++) {
    outC->_L675.distances[idx45] = kcg_lit_float64(0.0);
  }
  for (idx46 = 0; idx46 < 114; idx46++) {
    outC->_L675.speeds[idx46] = kcg_lit_float64(0.0);
  }
  for (idx47 = 0; idx47 < 114; idx47++) {
    outC->_L675.accelerations[idx47] = kcg_lit_float64(0.0);
  }
  for (idx48 = 0; idx48 < 114; idx48++) {
    outC->_L675.valid[idx48] = kcg_true;
  }
  outC->_L674 = kcg_lit_float64(0.0);
  outC->_L671 = kcg_lit_float64(0.0);
  outC->_L672 = kcg_true;
  outC->_L655 = kcg_lit_float64(0.0);
  outC->_L642 = kcg_true;
  outC->_L641 = kcg_true;
  outC->_L609 = kcg_true;
  outC->_L605 = kcg_true;
  outC->_L604 = kcg_true;
  outC->_L603 = kcg_true;
  for (idx49 = 0; idx49 < 114; idx49++) {
    outC->_L593.distances[idx49] = kcg_lit_float64(0.0);
  }
  for (idx50 = 0; idx50 < 114; idx50++) {
    outC->_L593.speeds[idx50] = kcg_lit_float64(0.0);
  }
  for (idx51 = 0; idx51 < 114; idx51++) {
    outC->_L593.accelerations[idx51] = kcg_lit_float64(0.0);
  }
  for (idx52 = 0; idx52 < 114; idx52++) {
    outC->_L593.valid[idx52] = kcg_true;
  }
  outC->_L594 = kcg_true;
  outC->_L509 = kcg_true;
  for (idx53 = 0; idx53 < 114; idx53++) {
    outC->_L508.distances[idx53] = kcg_lit_float64(0.0);
  }
  for (idx54 = 0; idx54 < 114; idx54++) {
    outC->_L508.speeds[idx54] = kcg_lit_float64(0.0);
  }
  for (idx55 = 0; idx55 < 114; idx55++) {
    outC->_L508.accelerations[idx55] = kcg_lit_float64(0.0);
  }
  for (idx56 = 0; idx56 < 114; idx56++) {
    outC->_L508.valid[idx56] = kcg_true;
  }
  outC->_L502 = kcg_lit_float64(0.0);
  outC->_L499 = kcg_lit_float64(0.0);
  outC->_L498 = kcg_lit_float64(0.0);
  outC->_L497 = kcg_lit_float64(0.0);
  outC->_L496 = kcg_lit_float64(0.0);
  outC->_L495 = kcg_lit_float64(0.0);
  outC->_L494 = kcg_lit_float64(0.0);
  outC->_L489 = kcg_lit_float64(0.0);
  outC->_L451 = kcg_lit_float64(0.0);
  outC->_L447.Traction = kcg_lit_float64(0.0);
  outC->_L447.berem = kcg_lit_float64(0.0);
  outC->_L447.bs = kcg_lit_float64(0.0);
  outC->_L447.bs1 = kcg_lit_float64(0.0);
  outC->_L447.bs2 = kcg_lit_float64(0.0);
  outC->_L447.inhComp = kcg_true;
  outC->_L447.indication = kcg_lit_float64(0.0);
  outC->_L448 = kcg_lit_float64(0.0);
  outC->_L400 = kcg_lit_float64(0.0);
  outC->_L401 = kcg_lit_float64(0.0);
  outC->_L208 = kcg_lit_float64(0.0);
  outC->_L350.Traction = kcg_lit_float64(0.0);
  outC->_L350.berem = kcg_lit_float64(0.0);
  outC->_L350.bs = kcg_lit_float64(0.0);
  outC->_L350.bs1 = kcg_lit_float64(0.0);
  outC->_L350.bs2 = kcg_lit_float64(0.0);
  outC->_L350.inhComp = kcg_true;
  outC->_L350.indication = kcg_lit_float64(0.0);
  for (idx57 = 0; idx57 < 114; idx57++) {
    outC->_L349.distances[idx57] = kcg_lit_float64(0.0);
  }
  for (idx58 = 0; idx58 < 114; idx58++) {
    outC->_L349.speeds[idx58] = kcg_lit_float64(0.0);
  }
  for (idx59 = 0; idx59 < 114; idx59++) {
    outC->_L349.accelerations[idx59] = kcg_lit_float64(0.0);
  }
  for (idx60 = 0; idx60 < 114; idx60++) {
    outC->_L349.valid[idx60] = kcg_true;
  }
  outC->_L346 = kcg_lit_float64(0.0);
  outC->_L341 = kcg_lit_float64(0.0);
  outC->_L205.Traction = kcg_lit_float64(0.0);
  outC->_L205.berem = kcg_lit_float64(0.0);
  outC->_L205.bs = kcg_lit_float64(0.0);
  outC->_L205.bs1 = kcg_lit_float64(0.0);
  outC->_L205.bs2 = kcg_lit_float64(0.0);
  outC->_L205.inhComp = kcg_true;
  outC->_L205.indication = kcg_lit_float64(0.0);
  for (idx61 = 0; idx61 < 114; idx61++) {
    outC->_L200.distances[idx61] = kcg_lit_float64(0.0);
  }
  for (idx62 = 0; idx62 < 114; idx62++) {
    outC->_L200.speeds[idx62] = kcg_lit_float64(0.0);
  }
  for (idx63 = 0; idx63 < 114; idx63++) {
    outC->_L200.accelerations[idx63] = kcg_lit_float64(0.0);
  }
  for (idx64 = 0; idx64 < 114; idx64++) {
    outC->_L200.valid[idx64] = kcg_true;
  }
  outC->_L189 = kcg_lit_float64(0.0);
  outC->_L191 = kcg_true;
  for (idx65 = 0; idx65 < 110; idx65++) {
    outC->_L132[idx65].Loc_Abs = kcg_lit_float64(0.0);
    outC->_L132[idx65].MRS = kcg_lit_float64(0.0);
    outC->_L132[idx65].valid = kcg_true;
  }
  for (idx66 = 0; idx66 < 114; idx66++) {
    outC->_L100.distances[idx66] = kcg_lit_float64(0.0);
  }
  for (idx67 = 0; idx67 < 114; idx67++) {
    outC->_L100.speeds[idx67] = kcg_lit_float64(0.0);
  }
  for (idx68 = 0; idx68 < 114; idx68++) {
    outC->_L100.accelerations[idx68] = kcg_lit_float64(0.0);
  }
  for (idx69 = 0; idx69 < 114; idx69++) {
    outC->_L100.valid[idx69] = kcg_true;
  }
  for (idx70 = 0; idx70 < 114; idx70++) {
    outC->_L99.distances[idx70] = kcg_lit_float64(0.0);
  }
  for (idx71 = 0; idx71 < 114; idx71++) {
    outC->_L99.speeds[idx71] = kcg_lit_float64(0.0);
  }
  for (idx72 = 0; idx72 < 114; idx72++) {
    outC->_L99.accelerations[idx72] = kcg_lit_float64(0.0);
  }
  for (idx73 = 0; idx73 < 114; idx73++) {
    outC->_L99.valid[idx73] = kcg_true;
  }
  outC->_L96 = kcg_lit_float64(0.0);
  outC->_L86 = kcg_lit_float64(0.0);
  outC->_L87 = kcg_lit_float64(0.0);
  outC->_L88 = kcg_lit_float64(0.0);
  outC->_L70 = kcg_lit_int64(0);
  outC->_L69 = kcg_true;
  outC->_L57.Traction = kcg_lit_float64(0.0);
  outC->_L57.berem = kcg_lit_float64(0.0);
  outC->_L57.bs = kcg_lit_float64(0.0);
  outC->_L57.bs1 = kcg_lit_float64(0.0);
  outC->_L57.bs2 = kcg_lit_float64(0.0);
  outC->_L57.inhComp = kcg_true;
  outC->_L57.indication = kcg_lit_float64(0.0);
  for (idx74 = 0; idx74 < 114; idx74++) {
    outC->_L53.distances[idx74] = kcg_lit_float64(0.0);
  }
  for (idx75 = 0; idx75 < 114; idx75++) {
    outC->_L53.speeds[idx75] = kcg_lit_float64(0.0);
  }
  for (idx76 = 0; idx76 < 114; idx76++) {
    outC->_L53.accelerations[idx76] = kcg_lit_float64(0.0);
  }
  for (idx77 = 0; idx77 < 114; idx77++) {
    outC->_L53.valid[idx77] = kcg_true;
  }
  for (idx78 = 0; idx78 < 114; idx78++) {
    outC->_L52.distances[idx78] = kcg_lit_float64(0.0);
  }
  for (idx79 = 0; idx79 < 114; idx79++) {
    outC->_L52.speeds[idx79] = kcg_lit_float64(0.0);
  }
  for (idx80 = 0; idx80 < 114; idx80++) {
    outC->_L52.accelerations[idx80] = kcg_lit_float64(0.0);
  }
  for (idx81 = 0; idx81 < 114; idx81++) {
    outC->_L52.valid[idx81] = kcg_true;
  }
  for (idx82 = 0; idx82 < 114; idx82++) {
    outC->_L51.distances[idx82] = kcg_lit_float64(0.0);
  }
  for (idx83 = 0; idx83 < 114; idx83++) {
    outC->_L51.speeds[idx83] = kcg_lit_float64(0.0);
  }
  for (idx84 = 0; idx84 < 114; idx84++) {
    outC->_L51.accelerations[idx84] = kcg_lit_float64(0.0);
  }
  for (idx85 = 0; idx85 < 114; idx85++) {
    outC->_L51.valid[idx85] = kcg_true;
  }
  outC->_L45 = kcg_lit_float64(0.0);
  outC->_L44 = kcg_lit_float64(0.0);
  outC->_L41 = kcg_lit_float64(0.0);
  outC->_L36 = kcg_lit_float64(0.0);
  outC->_L35.v = kcg_lit_float64(0.0);
  outC->_L35.d = kcg_lit_float64(0.0);
  outC->_L26 = kcg_lit_float64(0.0);
  outC->_L25 = kcg_lit_float64(0.0);
  outC->_L21 = kcg_lit_float64(0.0);
  outC->_L22 = kcg_lit_float64(0.0);
  outC->_L23 = kcg_lit_float64(0.0);
  outC->_L24 = kcg_lit_float64(0.0);
  outC->_L1.SBD_preindication_location = kcg_lit_int64(0);
  outC->_L1.EBD_preindication_location = kcg_lit_int64(0);
  outC->_L1.EBD_RSM_start_location = kcg_lit_int64(0);
  outC->_L1.SBD_RSM_start_location = kcg_lit_int64(0);
  outC->_L1.d_I_of_V_est = kcg_lit_int64(0);
  outC->_L1.d_I_of_V_MRSP = kcg_lit_int64(0);
  outC->_L1.d_P_of_V_est = kcg_lit_int64(0);
  outC->_L1.d_W_of_V_est = kcg_lit_int64(0);
  outC->_L1.d_FLOI_of_V_est = kcg_lit_int64(0);
  outC->_L1.d_EBI_of_V_est = kcg_lit_int64(0);
  outC->_L1.FLOI_of_V_est = kcg_lit_int64(0);
  outC->_L1.SBI1_of_V_est = kcg_lit_int64(0);
  outC->_L1.SBI2_of_V_est = kcg_lit_int64(0);
  outC->_L1.d_target = kcg_lit_int64(0);
  outC->_L1.d_eoa = kcg_lit_int64(0);
  outC->_L1.d_svl = kcg_lit_int64(0);
  outC->_L1.Preindication_EBD_location_valid = kcg_true;
  outC->_L1.Preindication_SBD_location_valid = kcg_true;
  outC->_L1.RSM_start_location_EBD_valid = kcg_true;
  outC->_L1.RSM_start_location_SBD_valid = kcg_true;
  outC->isEoAorSvL = kcg_true;
  outC->FLOIis1 = kcg_true;
  outC->freshMRDT = kcg_true;
  outC->V_SBI2_lim = kcg_lit_int64(0);
  outC->V_SBI1_lim = kcg_lit_int64(0);
  outC->MRDT.targetType = EoA_TargetManagement_types;
  outC->MRDT.distance = kcg_lit_int64(0);
  outC->MRDT.speed = kcg_lit_int64(0);
  outC->MRDT.valid = kcg_true;
  outC->V_SBI_MRDT = kcg_lit_int64(0);
  outC->V_MRSP = kcg_lit_int64(0);
  outC->V_P_MRDT = kcg_lit_int64(0);
  outC->valid_D_SBI2 = kcg_true;
  outC->D_SBI2 = kcg_lit_float64(0.0);
  outC->V_ura = kcg_lit_float64(0.0);
  outC->valid_RSM2_start = kcg_true;
  outC->valid_RSM1_start = kcg_true;
  for (idx86 = 0; idx86 < 114; idx86++) {
    outC->GUIcurve.distances[idx86] = kcg_lit_float64(0.0);
  }
  for (idx87 = 0; idx87 < 114; idx87++) {
    outC->GUIcurve.speeds[idx87] = kcg_lit_float64(0.0);
  }
  for (idx88 = 0; idx88 < 114; idx88++) {
    outC->GUIcurve.accelerations[idx88] = kcg_lit_float64(0.0);
  }
  for (idx89 = 0; idx89 < 114; idx89++) {
    outC->GUIcurve.valid[idx89] = kcg_true;
  }
  outC->GUICurveEnabled = kcg_true;
  outC->D_maxsafefront = kcg_lit_float64(0.0);
  outC->D_est = kcg_lit_float64(0.0);
  outC->D_SvL = kcg_lit_float64(0.0);
  outC->D_EOA = kcg_lit_float64(0.0);
  outC->Dpi = kcg_lit_float64(0.0);
  outC->V_release = kcg_lit_float64(0.0);
  outC->T.Traction = kcg_lit_float64(0.0);
  outC->T.berem = kcg_lit_float64(0.0);
  outC->T.bs = kcg_lit_float64(0.0);
  outC->T.bs1 = kcg_lit_float64(0.0);
  outC->T.bs2 = kcg_lit_float64(0.0);
  outC->T.inhComp = kcg_true;
  outC->T.indication = kcg_lit_float64(0.0);
  for (idx90 = 0; idx90 < 114; idx90++) {
    outC->EBDcurve.distances[idx90] = kcg_lit_float64(0.0);
  }
  for (idx91 = 0; idx91 < 114; idx91++) {
    outC->EBDcurve.speeds[idx91] = kcg_lit_float64(0.0);
  }
  for (idx92 = 0; idx92 < 114; idx92++) {
    outC->EBDcurve.accelerations[idx92] = kcg_lit_float64(0.0);
  }
  for (idx93 = 0; idx93 < 114; idx93++) {
    outC->EBDcurve.valid[idx93] = kcg_true;
  }
  for (idx94 = 0; idx94 < 114; idx94++) {
    outC->SBDcurve.distances[idx94] = kcg_lit_float64(0.0);
  }
  for (idx95 = 0; idx95 < 114; idx95++) {
    outC->SBDcurve.speeds[idx95] = kcg_lit_float64(0.0);
  }
  for (idx96 = 0; idx96 < 114; idx96++) {
    outC->SBDcurve.accelerations[idx96] = kcg_lit_float64(0.0);
  }
  for (idx97 = 0; idx97 < 114; idx97++) {
    outC->SBDcurve.valid[idx97] = kcg_true;
  }
  outC->V_target = kcg_lit_float64(0.0);
  outC->bec.v = kcg_lit_float64(0.0);
  outC->bec.d = kcg_lit_float64(0.0);
  outC->V_est = kcg_lit_float64(0.0);
  outC->_L1_Max_2_int64 = kcg_lit_int64(0);
  outC->_L2_Max_2_int64 = kcg_lit_int64(0);
  outC->_L3_Max_2_int64 = kcg_true;
  outC->_L4_Max_2_int64 = kcg_lit_int64(0);
  outC->I1_Max_2_int64 = kcg_lit_int64(0);
  outC->I2_Max_2_int64 = kcg_lit_int64(0);
  outC->Ma_Output_Max_2_int64 = kcg_lit_int64(0);
  outC->_L21_Min_2_int64 = kcg_lit_int64(0);
  outC->_L22_Min_2_int64 = kcg_lit_int64(0);
  outC->_L24_Min_2_int64 = kcg_lit_int64(0);
  outC->_L25_Min_2_int64 = kcg_true;
  outC->I1_Min_2_int64 = kcg_lit_int64(0);
  outC->I2_Min_2_int64 = kcg_lit_int64(0);
  outC->Mi_Output_Min_2_int64 = kcg_lit_int64(0);
  outC->_L1_Max_1_int64 = kcg_lit_int64(0);
  outC->_L2_Max_1_int64 = kcg_lit_int64(0);
  outC->_L3_Max_1_int64 = kcg_true;
  outC->_L4_Max_1_int64 = kcg_lit_int64(0);
  outC->I1_Max_1_int64 = kcg_lit_int64(0);
  outC->I2_Max_1_int64 = kcg_lit_int64(0);
  outC->Ma_Output_Max_1_int64 = kcg_lit_int64(0);
  outC->_L21_Min_1_int64 = kcg_lit_int64(0);
  outC->_L22_Min_1_int64 = kcg_lit_int64(0);
  outC->_L24_Min_1_int64 = kcg_lit_int64(0);
  outC->_L25_Min_1_int64 = kcg_true;
  outC->I1_Min_1_int64 = kcg_lit_int64(0);
  outC->I2_Min_1_int64 = kcg_lit_int64(0);
  outC->Mi_Output_Min_1_int64 = kcg_lit_int64(0);
  outC->FLOIisSBI1 = kcg_true;
  outC->MostRestrictiveDisplayedTarget.targetType = EoA_TargetManagement_types;
  outC->MostRestrictiveDisplayedTarget.distance = kcg_lit_int64(0);
  outC->MostRestrictiveDisplayedTarget.speed = kcg_lit_int64(0);
  outC->MostRestrictiveDisplayedTarget.valid = kcg_true;
  outC->locations.SBD_preindication_location = kcg_lit_int64(0);
  outC->locations.EBD_preindication_location = kcg_lit_int64(0);
  outC->locations.EBD_RSM_start_location = kcg_lit_int64(0);
  outC->locations.SBD_RSM_start_location = kcg_lit_int64(0);
  outC->locations.d_I_of_V_est = kcg_lit_int64(0);
  outC->locations.d_I_of_V_MRSP = kcg_lit_int64(0);
  outC->locations.d_P_of_V_est = kcg_lit_int64(0);
  outC->locations.d_W_of_V_est = kcg_lit_int64(0);
  outC->locations.d_FLOI_of_V_est = kcg_lit_int64(0);
  outC->locations.d_EBI_of_V_est = kcg_lit_int64(0);
  outC->locations.FLOI_of_V_est = kcg_lit_int64(0);
  outC->locations.SBI1_of_V_est = kcg_lit_int64(0);
  outC->locations.SBI2_of_V_est = kcg_lit_int64(0);
  outC->locations.d_target = kcg_lit_int64(0);
  outC->locations.d_eoa = kcg_lit_int64(0);
  outC->locations.d_svl = kcg_lit_int64(0);
  outC->locations.Preindication_EBD_location_valid = kcg_true;
  outC->locations.Preindication_SBD_location_valid = kcg_true;
  outC->locations.RSM_start_location_EBD_valid = kcg_true;
  outC->locations.RSM_start_location_SBD_valid = kcg_true;
  outC->speeds.V_est = kcg_lit_int64(0);
  outC->speeds.V_MRSP = kcg_lit_int64(0);
  outC->speeds.V_release = kcg_lit_int64(0);
  outC->speeds.V_target = kcg_lit_int64(0);
  outC->speeds.v_p_mrdt = kcg_lit_int64(0);
  outC->speeds.v_p_dmi = kcg_lit_int64(0);
  outC->speeds.v_sbi_mrdt = kcg_lit_int64(0);
  outC->speeds.v_FLOI_dmi = kcg_lit_int64(0);
  outC->speeds.dV_warning_V_MRSP = kcg_lit_int64(0);
  outC->speeds.dV_warning_V_target = kcg_lit_int64(0);
  outC->speeds.dV_sbi_V_MRSP = kcg_lit_int64(0);
  outC->speeds.dV_sbi_V_target = kcg_lit_int64(0);
  outC->speeds.dV_ebi_V_MRSP = kcg_lit_int64(0);
  outC->speeds.dV_ebi_V_target = kcg_lit_int64(0);
  outC->speeds.OdoStandStill = kcg_true;
  /* _L907=(SDM_Types_Pkg::dV_warning_for_V#2)/ */
  dV_warning_for_V_init_SDM_Types_Pkg(&outC->Context_dV_warning_for_V_2);
  /* _L908=(SDM_Types_Pkg::dV_warning_for_V#1)/ */
  dV_warning_for_V_init_SDM_Types_Pkg(&outC->Context_dV_warning_for_V_1);
  /* _L911=(SDM_Types_Pkg::dV_ebi_for_V#2)/ */
  dV_ebi_for_V_init_SDM_Types_Pkg(&outC->Context_dV_ebi_for_V_2);
  /* _L914=(SDM_Types_Pkg::dV_ebi_for_V#1)/ */
  dV_ebi_for_V_init_SDM_Types_Pkg(&outC->Context_dV_ebi_for_V_1);
  /* _L1017=(SDM_Types_Pkg::TransformV_realToV_odo#1)/ */
  TransformV_realToV_odo_init_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_odo_1);
  /* _L1033=(SDM_Types_Pkg::TransformL_realToL_int#1)/ */
  TransformL_realToL_int_init_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_1);
  /* _L1035=(SDM_Types_Pkg::TransformL_realToL_int#3)/ */
  TransformL_realToL_int_init_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_3);
  /* _L1036=(SDM_Types_Pkg::TransformL_realToL_int#4)/ */
  TransformL_realToL_int_init_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_4);
  /* _L1037=(SDM_Types_Pkg::TransformL_realToL_int#5)/ */
  TransformL_realToL_int_init_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_5);
  /* _L1038=(SDM_Types_Pkg::TransformL_realToL_int#6)/ */
  TransformL_realToL_int_init_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_6);
  /* _L1041=(SDM_Types_Pkg::TransformL_realToL_int#9)/ */
  TransformL_realToL_int_init_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_9);
  /* _L1042=(SDM_Types_Pkg::TransformL_realToL_int#10)/ */
  TransformL_realToL_int_init_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_10);
  /* _L88=(TargetLimits_Pkg::d_RSM_start#1)/ */
  d_RSM_start_init_TargetLimits_Pkg(&outC->Context_d_RSM_start_1);
  /* _L1043=(SDM_Types_Pkg::TransformL_realToL_int#11)/ */
  TransformL_realToL_int_init_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_11);
  /* _L1044=(SDM_Types_Pkg::TransformL_realToL_int#12)/ */
  TransformL_realToL_int_init_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_12);
  /* _L1045=(SDM_Types_Pkg::TransformL_realToL_int#13)/ */
  TransformL_realToL_int_init_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_13);
  /* _L1047=(SDM_Types_Pkg::TransformL_realToL_int#15)/ */
  TransformL_realToL_int_init_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_15);
  /* _L983=(TargetLimits_Pkg::TargetDistance#1)/ */
  TargetDistance_init_TargetLimits_Pkg(&outC->Context_TargetDistance_1);
  /* _L343=(TargetLimits_Pkg::d_P_target#1)/ */
  d_P_target_init_TargetLimits_Pkg(&outC->Context_d_P_target_1);
  /* _L1048=(SDM_Types_Pkg::TransformL_realToL_int#16)/ */
  TransformL_realToL_int_init_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_16);
  /* _L189=(TargetLimits_Pkg::MRSPPreindicationSelector#1)/ */
  MRSPPreindicationSelector_init_TargetLimits_Pkg(
    &outC->Context_MRSPPreindicationSelector_1);
  /* _L1031=(SDM_Types_Pkg::TransformV_realToV_odo#15)/ */
  TransformV_realToV_odo_init_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_odo_15);
  /* _L1060=(TargetLimits_Pkg::LowerOrHold#3)/ */
  LowerOrHold_init_TargetLimits_Pkg(&outC->Context_LowerOrHold_3);
  /* _L1029=(SDM_Types_Pkg::TransformV_realToV_odo#13)/ */
  TransformV_realToV_odo_init_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_odo_13);
  /* _L671=(TargetLimits_Pkg::v_release#1)/ */
  v_release_init_TargetLimits_Pkg(&outC->Context_v_release_1);
  /* _L910=(SDM_Types_Pkg::dV_sbi_for_V#1)/ */
  dV_sbi_for_V_init_SDM_Types_Pkg(&outC->Context_dV_sbi_for_V_1);
  /* _L1064=(SDM_Types_Pkg::TransformV_realToV_odo#18)/ */
  TransformV_realToV_odo_init_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_odo_18);
  /* _L24=(TargetLimits_Pkg::d_limits#2)/ */
  d_limits_init_TargetLimits_Pkg(&outC->Context_d_limits_2);
  /* _L1057=(TargetLimits_Pkg::LowerOrHold#1)/ */
  LowerOrHold_init_TargetLimits_Pkg(&outC->Context_LowerOrHold_1);
  /* _L1065=(SDM_Types_Pkg::TransformV_realToV_odo#19)/ */
  TransformV_realToV_odo_init_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_odo_19);
  /* _L642=(TargetLimits_Pkg::v_SBI1#1)/ */
  v_SBI1_init_TargetLimits_Pkg(&outC->Context_v_SBI1_1);
  /* _L1058=(TargetLimits_Pkg::LowerOrHold#2)/ */
  LowerOrHold_init_TargetLimits_Pkg(&outC->Context_LowerOrHold_2);
  /* _L1066=(SDM_Types_Pkg::TransformV_realToV_odo#20)/ */
  TransformV_realToV_odo_init_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_odo_20);
  /* _L641=(TargetLimits_Pkg::v_SBI2#1)/ */
  v_SBI2_init_TargetLimits_Pkg(&outC->Context_v_SBI2_1);
  /* _L909=(SDM_Types_Pkg::dV_sbi_for_V#2)/ */
  dV_sbi_for_V_init_SDM_Types_Pkg(&outC->Context_dV_sbi_for_V_2);
  /* _L1067=(SDM_Types_Pkg::TransformV_realToV_odo#21)/ */
  TransformV_realToV_odo_init_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_odo_21);
  /* _L995=(SDM_Types_Pkg::getMRSFromMRSP#1)/ */
  getMRSFromMRSP_init_SDM_Types_Pkg(&outC->Context_getMRSFromMRSP_1);
  /* _L863=(TargetLimits_Pkg::TargetSelector#5)/ */
  TargetSelector_init_TargetLimits_Pkg(&outC->Context_TargetSelector_5);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SDMLimitLocations_reset_TargetLimits_Pkg(
  outC_SDMLimitLocations_TargetLimits_Pkg *outC)
{
  /* _L907=(SDM_Types_Pkg::dV_warning_for_V#2)/ */
  dV_warning_for_V_reset_SDM_Types_Pkg(&outC->Context_dV_warning_for_V_2);
  /* _L908=(SDM_Types_Pkg::dV_warning_for_V#1)/ */
  dV_warning_for_V_reset_SDM_Types_Pkg(&outC->Context_dV_warning_for_V_1);
  /* _L911=(SDM_Types_Pkg::dV_ebi_for_V#2)/ */
  dV_ebi_for_V_reset_SDM_Types_Pkg(&outC->Context_dV_ebi_for_V_2);
  /* _L914=(SDM_Types_Pkg::dV_ebi_for_V#1)/ */
  dV_ebi_for_V_reset_SDM_Types_Pkg(&outC->Context_dV_ebi_for_V_1);
  /* _L1017=(SDM_Types_Pkg::TransformV_realToV_odo#1)/ */
  TransformV_realToV_odo_reset_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_odo_1);
  /* _L1033=(SDM_Types_Pkg::TransformL_realToL_int#1)/ */
  TransformL_realToL_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_1);
  /* _L1035=(SDM_Types_Pkg::TransformL_realToL_int#3)/ */
  TransformL_realToL_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_3);
  /* _L1036=(SDM_Types_Pkg::TransformL_realToL_int#4)/ */
  TransformL_realToL_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_4);
  /* _L1037=(SDM_Types_Pkg::TransformL_realToL_int#5)/ */
  TransformL_realToL_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_5);
  /* _L1038=(SDM_Types_Pkg::TransformL_realToL_int#6)/ */
  TransformL_realToL_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_6);
  /* _L1041=(SDM_Types_Pkg::TransformL_realToL_int#9)/ */
  TransformL_realToL_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_9);
  /* _L1042=(SDM_Types_Pkg::TransformL_realToL_int#10)/ */
  TransformL_realToL_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_10);
  /* _L88=(TargetLimits_Pkg::d_RSM_start#1)/ */
  d_RSM_start_reset_TargetLimits_Pkg(&outC->Context_d_RSM_start_1);
  /* _L1043=(SDM_Types_Pkg::TransformL_realToL_int#11)/ */
  TransformL_realToL_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_11);
  /* _L1044=(SDM_Types_Pkg::TransformL_realToL_int#12)/ */
  TransformL_realToL_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_12);
  /* _L1045=(SDM_Types_Pkg::TransformL_realToL_int#13)/ */
  TransformL_realToL_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_13);
  /* _L1047=(SDM_Types_Pkg::TransformL_realToL_int#15)/ */
  TransformL_realToL_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_15);
  /* _L983=(TargetLimits_Pkg::TargetDistance#1)/ */
  TargetDistance_reset_TargetLimits_Pkg(&outC->Context_TargetDistance_1);
  /* _L343=(TargetLimits_Pkg::d_P_target#1)/ */
  d_P_target_reset_TargetLimits_Pkg(&outC->Context_d_P_target_1);
  /* _L1048=(SDM_Types_Pkg::TransformL_realToL_int#16)/ */
  TransformL_realToL_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_16);
  /* _L189=(TargetLimits_Pkg::MRSPPreindicationSelector#1)/ */
  MRSPPreindicationSelector_reset_TargetLimits_Pkg(
    &outC->Context_MRSPPreindicationSelector_1);
  /* _L1031=(SDM_Types_Pkg::TransformV_realToV_odo#15)/ */
  TransformV_realToV_odo_reset_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_odo_15);
  /* _L1060=(TargetLimits_Pkg::LowerOrHold#3)/ */
  LowerOrHold_reset_TargetLimits_Pkg(&outC->Context_LowerOrHold_3);
  /* _L1029=(SDM_Types_Pkg::TransformV_realToV_odo#13)/ */
  TransformV_realToV_odo_reset_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_odo_13);
  /* _L671=(TargetLimits_Pkg::v_release#1)/ */
  v_release_reset_TargetLimits_Pkg(&outC->Context_v_release_1);
  /* _L910=(SDM_Types_Pkg::dV_sbi_for_V#1)/ */
  dV_sbi_for_V_reset_SDM_Types_Pkg(&outC->Context_dV_sbi_for_V_1);
  /* _L1064=(SDM_Types_Pkg::TransformV_realToV_odo#18)/ */
  TransformV_realToV_odo_reset_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_odo_18);
  /* _L24=(TargetLimits_Pkg::d_limits#2)/ */
  d_limits_reset_TargetLimits_Pkg(&outC->Context_d_limits_2);
  /* _L1057=(TargetLimits_Pkg::LowerOrHold#1)/ */
  LowerOrHold_reset_TargetLimits_Pkg(&outC->Context_LowerOrHold_1);
  /* _L1065=(SDM_Types_Pkg::TransformV_realToV_odo#19)/ */
  TransformV_realToV_odo_reset_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_odo_19);
  /* _L642=(TargetLimits_Pkg::v_SBI1#1)/ */
  v_SBI1_reset_TargetLimits_Pkg(&outC->Context_v_SBI1_1);
  /* _L1058=(TargetLimits_Pkg::LowerOrHold#2)/ */
  LowerOrHold_reset_TargetLimits_Pkg(&outC->Context_LowerOrHold_2);
  /* _L1066=(SDM_Types_Pkg::TransformV_realToV_odo#20)/ */
  TransformV_realToV_odo_reset_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_odo_20);
  /* _L641=(TargetLimits_Pkg::v_SBI2#1)/ */
  v_SBI2_reset_TargetLimits_Pkg(&outC->Context_v_SBI2_1);
  /* _L909=(SDM_Types_Pkg::dV_sbi_for_V#2)/ */
  dV_sbi_for_V_reset_SDM_Types_Pkg(&outC->Context_dV_sbi_for_V_2);
  /* _L1067=(SDM_Types_Pkg::TransformV_realToV_odo#21)/ */
  TransformV_realToV_odo_reset_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_odo_21);
  /* _L995=(SDM_Types_Pkg::getMRSFromMRSP#1)/ */
  getMRSFromMRSP_reset_SDM_Types_Pkg(&outC->Context_getMRSFromMRSP_1);
  /* _L863=(TargetLimits_Pkg::TargetSelector#5)/ */
  TargetSelector_reset_TargetLimits_Pkg(&outC->Context_TargetSelector_5);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TargetLimits_Pkg::SDMLimitLocations/
  @2: (math::Max#1)
  @1: (math::Min#1)
  @4: (math::Max#2)
  @3: (math::Min#2)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SDMLimitLocations_TargetLimits_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

