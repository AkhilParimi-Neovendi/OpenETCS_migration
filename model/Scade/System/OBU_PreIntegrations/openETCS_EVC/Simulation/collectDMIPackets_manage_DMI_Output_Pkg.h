/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _collectDMIPackets_manage_DMI_Output_Pkg_H_
#define _collectDMIPackets_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"
#include "synchWithDMI_manage_DMI_Output_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  EVC_to_DMI_Message_T_API_DMI_Pkg /* to_DMI/ */ to_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  dmiOutputs_T_manage_DMI_Output_Pkg /* outputStatus/ */ outputStatus;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_synchWithDMI_manage_DMI_Output_Pkg /* _L72=(manage_DMI_Output_Pkg::synchWithDMI#1)/ */ Context_synchWithDMI_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* lowerPart/ */ lowerPart;
  EVC_to_DMI_Message_T_API_DMI_Pkg /* _L34/ */ _L34;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  kcg_bool /* _L37/ */ _L37;
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L38/ */ _L38;
  kcg_bool /* _L39/ */ _L39;
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L40/ */ _L40;
  kcg_bool /* _L41/ */ _L41;
  kcg_bool /* _L42/ */ _L42;
  kcg_bool /* _L43/ */ _L43;
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
  kcg_bool /* _L46/ */ _L46;
  kcg_bool /* _L47/ */ _L47;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L48/ */ _L48;
  _4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg /* _L49/ */ _L49;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L50/ */ _L50;
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg /* _L51/ */ _L51;
  kcg_bool /* _L52/ */ _L52;
  kcg_bool /* _L53/ */ _L53;
  kcg_bool /* _L55/ */ _L55;
  kcg_bool /* _L54/ */ _L54;
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg /* _L57/ */ _L57;
  kcg_bool /* _L58/ */ _L58;
  kcg_bool /* _L59/ */ _L59;
  kcg_bool /* _L60/ */ _L60;
  kcg_bool /* _L61/ */ _L61;
  kcg_bool /* _L62/ */ _L62;
  kcg_bool /* _L63/ */ _L63;
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L66/ */ _L66;
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L67/ */ _L67;
  _5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* _L68/ */ _L68;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* _L69/ */ _L69;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* _L70/ */ _L70;
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg /* _L71/ */ _L71;
  dmiOutputs_T_manage_DMI_Output_Pkg /* _L73/ */ _L73;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L72/ */ _L72;
  dmiOutputs_T_manage_DMI_Output_Pkg /* _L74/ */ _L74;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L75/ */ _L75;
  TIU_trainStatus_T_TIU_Types_Pkg /* _L76/ */ _L76;
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg /* _L77/ */ _L77;
  kcg_bool /* _L78/ */ _L78;
} outC_collectDMIPackets_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::collectDMIPackets/ */
extern void collectDMIPackets_manage_DMI_Output_Pkg(
  /* TIU_TrainStatus/ */
  TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* dmi_dynamic/ */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_dynamic,
  /* dmi_menuRequest/ */
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_menuRequest,
  /* dmi_entryRequest/ */
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  /* dmi_evc_coded_train_data/ */
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_coded_train_data,
  /* dmi_text_message/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_text_message,
  /* dmi_trackDescription/ */
  _4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_trackDescription,
  /* dmi_identifierRequest/ */
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_identifierRequest,
  /* dmi_systemVersion/ */
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_systemVersion,
  /* dmi_displayControl/ */
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_displayControl,
  /* dmi_EVC_levelData/ */
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_EVC_levelData,
  /* dmi_EVC_radioNet/ */
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_EVC_radioNet,
  /* dmi_driverIdentifier/ */
  _5_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driverIdentifier,
  /* dmi_trainRunningNumber/ */
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *dmi_trainRunningNumber,
  /* dmi_trainData/ */
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *dmi_trainData,
  /* dmi_adhesionFactor/ */
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *dmi_adhesionFactor,
  /* dmi_iconRequest/ */
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_iconRequest,
  /* systemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_collectDMIPackets_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void collectDMIPackets_reset_manage_DMI_Output_Pkg(
  outC_collectDMIPackets_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void collectDMIPackets_init_manage_DMI_Output_Pkg(
  outC_collectDMIPackets_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _collectDMIPackets_manage_DMI_Output_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** collectDMIPackets_manage_DMI_Output_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

