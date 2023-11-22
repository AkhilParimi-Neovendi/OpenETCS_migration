/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetSelector_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::TargetSelector/ */
void TargetSelector_TargetLimits_Pkg(
  /* Targets/ */
  TargetCollection_T_TargetManagement_types *Targets,
  /* Curves/ */
  CurveCollection_T_CalcBrakingCurves_types *Curves,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* trainData_int/ */
  trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* T_b/ */
  t_Brake_t_SDMModelPkg *T_b,
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* trainLocations/ */
  TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  outC_TargetSelector_TargetLimits_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  TargetIteratorAkku_TargetLimits_Pkg acc;
  kcg_size idx6;
  V_internal_real_Type_SDM_Types_Pkg op_call;
  kcg_bool _7_op_call;
  kcg_int32 noname;
  kcg_bool _8_noname;
  kcg_bool _9_noname;
  kcg_bool _10_noname;

  outC->_L274 = EoA_TargetManagement_types;
  kcg_copy_TargetCollection_T_TargetManagement_types(&outC->_L118, Targets);
  kcg_copy_Target_real_T_TargetManagement_types(
    &outC->_L126,
    &outC->_L118.EOA_target);
  kcg_copy_Target_real_T_TargetManagement_types(&outC->TargetEOA, &outC->_L126);
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L272, &outC->TargetEOA);
  outC->_L273 = outC->_L272.targetType;
  outC->_L275 = outC->_L273 == outC->_L274;
  outC->every = outC->_L275;
  kcg_copy_CurveCollection_T_CalcBrakingCurves_types(&outC->_L113, Curves);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->_L107,
    &outC->_L113.EOA_SBD_curve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->CurveSBD, &outC->_L107);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L267, &outC->CurveSBD);
  outC->_L55 = kcg_lit_int32(-1);
  outC->_L241 = kcg_lit_float32(0.0);
  outC->_L242 = kcg_lit_int32(-1);
  outC->_L240 = invalid_TargetManagement_types;
  outC->_L243.v = outC->_L241;
  outC->_L243.d = outC->_L241;
  outC->_L179 = kcg_true;
  outC->_L178 = kcg_false;
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L177, NationalValues);
  outC->_L176 = outC->_L177.q_nvinhsmicperm;
  /* _L180= */
  switch (outC->_L176) {
    case Q_NVINHSMICPERM_Yes :
      outC->_L180 = outC->_L179;
      break;
    default :
      outC->_L180 = outC->_L178;
      break;
  }
  outC->_L238.Traction = outC->_L241;
  outC->_L238.berem = outC->_L241;
  outC->_L238.bs = outC->_L241;
  outC->_L238.bs1 = outC->_L241;
  outC->_L238.bs2 = outC->_L241;
  outC->_L238.inhComp = outC->_L180;
  outC->_L238.indication = outC->_L241;
  outC->_L239.SBI2 = outC->_L241;
  outC->_L239.index = outC->_L242;
  outC->_L239.ttype = outC->_L240;
  kcg_copy_bec_t_TargetLimits_Pkg(&outC->_L239.bec, &outC->_L243);
  outC->_L239.V_est = outC->_L241;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L239.T, &outC->_L238);
  outC->_L239.V_ura = outC->_L241;
  outC->_L239.V_P_MRDT_ebd = outC->_L241;
  outC->_L239.V_P_MRDT_index = outC->_L242;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->_L125,
    &outC->_L118.MRSP_targetList);
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->TargetsMRSP,
    &outC->_L125);
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->_L132,
    &outC->TargetsMRSP);
  kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
    &outC->_L106,
    &outC->_L113.MRSP_EBD_curves);
  kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
    &outC->CurvesMRSP,
    &outC->_L106);
  kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
    &outC->_L115,
    &outC->CurvesMRSP);
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&outC->_L211, trainData_int);
  /* _L42/ */
  for (idx = 0; idx < 110; idx++) {
    kcg_copy_trainData_internal_t_SDM_Types_Pkg(&outC->_L42[idx], &outC->_L211);
  }
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L210, odometry);
  /* _L33/ */
  for (idx1 = 0; idx1 < 110; idx1++) {
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L33[idx1], &outC->_L210);
  }
  kcg_copy_t_Brake_t_SDMModelPkg(&outC->_L209, T_b);
  /* _L40/ */
  for (idx2 = 0; idx2 < 110; idx2++) {
    kcg_copy_t_Brake_t_SDMModelPkg(&outC->_L40[idx2], &outC->_L209);
  }
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&outC->_L244, trainLocations);
  outC->_L245 = outC->_L244.d_maxSafeFrontEndPos;
  /* _L286/ */
  for (idx3 = 0; idx3 < 110; idx3++) {
    outC->_L286[idx3] = outC->_L245;
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->_L109,
    &outC->_L113.GUI_curve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->GuiCurve, &outC->_L109);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L254, &outC->GuiCurve);
  /* _L255/ */
  for (idx4 = 0; idx4 < 110; idx4++) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
      &outC->_L255[idx4],
      &outC->_L254);
  }
  outC->_L110 = outC->_L113.GUI_curve_enabled;
  outC->GuiCurveEn = outC->_L110;
  outC->_L253 = outC->GuiCurveEn;
  /* _L256/ */
  for (idx5 = 0; idx5 < 110; idx5++) {
    outC->_L256[idx5] = outC->_L253;
  }
  outC->_L36 = kcg_true;
  kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&outC->_L29, &outC->_L239);
  /* _L28= */
  if (outC->_L36) {
    /* _L28= */
    for (idx6 = 0; idx6 < 110; idx6++) {
      kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&acc, &outC->_L29);
      /* _L28=(TargetLimits_Pkg::TargetIterator#2)/ */
      TargetIterator_TargetLimits_Pkg(
        /* _L28= */(kcg_int32) idx6,
        &acc,
        &outC->_L132[idx6],
        &outC->_L115[idx6],
        &outC->_L42[idx6],
        &outC->_L33[idx6],
        &outC->_L40[idx6],
        outC->_L286[idx6],
        &outC->_L255[idx6],
        outC->_L256[idx6],
        &outC->Context_TargetIterator_2[idx6]);
      kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(
        &outC->_L29,
        &outC->Context_TargetIterator_2[idx6].Akku_out);
      outC->_L28 = /* _L28= */(kcg_int32) (idx6 + 1);
      /* _L28= */
      if (!outC->Context_TargetIterator_2[idx6].goOn) {
        break;
      }
    }
  }
  else {
    outC->_L28 = kcg_lit_int32(0);
  }
  kcg_copy_Target_real_T_TargetManagement_types(
    &outC->_L127,
    &outC->_L118.SvL_LoA_target);
  kcg_copy_Target_real_T_TargetManagement_types(&outC->TargetSvL, &outC->_L127);
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L130, &outC->TargetSvL);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->_L108,
    &outC->_L113.SvL_LoA_EBD_curve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->CurveSvL, &outC->_L108);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L117, &outC->CurveSvL);
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&outC->_L199, trainData_int);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L173, odometry);
  kcg_copy_t_Brake_t_SDMModelPkg(&outC->_L200, T_b);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L251, &outC->GuiCurve);
  outC->_L252 = outC->GuiCurveEn;
  /* _L59=(TargetLimits_Pkg::TargetIterator#4)/ */
  TargetIterator_TargetLimits_Pkg(
    outC->_L55,
    &outC->_L29,
    &outC->_L130,
    &outC->_L117,
    &outC->_L199,
    &outC->_L173,
    &outC->_L200,
    outC->_L245,
    &outC->_L251,
    outC->_L252,
    &outC->Context_TargetIterator_4);
  outC->_L59 = outC->Context_TargetIterator_4.goOn;
  kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(
    &outC->_L60,
    &outC->Context_TargetIterator_4.Akku_out);
  outC->_L202 = outC->_L60.V_est;
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&outC->_L268, trainLocations);
  outC->_L269 = outC->_L268.d_est_frontendPos;
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L271, &outC->TargetEOA);
  outC->_L270 = outC->_L271.distance;
  outC->_L259 = T_driver_SDM_Types_Pkg;
  outC->_L277 = outC->GuiCurveEn;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L276, &outC->GuiCurve);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L195, &outC->_L60.T);
  if (outC->every) {
    /* _L264=(TargetLimits_Pkg::v_SBI1#2)/ */
    v_SBI1_TargetLimits_Pkg(
      &outC->_L267,
      outC->_L202,
      outC->_L269,
      outC->_L270,
      outC->_L259,
      outC->_L277,
      &outC->_L276,
      &outC->_L195,
      &outC->Context_v_SBI1_2);
    _7_op_call = outC->Context_v_SBI1_2.valid;
    op_call = outC->Context_v_SBI1_2.V_SBI1;
  }
  outC->_L124 = outC->_L118.updatedTargetList;
  _10_noname = outC->_L124;
  outC->_L303 = kcg_true;
  outC->freshMRDT = outC->_L303;
  outC->_L280 = invalid_TargetManagement_types;
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L152, &outC->TargetSvL);
  outC->_L257 = outC->_L60.V_P_MRDT_index;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->_L162,
    &outC->TargetsMRSP);
  if ((kcg_lit_int32(0) <= outC->_L257) & (outC->_L257 < kcg_lit_int32(110))) {
    kcg_copy_Target_real_T_TargetManagement_types(
      &outC->_L157,
      &outC->_L162[outC->_L257]);
  }
  else {
    kcg_copy_Target_real_T_TargetManagement_types(&outC->_L157, &outC->_L152);
  }
  outC->_L279 = outC->_L157.targetType;
  outC->_L281 = outC->_L279 != outC->_L280;
  outC->_L278 = outC->_L60.V_P_MRDT_ebd;
  if (outC->every) {
    outC->_L264 = _7_op_call;
    outC->_L265 = op_call;
  }
  else {
    outC->_L264 = kcg_false;
    outC->_L265 = kcg_lit_float32(0.0);
  }
  /* _L261=(TargetLimits_Pkg::selectLEValid#1)/ */
  selectLEValid_TargetLimits_Pkg(
    outC->_L281,
    outC->_L278,
    outC->_L264,
    outC->_L265,
    &outC->Context_selectLEValid_1);
  outC->_L261 = outC->Context_selectLEValid_1.isUpper;
  outC->_L262 = outC->Context_selectLEValid_1.valid;
  outC->_L263 = outC->Context_selectLEValid_1.o;
  /* _L302=(SDM_Types_Pkg::TransformV_realToV_odo#1)/ */
  TransformV_realToV_odo_SDM_Types_Pkg(
    outC->_L263,
    &outC->Context_TransformV_realToV_odo_1);
  outC->_L302 = outC->Context_TransformV_realToV_odo_1.v_odo;
  outC->_L298 = outC->_L157.speed;
  outC->_L297 = invalid_TargetManagement_types;
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L283, &outC->TargetEOA);
  /* _L282= */
  if (outC->_L261) {
    kcg_copy_Target_real_T_TargetManagement_types(&outC->_L282, &outC->_L157);
  }
  else {
    kcg_copy_Target_real_T_TargetManagement_types(&outC->_L282, &outC->_L283);
  }
  outC->_L291 = outC->_L282.targetType;
  outC->_L296 = outC->_L297 != outC->_L291;
  outC->_L293 = outC->_L282.speed;
  /* _L295=(SDM_Types_Pkg::TransformV_realToV_int#1)/ */
  TransformV_realToV_int_SDM_Types_Pkg(
    outC->_L293,
    &outC->Context_TransformV_realToV_int_1);
  outC->_L295 = outC->Context_TransformV_realToV_int_1.v_int;
  outC->_L292 = outC->_L282.distance;
  /* _L294=(SDM_Types_Pkg::TransformL_realToL_int#1)/ */
  TransformL_realToL_int_SDM_Types_Pkg(
    outC->_L292,
    &outC->Context_TransformL_realToL_int_1);
  outC->_L294 = outC->Context_TransformL_realToL_int_1.loc_int;
  outC->_L287.targetType = outC->_L291;
  outC->_L287.distance = outC->_L294;
  outC->_L287.speed = outC->_L295;
  outC->_L287.valid = outC->_L296;
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L134, &outC->TargetSvL);
  outC->_L65 = outC->_L134.distance;
  outC->D_SvL = outC->_L65;
  _9_noname = outC->_L262;
  outC->V_P_MRDT = outC->_L302;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L266, &outC->CurveSBD);
  outC->_L250 = outC->GuiCurveEn;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L249, &outC->GuiCurve);
  outC->D_maxsafefront = outC->_L245;
  outC->_L246 = outC->_L244.d_est_frontendPos;
  outC->D_estfront = outC->_L246;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L153, &outC->CurveSvL);
  outC->_L80 = outC->_L60.index;
  kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
    &outC->_L156,
    &outC->CurvesMRSP);
  if ((kcg_lit_int32(0) <= outC->_L80) & (outC->_L80 < kcg_lit_int32(110))) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
      &outC->_L158,
      &outC->_L156[outC->_L80]);
  }
  else {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L158, &outC->_L153);
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->MostRestrictiveEBDCurve,
    &outC->_L158);
  outC->V_Target = outC->_L298;
  outC->_L205 = invalid_TargetManagement_types;
  outC->_L203 = outC->_L60.ttype;
  outC->_L204 = outC->_L203 != outC->_L205;
  outC->_L201 = outC->_L60.V_ura;
  outC->_L196 = outC->_L60.SBI2;
  outC->valid_D_SBI2 = outC->_L204;
  outC->D_SBI2 = outC->_L196;
  kcg_copy_bec_t_TargetLimits_Pkg(&outC->_L194, &outC->_L60.bec);
  kcg_copy_bec_t_TargetLimits_Pkg(&outC->bec, &outC->_L194);
  outC->V_ura = outC->_L201;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->T, &outC->_L195);
  kcg_copy_Target_T_TargetManagement_types(
    &outC->MostRestrictiveDisplayedTarget,
    &outC->_L287);
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L133, &outC->TargetEOA);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->GUIcurve, &outC->_L249);
  outC->GUICurveEnabled = outC->_L250;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->SBDcurve, &outC->_L266);
  outC->_L69 = outC->_L133.distance;
  outC->D_EOA = outC->_L69;
  _8_noname = outC->_L59;
  outC->v_est = outC->_L202;
  noname = outC->_L28;
}

#ifndef KCG_USER_DEFINED_INIT
void TargetSelector_init_TargetLimits_Pkg(
  outC_TargetSelector_TargetLimits_Pkg *outC)
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
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;
  kcg_size idx17;
  kcg_size idx18;
  kcg_size idx19;
  kcg_size idx20;
  kcg_size idx21;
  kcg_size idx22;
  kcg_size idx23;
  kcg_size idx24;
  kcg_size idx25;
  kcg_size idx26;
  kcg_size idx27;
  kcg_size idx28;
  kcg_size idx29;
  kcg_size idx30;
  kcg_size idx31;
  kcg_size idx32;
  kcg_size idx33;
  kcg_size idx34;
  kcg_size idx35;
  kcg_size idx36;
  kcg_size idx37;
  kcg_size idx38;
  kcg_size idx39;
  kcg_size idx40;
  kcg_size idx41;
  kcg_size idx42;
  kcg_size idx43;
  kcg_size idx44;
  kcg_size idx45;
  kcg_size idx46;
  kcg_size idx47;
  kcg_size idx48;
  kcg_size idx49;
  kcg_size idx50;
  kcg_size idx51;
  kcg_size idx52;
  kcg_size idx53;
  kcg_size idx54;
  kcg_size idx55;
  kcg_size idx56;
  kcg_size idx57;
  kcg_size idx58;
  kcg_size idx59;
  kcg_size idx60;
  kcg_size idx61;
  kcg_size idx62;
  kcg_size idx63;
  kcg_size idx64;
  kcg_size idx65;
  kcg_size idx66;
  kcg_size idx67;
  kcg_size idx68;
  kcg_size idx69;
  kcg_size idx70;
  kcg_size idx71;
  kcg_size idx72;
  kcg_size idx73;
  kcg_size idx74;
  kcg_size idx75;
  kcg_size idx76;
  kcg_size idx77;
  kcg_size idx78;
  kcg_size idx79;
  kcg_size idx80;
  kcg_size idx81;
  kcg_size idx82;
  kcg_size idx83;
  kcg_size idx84;
  kcg_size idx85;
  kcg_size idx86;
  kcg_size idx87;
  kcg_size idx88;
  kcg_size idx89;
  kcg_size idx90;
  kcg_size idx91;
  kcg_size idx92;
  kcg_size idx93;
  kcg_size idx94;
  kcg_size idx95;
  kcg_size idx96;
  kcg_size idx97;
  kcg_size idx98;
  kcg_size idx99;
  kcg_size idx100;
  kcg_size idx101;
  kcg_size idx102;
  kcg_size idx103;
  kcg_size idx104;
  kcg_size idx105;
  kcg_size idx106;
  kcg_size idx107;
  kcg_size idx108;
  kcg_size idx109;
  kcg_size idx110;
  kcg_size idx111;
  kcg_size idx112;
  kcg_size idx113;
  kcg_size idx114;
  kcg_size idx115;
  kcg_size idx116;
  kcg_size idx117;
  kcg_size idx118;
  kcg_size idx119;
  kcg_size idx120;
  kcg_size idx121;
  kcg_size idx122;
  kcg_size idx123;
  kcg_size idx124;
  kcg_size idx125;
  kcg_size idx126;
  kcg_size idx127;
  kcg_size idx128;
  kcg_size idx129;
  kcg_size idx130;
  kcg_size idx131;
  kcg_size idx132;
  kcg_size idx133;
  kcg_size idx134;

  outC->_L303 = kcg_true;
  outC->_L302 = kcg_lit_int32(0);
  outC->_L298 = kcg_lit_float32(0.0);
  outC->_L296 = kcg_true;
  outC->_L297 = EoA_TargetManagement_types;
  outC->_L295 = kcg_lit_int32(0);
  outC->_L294 = kcg_lit_int32(0);
  outC->_L291 = EoA_TargetManagement_types;
  outC->_L292 = kcg_lit_float32(0.0);
  outC->_L293 = kcg_lit_float32(0.0);
  outC->_L287.targetType = EoA_TargetManagement_types;
  outC->_L287.distance = kcg_lit_int32(0);
  outC->_L287.speed = kcg_lit_int32(0);
  outC->_L287.valid = kcg_true;
  for (idx1 = 0; idx1 < 110; idx1++) {
    outC->_L286[idx1] = kcg_lit_float32(0.0);
  }
  outC->_L283.targetType = EoA_TargetManagement_types;
  outC->_L283.distance = kcg_lit_float32(0.0);
  outC->_L283.speed = kcg_lit_float32(0.0);
  outC->_L282.targetType = EoA_TargetManagement_types;
  outC->_L282.distance = kcg_lit_float32(0.0);
  outC->_L282.speed = kcg_lit_float32(0.0);
  outC->_L279 = EoA_TargetManagement_types;
  outC->_L280 = EoA_TargetManagement_types;
  outC->_L281 = kcg_true;
  outC->_L278 = kcg_lit_float32(0.0);
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L276.distances[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L276.speeds[idx3] = kcg_lit_float32(0.0);
  }
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L276.accelerations[idx4] = kcg_lit_float32(0.0);
  }
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L276.valid[idx5] = kcg_true;
  }
  outC->_L277 = kcg_true;
  outC->_L273 = EoA_TargetManagement_types;
  outC->_L274 = EoA_TargetManagement_types;
  outC->_L275 = kcg_true;
  outC->_L272.targetType = EoA_TargetManagement_types;
  outC->_L272.distance = kcg_lit_float32(0.0);
  outC->_L272.speed = kcg_lit_float32(0.0);
  outC->_L270 = kcg_lit_float32(0.0);
  outC->_L271.targetType = EoA_TargetManagement_types;
  outC->_L271.distance = kcg_lit_float32(0.0);
  outC->_L271.speed = kcg_lit_float32(0.0);
  outC->_L268.trainPositionIsValid = kcg_true;
  outC->_L268.d_est_frontendPos = kcg_lit_float32(0.0);
  outC->_L268.d_minSafeFrontEndPos = kcg_lit_float32(0.0);
  outC->_L268.d_maxSafeFrontEndPos = kcg_lit_float32(0.0);
  outC->_L268.d_LRBG = kcg_lit_float32(0.0);
  outC->_L268.d_accLRBG = kcg_lit_float32(0.0);
  outC->_L269 = kcg_lit_float32(0.0);
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L267.distances[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L267.speeds[idx7] = kcg_lit_float32(0.0);
  }
  for (idx8 = 0; idx8 < 114; idx8++) {
    outC->_L267.accelerations[idx8] = kcg_lit_float32(0.0);
  }
  for (idx9 = 0; idx9 < 114; idx9++) {
    outC->_L267.valid[idx9] = kcg_true;
  }
  for (idx10 = 0; idx10 < 114; idx10++) {
    outC->_L266.distances[idx10] = kcg_lit_float32(0.0);
  }
  for (idx11 = 0; idx11 < 114; idx11++) {
    outC->_L266.speeds[idx11] = kcg_lit_float32(0.0);
  }
  for (idx12 = 0; idx12 < 114; idx12++) {
    outC->_L266.accelerations[idx12] = kcg_lit_float32(0.0);
  }
  for (idx13 = 0; idx13 < 114; idx13++) {
    outC->_L266.valid[idx13] = kcg_true;
  }
  outC->_L259 = kcg_lit_float32(0.0);
  outC->_L263 = kcg_lit_float32(0.0);
  outC->_L262 = kcg_true;
  outC->_L261 = kcg_true;
  outC->_L265 = kcg_lit_float32(0.0);
  outC->_L264 = kcg_true;
  outC->_L257 = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 110; idx14++) {
    outC->_L256[idx14] = kcg_true;
  }
  for (idx19 = 0; idx19 < 110; idx19++) {
    for (idx15 = 0; idx15 < 114; idx15++) {
      outC->_L255[idx19].distances[idx15] = kcg_lit_float32(0.0);
    }
    for (idx16 = 0; idx16 < 114; idx16++) {
      outC->_L255[idx19].speeds[idx16] = kcg_lit_float32(0.0);
    }
    for (idx17 = 0; idx17 < 114; idx17++) {
      outC->_L255[idx19].accelerations[idx17] = kcg_lit_float32(0.0);
    }
    for (idx18 = 0; idx18 < 114; idx18++) {
      outC->_L255[idx19].valid[idx18] = kcg_true;
    }
  }
  outC->_L253 = kcg_true;
  for (idx20 = 0; idx20 < 114; idx20++) {
    outC->_L254.distances[idx20] = kcg_lit_float32(0.0);
  }
  for (idx21 = 0; idx21 < 114; idx21++) {
    outC->_L254.speeds[idx21] = kcg_lit_float32(0.0);
  }
  for (idx22 = 0; idx22 < 114; idx22++) {
    outC->_L254.accelerations[idx22] = kcg_lit_float32(0.0);
  }
  for (idx23 = 0; idx23 < 114; idx23++) {
    outC->_L254.valid[idx23] = kcg_true;
  }
  for (idx24 = 0; idx24 < 114; idx24++) {
    outC->_L251.distances[idx24] = kcg_lit_float32(0.0);
  }
  for (idx25 = 0; idx25 < 114; idx25++) {
    outC->_L251.speeds[idx25] = kcg_lit_float32(0.0);
  }
  for (idx26 = 0; idx26 < 114; idx26++) {
    outC->_L251.accelerations[idx26] = kcg_lit_float32(0.0);
  }
  for (idx27 = 0; idx27 < 114; idx27++) {
    outC->_L251.valid[idx27] = kcg_true;
  }
  outC->_L252 = kcg_true;
  outC->_L250 = kcg_true;
  for (idx28 = 0; idx28 < 114; idx28++) {
    outC->_L249.distances[idx28] = kcg_lit_float32(0.0);
  }
  for (idx29 = 0; idx29 < 114; idx29++) {
    outC->_L249.speeds[idx29] = kcg_lit_float32(0.0);
  }
  for (idx30 = 0; idx30 < 114; idx30++) {
    outC->_L249.accelerations[idx30] = kcg_lit_float32(0.0);
  }
  for (idx31 = 0; idx31 < 114; idx31++) {
    outC->_L249.valid[idx31] = kcg_true;
  }
  outC->_L244.trainPositionIsValid = kcg_true;
  outC->_L244.d_est_frontendPos = kcg_lit_float32(0.0);
  outC->_L244.d_minSafeFrontEndPos = kcg_lit_float32(0.0);
  outC->_L244.d_maxSafeFrontEndPos = kcg_lit_float32(0.0);
  outC->_L244.d_LRBG = kcg_lit_float32(0.0);
  outC->_L244.d_accLRBG = kcg_lit_float32(0.0);
  outC->_L245 = kcg_lit_float32(0.0);
  outC->_L246 = kcg_lit_float32(0.0);
  outC->_L239.SBI2 = kcg_lit_float32(0.0);
  outC->_L239.index = kcg_lit_int32(0);
  outC->_L239.ttype = EoA_TargetManagement_types;
  outC->_L239.bec.v = kcg_lit_float32(0.0);
  outC->_L239.bec.d = kcg_lit_float32(0.0);
  outC->_L239.V_est = kcg_lit_float32(0.0);
  outC->_L239.T.Traction = kcg_lit_float32(0.0);
  outC->_L239.T.berem = kcg_lit_float32(0.0);
  outC->_L239.T.bs = kcg_lit_float32(0.0);
  outC->_L239.T.bs1 = kcg_lit_float32(0.0);
  outC->_L239.T.bs2 = kcg_lit_float32(0.0);
  outC->_L239.T.inhComp = kcg_true;
  outC->_L239.T.indication = kcg_lit_float32(0.0);
  outC->_L239.V_ura = kcg_lit_float32(0.0);
  outC->_L239.V_P_MRDT_ebd = kcg_lit_float32(0.0);
  outC->_L239.V_P_MRDT_index = kcg_lit_int32(0);
  outC->_L240 = EoA_TargetManagement_types;
  outC->_L241 = kcg_lit_float32(0.0);
  outC->_L242 = kcg_lit_int32(0);
  outC->_L243.v = kcg_lit_float32(0.0);
  outC->_L243.d = kcg_lit_float32(0.0);
  outC->_L238.Traction = kcg_lit_float32(0.0);
  outC->_L238.berem = kcg_lit_float32(0.0);
  outC->_L238.bs = kcg_lit_float32(0.0);
  outC->_L238.bs1 = kcg_lit_float32(0.0);
  outC->_L238.bs2 = kcg_lit_float32(0.0);
  outC->_L238.inhComp = kcg_true;
  outC->_L238.indication = kcg_lit_float32(0.0);
  for (idx32 = 0; idx32 < 2; idx32++) {
    outC->_L209.emergency[idx32] = kcg_lit_float32(0.0);
  }
  for (idx33 = 0; idx33 < 2; idx33++) {
    outC->_L209.service[idx33] = kcg_lit_float32(0.0);
  }
  outC->_L210.valid = kcg_true;
  outC->_L210.timestamp = kcg_lit_int32(0);
  outC->_L210.odo.o_nominal = kcg_lit_int32(0);
  outC->_L210.odo.o_min = kcg_lit_int32(0);
  outC->_L210.odo.o_max = kcg_lit_int32(0);
  outC->_L210.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L210.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L210.speed.v_lower = kcg_lit_int32(0);
  outC->_L210.speed.v_upper = kcg_lit_int32(0);
  outC->_L210.acceleration = kcg_lit_int32(0);
  outC->_L210.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L210.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L211.isSB_FBAvailable = kcg_true;
  outC->_L211.isSB_CmdAvailable = kcg_true;
  outC->_L211.isTCOAvailable = kcg_true;
  outC->_L211.T_traction_cut_off = kcg_lit_int32(0);
  outC->_L211.offsetAntennaL1 = kcg_lit_int32(0);
  outC->_L211.T_b_limit = kcg_lit_int32(0);
  outC->_L205 = EoA_TargetManagement_types;
  outC->_L204 = kcg_true;
  outC->_L203 = EoA_TargetManagement_types;
  outC->_L202 = kcg_lit_float32(0.0);
  outC->_L201 = kcg_lit_float32(0.0);
  for (idx34 = 0; idx34 < 2; idx34++) {
    outC->_L200.emergency[idx34] = kcg_lit_float32(0.0);
  }
  for (idx35 = 0; idx35 < 2; idx35++) {
    outC->_L200.service[idx35] = kcg_lit_float32(0.0);
  }
  outC->_L199.isSB_FBAvailable = kcg_true;
  outC->_L199.isSB_CmdAvailable = kcg_true;
  outC->_L199.isTCOAvailable = kcg_true;
  outC->_L199.T_traction_cut_off = kcg_lit_int32(0);
  outC->_L199.offsetAntennaL1 = kcg_lit_int32(0);
  outC->_L199.T_b_limit = kcg_lit_int32(0);
  outC->_L196 = kcg_lit_float32(0.0);
  outC->_L195.Traction = kcg_lit_float32(0.0);
  outC->_L195.berem = kcg_lit_float32(0.0);
  outC->_L195.bs = kcg_lit_float32(0.0);
  outC->_L195.bs1 = kcg_lit_float32(0.0);
  outC->_L195.bs2 = kcg_lit_float32(0.0);
  outC->_L195.inhComp = kcg_true;
  outC->_L195.indication = kcg_lit_float32(0.0);
  outC->_L194.v = kcg_lit_float32(0.0);
  outC->_L194.d = kcg_lit_float32(0.0);
  outC->_L176 = Q_NVINHSMICPERM_No;
  outC->_L177.valid = kcg_true;
  outC->_L177.q_dir = Q_DIR_Reverse;
  outC->_L177.d_validnv = kcg_lit_int32(0);
  for (idx36 = 0; idx36 < 7; idx36++) {
    outC->_L177.nid_cArray[idx36].valid = kcg_true;
    outC->_L177.nid_cArray[idx36].nid_c = kcg_lit_int32(0);
  }
  outC->_L177.v_nvshunt = kcg_lit_int32(0);
  outC->_L177.v_nvstff = kcg_lit_int32(0);
  outC->_L177.v_nvonsight = kcg_lit_int32(0);
  outC->_L177.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L177.v_nvunfit = kcg_lit_int32(0);
  outC->_L177.v_nvrel = kcg_lit_int32(0);
  outC->_L177.d_nvroll = kcg_lit_int32(0);
  outC->_L177.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L177.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L177.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L177.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L177.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L177.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L177.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L177.d_nvovtrp = kcg_lit_int32(0);
  outC->_L177.t_nvovtrp = kcg_lit_int32(0);
  outC->_L177.d_nvpotrp = kcg_lit_int32(0);
  outC->_L177.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L177.t_nvcontact = kcg_lit_int32(0);
  outC->_L177.m_nvderun = M_NVDERUN_No;
  outC->_L177.d_nvstff = kcg_lit_int32(0);
  outC->_L177.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L177.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L177.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L177.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L177.q_nvlocacc = kcg_lit_int32(0);
  outC->_L177.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L177.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L177.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx38 = 0; idx38 < 7; idx38++) {
    outC->_L177.nvkvintsetArray[idx38].valid = kcg_true;
    outC->_L177.nvkvintsetArray[idx38].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L177.nvkvintsetArray[idx38].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L177.nvkvintsetArray[idx38].a_nvp23 = kcg_lit_float32(0.0);
    for (idx37 = 0; idx37 < 7; idx37++) {
      outC->_L177.nvkvintsetArray[idx38].nvkintArray[idx37].valid = kcg_true;
      outC->_L177.nvkvintsetArray[idx38].nvkintArray[idx37].v_nvkvint =
        kcg_lit_int32(0);
      outC->_L177.nvkvintsetArray[idx38].nvkintArray[idx37].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L177.nvkvintsetArray[idx38].nvkintArray[idx37].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx39 = 0; idx39 < 7; idx39++) {
    outC->_L177.nvkrintArray[idx39].valid = kcg_true;
    outC->_L177.nvkrintArray[idx39].l_nvkrint = L_NVKRINT_0m;
    outC->_L177.nvkrintArray[idx39].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L177.m_nvktint = kcg_lit_float32(0.0);
  outC->_L178 = kcg_true;
  outC->_L179 = kcg_true;
  outC->_L180 = kcg_true;
  outC->_L173.valid = kcg_true;
  outC->_L173.timestamp = kcg_lit_int32(0);
  outC->_L173.odo.o_nominal = kcg_lit_int32(0);
  outC->_L173.odo.o_min = kcg_lit_int32(0);
  outC->_L173.odo.o_max = kcg_lit_int32(0);
  outC->_L173.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L173.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L173.speed.v_lower = kcg_lit_int32(0);
  outC->_L173.speed.v_upper = kcg_lit_int32(0);
  outC->_L173.acceleration = kcg_lit_int32(0);
  outC->_L173.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L173.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  for (idx44 = 0; idx44 < 110; idx44++) {
    for (idx40 = 0; idx40 < 114; idx40++) {
      outC->_L156[idx44].distances[idx40] = kcg_lit_float32(0.0);
    }
    for (idx41 = 0; idx41 < 114; idx41++) {
      outC->_L156[idx44].speeds[idx41] = kcg_lit_float32(0.0);
    }
    for (idx42 = 0; idx42 < 114; idx42++) {
      outC->_L156[idx44].accelerations[idx42] = kcg_lit_float32(0.0);
    }
    for (idx43 = 0; idx43 < 114; idx43++) {
      outC->_L156[idx44].valid[idx43] = kcg_true;
    }
  }
  outC->_L157.targetType = EoA_TargetManagement_types;
  outC->_L157.distance = kcg_lit_float32(0.0);
  outC->_L157.speed = kcg_lit_float32(0.0);
  for (idx45 = 0; idx45 < 114; idx45++) {
    outC->_L158.distances[idx45] = kcg_lit_float32(0.0);
  }
  for (idx46 = 0; idx46 < 114; idx46++) {
    outC->_L158.speeds[idx46] = kcg_lit_float32(0.0);
  }
  for (idx47 = 0; idx47 < 114; idx47++) {
    outC->_L158.accelerations[idx47] = kcg_lit_float32(0.0);
  }
  for (idx48 = 0; idx48 < 114; idx48++) {
    outC->_L158.valid[idx48] = kcg_true;
  }
  for (idx49 = 0; idx49 < 110; idx49++) {
    outC->_L162[idx49].targetType = EoA_TargetManagement_types;
    outC->_L162[idx49].distance = kcg_lit_float32(0.0);
    outC->_L162[idx49].speed = kcg_lit_float32(0.0);
  }
  outC->_L152.targetType = EoA_TargetManagement_types;
  outC->_L152.distance = kcg_lit_float32(0.0);
  outC->_L152.speed = kcg_lit_float32(0.0);
  for (idx50 = 0; idx50 < 114; idx50++) {
    outC->_L153.distances[idx50] = kcg_lit_float32(0.0);
  }
  for (idx51 = 0; idx51 < 114; idx51++) {
    outC->_L153.speeds[idx51] = kcg_lit_float32(0.0);
  }
  for (idx52 = 0; idx52 < 114; idx52++) {
    outC->_L153.accelerations[idx52] = kcg_lit_float32(0.0);
  }
  for (idx53 = 0; idx53 < 114; idx53++) {
    outC->_L153.valid[idx53] = kcg_true;
  }
  outC->_L134.targetType = EoA_TargetManagement_types;
  outC->_L134.distance = kcg_lit_float32(0.0);
  outC->_L134.speed = kcg_lit_float32(0.0);
  outC->_L133.targetType = EoA_TargetManagement_types;
  outC->_L133.distance = kcg_lit_float32(0.0);
  outC->_L133.speed = kcg_lit_float32(0.0);
  for (idx54 = 0; idx54 < 110; idx54++) {
    outC->_L132[idx54].targetType = EoA_TargetManagement_types;
    outC->_L132[idx54].distance = kcg_lit_float32(0.0);
    outC->_L132[idx54].speed = kcg_lit_float32(0.0);
  }
  outC->_L130.targetType = EoA_TargetManagement_types;
  outC->_L130.distance = kcg_lit_float32(0.0);
  outC->_L130.speed = kcg_lit_float32(0.0);
  outC->_L124 = kcg_true;
  for (idx55 = 0; idx55 < 110; idx55++) {
    outC->_L125[idx55].targetType = EoA_TargetManagement_types;
    outC->_L125[idx55].distance = kcg_lit_float32(0.0);
    outC->_L125[idx55].speed = kcg_lit_float32(0.0);
  }
  outC->_L126.targetType = EoA_TargetManagement_types;
  outC->_L126.distance = kcg_lit_float32(0.0);
  outC->_L126.speed = kcg_lit_float32(0.0);
  outC->_L127.targetType = EoA_TargetManagement_types;
  outC->_L127.distance = kcg_lit_float32(0.0);
  outC->_L127.speed = kcg_lit_float32(0.0);
  outC->_L118.updatedTargetList = kcg_true;
  for (idx56 = 0; idx56 < 110; idx56++) {
    outC->_L118.MRSP_targetList[idx56].targetType = EoA_TargetManagement_types;
    outC->_L118.MRSP_targetList[idx56].distance = kcg_lit_float32(0.0);
    outC->_L118.MRSP_targetList[idx56].speed = kcg_lit_float32(0.0);
  }
  outC->_L118.EOA_target.targetType = EoA_TargetManagement_types;
  outC->_L118.EOA_target.distance = kcg_lit_float32(0.0);
  outC->_L118.EOA_target.speed = kcg_lit_float32(0.0);
  outC->_L118.SvL_LoA_target.targetType = EoA_TargetManagement_types;
  outC->_L118.SvL_LoA_target.distance = kcg_lit_float32(0.0);
  outC->_L118.SvL_LoA_target.speed = kcg_lit_float32(0.0);
  for (idx57 = 0; idx57 < 114; idx57++) {
    outC->_L117.distances[idx57] = kcg_lit_float32(0.0);
  }
  for (idx58 = 0; idx58 < 114; idx58++) {
    outC->_L117.speeds[idx58] = kcg_lit_float32(0.0);
  }
  for (idx59 = 0; idx59 < 114; idx59++) {
    outC->_L117.accelerations[idx59] = kcg_lit_float32(0.0);
  }
  for (idx60 = 0; idx60 < 114; idx60++) {
    outC->_L117.valid[idx60] = kcg_true;
  }
  for (idx65 = 0; idx65 < 110; idx65++) {
    for (idx61 = 0; idx61 < 114; idx61++) {
      outC->_L115[idx65].distances[idx61] = kcg_lit_float32(0.0);
    }
    for (idx62 = 0; idx62 < 114; idx62++) {
      outC->_L115[idx65].speeds[idx62] = kcg_lit_float32(0.0);
    }
    for (idx63 = 0; idx63 < 114; idx63++) {
      outC->_L115[idx65].accelerations[idx63] = kcg_lit_float32(0.0);
    }
    for (idx64 = 0; idx64 < 114; idx64++) {
      outC->_L115[idx65].valid[idx64] = kcg_true;
    }
  }
  for (idx70 = 0; idx70 < 110; idx70++) {
    for (idx66 = 0; idx66 < 114; idx66++) {
      outC->_L113.MRSP_EBD_curves[idx70].distances[idx66] = kcg_lit_float32(0.0);
    }
    for (idx67 = 0; idx67 < 114; idx67++) {
      outC->_L113.MRSP_EBD_curves[idx70].speeds[idx67] = kcg_lit_float32(0.0);
    }
    for (idx68 = 0; idx68 < 114; idx68++) {
      outC->_L113.MRSP_EBD_curves[idx70].accelerations[idx68] = kcg_lit_float32(0.0);
    }
    for (idx69 = 0; idx69 < 114; idx69++) {
      outC->_L113.MRSP_EBD_curves[idx70].valid[idx69] = kcg_true;
    }
  }
  for (idx71 = 0; idx71 < 114; idx71++) {
    outC->_L113.EOA_SBD_curve.distances[idx71] = kcg_lit_float32(0.0);
  }
  for (idx72 = 0; idx72 < 114; idx72++) {
    outC->_L113.EOA_SBD_curve.speeds[idx72] = kcg_lit_float32(0.0);
  }
  for (idx73 = 0; idx73 < 114; idx73++) {
    outC->_L113.EOA_SBD_curve.accelerations[idx73] = kcg_lit_float32(0.0);
  }
  for (idx74 = 0; idx74 < 114; idx74++) {
    outC->_L113.EOA_SBD_curve.valid[idx74] = kcg_true;
  }
  for (idx75 = 0; idx75 < 114; idx75++) {
    outC->_L113.SvL_LoA_EBD_curve.distances[idx75] = kcg_lit_float32(0.0);
  }
  for (idx76 = 0; idx76 < 114; idx76++) {
    outC->_L113.SvL_LoA_EBD_curve.speeds[idx76] = kcg_lit_float32(0.0);
  }
  for (idx77 = 0; idx77 < 114; idx77++) {
    outC->_L113.SvL_LoA_EBD_curve.accelerations[idx77] = kcg_lit_float32(0.0);
  }
  for (idx78 = 0; idx78 < 114; idx78++) {
    outC->_L113.SvL_LoA_EBD_curve.valid[idx78] = kcg_true;
  }
  for (idx79 = 0; idx79 < 114; idx79++) {
    outC->_L113.GUI_curve.distances[idx79] = kcg_lit_float32(0.0);
  }
  for (idx80 = 0; idx80 < 114; idx80++) {
    outC->_L113.GUI_curve.speeds[idx80] = kcg_lit_float32(0.0);
  }
  for (idx81 = 0; idx81 < 114; idx81++) {
    outC->_L113.GUI_curve.accelerations[idx81] = kcg_lit_float32(0.0);
  }
  for (idx82 = 0; idx82 < 114; idx82++) {
    outC->_L113.GUI_curve.valid[idx82] = kcg_true;
  }
  outC->_L113.GUI_curve_enabled = kcg_true;
  for (idx87 = 0; idx87 < 110; idx87++) {
    for (idx83 = 0; idx83 < 114; idx83++) {
      outC->_L106[idx87].distances[idx83] = kcg_lit_float32(0.0);
    }
    for (idx84 = 0; idx84 < 114; idx84++) {
      outC->_L106[idx87].speeds[idx84] = kcg_lit_float32(0.0);
    }
    for (idx85 = 0; idx85 < 114; idx85++) {
      outC->_L106[idx87].accelerations[idx85] = kcg_lit_float32(0.0);
    }
    for (idx86 = 0; idx86 < 114; idx86++) {
      outC->_L106[idx87].valid[idx86] = kcg_true;
    }
  }
  for (idx88 = 0; idx88 < 114; idx88++) {
    outC->_L107.distances[idx88] = kcg_lit_float32(0.0);
  }
  for (idx89 = 0; idx89 < 114; idx89++) {
    outC->_L107.speeds[idx89] = kcg_lit_float32(0.0);
  }
  for (idx90 = 0; idx90 < 114; idx90++) {
    outC->_L107.accelerations[idx90] = kcg_lit_float32(0.0);
  }
  for (idx91 = 0; idx91 < 114; idx91++) {
    outC->_L107.valid[idx91] = kcg_true;
  }
  for (idx92 = 0; idx92 < 114; idx92++) {
    outC->_L108.distances[idx92] = kcg_lit_float32(0.0);
  }
  for (idx93 = 0; idx93 < 114; idx93++) {
    outC->_L108.speeds[idx93] = kcg_lit_float32(0.0);
  }
  for (idx94 = 0; idx94 < 114; idx94++) {
    outC->_L108.accelerations[idx94] = kcg_lit_float32(0.0);
  }
  for (idx95 = 0; idx95 < 114; idx95++) {
    outC->_L108.valid[idx95] = kcg_true;
  }
  for (idx96 = 0; idx96 < 114; idx96++) {
    outC->_L109.distances[idx96] = kcg_lit_float32(0.0);
  }
  for (idx97 = 0; idx97 < 114; idx97++) {
    outC->_L109.speeds[idx97] = kcg_lit_float32(0.0);
  }
  for (idx98 = 0; idx98 < 114; idx98++) {
    outC->_L109.accelerations[idx98] = kcg_lit_float32(0.0);
  }
  for (idx99 = 0; idx99 < 114; idx99++) {
    outC->_L109.valid[idx99] = kcg_true;
  }
  outC->_L110 = kcg_true;
  outC->_L80 = kcg_lit_int32(0);
  outC->_L65 = kcg_lit_float32(0.0);
  outC->_L69 = kcg_lit_float32(0.0);
  outC->_L55 = kcg_lit_int32(0);
  outC->_L60.SBI2 = kcg_lit_float32(0.0);
  outC->_L60.index = kcg_lit_int32(0);
  outC->_L60.ttype = EoA_TargetManagement_types;
  outC->_L60.bec.v = kcg_lit_float32(0.0);
  outC->_L60.bec.d = kcg_lit_float32(0.0);
  outC->_L60.V_est = kcg_lit_float32(0.0);
  outC->_L60.T.Traction = kcg_lit_float32(0.0);
  outC->_L60.T.berem = kcg_lit_float32(0.0);
  outC->_L60.T.bs = kcg_lit_float32(0.0);
  outC->_L60.T.bs1 = kcg_lit_float32(0.0);
  outC->_L60.T.bs2 = kcg_lit_float32(0.0);
  outC->_L60.T.inhComp = kcg_true;
  outC->_L60.T.indication = kcg_lit_float32(0.0);
  outC->_L60.V_ura = kcg_lit_float32(0.0);
  outC->_L60.V_P_MRDT_ebd = kcg_lit_float32(0.0);
  outC->_L60.V_P_MRDT_index = kcg_lit_int32(0);
  outC->_L59 = kcg_true;
  outC->_L29.SBI2 = kcg_lit_float32(0.0);
  outC->_L29.index = kcg_lit_int32(0);
  outC->_L29.ttype = EoA_TargetManagement_types;
  outC->_L29.bec.v = kcg_lit_float32(0.0);
  outC->_L29.bec.d = kcg_lit_float32(0.0);
  outC->_L29.V_est = kcg_lit_float32(0.0);
  outC->_L29.T.Traction = kcg_lit_float32(0.0);
  outC->_L29.T.berem = kcg_lit_float32(0.0);
  outC->_L29.T.bs = kcg_lit_float32(0.0);
  outC->_L29.T.bs1 = kcg_lit_float32(0.0);
  outC->_L29.T.bs2 = kcg_lit_float32(0.0);
  outC->_L29.T.inhComp = kcg_true;
  outC->_L29.T.indication = kcg_lit_float32(0.0);
  outC->_L29.V_ura = kcg_lit_float32(0.0);
  outC->_L29.V_P_MRDT_ebd = kcg_lit_float32(0.0);
  outC->_L29.V_P_MRDT_index = kcg_lit_int32(0);
  outC->_L28 = kcg_lit_int32(0);
  for (idx100 = 0; idx100 < 110; idx100++) {
    outC->_L33[idx100].valid = kcg_true;
    outC->_L33[idx100].timestamp = kcg_lit_int32(0);
    outC->_L33[idx100].odo.o_nominal = kcg_lit_int32(0);
    outC->_L33[idx100].odo.o_min = kcg_lit_int32(0);
    outC->_L33[idx100].odo.o_max = kcg_lit_int32(0);
    outC->_L33[idx100].speed.v_safeNominal = kcg_lit_int32(0);
    outC->_L33[idx100].speed.v_rawNominal = kcg_lit_int32(0);
    outC->_L33[idx100].speed.v_lower = kcg_lit_int32(0);
    outC->_L33[idx100].speed.v_upper = kcg_lit_int32(0);
    outC->_L33[idx100].acceleration = kcg_lit_int32(0);
    outC->_L33[idx100].motionState = noMotion_Obu_BasicTypes_Pkg;
    outC->_L33[idx100].motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  }
  outC->_L36 = kcg_true;
  for (idx103 = 0; idx103 < 110; idx103++) {
    for (idx101 = 0; idx101 < 2; idx101++) {
      outC->_L40[idx103].emergency[idx101] = kcg_lit_float32(0.0);
    }
    for (idx102 = 0; idx102 < 2; idx102++) {
      outC->_L40[idx103].service[idx102] = kcg_lit_float32(0.0);
    }
  }
  for (idx104 = 0; idx104 < 110; idx104++) {
    outC->_L42[idx104].isSB_FBAvailable = kcg_true;
    outC->_L42[idx104].isSB_CmdAvailable = kcg_true;
    outC->_L42[idx104].isTCOAvailable = kcg_true;
    outC->_L42[idx104].T_traction_cut_off = kcg_lit_int32(0);
    outC->_L42[idx104].offsetAntennaL1 = kcg_lit_int32(0);
    outC->_L42[idx104].T_b_limit = kcg_lit_int32(0);
  }
  for (idx105 = 0; idx105 < 114; idx105++) {
    outC->CurveSBD.distances[idx105] = kcg_lit_float32(0.0);
  }
  for (idx106 = 0; idx106 < 114; idx106++) {
    outC->CurveSBD.speeds[idx106] = kcg_lit_float32(0.0);
  }
  for (idx107 = 0; idx107 < 114; idx107++) {
    outC->CurveSBD.accelerations[idx107] = kcg_lit_float32(0.0);
  }
  for (idx108 = 0; idx108 < 114; idx108++) {
    outC->CurveSBD.valid[idx108] = kcg_true;
  }
  outC->GuiCurveEn = kcg_true;
  for (idx109 = 0; idx109 < 114; idx109++) {
    outC->GuiCurve.distances[idx109] = kcg_lit_float32(0.0);
  }
  for (idx110 = 0; idx110 < 114; idx110++) {
    outC->GuiCurve.speeds[idx110] = kcg_lit_float32(0.0);
  }
  for (idx111 = 0; idx111 < 114; idx111++) {
    outC->GuiCurve.accelerations[idx111] = kcg_lit_float32(0.0);
  }
  for (idx112 = 0; idx112 < 114; idx112++) {
    outC->GuiCurve.valid[idx112] = kcg_true;
  }
  outC->TargetSvL.targetType = EoA_TargetManagement_types;
  outC->TargetSvL.distance = kcg_lit_float32(0.0);
  outC->TargetSvL.speed = kcg_lit_float32(0.0);
  outC->TargetEOA.targetType = EoA_TargetManagement_types;
  outC->TargetEOA.distance = kcg_lit_float32(0.0);
  outC->TargetEOA.speed = kcg_lit_float32(0.0);
  for (idx113 = 0; idx113 < 110; idx113++) {
    outC->TargetsMRSP[idx113].targetType = EoA_TargetManagement_types;
    outC->TargetsMRSP[idx113].distance = kcg_lit_float32(0.0);
    outC->TargetsMRSP[idx113].speed = kcg_lit_float32(0.0);
  }
  for (idx114 = 0; idx114 < 114; idx114++) {
    outC->CurveSvL.distances[idx114] = kcg_lit_float32(0.0);
  }
  for (idx115 = 0; idx115 < 114; idx115++) {
    outC->CurveSvL.speeds[idx115] = kcg_lit_float32(0.0);
  }
  for (idx116 = 0; idx116 < 114; idx116++) {
    outC->CurveSvL.accelerations[idx116] = kcg_lit_float32(0.0);
  }
  for (idx117 = 0; idx117 < 114; idx117++) {
    outC->CurveSvL.valid[idx117] = kcg_true;
  }
  for (idx122 = 0; idx122 < 110; idx122++) {
    for (idx118 = 0; idx118 < 114; idx118++) {
      outC->CurvesMRSP[idx122].distances[idx118] = kcg_lit_float32(0.0);
    }
    for (idx119 = 0; idx119 < 114; idx119++) {
      outC->CurvesMRSP[idx122].speeds[idx119] = kcg_lit_float32(0.0);
    }
    for (idx120 = 0; idx120 < 114; idx120++) {
      outC->CurvesMRSP[idx122].accelerations[idx120] = kcg_lit_float32(0.0);
    }
    for (idx121 = 0; idx121 < 114; idx121++) {
      outC->CurvesMRSP[idx122].valid[idx121] = kcg_true;
    }
  }
  outC->every = kcg_true;
  outC->freshMRDT = kcg_true;
  outC->D_maxsafefront = kcg_lit_float32(0.0);
  outC->D_estfront = kcg_lit_float32(0.0);
  outC->valid_D_SBI2 = kcg_true;
  outC->D_SBI2 = kcg_lit_float32(0.0);
  outC->bec.v = kcg_lit_float32(0.0);
  outC->bec.d = kcg_lit_float32(0.0);
  outC->V_ura = kcg_lit_float32(0.0);
  outC->T.Traction = kcg_lit_float32(0.0);
  outC->T.berem = kcg_lit_float32(0.0);
  outC->T.bs = kcg_lit_float32(0.0);
  outC->T.bs1 = kcg_lit_float32(0.0);
  outC->T.bs2 = kcg_lit_float32(0.0);
  outC->T.inhComp = kcg_true;
  outC->T.indication = kcg_lit_float32(0.0);
  outC->v_est = kcg_lit_float32(0.0);
  outC->D_SvL = kcg_lit_float32(0.0);
  outC->D_EOA = kcg_lit_float32(0.0);
  outC->V_P_MRDT = kcg_lit_int32(0);
  outC->V_Target = kcg_lit_float32(0.0);
  outC->GUICurveEnabled = kcg_true;
  for (idx123 = 0; idx123 < 114; idx123++) {
    outC->GUIcurve.distances[idx123] = kcg_lit_float32(0.0);
  }
  for (idx124 = 0; idx124 < 114; idx124++) {
    outC->GUIcurve.speeds[idx124] = kcg_lit_float32(0.0);
  }
  for (idx125 = 0; idx125 < 114; idx125++) {
    outC->GUIcurve.accelerations[idx125] = kcg_lit_float32(0.0);
  }
  for (idx126 = 0; idx126 < 114; idx126++) {
    outC->GUIcurve.valid[idx126] = kcg_true;
  }
  for (idx127 = 0; idx127 < 114; idx127++) {
    outC->SBDcurve.distances[idx127] = kcg_lit_float32(0.0);
  }
  for (idx128 = 0; idx128 < 114; idx128++) {
    outC->SBDcurve.speeds[idx128] = kcg_lit_float32(0.0);
  }
  for (idx129 = 0; idx129 < 114; idx129++) {
    outC->SBDcurve.accelerations[idx129] = kcg_lit_float32(0.0);
  }
  for (idx130 = 0; idx130 < 114; idx130++) {
    outC->SBDcurve.valid[idx130] = kcg_true;
  }
  for (idx131 = 0; idx131 < 114; idx131++) {
    outC->MostRestrictiveEBDCurve.distances[idx131] = kcg_lit_float32(0.0);
  }
  for (idx132 = 0; idx132 < 114; idx132++) {
    outC->MostRestrictiveEBDCurve.speeds[idx132] = kcg_lit_float32(0.0);
  }
  for (idx133 = 0; idx133 < 114; idx133++) {
    outC->MostRestrictiveEBDCurve.accelerations[idx133] = kcg_lit_float32(0.0);
  }
  for (idx134 = 0; idx134 < 114; idx134++) {
    outC->MostRestrictiveEBDCurve.valid[idx134] = kcg_true;
  }
  outC->MostRestrictiveDisplayedTarget.targetType = EoA_TargetManagement_types;
  outC->MostRestrictiveDisplayedTarget.distance = kcg_lit_int32(0);
  outC->MostRestrictiveDisplayedTarget.speed = kcg_lit_int32(0);
  outC->MostRestrictiveDisplayedTarget.valid = kcg_true;
  /* _L294=(SDM_Types_Pkg::TransformL_realToL_int#1)/ */
  TransformL_realToL_int_init_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_1);
  /* _L295=(SDM_Types_Pkg::TransformV_realToV_int#1)/ */
  TransformV_realToV_int_init_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_int_1);
  /* _L302=(SDM_Types_Pkg::TransformV_realToV_odo#1)/ */
  TransformV_realToV_odo_init_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_odo_1);
  /* _L261=(TargetLimits_Pkg::selectLEValid#1)/ */
  selectLEValid_init_TargetLimits_Pkg(&outC->Context_selectLEValid_1);
  /* _L264=(TargetLimits_Pkg::v_SBI1#2)/ */
  v_SBI1_init_TargetLimits_Pkg(&outC->Context_v_SBI1_2);
  /* _L59=(TargetLimits_Pkg::TargetIterator#4)/ */
  TargetIterator_init_TargetLimits_Pkg(&outC->Context_TargetIterator_4);
  for (idx = 0; idx < 110; idx++) {
    /* _L28=(TargetLimits_Pkg::TargetIterator#2)/ */
    TargetIterator_init_TargetLimits_Pkg(&outC->Context_TargetIterator_2[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TargetSelector_reset_TargetLimits_Pkg(
  outC_TargetSelector_TargetLimits_Pkg *outC)
{
  kcg_size idx;

  /* _L294=(SDM_Types_Pkg::TransformL_realToL_int#1)/ */
  TransformL_realToL_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_realToL_int_1);
  /* _L295=(SDM_Types_Pkg::TransformV_realToV_int#1)/ */
  TransformV_realToV_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_int_1);
  /* _L302=(SDM_Types_Pkg::TransformV_realToV_odo#1)/ */
  TransformV_realToV_odo_reset_SDM_Types_Pkg(
    &outC->Context_TransformV_realToV_odo_1);
  /* _L261=(TargetLimits_Pkg::selectLEValid#1)/ */
  selectLEValid_reset_TargetLimits_Pkg(&outC->Context_selectLEValid_1);
  /* _L264=(TargetLimits_Pkg::v_SBI1#2)/ */
  v_SBI1_reset_TargetLimits_Pkg(&outC->Context_v_SBI1_2);
  /* _L59=(TargetLimits_Pkg::TargetIterator#4)/ */
  TargetIterator_reset_TargetLimits_Pkg(&outC->Context_TargetIterator_4);
  for (idx = 0; idx < 110; idx++) {
    /* _L28=(TargetLimits_Pkg::TargetIterator#2)/ */
    TargetIterator_reset_TargetLimits_Pkg(&outC->Context_TargetIterator_2[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TargetSelector_TargetLimits_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

