/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CalcDMI_output_SDM_Commands_Pkg_H_
#define _CalcDMI_output_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  speedSupervisionForDMI_T_DMI_Types_Pkg /* sdmToDMI/ */ sdmToDMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SDM_Commands_T_SDM_Types_Pkg /* _L1/ */ _L1;
  speedSupervisionForDMI_T_DMI_Types_Pkg /* _L20/ */ _L20;
  SDM_Types_T_SDM_Types_Pkg /* _L21/ */ _L21;
  SupervisionStatus_T_SDM_Types_Pkg /* _L22/ */ _L22;
  kcg_bool /* _L27/ */ _L27;
  SupervisionStatus_T_SDM_Types_Pkg /* _L28/ */ _L28;
  kcg_bool /* _L32/ */ _L32;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L35/ */ _L35;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L38/ */ _L38;
  kcg_bool /* _L40/ */ _L40;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L41/ */ _L41;
  kcg_bool /* _L43/ */ _L43;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L44/ */ _L44;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L46/ */ _L46;
  SDM_Locations_T_SDM_Types_Pkg /* _L47/ */ _L47;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L54/ */ _L54;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L55/ */ _L55;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L56/ */ _L56;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L57/ */ _L57;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L61/ */ _L61;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L63/ */ _L63;
  M_SUPERVISION_STATUS_DMI_Types_Pkg /* _L70/ */ _L70;
  M_SUPERVISION_STATUS_DMI_Types_Pkg /* _L72/ */ _L72;
  M_SUPERVISION_STATUS_DMI_Types_Pkg /* _L73/ */ _L73;
  M_SUPERVISION_STATUS_DMI_Types_Pkg /* _L74/ */ _L74;
  M_SUPERVISION_STATUS_DMI_Types_Pkg /* _L75/ */ _L75;
  M_SupervisionDisplay_T_DMI_Types_Pkg /* _L76/ */ _L76;
  M_SupervisionDisplay_T_DMI_Types_Pkg /* _L77/ */ _L77;
  M_SupervisionDisplay_T_DMI_Types_Pkg /* _L78/ */ _L78;
  M_SupervisionDisplay_T_DMI_Types_Pkg /* _L79/ */ _L79;
  M_SupervisionDisplay_T_DMI_Types_Pkg /* _L80/ */ _L80;
  M_SupervisionDisplay_T_DMI_Types_Pkg /* _L81/ */ _L81;
  M_SupervisionDisplay_T_DMI_Types_Pkg /* _L82/ */ _L82;
  M_SUPERVISION_STATUS_DMI_Types_Pkg /* _L83/ */ _L83;
  kcg_bool /* _L87/ */ _L87;
  M_SUPERVISION_STATUS_DMI_Types_Pkg /* _L88/ */ _L88;
  trainPosition_T_TrainPosition_Types_Pck /* _L91/ */ _L91;
  Location_T_Obu_BasicTypes_Pkg /* _L90/ */ _L90;
  kcg_int32 /* _L92/ */ _L92;
  kcg_int32 /* _L94/ */ _L94;
  kcg_bool /* _L98/ */ _L98;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L99/ */ _L99;
  kcg_bool /* _L107/ */ _L107;
} outC_CalcDMI_output_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::CalcDMI_output/ */
extern void CalcDMI_output_SDM_Commands_Pkg(
  /* in_sdmCmd/ */
  SDM_Commands_T_SDM_Types_Pkg *in_sdmCmd,
  /* limit_locations/ */
  SDM_Locations_T_SDM_Types_Pkg *limit_locations,
  /* trainLocations/ */
  trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  outC_CalcDMI_output_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalcDMI_output_reset_SDM_Commands_Pkg(
  outC_CalcDMI_output_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalcDMI_output_init_SDM_Commands_Pkg(
  outC_CalcDMI_output_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CalcDMI_output_SDM_Commands_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcDMI_output_SDM_Commands_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

