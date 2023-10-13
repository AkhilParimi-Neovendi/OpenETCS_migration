/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcBrakingCurves_integration_CalcBrakingCurves_Pkg.h"

/* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration/ */
void CalcBrakingCurves_integration_CalcBrakingCurves_Pkg(
  /* TrainLocations/ */
  TrainLocations_real_T_SDM_Types_Pkg *TrainLocations,
  /* targetCollection/ */
  TargetCollection_T_TargetManagement_types *targetCollection,
  /* A_Safe/ */
  ASafe_T_CalcBrakingCurves_types *A_Safe,
  /* A_Expected/ */
  ASafe_T_CalcBrakingCurves_types *A_Expected,
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_bool tmp;
  static ParabolaCurve_T_CalcBrakingCurves_types tmp4;
  static kcg_bool tmp5;
  static ParabolaCurve_T_CalcBrakingCurves_types tmp6;
  static ParabolaCurve_T_CalcBrakingCurves_types op_call;
  static kcg_bool _7_op_call;
  static ParabolaCurve_T_CalcBrakingCurves_types _8_op_call;
  static kcg_bool _9_op_call;
  static kcg_bool noname;
  static kcg_int64 _10_noname;
  static kcg_bool _11_noname;
  /* MRSPCurves/ */
  static ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types last_MRSPCurves;

  kcg_copy_TargetCollection_T_TargetManagement_types(
    &outC->_L35,
    targetCollection);
  outC->_L40 = outC->_L35.updatedTargetList;
  outC->targetsUpdated = outC->_L40;
  outC->_L78 = outC->targetsUpdated;
  outC->every1 = outC->_L78;
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L114, A_Expected);
  kcg_copy_Target_real_T_TargetManagement_types(
    &outC->_L42,
    &outC->_L35.EOA_target);
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&outC->_L65, TrainLocations);
  outC->_L71 = outC->_L65.d_est_frontendPos;
  if (outC->every1) {
    /* _L79=(CalcBrakingCurves_Pkg::CalculateBrakingCurve#3)/ */
    CalculateBrakingCurve_CalcBrakingCurves_Pkg(
      &outC->_L114,
      &outC->_L42,
      outC->_L71,
      &outC->Context_CalculateBrakingCurve_3);
    _7_op_call = outC->Context_CalculateBrakingCurve_3.cond;
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
      &op_call,
      &outC->Context_CalculateBrakingCurve_3.BC);
  }
  outC->_L115 = outC->targetsUpdated;
  outC->every = outC->_L115;
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L29, A_Safe);
  kcg_copy_Target_real_T_TargetManagement_types(
    &outC->_L43,
    &outC->_L35.SvL_LoA_target);
  if (outC->every) {
    /* _L98=(CalcBrakingCurves_Pkg::CalculateBrakingCurve#5)/ */
    CalculateBrakingCurve_CalcBrakingCurves_Pkg(
      &outC->_L29,
      &outC->_L43,
      outC->_L71,
      &outC->Context_CalculateBrakingCurve_5);
    _9_op_call = outC->Context_CalculateBrakingCurve_5.cond;
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
      &_8_op_call,
      &outC->Context_CalculateBrakingCurve_5.BC);
  }
  /* _L112=(CalcBrakingCurves_types::makeEmptyParabolaCurve#1)/ */
  makeEmptyParabolaCurve_CalcBrakingCurves_types(
    &outC->Context_makeEmptyParabolaCurve_1);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->_L112,
    &outC->Context_makeEmptyParabolaCurve_1.Curve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->emptyCurve,
    &outC->_L112);
  /* MRSPCurves/ */
  if (outC->init) {
    /* MRSPCurves/ */
    for (idx = 0; idx < 110; idx++) {
      kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
        &last_MRSPCurves[idx],
        &outC->emptyCurve);
    }
  }
  else {
    kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
      &last_MRSPCurves,
      &outC->MRSPCurves);
  }
  kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
    &outC->_L106,
    &last_MRSPCurves);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L4, A_Safe);
  /* _L6/ */
  for (idx1 = 0; idx1 < 110; idx1++) {
    kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L6[idx1], &outC->_L4);
  }
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->_L41,
    &outC->_L35.MRSP_targetList);
  /* _L22/ */
  for (idx2 = 0; idx2 < 110; idx2++) {
    outC->_L22[idx2] = outC->_L71;
  }
  outC->_L75 = outC->targetsUpdated;
  /* _L72= */
  if (outC->_L75) {
    /* _L72= */
    for (idx3 = 0; idx3 < 110; idx3++) {
      /* _L72=(CalcBrakingCurves_Pkg::CalculateBrakingCurve#1)/ */
      CalculateBrakingCurve_CalcBrakingCurves_Pkg(
        &outC->_L6[idx3],
        &outC->_L41[idx3],
        outC->_L22[idx3],
        &outC->Context_CalculateBrakingCurve_1[idx3]);
      kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
        &outC->_L83[idx3],
        &outC->Context_CalculateBrakingCurve_1[idx3].BC);
      outC->_L72 = /* _L72= */(kcg_int64) (idx3 + 1);
      /* _L72= */
      if (!outC->Context_CalculateBrakingCurve_1[idx3].cond) {
        break;
      }
    }
  }
  else {
    outC->_L72 = kcg_lit_int64(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L72= */
  for (idx3 = /* _L72= */(kcg_size) outC->_L72; idx3 < 110; idx3++) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
      &outC->_L83[idx3],
      &outC->_L112);
  }
#endif /* KCG_MAPW_CPY */

  /* _L109= */
  if (outC->_L75) {
    kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
      &outC->_L109,
      &outC->_L83);
  }
  else {
    kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
      &outC->_L109,
      &outC->_L106);
  }
  kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
    &outC->MRSPCurves,
    &outC->_L109);
  outC->_L102 = kcg_false;
  if (outC->every) {
    outC->_L98 = _9_op_call;
  }
  else {
    /* _L98= */
    if (outC->init) {
      tmp = outC->_L102;
    }
    else {
      tmp = outC->_L98;
    }
    outC->_L98 = tmp;
  }
  _11_noname = outC->_L98;
  if (outC->every) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L99, &_8_op_call);
  }
  else {
    /* _L98= */
    if (outC->init) {
      kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&tmp4, &outC->_L112);
    }
    else {
      kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&tmp4, &outC->_L99);
    }
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L99, &tmp4);
  }
  outC->_L86 = kcg_false;
  _10_noname = outC->_L72;
  if (outC->every1) {
    outC->_L79 = _7_op_call;
  }
  else {
    /* _L79= */
    if (outC->init) {
      tmp5 = outC->_L86;
    }
    else {
      tmp5 = outC->_L79;
    }
    outC->_L79 = tmp5;
  }
  noname = outC->_L79;
  outC->_L60 = kcg_false;
  if (outC->every1) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L33, &op_call);
  }
  else {
    /* _L79= */
    if (outC->init) {
      kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&tmp6, &outC->_L112);
    }
    else {
      kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&tmp6, &outC->_L33);
    }
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L33, &tmp6);
  }
  kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
    &outC->_L58.MRSP_EBD_curves,
    &outC->_L109);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->_L58.EOA_SBD_curve,
    &outC->_L33);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->_L58.SvL_LoA_EBD_curve,
    &outC->_L99);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->_L58.GUI_curve,
    &outC->_L112);
  outC->_L58.GUI_curve_enabled = outC->_L60;
  kcg_copy_CurveCollection_T_CalcBrakingCurves_types(
    &outC->curveCollection,
    &outC->_L58);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void CalcBrakingCurves_integration_init_CalcBrakingCurves_Pkg(
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC)
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

  outC->_L115 = kcg_true;
  for (idx1 = 0; idx1 < 100; idx1++) {
    outC->_L114.distance_definition[idx1] = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 14; idx2++) {
    outC->_L114.speed_definition[idx2] = kcg_lit_float64(0.0);
  }
  for (idx4 = 0; idx4 < 14; idx4++) {
    for (idx3 = 0; idx3 < 100; idx3++) {
      outC->_L114.data[idx4][idx3] = kcg_lit_float64(0.0);
    }
  }
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L112.distances[idx5] = kcg_lit_float64(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L112.speeds[idx6] = kcg_lit_float64(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L112.accelerations[idx7] = kcg_lit_float64(0.0);
  }
  for (idx8 = 0; idx8 < 114; idx8++) {
    outC->_L112.valid[idx8] = kcg_true;
  }
  for (idx13 = 0; idx13 < 110; idx13++) {
    for (idx9 = 0; idx9 < 114; idx9++) {
      outC->_L109[idx13].distances[idx9] = kcg_lit_float64(0.0);
    }
    for (idx10 = 0; idx10 < 114; idx10++) {
      outC->_L109[idx13].speeds[idx10] = kcg_lit_float64(0.0);
    }
    for (idx11 = 0; idx11 < 114; idx11++) {
      outC->_L109[idx13].accelerations[idx11] = kcg_lit_float64(0.0);
    }
    for (idx12 = 0; idx12 < 114; idx12++) {
      outC->_L109[idx13].valid[idx12] = kcg_true;
    }
  }
  for (idx18 = 0; idx18 < 110; idx18++) {
    for (idx14 = 0; idx14 < 114; idx14++) {
      outC->_L106[idx18].distances[idx14] = kcg_lit_float64(0.0);
    }
    for (idx15 = 0; idx15 < 114; idx15++) {
      outC->_L106[idx18].speeds[idx15] = kcg_lit_float64(0.0);
    }
    for (idx16 = 0; idx16 < 114; idx16++) {
      outC->_L106[idx18].accelerations[idx16] = kcg_lit_float64(0.0);
    }
    for (idx17 = 0; idx17 < 114; idx17++) {
      outC->_L106[idx18].valid[idx17] = kcg_true;
    }
  }
  outC->_L102 = kcg_true;
  outC->_L86 = kcg_true;
  for (idx23 = 0; idx23 < 110; idx23++) {
    for (idx19 = 0; idx19 < 114; idx19++) {
      outC->_L83[idx23].distances[idx19] = kcg_lit_float64(0.0);
    }
    for (idx20 = 0; idx20 < 114; idx20++) {
      outC->_L83[idx23].speeds[idx20] = kcg_lit_float64(0.0);
    }
    for (idx21 = 0; idx21 < 114; idx21++) {
      outC->_L83[idx23].accelerations[idx21] = kcg_lit_float64(0.0);
    }
    for (idx22 = 0; idx22 < 114; idx22++) {
      outC->_L83[idx23].valid[idx22] = kcg_true;
    }
  }
  outC->_L78 = kcg_true;
  outC->_L75 = kcg_true;
  outC->_L72 = kcg_lit_int64(0);
  outC->_L71 = kcg_lit_float64(0.0);
  outC->_L65.trainPositionIsValid = kcg_true;
  outC->_L65.d_est_frontendPos = kcg_lit_float64(0.0);
  outC->_L65.d_minSafeFrontEndPos = kcg_lit_float64(0.0);
  outC->_L65.d_maxSafeFrontEndPos = kcg_lit_float64(0.0);
  outC->_L65.d_LRBG = kcg_lit_float64(0.0);
  outC->_L65.d_accLRBG = kcg_lit_float64(0.0);
  outC->_L60 = kcg_true;
  for (idx28 = 0; idx28 < 110; idx28++) {
    for (idx24 = 0; idx24 < 114; idx24++) {
      outC->_L58.MRSP_EBD_curves[idx28].distances[idx24] = kcg_lit_float64(0.0);
    }
    for (idx25 = 0; idx25 < 114; idx25++) {
      outC->_L58.MRSP_EBD_curves[idx28].speeds[idx25] = kcg_lit_float64(0.0);
    }
    for (idx26 = 0; idx26 < 114; idx26++) {
      outC->_L58.MRSP_EBD_curves[idx28].accelerations[idx26] = kcg_lit_float64(0.0);
    }
    for (idx27 = 0; idx27 < 114; idx27++) {
      outC->_L58.MRSP_EBD_curves[idx28].valid[idx27] = kcg_true;
    }
  }
  for (idx29 = 0; idx29 < 114; idx29++) {
    outC->_L58.EOA_SBD_curve.distances[idx29] = kcg_lit_float64(0.0);
  }
  for (idx30 = 0; idx30 < 114; idx30++) {
    outC->_L58.EOA_SBD_curve.speeds[idx30] = kcg_lit_float64(0.0);
  }
  for (idx31 = 0; idx31 < 114; idx31++) {
    outC->_L58.EOA_SBD_curve.accelerations[idx31] = kcg_lit_float64(0.0);
  }
  for (idx32 = 0; idx32 < 114; idx32++) {
    outC->_L58.EOA_SBD_curve.valid[idx32] = kcg_true;
  }
  for (idx33 = 0; idx33 < 114; idx33++) {
    outC->_L58.SvL_LoA_EBD_curve.distances[idx33] = kcg_lit_float64(0.0);
  }
  for (idx34 = 0; idx34 < 114; idx34++) {
    outC->_L58.SvL_LoA_EBD_curve.speeds[idx34] = kcg_lit_float64(0.0);
  }
  for (idx35 = 0; idx35 < 114; idx35++) {
    outC->_L58.SvL_LoA_EBD_curve.accelerations[idx35] = kcg_lit_float64(0.0);
  }
  for (idx36 = 0; idx36 < 114; idx36++) {
    outC->_L58.SvL_LoA_EBD_curve.valid[idx36] = kcg_true;
  }
  for (idx37 = 0; idx37 < 114; idx37++) {
    outC->_L58.GUI_curve.distances[idx37] = kcg_lit_float64(0.0);
  }
  for (idx38 = 0; idx38 < 114; idx38++) {
    outC->_L58.GUI_curve.speeds[idx38] = kcg_lit_float64(0.0);
  }
  for (idx39 = 0; idx39 < 114; idx39++) {
    outC->_L58.GUI_curve.accelerations[idx39] = kcg_lit_float64(0.0);
  }
  for (idx40 = 0; idx40 < 114; idx40++) {
    outC->_L58.GUI_curve.valid[idx40] = kcg_true;
  }
  outC->_L58.GUI_curve_enabled = kcg_true;
  outC->_L40 = kcg_true;
  for (idx41 = 0; idx41 < 110; idx41++) {
    outC->_L41[idx41].targetType = EoA_TargetManagement_types;
    outC->_L41[idx41].distance = kcg_lit_float64(0.0);
    outC->_L41[idx41].speed = kcg_lit_float64(0.0);
  }
  outC->_L42.targetType = EoA_TargetManagement_types;
  outC->_L42.distance = kcg_lit_float64(0.0);
  outC->_L42.speed = kcg_lit_float64(0.0);
  outC->_L43.targetType = EoA_TargetManagement_types;
  outC->_L43.distance = kcg_lit_float64(0.0);
  outC->_L43.speed = kcg_lit_float64(0.0);
  outC->_L35.updatedTargetList = kcg_true;
  for (idx42 = 0; idx42 < 110; idx42++) {
    outC->_L35.MRSP_targetList[idx42].targetType = EoA_TargetManagement_types;
    outC->_L35.MRSP_targetList[idx42].distance = kcg_lit_float64(0.0);
    outC->_L35.MRSP_targetList[idx42].speed = kcg_lit_float64(0.0);
  }
  outC->_L35.EOA_target.targetType = EoA_TargetManagement_types;
  outC->_L35.EOA_target.distance = kcg_lit_float64(0.0);
  outC->_L35.EOA_target.speed = kcg_lit_float64(0.0);
  outC->_L35.SvL_LoA_target.targetType = EoA_TargetManagement_types;
  outC->_L35.SvL_LoA_target.distance = kcg_lit_float64(0.0);
  outC->_L35.SvL_LoA_target.speed = kcg_lit_float64(0.0);
  for (idx43 = 0; idx43 < 100; idx43++) {
    outC->_L29.distance_definition[idx43] = kcg_lit_float64(0.0);
  }
  for (idx44 = 0; idx44 < 14; idx44++) {
    outC->_L29.speed_definition[idx44] = kcg_lit_float64(0.0);
  }
  for (idx46 = 0; idx46 < 14; idx46++) {
    for (idx45 = 0; idx45 < 100; idx45++) {
      outC->_L29.data[idx46][idx45] = kcg_lit_float64(0.0);
    }
  }
  for (idx47 = 0; idx47 < 110; idx47++) {
    outC->_L22[idx47] = kcg_lit_float64(0.0);
  }
  for (idx52 = 0; idx52 < 110; idx52++) {
    for (idx48 = 0; idx48 < 100; idx48++) {
      outC->_L6[idx52].distance_definition[idx48] = kcg_lit_float64(0.0);
    }
    for (idx49 = 0; idx49 < 14; idx49++) {
      outC->_L6[idx52].speed_definition[idx49] = kcg_lit_float64(0.0);
    }
    for (idx51 = 0; idx51 < 14; idx51++) {
      for (idx50 = 0; idx50 < 100; idx50++) {
        outC->_L6[idx52].data[idx51][idx50] = kcg_lit_float64(0.0);
      }
    }
  }
  for (idx53 = 0; idx53 < 100; idx53++) {
    outC->_L4.distance_definition[idx53] = kcg_lit_float64(0.0);
  }
  for (idx54 = 0; idx54 < 14; idx54++) {
    outC->_L4.speed_definition[idx54] = kcg_lit_float64(0.0);
  }
  for (idx56 = 0; idx56 < 14; idx56++) {
    for (idx55 = 0; idx55 < 100; idx55++) {
      outC->_L4.data[idx56][idx55] = kcg_lit_float64(0.0);
    }
  }
  for (idx57 = 0; idx57 < 114; idx57++) {
    outC->emptyCurve.distances[idx57] = kcg_lit_float64(0.0);
  }
  for (idx58 = 0; idx58 < 114; idx58++) {
    outC->emptyCurve.speeds[idx58] = kcg_lit_float64(0.0);
  }
  for (idx59 = 0; idx59 < 114; idx59++) {
    outC->emptyCurve.accelerations[idx59] = kcg_lit_float64(0.0);
  }
  for (idx60 = 0; idx60 < 114; idx60++) {
    outC->emptyCurve.valid[idx60] = kcg_true;
  }
  outC->targetsUpdated = kcg_true;
  outC->every1 = kcg_true;
  outC->every = kcg_true;
  for (idx61 = 0; idx61 < 114; idx61++) {
    outC->_L99.distances[idx61] = kcg_lit_float64(0.0);
  }
  for (idx62 = 0; idx62 < 114; idx62++) {
    outC->_L99.speeds[idx62] = kcg_lit_float64(0.0);
  }
  for (idx63 = 0; idx63 < 114; idx63++) {
    outC->_L99.accelerations[idx63] = kcg_lit_float64(0.0);
  }
  for (idx64 = 0; idx64 < 114; idx64++) {
    outC->_L99.valid[idx64] = kcg_true;
  }
  outC->_L98 = kcg_true;
  outC->_L79 = kcg_true;
  for (idx65 = 0; idx65 < 114; idx65++) {
    outC->_L33.distances[idx65] = kcg_lit_float64(0.0);
  }
  for (idx66 = 0; idx66 < 114; idx66++) {
    outC->_L33.speeds[idx66] = kcg_lit_float64(0.0);
  }
  for (idx67 = 0; idx67 < 114; idx67++) {
    outC->_L33.accelerations[idx67] = kcg_lit_float64(0.0);
  }
  for (idx68 = 0; idx68 < 114; idx68++) {
    outC->_L33.valid[idx68] = kcg_true;
  }
  for (idx73 = 0; idx73 < 110; idx73++) {
    for (idx69 = 0; idx69 < 114; idx69++) {
      outC->MRSPCurves[idx73].distances[idx69] = kcg_lit_float64(0.0);
    }
    for (idx70 = 0; idx70 < 114; idx70++) {
      outC->MRSPCurves[idx73].speeds[idx70] = kcg_lit_float64(0.0);
    }
    for (idx71 = 0; idx71 < 114; idx71++) {
      outC->MRSPCurves[idx73].accelerations[idx71] = kcg_lit_float64(0.0);
    }
    for (idx72 = 0; idx72 < 114; idx72++) {
      outC->MRSPCurves[idx73].valid[idx72] = kcg_true;
    }
  }
  outC->init = kcg_true;
  for (idx78 = 0; idx78 < 110; idx78++) {
    for (idx74 = 0; idx74 < 114; idx74++) {
      outC->curveCollection.MRSP_EBD_curves[idx78].distances[idx74] =
        kcg_lit_float64(0.0);
    }
    for (idx75 = 0; idx75 < 114; idx75++) {
      outC->curveCollection.MRSP_EBD_curves[idx78].speeds[idx75] =
        kcg_lit_float64(0.0);
    }
    for (idx76 = 0; idx76 < 114; idx76++) {
      outC->curveCollection.MRSP_EBD_curves[idx78].accelerations[idx76] =
        kcg_lit_float64(0.0);
    }
    for (idx77 = 0; idx77 < 114; idx77++) {
      outC->curveCollection.MRSP_EBD_curves[idx78].valid[idx77] = kcg_true;
    }
  }
  for (idx79 = 0; idx79 < 114; idx79++) {
    outC->curveCollection.EOA_SBD_curve.distances[idx79] = kcg_lit_float64(0.0);
  }
  for (idx80 = 0; idx80 < 114; idx80++) {
    outC->curveCollection.EOA_SBD_curve.speeds[idx80] = kcg_lit_float64(0.0);
  }
  for (idx81 = 0; idx81 < 114; idx81++) {
    outC->curveCollection.EOA_SBD_curve.accelerations[idx81] = kcg_lit_float64(0.0);
  }
  for (idx82 = 0; idx82 < 114; idx82++) {
    outC->curveCollection.EOA_SBD_curve.valid[idx82] = kcg_true;
  }
  for (idx83 = 0; idx83 < 114; idx83++) {
    outC->curveCollection.SvL_LoA_EBD_curve.distances[idx83] = kcg_lit_float64(0.0);
  }
  for (idx84 = 0; idx84 < 114; idx84++) {
    outC->curveCollection.SvL_LoA_EBD_curve.speeds[idx84] = kcg_lit_float64(0.0);
  }
  for (idx85 = 0; idx85 < 114; idx85++) {
    outC->curveCollection.SvL_LoA_EBD_curve.accelerations[idx85] =
      kcg_lit_float64(0.0);
  }
  for (idx86 = 0; idx86 < 114; idx86++) {
    outC->curveCollection.SvL_LoA_EBD_curve.valid[idx86] = kcg_true;
  }
  for (idx87 = 0; idx87 < 114; idx87++) {
    outC->curveCollection.GUI_curve.distances[idx87] = kcg_lit_float64(0.0);
  }
  for (idx88 = 0; idx88 < 114; idx88++) {
    outC->curveCollection.GUI_curve.speeds[idx88] = kcg_lit_float64(0.0);
  }
  for (idx89 = 0; idx89 < 114; idx89++) {
    outC->curveCollection.GUI_curve.accelerations[idx89] = kcg_lit_float64(0.0);
  }
  for (idx90 = 0; idx90 < 114; idx90++) {
    outC->curveCollection.GUI_curve.valid[idx90] = kcg_true;
  }
  outC->curveCollection.GUI_curve_enabled = kcg_true;
  for (idx = 0; idx < 110; idx++) {
    /* _L72=(CalcBrakingCurves_Pkg::CalculateBrakingCurve#1)/ */
    CalculateBrakingCurve_init_CalcBrakingCurves_Pkg(
      &outC->Context_CalculateBrakingCurve_1[idx]);
  }
  /* _L112=(CalcBrakingCurves_types::makeEmptyParabolaCurve#1)/ */
  makeEmptyParabolaCurve_init_CalcBrakingCurves_types(
    &outC->Context_makeEmptyParabolaCurve_1);
  /* _L98=(CalcBrakingCurves_Pkg::CalculateBrakingCurve#5)/ */
  CalculateBrakingCurve_init_CalcBrakingCurves_Pkg(
    &outC->Context_CalculateBrakingCurve_5);
  /* _L79=(CalcBrakingCurves_Pkg::CalculateBrakingCurve#3)/ */
  CalculateBrakingCurve_init_CalcBrakingCurves_Pkg(
    &outC->Context_CalculateBrakingCurve_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalcBrakingCurves_integration_reset_CalcBrakingCurves_Pkg(
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC)
{
  static kcg_size idx;

  outC->init = kcg_true;
  for (idx = 0; idx < 110; idx++) {
    /* _L72=(CalcBrakingCurves_Pkg::CalculateBrakingCurve#1)/ */
    CalculateBrakingCurve_reset_CalcBrakingCurves_Pkg(
      &outC->Context_CalculateBrakingCurve_1[idx]);
  }
  /* _L112=(CalcBrakingCurves_types::makeEmptyParabolaCurve#1)/ */
  makeEmptyParabolaCurve_reset_CalcBrakingCurves_types(
    &outC->Context_makeEmptyParabolaCurve_1);
  /* _L98=(CalcBrakingCurves_Pkg::CalculateBrakingCurve#5)/ */
  CalculateBrakingCurve_reset_CalcBrakingCurves_Pkg(
    &outC->Context_CalculateBrakingCurve_5);
  /* _L79=(CalcBrakingCurves_Pkg::CalculateBrakingCurve#3)/ */
  CalculateBrakingCurve_reset_CalcBrakingCurves_Pkg(
    &outC->Context_CalculateBrakingCurve_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg(
  SV_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *SV,
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC)
{
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &SV->Context__L99,
    &outC->_L99);
  SV->Context__L98 = outC->_L98;
  SV->Context__L79 = outC->_L79;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &SV->Context__L33,
    &outC->_L33);
  kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
    &SV->Context_MRSPCurves,
    &outC->MRSPCurves);
  SV->Context_init = outC->init;
}

void kcg_load_SV_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg(
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC,
  SV_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *SV)
{
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->_L99,
    &SV->Context__L99);
  outC->_L98 = SV->Context__L98;
  outC->_L79 = SV->Context__L79;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->_L33,
    &SV->Context__L33);
  kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
    &outC->MRSPCurves,
    &SV->Context_MRSPCurves);
  outC->init = SV->Context_init;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcBrakingCurves_integration_CalcBrakingCurves_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

