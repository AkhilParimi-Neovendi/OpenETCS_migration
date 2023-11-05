/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _manageDMI_Output_manage_DMI_Output_Pkg_H_
#define _manageDMI_Output_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"
#include "Write_EVC_to_DMI_to_int_Messages.h"
#include "doIdentifierRequest_manage_DMI_Output_Pkg.h"
#include "copyTrackDescription_manage_DMI_Output_Pkg.h"
#include "manageTextMessages_manage_TextMessages_Pkg.h"
#include "sendLevelListPkg_manage_DMI_Output_Pkg.h"
#include "sendVersion_manage_DMI_Output_Pkg.h"
#include "sendTrainData_manage_DMI_Output_Pkg.h"
#include "sendBrakesToDMI_manage_DMI_Output_Pkg.h"
#include "doEntryRequest_manage_DMI_Output_Pkg.h"
#include "collectDMIPackets_manage_DMI_Output_Pkg.h"
#include "cyclicReportToDMI_manage_DMI_Output_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* to_DMI/ */ to_DMI;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* outStatusList/ */ outStatusList;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Write_EVC_to_DMI_to_int_Messages /* _L93=(Messages::Write_EVC_to_DMI_to_int#1)/ */ Context_Write_EVC_to_DMI_to_int_1;
  outC_collectDMIPackets_manage_DMI_Output_Pkg /* _L1=(manage_DMI_Output_Pkg::collectDMIPackets#1)/ */ Context_collectDMIPackets_1;
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg /* _L45=(manage_DMI_Output_Pkg::sendBrakesToDMI#2)/ */ Context_sendBrakesToDMI_2;
  outC_sendLevelListPkg_manage_DMI_Output_Pkg /* _L70=(manage_DMI_Output_Pkg::sendLevelListPkg#1)/ */ Context_sendLevelListPkg_1;
  outC_sendVersion_manage_DMI_Output_Pkg /* _L66=(manage_DMI_Output_Pkg::sendVersion#1)/ */ Context_sendVersion_1;
  outC_doIdentifierRequest_manage_DMI_Output_Pkg /* _L88=(manage_DMI_Output_Pkg::doIdentifierRequest#1)/ */ Context_doIdentifierRequest_1;
  outC_copyTrackDescription_manage_DMI_Output_Pkg /* _L85=(manage_DMI_Output_Pkg::copyTrackDescription#1)/ */ Context_copyTrackDescription_1;
  outC_manageTextMessages_manage_TextMessages_Pkg /* _L77=(manage_TextMessages_Pkg::manageTextMessages#1)/ */ Context_manageTextMessages_1;
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg /* _L2=(manage_DMI_Output_Pkg::cyclicReportToDMI#1)/ */ Context_cyclicReportToDMI_1;
  outC_sendTrainData_manage_DMI_Output_Pkg /* _L51=(manage_DMI_Output_Pkg::sendTrainData#2)/ */ Context_sendTrainData_2;
  outC_doEntryRequest_manage_DMI_Output_Pkg /* _L31=(manage_DMI_Output_Pkg::doEntryRequest#1)/ */ Context_doEntryRequest_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* doTrainData/ */ doTrainData;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* DMI_TrainData/ */ DMI_TrainData;
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg /* versionPackage/ */ versionPackage;
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* LevelListPkg/ */ LevelListPkg;
  kcg_bool /* levelUpdate/ */ levelUpdate;
  kcg_bool /* sendCyclic/ */ sendCyclic;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* _L2/ */ _L2;
  DMI_EVC_status_T_DMI_Types_Pkg /* _L3/ */ _L3;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  TIU_trainStatus_T_TIU_Types_Pkg /* _L5/ */ _L5;
  odometry_T_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  trainPosition_T_TrainPosition_Types_Pck /* _L7/ */ _L7;
  speedSupervisionForDMI_T_DMI_Types_Pkg /* _L8/ */ _L8;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L9/ */ _L9;
  nationValuesForDMI_T_DMI_Types_Pkg /* _L10/ */ _L10;
  movementAuthorityForDMI_T_DMI_Types_Pkg /* _L11/ */ _L11;
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L15/ */ _L15;
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L16/ */ _L16;
  DataForDMI_t_TrackAtlasTypes /* _L18/ */ _L18;
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg /* _L21/ */ _L21;
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L23/ */ _L23;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* _L24/ */ _L24;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* _L25/ */ _L25;
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg /* _L27/ */ _L27;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L29/ */ _L29;
  EVC_to_DMI_Message_T_API_DMI_Pkg /* _L1/ */ _L1;
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L31/ */ _L31;
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L30/ */ _L30;
  kcg_bool /* _L37/ */ _L37;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L38/ */ _L38;
  kcg_bool /* _L40/ */ _L40;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L42/ */ _L42;
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg /* _L45/ */ _L45;
  Brake_command_T_TIU_Types_Pkg /* _L46/ */ _L46;
  NID_NTC /* _L47/ */ _L47;
  trainData_T_TIU_Types_Pkg /* _L53/ */ _L53;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L52/ */ _L52;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* _L51/ */ _L51;
  kcg_bool /* _L50/ */ _L50;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* _L49/ */ _L49;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* _L55/ */ _L55;
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg /* _L64/ */ _L64;
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg /* _L66/ */ _L66;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L67/ */ _L67;
  M_VERSION /* _L68/ */ _L68;
  DMI_EVC_status_T_DMI_Types_Pkg /* _L69/ */ _L69;
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L70/ */ _L70;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L72/ */ _L72;
  DMI_LevelList_T_DMI_Types_Pkg /* _L73/ */ _L73;
  kcg_bool /* _L74/ */ _L74;
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L75/ */ _L75;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L77/ */ _L77;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* _L76/ */ _L76;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* _L78/ */ _L78;
  kcg_bool /* _L80/ */ _L80;
  kcg_bool /* _L81/ */ _L81;
  kcg_bool /* _L83/ */ _L83;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L84/ */ _L84;
  DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg /* _L85/ */ _L85;
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg /* _L86/ */ _L86;
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg /* _L87/ */ _L87;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L88/ */ _L88;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L89/ */ _L89;
  M_VERSION /* _L91/ */ _L91;
  TIU_trainStatus_T_TIU_Types_Pkg /* _L92/ */ _L92;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* _L93/ */ _L93;
  morcStatus_T_RCM_Session_Types_Pkg /* _L94/ */ _L94;
  DataForDMI_t_TrackAtlasTypes /* _L96/ */ _L96;
  kcg_bool /* _L97/ */ _L97;
  kcg_bool /* _L98/ */ _L98;
  kcg_bool /* _L99/ */ _L99;
  kcg_bool /* _L100/ */ _L100;
} outC_manageDMI_Output_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::manageDMI_Output/ */
extern void manageDMI_Output_manage_DMI_Output_Pkg(
  /* incurrentDMIStatus/ */
  DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* TIU_TrainStatus/ */
  TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* inOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* inTrainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* inBrakeCommand/ */
  Brake_command_T_TIU_Types_Pkg *inBrakeCommand,
  /* inSpeedSupervision/ */
  speedSupervisionForDMI_T_DMI_Types_Pkg *inSpeedSupervision,
  /* inModeAndLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* inNationalValues/ */
  nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* inMovementAuthority/ */
  movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* inMoRC_status/ */
  morcStatus_T_RCM_Session_Types_Pkg *inMoRC_status,
  /* trainDataFromEVC/ */
  trainData_T_TIU_Types_Pkg *trainDataFromEVC,
  /* dmi_entryRequest/ */
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  /* dmi_evc_coded_train_data/ */
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_coded_train_data,
  /* dmi_trackDescription/ */
  DataForDMI_t_TrackAtlasTypes *dmi_trackDescription,
  /* evc_systemVersion/ */
  M_VERSION evc_systemVersion,
  /* dmi_displayControl/ */
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_displayControl,
  /* dmi_EVC_levelList/ */
  DMI_LevelList_T_DMI_Types_Pkg *dmi_EVC_levelList,
  /* dmiUpdateLevelsDMI/ */
  kcg_bool dmiUpdateLevelsDMI,
  /* dmi_EVC_radioNet/ */
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_EVC_radioNet,
  /* dmi_driverIdentifier/ */
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driverIdentifier,
  /* dmi_trainRunningNumber/ */
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *dmi_trainRunningNumber,
  /* dmi_adhesionFactor/ */
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *dmi_adhesionFactor,
  /* dmi_fromBG/ */
  kcg_bool dmi_fromBG,
  /* inModeLevel_Ack/ */
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *inModeLevel_Ack,
  /* announcedLevel/ */
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg *announcedLevel,
  /* inNTC/ */
  NID_NTC inNTC,
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  outC_manageDMI_Output_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void manageDMI_Output_reset_manage_DMI_Output_Pkg(
  outC_manageDMI_Output_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void manageDMI_Output_init_manage_DMI_Output_Pkg(
  outC_manageDMI_Output_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_cyclicReportToDMI_manage_DMI_Output_Pkg Context_cyclicReportToDMI_1;
  SV_doIdentifierRequest_manage_DMI_Output_Pkg Context_doIdentifierRequest_1;
  SV_sendVersion_manage_DMI_Output_Pkg Context_sendVersion_1;
  SV_sendBrakesToDMI_manage_DMI_Output_Pkg Context_sendBrakesToDMI_2;
  SV_collectDMIPackets_manage_DMI_Output_Pkg Context_collectDMIPackets_1;
} SV_manageDMI_Output_manage_DMI_Output_Pkg;

extern void kcg_save_SV_manageDMI_Output_manage_DMI_Output_Pkg(
  SV_manageDMI_Output_manage_DMI_Output_Pkg *SV,
  outC_manageDMI_Output_manage_DMI_Output_Pkg *outC);
extern void kcg_load_SV_manageDMI_Output_manage_DMI_Output_Pkg(
  outC_manageDMI_Output_manage_DMI_Output_Pkg *outC,
  SV_manageDMI_Output_manage_DMI_Output_Pkg *SV);



#endif /* _manageDMI_Output_manage_DMI_Output_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** manageDMI_Output_manage_DMI_Output_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

