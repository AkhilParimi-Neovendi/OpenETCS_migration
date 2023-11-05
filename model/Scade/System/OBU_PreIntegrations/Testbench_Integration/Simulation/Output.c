/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output.h"

/* Output/ */
void Output(
  /* next_level/ */
  M_LEVEL next_level,
  /* needsAckFromDriver/ */
  kcg_bool needsAckFromDriver,
  /* announcedLevelTransition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *announcedLevelTransition,
  /* service_brake_from_level/ */
  kcg_bool service_brake_from_level,
  /* Connection_to_RBC_Requested/ */
  kcg_bool Connection_to_RBC_Requested,
  /* PositionReportNeeded/ */
  kcg_bool PositionReportNeeded,
  /* isNewLevel/ */
  kcg_bool isNewLevel,
  /* isAvailableForUse/ */
  kcg_bool isAvailableForUse,
  /* currentMode/ */
  T_Mode_Level_And_Mode_Types_Pkg currentMode,
  /* EB_Requested_From_Mode/ */
  kcg_bool EB_Requested_From_Mode,
  /* Service_Brake_Command_From_Mode/ */
  kcg_bool Service_Brake_Command_From_Mode,
  /* Data_To_DMI_From_Mode/ */
  T_Data_To_DMI_Level_And_Mode_Types_Pkg *Data_To_DMI_From_Mode,
  /* Data_To_BG_Management_From_Mode/ */
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management_From_Mode,
  /* Level_Mode_Compatible/ */
  kcg_bool Level_Mode_Compatible,
  outC_Output *outC)
{
  outC->_L10 = Level_Mode_Compatible;
  outC->_L2 = needsAckFromDriver;
  kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg(
    &outC->_L3,
    Data_To_DMI_From_Mode);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L30,
    announcedLevelTransition);
  outC->_L37 = isAvailableForUse;
  /* _L43=(OutputManagement::Output_To_DMI#1)/ */
  Output_To_DMI_OutputManagement(
    outC->_L10,
    outC->_L2,
    &outC->_L3,
    &outC->_L30,
    outC->_L37,
    &outC->Context_Output_To_DMI_1);
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &outC->_L43,
    &outC->Context_Output_To_DMI_1.announcedLevel);
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->_L44,
    &outC->Context_Output_To_DMI_1.Data_To_DMI_Ack);
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->Data_To_DMI_Ack,
    &outC->_L44);
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &outC->announcedLevel,
    &outC->_L43);
  outC->_L36 = isNewLevel;
  outC->_L34 = PositionReportNeeded;
  outC->_L33 = Connection_to_RBC_Requested;
  outC->_L24 = Service_Brake_Command_From_Mode;
  outC->_L22 = service_brake_from_level;
  outC->_L25 = outC->_L22 | outC->_L24;
  outC->_L23 = EB_Requested_From_Mode;
  outC->EB_Requested = outC->_L23;
  outC->Service_Brake_Command = outC->_L25;
  outC->_L19 = next_level;
  outC->_L20 = currentMode;
  outC->_L21 = Level_Mode_Compatible;
  /* _L18=(OutputManagement::Output_Mode_Level_To_Use#1)/ */
  Output_Mode_Level_To_Use_OutputManagement(
    outC->_L19,
    outC->_L20,
    outC->_L21,
    outC->_L36,
    &outC->Context_Output_Mode_Level_To_Use_1);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L18,
    &outC->Context_Output_Mode_Level_To_Use_1.Compatible_Mode_And_Level);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->Compatible_Mode_And_Level,
    &outC->_L18);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->_L17,
    Data_To_BG_Management_From_Mode);
  /* _L7=(OutputManagement::Output_To_BG_Management#1)/ */
  Output_To_BG_Management_OutputManagement(
    &outC->_L17,
    outC->_L33,
    outC->_L34,
    &outC->Context_Output_To_BG_Management_1);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->_L7,
    &outC->Context_Output_To_BG_Management_1.Data_To_BG_Management);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->Data_To_BG_Management,
    &outC->_L7);
}

#ifndef KCG_USER_DEFINED_INIT
void Output_init(outC_Output *outC)
{
  outC->_L44.valid = kcg_true;
  outC->_L44.whichMode = M_MODE_Full_Supervision;
  outC->_L44.SH_Req_RefusedByRBC = kcg_true;
  outC->_L44.LevelNeedsAck = kcg_true;
  outC->_L43.LevelTransition.is_set = kcg_true;
  outC->_L43.LevelTransition.transition.level = M_LEVEL_Level_0;
  outC->_L43.LevelTransition.transition.position = kcg_lit_int32(0);
  outC->_L43.LevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L43.LevelTransition.transition.immediateAck = kcg_true;
  outC->_L43.LevelTransition.transition.AckLength = kcg_lit_int32(0);
  outC->_L43.LevelTransition.LRBG = kcg_lit_int32(0);
  outC->_L43.LevelTransition.referenceLocation = kcg_lit_int32(0);
  outC->_L43.IsAvailableForUse = kcg_true;
  outC->_L37 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L30.is_set = kcg_true;
  outC->_L30.transition.level = M_LEVEL_Level_0;
  outC->_L30.transition.position = kcg_lit_int32(0);
  outC->_L30.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L30.transition.immediateAck = kcg_true;
  outC->_L30.transition.AckLength = kcg_lit_int32(0);
  outC->_L30.LRBG = kcg_lit_int32(0);
  outC->_L30.referenceLocation = kcg_lit_int32(0);
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20 = NP_Level_And_Mode_Types_Pkg;
  outC->_L19 = M_LEVEL_Level_0;
  outC->_L18.compatibleModeAndLevel = kcg_true;
  outC->_L18.level = M_LEVEL_Level_0;
  outC->_L18.newLevel = kcg_true;
  outC->_L18.Mode = M_MODE_Full_Supervision;
  outC->_L18.newMode = kcg_true;
  outC->_L17.EoM_Procedure_req = kcg_true;
  outC->_L17.Clean_BG_List_SH_Area = kcg_true;
  outC->_L17.MA_Req = kcg_true;
  outC->_L17.Req_for_SH_from_Driver = kcg_true;
  outC->_L17.Connection_to_RBC_req = kcg_true;
  outC->_L17.Position_Repport_Needed = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3.Ack_LS = kcg_true;
  outC->_L3.Ack_OS = kcg_true;
  outC->_L3.Ack_RV = kcg_true;
  outC->_L3.Ack_SH = kcg_true;
  outC->_L3.Ack_SN = kcg_true;
  outC->_L3.Ack_SR = kcg_true;
  outC->_L3.Ack_TR = kcg_true;
  outC->_L3.Ack_UN = kcg_true;
  outC->_L3.SH_Refused_By_RBC = kcg_true;
  outC->_L7.EoM_Procedure_req = kcg_true;
  outC->_L7.Clean_BG_List_SH_Area = kcg_true;
  outC->_L7.MA_Req = kcg_true;
  outC->_L7.Req_for_SH_from_Driver = kcg_true;
  outC->_L7.Connection_to_RBC_req = kcg_true;
  outC->_L7.Position_Repport_Needed = kcg_true;
  outC->_L10 = kcg_true;
  outC->Data_To_DMI_Ack.valid = kcg_true;
  outC->Data_To_DMI_Ack.whichMode = M_MODE_Full_Supervision;
  outC->Data_To_DMI_Ack.SH_Req_RefusedByRBC = kcg_true;
  outC->Data_To_DMI_Ack.LevelNeedsAck = kcg_true;
  outC->announcedLevel.LevelTransition.is_set = kcg_true;
  outC->announcedLevel.LevelTransition.transition.level = M_LEVEL_Level_0;
  outC->announcedLevel.LevelTransition.transition.position = kcg_lit_int32(0);
  outC->announcedLevel.LevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->announcedLevel.LevelTransition.transition.immediateAck = kcg_true;
  outC->announcedLevel.LevelTransition.transition.AckLength = kcg_lit_int32(0);
  outC->announcedLevel.LevelTransition.LRBG = kcg_lit_int32(0);
  outC->announcedLevel.LevelTransition.referenceLocation = kcg_lit_int32(0);
  outC->announcedLevel.IsAvailableForUse = kcg_true;
  outC->EB_Requested = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  outC->Data_To_BG_Management.EoM_Procedure_req = kcg_true;
  outC->Data_To_BG_Management.Clean_BG_List_SH_Area = kcg_true;
  outC->Data_To_BG_Management.MA_Req = kcg_true;
  outC->Data_To_BG_Management.Req_for_SH_from_Driver = kcg_true;
  outC->Data_To_BG_Management.Connection_to_RBC_req = kcg_true;
  outC->Data_To_BG_Management.Position_Repport_Needed = kcg_true;
  outC->Compatible_Mode_And_Level.compatibleModeAndLevel = kcg_true;
  outC->Compatible_Mode_And_Level.level = M_LEVEL_Level_0;
  outC->Compatible_Mode_And_Level.newLevel = kcg_true;
  outC->Compatible_Mode_And_Level.Mode = M_MODE_Full_Supervision;
  outC->Compatible_Mode_And_Level.newMode = kcg_true;
  /* _L7=(OutputManagement::Output_To_BG_Management#1)/ */
  Output_To_BG_Management_init_OutputManagement(
    &outC->Context_Output_To_BG_Management_1);
  /* _L18=(OutputManagement::Output_Mode_Level_To_Use#1)/ */
  Output_Mode_Level_To_Use_init_OutputManagement(
    &outC->Context_Output_Mode_Level_To_Use_1);
  /* _L43=(OutputManagement::Output_To_DMI#1)/ */
  Output_To_DMI_init_OutputManagement(&outC->Context_Output_To_DMI_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Output_reset(outC_Output *outC)
{
  /* _L7=(OutputManagement::Output_To_BG_Management#1)/ */
  Output_To_BG_Management_reset_OutputManagement(
    &outC->Context_Output_To_BG_Management_1);
  /* _L18=(OutputManagement::Output_Mode_Level_To_Use#1)/ */
  Output_Mode_Level_To_Use_reset_OutputManagement(
    &outC->Context_Output_Mode_Level_To_Use_1);
  /* _L43=(OutputManagement::Output_To_DMI#1)/ */
  Output_To_DMI_reset_OutputManagement(&outC->Context_Output_To_DMI_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_Output(SV_Output *SV, outC_Output *outC)
{
  kcg_save_SV_Output_To_DMI_OutputManagement(
    &SV->Context_Output_To_DMI_1,
    &outC->Context_Output_To_DMI_1);
  kcg_save_SV_Output_Mode_Level_To_Use_OutputManagement(
    &SV->Context_Output_Mode_Level_To_Use_1,
    &outC->Context_Output_Mode_Level_To_Use_1);
}

void kcg_load_SV_Output(outC_Output *outC, SV_Output *SV)
{
  kcg_load_SV_Output_To_DMI_OutputManagement(
    &outC->Context_Output_To_DMI_1,
    &SV->Context_Output_To_DMI_1);
  kcg_load_SV_Output_Mode_Level_To_Use_OutputManagement(
    &outC->Context_Output_Mode_Level_To_Use_1,
    &SV->Context_Output_Mode_Level_To_Use_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Output.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

