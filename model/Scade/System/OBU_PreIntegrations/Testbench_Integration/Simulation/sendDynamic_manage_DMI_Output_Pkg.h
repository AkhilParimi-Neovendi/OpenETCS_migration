/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _sendDynamic_manage_DMI_Output_Pkg_H_
#define _sendDynamic_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"
#include "convert_cm_s_km_h_manage_DMI_Output_Pkg.h"
#include "calcDistances_manage_DMI_Output_Pkg.h"
#include "mapMoRCtoRadio_CS_manage_DMI_Output_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* packetDynamic/ */ packetDynamic;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_mapMoRCtoRadio_CS_manage_DMI_Output_Pkg /* _L35=(manage_DMI_Output_Pkg::mapMoRCtoRadio_CS#1)/ */ Context_mapMoRCtoRadio_CS_1;
  outC_calcDistances_manage_DMI_Output_Pkg /* _L46=(manage_DMI_Output_Pkg::calcDistances#1)/ */ Context_calcDistances_1;
  outC_convert_cm_s_km_h_manage_DMI_Output_Pkg /* _L75=(manage_DMI_Output_Pkg::convert_cm_s_km_h#1)/ */ Context_convert_cm_s_km_h_1;
  outC_convert_cm_s_km_h_manage_DMI_Output_Pkg /* _L76=(manage_DMI_Output_Pkg::convert_cm_s_km_h#2)/ */ Context_convert_cm_s_km_h_2;
  outC_convert_cm_s_km_h_manage_DMI_Output_Pkg /* _L77=(manage_DMI_Output_Pkg::convert_cm_s_km_h#3)/ */ Context_convert_cm_s_km_h_3;
  outC_convert_cm_s_km_h_manage_DMI_Output_Pkg /* _L78=(manage_DMI_Output_Pkg::convert_cm_s_km_h#4)/ */ Context_convert_cm_s_km_h_4;
  outC_convert_cm_s_km_h_manage_DMI_Output_Pkg /* _L79=(manage_DMI_Output_Pkg::convert_cm_s_km_h#5)/ */ Context_convert_cm_s_km_h_5;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  odometry_T_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  trainPosition_T_TrainPosition_Types_Pck /* _L5/ */ _L5;
  speedSupervisionForDMI_T_DMI_Types_Pkg /* _L6/ */ _L6;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L7/ */ _L7;
  nationValuesForDMI_T_DMI_Types_Pkg /* _L8/ */ _L8;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  Location_T_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L11/ */ _L11;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L12/ */ _L12;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L13/ */ _L13;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L15/ */ _L15;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L16/ */ _L16;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L17/ */ _L17;
  M_MODE /* _L18/ */ _L18;
  M_LEVEL /* _L19/ */ _L19;
  NID_C /* _L20/ */ _L20;
  kcg_bool /* _L22/ */ _L22;
  M_SUPERVISION_STATUS_DMI_Types_Pkg /* _L21/ */ _L21;
  speedSupervisionForDMI_T_DMI_Types_Pkg /* _L23/ */ _L23;
  movementAuthorityForDMI_T_DMI_Types_Pkg /* _L24/ */ _L24;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L25/ */ _L25;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L26/ */ _L26;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* _L35/ */ _L35;
  M_SupervisionDisplay_T_DMI_Types_Pkg /* _L36/ */ _L36;
  DMI_level_T_DMI_Types_Pkg /* _L43/ */ _L43;
  NID_NTC /* _L45/ */ _L45;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L48/ */ _L48;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L47/ */ _L47;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L46/ */ _L46;
  trainPosition_T_TrainPosition_Types_Pck /* _L49/ */ _L49;
  speedSupervisionForDMI_T_DMI_Types_Pkg /* _L74/ */ _L74;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L73/ */ _L73;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L75/ */ _L75;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L76/ */ _L76;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L77/ */ _L77;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L78/ */ _L78;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L79/ */ _L79;
  morcStatus_T_RCM_Session_Types_Pkg /* _L80/ */ _L80;
} outC_sendDynamic_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::sendDynamic/ */
extern void sendDynamic_manage_DMI_Output_Pkg(
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* inOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* inTrainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* inSpeedSupervision/ */
  speedSupervisionForDMI_T_DMI_Types_Pkg *inSpeedSupervision,
  /* inModeAndLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* inNationalValues/ */
  nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* inMoRC_status/ */
  morcStatus_T_RCM_Session_Types_Pkg *inMoRC_status,
  /* inMovementAuthority/ */
  movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* inNTC/ */
  NID_NTC inNTC,
  outC_sendDynamic_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void sendDynamic_reset_manage_DMI_Output_Pkg(
  outC_sendDynamic_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void sendDynamic_init_manage_DMI_Output_Pkg(
  outC_sendDynamic_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _sendDynamic_manage_DMI_Output_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sendDynamic_manage_DMI_Output_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

