/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _Master_Procedure_ManageProcedure_Pkg_H_
#define _Master_Procedure_ManageProcedure_Pkg_H_

#include "kcg_types.h"
#include "SoM_NTC_SN_SoMProcedure_Pkg.h"
#include "SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Entry_Request_to_DMI/ */ DMI_Entry_Request_to_DMI;
  radioManagementMessage_T_Common_Types_Pkg /* request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC/ */ request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC;
  kcg_bool /* powerUp_to_MoRC/ */ powerUp_to_MoRC;
  kcg_bool /* statusstartofmissionongoing_to_MoRC/ */ statusstartofmissionongoing_to_MoRC;
  kcg_bool /* powerOff_to_MoRC/ */ powerOff_to_MoRC;
  kcg_bool /* request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management/ */ request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  kcg_bool /* request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management/ */ request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
  kcg_bool /* start_ack_to_TIU/ */ start_ack_to_TIU;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  struct_487049 /* _L214= */ fby_2;
  struct_487049 /* _L212= */ fby_1;
  kcg_bool init;
  kcg_bool init1;
  kcg_bool /* SM1:Awakness_of_Train:SM3: */ SM3_reset_nxt_Awakness_of_Train_SM1;
  kcg_bool /* SM1:Awakness_of_Train:SM3: */ SM3_reset_act_Awakness_of_Train_SM1;
  SSM_ST_SM3_Awakness_of_Train_SM1 /* SM1:Awakness_of_Train:SM3: */ SM3_state_nxt_Awakness_of_Train_SM1;
  _140_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  kcg_bool /* sendingPositionReport_to_RBC/ */ sendingPositionReport_to_RBC;
  kcg_bool /* sendingTrainData_to_RBC/ */ sendingTrainData_to_RBC;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg /* SM1:SoM_L2_3_FS_SR_OS_LS_SH:_L4=(SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN#1)/ */ Context_SoM_SR_FS_OS_LS_SH_SN_UN_1;
  outC_SoM_NTC_SN_SoMProcedure_Pkg /* SM1:SoM_NTC_SN:_L3=(SoMProcedure_Pkg::SoM_NTC_SN#1)/ */ Context_SoM_NTC_SN_1;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM3_Awakness_of_Train_SM1 /* SM1:Awakness_of_Train:SM3: */ SM3_clock_Awakness_of_Train_SM1;
  SSM_ST_SM3_Awakness_of_Train_SM1 /* SM1:Awakness_of_Train:SM3: */ _2_SM3_clock_Awakness_of_Train_SM1;
  kcg_bool /* SM1:Awakness_of_Train: */ Awakness_of_Train_weakb_clock_SM1;
  kcg_bool /* SM1:Awakness_of_Train:SM3:Waiting_for_driver_selection_E10_E11_or_E12:<1> */ tr_1_clock_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1;
  kcg_bool /* SM1:Awakness_of_Train:SM3:Waiting_for_Mobile_terminal_registration:<1> */ tr_1_clock_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1;
  kcg_bool /* SM1:Awakness_of_Train:SM3:SB:<1> */ tr_1_clock_SB_SM3_Awakness_of_Train_SM1;
  kcg_bool /* SM1:Awakness_of_Train:SM3:Waiting_for_Acknowledgement_of_Train_Data_from_RBC:<1> */ tr_1_clock_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1;
  kcg_bool /* SM1:Awakness_of_Train:SM3:Second_Validation_of_Train_Number_from_Driver:<2> */ tr_2_clock_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1;
  kcg_bool /* SM1:Awakness_of_Train:SM3:Second_Validation_of_Train_Number_from_Driver:<1> */ tr_1_clock_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1;
  kcg_bool /* SM1:Awakness_of_Train:SM3:Validation_of_Train_Data_from_Driver:<1> */ tr_1_clock_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1;
  kcg_bool /* SM1:Awakness_of_Train:SM3:Acknowlege_of_Position_from_RBC:<1> */ tr_1_clock_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1;
  kcg_bool /* SM1:Awakness_of_Train:SM3:Waiting_for_RBC_Establishment:<1> */ tr_1_clock_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1;
  kcg_bool /* SM1:Awakness_of_Train:SM3:request_Level:<1> */ tr_1_clock_request_Level_SM3_Awakness_of_Train_SM1;
  kcg_bool /* SM1:Awakness_of_Train:SM3:first_Validation_for_Train_Number:<2> */ tr_2_clock_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1;
  kcg_bool /* SM1:Awakness_of_Train:SM3:first_Validation_for_Train_Number:<3> */ tr_3_clock_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1;
  kcg_bool /* SM1:Awakness_of_Train:SM3:first_Validation_for_Train_Number:<1> */ tr_1_clock_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1;
  kcg_bool /* SM1:Awakness_of_Train:SM3:Waition_for_Driver_ID:<1> */ tr_1_clock_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1;
  kcg_bool /* SM1:NP:<1> */ tr_1_clock_NP_SM1;
  kcg_bool /* SM1:Awakness_of_Train:<1> */ tr_1_clock_Awakness_of_Train_SM1;
  _140_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _140_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM1:NP:_L2/ */ _L2_NP_SM1;
  kcg_bool /* SM1:NP:_L3/ */ _L3_NP_SM1;
  kcg_bool /* SM1:NP:_L1/ */ _L1_NP_SM1;
  kcg_bool /* SM1:Awakness_of_Train:_L5/ */ _L5_Awakness_of_Train_SM1;
  kcg_bool /* SM1:Awakness_of_Train:_L3/ */ _L3_Awakness_of_Train_SM1;
  kcg_bool /* SM1:Awakness_of_Train:_L2/ */ _L2_Awakness_of_Train_SM1;
  SSM_TR_SM3_Awakness_of_Train_SM1 /* SM1:Awakness_of_Train:SM3: */ SM3_fired_Awakness_of_Train_SM1;
  SSM_TR_SM3_Awakness_of_Train_SM1 /* SM1:Awakness_of_Train:SM3: */ SM3_fired_strong_Awakness_of_Train_SM1;
  SSM_ST_SM3_Awakness_of_Train_SM1 /* SM1:Awakness_of_Train:SM3: */ SM3_state_act_Awakness_of_Train_SM1;
  SSM_ST_SM3_Awakness_of_Train_SM1 /* SM1:Awakness_of_Train:SM3: */ SM3_state_sel_Awakness_of_Train_SM1;
  kcg_bool /* SM1:SoM_L2_3_FS_SR_OS_LS_SH:_L13/ */ _L13_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
  kcg_bool /* SM1:SoM_L2_3_FS_SR_OS_LS_SH:_L12/ */ _L12_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* SM1:SoM_L2_3_FS_SR_OS_LS_SH:_L10/ */ _L10_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
  kcg_bool /* SM1:SoM_L2_3_FS_SR_OS_LS_SH:_L9/ */ _L9_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
  kcg_bool /* SM1:SoM_L2_3_FS_SR_OS_LS_SH:_L4/ */ _L4_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
  kcg_bool /* SM1:SoM_L2_3_FS_SR_OS_LS_SH:_L5/ */ _L5_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
  kcg_bool /* SM1:SoM_NTC_SN:_L3/ */ _L3_SoM_NTC_SN_SM1;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* SM1:SoM_NTC_SN:_L2/ */ _L2_SoM_NTC_SN_SM1;
  kcg_bool /* requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI/ */ requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI;
  kcg_bool /* requestTrainNumber_to_DMI/ */ requestTrainNumber_to_DMI;
  kcg_bool /* requestSoM_to_DMI/ */ requestSoM_to_DMI;
  kcg_bool /* power_Off_to_MoRC/ */ power_Off_to_MoRC;
  kcg_bool /* requestLevelStaus_from_Level_Management/ */ requestLevelStaus_from_Level_Management;
  kcg_bool /* requestTrainData_to_DMI/ */ requestTrainData_to_DMI;
  kcg_bool /* power_Up_to_MoRC/ */ power_Up_to_MoRC;
  kcg_bool /* requestStartMobileTerminalRegistration_to_MoRC/ */ requestStartMobileTerminalRegistration_to_MoRC;
  kcg_bool /* requestStartRBCSession_to_MoRC/ */ requestStartRBCSession_to_MoRC;
  kcg_bool /* requestDriverID_to_DMI/ */ requestDriverID_to_DMI;
  _141_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _141_SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* statusCabOpen_from_TIU/ */ statusCabOpen_from_TIU;
  kcg_bool /* statusTrainNumberfirstvalidation_from_DMI/ */ statusTrainNumberfirstvalidation_from_DMI;
  kcg_bool /* statusValid_position_from_Positon_Calculation/ */ statusValid_position_from_Positon_Calculation;
  kcg_bool /* statusMobileRegistrated_from_MoRC/ */ statusMobileRegistrated_from_MoRC;
  kcg_bool /* statusRBCSessionEstablishmen_from_MoRC/ */ statusRBCSessionEstablishmen_from_MoRC;
  kcg_bool /* statusDriverID_from_DMI/ */ statusDriverID_from_DMI;
  kcg_bool /* statusTrainData_from_DMI/ */ statusTrainData_from_DMI;
  kcg_bool /* statusTrainNumbersecondvalidation_from_DMI/ */ statusTrainNumbersecondvalidation_from_DMI;
  kcg_bool /* statusStart_from_DMI/ */ statusStart_from_DMI;
  kcg_bool /* statusAcknowledgementPositionReport_from_RBC/ */ statusAcknowledgementPositionReport_from_RBC;
  kcg_bool /* statusAcknowledgementofTrainData_from_RBC/ */ statusAcknowledgementofTrainData_from_RBC;
  kcg_bool /* M_Mode_Stand_By/ */ M_Mode_Stand_By;
  kcg_bool /* M_LEVEL_Level_NTC/ */ M_LEVEL_Level_NTC;
  kcg_bool /* M_LEVEL_Level2/ */ M_LEVEL_Level2;
  kcg_bool /* M_LEVEL_Level3/ */ M_LEVEL_Level3;
  kcg_bool /* M_LEVEL_Level0/ */ M_LEVEL_Level0;
  kcg_bool /* M_LEVEL_Level1/ */ M_LEVEL_Level1;
  kcg_bool /* statusLevel_from_DMI/ */ statusLevel_from_DMI;
  kcg_bool /* Mode_and_Level_is_valid_from_Mode_and_Level_Management/ */ Mode_and_Level_is_valid_from_Mode_and_Level_Management;
  radioManagementMessage_T_Common_Types_Pkg /* _L29/ */ _L29;
  MsgSource_T_Common_Types_Pkg /* _L37/ */ _L37;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L39/ */ _L39;
  P42_SessionManagement_T_Packet_Types_Pkg /* _L40/ */ _L40;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L47/ */ _L47;
  Q_DIR /* _L49/ */ _L49;
  NID_MN /* _L50/ */ _L50;
  radioManagementMessage_T_Common_Types_Pkg /* _L61/ */ _L61;
  MsgSource_T_Common_Types_Pkg /* _L63/ */ _L63;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L65/ */ _L65;
  kcg_bool /* _L67/ */ _L67;
  kcg_bool /* _L69/ */ _L69;
  radioManagementMessage_T_Common_Types_Pkg /* _L70/ */ _L70;
  morcStatus_T_RCM_Session_Types_Pkg /* _L71/ */ _L71;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L82/ */ _L82;
  kcg_bool /* _L83/ */ _L83;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L84/ */ _L84;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L85/ */ _L85;
  kcg_bool /* _L86/ */ _L86;
  kcg_bool /* _L91/ */ _L91;
  kcg_bool /* _L96/ */ _L96;
  TIU_trainStatus_T_TIU_Types_Pkg /* _L97/ */ _L97;
  kcg_bool /* _L128/ */ _L128;
  kcg_bool /* _L130/ */ _L130;
  kcg_bool /* _L131/ */ _L131;
  P42_SessionManagement_T_Packet_Types_Pkg /* _L147/ */ _L147;
  Q_DIR /* _L149/ */ _L149;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L151/ */ _L151;
  P42_SessionManagement_T_Packet_Types_Pkg /* _L153/ */ _L153;
  radioManagementMessage_T_Common_Types_Pkg /* _L154/ */ _L154;
  kcg_bool /* _L193/ */ _L193;
  Q_DIR /* _L192/ */ _L192;
  Q_RBC /* _L191/ */ _L191;
  NID_C /* _L190/ */ _L190;
  NID_RBC /* _L189/ */ _L189;
  NID_RADIO /* _L188/ */ _L188;
  Q_SLEEPSESSION /* _L187/ */ _L187;
  radioManagementMessage_T_Common_Types_Pkg /* _L194/ */ _L194;
  kcg_bool /* _L213/ */ _L213;
  kcg_bool /* _L212/ */ _L212;
  kcg_bool /* _L209/ */ _L209;
  kcg_bool /* _L216/ */ _L216;
  kcg_bool /* _L214/ */ _L214;
  kcg_bool /* _L217/ */ _L217;
  kcg_bool /* _L218/ */ _L218;
  kcg_bool /* _L219/ */ _L219;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L220/ */ _L220;
  M_MODE /* _L221/ */ _L221;
  kcg_bool /* _L222/ */ _L222;
  M_MODE /* _L223/ */ _L223;
  M_LEVEL /* _L226/ */ _L226;
  kcg_bool /* _L227/ */ _L227;
  M_LEVEL /* _L228/ */ _L228;
  kcg_bool /* _L230/ */ _L230;
  kcg_bool /* _L231/ */ _L231;
  M_LEVEL /* _L232/ */ _L232;
  M_LEVEL /* _L233/ */ _L233;
  kcg_bool /* _L234/ */ _L234;
  kcg_bool /* _L235/ */ _L235;
  M_LEVEL /* _L236/ */ _L236;
  M_LEVEL /* _L237/ */ _L237;
  kcg_bool /* _L261/ */ _L261;
  kcg_bool /* _L260/ */ _L260;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* _L259/ */ _L259;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* _L258/ */ _L258;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* _L257/ */ _L257;
  DMI_EVC_status_T_DMI_Types_Pkg /* _L256/ */ _L256;
  kcg_bool /* _L255/ */ _L255;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* _L254/ */ _L254;
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L253/ */ _L253;
  kcg_bool /* _L252/ */ _L252;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* _L250/ */ _L250;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* _L249/ */ _L249;
  kcg_bool /* _L248/ */ _L248;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L247/ */ _L247;
  kcg_bool /* _L246/ */ _L246;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* _L245/ */ _L245;
  kcg_bool /* _L244/ */ _L244;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* _L243/ */ _L243;
  kcg_bool /* _L242/ */ _L242;
  kcg_bool /* _L241/ */ _L241;
  kcg_bool /* _L240/ */ _L240;
  kcg_bool /* _L262/ */ _L262;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* _L263/ */ _L263;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* _L264/ */ _L264;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* _L265/ */ _L265;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* _L271/ */ _L271;
  DMI_Request_T_DMI_Types_Pkg /* _L272/ */ _L272;
  kcg_bool /* _L277/ */ _L277;
  DMI_Request_T_DMI_Types_Pkg /* _L278/ */ _L278;
  kcg_bool /* _L279/ */ _L279;
  kcg_bool /* _L280/ */ _L280;
  kcg_bool /* _L282/ */ _L282;
  kcg_bool /* _L283/ */ _L283;
  RBC_Id_T_Common_Types_Pkg /* _L290/ */ _L290;
  RBC_Id_T_Common_Types_Pkg /* _L303/ */ _L303;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L304/ */ _L304;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L305/ */ _L305;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L306/ */ _L306;
} outC_Master_Procedure_ManageProcedure_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ManageProcedure_Pkg::Master_Procedure/ */
extern void Master_Procedure_ManageProcedure_Pkg(
  /* statusDMI_from_DMI/ */
  DMI_EVC_status_T_DMI_Types_Pkg *statusDMI_from_DMI,
  /* Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management/ */
  kcg_bool Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management,
  /* systemtime/ */
  T_internal_Type_Obu_BasicTypes_Pkg systemtime,
  /* StatusModeandLevel_from_Level_and_Mode_Management/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *StatusModeandLevel_from_Level_and_Mode_Management,
  /* mobileStatus/ */
  morcStatus_T_RCM_Session_Types_Pkg *mobileStatus,
  /* cabStatus_from_TIU/ */
  TIU_trainStatus_T_TIU_Types_Pkg *cabStatus_from_TIU,
  /* statusValid_Position_from_Position_Calculation/ */
  kcg_bool statusValid_Position_from_Position_Calculation,
  /* status_DMIlevel_from_DMI/ */
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *status_DMIlevel_from_DMI,
  /* LevelValid_from_Level_and_Mode_Management/ */
  kcg_bool LevelValid_from_Level_and_Mode_Management,
  outC_Master_Procedure_ManageProcedure_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Master_Procedure_reset_ManageProcedure_Pkg(
  outC_Master_Procedure_ManageProcedure_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Master_Procedure_init_ManageProcedure_Pkg(
  outC_Master_Procedure_ManageProcedure_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  kcg_bool /* request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management/ */ Context_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
  kcg_bool /* request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management/ */ Context_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  kcg_bool /* statusstartofmissionongoing_to_MoRC/ */ Context_statusstartofmissionongoing_to_MoRC;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* sendingTrainData_to_RBC/ */ Context_sendingTrainData_to_RBC;
  kcg_bool /* sendingPositionReport_to_RBC/ */ Context_sendingPositionReport_to_RBC;
  kcg_bool /* SM1: */ Context_SM1_reset_nxt;
  kcg_bool /* SM1: */ Context_SM1_reset_act;
  _140_SSM_ST_SM1 /* SM1: */ Context_SM1_state_nxt;
  SSM_ST_SM3_Awakness_of_Train_SM1 /* SM1:Awakness_of_Train:SM3: */ Context_SM3_state_nxt;
  kcg_bool /* SM1:Awakness_of_Train:SM3: */ Context_SM3_reset_act;
  kcg_bool /* SM1:Awakness_of_Train:SM3: */ Context_SM3_reset_nxt;
  kcg_bool _1_Context_init;
  kcg_bool Context_init;
  struct_487049 /* _L212= */ Context_fby_1;
  struct_487049 /* _L214= */ Context_fby_2;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_SoM_NTC_SN_SoMProcedure_Pkg Context_SoM_NTC_SN_1;
  SV_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg Context_SoM_SR_FS_OS_LS_SH_SN_UN_1;
} SV_Master_Procedure_ManageProcedure_Pkg;

extern void kcg_save_SV_Master_Procedure_ManageProcedure_Pkg(
  SV_Master_Procedure_ManageProcedure_Pkg *SV,
  outC_Master_Procedure_ManageProcedure_Pkg *outC);
extern void kcg_load_SV_Master_Procedure_ManageProcedure_Pkg(
  outC_Master_Procedure_ManageProcedure_Pkg *outC,
  SV_Master_Procedure_ManageProcedure_Pkg *SV);



#endif /* _Master_Procedure_ManageProcedure_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Master_Procedure_ManageProcedure_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

