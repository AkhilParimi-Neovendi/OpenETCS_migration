/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _surplusTractionDeltas_TargetLimits_Pkg_H_
#define _surplusTractionDeltas_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "TransformT_intToT_real_SDM_Types_Pkg.h"
#include "TransformA_intToA_real_SDM_Types_Pkg.h"
#include "calcBec_TargetLimits_Pkg.h"
#include "splitT_bs_TargetLimits_Pkg.h"
#include "limitPositive_SDM_Types_Pkg.h"
#include "TransformV_odoToV_real_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  bec_t_TargetLimits_Pkg /* bec/ */ bec;
  V_internal_real_Type_SDM_Types_Pkg /* V_est/ */ V_est;
  T_trac_t_TargetLimits_Pkg /* T/ */ T;
  V_internal_real_Type_SDM_Types_Pkg /* V_ura/ */ V_ura;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_calcBec_TargetLimits_Pkg /* _L135=(TargetLimits_Pkg::calcBec#1)/ */ Context_calcBec_1;
  outC_limitPositive_SDM_Types_Pkg /* _L79=(SDM_Types_Pkg::limitPositive#2)/ */ Context_limitPositive_2;
  outC_limitPositive_SDM_Types_Pkg /* _L77=(SDM_Types_Pkg::limitPositive#3)/ */ Context_limitPositive_3;
  outC_limitPositive_SDM_Types_Pkg /* _L80=(SDM_Types_Pkg::limitPositive#1)/ */ Context_limitPositive_1;
  outC_splitT_bs_TargetLimits_Pkg /* _L115=(TargetLimits_Pkg::splitT_bs#1)/ */ Context_splitT_bs_1;
  outC_TransformV_odoToV_real_SDM_Types_Pkg /* _L147=(SDM_Types_Pkg::TransformV_odoToV_real#3)/ */ Context_TransformV_odoToV_real_3;
  outC_TransformV_odoToV_real_SDM_Types_Pkg /* _L148=(SDM_Types_Pkg::TransformV_odoToV_real#2)/ */ _1_Context_TransformV_odoToV_real_2;
  outC_TransformV_odoToV_real_SDM_Types_Pkg /* _L149=(SDM_Types_Pkg::TransformV_odoToV_real#1)/ */ _2_Context_TransformV_odoToV_real_1;
  outC_TransformT_intToT_real_SDM_Types_Pkg /* _L158=(SDM_Types_Pkg::TransformT_intToT_real#1)/ */ Context_TransformT_intToT_real_1;
  outC_TransformT_intToT_real_SDM_Types_Pkg /* _L162=(SDM_Types_Pkg::TransformT_intToT_real#2)/ */ _3_Context_TransformT_intToT_real_2;
  outC_TransformA_intToA_real_SDM_Types_Pkg /* _L145=(SDM_Types_Pkg::TransformA_intToA_real#1)/ */ Context_TransformA_intToA_real_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* @1/Mi_Output/ */ Mi_Output_Min_1_float32;
  kcg_float32 /* @1/I2/ */ I2_Min_1_float32;
  kcg_float32 /* @1/I1/ */ I1_Min_1_float32;
  kcg_bool /* @1/_L25/ */ _L25_Min_1_float32;
  kcg_float32 /* @1/_L24/ */ _L24_Min_1_float32;
  kcg_float32 /* @1/_L22/ */ _L22_Min_1_float32;
  kcg_float32 /* @1/_L21/ */ _L21_Min_1_float32;
  kcg_float32 /* @2/Ma_Output/ */ Ma_Output_Max_1_float32;
  kcg_float32 /* @2/I2/ */ I2_Max_1_float32;
  kcg_float32 /* @2/I1/ */ I1_Max_1_float32;
  kcg_float32 /* @2/_L4/ */ _L4_Max_1_float32;
  kcg_bool /* @2/_L3/ */ _L3_Max_1_float32;
  kcg_float32 /* @2/_L2/ */ _L2_Max_1_float32;
  kcg_float32 /* @2/_L1/ */ _L1_Max_1_float32;
  kcg_float32 /* @3/Mi_Output/ */ Mi_Output_Min_2_float32;
  kcg_float32 /* @3/I2/ */ I2_Min_2_float32;
  kcg_float32 /* @3/I1/ */ I1_Min_2_float32;
  kcg_bool /* @3/_L25/ */ _L25_Min_2_float32;
  kcg_float32 /* @3/_L24/ */ _L24_Min_2_float32;
  kcg_float32 /* @3/_L22/ */ _L22_Min_2_float32;
  kcg_float32 /* @3/_L21/ */ _L21_Min_2_float32;
  kcg_float32 /* @4/Mi_Output/ */ Mi_Output_Min_3_float32;
  kcg_float32 /* @4/I2/ */ I2_Min_3_float32;
  kcg_float32 /* @4/I1/ */ I1_Min_3_float32;
  kcg_bool /* @4/_L25/ */ _L25_Min_3_float32;
  kcg_float32 /* @4/_L24/ */ _L24_Min_3_float32;
  kcg_float32 /* @4/_L22/ */ _L22_Min_3_float32;
  kcg_float32 /* @4/_L21/ */ _L21_Min_3_float32;
  T_internal_real_Type_SDM_Types_Pkg /* T_be/ */ T_be;
  T_internal_real_Type_SDM_Types_Pkg /* T_bs2/ */ T_bs2;
  T_internal_real_Type_SDM_Types_Pkg /* T_berem/ */ T_berem;
  T_internal_real_Type_SDM_Types_Pkg /* T_Traction/ */ T_Traction;
  kcg_float32 /* _L9/ */ _L9;
  kcg_float32 /* _L10/ */ _L10;
  T_internal_real_Type_SDM_Types_Pkg /* _L11/ */ _L11;
  kcg_float32 /* _L13/ */ _L13;
  kcg_float32 /* _L16/ */ _L16;
  kcg_float32 /* _L21/ */ _L21;
  kcg_float32 /* _L57/ */ _L57;
  A_internal_real_Type_SDM_Types_Pkg /* _L64/ */ _L64;
  kcg_float32 /* _L66/ */ _L66;
  kcg_float32 /* _L77/ */ _L77;
  kcg_float32 /* _L79/ */ _L79;
  kcg_float32 /* _L80/ */ _L80;
  array_float32_3 /* _L85/ */ _L85;
  T_trac_t_TargetLimits_Pkg /* _L87/ */ _L87;
  kcg_float32 /* _L88/ */ _L88;
  kcg_float32 /* _L89/ */ _L89;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L97/ */ _L97;
  kcg_float32 /* _L96/ */ _L96;
  odometry_T_Obu_BasicTypes_Pkg /* _L95/ */ _L95;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L93/ */ _L93;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L92/ */ _L92;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L99/ */ _L99;
  odometry_T_Obu_BasicTypes_Pkg /* _L98/ */ _L98;
  t_Brake_t_SDMModelPkg /* _L100/ */ _L100;
  T_internal_real_Type_SDM_Types_Pkg /* _L104/ */ _L104;
  T_internal_real_Type_SDM_Types_Pkg /* _L103/ */ _L103;
  T_internal_real_Type_SDM_Types_Pkg /* _L106/ */ _L106;
  T_internal_real_Type_SDM_Types_Pkg /* _L105/ */ _L105;
  T_internal_real_Type_SDM_Types_Pkg /* _L107/ */ _L107;
  T_internal_real_Type_SDM_Types_Pkg /* _L108/ */ _L108;
  V_internal_real_Type_SDM_Types_Pkg /* _L109/ */ _L109;
  kcg_bool /* _L110/ */ _L110;
  kcg_float32 /* _L111/ */ _L111;
  T_internal_real_Type_SDM_Types_Pkg /* _L112/ */ _L112;
  T_internal_real_Type_SDM_Types_Pkg /* _L114/ */ _L114;
  T_internal_real_Type_SDM_Types_Pkg /* _L116/ */ _L116;
  T_internal_real_Type_SDM_Types_Pkg /* _L115/ */ _L115;
  T_trac_t_TargetLimits_Pkg /* _L123/ */ _L123;
  T_trac_t_TargetLimits_Pkg /* _L125/ */ _L125;
  T_internal_real_Type_SDM_Types_Pkg /* _L131/ */ _L131;
  T_internal_real_Type_SDM_Types_Pkg /* _L132/ */ _L132;
  bec_t_TargetLimits_Pkg /* _L135/ */ _L135;
  V_internal_real_Type_SDM_Types_Pkg /* _L136/ */ _L136;
  trainData_internal_t_SDM_Types_Pkg /* _L137/ */ _L137;
  kcg_bool /* _L138/ */ _L138;
  kcg_bool /* _L139/ */ _L139;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L142/ */ _L142;
  kcg_bool /* _L141/ */ _L141;
  trainData_internal_t_SDM_Types_Pkg /* _L140/ */ _L140;
  kcg_bool /* _L143/ */ _L143;
  kcg_bool /* _L144/ */ _L144;
  A_internal_real_Type_SDM_Types_Pkg /* _L145/ */ _L145;
  V_internal_real_Type_SDM_Types_Pkg /* _L147/ */ _L147;
  V_internal_real_Type_SDM_Types_Pkg /* _L148/ */ _L148;
  V_internal_real_Type_SDM_Types_Pkg /* _L149/ */ _L149;
  kcg_float32 /* _L157/ */ _L157;
  kcg_float32 /* _L156/ */ _L156;
  kcg_float32 /* _L154/ */ _L154;
  kcg_float32 /* _L152/ */ _L152;
  kcg_float32 /* _L150/ */ _L150;
  T_internal_real_Type_SDM_Types_Pkg /* _L158/ */ _L158;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L159/ */ _L159;
  T_internal_real_Type_SDM_Types_Pkg /* _L160/ */ _L160;
  T_internal_real_Type_SDM_Types_Pkg /* _L161/ */ _L161;
  T_internal_real_Type_SDM_Types_Pkg /* _L162/ */ _L162;
} outC_surplusTractionDeltas_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::surplusTractionDeltas/ */
extern void surplusTractionDeltas_TargetLimits_Pkg(
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
  outC_surplusTractionDeltas_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void surplusTractionDeltas_reset_TargetLimits_Pkg(
  outC_surplusTractionDeltas_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void surplusTractionDeltas_init_TargetLimits_Pkg(
  outC_surplusTractionDeltas_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TargetLimits_Pkg::surplusTractionDeltas/
  @1: (math::Min#1)
  @2: (math::Max#1)
  @3: (math::Min#2)
  @4: (math::Min#3)
*/

#endif /* _surplusTractionDeltas_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** surplusTractionDeltas_TargetLimits_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

