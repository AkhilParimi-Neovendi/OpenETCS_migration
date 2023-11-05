/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GUI_Settings_Toolbox_Functions.h"

/* Toolbox::Functions::GUI_Settings/ */
void GUI_Settings_Toolbox_Functions(
  /* mode/ */
  kcg_int32 mode,
  /* level/ */
  kcg_int32 level,
  /* mobileHWStatus/ */
  kcg_int32 mobileHWStatus,
  /* directionIn/ */
  kcg_int32 directionIn,
  /* cabStatusIin/ */
  kcg_bool cabStatusIin,
  outC_GUI_Settings_Toolbox_Functions *outC)
{
  outC->_L57 = conn_no_connection_API_RadioCommunication_Pkg;
  outC->_L53 = conn_no_connection_API_RadioCommunication_Pkg;
  outC->_L50 = conn_no_connection_API_RadioCommunication_Pkg;
  outC->_L49 = conn_ConnectionUp_API_RadioCommunication_Pkg;
  outC->_L51 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L54 = mobileHWStatus;
  /* _L55= */
  switch (outC->_L54) {
    case kcg_lit_int32(1) :
      outC->_L55 = outC->_L53;
      break;
    case kcg_lit_int32(2) :
      outC->_L55 = outC->_L50;
      break;
    case kcg_lit_int32(3) :
      outC->_L55 = outC->_L57;
      break;
    case kcg_lit_int32(4) :
      outC->_L55 = outC->_L49;
      break;
    default :
      outC->_L55 = outC->_L51;
      break;
  }
  outC->apiConnectionStatus = outC->_L55;
  outC->_L41 = both_desks_are_closed_TIU_Types_Pkg;
  outC->_L40 = desk_A_is_open_TIU_Types_Pkg;
  outC->_L31 = cabStatusIin;
  /* _L39= */
  if (outC->_L31) {
    outC->_L39 = outC->_L40;
  }
  else {
    outC->_L39 = outC->_L41;
  }
  outC->cabStatusOut = outC->_L39;
  outC->_L30 = direction_controller_in_backward_TIU_Types_Pkg;
  outC->_L29 = direction_controller_in_forward_TIU_Types_Pkg;
  outC->_L28 = direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L27 = direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L25 = directionIn;
  /* _L26= */
  switch (outC->_L25) {
    case kcg_lit_int32(1) :
      outC->_L26 = outC->_L27;
      break;
    case kcg_lit_int32(2) :
      outC->_L26 = outC->_L29;
      break;
    case kcg_lit_int32(3) :
      outC->_L26 = outC->_L30;
      break;
    default :
      outC->_L26 = outC->_L28;
      break;
  }
  outC->directionOut = outC->_L26;
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &outC->_L24,
    (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_notRegistered_MoRC_Pck);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &outC->_L23,
    (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Disconnected_MoRC_Pck);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &outC->_L22,
    (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Connected_MoRC_Pck);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &outC->_L21,
    (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_notRegistered_MoRC_Pck);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &outC->_L20,
    (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Registered_MoRC_Pck);
  outC->_L19 = mobileHWStatus;
  /* _L18= */
  switch (outC->_L19) {
    case kcg_lit_int32(0) :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(&outC->_L18, &outC->_L21);
      break;
    case kcg_lit_int32(1) :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(&outC->_L18, &outC->_L20);
      break;
    case kcg_lit_int32(2) :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(&outC->_L18, &outC->_L23);
      break;
    case kcg_lit_int32(3) :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(&outC->_L18, &outC->_L22);
      break;
    default :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(&outC->_L18, &outC->_L24);
      break;
  }
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(&outC->mobileHWStatusOut, &outC->_L18);
  outC->_L17 = M_LEVEL_Level_0;
  outC->_L16 = M_LEVEL_Level_3;
  outC->_L15 = M_LEVEL_Level_2;
  outC->_L14 = M_LEVEL_Level_1;
  outC->_L13 = M_LEVEL_Level_NTC_specified_by_NID_NTC;
  outC->_L12 = M_LEVEL_Level_0;
  outC->_L11 = level;
  /* _L10= */
  switch (outC->_L11) {
    case kcg_lit_int32(0) :
      outC->_L10 = outC->_L12;
      break;
    case kcg_lit_int32(1) :
      outC->_L10 = outC->_L13;
      break;
    case kcg_lit_int32(2) :
      outC->_L10 = outC->_L14;
      break;
    case kcg_lit_int32(3) :
      outC->_L10 = outC->_L15;
      break;
    case kcg_lit_int32(4) :
      outC->_L10 = outC->_L16;
      break;
    default :
      outC->_L10 = outC->_L17;
      break;
  }
  outC->levelOut = outC->_L10;
  outC->_L9 = M_MODE_System_Failure;
  outC->_L8 = M_MODE_Sleeping;
  outC->_L7 = M_MODE_Staff_Responsible;
  outC->_L6 = M_MODE_Stand_By;
  outC->_L5 = M_MODE_No_Power;
  outC->_L4 = M_MODE_Limited_Supervision;
  outC->_L3 = M_MODE_Full_Supervision;
  outC->_L2 = mode;
  /* _L1= */
  switch (outC->_L2) {
    case kcg_lit_int32(0) :
      outC->_L1 = outC->_L3;
      break;
    case kcg_lit_int32(1) :
      outC->_L1 = outC->_L4;
      break;
    case kcg_lit_int32(2) :
      outC->_L1 = outC->_L5;
      break;
    case kcg_lit_int32(3) :
      outC->_L1 = outC->_L6;
      break;
    case kcg_lit_int32(4) :
      outC->_L1 = outC->_L8;
      break;
    case kcg_lit_int32(5) :
      outC->_L1 = outC->_L7;
      break;
    default :
      outC->_L1 = outC->_L9;
      break;
  }
  outC->modeOut = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void GUI_Settings_init_Toolbox_Functions(
  outC_GUI_Settings_Toolbox_Functions *outC)
{
  outC->_L57 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L49 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L50 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L51 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L53 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L54 = kcg_lit_int32(0);
  outC->_L55 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L41 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L40 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L39 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L31 = kcg_true;
  outC->_L30 = direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L29 = direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L28 = direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L27 = direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L26 = direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L25 = kcg_lit_int32(0);
  outC->_L24.valid = kcg_true;
  outC->_L24.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->_L24.settingUpConnectionHasFailed = kcg_true;
  outC->_L24.connectionLost = kcg_true;
  outC->_L23.valid = kcg_true;
  outC->_L23.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->_L23.settingUpConnectionHasFailed = kcg_true;
  outC->_L23.connectionLost = kcg_true;
  outC->_L22.valid = kcg_true;
  outC->_L22.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->_L22.settingUpConnectionHasFailed = kcg_true;
  outC->_L22.connectionLost = kcg_true;
  outC->_L21.valid = kcg_true;
  outC->_L21.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->_L21.settingUpConnectionHasFailed = kcg_true;
  outC->_L21.connectionLost = kcg_true;
  outC->_L20.valid = kcg_true;
  outC->_L20.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->_L20.settingUpConnectionHasFailed = kcg_true;
  outC->_L20.connectionLost = kcg_true;
  outC->_L19 = kcg_lit_int32(0);
  outC->_L18.valid = kcg_true;
  outC->_L18.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->_L18.settingUpConnectionHasFailed = kcg_true;
  outC->_L18.connectionLost = kcg_true;
  outC->_L17 = M_LEVEL_Level_0;
  outC->_L16 = M_LEVEL_Level_0;
  outC->_L15 = M_LEVEL_Level_0;
  outC->_L14 = M_LEVEL_Level_0;
  outC->_L13 = M_LEVEL_Level_0;
  outC->_L12 = M_LEVEL_Level_0;
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = M_LEVEL_Level_0;
  outC->_L9 = M_MODE_Full_Supervision;
  outC->_L8 = M_MODE_Full_Supervision;
  outC->_L7 = M_MODE_Full_Supervision;
  outC->_L6 = M_MODE_Full_Supervision;
  outC->_L5 = M_MODE_Full_Supervision;
  outC->_L4 = M_MODE_Full_Supervision;
  outC->_L3 = M_MODE_Full_Supervision;
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = M_MODE_Full_Supervision;
  outC->apiConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->cabStatusOut = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->directionOut = direction_controller_in_neutral_TIU_Types_Pkg;
  outC->mobileHWStatusOut.valid = kcg_true;
  outC->mobileHWStatusOut.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->mobileHWStatusOut.settingUpConnectionHasFailed = kcg_true;
  outC->mobileHWStatusOut.connectionLost = kcg_true;
  outC->levelOut = M_LEVEL_Level_0;
  outC->modeOut = M_MODE_Full_Supervision;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GUI_Settings_reset_Toolbox_Functions(
  outC_GUI_Settings_Toolbox_Functions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GUI_Settings_Toolbox_Functions.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

