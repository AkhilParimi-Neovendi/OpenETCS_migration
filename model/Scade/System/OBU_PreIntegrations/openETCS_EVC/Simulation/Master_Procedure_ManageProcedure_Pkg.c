/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Master_Procedure_ManageProcedure_Pkg.h"

/* ManageProcedure_Pkg::Master_Procedure/ */
void Master_Procedure_ManageProcedure_Pkg(
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
  outC_Master_Procedure_ManageProcedure_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  /* statusstartofmissionongoing_to_MoRC/ */
  kcg_bool statusstartofmissionongoing_to_MoRC_partial;
  /* request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management/ */
  kcg_bool request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management_partial;
  /* request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management/ */
  kcg_bool request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management_partial;
  /* start_ack_to_TIU/ */
  kcg_bool start_ack_to_TIU_partial;
  /* sendingPositionReport_to_RBC/ */
  kcg_bool sendingPositionReport_to_RBC_partial;
  /* sendingTrainData_to_RBC/ */
  kcg_bool sendingTrainData_to_RBC_partial;
  /* SM1: */
  _219_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _220_SSM_TR_SM1 SM1_fired_partial;
  /* statusstartofmissionongoing_to_MoRC/ */
  kcg_bool _2_statusstartofmissionongoing_to_MoRC_partial;
  /* request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management/ */
  kcg_bool _3_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management_partial;
  /* request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management/ */
  kcg_bool _4_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management_partial;
  /* start_ack_to_TIU/ */
  kcg_bool _5_start_ack_to_TIU_partial;
  /* sendingPositionReport_to_RBC/ */
  kcg_bool _6_sendingPositionReport_to_RBC_partial;
  /* sendingTrainData_to_RBC/ */
  kcg_bool _7_sendingTrainData_to_RBC_partial;
  /* SM1: */
  _219_SSM_ST_SM1 _8_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _9_SM1_reset_nxt_partial;
  /* SM1: */
  _220_SSM_TR_SM1 _10_SM1_fired_partial;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool SM3_reset_prv_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool SM3_reset_sel_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3:Waiting_for_driver_selection_E10_E11_or_E12:<1> */
  kcg_bool tr_1_guard_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 SM3_fired_strong_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool SM3_reset_act_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 SM3_state_act_partial_Awakness_of_Train_SM1;
  /* sendingTrainData_to_RBC/ */
  kcg_bool _11_sendingTrainData_to_RBC_partial;
  /* sendingPositionReport_to_RBC/ */
  kcg_bool _12_sendingPositionReport_to_RBC_partial;
  /* SM1:Awakness_of_Train:SM3:Waiting_for_Mobile_terminal_registration:<1> */
  kcg_bool tr_1_guard_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _13_SM3_fired_strong_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _14_SM3_reset_act_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _15_SM3_state_act_partial_Awakness_of_Train_SM1;
  /* sendingTrainData_to_RBC/ */
  kcg_bool _16_sendingTrainData_to_RBC_partial;
  /* sendingPositionReport_to_RBC/ */
  kcg_bool _17_sendingPositionReport_to_RBC_partial;
  /* SM1:Awakness_of_Train:SM3:SB:<1> */
  kcg_bool tr_1_guard_SB_SM3_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _18_SM3_fired_strong_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _19_SM3_reset_act_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _20_SM3_state_act_partial_Awakness_of_Train_SM1;
  /* sendingTrainData_to_RBC/ */
  kcg_bool _21_sendingTrainData_to_RBC_partial;
  /* sendingPositionReport_to_RBC/ */
  kcg_bool _22_sendingPositionReport_to_RBC_partial;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _23_SM3_fired_strong_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _24_SM3_reset_act_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _25_SM3_state_act_partial_Awakness_of_Train_SM1;
  /* sendingTrainData_to_RBC/ */
  kcg_bool _26_sendingTrainData_to_RBC_partial;
  /* sendingPositionReport_to_RBC/ */
  kcg_bool _27_sendingPositionReport_to_RBC_partial;
  /* SM1:Awakness_of_Train:SM3:Waiting_for_Acknowledgement_of_Train_Data_from_RBC:<1> */
  kcg_bool tr_1_guard_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _28_SM3_fired_strong_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _29_SM3_reset_act_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _30_SM3_state_act_partial_Awakness_of_Train_SM1;
  /* sendingTrainData_to_RBC/ */
  kcg_bool _31_sendingTrainData_to_RBC_partial;
  /* sendingPositionReport_to_RBC/ */
  kcg_bool _32_sendingPositionReport_to_RBC_partial;
  /* sendingTrainData_to_RBC/ */
  kcg_bool _33_sendingTrainData_to_RBC_partial;
  /* sendingTrainData_to_RBC/ */
  kcg_bool _34_sendingTrainData_to_RBC_partial;
  /* SM1:Awakness_of_Train:SM3:Second_Validation_of_Train_Number_from_Driver:<1> */
  kcg_bool tr_1_guard_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3:Second_Validation_of_Train_Number_from_Driver:<2> */
  kcg_bool tr_2_guard_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _35_SM3_fired_strong_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _36_SM3_reset_act_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _37_SM3_state_act_partial_Awakness_of_Train_SM1;
  /* sendingTrainData_to_RBC/ */
  kcg_bool _38_sendingTrainData_to_RBC_partial;
  /* sendingPositionReport_to_RBC/ */
  kcg_bool _39_sendingPositionReport_to_RBC_partial;
  /* SM1:Awakness_of_Train:SM3:Validation_of_Train_Data_from_Driver:<1> */
  kcg_bool tr_1_guard_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _40_SM3_fired_strong_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _41_SM3_reset_act_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _42_SM3_state_act_partial_Awakness_of_Train_SM1;
  /* sendingTrainData_to_RBC/ */
  kcg_bool _43_sendingTrainData_to_RBC_partial;
  /* sendingPositionReport_to_RBC/ */
  kcg_bool _44_sendingPositionReport_to_RBC_partial;
  /* SM1:Awakness_of_Train:SM3:Acknowlege_of_Position_from_RBC:<1> */
  kcg_bool tr_1_guard_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _45_SM3_fired_strong_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _46_SM3_reset_act_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _47_SM3_state_act_partial_Awakness_of_Train_SM1;
  /* sendingTrainData_to_RBC/ */
  kcg_bool _48_sendingTrainData_to_RBC_partial;
  /* sendingPositionReport_to_RBC/ */
  kcg_bool _49_sendingPositionReport_to_RBC_partial;
  /* sendingPositionReport_to_RBC/ */
  kcg_bool _50_sendingPositionReport_to_RBC_partial;
  /* sendingPositionReport_to_RBC/ */
  kcg_bool _51_sendingPositionReport_to_RBC_partial;
  /* SM1:Awakness_of_Train:SM3:Waiting_for_RBC_Establishment:<1> */
  kcg_bool tr_1_guard_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _52_SM3_fired_strong_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _53_SM3_reset_act_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _54_SM3_state_act_partial_Awakness_of_Train_SM1;
  /* sendingTrainData_to_RBC/ */
  kcg_bool _55_sendingTrainData_to_RBC_partial;
  /* sendingPositionReport_to_RBC/ */
  kcg_bool _56_sendingPositionReport_to_RBC_partial;
  /* SM1:Awakness_of_Train:SM3:request_Level:<1> */
  kcg_bool tr_1_guard_request_Level_SM3_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _57_SM3_fired_strong_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _58_SM3_reset_act_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _59_SM3_state_act_partial_Awakness_of_Train_SM1;
  /* sendingTrainData_to_RBC/ */
  kcg_bool _60_sendingTrainData_to_RBC_partial;
  /* sendingPositionReport_to_RBC/ */
  kcg_bool _61_sendingPositionReport_to_RBC_partial;
  /* SM1:Awakness_of_Train:SM3:first_Validation_for_Train_Number:<1> */
  kcg_bool tr_1_guard_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3:first_Validation_for_Train_Number:<2> */
  kcg_bool tr_2_guard_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3:first_Validation_for_Train_Number:<3> */
  kcg_bool tr_3_guard_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _62_SM3_fired_strong_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _63_SM3_reset_act_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _64_SM3_state_act_partial_Awakness_of_Train_SM1;
  /* sendingTrainData_to_RBC/ */
  kcg_bool _65_sendingTrainData_to_RBC_partial;
  /* sendingPositionReport_to_RBC/ */
  kcg_bool _66_sendingPositionReport_to_RBC_partial;
  /* SM1:Awakness_of_Train:SM3:Waition_for_Driver_ID:<1> */
  kcg_bool tr_1_guard_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _67_SM3_fired_strong_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _68_SM3_reset_act_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _69_SM3_state_act_partial_Awakness_of_Train_SM1;
  /* sendingTrainData_to_RBC/ */
  kcg_bool _70_sendingTrainData_to_RBC_partial;
  /* sendingPositionReport_to_RBC/ */
  kcg_bool _71_sendingPositionReport_to_RBC_partial;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 SM3_fired_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool SM3_reset_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 SM3_state_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _72_SM3_fired_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _73_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _74_SM3_state_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _75_SM3_fired_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _76_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _77_SM3_state_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _78_SM3_fired_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _79_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _80_SM3_state_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _81_SM3_fired_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _82_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _83_SM3_state_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _84_SM3_fired_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _85_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _86_SM3_state_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _87_SM3_fired_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _88_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _89_SM3_state_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _90_SM3_fired_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _91_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _92_SM3_state_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _93_SM3_fired_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _94_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _95_SM3_state_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _96_SM3_fired_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _97_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _98_SM3_state_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _99_SM3_fired_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _100_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _101_SM3_state_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_TR_SM3_Awakness_of_Train_SM1 _102_SM3_fired_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  kcg_bool _103_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:SM3: */
  SSM_ST_SM3_Awakness_of_Train_SM1 _104_SM3_state_nxt_partial_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:<2> */
  kcg_bool tr_2_guard_Awakness_of_Train_SM1;
  /* SM1:Awakness_of_Train:<3> */
  kcg_bool tr_3_guard_Awakness_of_Train_SM1;
  /* SM1: */
  _220_SSM_TR_SM1 _105_SM1_fired_partial;
  /* SM1: */
  kcg_bool _106_SM1_reset_nxt_partial;
  /* SM1: */
  _219_SSM_ST_SM1 _107_SM1_state_nxt_partial;
  /* SM1: */
  _220_SSM_TR_SM1 _108_SM1_fired_partial;
  /* SM1: */
  kcg_bool _109_SM1_reset_nxt_partial;
  /* SM1: */
  _219_SSM_ST_SM1 _110_SM1_state_nxt_partial;
  /* statusstartofmissionongoing_to_MoRC/ */
  kcg_bool _111_statusstartofmissionongoing_to_MoRC_partial;
  /* request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management/ */
  kcg_bool _112_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management_partial;
  /* request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management/ */
  kcg_bool _113_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management_partial;
  /* start_ack_to_TIU/ */
  kcg_bool _114_start_ack_to_TIU_partial;
  /* sendingPositionReport_to_RBC/ */
  kcg_bool _115_sendingPositionReport_to_RBC_partial;
  /* sendingTrainData_to_RBC/ */
  kcg_bool _116_sendingTrainData_to_RBC_partial;
  /* SM1: */
  _219_SSM_ST_SM1 _117_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _118_SM1_reset_nxt_partial;
  /* SM1: */
  _220_SSM_TR_SM1 _119_SM1_fired_partial;
  /* statusstartofmissionongoing_to_MoRC/ */
  kcg_bool _120_statusstartofmissionongoing_to_MoRC_partial;
  /* request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management/ */
  kcg_bool _121_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management_partial;
  /* request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management/ */
  kcg_bool _122_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management_partial;
  /* start_ack_to_TIU/ */
  kcg_bool _123_start_ack_to_TIU_partial;
  /* sendingPositionReport_to_RBC/ */
  kcg_bool _124_sendingPositionReport_to_RBC_partial;
  /* sendingTrainData_to_RBC/ */
  kcg_bool _125_sendingTrainData_to_RBC_partial;
  /* SM1: */
  _219_SSM_ST_SM1 _126_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _127_SM1_reset_nxt_partial;
  /* SM1: */
  _220_SSM_TR_SM1 _128_SM1_fired_partial;
  /* SM1: */
  _219_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  _220_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:NP:<1> */
  kcg_bool tr_1_guard_NP_SM1;
  /* SM1: */
  _219_SSM_ST_SM1 _129_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _130_SM1_reset_act_partial;
  /* SM1: */
  _220_SSM_TR_SM1 _131_SM1_fired_strong_partial;
  /* SM1:Awakness_of_Train:<1> */
  kcg_bool tr_1_guard_Awakness_of_Train_SM1;
  /* SM1: */
  _219_SSM_ST_SM1 _132_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _133_SM1_reset_act_partial;
  /* SM1: */
  _220_SSM_TR_SM1 _134_SM1_fired_strong_partial;
  /* SM1: */
  _219_SSM_ST_SM1 _135_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _136_SM1_reset_act_partial;
  /* SM1: */
  _220_SSM_TR_SM1 _137_SM1_fired_strong_partial;
  /* request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management/ */
  kcg_bool last_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
  /* request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management/ */
  kcg_bool last_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  /* statusstartofmissionongoing_to_MoRC/ */
  kcg_bool last_statusstartofmissionongoing_to_MoRC;
  kcg_bool noname;
  kcg_bool _138_noname;
  Q_DIR _139_noname;
  kcg_bool _140_noname;
  /* sendingTrainData_to_RBC/ */
  kcg_bool last_sendingTrainData_to_RBC;
  /* sendingPositionReport_to_RBC/ */
  kcg_bool last_sendingPositionReport_to_RBC;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  last_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
    outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
  last_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management =
    outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  last_statusstartofmissionongoing_to_MoRC =
    outC->statusstartofmissionongoing_to_MoRC;
  last_sendingTrainData_to_RBC = outC->sendingTrainData_to_RBC;
  last_sendingPositionReport_to_RBC = outC->sendingPositionReport_to_RBC;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L71, mobileStatus);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L305,
    &outC->_L71.session);
  outC->_L306 = outC->_L305.phase;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L84,
    &outC->_L71.registration);
  outC->_L304 = outC->_L84.status;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &outC->_L303,
    (RBC_Id_T_Common_Types_Pkg *) &cSendingRBC_ManageProcedure_Pkg);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &outC->_L290,
    (RBC_Id_T_Common_Types_Pkg *) &cSendingRBC_ManageProcedure_Pkg);
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L271,
    status_DMIlevel_from_DMI);
  outC->_L277 = outC->_L271.valid;
  outC->_L278 = Level_entry_request_DMI_Types_Pkg;
  outC->_L272 = outC->_L271.m_request;
  outC->_L279 = outC->_L272 == outC->_L278;
  outC->_L280 = outC->_L279 & outC->_L277;
  outC->statusLevel_from_DMI = outC->_L280;
  outC->_L283 = outC->statusLevel_from_DMI;
  _140_noname = outC->_L283;
  outC->_L282 = LevelValid_from_Level_and_Mode_Management;
  outC->Mode_and_Level_is_valid_from_Mode_and_Level_Management = outC->_L282;
  outC->_L265 = Spare_DMI_Types_Pkg;
  outC->_L264 = Enter_revalidate_ETCS_level_DMI_Types_Pkg;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_SoM_NTC_SN_SM1 :
      _135_SM1_state_act_partial = SSM_st_SoM_NTC_SN_SM1;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      _132_SM1_state_act_partial = SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
      break;
    default :
      /* this branch is empty */
      break;
  }
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L97, cabStatus_from_TIU);
  outC->_L219 = outC->_L97.valid;
  outC->_L218 = outC->_L97.deskOpen;
  outC->_L96 = outC->_L218 & outC->_L219;
  outC->statusCabOpen_from_TIU = outC->_L96;
  switch (outC->SM1_state_sel) {
    case SSM_st_Awakness_of_Train_SM1 :
      tr_1_guard_Awakness_of_Train_SM1 = !outC->statusCabOpen_from_TIU;
      if (tr_1_guard_Awakness_of_Train_SM1) {
        _129_SM1_state_act_partial = SSM_st_NP_SM1;
      }
      else {
        _129_SM1_state_act_partial = SSM_st_Awakness_of_Train_SM1;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L223 = M_MODE_Stand_By;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L220,
    StatusModeandLevel_from_Level_and_Mode_Management);
  outC->_L221 = outC->_L220.Mode;
  outC->_L222 = outC->_L221 == outC->_L223;
  outC->M_Mode_Stand_By = outC->_L222;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_SoM_NTC_SN_SM1 :
      outC->SM1_state_act = _135_SM1_state_act_partial;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      outC->SM1_state_act = _132_SM1_state_act_partial;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      outC->SM1_state_act = _129_SM1_state_act_partial;
      break;
    case SSM_st_NP_SM1 :
      tr_1_guard_NP_SM1 = outC->statusCabOpen_from_TIU & outC->M_Mode_Stand_By;
      if (tr_1_guard_NP_SM1) {
        SM1_state_act_partial = SSM_st_Awakness_of_Train_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_NP_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_SoM_NTC_SN_SM1 :
      _136_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _136_SM1_reset_act_partial;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      _133_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _133_SM1_reset_act_partial;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      _130_SM1_reset_act_partial = tr_1_guard_Awakness_of_Train_SM1;
      outC->SM1_reset_act = _130_SM1_reset_act_partial;
      break;
    case SSM_st_NP_SM1 :
      SM1_reset_act_partial = tr_1_guard_NP_SM1;
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Awakness_of_Train_SM1 :
      if (outC->SM1_reset_act) {
        outC->init1 = kcg_true;
      }
      /* SM1:Awakness_of_Train:SM3: */
      if (outC->init1) {
        outC->SM3_state_sel_Awakness_of_Train_SM1 = SSM_st_SB_SM3_Awakness_of_Train_SM1;
      }
      else {
        outC->SM3_state_sel_Awakness_of_Train_SM1 =
          outC->SM3_state_nxt_Awakness_of_Train_SM1;
      }
      outC->SM3_clock_Awakness_of_Train_SM1 =
        outC->SM3_state_sel_Awakness_of_Train_SM1;
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L130 = statusValid_Position_from_Position_Calculation;
  outC->statusValid_position_from_Positon_Calculation = outC->_L130;
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&outC->_L256, statusDMI_from_DMI);
  outC->_L246 = outC->_L256.DMI_TrainRunningNumberFirstValidation;
  outC->statusTrainNumberfirstvalidation_from_DMI = outC->_L246;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      outC->requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      outC->requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* SM1:Awakness_of_Train:SM3: */
      switch (outC->SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 :
          outC->requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 :
          outC->requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_SB_SM3_Awakness_of_Train_SM1 :
          outC->requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 :
          outC->requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 :
          outC->requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1 :
          outC->requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_request_Level_SM3_Awakness_of_Train_SM1 :
          outC->requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 :
          tr_1_guard_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 =
            outC->statusTrainNumberfirstvalidation_from_DMI &
            outC->statusValid_position_from_Positon_Calculation;
          outC->tr_1_clock_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 =
            tr_1_guard_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1;
          tr_2_guard_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 =
            outC->statusTrainNumberfirstvalidation_from_DMI &
            (!outC->statusValid_position_from_Positon_Calculation) &
            (!outC->Mode_and_Level_is_valid_from_Mode_and_Level_Management);
          /* SM1:Awakness_of_Train:SM3:first_Validation_for_Train_Number:<1> */
          if (outC->tr_1_clock_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1) {
            outC->requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          }
          else {
            outC->tr_2_clock_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 =
              tr_2_guard_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1;
            /* SM1:Awakness_of_Train:SM3:first_Validation_for_Train_Number:<2> */
            if (outC->tr_2_clock_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1) {
              outC->requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_true;
            }
            else {
              outC->requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
            }
          }
          break;
        case SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1 :
          outC->requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      break;
    case SSM_st_NP_SM1 :
      outC->requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L262 = outC->requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI;
  /* _L263= */
  if (outC->_L262) {
    outC->_L263 = outC->_L264;
  }
  else {
    outC->_L263 = outC->_L265;
  }
  outC->_L242 = outC->_L256.DMI_StartReceived;
  outC->statusStart_from_DMI = outC->_L242;
  outC->_L233 = M_LEVEL_Level_3;
  outC->_L226 = outC->_L220.level;
  outC->_L231 = outC->_L226 == outC->_L233;
  outC->M_LEVEL_Level3 = outC->_L231;
  outC->_L232 = M_LEVEL_Level_2;
  outC->_L230 = outC->_L226 == outC->_L232;
  outC->M_LEVEL_Level2 = outC->_L230;
  outC->_L248 = outC->_L256.DMI_TrainRunningNumberValidated;
  outC->statusTrainNumbersecondvalidation_from_DMI = outC->_L248;
  switch (outC->SM1_state_act) {
    case SSM_st_Awakness_of_Train_SM1 :
      switch (outC->SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 :
          tr_1_guard_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 =
            outC->statusTrainNumbersecondvalidation_from_DMI &
            (outC->M_LEVEL_Level2 | outC->M_LEVEL_Level3);
          outC->tr_1_clock_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 =
            tr_1_guard_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1;
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L228 = M_LEVEL_Level_NTC_specified_by_NID_NTC;
  outC->_L227 = outC->_L226 == outC->_L228;
  outC->M_LEVEL_Level_NTC = outC->_L227;
  outC->_L237 = M_LEVEL_Level_1;
  outC->_L235 = outC->_L226 == outC->_L237;
  outC->M_LEVEL_Level1 = outC->_L235;
  outC->_L236 = M_LEVEL_Level_0;
  outC->_L234 = outC->_L226 == outC->_L236;
  outC->M_LEVEL_Level0 = outC->_L234;
  switch (outC->SM1_state_act) {
    case SSM_st_Awakness_of_Train_SM1 :
      switch (outC->SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 :
          tr_2_guard_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 =
            outC->statusTrainNumbersecondvalidation_from_DMI &
            (outC->M_LEVEL_Level0 | outC->M_LEVEL_Level1 | outC->M_LEVEL_Level_NTC);
          if (outC->tr_1_clock_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1) {
          }
          else {
            outC->tr_2_clock_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 =
              tr_2_guard_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1;
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L216 = kcg_false;
  /* _L214= */
  if (outC->init) {
    /* _L214= */
    for (idx = 0; idx < 4; idx++) {
      outC->fby_2.items[idx] = outC->_L216;
    }
    outC->fby_2.idx = 0;
  }
  outC->_L214 = outC->fby_2.items[outC->fby_2.idx];
  outC->statusAcknowledgementofTrainData_from_RBC = outC->_L214;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      outC->requestSoM_to_DMI = kcg_false;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      outC->requestSoM_to_DMI = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* SM1:Awakness_of_Train:SM3: */
      switch (outC->SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 :
          outC->requestSoM_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 :
          outC->requestSoM_to_DMI = kcg_false;
          break;
        case SSM_st_SB_SM3_Awakness_of_Train_SM1 :
          outC->requestSoM_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestSoM_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 :
          tr_1_guard_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 =
            outC->statusAcknowledgementofTrainData_from_RBC;
          outC->tr_1_clock_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 =
            tr_1_guard_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1;
          /* SM1:Awakness_of_Train:SM3:Waiting_for_Acknowledgement_of_Train_Data_from_RBC:<1> */
          if (outC->tr_1_clock_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1) {
            outC->requestSoM_to_DMI = kcg_true;
          }
          else {
            outC->requestSoM_to_DMI = kcg_false;
          }
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 :
          /* SM1:Awakness_of_Train:SM3:Second_Validation_of_Train_Number_from_Driver:<1> */
          if (outC->tr_1_clock_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1) {
            outC->requestSoM_to_DMI = kcg_false;
          }
          else /* SM1:Awakness_of_Train:SM3:Second_Validation_of_Train_Number_from_Driver:<2> */
          if (outC->tr_2_clock_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1) {
            outC->requestSoM_to_DMI = kcg_true;
          }
          else {
            outC->requestSoM_to_DMI = kcg_false;
          }
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestSoM_to_DMI = kcg_false;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 :
          outC->requestSoM_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1 :
          outC->requestSoM_to_DMI = kcg_false;
          break;
        case SSM_st_request_Level_SM3_Awakness_of_Train_SM1 :
          outC->requestSoM_to_DMI = kcg_false;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 :
          outC->requestSoM_to_DMI = kcg_false;
          break;
        case SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1 :
          outC->requestSoM_to_DMI = kcg_false;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      break;
    case SSM_st_NP_SM1 :
      outC->requestSoM_to_DMI = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L261 = outC->requestSoM_to_DMI;
  switch (outC->SM1_state_act) {
    case SSM_st_Awakness_of_Train_SM1 :
      switch (outC->SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 :
          tr_3_guard_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 =
            outC->statusTrainNumberfirstvalidation_from_DMI &
            (!outC->statusValid_position_from_Positon_Calculation) &
            outC->Mode_and_Level_is_valid_from_Mode_and_Level_Management;
          if (outC->tr_1_clock_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1) {
          }
          else if (outC->tr_2_clock_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1) {
          }
          else {
            outC->tr_3_clock_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 =
              tr_3_guard_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1;
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L213 = kcg_false;
  /* _L212= */
  if (outC->init) {
    /* _L212= */
    for (idx1 = 0; idx1 < 4; idx1++) {
      outC->fby_1.items[idx1] = outC->_L213;
    }
    outC->fby_1.idx = 0;
  }
  outC->_L212 = outC->fby_1.items[outC->fby_1.idx];
  outC->statusAcknowledgementPositionReport_from_RBC = outC->_L212;
  switch (outC->SM1_state_act) {
    case SSM_st_Awakness_of_Train_SM1 :
      switch (outC->SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 :
          tr_1_guard_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 =
            outC->statusAcknowledgementPositionReport_from_RBC;
          outC->tr_1_clock_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 =
            tr_1_guard_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1;
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L244 = outC->_L256.DMI_TrainDataValidated;
  outC->statusTrainData_from_DMI = outC->_L244;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      outC->requestTrainData_to_DMI = kcg_false;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      outC->requestTrainData_to_DMI = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* SM1:Awakness_of_Train:SM3: */
      switch (outC->SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 :
          tr_1_guard_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 =
            outC->Mode_and_Level_is_valid_from_Mode_and_Level_Management &
            (outC->M_LEVEL_Level0 | outC->M_LEVEL_Level1 | outC->M_LEVEL_Level_NTC);
          outC->tr_1_clock_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 =
            tr_1_guard_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1;
          /* SM1:Awakness_of_Train:SM3:Waiting_for_driver_selection_E10_E11_or_E12:<1> */
          if (outC->tr_1_clock_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1) {
            outC->requestTrainData_to_DMI = kcg_true;
          }
          else {
            outC->requestTrainData_to_DMI = kcg_false;
          }
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 :
          outC->requestTrainData_to_DMI = kcg_false;
          break;
        case SSM_st_SB_SM3_Awakness_of_Train_SM1 :
          outC->requestTrainData_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestTrainData_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 :
          outC->requestTrainData_to_DMI = kcg_false;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestTrainData_to_DMI = kcg_false;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 :
          tr_1_guard_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 =
            outC->statusTrainData_from_DMI;
          outC->tr_1_clock_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 =
            tr_1_guard_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1;
          /* SM1:Awakness_of_Train:SM3:Validation_of_Train_Data_from_Driver:<1> */
          if (outC->tr_1_clock_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1) {
            outC->requestTrainData_to_DMI = kcg_true;
          }
          else {
            outC->requestTrainData_to_DMI = kcg_false;
          }
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 :
          /* SM1:Awakness_of_Train:SM3:Acknowlege_of_Position_from_RBC:<1> */
          if (outC->tr_1_clock_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1) {
            outC->requestTrainData_to_DMI = kcg_true;
          }
          else {
            outC->requestTrainData_to_DMI = kcg_false;
          }
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1 :
          outC->requestTrainData_to_DMI = kcg_false;
          break;
        case SSM_st_request_Level_SM3_Awakness_of_Train_SM1 :
          outC->requestTrainData_to_DMI = kcg_false;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 :
          /* SM1:Awakness_of_Train:SM3:first_Validation_for_Train_Number:<1> */
          if (outC->tr_1_clock_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1) {
            outC->requestTrainData_to_DMI = kcg_false;
          }
          else /* SM1:Awakness_of_Train:SM3:first_Validation_for_Train_Number:<2> */
          if (outC->tr_2_clock_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1) {
            outC->requestTrainData_to_DMI = kcg_false;
          }
          else /* SM1:Awakness_of_Train:SM3:first_Validation_for_Train_Number:<3> */
          if (outC->tr_3_clock_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1) {
            outC->requestTrainData_to_DMI = kcg_true;
          }
          else {
            outC->requestTrainData_to_DMI = kcg_false;
          }
          break;
        case SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1 :
          outC->requestTrainData_to_DMI = kcg_false;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      break;
    case SSM_st_NP_SM1 :
      outC->requestTrainData_to_DMI = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L255 = outC->requestTrainData_to_DMI;
  outC->_L241 = outC->_L256.DMI_DriverIdValidated;
  outC->statusDriverID_from_DMI = outC->_L241;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      outC->requestTrainNumber_to_DMI = kcg_false;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      outC->requestTrainNumber_to_DMI = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* SM1:Awakness_of_Train:SM3: */
      switch (outC->SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 :
          outC->requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 :
          outC->requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_SB_SM3_Awakness_of_Train_SM1 :
          outC->requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 :
          outC->requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 :
          outC->requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1 :
          outC->requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_request_Level_SM3_Awakness_of_Train_SM1 :
          outC->requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 :
          outC->requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1 :
          tr_1_guard_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1 =
            outC->statusDriverID_from_DMI;
          outC->tr_1_clock_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1 =
            tr_1_guard_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1;
          /* SM1:Awakness_of_Train:SM3:Waition_for_Driver_ID:<1> */
          if (outC->tr_1_clock_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1) {
            outC->requestTrainNumber_to_DMI = kcg_true;
          }
          else {
            outC->requestTrainNumber_to_DMI = kcg_false;
          }
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      break;
    case SSM_st_NP_SM1 :
      outC->requestTrainNumber_to_DMI = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L252 = outC->requestTrainNumber_to_DMI;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      outC->requestDriverID_to_DMI = kcg_false;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      outC->requestDriverID_to_DMI = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* SM1:Awakness_of_Train:SM3: */
      switch (outC->SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 :
          outC->requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 :
          outC->requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_SB_SM3_Awakness_of_Train_SM1 :
          tr_1_guard_SB_SM3_Awakness_of_Train_SM1 = kcg_true;
          outC->tr_1_clock_SB_SM3_Awakness_of_Train_SM1 =
            tr_1_guard_SB_SM3_Awakness_of_Train_SM1;
          /* SM1:Awakness_of_Train:SM3:SB:<1> */
          if (outC->tr_1_clock_SB_SM3_Awakness_of_Train_SM1) {
            outC->requestDriverID_to_DMI = kcg_true;
          }
          else {
            outC->requestDriverID_to_DMI = kcg_false;
          }
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 :
          outC->requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 :
          outC->requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1 :
          outC->requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_request_Level_SM3_Awakness_of_Train_SM1 :
          outC->requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 :
          outC->requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1 :
          outC->requestDriverID_to_DMI = kcg_false;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      break;
    case SSM_st_NP_SM1 :
      outC->requestDriverID_to_DMI = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L240 = outC->requestDriverID_to_DMI;
  outC->_L260 = outC->_L240 | outC->_L252 | outC->_L255 | outC->_L261 |
    outC->_L262;
  outC->_L259 = Show_main_window_DMI_Types_Pkg;
  /* _L250= */
  if (outC->_L261) {
    outC->_L250 = outC->_L259;
  }
  else {
    outC->_L250 = outC->_L263;
  }
  outC->_L249 = Validate_train_data_DMI_Types_Pkg;
  /* _L258= */
  if (outC->_L255) {
    outC->_L258 = outC->_L249;
  }
  else {
    outC->_L258 = outC->_L250;
  }
  outC->_L245 = Enter_revalidate_train_running_number_DMI_Types_Pkg;
  /* _L257= */
  if (outC->_L252) {
    outC->_L257 = outC->_L245;
  }
  else {
    outC->_L257 = outC->_L258;
  }
  outC->_L243 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  /* _L254= */
  if (outC->_L240) {
    outC->_L254 = outC->_L243;
  }
  else {
    outC->_L254 = outC->_L257;
  }
  outC->_L247 = systemtime;
  outC->_L253.valid = outC->_L260;
  outC->_L253.system_clock = outC->_L247;
  outC->_L253.entry_request = outC->_L254;
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->DMI_Entry_Request_to_DMI,
    &outC->_L253);
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      _125_sendingTrainData_to_RBC_partial = last_sendingTrainData_to_RBC;
      outC->sendingTrainData_to_RBC = _125_sendingTrainData_to_RBC_partial;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      _116_sendingTrainData_to_RBC_partial = last_sendingTrainData_to_RBC;
      outC->sendingTrainData_to_RBC = _116_sendingTrainData_to_RBC_partial;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* SM1:Awakness_of_Train:SM3: */
      switch (outC->SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 :
          _11_sendingTrainData_to_RBC_partial = last_sendingTrainData_to_RBC;
          _7_sendingTrainData_to_RBC_partial = _11_sendingTrainData_to_RBC_partial;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 :
          _16_sendingTrainData_to_RBC_partial = last_sendingTrainData_to_RBC;
          _7_sendingTrainData_to_RBC_partial = _16_sendingTrainData_to_RBC_partial;
          break;
        case SSM_st_SB_SM3_Awakness_of_Train_SM1 :
          _21_sendingTrainData_to_RBC_partial = last_sendingTrainData_to_RBC;
          _7_sendingTrainData_to_RBC_partial = _21_sendingTrainData_to_RBC_partial;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1 :
          _26_sendingTrainData_to_RBC_partial = last_sendingTrainData_to_RBC;
          _7_sendingTrainData_to_RBC_partial = _26_sendingTrainData_to_RBC_partial;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 :
          _31_sendingTrainData_to_RBC_partial = last_sendingTrainData_to_RBC;
          _7_sendingTrainData_to_RBC_partial = _31_sendingTrainData_to_RBC_partial;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 :
          /* SM1:Awakness_of_Train:SM3:Second_Validation_of_Train_Number_from_Driver:<1> */
          if (outC->tr_1_clock_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1) {
            _33_sendingTrainData_to_RBC_partial = kcg_true;
            _38_sendingTrainData_to_RBC_partial = _33_sendingTrainData_to_RBC_partial;
          }
          else {
            _34_sendingTrainData_to_RBC_partial = last_sendingTrainData_to_RBC;
            _38_sendingTrainData_to_RBC_partial = _34_sendingTrainData_to_RBC_partial;
          }
          _7_sendingTrainData_to_RBC_partial = _38_sendingTrainData_to_RBC_partial;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 :
          _43_sendingTrainData_to_RBC_partial = last_sendingTrainData_to_RBC;
          _7_sendingTrainData_to_RBC_partial = _43_sendingTrainData_to_RBC_partial;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 :
          _48_sendingTrainData_to_RBC_partial = last_sendingTrainData_to_RBC;
          _7_sendingTrainData_to_RBC_partial = _48_sendingTrainData_to_RBC_partial;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1 :
          _55_sendingTrainData_to_RBC_partial = last_sendingTrainData_to_RBC;
          _7_sendingTrainData_to_RBC_partial = _55_sendingTrainData_to_RBC_partial;
          break;
        case SSM_st_request_Level_SM3_Awakness_of_Train_SM1 :
          _60_sendingTrainData_to_RBC_partial = last_sendingTrainData_to_RBC;
          _7_sendingTrainData_to_RBC_partial = _60_sendingTrainData_to_RBC_partial;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 :
          _65_sendingTrainData_to_RBC_partial = last_sendingTrainData_to_RBC;
          _7_sendingTrainData_to_RBC_partial = _65_sendingTrainData_to_RBC_partial;
          break;
        case SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1 :
          _70_sendingTrainData_to_RBC_partial = last_sendingTrainData_to_RBC;
          _7_sendingTrainData_to_RBC_partial = _70_sendingTrainData_to_RBC_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->sendingTrainData_to_RBC = _7_sendingTrainData_to_RBC_partial;
      break;
    case SSM_st_NP_SM1 :
      sendingTrainData_to_RBC_partial = last_sendingTrainData_to_RBC;
      outC->sendingTrainData_to_RBC = sendingTrainData_to_RBC_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L217 = outC->sendingTrainData_to_RBC;
  outC->fby_2.items[outC->fby_2.idx] = outC->_L217;
  outC->fby_2.idx = (outC->fby_2.idx + 1) % 4;
  switch (outC->SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      _124_sendingPositionReport_to_RBC_partial = last_sendingPositionReport_to_RBC;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      _115_sendingPositionReport_to_RBC_partial = last_sendingPositionReport_to_RBC;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      switch (outC->SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 :
          _12_sendingPositionReport_to_RBC_partial = last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 :
          _17_sendingPositionReport_to_RBC_partial = last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_SB_SM3_Awakness_of_Train_SM1 :
          _22_sendingPositionReport_to_RBC_partial = last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1 :
          _27_sendingPositionReport_to_RBC_partial = last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 :
          _32_sendingPositionReport_to_RBC_partial = last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 :
          _39_sendingPositionReport_to_RBC_partial = last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 :
          _44_sendingPositionReport_to_RBC_partial = last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 :
          _49_sendingPositionReport_to_RBC_partial = last_sendingPositionReport_to_RBC;
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L85 = sp_maintaining_RCM_Session_Types_Pkg;
  outC->_L86 = outC->_L306 == outC->_L85;
  outC->statusRBCSessionEstablishmen_from_MoRC = outC->_L86;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      outC->sendingPositionReport_to_RBC = _124_sendingPositionReport_to_RBC_partial;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      outC->sendingPositionReport_to_RBC = _115_sendingPositionReport_to_RBC_partial;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* SM1:Awakness_of_Train:SM3: */
      switch (outC->SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 :
          _6_sendingPositionReport_to_RBC_partial =
            _12_sendingPositionReport_to_RBC_partial;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 :
          _6_sendingPositionReport_to_RBC_partial =
            _17_sendingPositionReport_to_RBC_partial;
          break;
        case SSM_st_SB_SM3_Awakness_of_Train_SM1 :
          _6_sendingPositionReport_to_RBC_partial =
            _22_sendingPositionReport_to_RBC_partial;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1 :
          _6_sendingPositionReport_to_RBC_partial =
            _27_sendingPositionReport_to_RBC_partial;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 :
          _6_sendingPositionReport_to_RBC_partial =
            _32_sendingPositionReport_to_RBC_partial;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 :
          _6_sendingPositionReport_to_RBC_partial =
            _39_sendingPositionReport_to_RBC_partial;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 :
          _6_sendingPositionReport_to_RBC_partial =
            _44_sendingPositionReport_to_RBC_partial;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 :
          _6_sendingPositionReport_to_RBC_partial =
            _49_sendingPositionReport_to_RBC_partial;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1 :
          tr_1_guard_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1 =
            outC->statusRBCSessionEstablishmen_from_MoRC;
          outC->tr_1_clock_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1 =
            tr_1_guard_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1;
          /* SM1:Awakness_of_Train:SM3:Waiting_for_RBC_Establishment:<1> */
          if (outC->tr_1_clock_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1) {
            _50_sendingPositionReport_to_RBC_partial = kcg_true;
            _56_sendingPositionReport_to_RBC_partial =
              _50_sendingPositionReport_to_RBC_partial;
          }
          else {
            _51_sendingPositionReport_to_RBC_partial = last_sendingPositionReport_to_RBC;
            _56_sendingPositionReport_to_RBC_partial =
              _51_sendingPositionReport_to_RBC_partial;
          }
          _6_sendingPositionReport_to_RBC_partial =
            _56_sendingPositionReport_to_RBC_partial;
          break;
        case SSM_st_request_Level_SM3_Awakness_of_Train_SM1 :
          _61_sendingPositionReport_to_RBC_partial = last_sendingPositionReport_to_RBC;
          _6_sendingPositionReport_to_RBC_partial =
            _61_sendingPositionReport_to_RBC_partial;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 :
          _66_sendingPositionReport_to_RBC_partial = last_sendingPositionReport_to_RBC;
          _6_sendingPositionReport_to_RBC_partial =
            _66_sendingPositionReport_to_RBC_partial;
          break;
        case SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1 :
          _71_sendingPositionReport_to_RBC_partial = last_sendingPositionReport_to_RBC;
          _6_sendingPositionReport_to_RBC_partial =
            _71_sendingPositionReport_to_RBC_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->sendingPositionReport_to_RBC = _6_sendingPositionReport_to_RBC_partial;
      break;
    case SSM_st_NP_SM1 :
      sendingPositionReport_to_RBC_partial = last_sendingPositionReport_to_RBC;
      outC->sendingPositionReport_to_RBC = sendingPositionReport_to_RBC_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L209 = outC->sendingPositionReport_to_RBC;
  outC->fby_1.items[outC->fby_1.idx] = outC->_L209;
  outC->fby_1.idx = (outC->fby_1.idx + 1) % 4;
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &outC->_L194,
    (radioManagementMessage_T_Common_Types_Pkg *)
      &cdefault_manageT_ManageProcedure_Pkg);
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
    &outC->_L153,
    (P42_SessionManagement_T_Packet_Types_Pkg *)
      &cpacket42_q_rbc_ni_rbc_nid_radio_q_sleepsession_to_MoRC_ManageProcedure_Pkg);
  outC->_L192 = outC->_L153.q_dir;
  _139_noname = outC->_L192;
  outC->_L193 = outC->_L153.valid;
  _138_noname = outC->_L193;
  outC->_L191 = outC->_L153.q_rbc;
  outC->_L190 = outC->_L153.nid_c;
  outC->_L189 = outC->_L153.nid_rbc;
  outC->_L188 = outC->_L153.nid_radio;
  outC->_L187 = outC->_L153.q_sleepsession;
  outC->_L82 = mrs_registered_RCM_Types_Pkg;
  outC->_L83 = outC->_L304 == outC->_L82;
  outC->statusMobileRegistrated_from_MoRC = outC->_L83;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      outC->requestStartRBCSession_to_MoRC = kcg_false;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      outC->requestStartRBCSession_to_MoRC = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* SM1:Awakness_of_Train:SM3: */
      switch (outC->SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 :
          outC->requestStartRBCSession_to_MoRC = kcg_false;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 :
          tr_1_guard_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 =
            outC->statusMobileRegistrated_from_MoRC;
          outC->tr_1_clock_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 =
            tr_1_guard_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1;
          /* SM1:Awakness_of_Train:SM3:Waiting_for_Mobile_terminal_registration:<1> */
          if (outC->tr_1_clock_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1) {
            outC->requestStartRBCSession_to_MoRC = kcg_true;
          }
          else {
            outC->requestStartRBCSession_to_MoRC = kcg_false;
          }
          break;
        case SSM_st_SB_SM3_Awakness_of_Train_SM1 :
          outC->requestStartRBCSession_to_MoRC = kcg_false;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestStartRBCSession_to_MoRC = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 :
          outC->requestStartRBCSession_to_MoRC = kcg_false;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestStartRBCSession_to_MoRC = kcg_false;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestStartRBCSession_to_MoRC = kcg_false;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 :
          outC->requestStartRBCSession_to_MoRC = kcg_false;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1 :
          outC->requestStartRBCSession_to_MoRC = kcg_false;
          break;
        case SSM_st_request_Level_SM3_Awakness_of_Train_SM1 :
          outC->requestStartRBCSession_to_MoRC = kcg_false;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 :
          outC->requestStartRBCSession_to_MoRC = kcg_false;
          break;
        case SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1 :
          outC->requestStartRBCSession_to_MoRC = kcg_false;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      break;
    case SSM_st_NP_SM1 :
      outC->requestStartRBCSession_to_MoRC = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L69 = outC->requestStartRBCSession_to_MoRC;
  outC->_L63 = msrc_OBU_Common_Types_Pkg;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L65,
    (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
      &cNID_BG_Radio_Header_ManageProcedure_Pkg);
  outC->_L149 = Q_DIR_Both_directions;
  outC->_L147.valid = outC->_L69;
  outC->_L147.q_dir = outC->_L149;
  outC->_L147.q_rbc = outC->_L191;
  outC->_L147.nid_c = outC->_L190;
  outC->_L147.nid_rbc = outC->_L189;
  outC->_L147.nid_radio = outC->_L188;
  outC->_L147.q_sleepsession = outC->_L187;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L151,
    (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
      &cpacket45_to_MoRC_ManageProcedure_Pkg);
  outC->_L61.valid = outC->_L69;
  outC->_L61.messageSource = outC->_L63;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L61.Radio_Common_Header,
    &outC->_L65);
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
    &outC->_L61.p42,
    &outC->_L147);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L61.p45,
    &outC->_L151);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L61.sendingRBC, &outC->_L303);
  /* _L154= */
  if (outC->_L69) {
    kcg_copy_radioManagementMessage_T_Common_Types_Pkg(&outC->_L154, &outC->_L61);
  }
  else {
    kcg_copy_radioManagementMessage_T_Common_Types_Pkg(&outC->_L154, &outC->_L194);
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_SoM_NTC_SN_SM1 :
      outC->power_Off_to_MoRC = kcg_false;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      outC->power_Off_to_MoRC = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      outC->tr_1_clock_Awakness_of_Train_SM1 = tr_1_guard_Awakness_of_Train_SM1;
      /* SM1:Awakness_of_Train:<1> */
      if (outC->tr_1_clock_Awakness_of_Train_SM1) {
        outC->power_Off_to_MoRC = kcg_true;
      }
      else {
        outC->power_Off_to_MoRC = kcg_false;
      }
      break;
    case SSM_st_NP_SM1 :
      outC->power_Off_to_MoRC = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L131 = outC->power_Off_to_MoRC;
  outC->powerOff_to_MoRC = outC->_L131;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      outC->requestLevelStaus_from_Level_Management = kcg_false;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      outC->requestLevelStaus_from_Level_Management = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* SM1:Awakness_of_Train:SM3: */
      switch (outC->SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 :
          outC->requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 :
          outC->requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_SB_SM3_Awakness_of_Train_SM1 :
          outC->requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 :
          outC->requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 :
          outC->requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1 :
          outC->requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_request_Level_SM3_Awakness_of_Train_SM1 :
          outC->requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 :
          /* SM1:Awakness_of_Train:SM3:first_Validation_for_Train_Number:<1> */
          if (outC->tr_1_clock_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1) {
            outC->requestLevelStaus_from_Level_Management = kcg_true;
          }
          else {
            outC->requestLevelStaus_from_Level_Management = kcg_false;
          }
          break;
        case SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1 :
          outC->requestLevelStaus_from_Level_Management = kcg_false;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      break;
    case SSM_st_NP_SM1 :
      outC->requestLevelStaus_from_Level_Management = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L128 = outC->requestLevelStaus_from_Level_Management;
  noname = outC->_L128;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_SoM_NTC_SN_SM1 :
      outC->power_Up_to_MoRC = kcg_false;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      outC->power_Up_to_MoRC = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      outC->power_Up_to_MoRC = kcg_false;
      break;
    case SSM_st_NP_SM1 :
      outC->tr_1_clock_NP_SM1 = tr_1_guard_NP_SM1;
      /* SM1:NP:<1> */
      if (outC->tr_1_clock_NP_SM1) {
        outC->power_Up_to_MoRC = kcg_true;
      }
      else {
        outC->power_Up_to_MoRC = kcg_false;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L91 = outC->power_Up_to_MoRC;
  outC->powerUp_to_MoRC = outC->_L91;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      outC->requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      outC->requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* SM1:Awakness_of_Train:SM3: */
      switch (outC->SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 :
          outC->requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 :
          outC->requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_SB_SM3_Awakness_of_Train_SM1 :
          outC->requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 :
          outC->requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 :
          outC->requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1 :
          outC->requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_request_Level_SM3_Awakness_of_Train_SM1 :
          tr_1_guard_request_Level_SM3_Awakness_of_Train_SM1 =
            outC->M_LEVEL_Level2 | outC->M_LEVEL_Level3;
          outC->tr_1_clock_request_Level_SM3_Awakness_of_Train_SM1 =
            tr_1_guard_request_Level_SM3_Awakness_of_Train_SM1;
          /* SM1:Awakness_of_Train:SM3:request_Level:<1> */
          if (outC->tr_1_clock_request_Level_SM3_Awakness_of_Train_SM1) {
            outC->requestStartMobileTerminalRegistration_to_MoRC = kcg_true;
          }
          else {
            outC->requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          }
          break;
        case SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 :
          outC->requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1 :
          outC->requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      break;
    case SSM_st_NP_SM1 :
      outC->requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L67 = outC->requestStartMobileTerminalRegistration_to_MoRC;
  outC->_L37 = msrc_OBU_Common_Types_Pkg;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L39,
    (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
      &cNID_BG_Radio_Header_ManageProcedure_Pkg);
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
    &outC->_L40,
    (P42_SessionManagement_T_Packet_Types_Pkg *)
      &cpacket42_to_MoRC_ManageProcedure_Pkg);
  outC->_L49 = Q_DIR_Both_directions;
  outC->_L50 = cpacket45_nid_mn_to_MoRC_ManageProcedure_Pkg;
  outC->_L47.valid = outC->_L67;
  outC->_L47.q_dir = outC->_L49;
  outC->_L47.nid_mn = outC->_L50;
  outC->_L29.valid = outC->_L67;
  outC->_L29.messageSource = outC->_L37;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L29.Radio_Common_Header,
    &outC->_L39);
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(&outC->_L29.p42, &outC->_L40);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L29.p45,
    &outC->_L47);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L29.sendingRBC, &outC->_L290);
  /* _L70= */
  if (outC->_L67) {
    kcg_copy_radioManagementMessage_T_Common_Types_Pkg(&outC->_L70, &outC->_L29);
  }
  else {
    kcg_copy_radioManagementMessage_T_Common_Types_Pkg(&outC->_L70, &outC->_L154);
  }
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC,
    &outC->_L70);
  switch (outC->SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      _122_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management_partial =
        last_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
      _121_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management_partial =
        last_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
      _120_statusstartofmissionongoing_to_MoRC_partial =
        last_statusstartofmissionongoing_to_MoRC;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_SoM_NTC_SN_SM1 :
      _137_SM1_fired_strong_partial = _234_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _137_SM1_fired_strong_partial;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      _134_SM1_fired_strong_partial = _234_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _134_SM1_fired_strong_partial;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      if (tr_1_guard_Awakness_of_Train_SM1) {
        _131_SM1_fired_strong_partial =
          SSM_TR_Awakness_of_Train_NP_1_Awakness_of_Train_SM1;
      }
      else {
        _131_SM1_fired_strong_partial = _234_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _131_SM1_fired_strong_partial;
      break;
    case SSM_st_NP_SM1 :
      if (tr_1_guard_NP_SM1) {
        SM1_fired_strong_partial = SSM_TR_NP_Awakness_of_Train_1_NP_SM1;
      }
      else {
        SM1_fired_strong_partial = _234_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      _128_SM1_fired_partial = outC->SM1_fired_strong;
      _127_SM1_reset_nxt_partial = kcg_false;
      _126_SM1_state_nxt_partial = SSM_st_SoM_NTC_SN_SM1;
      kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
        &outC->_L2_SoM_NTC_SN_SM1,
        StatusModeandLevel_from_Level_and_Mode_Management);
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_SoM_NTC_SN_SM1 :
      if (SM1_reset_sel) {
        /* SM1:SoM_NTC_SN:_L3=(SoMProcedure_Pkg::SoM_NTC_SN#1)/ */
        SoM_NTC_SN_reset_SoMProcedure_Pkg(&outC->Context_SoM_NTC_SN_1);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      /* SM1:SoM_NTC_SN:_L3=(SoMProcedure_Pkg::SoM_NTC_SN#1)/ */
      SoM_NTC_SN_SoMProcedure_Pkg(
        &outC->_L2_SoM_NTC_SN_SM1,
        &outC->Context_SoM_NTC_SN_1);
      outC->_L3_SoM_NTC_SN_SM1 = outC->Context_SoM_NTC_SN_1.start_ack_to_TIU;
      _123_start_ack_to_TIU_partial = outC->_L3_SoM_NTC_SN_SM1;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      _119_SM1_fired_partial = outC->SM1_fired_strong;
      _118_SM1_reset_nxt_partial = kcg_false;
      _117_SM1_state_nxt_partial = SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
      outC->_L9_SoM_L2_3_FS_SR_OS_LS_SH_SM1 =
        Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management;
      kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
        &outC->_L10_SoM_L2_3_FS_SR_OS_LS_SH_SM1,
        StatusModeandLevel_from_Level_and_Mode_Management);
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      if (SM1_reset_sel) {
        /* SM1:SoM_L2_3_FS_SR_OS_LS_SH:_L4=(SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN#1)/ */
        SoM_SR_FS_OS_LS_SH_SN_UN_reset_SoMProcedure_Pkg(
          &outC->Context_SoM_SR_FS_OS_LS_SH_SN_UN_1);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      outC->statusstartofmissionongoing_to_MoRC =
        _120_statusstartofmissionongoing_to_MoRC_partial;
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management =
        _121_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management_partial;
      outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        _122_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management_partial;
      outC->start_ack_to_TIU = _123_start_ack_to_TIU_partial;
      outC->SM1_state_nxt = _126_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _127_SM1_reset_nxt_partial;
      outC->SM1_fired = _128_SM1_fired_partial;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      /* SM1:SoM_L2_3_FS_SR_OS_LS_SH:_L4=(SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN#1)/ */
      SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg(
        outC->_L9_SoM_L2_3_FS_SR_OS_LS_SH_SM1,
        &outC->_L10_SoM_L2_3_FS_SR_OS_LS_SH_SM1,
        &outC->Context_SoM_SR_FS_OS_LS_SH_SN_UN_1);
      outC->_L4_SoM_L2_3_FS_SR_OS_LS_SH_SM1 =
        outC->Context_SoM_SR_FS_OS_LS_SH_SN_UN_1.request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
      outC->_L5_SoM_L2_3_FS_SR_OS_LS_SH_SM1 =
        outC->Context_SoM_SR_FS_OS_LS_SH_SN_UN_1.request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
      outC->_L13_SoM_L2_3_FS_SR_OS_LS_SH_SM1 =
        outC->Context_SoM_SR_FS_OS_LS_SH_SN_UN_1.start_ack_to_TIU;
      _114_start_ack_to_TIU_partial = outC->_L13_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
      outC->_L12_SoM_L2_3_FS_SR_OS_LS_SH_SM1 = kcg_false;
      _111_statusstartofmissionongoing_to_MoRC_partial =
        outC->_L12_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
      _113_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management_partial =
        outC->_L5_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
      _112_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management_partial =
        outC->_L4_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
      outC->statusstartofmissionongoing_to_MoRC =
        _111_statusstartofmissionongoing_to_MoRC_partial;
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management =
        _112_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management_partial;
      outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        _113_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management_partial;
      outC->start_ack_to_TIU = _114_start_ack_to_TIU_partial;
      outC->SM1_state_nxt = _117_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _118_SM1_reset_nxt_partial;
      outC->SM1_fired = _119_SM1_fired_partial;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      _5_start_ack_to_TIU_partial = kcg_false;
      outC->Awakness_of_Train_weakb_clock_SM1 = outC->SM1_fired_strong !=
        _234_SSM_TR_no_trans_SM1;
      /* SM1:Awakness_of_Train: */
      if (outC->Awakness_of_Train_weakb_clock_SM1) {
        _108_SM1_fired_partial = outC->SM1_fired_strong;
        _109_SM1_reset_nxt_partial = kcg_false;
        _110_SM1_state_nxt_partial = SSM_st_Awakness_of_Train_SM1;
        _8_SM1_state_nxt_partial = _110_SM1_state_nxt_partial;
        _9_SM1_reset_nxt_partial = _109_SM1_reset_nxt_partial;
        _10_SM1_fired_partial = _108_SM1_fired_partial;
      }
      else {
        tr_3_guard_Awakness_of_Train_SM1 = outC->statusStart_from_DMI &
          outC->M_LEVEL_Level_NTC;
        tr_2_guard_Awakness_of_Train_SM1 = outC->statusStart_from_DMI &
          (outC->M_LEVEL_Level2 | outC->M_LEVEL_Level3);
        if (tr_2_guard_Awakness_of_Train_SM1) {
          _105_SM1_fired_partial =
            SSM_TR_Awakness_of_Train_SoM_L2_3_FS_SR_OS_LS_SH_2_Awakness_of_Train_SM1;
        }
        else if (tr_3_guard_Awakness_of_Train_SM1) {
          _105_SM1_fired_partial =
            SSM_TR_Awakness_of_Train_SoM_NTC_SN_3_Awakness_of_Train_SM1;
        }
        else {
          _105_SM1_fired_partial = _234_SSM_TR_no_trans_SM1;
        }
        if (tr_2_guard_Awakness_of_Train_SM1) {
          _106_SM1_reset_nxt_partial = kcg_true;
        }
        else {
          _106_SM1_reset_nxt_partial = tr_3_guard_Awakness_of_Train_SM1;
        }
        if (tr_2_guard_Awakness_of_Train_SM1) {
          _107_SM1_state_nxt_partial = SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
        }
        else if (tr_3_guard_Awakness_of_Train_SM1) {
          _107_SM1_state_nxt_partial = SSM_st_SoM_NTC_SN_SM1;
        }
        else {
          _107_SM1_state_nxt_partial = SSM_st_Awakness_of_Train_SM1;
        }
        _8_SM1_state_nxt_partial = _107_SM1_state_nxt_partial;
        _9_SM1_reset_nxt_partial = _106_SM1_reset_nxt_partial;
        _10_SM1_fired_partial = _105_SM1_fired_partial;
      }
      outC->_L5_Awakness_of_Train_SM1 = kcg_false;
      outC->_L3_Awakness_of_Train_SM1 = kcg_false;
      _4_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management_partial =
        outC->_L3_Awakness_of_Train_SM1;
      _3_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management_partial =
        outC->_L5_Awakness_of_Train_SM1;
      outC->_L2_Awakness_of_Train_SM1 = kcg_true;
      _2_statusstartofmissionongoing_to_MoRC_partial =
        outC->_L2_Awakness_of_Train_SM1;
      /* SM1:Awakness_of_Train:SM3: */
      switch (outC->SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1) {
            SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1;
          }
          else {
            SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_state_act_Awakness_of_Train_SM1 =
            SM3_state_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1) {
            _15_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1;
          }
          else {
            _15_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_state_act_Awakness_of_Train_SM1 =
            _15_SM3_state_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_SB_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_SB_SM3_Awakness_of_Train_SM1) {
            _20_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1;
          }
          else {
            _20_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_SB_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_state_act_Awakness_of_Train_SM1 =
            _20_SM3_state_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1 :
          _25_SM3_state_act_partial_Awakness_of_Train_SM1 =
            SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1;
          outC->SM3_state_act_Awakness_of_Train_SM1 =
            _25_SM3_state_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1) {
            _30_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1;
          }
          else {
            _30_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_state_act_Awakness_of_Train_SM1 =
            _30_SM3_state_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1) {
            _37_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1;
          }
          else if (tr_2_guard_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1) {
            _37_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1;
          }
          else {
            _37_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_state_act_Awakness_of_Train_SM1 =
            _37_SM3_state_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1) {
            _42_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1;
          }
          else {
            _42_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_state_act_Awakness_of_Train_SM1 =
            _42_SM3_state_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1) {
            _47_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1;
          }
          else {
            _47_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_state_act_Awakness_of_Train_SM1 =
            _47_SM3_state_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1) {
            _54_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1;
          }
          else {
            _54_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_state_act_Awakness_of_Train_SM1 =
            _54_SM3_state_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_request_Level_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_request_Level_SM3_Awakness_of_Train_SM1) {
            _59_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1;
          }
          else {
            _59_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_request_Level_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_state_act_Awakness_of_Train_SM1 =
            _59_SM3_state_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1) {
            _64_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_request_Level_SM3_Awakness_of_Train_SM1;
          }
          else if (tr_2_guard_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1) {
            _64_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1;
          }
          else if (tr_3_guard_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1) {
            _64_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1;
          }
          else {
            _64_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_state_act_Awakness_of_Train_SM1 =
            _64_SM3_state_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1) {
            _69_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1;
          }
          else {
            _69_SM3_state_act_partial_Awakness_of_Train_SM1 =
              SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_state_act_Awakness_of_Train_SM1 =
            _69_SM3_state_act_partial_Awakness_of_Train_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->_2_SM3_clock_Awakness_of_Train_SM1 =
        outC->SM3_state_act_Awakness_of_Train_SM1;
      /* SM1:Awakness_of_Train:SM3: */
      switch (outC->SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1) {
            SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_Waiting_for_driver_selection_E10_E11_or_E12_Validation_of_Train_Data_from_Driver_1_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1;
          }
          else {
            SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_no_trans_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_fired_strong_Awakness_of_Train_SM1 =
            SM3_fired_strong_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1) {
            _13_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_Waiting_for_Mobile_terminal_registration_Waiting_for_RBC_Establishment_1_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1;
          }
          else {
            _13_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_no_trans_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_fired_strong_Awakness_of_Train_SM1 =
            _13_SM3_fired_strong_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_SB_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_SB_SM3_Awakness_of_Train_SM1) {
            _18_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_SB_Waition_for_Driver_ID_1_SB_SM3_Awakness_of_Train_SM1;
          }
          else {
            _18_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_no_trans_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_fired_strong_Awakness_of_Train_SM1 =
            _18_SM3_fired_strong_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1 :
          _23_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
            SSM_TR_no_trans_SM3_Awakness_of_Train_SM1;
          outC->SM3_fired_strong_Awakness_of_Train_SM1 =
            _23_SM3_fired_strong_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1) {
            _28_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_Waiting_of_Start_from_Driver_1_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1;
          }
          else {
            _28_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_no_trans_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_fired_strong_Awakness_of_Train_SM1 =
            _28_SM3_fired_strong_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1) {
            _35_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_Second_Validation_of_Train_Number_from_Driver_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_1_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1;
          }
          else if (tr_2_guard_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1) {
            _35_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              _235_SSM_TR_Second_Validation_of_Train_Number_from_Driver_Waiting_of_Start_from_Driver_2_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1;
          }
          else {
            _35_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_no_trans_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_fired_strong_Awakness_of_Train_SM1 =
            _35_SM3_fired_strong_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1) {
            _40_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_Validation_of_Train_Data_from_Driver_Second_Validation_of_Train_Number_from_Driver_1_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1;
          }
          else {
            _40_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_no_trans_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_fired_strong_Awakness_of_Train_SM1 =
            _40_SM3_fired_strong_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1) {
            _45_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_Acknowlege_of_Position_from_RBC_Validation_of_Train_Data_from_Driver_1_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1;
          }
          else {
            _45_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_no_trans_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_fired_strong_Awakness_of_Train_SM1 =
            _45_SM3_fired_strong_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1) {
            _52_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_Waiting_for_RBC_Establishment_Acknowlege_of_Position_from_RBC_1_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1;
          }
          else {
            _52_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_no_trans_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_fired_strong_Awakness_of_Train_SM1 =
            _52_SM3_fired_strong_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_request_Level_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_request_Level_SM3_Awakness_of_Train_SM1) {
            _57_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_request_Level_Waiting_for_Mobile_terminal_registration_1_request_Level_SM3_Awakness_of_Train_SM1;
          }
          else {
            _57_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_no_trans_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_fired_strong_Awakness_of_Train_SM1 =
            _57_SM3_fired_strong_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1) {
            _62_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_first_Validation_for_Train_Number_request_Level_1_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1;
          }
          else if (tr_2_guard_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1) {
            _62_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              _236_SSM_TR_first_Validation_for_Train_Number_Waiting_for_driver_selection_E10_E11_or_E12_2_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1;
          }
          else if (tr_3_guard_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1) {
            _62_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              _237_SSM_TR_first_Validation_for_Train_Number_Validation_of_Train_Data_from_Driver_3_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1;
          }
          else {
            _62_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_no_trans_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_fired_strong_Awakness_of_Train_SM1 =
            _62_SM3_fired_strong_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1) {
            _67_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_Waition_for_Driver_ID_first_Validation_for_Train_Number_1_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1;
          }
          else {
            _67_SM3_fired_strong_partial_Awakness_of_Train_SM1 =
              SSM_TR_no_trans_SM3_Awakness_of_Train_SM1;
          }
          outC->SM3_fired_strong_Awakness_of_Train_SM1 =
            _67_SM3_fired_strong_partial_Awakness_of_Train_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:Awakness_of_Train:SM3: */
      switch (outC->_2_SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 :
          SM3_fired_partial_Awakness_of_Train_SM1 =
            outC->SM3_fired_strong_Awakness_of_Train_SM1;
          SM3_reset_nxt_partial_Awakness_of_Train_SM1 = kcg_false;
          SM3_state_nxt_partial_Awakness_of_Train_SM1 =
            SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1;
          outC->SM3_state_nxt_Awakness_of_Train_SM1 =
            SM3_state_nxt_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 :
          _72_SM3_fired_partial_Awakness_of_Train_SM1 =
            outC->SM3_fired_strong_Awakness_of_Train_SM1;
          _73_SM3_reset_nxt_partial_Awakness_of_Train_SM1 = kcg_false;
          _74_SM3_state_nxt_partial_Awakness_of_Train_SM1 =
            SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1;
          outC->SM3_state_nxt_Awakness_of_Train_SM1 =
            _74_SM3_state_nxt_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_SB_SM3_Awakness_of_Train_SM1 :
          _75_SM3_fired_partial_Awakness_of_Train_SM1 =
            outC->SM3_fired_strong_Awakness_of_Train_SM1;
          _76_SM3_reset_nxt_partial_Awakness_of_Train_SM1 = kcg_false;
          _77_SM3_state_nxt_partial_Awakness_of_Train_SM1 =
            SSM_st_SB_SM3_Awakness_of_Train_SM1;
          outC->SM3_state_nxt_Awakness_of_Train_SM1 =
            _77_SM3_state_nxt_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1 :
          _78_SM3_fired_partial_Awakness_of_Train_SM1 =
            outC->SM3_fired_strong_Awakness_of_Train_SM1;
          _79_SM3_reset_nxt_partial_Awakness_of_Train_SM1 = kcg_false;
          _80_SM3_state_nxt_partial_Awakness_of_Train_SM1 =
            SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1;
          outC->SM3_state_nxt_Awakness_of_Train_SM1 =
            _80_SM3_state_nxt_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 :
          _81_SM3_fired_partial_Awakness_of_Train_SM1 =
            outC->SM3_fired_strong_Awakness_of_Train_SM1;
          _82_SM3_reset_nxt_partial_Awakness_of_Train_SM1 = kcg_false;
          _83_SM3_state_nxt_partial_Awakness_of_Train_SM1 =
            SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1;
          outC->SM3_state_nxt_Awakness_of_Train_SM1 =
            _83_SM3_state_nxt_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 :
          _84_SM3_fired_partial_Awakness_of_Train_SM1 =
            outC->SM3_fired_strong_Awakness_of_Train_SM1;
          _85_SM3_reset_nxt_partial_Awakness_of_Train_SM1 = kcg_false;
          _86_SM3_state_nxt_partial_Awakness_of_Train_SM1 =
            SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1;
          outC->SM3_state_nxt_Awakness_of_Train_SM1 =
            _86_SM3_state_nxt_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 :
          _87_SM3_fired_partial_Awakness_of_Train_SM1 =
            outC->SM3_fired_strong_Awakness_of_Train_SM1;
          _88_SM3_reset_nxt_partial_Awakness_of_Train_SM1 = kcg_false;
          _89_SM3_state_nxt_partial_Awakness_of_Train_SM1 =
            SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1;
          outC->SM3_state_nxt_Awakness_of_Train_SM1 =
            _89_SM3_state_nxt_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 :
          _90_SM3_fired_partial_Awakness_of_Train_SM1 =
            outC->SM3_fired_strong_Awakness_of_Train_SM1;
          _91_SM3_reset_nxt_partial_Awakness_of_Train_SM1 = kcg_false;
          _92_SM3_state_nxt_partial_Awakness_of_Train_SM1 =
            SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1;
          outC->SM3_state_nxt_Awakness_of_Train_SM1 =
            _92_SM3_state_nxt_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1 :
          _93_SM3_fired_partial_Awakness_of_Train_SM1 =
            outC->SM3_fired_strong_Awakness_of_Train_SM1;
          _94_SM3_reset_nxt_partial_Awakness_of_Train_SM1 = kcg_false;
          _95_SM3_state_nxt_partial_Awakness_of_Train_SM1 =
            SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1;
          outC->SM3_state_nxt_Awakness_of_Train_SM1 =
            _95_SM3_state_nxt_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_request_Level_SM3_Awakness_of_Train_SM1 :
          _96_SM3_fired_partial_Awakness_of_Train_SM1 =
            outC->SM3_fired_strong_Awakness_of_Train_SM1;
          _97_SM3_reset_nxt_partial_Awakness_of_Train_SM1 = kcg_false;
          _98_SM3_state_nxt_partial_Awakness_of_Train_SM1 =
            SSM_st_request_Level_SM3_Awakness_of_Train_SM1;
          outC->SM3_state_nxt_Awakness_of_Train_SM1 =
            _98_SM3_state_nxt_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 :
          _99_SM3_fired_partial_Awakness_of_Train_SM1 =
            outC->SM3_fired_strong_Awakness_of_Train_SM1;
          _100_SM3_reset_nxt_partial_Awakness_of_Train_SM1 = kcg_false;
          _101_SM3_state_nxt_partial_Awakness_of_Train_SM1 =
            SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1;
          outC->SM3_state_nxt_Awakness_of_Train_SM1 =
            _101_SM3_state_nxt_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1 :
          _102_SM3_fired_partial_Awakness_of_Train_SM1 =
            outC->SM3_fired_strong_Awakness_of_Train_SM1;
          _103_SM3_reset_nxt_partial_Awakness_of_Train_SM1 = kcg_false;
          _104_SM3_state_nxt_partial_Awakness_of_Train_SM1 =
            SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1;
          outC->SM3_state_nxt_Awakness_of_Train_SM1 =
            _104_SM3_state_nxt_partial_Awakness_of_Train_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:Awakness_of_Train:SM3: */
      if (outC->init1) {
        SM3_reset_sel_Awakness_of_Train_SM1 = kcg_false;
      }
      else {
        SM3_reset_sel_Awakness_of_Train_SM1 = outC->SM3_reset_nxt_Awakness_of_Train_SM1;
      }
      /* SM1:Awakness_of_Train:SM3: */
      switch (outC->_2_SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_nxt_Awakness_of_Train_SM1 =
            SM3_reset_nxt_partial_Awakness_of_Train_SM1;
          outC->SM3_fired_Awakness_of_Train_SM1 = SM3_fired_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_nxt_Awakness_of_Train_SM1 =
            _73_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
          outC->SM3_fired_Awakness_of_Train_SM1 =
            _72_SM3_fired_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_SB_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_nxt_Awakness_of_Train_SM1 =
            _76_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
          outC->SM3_fired_Awakness_of_Train_SM1 =
            _75_SM3_fired_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_nxt_Awakness_of_Train_SM1 =
            _79_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
          outC->SM3_fired_Awakness_of_Train_SM1 =
            _78_SM3_fired_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_nxt_Awakness_of_Train_SM1 =
            _82_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
          outC->SM3_fired_Awakness_of_Train_SM1 =
            _81_SM3_fired_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_nxt_Awakness_of_Train_SM1 =
            _85_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
          outC->SM3_fired_Awakness_of_Train_SM1 =
            _84_SM3_fired_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_nxt_Awakness_of_Train_SM1 =
            _88_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
          outC->SM3_fired_Awakness_of_Train_SM1 =
            _87_SM3_fired_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_nxt_Awakness_of_Train_SM1 =
            _91_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
          outC->SM3_fired_Awakness_of_Train_SM1 =
            _90_SM3_fired_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_nxt_Awakness_of_Train_SM1 =
            _94_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
          outC->SM3_fired_Awakness_of_Train_SM1 =
            _93_SM3_fired_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_request_Level_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_nxt_Awakness_of_Train_SM1 =
            _97_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
          outC->SM3_fired_Awakness_of_Train_SM1 =
            _96_SM3_fired_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_nxt_Awakness_of_Train_SM1 =
            _100_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
          outC->SM3_fired_Awakness_of_Train_SM1 =
            _99_SM3_fired_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_nxt_Awakness_of_Train_SM1 =
            _103_SM3_reset_nxt_partial_Awakness_of_Train_SM1;
          outC->SM3_fired_Awakness_of_Train_SM1 =
            _102_SM3_fired_partial_Awakness_of_Train_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      switch (outC->SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 :
          SM3_reset_act_partial_Awakness_of_Train_SM1 =
            tr_1_guard_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 :
          _14_SM3_reset_act_partial_Awakness_of_Train_SM1 =
            tr_1_guard_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1;
          break;
        case SSM_st_SB_SM3_Awakness_of_Train_SM1 :
          _19_SM3_reset_act_partial_Awakness_of_Train_SM1 =
            tr_1_guard_SB_SM3_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1 :
          _24_SM3_reset_act_partial_Awakness_of_Train_SM1 = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 :
          _29_SM3_reset_act_partial_Awakness_of_Train_SM1 =
            tr_1_guard_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1) {
            _36_SM3_reset_act_partial_Awakness_of_Train_SM1 = kcg_true;
          }
          else {
            _36_SM3_reset_act_partial_Awakness_of_Train_SM1 =
              tr_2_guard_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1;
          }
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 :
          _41_SM3_reset_act_partial_Awakness_of_Train_SM1 =
            tr_1_guard_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 :
          _46_SM3_reset_act_partial_Awakness_of_Train_SM1 =
            tr_1_guard_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1 :
          _53_SM3_reset_act_partial_Awakness_of_Train_SM1 =
            tr_1_guard_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1;
          break;
        case SSM_st_request_Level_SM3_Awakness_of_Train_SM1 :
          _58_SM3_reset_act_partial_Awakness_of_Train_SM1 =
            tr_1_guard_request_Level_SM3_Awakness_of_Train_SM1;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 :
          if (tr_1_guard_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1) {
            _63_SM3_reset_act_partial_Awakness_of_Train_SM1 = kcg_true;
          }
          else if (tr_2_guard_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1) {
            _63_SM3_reset_act_partial_Awakness_of_Train_SM1 = kcg_true;
          }
          else {
            _63_SM3_reset_act_partial_Awakness_of_Train_SM1 =
              tr_3_guard_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1;
          }
          break;
        case SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1 :
          _68_SM3_reset_act_partial_Awakness_of_Train_SM1 =
            tr_1_guard_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:Awakness_of_Train:SM3: */
      if (outC->init1) {
        SM3_reset_prv_Awakness_of_Train_SM1 = kcg_false;
      }
      else {
        SM3_reset_prv_Awakness_of_Train_SM1 = outC->SM3_reset_act_Awakness_of_Train_SM1;
      }
      /* SM1:Awakness_of_Train:SM3: */
      switch (outC->SM3_clock_Awakness_of_Train_SM1) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_act_Awakness_of_Train_SM1 =
            SM3_reset_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_act_Awakness_of_Train_SM1 =
            _14_SM3_reset_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_SB_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_act_Awakness_of_Train_SM1 =
            _19_SM3_reset_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_act_Awakness_of_Train_SM1 =
            _24_SM3_reset_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_act_Awakness_of_Train_SM1 =
            _29_SM3_reset_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_act_Awakness_of_Train_SM1 =
            _36_SM3_reset_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_act_Awakness_of_Train_SM1 =
            _41_SM3_reset_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_act_Awakness_of_Train_SM1 =
            _46_SM3_reset_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_act_Awakness_of_Train_SM1 =
            _53_SM3_reset_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_request_Level_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_act_Awakness_of_Train_SM1 =
            _58_SM3_reset_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_act_Awakness_of_Train_SM1 =
            _63_SM3_reset_act_partial_Awakness_of_Train_SM1;
          break;
        case SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1 :
          outC->SM3_reset_act_Awakness_of_Train_SM1 =
            _68_SM3_reset_act_partial_Awakness_of_Train_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->statusstartofmissionongoing_to_MoRC =
        _2_statusstartofmissionongoing_to_MoRC_partial;
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management =
        _3_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management_partial;
      outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        _4_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management_partial;
      outC->start_ack_to_TIU = _5_start_ack_to_TIU_partial;
      outC->SM1_state_nxt = _8_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _9_SM1_reset_nxt_partial;
      outC->SM1_fired = _10_SM1_fired_partial;
      outC->init1 = kcg_false;
      break;
    case SSM_st_NP_SM1 :
      start_ack_to_TIU_partial = kcg_false;
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_NP_SM1;
      outC->_L3_NP_SM1 = kcg_false;
      outC->_L2_NP_SM1 = kcg_false;
      request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management_partial = outC->_L3_NP_SM1;
      request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management_partial =
        outC->_L2_NP_SM1;
      outC->_L1_NP_SM1 = kcg_false;
      statusstartofmissionongoing_to_MoRC_partial = outC->_L1_NP_SM1;
      outC->statusstartofmissionongoing_to_MoRC =
        statusstartofmissionongoing_to_MoRC_partial;
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management =
        request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management_partial;
      outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management_partial;
      outC->start_ack_to_TIU = start_ack_to_TIU_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void Master_Procedure_init_ManageProcedure_Pkg(
  outC_Master_Procedure_ManageProcedure_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;

  outC->_L306 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L305.valid = kcg_true;
  outC->_L305.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L305.nid_c = kcg_lit_int32(0);
  outC->_L305.nid_rbc = kcg_lit_int32(0);
  outC->_L305.nid_radio = kcg_lit_int64(0);
  outC->_L304 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L303.valid = kcg_true;
  outC->_L303.nid_c = kcg_lit_int32(0);
  outC->_L303.rbc_id = kcg_lit_int32(0);
  outC->_L303.device_id = kcg_lit_int32(0);
  outC->_L290.valid = kcg_true;
  outC->_L290.nid_c = kcg_lit_int32(0);
  outC->_L290.rbc_id = kcg_lit_int32(0);
  outC->_L290.device_id = kcg_lit_int32(0);
  outC->_L283 = kcg_true;
  outC->_L282 = kcg_true;
  outC->_L280 = kcg_true;
  outC->_L279 = kcg_true;
  outC->_L278 = Start_of_mission_DMI_Types_Pkg;
  outC->_L277 = kcg_true;
  outC->_L272 = Start_of_mission_DMI_Types_Pkg;
  outC->_L271.valid = kcg_true;
  outC->_L271.systemTime = kcg_lit_int32(0);
  outC->_L271.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L265 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L264 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L263 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L262 = kcg_true;
  outC->_L240 = kcg_true;
  outC->_L241 = kcg_true;
  outC->_L242 = kcg_true;
  outC->_L243 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L244 = kcg_true;
  outC->_L245 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L246 = kcg_true;
  outC->_L247 = kcg_lit_int32(0);
  outC->_L248 = kcg_true;
  outC->_L249 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L250 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L252 = kcg_true;
  outC->_L253.valid = kcg_true;
  outC->_L253.system_clock = kcg_lit_int32(0);
  outC->_L253.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L254 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L255 = kcg_true;
  outC->_L256.DMI_Active = kcg_true;
  outC->_L256.DMI_Error = kcg_true;
  outC->_L256.DMI_DriverIdValidated = kcg_true;
  outC->_L256.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L256.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L256.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L256.DMI_TrainDataValidated = kcg_true;
  outC->_L256.DMI_StartReceived = kcg_true;
  outC->_L256.DMI_Identifier.valid = kcg_true;
  outC->_L256.DMI_Identifier.systemTime = kcg_lit_int32(0);
  outC->_L256.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L256.DMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L256.DMI_Identifier.l_name = kcg_lit_int32(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L256.DMI_Identifier.DMI_name[idx] = ' ';
  }
  outC->_L256.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L257 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L258 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L259 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L260 = kcg_true;
  outC->_L261 = kcg_true;
  outC->_L237 = M_LEVEL_Level_0;
  outC->_L236 = M_LEVEL_Level_0;
  outC->_L235 = kcg_true;
  outC->_L234 = kcg_true;
  outC->_L233 = M_LEVEL_Level_0;
  outC->_L232 = M_LEVEL_Level_0;
  outC->_L231 = kcg_true;
  outC->_L230 = kcg_true;
  outC->_L228 = M_LEVEL_Level_0;
  outC->_L227 = kcg_true;
  outC->_L226 = M_LEVEL_Level_0;
  outC->_L223 = M_MODE_Full_Supervision;
  outC->_L222 = kcg_true;
  outC->_L221 = M_MODE_Full_Supervision;
  outC->_L220.compatibleModeAndLevel = kcg_true;
  outC->_L220.level = M_LEVEL_Level_0;
  outC->_L220.newLevel = kcg_true;
  outC->_L220.Mode = M_MODE_Full_Supervision;
  outC->_L220.newMode = kcg_true;
  outC->_L219 = kcg_true;
  outC->_L218 = kcg_true;
  outC->_L217 = kcg_true;
  outC->_L214 = kcg_true;
  outC->_L216 = kcg_true;
  outC->_L209 = kcg_true;
  outC->_L212 = kcg_true;
  outC->_L213 = kcg_true;
  outC->_L194.valid = kcg_true;
  outC->_L194.messageSource = msrc_undefined_Common_Types_Pkg;
  outC->_L194.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L194.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L194.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L194.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L194.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L194.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L194.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L194.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L194.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L194.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L194.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L194.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L194.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L194.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L194.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L194.p42.valid = kcg_true;
  outC->_L194.p42.q_dir = Q_DIR_Reverse;
  outC->_L194.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L194.p42.nid_c = kcg_lit_int32(0);
  outC->_L194.p42.nid_rbc = kcg_lit_int32(0);
  outC->_L194.p42.nid_radio = kcg_lit_int64(0);
  outC->_L194.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L194.p45.valid = kcg_true;
  outC->_L194.p45.q_dir = Q_DIR_Reverse;
  outC->_L194.p45.nid_mn = kcg_lit_int32(0);
  outC->_L194.sendingRBC.valid = kcg_true;
  outC->_L194.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L194.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L194.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L187 = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L188 = kcg_lit_int64(0);
  outC->_L189 = kcg_lit_int32(0);
  outC->_L190 = kcg_lit_int32(0);
  outC->_L191 = Q_RBC_Terminate_communication_session;
  outC->_L192 = Q_DIR_Reverse;
  outC->_L193 = kcg_true;
  outC->_L154.valid = kcg_true;
  outC->_L154.messageSource = msrc_undefined_Common_Types_Pkg;
  outC->_L154.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L154.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L154.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L154.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L154.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L154.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L154.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L154.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L154.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L154.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L154.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L154.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L154.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L154.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L154.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L154.p42.valid = kcg_true;
  outC->_L154.p42.q_dir = Q_DIR_Reverse;
  outC->_L154.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L154.p42.nid_c = kcg_lit_int32(0);
  outC->_L154.p42.nid_rbc = kcg_lit_int32(0);
  outC->_L154.p42.nid_radio = kcg_lit_int64(0);
  outC->_L154.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L154.p45.valid = kcg_true;
  outC->_L154.p45.q_dir = Q_DIR_Reverse;
  outC->_L154.p45.nid_mn = kcg_lit_int32(0);
  outC->_L154.sendingRBC.valid = kcg_true;
  outC->_L154.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L154.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L154.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L153.valid = kcg_true;
  outC->_L153.q_dir = Q_DIR_Reverse;
  outC->_L153.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L153.nid_c = kcg_lit_int32(0);
  outC->_L153.nid_rbc = kcg_lit_int32(0);
  outC->_L153.nid_radio = kcg_lit_int64(0);
  outC->_L153.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L151.valid = kcg_true;
  outC->_L151.q_dir = Q_DIR_Reverse;
  outC->_L151.nid_mn = kcg_lit_int32(0);
  outC->_L149 = Q_DIR_Reverse;
  outC->_L147.valid = kcg_true;
  outC->_L147.q_dir = Q_DIR_Reverse;
  outC->_L147.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L147.nid_c = kcg_lit_int32(0);
  outC->_L147.nid_rbc = kcg_lit_int32(0);
  outC->_L147.nid_radio = kcg_lit_int64(0);
  outC->_L147.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L131 = kcg_true;
  outC->_L130 = kcg_true;
  outC->_L128 = kcg_true;
  outC->_L97.valid = kcg_true;
  outC->_L97.deskOpen = kcg_true;
  outC->_L97.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L97.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L96 = kcg_true;
  outC->_L91 = kcg_true;
  outC->_L86 = kcg_true;
  outC->_L85 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L84.valid = kcg_true;
  outC->_L84.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L84.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L84.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L84.nid_mn = kcg_lit_int32(0);
  outC->_L83 = kcg_true;
  outC->_L82 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L71.registration.valid = kcg_true;
  outC->_L71.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L71.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L71.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L71.registration.nid_mn = kcg_lit_int32(0);
  outC->_L71.connection.valid = kcg_true;
  outC->_L71.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L71.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L71.connection.nid_radio = kcg_lit_int64(0);
  outC->_L71.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L71.connection.connectionLost = kcg_true;
  outC->_L71.connection.isInRadioHole = kcg_true;
  outC->_L71.session.valid = kcg_true;
  outC->_L71.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L71.session.nid_c = kcg_lit_int32(0);
  outC->_L71.session.nid_rbc = kcg_lit_int32(0);
  outC->_L71.session.nid_radio = kcg_lit_int64(0);
  outC->_L70.valid = kcg_true;
  outC->_L70.messageSource = msrc_undefined_Common_Types_Pkg;
  outC->_L70.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L70.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L70.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L70.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L70.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L70.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L70.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L70.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L70.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L70.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L70.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L70.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L70.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L70.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L70.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L70.p42.valid = kcg_true;
  outC->_L70.p42.q_dir = Q_DIR_Reverse;
  outC->_L70.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L70.p42.nid_c = kcg_lit_int32(0);
  outC->_L70.p42.nid_rbc = kcg_lit_int32(0);
  outC->_L70.p42.nid_radio = kcg_lit_int64(0);
  outC->_L70.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L70.p45.valid = kcg_true;
  outC->_L70.p45.q_dir = Q_DIR_Reverse;
  outC->_L70.p45.nid_mn = kcg_lit_int32(0);
  outC->_L70.sendingRBC.valid = kcg_true;
  outC->_L70.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L70.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L70.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L69 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L65.radioDevice = kcg_lit_int32(0);
  outC->_L65.receivedSystemTime = kcg_lit_int32(0);
  outC->_L65.nid_message = kcg_lit_int32(0);
  outC->_L65.t_train = kcg_lit_int32(0);
  outC->_L65.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L65.nid_lrbg = kcg_lit_int32(0);
  outC->_L65.t_train_reference = kcg_lit_int32(0);
  outC->_L65.nid_em = kcg_lit_int32(0);
  outC->_L65.q_scale = Q_SCALE_10_cm_scale;
  outC->_L65.d_sr = kcg_lit_int32(0);
  outC->_L65.t_sh_rqst = kcg_lit_int32(0);
  outC->_L65.d_ref = kcg_lit_int32(0);
  outC->_L65.q_dir = Q_DIR_Reverse;
  outC->_L65.d_emergencystop = kcg_lit_int32(0);
  outC->_L65.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L63 = msrc_undefined_Common_Types_Pkg;
  outC->_L61.valid = kcg_true;
  outC->_L61.messageSource = msrc_undefined_Common_Types_Pkg;
  outC->_L61.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L61.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L61.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L61.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L61.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L61.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L61.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L61.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L61.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L61.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L61.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L61.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L61.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L61.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L61.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L61.p42.valid = kcg_true;
  outC->_L61.p42.q_dir = Q_DIR_Reverse;
  outC->_L61.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L61.p42.nid_c = kcg_lit_int32(0);
  outC->_L61.p42.nid_rbc = kcg_lit_int32(0);
  outC->_L61.p42.nid_radio = kcg_lit_int64(0);
  outC->_L61.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L61.p45.valid = kcg_true;
  outC->_L61.p45.q_dir = Q_DIR_Reverse;
  outC->_L61.p45.nid_mn = kcg_lit_int32(0);
  outC->_L61.sendingRBC.valid = kcg_true;
  outC->_L61.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L61.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L61.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L50 = kcg_lit_int32(0);
  outC->_L49 = Q_DIR_Reverse;
  outC->_L47.valid = kcg_true;
  outC->_L47.q_dir = Q_DIR_Reverse;
  outC->_L47.nid_mn = kcg_lit_int32(0);
  outC->_L40.valid = kcg_true;
  outC->_L40.q_dir = Q_DIR_Reverse;
  outC->_L40.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L40.nid_c = kcg_lit_int32(0);
  outC->_L40.nid_rbc = kcg_lit_int32(0);
  outC->_L40.nid_radio = kcg_lit_int64(0);
  outC->_L40.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L39.radioDevice = kcg_lit_int32(0);
  outC->_L39.receivedSystemTime = kcg_lit_int32(0);
  outC->_L39.nid_message = kcg_lit_int32(0);
  outC->_L39.t_train = kcg_lit_int32(0);
  outC->_L39.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L39.nid_lrbg = kcg_lit_int32(0);
  outC->_L39.t_train_reference = kcg_lit_int32(0);
  outC->_L39.nid_em = kcg_lit_int32(0);
  outC->_L39.q_scale = Q_SCALE_10_cm_scale;
  outC->_L39.d_sr = kcg_lit_int32(0);
  outC->_L39.t_sh_rqst = kcg_lit_int32(0);
  outC->_L39.d_ref = kcg_lit_int32(0);
  outC->_L39.q_dir = Q_DIR_Reverse;
  outC->_L39.d_emergencystop = kcg_lit_int32(0);
  outC->_L39.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L37 = msrc_undefined_Common_Types_Pkg;
  outC->_L29.valid = kcg_true;
  outC->_L29.messageSource = msrc_undefined_Common_Types_Pkg;
  outC->_L29.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L29.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L29.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L29.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L29.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L29.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L29.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L29.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L29.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L29.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L29.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L29.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L29.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L29.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L29.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29.p42.valid = kcg_true;
  outC->_L29.p42.q_dir = Q_DIR_Reverse;
  outC->_L29.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L29.p42.nid_c = kcg_lit_int32(0);
  outC->_L29.p42.nid_rbc = kcg_lit_int32(0);
  outC->_L29.p42.nid_radio = kcg_lit_int64(0);
  outC->_L29.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L29.p45.valid = kcg_true;
  outC->_L29.p45.q_dir = Q_DIR_Reverse;
  outC->_L29.p45.nid_mn = kcg_lit_int32(0);
  outC->_L29.sendingRBC.valid = kcg_true;
  outC->_L29.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L29.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L29.sendingRBC.device_id = kcg_lit_int32(0);
  outC->Mode_and_Level_is_valid_from_Mode_and_Level_Management = kcg_true;
  outC->statusLevel_from_DMI = kcg_true;
  outC->M_LEVEL_Level1 = kcg_true;
  outC->M_LEVEL_Level0 = kcg_true;
  outC->M_LEVEL_Level3 = kcg_true;
  outC->M_LEVEL_Level2 = kcg_true;
  outC->M_LEVEL_Level_NTC = kcg_true;
  outC->M_Mode_Stand_By = kcg_true;
  outC->statusAcknowledgementofTrainData_from_RBC = kcg_true;
  outC->statusAcknowledgementPositionReport_from_RBC = kcg_true;
  outC->statusStart_from_DMI = kcg_true;
  outC->statusTrainNumbersecondvalidation_from_DMI = kcg_true;
  outC->statusTrainData_from_DMI = kcg_true;
  outC->statusDriverID_from_DMI = kcg_true;
  outC->statusRBCSessionEstablishmen_from_MoRC = kcg_true;
  outC->statusMobileRegistrated_from_MoRC = kcg_true;
  outC->statusValid_position_from_Positon_Calculation = kcg_true;
  outC->statusTrainNumberfirstvalidation_from_DMI = kcg_true;
  outC->statusCabOpen_from_TIU = kcg_true;
  outC->SM1_fired = _234_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _234_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_NP_SM1;
  outC->SM1_state_sel = SSM_st_NP_SM1;
  outC->requestDriverID_to_DMI = kcg_true;
  outC->requestStartRBCSession_to_MoRC = kcg_true;
  outC->requestStartMobileTerminalRegistration_to_MoRC = kcg_true;
  outC->power_Up_to_MoRC = kcg_true;
  outC->requestTrainData_to_DMI = kcg_true;
  outC->requestLevelStaus_from_Level_Management = kcg_true;
  outC->power_Off_to_MoRC = kcg_true;
  outC->requestSoM_to_DMI = kcg_true;
  outC->requestTrainNumber_to_DMI = kcg_true;
  outC->requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_true;
  outC->tr_1_clock_Awakness_of_Train_SM1 = kcg_true;
  outC->tr_1_clock_NP_SM1 = kcg_true;
  outC->_L2_SoM_NTC_SN_SM1.compatibleModeAndLevel = kcg_true;
  outC->_L2_SoM_NTC_SN_SM1.level = M_LEVEL_Level_0;
  outC->_L2_SoM_NTC_SN_SM1.newLevel = kcg_true;
  outC->_L2_SoM_NTC_SN_SM1.Mode = M_MODE_Full_Supervision;
  outC->_L2_SoM_NTC_SN_SM1.newMode = kcg_true;
  outC->_L3_SoM_NTC_SN_SM1 = kcg_true;
  outC->_L5_SoM_L2_3_FS_SR_OS_LS_SH_SM1 = kcg_true;
  outC->_L4_SoM_L2_3_FS_SR_OS_LS_SH_SM1 = kcg_true;
  outC->_L9_SoM_L2_3_FS_SR_OS_LS_SH_SM1 = kcg_true;
  outC->_L10_SoM_L2_3_FS_SR_OS_LS_SH_SM1.compatibleModeAndLevel = kcg_true;
  outC->_L10_SoM_L2_3_FS_SR_OS_LS_SH_SM1.level = M_LEVEL_Level_0;
  outC->_L10_SoM_L2_3_FS_SR_OS_LS_SH_SM1.newLevel = kcg_true;
  outC->_L10_SoM_L2_3_FS_SR_OS_LS_SH_SM1.Mode = M_MODE_Full_Supervision;
  outC->_L10_SoM_L2_3_FS_SR_OS_LS_SH_SM1.newMode = kcg_true;
  outC->_L12_SoM_L2_3_FS_SR_OS_LS_SH_SM1 = kcg_true;
  outC->_L13_SoM_L2_3_FS_SR_OS_LS_SH_SM1 = kcg_true;
  outC->tr_1_clock_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1 = kcg_true;
  outC->tr_1_clock_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 =
    kcg_true;
  outC->tr_3_clock_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 =
    kcg_true;
  outC->tr_2_clock_first_Validation_for_Train_Number_SM3_Awakness_of_Train_SM1 =
    kcg_true;
  outC->tr_1_clock_request_Level_SM3_Awakness_of_Train_SM1 = kcg_true;
  outC->tr_1_clock_Waiting_for_RBC_Establishment_SM3_Awakness_of_Train_SM1 =
    kcg_true;
  outC->tr_1_clock_Acknowlege_of_Position_from_RBC_SM3_Awakness_of_Train_SM1 =
    kcg_true;
  outC->tr_1_clock_Validation_of_Train_Data_from_Driver_SM3_Awakness_of_Train_SM1 =
    kcg_true;
  outC->tr_1_clock_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 =
    kcg_true;
  outC->tr_2_clock_Second_Validation_of_Train_Number_from_Driver_SM3_Awakness_of_Train_SM1 =
    kcg_true;
  outC->tr_1_clock_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM3_Awakness_of_Train_SM1 =
    kcg_true;
  outC->tr_1_clock_SB_SM3_Awakness_of_Train_SM1 = kcg_true;
  outC->tr_1_clock_Waiting_for_Mobile_terminal_registration_SM3_Awakness_of_Train_SM1 =
    kcg_true;
  outC->tr_1_clock_Waiting_for_driver_selection_E10_E11_or_E12_SM3_Awakness_of_Train_SM1 =
    kcg_true;
  outC->Awakness_of_Train_weakb_clock_SM1 = kcg_true;
  outC->_2_SM3_clock_Awakness_of_Train_SM1 =
    SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1;
  outC->SM3_clock_Awakness_of_Train_SM1 =
    SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1;
  outC->SM3_state_sel_Awakness_of_Train_SM1 =
    SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1;
  outC->SM3_state_act_Awakness_of_Train_SM1 =
    SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1;
  outC->SM3_fired_strong_Awakness_of_Train_SM1 =
    SSM_TR_no_trans_SM3_Awakness_of_Train_SM1;
  outC->SM3_fired_Awakness_of_Train_SM1 =
    SSM_TR_no_trans_SM3_Awakness_of_Train_SM1;
  outC->_L2_Awakness_of_Train_SM1 = kcg_true;
  outC->_L3_Awakness_of_Train_SM1 = kcg_true;
  outC->_L5_Awakness_of_Train_SM1 = kcg_true;
  outC->_L1_NP_SM1 = kcg_true;
  outC->_L3_NP_SM1 = kcg_true;
  outC->_L2_NP_SM1 = kcg_true;
  outC->SM3_state_nxt_Awakness_of_Train_SM1 =
    SSM_st_Waition_for_Driver_ID_SM3_Awakness_of_Train_SM1;
  outC->SM3_reset_act_Awakness_of_Train_SM1 = kcg_true;
  outC->SM3_reset_nxt_Awakness_of_Train_SM1 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->fby_1.idx = 0;
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->fby_1.items[idx1] = kcg_true;
  }
  outC->fby_2.idx = 0;
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->fby_2.items[idx2] = kcg_true;
  }
  outC->start_ack_to_TIU = kcg_true;
  outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management = kcg_true;
  outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management = kcg_true;
  outC->powerOff_to_MoRC = kcg_true;
  outC->statusstartofmissionongoing_to_MoRC = kcg_true;
  outC->powerUp_to_MoRC = kcg_true;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.valid =
    kcg_true;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.messageSource =
    msrc_undefined_Common_Types_Pkg;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.valid =
    kcg_true;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.q_dir =
    Q_DIR_Reverse;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.nid_c =
    kcg_lit_int32(0);
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.nid_rbc =
    kcg_lit_int32(0);
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.nid_radio =
    kcg_lit_int64(0);
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.valid =
    kcg_true;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.q_dir =
    Q_DIR_Reverse;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.nid_mn =
    kcg_lit_int32(0);
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.sendingRBC.valid =
    kcg_true;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->DMI_Entry_Request_to_DMI.valid = kcg_true;
  outC->DMI_Entry_Request_to_DMI.system_clock = kcg_lit_int32(0);
  outC->DMI_Entry_Request_to_DMI.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  /* SM1:SoM_L2_3_FS_SR_OS_LS_SH:_L4=(SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN#1)/ */
  SoM_SR_FS_OS_LS_SH_SN_UN_init_SoMProcedure_Pkg(
    &outC->Context_SoM_SR_FS_OS_LS_SH_SN_UN_1);
  /* SM1:SoM_NTC_SN:_L3=(SoMProcedure_Pkg::SoM_NTC_SN#1)/ */
  SoM_NTC_SN_init_SoMProcedure_Pkg(&outC->Context_SoM_NTC_SN_1);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_NP_SM1;
  outC->sendingPositionReport_to_RBC = kcg_true;
  outC->sendingTrainData_to_RBC = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Master_Procedure_reset_ManageProcedure_Pkg(
  outC_Master_Procedure_ManageProcedure_Pkg *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  /* SM1:SoM_L2_3_FS_SR_OS_LS_SH:_L4=(SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN#1)/ */
  SoM_SR_FS_OS_LS_SH_SN_UN_reset_SoMProcedure_Pkg(
    &outC->Context_SoM_SR_FS_OS_LS_SH_SN_UN_1);
  /* SM1:SoM_NTC_SN:_L3=(SoMProcedure_Pkg::SoM_NTC_SN#1)/ */
  SoM_NTC_SN_reset_SoMProcedure_Pkg(&outC->Context_SoM_NTC_SN_1);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_NP_SM1;
  outC->sendingPositionReport_to_RBC = kcg_true;
  outC->sendingTrainData_to_RBC = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Master_Procedure_ManageProcedure_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

