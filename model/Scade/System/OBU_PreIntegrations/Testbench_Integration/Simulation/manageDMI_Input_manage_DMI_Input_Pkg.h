/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _manageDMI_Input_manage_DMI_Input_Pkg_H_
#define _manageDMI_Input_manage_DMI_Input_Pkg_H_

#include "kcg_types.h"
#include "Write_int_to_DMI_to_EVC_Messages.h"
#include "triggerForMA_manage_DMI_Input_Pkg.h"
#include "changeLevelByDiver_manage_DMI_Input_Pkg.h"
#include "receiveRequestsModesAndLevel_manage_DMI_Input_Pkg.h"
#include "updateDMIStatus_manage_DMI_Input_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_EVC_status_T_DMI_Types_Pkg /* currentDMIStatus/ */ currentDMIStatus;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* fromDMI_Identifier/ */ fromDMI_Identifier;
  kcg_bool /* outUpdateLevelsDMI/ */ outUpdateLevelsDMI;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* fromDMI_DriverIdentifier/ */ fromDMI_DriverIdentifier;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* fromDMI_TrainRunningNumber/ */ fromDMI_TrainRunningNumber;
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg /* fromDMI_RadioNetData/ */ fromDMI_RadioNetData;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* fromDMI_Icon_Ack/ */ fromDMI_Icon_Ack;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* fromDMI_TrainData/ */ fromDMI_TrainData;
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* fromDMI_TrainDataAck/ */ fromDMI_TrainDataAck;
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg /* fromDMI_AdhesionFactor/ */ fromDMI_AdhesionFactor;
  DMI_To_Modes_T_DMI_Types_Pkg /* forModesAndLevel/ */ forModesAndLevel;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* ML_levelTransition/ */ ML_levelTransition;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* outStatusList/ */ outStatusList;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* outDriverRequest/ */ outDriverRequest;
  NID_STM_DMI_Types_Pkg /* updatedNTC/ */ updatedNTC;
  Driver2MAR_T_MA_Request /* outForMA/ */ outForMA;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  DMI_EVC_status_T_DMI_Types_Pkg /* DMI_Status_inEVC/ */ DMI_Status_inEVC;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_updateDMIStatus_manage_DMI_Input_Pkg /* IfBlock1:then:_L12=(manage_DMI_Input_Pkg::updateDMIStatus#2)/ */ Context_updateDMIStatus_2;
  outC_receiveRequestsModesAndLevel_manage_DMI_Input_Pkg /* IfBlock1:then:_L32=(manage_DMI_Input_Pkg::receiveRequestsModesAndLevel#1)/ */ Context_receiveRequestsModesAndLevel_1;
  outC_changeLevelByDiver_manage_DMI_Input_Pkg /* IfBlock1:then:_L37=(manage_DMI_Input_Pkg::changeLevelByDiver#1)/ */ Context_changeLevelByDiver_1;
  outC_triggerForMA_manage_DMI_Input_Pkg /* IfBlock1:then:_L52=(manage_DMI_Input_Pkg::triggerForMA#1)/ */ Context_triggerForMA_1;
  outC_Write_int_to_DMI_to_EVC_Messages /* IfBlock1:then:_L54=(Messages::Write_int_to_DMI_to_EVC#2)/ */ Context_Write_int_to_DMI_to_EVC_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_to_EVC_Message_T_API_DMI_Pkg /* IfBlock1:then:_L54/ */ _L54_then_IfBlock1;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:then:_L53/ */ _L53_then_IfBlock1;
  Driver2MAR_T_MA_Request /* IfBlock1:then:_L52/ */ _L52_then_IfBlock1;
  NID_STM_DMI_Types_Pkg /* IfBlock1:then:_L51/ */ _L51_then_IfBlock1;
  NID_STM_DMI_Types_Pkg /* IfBlock1:then:_L50/ */ _L50_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L47/ */ _L47_then_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L45/ */ _L45_then_IfBlock1;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* IfBlock1:then:_L44/ */ _L44_then_IfBlock1;
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:then:_L43/ */ _L43_then_IfBlock1;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:then:_L42/ */ _L42_then_IfBlock1;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:then:_L41/ */ _L41_then_IfBlock1;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* IfBlock1:then:_L38/ */ _L38_then_IfBlock1;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* IfBlock1:then:_L37/ */ _L37_then_IfBlock1;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* IfBlock1:then:_L36/ */ _L36_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L33/ */ _L33_then_IfBlock1;
  DMI_To_Modes_T_DMI_Types_Pkg /* IfBlock1:then:_L32/ */ _L32_then_IfBlock1;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:then:_L30/ */ _L30_then_IfBlock1;
  DMI_EVC_status_T_DMI_Types_Pkg /* IfBlock1:then:_L21/ */ _L21_then_IfBlock1;
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg /* IfBlock1:then:_L19/ */ _L19_then_IfBlock1;
  DMI_EVC_status_T_DMI_Types_Pkg /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  DMI_EVC_status_T_DMI_Types_Pkg /* IfBlock1:else:else:_L3/ */ _L3_else_else_IfBlock1;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* IfBlock1:else:else:_L4/ */ _L4_else_else_IfBlock1;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:else:else:_L6/ */ _L6_else_else_IfBlock1;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:else:else:_L5/ */ _L5_else_else_IfBlock1;
  NID_STM_DMI_Types_Pkg /* IfBlock1:else:else:_L7/ */ _L7_else_else_IfBlock1;
  Driver2MAR_T_MA_Request /* IfBlock1:else:else:_L8/ */ _L8_else_else_IfBlock1;
  DMI_EVC_status_T_DMI_Types_Pkg /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:else:then:_L7/ */ _L7_then_else_IfBlock1;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:else:then:_L8/ */ _L8_then_else_IfBlock1;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* IfBlock1:else:then:_L9/ */ _L9_then_else_IfBlock1;
  NID_STM_DMI_Types_Pkg /* IfBlock1:else:then:_L10/ */ _L10_then_else_IfBlock1;
  Driver2MAR_T_MA_Request /* IfBlock1:else:then:_L11/ */ _L11_then_else_IfBlock1;
  kcg_bool /* inputPresent/ */ inputPresent;
  kcg_bool /* sndValidationRequested/ */ sndValidationRequested;
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* textMessage_Ack/ */ textMessage_Ack;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* icon_Ack/ */ icon_Ack;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* driverRequest/ */ driverRequest;
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* _L1/ */ _L1;
  DMI_EVC_status_T_DMI_Types_Pkg /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L18/ */ _L18;
  kcg_int64 /* _L19/ */ _L19;
  kcg_int64 /* _L20/ */ _L20;
} outC_manageDMI_Input_manage_DMI_Input_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Input_Pkg::manageDMI_Input/ */
extern void manageDMI_Input_manage_DMI_Input_Pkg(
  /* fromDMI/ */
  DMI_to_EVC_Message_int_T_API_DMI_Pkg *fromDMI,
  /* dmiStatusReset/ */
  kcg_bool dmiStatusReset,
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* lasttNTC/ */
  NID_STM_DMI_Types_Pkg lasttNTC,
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void manageDMI_Input_reset_manage_DMI_Input_Pkg(
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void manageDMI_Input_init_manage_DMI_Input_Pkg(
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  DMI_EVC_status_T_DMI_Types_Pkg /* DMI_Status_inEVC/ */ Context_DMI_Status_inEVC;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_manageDMI_Input_manage_DMI_Input_Pkg;

extern void kcg_save_SV_manageDMI_Input_manage_DMI_Input_Pkg(
  SV_manageDMI_Input_manage_DMI_Input_Pkg *SV,
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC);
extern void kcg_load_SV_manageDMI_Input_manage_DMI_Input_Pkg(
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC,
  SV_manageDMI_Input_manage_DMI_Input_Pkg *SV);



#endif /* _manageDMI_Input_manage_DMI_Input_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** manageDMI_Input_manage_DMI_Input_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

