/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _SDM_Commands_SDM_Commands_Pkg_H_
#define _SDM_Commands_SDM_Commands_Pkg_H_

#include "kcg_types.h"
#include "CalcBrakeCmd_SDM_Commands_Pkg.h"
#include "CalcDMI_output_SDM_Commands_Pkg.h"
#include "MergeMLRequests_SDM_Commands_Pkg.h"
#include "CalcModeTransOutput_SDM_Commands_Pkg.h"
#include "CalcDriverOutput_SDM_Commands_Pkg.h"
#include "CmdTrainSupervisionStatus_SDM_Commands_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  speedSupervisionForDMI_T_DMI_Types_Pkg /* sdmToDMI/ */ sdmToDMI;
  SDM_Commands_T_SDM_Types_Pkg /* sdmCmd/ */ sdmCmd;
  kcg_bool /* targetSpeedReached/ */ targetSpeedReached;
  kcg_bool /* eoaOverpassed/ */ eoaOverpassed;
  Brake_command_T_TIU_Types_Pkg /* brakeCmd/ */ brakeCmd;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CalcModeTransOutput_SDM_Commands_Pkg /* _L97=(SDM_Commands_Pkg::CalcModeTransOutput)/ */ Context_CalcModeTransOutput;
  outC_CalcDMI_output_SDM_Commands_Pkg /* _L225=(SDM_Commands_Pkg::CalcDMI_output#1)/ */ Context_CalcDMI_output_1;
  outC_CalcBrakeCmd_SDM_Commands_Pkg /* _L227=(SDM_Commands_Pkg::CalcBrakeCmd#1)/ */ Context_CalcBrakeCmd_1;
  outC_MergeMLRequests_SDM_Commands_Pkg /* _L224=(SDM_Commands_Pkg::MergeMLRequests#2)/ */ Context_MergeMLRequests_2;
  outC_CalcDriverOutput_SDM_Commands_Pkg /* _L72=(SDM_Commands_Pkg::CalcDriverOutput#1)/ */ Context_CalcDriverOutput_1;
  outC_MergeMLRequests_SDM_Commands_Pkg /* _L242=(SDM_Commands_Pkg::MergeMLRequests#4)/ */ Context_MergeMLRequests_4;
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg /* _L11=(SDM_Commands_Pkg::CmdTrainSupervisionStatus#1)/ */ Context_CmdTrainSupervisionStatus_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SupervisionStatus_T_SDM_Types_Pkg /* _L11/ */ _L11;
  EB_command_T_SDM_Commands_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  SDM_Types_T_SDM_Types_Pkg /* _L7/ */ _L7;
  SupervisionStatus_T_SDM_Types_Pkg /* _L6/ */ _L6;
  SupervisionStatus_T_SDM_Types_Pkg /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  TargetCollection_T_TargetManagement_types /* _L12/ */ _L12;
  Speeds_T_SDM_Types_Pkg /* _L14/ */ _L14;
  SDM_Locations_T_SDM_Types_Pkg /* _L15/ */ _L15;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L22/ */ _L22;
  Target_T_TargetManagement_types /* _L28/ */ _L28;
  SDM_Commands_T_SDM_Types_Pkg /* _L63/ */ _L63;
  kcg_bool /* _L64/ */ _L64;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L67/ */ _L67;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L68/ */ _L68;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L69/ */ _L69;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L70/ */ _L70;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L71/ */ _L71;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L72/ */ _L72;
  kcg_bool /* _L73/ */ _L73;
  trainPosition_T_TrainPosition_Types_Pck /* _L74/ */ _L74;
  kcg_bool /* _L98/ */ _L98;
  kcg_bool /* _L97/ */ _L97;
  kcg_bool /* _L99/ */ _L99;
  kcg_bool /* _L220/ */ _L220;
  kcg_bool /* _L221/ */ _L221;
  kcg_bool /* _L224/ */ _L224;
  kcg_bool /* _L223/ */ _L223;
  speedSupervisionForDMI_T_DMI_Types_Pkg /* _L225/ */ _L225;
  SDM_Locations_T_SDM_Types_Pkg /* _L226/ */ _L226;
  Brake_command_T_TIU_Types_Pkg /* _L227/ */ _L227;
  P3_NationalValues_T_Packet_Types_Pkg /* _L230/ */ _L230;
  trainData_internal_t_SDM_Types_Pkg /* _L229/ */ _L229;
  Speeds_T_SDM_Types_Pkg /* _L235/ */ _L235;
  trainData_internal_t_SDM_Types_Pkg /* _L236/ */ _L236;
  trainPosition_T_TrainPosition_Types_Pck /* _L238/ */ _L238;
  kcg_bool /* _L242/ */ _L242;
  kcg_bool /* _L243/ */ _L243;
} outC_SDM_Commands_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::SDM_Commands/ */
extern void SDM_Commands_SDM_Commands_Pkg(
  /* allTargets/ */
  TargetCollection_T_TargetManagement_types *allTargets,
  /* trainLocations/ */
  trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* speeds/ */
  Speeds_T_SDM_Types_Pkg *speeds,
  /* locations/ */
  SDM_Locations_T_SDM_Types_Pkg *locations,
  /* mrdt/ */
  Target_T_TargetManagement_types *mrdt,
  /* floiIsSB1/ */
  kcg_bool floiIsSB1,
  /* MLrequestSB/ */
  kcg_bool MLrequestSB,
  /* MLrequestEB/ */
  kcg_bool MLrequestEB,
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* TrainData_int/ */
  trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  outC_SDM_Commands_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SDM_Commands_reset_SDM_Commands_Pkg(
  outC_SDM_Commands_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SDM_Commands_init_SDM_Commands_Pkg(
  outC_SDM_Commands_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_CmdTrainSupervisionStatus_SDM_Commands_Pkg Context_CmdTrainSupervisionStatus_1;
  SV_MergeMLRequests_SDM_Commands_Pkg Context_MergeMLRequests_4;
  SV_MergeMLRequests_SDM_Commands_Pkg Context_MergeMLRequests_2;
  SV_CalcBrakeCmd_SDM_Commands_Pkg Context_CalcBrakeCmd_1;
} SV_SDM_Commands_SDM_Commands_Pkg;

extern void kcg_save_SV_SDM_Commands_SDM_Commands_Pkg(
  SV_SDM_Commands_SDM_Commands_Pkg *SV,
  outC_SDM_Commands_SDM_Commands_Pkg *outC);
extern void kcg_load_SV_SDM_Commands_SDM_Commands_Pkg(
  outC_SDM_Commands_SDM_Commands_Pkg *outC,
  SV_SDM_Commands_SDM_Commands_Pkg *SV);



#endif /* _SDM_Commands_SDM_Commands_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SDM_Commands_SDM_Commands_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

