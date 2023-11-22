/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CalcDriverOutput_SDM_Commands_Pkg_H_
#define _CalcDriverOutput_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_odometry_Type_Obu_BasicTypes_Pkg /* v_est/ */ v_est;
  kcg_bool /* valid_v_est/ */ valid_v_est;
  V_odometry_Type_Obu_BasicTypes_Pkg /* v_permitted/ */ v_permitted;
  kcg_bool /* valid_v_permitted/ */ valid_v_permitted;
  V_odometry_Type_Obu_BasicTypes_Pkg /* v_release/ */ v_release;
  kcg_bool /* valid_v_release/ */ valid_v_release;
  V_odometry_Type_Obu_BasicTypes_Pkg /* v_mrdt/ */ v_mrdt;
  kcg_bool /* valid_v_mrdt/ */ valid_v_mrdt;
  V_odometry_Type_Obu_BasicTypes_Pkg /* v_floi/ */ v_floi;
  kcg_bool /* valid_v_floi/ */ valid_v_floi;
  L_internal_Type_Obu_BasicTypes_Pkg /* targetDistance/ */ targetDistance;
  kcg_bool /* valid_targetDistance/ */ valid_targetDistance;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SDM_Types_T_SDM_Types_Pkg /* WhenBlock1: */ WhenBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* WhenBlock1:CSM:_L4/ */ _L4_CSM_WhenBlock1;
  kcg_bool /* WhenBlock1:RSM:_L1/ */ _L1_RSM_WhenBlock1;
  Speeds_T_SDM_Types_Pkg /* WhenBlock1:RSM:_L3/ */ _L3_RSM_WhenBlock1;
  kcg_bool /* WhenBlock1:RSM:_L4/ */ _L4_RSM_WhenBlock1;
  kcg_bool /* WhenBlock1:RSM:_L5/ */ _L5_RSM_WhenBlock1;
  SupervisionStatus_T_SDM_Types_Pkg /* WhenBlock1:RSM:_L6/ */ _L6_RSM_WhenBlock1;
  SupervisionStatus_T_SDM_Types_Pkg /* WhenBlock1:RSM:_L7/ */ _L7_RSM_WhenBlock1;
  SupervisionStatus_T_SDM_Types_Pkg /* WhenBlock1:RSM:_L9/ */ _L9_RSM_WhenBlock1;
  V_odometry_Type_Obu_BasicTypes_Pkg /* WhenBlock1:RSM:_L10/ */ _L10_RSM_WhenBlock1;
  V_odometry_Type_Obu_BasicTypes_Pkg /* WhenBlock1:TSM:_L1/ */ _L1_TSM_WhenBlock1;
  kcg_bool /* WhenBlock1:TSM:_L3/ */ _L3_TSM_WhenBlock1;
  SupervisionStatus_T_SDM_Types_Pkg /* WhenBlock1:TSM:_L4/ */ _L4_TSM_WhenBlock1;
  kcg_bool /* WhenBlock1:TSM:_L7/ */ _L7_TSM_WhenBlock1;
  SupervisionStatus_T_SDM_Types_Pkg /* WhenBlock1:TSM:_L8/ */ _L8_TSM_WhenBlock1;
  TargetType_T_TargetManagement_types /* WhenBlock1:TSM:_L9/ */ _L9_TSM_WhenBlock1;
  TargetType_T_TargetManagement_types /* WhenBlock1:TSM:_L10/ */ _L10_TSM_WhenBlock1;
  kcg_bool /* WhenBlock1:TSM:_L11/ */ _L11_TSM_WhenBlock1;
  Target_T_TargetManagement_types /* WhenBlock1:TSM:_L12/ */ _L12_TSM_WhenBlock1;
  kcg_bool /* WhenBlock1:TSM:_L13/ */ _L13_TSM_WhenBlock1;
  Speeds_T_SDM_Types_Pkg /* WhenBlock1:TSM:_L14/ */ _L14_TSM_WhenBlock1;
  TargetType_T_TargetManagement_types /* WhenBlock1:TSM:_L15/ */ _L15_TSM_WhenBlock1;
  kcg_bool /* WhenBlock1:TSM:_L18/ */ _L18_TSM_WhenBlock1;
  SupervisionStatus_T_SDM_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  SupervisionStatus_T_SDM_Types_Pkg /* _L10/ */ _L10;
  SupervisionStatus_T_SDM_Types_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  SupervisionStatus_T_SDM_Types_Pkg /* _L13/ */ _L13;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L34/ */ _L34;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L33/ */ _L33;
  Speeds_T_SDM_Types_Pkg /* _L32/ */ _L32;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L35/ */ _L35;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L36/ */ _L36;
  SDM_Locations_T_SDM_Types_Pkg /* _L38/ */ _L38;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L37/ */ _L37;
} outC_CalcDriverOutput_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::CalcDriverOutput/ */
extern void CalcDriverOutput_SDM_Commands_Pkg(
  /* sdmType/ */
  SDM_Types_T_SDM_Types_Pkg sdmType,
  /* supVisStatus/ */
  SupervisionStatus_T_SDM_Types_Pkg supVisStatus,
  /* mrdt/ */
  Target_T_TargetManagement_types *mrdt,
  /* speeds/ */
  Speeds_T_SDM_Types_Pkg *speeds,
  /* locations/ */
  SDM_Locations_T_SDM_Types_Pkg *locations,
  outC_CalcDriverOutput_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalcDriverOutput_reset_SDM_Commands_Pkg(
  outC_CalcDriverOutput_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalcDriverOutput_init_SDM_Commands_Pkg(
  outC_CalcDriverOutput_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CalcDriverOutput_SDM_Commands_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcDriverOutput_SDM_Commands_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

