/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "surplusTractionDeltas_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::surplusTractionDeltas/ */
void surplusTractionDeltas_TargetLimits_Pkg(
  /* trainData_int/ */
  trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* T_b/ */
  t_Brake_t_SDMModelPkg *T_b,
  /* V_target/ */
  V_internal_real_Type_SDM_Types_Pkg V_target,
  /* T_part/ */
  T_trac_t_TargetLimits_Pkg *T_part,
  outC_surplusTractionDeltas_TargetLimits_Pkg *outC)
{
  outC->_L66 = kcg_lit_float32(0.4);
  outC->I2_Min_1_float32 = outC->_L66;
  outC->_L22_Min_1_float32 = outC->I2_Min_1_float32;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L98, odometry);
  outC->_L99 = outC->_L98.acceleration;
  /* _L145=(SDM_Types_Pkg::TransformA_intToA_real#1)/ */
  TransformA_intToA_real_SDM_Types_Pkg(
    outC->_L99,
    &outC->Context_TransformA_intToA_real_1);
  outC->_L145 = outC->Context_TransformA_intToA_real_1.acc_real;
  outC->I1_Min_1_float32 = outC->_L145;
  outC->_L21_Min_1_float32 = outC->I1_Min_1_float32;
  outC->_L25_Min_1_float32 = outC->_L21_Min_1_float32 <= outC->_L22_Min_1_float32;
  /* @1/_L24= */
  if (outC->_L25_Min_1_float32) {
    outC->_L24_Min_1_float32 = outC->_L21_Min_1_float32;
  }
  else {
    outC->_L24_Min_1_float32 = outC->_L22_Min_1_float32;
  }
  outC->Mi_Output_Min_1_float32 = outC->_L24_Min_1_float32;
  kcg_copy_t_Brake_t_SDMModelPkg(&outC->_L100, T_b);
  outC->_L105 = outC->_L100.service[1];
  outC->_L106 = outC->_L100.service[0];
  outC->_L111 = kcg_lit_float32(0.0);
  outC->_L109 = V_target;
  outC->_L110 = outC->_L109 == outC->_L111;
  /* _L107= */
  if (outC->_L110) {
    outC->_L108 = outC->_L106;
  }
  else {
    outC->_L108 = outC->_L105;
  }
  outC->I2_Min_3_float32 = outC->_L108;
  outC->_L22_Min_3_float32 = outC->I2_Min_3_float32;
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&outC->_L137, trainData_int);
  outC->_L159 = outC->_L137.T_b_limit;
  /* _L162=(SDM_Types_Pkg::TransformT_intToT_real#2)/ */
  TransformT_intToT_real_SDM_Types_Pkg(
    outC->_L159,
    &outC->_3_Context_TransformT_intToT_real_2);
  outC->_L162 = outC->_3_Context_TransformT_intToT_real_2.time_real;
  outC->I1_Min_3_float32 = outC->_L162;
  outC->_L21_Min_3_float32 = outC->I1_Min_3_float32;
  outC->_L25_Min_3_float32 = outC->_L21_Min_3_float32 <= outC->_L22_Min_3_float32;
  /* @4/_L24= */
  if (outC->_L25_Min_3_float32) {
    outC->_L24_Min_3_float32 = outC->_L21_Min_3_float32;
  }
  else {
    outC->_L24_Min_3_float32 = outC->_L22_Min_3_float32;
  }
  outC->Mi_Output_Min_3_float32 = outC->_L24_Min_3_float32;
  outC->_L161 = outC->Mi_Output_Min_3_float32;
  outC->_L150 = kcg_lit_float32(0.8);
  outC->_L157 = outC->_L150 * outC->_L161;
  outC->I2_Max_1_float32 = outC->_L157;
  outC->_L2_Max_1_float32 = outC->I2_Max_1_float32;
  outC->_L154 = kcg_lit_float32(5.0);
  outC->I1_Max_1_float32 = outC->_L154;
  outC->_L1_Max_1_float32 = outC->I1_Max_1_float32;
  outC->_L3_Max_1_float32 = outC->_L1_Max_1_float32 >= outC->_L2_Max_1_float32;
  /* @2/_L4= */
  if (outC->_L3_Max_1_float32) {
    outC->_L4_Max_1_float32 = outC->_L1_Max_1_float32;
  }
  else {
    outC->_L4_Max_1_float32 = outC->_L2_Max_1_float32;
  }
  outC->Ma_Output_Max_1_float32 = outC->_L4_Max_1_float32;
  outC->_L103 = outC->_L100.emergency[1];
  outC->_L104 = outC->_L100.emergency[0];
  /* _L107= */
  if (outC->_L110) {
    outC->_L107 = outC->_L104;
  }
  else {
    outC->_L107 = outC->_L103;
  }
  outC->I2_Min_2_float32 = outC->_L107;
  outC->_L22_Min_2_float32 = outC->I2_Min_2_float32;
  outC->I1_Min_2_float32 = outC->_L162;
  outC->_L21_Min_2_float32 = outC->I1_Min_2_float32;
  outC->_L25_Min_2_float32 = outC->_L21_Min_2_float32 <= outC->_L22_Min_2_float32;
  /* @3/_L24= */
  if (outC->_L25_Min_2_float32) {
    outC->_L24_Min_2_float32 = outC->_L21_Min_2_float32;
  }
  else {
    outC->_L24_Min_2_float32 = outC->_L22_Min_2_float32;
  }
  outC->Mi_Output_Min_2_float32 = outC->_L24_Min_2_float32;
  outC->_L160 = outC->Mi_Output_Min_2_float32;
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&outC->_L140, trainData_int);
  outC->_L142 = outC->_L140.T_traction_cut_off;
  /* _L158=(SDM_Types_Pkg::TransformT_intToT_real#1)/ */
  TransformT_intToT_real_SDM_Types_Pkg(
    outC->_L142,
    &outC->Context_TransformT_intToT_real_1);
  outC->_L158 = outC->Context_TransformT_intToT_real_1.time_real;
  outC->_L156 = outC->Ma_Output_Max_1_float32;
  outC->_L138 = outC->_L137.isSB_FBAvailable;
  /* _L152= */
  if (outC->_L138) {
    outC->_L152 = outC->_L154;
  }
  else {
    outC->_L152 = outC->_L156;
  }
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L95, odometry);
  outC->_L92 = outC->_L95.speed.v_upper;
  /* _L149=(SDM_Types_Pkg::TransformV_odoToV_real#1)/ */
  TransformV_odoToV_real_SDM_Types_Pkg(
    outC->_L92,
    &outC->_2_Context_TransformV_odoToV_real_1);
  outC->_L149 = outC->_2_Context_TransformV_odoToV_real_1.v_real;
  outC->_L97 = outC->_L95.speed.v_rawNominal;
  /* _L148=(SDM_Types_Pkg::TransformV_odoToV_real#2)/ */
  TransformV_odoToV_real_SDM_Types_Pkg(
    outC->_L97,
    &outC->_1_Context_TransformV_odoToV_real_2);
  outC->_L148 = outC->_1_Context_TransformV_odoToV_real_2.v_real;
  outC->_L93 = outC->_L95.speed.v_safeNominal;
  /* _L147=(SDM_Types_Pkg::TransformV_odoToV_real#3)/ */
  TransformV_odoToV_real_SDM_Types_Pkg(
    outC->_L93,
    &outC->Context_TransformV_odoToV_real_3);
  outC->_L147 = outC->Context_TransformV_odoToV_real_3.v_real;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L87, T_part);
  outC->_L144 = outC->_L87.inhComp;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L125, T_part);
  outC->_L143 = outC->_L125.inhComp;
  outC->_L141 = outC->_L140.isTCOAvailable;
  outC->_L139 = outC->_L137.isSB_CmdAvailable;
  outC->_L96 = outC->_L149 - outC->_L148;
  outC->_L89 = kcg_lit_float32(0.0);
  /* _L88= */
  if (outC->_L144) {
    outC->_L88 = outC->_L89;
  }
  else {
    outC->_L88 = outC->_L96;
  }
  /* _L115=(TargetLimits_Pkg::splitT_bs#1)/ */
  splitT_bs_TargetLimits_Pkg(
    outC->_L161,
    outC->_L138,
    outC->_L139,
    &outC->Context_splitT_bs_1);
  outC->_L115 = outC->Context_splitT_bs_1.bs1;
  outC->_L116 = outC->Context_splitT_bs_1.bs2;
  outC->T_bs2 = outC->_L116;
  outC->_L114 = outC->T_bs2;
  outC->_L11 = T_warning_SDM_Types_Pkg;
  outC->_L13 = outC->_L11 + outC->_L114;
  outC->_L10 = outC->_L158 - outC->_L13;
  /* _L9= */
  if (outC->_L141) {
    outC->_L9 = outC->_L10;
  }
  else {
    outC->_L9 = outC->_L158;
  }
  /* _L80=(SDM_Types_Pkg::limitPositive#1)/ */
  limitPositive_SDM_Types_Pkg(outC->_L9, &outC->Context_limitPositive_1);
  outC->_L80 = outC->Context_limitPositive_1.limited;
  outC->_L21 = outC->_L80 * outC->_L145;
  outC->T_be = outC->_L160;
  outC->_L112 = outC->T_be;
  outC->_L57 = outC->_L112 - outC->_L80;
  /* _L77=(SDM_Types_Pkg::limitPositive#3)/ */
  limitPositive_SDM_Types_Pkg(outC->_L57, &outC->Context_limitPositive_3);
  outC->_L77 = outC->Context_limitPositive_3.limited;
  outC->_L64 = outC->Mi_Output_Min_1_float32;
  /* _L79=(SDM_Types_Pkg::limitPositive#2)/ */
  limitPositive_SDM_Types_Pkg(outC->_L64, &outC->Context_limitPositive_2);
  outC->_L79 = outC->Context_limitPositive_2.limited;
  outC->_L16 = outC->_L79 * outC->_L77;
  outC->_L85[0] = outC->_L88;
  outC->_L85[1] = outC->_L21;
  outC->_L85[2] = outC->_L16;
  outC->_L136 = V_target;
  outC->T_Traction = outC->_L80;
  outC->_L132 = outC->T_Traction;
  outC->T_berem = outC->_L77;
  outC->_L131 = outC->T_berem;
  outC->_L123.Traction = outC->_L132;
  outC->_L123.berem = outC->_L131;
  outC->_L123.bs = outC->_L161;
  outC->_L123.bs1 = outC->_L115;
  outC->_L123.bs2 = outC->_L116;
  outC->_L123.inhComp = outC->_L143;
  outC->_L123.indication = outC->_L152;
  /* _L135=(TargetLimits_Pkg::calcBec#1)/ */
  calcBec_TargetLimits_Pkg(
    &outC->_L85,
    outC->_L136,
    outC->_L147,
    &outC->_L123,
    &outC->Context_calcBec_1);
  kcg_copy_bec_t_TargetLimits_Pkg(&outC->_L135, &outC->Context_calcBec_1.bec);
  kcg_copy_bec_t_TargetLimits_Pkg(&outC->bec, &outC->_L135);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->T, &outC->_L123);
  outC->V_est = outC->_L147;
  outC->V_ura = outC->_L96;
}

#ifndef KCG_USER_DEFINED_INIT
void surplusTractionDeltas_init_TargetLimits_Pkg(
  outC_surplusTractionDeltas_TargetLimits_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;

  outC->_L162 = kcg_lit_float32(0.0);
  outC->_L161 = kcg_lit_float32(0.0);
  outC->_L160 = kcg_lit_float32(0.0);
  outC->_L159 = kcg_lit_int32(0);
  outC->_L158 = kcg_lit_float32(0.0);
  outC->_L150 = kcg_lit_float32(0.0);
  outC->_L152 = kcg_lit_float32(0.0);
  outC->_L154 = kcg_lit_float32(0.0);
  outC->_L156 = kcg_lit_float32(0.0);
  outC->_L157 = kcg_lit_float32(0.0);
  outC->_L149 = kcg_lit_float32(0.0);
  outC->_L148 = kcg_lit_float32(0.0);
  outC->_L147 = kcg_lit_float32(0.0);
  outC->_L145 = kcg_lit_float32(0.0);
  outC->_L144 = kcg_true;
  outC->_L143 = kcg_true;
  outC->_L140.isSB_FBAvailable = kcg_true;
  outC->_L140.isSB_CmdAvailable = kcg_true;
  outC->_L140.isTCOAvailable = kcg_true;
  outC->_L140.T_traction_cut_off = kcg_lit_int32(0);
  outC->_L140.offsetAntennaL1 = kcg_lit_int32(0);
  outC->_L140.T_b_limit = kcg_lit_int32(0);
  outC->_L141 = kcg_true;
  outC->_L142 = kcg_lit_int32(0);
  outC->_L139 = kcg_true;
  outC->_L138 = kcg_true;
  outC->_L137.isSB_FBAvailable = kcg_true;
  outC->_L137.isSB_CmdAvailable = kcg_true;
  outC->_L137.isTCOAvailable = kcg_true;
  outC->_L137.T_traction_cut_off = kcg_lit_int32(0);
  outC->_L137.offsetAntennaL1 = kcg_lit_int32(0);
  outC->_L137.T_b_limit = kcg_lit_int32(0);
  outC->_L136 = kcg_lit_float32(0.0);
  outC->_L135.v = kcg_lit_float32(0.0);
  outC->_L135.d = kcg_lit_float32(0.0);
  outC->_L132 = kcg_lit_float32(0.0);
  outC->_L131 = kcg_lit_float32(0.0);
  outC->_L125.Traction = kcg_lit_float32(0.0);
  outC->_L125.berem = kcg_lit_float32(0.0);
  outC->_L125.bs = kcg_lit_float32(0.0);
  outC->_L125.bs1 = kcg_lit_float32(0.0);
  outC->_L125.bs2 = kcg_lit_float32(0.0);
  outC->_L125.inhComp = kcg_true;
  outC->_L125.indication = kcg_lit_float32(0.0);
  outC->_L123.Traction = kcg_lit_float32(0.0);
  outC->_L123.berem = kcg_lit_float32(0.0);
  outC->_L123.bs = kcg_lit_float32(0.0);
  outC->_L123.bs1 = kcg_lit_float32(0.0);
  outC->_L123.bs2 = kcg_lit_float32(0.0);
  outC->_L123.inhComp = kcg_true;
  outC->_L123.indication = kcg_lit_float32(0.0);
  outC->_L115 = kcg_lit_float32(0.0);
  outC->_L116 = kcg_lit_float32(0.0);
  outC->_L114 = kcg_lit_float32(0.0);
  outC->_L112 = kcg_lit_float32(0.0);
  outC->_L111 = kcg_lit_float32(0.0);
  outC->_L110 = kcg_true;
  outC->_L109 = kcg_lit_float32(0.0);
  outC->_L108 = kcg_lit_float32(0.0);
  outC->_L107 = kcg_lit_float32(0.0);
  outC->_L105 = kcg_lit_float32(0.0);
  outC->_L106 = kcg_lit_float32(0.0);
  outC->_L103 = kcg_lit_float32(0.0);
  outC->_L104 = kcg_lit_float32(0.0);
  for (idx = 0; idx < 2; idx++) {
    outC->_L100.emergency[idx] = kcg_lit_float32(0.0);
  }
  for (idx1 = 0; idx1 < 2; idx1++) {
    outC->_L100.service[idx1] = kcg_lit_float32(0.0);
  }
  outC->_L98.valid = kcg_true;
  outC->_L98.timestamp = kcg_lit_int32(0);
  outC->_L98.odo.o_nominal = kcg_lit_int32(0);
  outC->_L98.odo.o_min = kcg_lit_int32(0);
  outC->_L98.odo.o_max = kcg_lit_int32(0);
  outC->_L98.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L98.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L98.speed.v_lower = kcg_lit_int32(0);
  outC->_L98.speed.v_upper = kcg_lit_int32(0);
  outC->_L98.acceleration = kcg_lit_int32(0);
  outC->_L98.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L98.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L99 = kcg_lit_int32(0);
  outC->_L92 = kcg_lit_int32(0);
  outC->_L93 = kcg_lit_int32(0);
  outC->_L95.valid = kcg_true;
  outC->_L95.timestamp = kcg_lit_int32(0);
  outC->_L95.odo.o_nominal = kcg_lit_int32(0);
  outC->_L95.odo.o_min = kcg_lit_int32(0);
  outC->_L95.odo.o_max = kcg_lit_int32(0);
  outC->_L95.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L95.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L95.speed.v_lower = kcg_lit_int32(0);
  outC->_L95.speed.v_upper = kcg_lit_int32(0);
  outC->_L95.acceleration = kcg_lit_int32(0);
  outC->_L95.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L95.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L96 = kcg_lit_float32(0.0);
  outC->_L97 = kcg_lit_int32(0);
  outC->_L89 = kcg_lit_float32(0.0);
  outC->_L88 = kcg_lit_float32(0.0);
  outC->_L87.Traction = kcg_lit_float32(0.0);
  outC->_L87.berem = kcg_lit_float32(0.0);
  outC->_L87.bs = kcg_lit_float32(0.0);
  outC->_L87.bs1 = kcg_lit_float32(0.0);
  outC->_L87.bs2 = kcg_lit_float32(0.0);
  outC->_L87.inhComp = kcg_true;
  outC->_L87.indication = kcg_lit_float32(0.0);
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->_L85[idx2] = kcg_lit_float32(0.0);
  }
  outC->_L80 = kcg_lit_float32(0.0);
  outC->_L79 = kcg_lit_float32(0.0);
  outC->_L77 = kcg_lit_float32(0.0);
  outC->_L66 = kcg_lit_float32(0.0);
  outC->_L64 = kcg_lit_float32(0.0);
  outC->_L57 = kcg_lit_float32(0.0);
  outC->_L21 = kcg_lit_float32(0.0);
  outC->_L16 = kcg_lit_float32(0.0);
  outC->_L13 = kcg_lit_float32(0.0);
  outC->_L11 = kcg_lit_float32(0.0);
  outC->_L10 = kcg_lit_float32(0.0);
  outC->_L9 = kcg_lit_float32(0.0);
  outC->T_Traction = kcg_lit_float32(0.0);
  outC->T_berem = kcg_lit_float32(0.0);
  outC->T_bs2 = kcg_lit_float32(0.0);
  outC->T_be = kcg_lit_float32(0.0);
  outC->_L21_Min_3_float32 = kcg_lit_float32(0.0);
  outC->_L22_Min_3_float32 = kcg_lit_float32(0.0);
  outC->_L24_Min_3_float32 = kcg_lit_float32(0.0);
  outC->_L25_Min_3_float32 = kcg_true;
  outC->I1_Min_3_float32 = kcg_lit_float32(0.0);
  outC->I2_Min_3_float32 = kcg_lit_float32(0.0);
  outC->Mi_Output_Min_3_float32 = kcg_lit_float32(0.0);
  outC->_L21_Min_2_float32 = kcg_lit_float32(0.0);
  outC->_L22_Min_2_float32 = kcg_lit_float32(0.0);
  outC->_L24_Min_2_float32 = kcg_lit_float32(0.0);
  outC->_L25_Min_2_float32 = kcg_true;
  outC->I1_Min_2_float32 = kcg_lit_float32(0.0);
  outC->I2_Min_2_float32 = kcg_lit_float32(0.0);
  outC->Mi_Output_Min_2_float32 = kcg_lit_float32(0.0);
  outC->_L1_Max_1_float32 = kcg_lit_float32(0.0);
  outC->_L2_Max_1_float32 = kcg_lit_float32(0.0);
  outC->_L3_Max_1_float32 = kcg_true;
  outC->_L4_Max_1_float32 = kcg_lit_float32(0.0);
  outC->I1_Max_1_float32 = kcg_lit_float32(0.0);
  outC->I2_Max_1_float32 = kcg_lit_float32(0.0);
  outC->Ma_Output_Max_1_float32 = kcg_lit_float32(0.0);
  outC->_L21_Min_1_float32 = kcg_lit_float32(0.0);
  outC->_L22_Min_1_float32 = kcg_lit_float32(0.0);
  outC->_L24_Min_1_float32 = kcg_lit_float32(0.0);
  outC->_L25_Min_1_float32 = kcg_true;
  outC->I1_Min_1_float32 = kcg_lit_float32(0.0);
  outC->I2_Min_1_float32 = kcg_lit_float32(0.0);
  outC->Mi_Output_Min_1_float32 = kcg_lit_float32(0.0);
  outC->V_ura = kcg_lit_float32(0.0);
  outC->T.Traction = kcg_lit_float32(0.0);
  outC->T.berem = kcg_lit_float32(0.0);
  outC->T.bs = kcg_lit_float32(0.0);
  outC->T.bs1 = kcg_lit_float32(0.0);
  outC->T.bs2 = kcg_lit_float32(0.0);
  outC->T.inhComp = kcg_true;
  outC->T.indication = kcg_lit_float32(0.0);
  outC->V_est = kcg_lit_float32(0.0);
  outC->bec.v = kcg_lit_float32(0.0);
  outC->bec.d = kcg_lit_float32(0.0);
  /* _L135=(TargetLimits_Pkg::calcBec#1)/ */
  calcBec_init_TargetLimits_Pkg(&outC->Context_calcBec_1);
  /* _L79=(SDM_Types_Pkg::limitPositive#2)/ */
  limitPositive_init_SDM_Types_Pkg(&outC->Context_limitPositive_2);
  /* _L77=(SDM_Types_Pkg::limitPositive#3)/ */
  limitPositive_init_SDM_Types_Pkg(&outC->Context_limitPositive_3);
  /* _L80=(SDM_Types_Pkg::limitPositive#1)/ */
  limitPositive_init_SDM_Types_Pkg(&outC->Context_limitPositive_1);
  /* _L115=(TargetLimits_Pkg::splitT_bs#1)/ */
  splitT_bs_init_TargetLimits_Pkg(&outC->Context_splitT_bs_1);
  /* _L147=(SDM_Types_Pkg::TransformV_odoToV_real#3)/ */
  TransformV_odoToV_real_init_SDM_Types_Pkg(
    &outC->Context_TransformV_odoToV_real_3);
  /* _L148=(SDM_Types_Pkg::TransformV_odoToV_real#2)/ */
  TransformV_odoToV_real_init_SDM_Types_Pkg(
    &outC->_1_Context_TransformV_odoToV_real_2);
  /* _L149=(SDM_Types_Pkg::TransformV_odoToV_real#1)/ */
  TransformV_odoToV_real_init_SDM_Types_Pkg(
    &outC->_2_Context_TransformV_odoToV_real_1);
  /* _L158=(SDM_Types_Pkg::TransformT_intToT_real#1)/ */
  TransformT_intToT_real_init_SDM_Types_Pkg(
    &outC->Context_TransformT_intToT_real_1);
  /* _L162=(SDM_Types_Pkg::TransformT_intToT_real#2)/ */
  TransformT_intToT_real_init_SDM_Types_Pkg(
    &outC->_3_Context_TransformT_intToT_real_2);
  /* _L145=(SDM_Types_Pkg::TransformA_intToA_real#1)/ */
  TransformA_intToA_real_init_SDM_Types_Pkg(
    &outC->Context_TransformA_intToA_real_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void surplusTractionDeltas_reset_TargetLimits_Pkg(
  outC_surplusTractionDeltas_TargetLimits_Pkg *outC)
{
  /* _L135=(TargetLimits_Pkg::calcBec#1)/ */
  calcBec_reset_TargetLimits_Pkg(&outC->Context_calcBec_1);
  /* _L79=(SDM_Types_Pkg::limitPositive#2)/ */
  limitPositive_reset_SDM_Types_Pkg(&outC->Context_limitPositive_2);
  /* _L77=(SDM_Types_Pkg::limitPositive#3)/ */
  limitPositive_reset_SDM_Types_Pkg(&outC->Context_limitPositive_3);
  /* _L80=(SDM_Types_Pkg::limitPositive#1)/ */
  limitPositive_reset_SDM_Types_Pkg(&outC->Context_limitPositive_1);
  /* _L115=(TargetLimits_Pkg::splitT_bs#1)/ */
  splitT_bs_reset_TargetLimits_Pkg(&outC->Context_splitT_bs_1);
  /* _L147=(SDM_Types_Pkg::TransformV_odoToV_real#3)/ */
  TransformV_odoToV_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformV_odoToV_real_3);
  /* _L148=(SDM_Types_Pkg::TransformV_odoToV_real#2)/ */
  TransformV_odoToV_real_reset_SDM_Types_Pkg(
    &outC->_1_Context_TransformV_odoToV_real_2);
  /* _L149=(SDM_Types_Pkg::TransformV_odoToV_real#1)/ */
  TransformV_odoToV_real_reset_SDM_Types_Pkg(
    &outC->_2_Context_TransformV_odoToV_real_1);
  /* _L158=(SDM_Types_Pkg::TransformT_intToT_real#1)/ */
  TransformT_intToT_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformT_intToT_real_1);
  /* _L162=(SDM_Types_Pkg::TransformT_intToT_real#2)/ */
  TransformT_intToT_real_reset_SDM_Types_Pkg(
    &outC->_3_Context_TransformT_intToT_real_2);
  /* _L145=(SDM_Types_Pkg::TransformA_intToA_real#1)/ */
  TransformA_intToA_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformA_intToA_real_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TargetLimits_Pkg::surplusTractionDeltas/
  @1: (math::Min#1)
  @4: (math::Min#3)
  @2: (math::Max#1)
  @3: (math::Min#2)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** surplusTractionDeltas_TargetLimits_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

