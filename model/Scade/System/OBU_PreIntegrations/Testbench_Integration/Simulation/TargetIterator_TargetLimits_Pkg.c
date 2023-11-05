/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetIterator_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::TargetIterator/ */
void TargetIterator_TargetLimits_Pkg(
  /* index/ */
  kcg_int32 index,
  /* Akku_in/ */
  TargetIteratorAkku_TargetLimits_Pkg *Akku_in,
  /* target/ */
  Target_real_T_TargetManagement_types *target,
  /* targetCurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *targetCurve,
  /* trainData_int/ */
  trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* T_b/ */
  t_Brake_t_SDMModelPkg *T_b,
  /* D_maxsafefront/ */
  L_internal_real_Type_SDM_Types_Pkg D_maxsafefront,
  /* GUIcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* guiCurveEnabled/ */
  kcg_bool guiCurveEnabled,
  outC_TargetIterator_TargetLimits_Pkg *outC)
{
  static L_internal_real_Type_SDM_Types_Pkg op_call;
  static kcg_bool _1_op_call;
  static V_internal_real_Type_SDM_Types_Pkg _2_op_call;
  static kcg_bool _3_op_call;

  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L87, target);
  outC->_L86 = outC->_L87.targetType;
  outC->_L50 = invalid_TargetManagement_types;
  outC->_L49 = outC->_L50 != outC->_L86;
  outC->valid = outC->_L49;
  outC->_L117 = outC->valid;
  outC->every1 = outC->_L117;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L9, targetCurve);
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&outC->_L75, trainData_int);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L76, odometry);
  kcg_copy_t_Brake_t_SDMModelPkg(&outC->_L77, T_b);
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L80, target);
  outC->_L81 = outC->_L80.speed;
  kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&outC->_L95, Akku_in);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L97, &outC->_L95.T);
  /* _L74=(TargetLimits_Pkg::surplusTractionDeltas#1)/ */
  surplusTractionDeltas_TargetLimits_Pkg(
    &outC->_L75,
    &outC->_L76,
    &outC->_L77,
    outC->_L81,
    &outC->_L97,
    &outC->Context_surplusTractionDeltas_1);
  kcg_copy_bec_t_TargetLimits_Pkg(
    &outC->_L74,
    &outC->Context_surplusTractionDeltas_1.bec);
  outC->_L71 = outC->Context_surplusTractionDeltas_1.V_est;
  kcg_copy_T_trac_t_TargetLimits_Pkg(
    &outC->_L73,
    &outC->Context_surplusTractionDeltas_1.T);
  outC->_L72 = outC->Context_surplusTractionDeltas_1.V_ura;
  if (outC->every1) {
    /* _L1=(TargetLimits_Pkg::d_SBI2#1)/ */
    d_SBI2_TargetLimits_Pkg(
      &outC->_L9,
      &outC->_L74,
      outC->_L71,
      &outC->_L73,
      &outC->Context_d_SBI2_1);
    _1_op_call = outC->Context_d_SBI2_1.valid;
    op_call = outC->Context_d_SBI2_1.D_SBI2;
  }
  outC->_L119 = outC->valid;
  outC->every = outC->_L119;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L103, targetCurve);
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L114, target);
  outC->_L115 = outC->_L114.speed;
  outC->_L107 = D_maxsafefront;
  outC->_L104 = T_driver_SDM_Types_Pkg;
  outC->_L109 = guiCurveEnabled;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L108, GUIcurve);
  if (outC->every) {
    /* _L101=(TargetLimits_Pkg::v_SBI2#1)/ */
    v_SBI2_TargetLimits_Pkg(
      &outC->_L103,
      outC->_L71,
      outC->_L115,
      &outC->_L74,
      outC->_L107,
      outC->_L104,
      outC->_L109,
      &outC->_L108,
      &outC->_L73,
      &outC->Context_v_SBI2_1);
    _3_op_call = outC->Context_v_SBI2_1.valid;
    _2_op_call = outC->Context_v_SBI2_1.V_SBI2;
  }
  outC->_L121 = kcg_lit_int32(0);
  kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&outC->_L116, Akku_in);
  outC->_L113 = outC->_L116.V_P_MRDT_index;
  outC->_L120 = outC->_L113 >= outC->_L121;
  outC->_L112 = outC->_L116.V_P_MRDT_ebd;
  if (outC->every) {
    outC->_L101 = _3_op_call;
    outC->_L100 = _2_op_call;
  }
  else {
    outC->_L101 = kcg_false;
    outC->_L100 = kcg_lit_float32(0.0);
  }
  /* _L102=(TargetLimits_Pkg::selectLEValid#1)/ */
  selectLEValid_TargetLimits_Pkg(
    outC->_L120,
    outC->_L112,
    outC->_L101,
    outC->_L100,
    &outC->Context_selectLEValid_1);
  outC->_L102 = outC->Context_selectLEValid_1.isUpper;
  outC->_L110 = outC->Context_selectLEValid_1.valid;
  outC->_L111 = outC->Context_selectLEValid_1.o;
  outC->_L128 = !outC->_L110;
  outC->_L127 = outC->_L102 | outC->_L128;
  outC->_L126 = invalid_TargetManagement_types;
  outC->_L125 = index;
  /* _L124= */
  if (outC->_L127) {
    outC->_L124 = outC->_L113;
  }
  else {
    outC->_L124 = outC->_L125;
  }
  if (outC->every1) {
    outC->_L2 = op_call;
  }
  else {
    outC->_L2 = kcg_lit_float32(-1.0);
  }
  outC->_L47 = index;
  outC->_L54 = invalid_TargetManagement_types;
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L83, target);
  outC->_L82 = outC->_L83.targetType;
  if (outC->every1) {
    outC->_L1 = _1_op_call;
  }
  else {
    outC->_L1 = kcg_false;
  }
  /* _L84= */
  if (outC->_L1) {
    outC->_L84 = outC->_L82;
  }
  else {
    outC->_L84 = outC->_L54;
  }
  outC->_L45.SBI2 = outC->_L2;
  outC->_L45.index = outC->_L47;
  outC->_L45.ttype = outC->_L84;
  kcg_copy_bec_t_TargetLimits_Pkg(&outC->_L45.bec, &outC->_L74);
  outC->_L45.V_est = outC->_L71;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L45.T, &outC->_L73);
  outC->_L45.V_ura = outC->_L72;
  outC->_L45.V_P_MRDT_ebd = outC->_L112;
  outC->_L45.V_P_MRDT_index = outC->_L113;
  kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&outC->_L46, Akku_in);
  kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&outC->_L26, Akku_in);
  outC->_L78 = outC->_L26.ttype;
  outC->_L53 = outC->_L126 != outC->_L78;
  outC->_L79 = outC->_L26.SBI2;
  /* _L34=(TargetLimits_Pkg::isLEValid#1)/ */
  isLEValid_TargetLimits_Pkg(
    outC->_L53,
    outC->_L79,
    outC->_L1,
    outC->_L2,
    &outC->Context_isLEValid_1);
  outC->_L34 = outC->Context_isLEValid_1.result;
  /* _L35= */
  if (outC->_L34) {
    kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&outC->_L35, &outC->_L46);
  }
  else {
    kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&outC->_L35, &outC->_L45);
  }
  kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&outC->_L123, &outC->_L35);
  if (kcg_true) {
    outC->_L123.V_P_MRDT_index = outC->_L124;
  }
  kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&outC->_L122, &outC->_L123);
  if (kcg_true) {
    outC->_L122.V_P_MRDT_ebd = outC->_L111;
  }
  kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&outC->Akku_out, &outC->_L122);
  outC->goOn = outC->_L49;
}

#ifndef KCG_USER_DEFINED_INIT
void TargetIterator_init_TargetLimits_Pkg(
  outC_TargetIterator_TargetLimits_Pkg *outC)
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

  outC->_L128 = kcg_true;
  outC->_L127 = kcg_true;
  outC->_L126 = EoA_TargetManagement_types;
  outC->_L125 = kcg_lit_int32(0);
  outC->_L124 = kcg_lit_int32(0);
  outC->_L123.SBI2 = kcg_lit_float32(0.0);
  outC->_L123.index = kcg_lit_int32(0);
  outC->_L123.ttype = EoA_TargetManagement_types;
  outC->_L123.bec.v = kcg_lit_float32(0.0);
  outC->_L123.bec.d = kcg_lit_float32(0.0);
  outC->_L123.V_est = kcg_lit_float32(0.0);
  outC->_L123.T.Traction = kcg_lit_float32(0.0);
  outC->_L123.T.berem = kcg_lit_float32(0.0);
  outC->_L123.T.bs = kcg_lit_float32(0.0);
  outC->_L123.T.bs1 = kcg_lit_float32(0.0);
  outC->_L123.T.bs2 = kcg_lit_float32(0.0);
  outC->_L123.T.inhComp = kcg_true;
  outC->_L123.T.indication = kcg_lit_float32(0.0);
  outC->_L123.V_ura = kcg_lit_float32(0.0);
  outC->_L123.V_P_MRDT_ebd = kcg_lit_float32(0.0);
  outC->_L123.V_P_MRDT_index = kcg_lit_int32(0);
  outC->_L122.SBI2 = kcg_lit_float32(0.0);
  outC->_L122.index = kcg_lit_int32(0);
  outC->_L122.ttype = EoA_TargetManagement_types;
  outC->_L122.bec.v = kcg_lit_float32(0.0);
  outC->_L122.bec.d = kcg_lit_float32(0.0);
  outC->_L122.V_est = kcg_lit_float32(0.0);
  outC->_L122.T.Traction = kcg_lit_float32(0.0);
  outC->_L122.T.berem = kcg_lit_float32(0.0);
  outC->_L122.T.bs = kcg_lit_float32(0.0);
  outC->_L122.T.bs1 = kcg_lit_float32(0.0);
  outC->_L122.T.bs2 = kcg_lit_float32(0.0);
  outC->_L122.T.inhComp = kcg_true;
  outC->_L122.T.indication = kcg_lit_float32(0.0);
  outC->_L122.V_ura = kcg_lit_float32(0.0);
  outC->_L122.V_P_MRDT_ebd = kcg_lit_float32(0.0);
  outC->_L122.V_P_MRDT_index = kcg_lit_int32(0);
  outC->_L121 = kcg_lit_int32(0);
  outC->_L120 = kcg_true;
  outC->_L119 = kcg_true;
  outC->_L117 = kcg_true;
  outC->_L116.SBI2 = kcg_lit_float32(0.0);
  outC->_L116.index = kcg_lit_int32(0);
  outC->_L116.ttype = EoA_TargetManagement_types;
  outC->_L116.bec.v = kcg_lit_float32(0.0);
  outC->_L116.bec.d = kcg_lit_float32(0.0);
  outC->_L116.V_est = kcg_lit_float32(0.0);
  outC->_L116.T.Traction = kcg_lit_float32(0.0);
  outC->_L116.T.berem = kcg_lit_float32(0.0);
  outC->_L116.T.bs = kcg_lit_float32(0.0);
  outC->_L116.T.bs1 = kcg_lit_float32(0.0);
  outC->_L116.T.bs2 = kcg_lit_float32(0.0);
  outC->_L116.T.inhComp = kcg_true;
  outC->_L116.T.indication = kcg_lit_float32(0.0);
  outC->_L116.V_ura = kcg_lit_float32(0.0);
  outC->_L116.V_P_MRDT_ebd = kcg_lit_float32(0.0);
  outC->_L116.V_P_MRDT_index = kcg_lit_int32(0);
  outC->_L114.targetType = EoA_TargetManagement_types;
  outC->_L114.distance = kcg_lit_float32(0.0);
  outC->_L114.speed = kcg_lit_float32(0.0);
  outC->_L115 = kcg_lit_float32(0.0);
  outC->_L113 = kcg_lit_int32(0);
  outC->_L112 = kcg_lit_float32(0.0);
  outC->_L110 = kcg_true;
  outC->_L111 = kcg_lit_float32(0.0);
  outC->_L109 = kcg_true;
  for (idx = 0; idx < 114; idx++) {
    outC->_L108.distances[idx] = kcg_lit_float32(0.0);
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L108.speeds[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L108.accelerations[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L108.valid[idx3] = kcg_true;
  }
  outC->_L107 = kcg_lit_float32(0.0);
  outC->_L104 = kcg_lit_float32(0.0);
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L103.distances[idx4] = kcg_lit_float32(0.0);
  }
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L103.speeds[idx5] = kcg_lit_float32(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L103.accelerations[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L103.valid[idx7] = kcg_true;
  }
  outC->_L102 = kcg_true;
  outC->_L100 = kcg_lit_float32(0.0);
  outC->_L101 = kcg_true;
  outC->_L97.Traction = kcg_lit_float32(0.0);
  outC->_L97.berem = kcg_lit_float32(0.0);
  outC->_L97.bs = kcg_lit_float32(0.0);
  outC->_L97.bs1 = kcg_lit_float32(0.0);
  outC->_L97.bs2 = kcg_lit_float32(0.0);
  outC->_L97.inhComp = kcg_true;
  outC->_L97.indication = kcg_lit_float32(0.0);
  outC->_L95.SBI2 = kcg_lit_float32(0.0);
  outC->_L95.index = kcg_lit_int32(0);
  outC->_L95.ttype = EoA_TargetManagement_types;
  outC->_L95.bec.v = kcg_lit_float32(0.0);
  outC->_L95.bec.d = kcg_lit_float32(0.0);
  outC->_L95.V_est = kcg_lit_float32(0.0);
  outC->_L95.T.Traction = kcg_lit_float32(0.0);
  outC->_L95.T.berem = kcg_lit_float32(0.0);
  outC->_L95.T.bs = kcg_lit_float32(0.0);
  outC->_L95.T.bs1 = kcg_lit_float32(0.0);
  outC->_L95.T.bs2 = kcg_lit_float32(0.0);
  outC->_L95.T.inhComp = kcg_true;
  outC->_L95.T.indication = kcg_lit_float32(0.0);
  outC->_L95.V_ura = kcg_lit_float32(0.0);
  outC->_L95.V_P_MRDT_ebd = kcg_lit_float32(0.0);
  outC->_L95.V_P_MRDT_index = kcg_lit_int32(0);
  outC->_L86 = EoA_TargetManagement_types;
  outC->_L87.targetType = EoA_TargetManagement_types;
  outC->_L87.distance = kcg_lit_float32(0.0);
  outC->_L87.speed = kcg_lit_float32(0.0);
  outC->_L84 = EoA_TargetManagement_types;
  outC->_L83.targetType = EoA_TargetManagement_types;
  outC->_L83.distance = kcg_lit_float32(0.0);
  outC->_L83.speed = kcg_lit_float32(0.0);
  outC->_L82 = EoA_TargetManagement_types;
  outC->_L81 = kcg_lit_float32(0.0);
  outC->_L80.targetType = EoA_TargetManagement_types;
  outC->_L80.distance = kcg_lit_float32(0.0);
  outC->_L80.speed = kcg_lit_float32(0.0);
  outC->_L79 = kcg_lit_float32(0.0);
  outC->_L78 = EoA_TargetManagement_types;
  for (idx8 = 0; idx8 < 2; idx8++) {
    outC->_L77.emergency[idx8] = kcg_lit_float32(0.0);
  }
  for (idx9 = 0; idx9 < 2; idx9++) {
    outC->_L77.service[idx9] = kcg_lit_float32(0.0);
  }
  outC->_L76.valid = kcg_true;
  outC->_L76.timestamp = kcg_lit_int32(0);
  outC->_L76.odo.o_nominal = kcg_lit_int32(0);
  outC->_L76.odo.o_min = kcg_lit_int32(0);
  outC->_L76.odo.o_max = kcg_lit_int32(0);
  outC->_L76.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L76.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L76.speed.v_lower = kcg_lit_int32(0);
  outC->_L76.speed.v_upper = kcg_lit_int32(0);
  outC->_L76.acceleration = kcg_lit_int32(0);
  outC->_L76.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L76.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L75.isSB_FBAvailable = kcg_true;
  outC->_L75.isSB_CmdAvailable = kcg_true;
  outC->_L75.isTCOAvailable = kcg_true;
  outC->_L75.T_traction_cut_off = kcg_lit_int32(0);
  outC->_L75.offsetAntennaL1 = kcg_lit_int32(0);
  outC->_L75.T_b_limit = kcg_lit_int32(0);
  outC->_L71 = kcg_lit_float32(0.0);
  outC->_L72 = kcg_lit_float32(0.0);
  outC->_L73.Traction = kcg_lit_float32(0.0);
  outC->_L73.berem = kcg_lit_float32(0.0);
  outC->_L73.bs = kcg_lit_float32(0.0);
  outC->_L73.bs1 = kcg_lit_float32(0.0);
  outC->_L73.bs2 = kcg_lit_float32(0.0);
  outC->_L73.inhComp = kcg_true;
  outC->_L73.indication = kcg_lit_float32(0.0);
  outC->_L74.v = kcg_lit_float32(0.0);
  outC->_L74.d = kcg_lit_float32(0.0);
  outC->_L53 = kcg_true;
  outC->_L54 = EoA_TargetManagement_types;
  outC->_L50 = EoA_TargetManagement_types;
  outC->_L49 = kcg_true;
  outC->_L47 = kcg_lit_int32(0);
  outC->_L46.SBI2 = kcg_lit_float32(0.0);
  outC->_L46.index = kcg_lit_int32(0);
  outC->_L46.ttype = EoA_TargetManagement_types;
  outC->_L46.bec.v = kcg_lit_float32(0.0);
  outC->_L46.bec.d = kcg_lit_float32(0.0);
  outC->_L46.V_est = kcg_lit_float32(0.0);
  outC->_L46.T.Traction = kcg_lit_float32(0.0);
  outC->_L46.T.berem = kcg_lit_float32(0.0);
  outC->_L46.T.bs = kcg_lit_float32(0.0);
  outC->_L46.T.bs1 = kcg_lit_float32(0.0);
  outC->_L46.T.bs2 = kcg_lit_float32(0.0);
  outC->_L46.T.inhComp = kcg_true;
  outC->_L46.T.indication = kcg_lit_float32(0.0);
  outC->_L46.V_ura = kcg_lit_float32(0.0);
  outC->_L46.V_P_MRDT_ebd = kcg_lit_float32(0.0);
  outC->_L46.V_P_MRDT_index = kcg_lit_int32(0);
  outC->_L45.SBI2 = kcg_lit_float32(0.0);
  outC->_L45.index = kcg_lit_int32(0);
  outC->_L45.ttype = EoA_TargetManagement_types;
  outC->_L45.bec.v = kcg_lit_float32(0.0);
  outC->_L45.bec.d = kcg_lit_float32(0.0);
  outC->_L45.V_est = kcg_lit_float32(0.0);
  outC->_L45.T.Traction = kcg_lit_float32(0.0);
  outC->_L45.T.berem = kcg_lit_float32(0.0);
  outC->_L45.T.bs = kcg_lit_float32(0.0);
  outC->_L45.T.bs1 = kcg_lit_float32(0.0);
  outC->_L45.T.bs2 = kcg_lit_float32(0.0);
  outC->_L45.T.inhComp = kcg_true;
  outC->_L45.T.indication = kcg_lit_float32(0.0);
  outC->_L45.V_ura = kcg_lit_float32(0.0);
  outC->_L45.V_P_MRDT_ebd = kcg_lit_float32(0.0);
  outC->_L45.V_P_MRDT_index = kcg_lit_int32(0);
  outC->_L35.SBI2 = kcg_lit_float32(0.0);
  outC->_L35.index = kcg_lit_int32(0);
  outC->_L35.ttype = EoA_TargetManagement_types;
  outC->_L35.bec.v = kcg_lit_float32(0.0);
  outC->_L35.bec.d = kcg_lit_float32(0.0);
  outC->_L35.V_est = kcg_lit_float32(0.0);
  outC->_L35.T.Traction = kcg_lit_float32(0.0);
  outC->_L35.T.berem = kcg_lit_float32(0.0);
  outC->_L35.T.bs = kcg_lit_float32(0.0);
  outC->_L35.T.bs1 = kcg_lit_float32(0.0);
  outC->_L35.T.bs2 = kcg_lit_float32(0.0);
  outC->_L35.T.inhComp = kcg_true;
  outC->_L35.T.indication = kcg_lit_float32(0.0);
  outC->_L35.V_ura = kcg_lit_float32(0.0);
  outC->_L35.V_P_MRDT_ebd = kcg_lit_float32(0.0);
  outC->_L35.V_P_MRDT_index = kcg_lit_int32(0);
  outC->_L34 = kcg_true;
  outC->_L26.SBI2 = kcg_lit_float32(0.0);
  outC->_L26.index = kcg_lit_int32(0);
  outC->_L26.ttype = EoA_TargetManagement_types;
  outC->_L26.bec.v = kcg_lit_float32(0.0);
  outC->_L26.bec.d = kcg_lit_float32(0.0);
  outC->_L26.V_est = kcg_lit_float32(0.0);
  outC->_L26.T.Traction = kcg_lit_float32(0.0);
  outC->_L26.T.berem = kcg_lit_float32(0.0);
  outC->_L26.T.bs = kcg_lit_float32(0.0);
  outC->_L26.T.bs1 = kcg_lit_float32(0.0);
  outC->_L26.T.bs2 = kcg_lit_float32(0.0);
  outC->_L26.T.inhComp = kcg_true;
  outC->_L26.T.indication = kcg_lit_float32(0.0);
  outC->_L26.V_ura = kcg_lit_float32(0.0);
  outC->_L26.V_P_MRDT_ebd = kcg_lit_float32(0.0);
  outC->_L26.V_P_MRDT_index = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 114; idx10++) {
    outC->_L9.distances[idx10] = kcg_lit_float32(0.0);
  }
  for (idx11 = 0; idx11 < 114; idx11++) {
    outC->_L9.speeds[idx11] = kcg_lit_float32(0.0);
  }
  for (idx12 = 0; idx12 < 114; idx12++) {
    outC->_L9.accelerations[idx12] = kcg_lit_float32(0.0);
  }
  for (idx13 = 0; idx13 < 114; idx13++) {
    outC->_L9.valid[idx13] = kcg_true;
  }
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_lit_float32(0.0);
  outC->valid = kcg_true;
  outC->every1 = kcg_true;
  outC->every = kcg_true;
  outC->Akku_out.SBI2 = kcg_lit_float32(0.0);
  outC->Akku_out.index = kcg_lit_int32(0);
  outC->Akku_out.ttype = EoA_TargetManagement_types;
  outC->Akku_out.bec.v = kcg_lit_float32(0.0);
  outC->Akku_out.bec.d = kcg_lit_float32(0.0);
  outC->Akku_out.V_est = kcg_lit_float32(0.0);
  outC->Akku_out.T.Traction = kcg_lit_float32(0.0);
  outC->Akku_out.T.berem = kcg_lit_float32(0.0);
  outC->Akku_out.T.bs = kcg_lit_float32(0.0);
  outC->Akku_out.T.bs1 = kcg_lit_float32(0.0);
  outC->Akku_out.T.bs2 = kcg_lit_float32(0.0);
  outC->Akku_out.T.inhComp = kcg_true;
  outC->Akku_out.T.indication = kcg_lit_float32(0.0);
  outC->Akku_out.V_ura = kcg_lit_float32(0.0);
  outC->Akku_out.V_P_MRDT_ebd = kcg_lit_float32(0.0);
  outC->Akku_out.V_P_MRDT_index = kcg_lit_int32(0);
  outC->goOn = kcg_true;
  /* _L34=(TargetLimits_Pkg::isLEValid#1)/ */
  isLEValid_init_TargetLimits_Pkg(&outC->Context_isLEValid_1);
  /* _L102=(TargetLimits_Pkg::selectLEValid#1)/ */
  selectLEValid_init_TargetLimits_Pkg(&outC->Context_selectLEValid_1);
  /* _L101=(TargetLimits_Pkg::v_SBI2#1)/ */
  v_SBI2_init_TargetLimits_Pkg(&outC->Context_v_SBI2_1);
  /* _L1=(TargetLimits_Pkg::d_SBI2#1)/ */
  d_SBI2_init_TargetLimits_Pkg(&outC->Context_d_SBI2_1);
  /* _L74=(TargetLimits_Pkg::surplusTractionDeltas#1)/ */
  surplusTractionDeltas_init_TargetLimits_Pkg(
    &outC->Context_surplusTractionDeltas_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TargetIterator_reset_TargetLimits_Pkg(
  outC_TargetIterator_TargetLimits_Pkg *outC)
{
  /* _L34=(TargetLimits_Pkg::isLEValid#1)/ */
  isLEValid_reset_TargetLimits_Pkg(&outC->Context_isLEValid_1);
  /* _L102=(TargetLimits_Pkg::selectLEValid#1)/ */
  selectLEValid_reset_TargetLimits_Pkg(&outC->Context_selectLEValid_1);
  /* _L101=(TargetLimits_Pkg::v_SBI2#1)/ */
  v_SBI2_reset_TargetLimits_Pkg(&outC->Context_v_SBI2_1);
  /* _L1=(TargetLimits_Pkg::d_SBI2#1)/ */
  d_SBI2_reset_TargetLimits_Pkg(&outC->Context_d_SBI2_1);
  /* _L74=(TargetLimits_Pkg::surplusTractionDeltas#1)/ */
  surplusTractionDeltas_reset_TargetLimits_Pkg(
    &outC->Context_surplusTractionDeltas_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TargetIterator_TargetLimits_Pkg.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

