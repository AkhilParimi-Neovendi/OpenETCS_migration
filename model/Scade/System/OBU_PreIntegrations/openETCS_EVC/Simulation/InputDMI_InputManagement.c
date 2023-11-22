/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputDMI_InputManagement.h"

/* InputManagement::InputDMI/ */
void InputDMI_InputManagement(
  /* Data_From_DMI/ */
  DMI_To_Modes_T_DMI_Types_Pkg *Data_From_DMI,
  /* driver_level_transition1/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition1,
  outC_InputDMI_InputManagement *outC)
{
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L134,
    driver_level_transition1);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->driver_level_transition,
    &outC->_L134);
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&outC->_L16, Data_From_DMI);
  kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(
    &outC->_L59,
    &outC->_L16.DriverRequest);
  outC->_L65 = outC->_L59.ETCS_Isolated;
  outC->_L71 = outC->_L59.valid;
  outC->_L61 = outC->_L16.valid;
  outC->Loc_DMI_Msg_Valid = outC->_L61;
  outC->_L84 = outC->Loc_DMI_Msg_Valid;
  outC->_L85 = outC->_L84 & outC->_L71;
  outC->Loc_DMI_Req_Valid = outC->_L85;
  outC->_L81 = outC->Loc_DMI_Req_Valid;
  outC->_L77 = outC->_L81 & outC->_L65;
  outC->Loc_ETCS_Isolated = outC->_L77;
  outC->_L133 = outC->Loc_ETCS_Isolated;
  outC->_L66 = outC->_L59.Req_Start;
  outC->_L82 = outC->Loc_DMI_Req_Valid;
  outC->_L74 = outC->_L82 & outC->_L66;
  outC->Loc_Driver_Req_Start = outC->_L74;
  outC->_L132 = outC->Loc_Driver_Req_Start;
  outC->_L67 = outC->_L59.Req_SH;
  outC->_L80 = outC->Loc_DMI_Req_Valid;
  outC->_L76 = outC->_L80 & outC->_L67;
  outC->Loc_Driver_Req_SH = outC->_L76;
  outC->_L131 = outC->Loc_Driver_Req_SH;
  outC->_L68 = outC->_L59.Req_Override;
  outC->_L78 = outC->Loc_DMI_Req_Valid;
  outC->_L73 = outC->_L78 & outC->_L68;
  outC->Loc_Driver_Req_Override = outC->_L73;
  outC->_L130 = outC->Loc_Driver_Req_Override;
  outC->_L69 = outC->_L59.Req_NL;
  outC->_L83 = outC->Loc_DMI_Req_Valid;
  outC->_L75 = outC->_L83 & outC->_L69;
  outC->Loc_Driver_Req_NL = outC->_L75;
  outC->_L129 = outC->Loc_Driver_Req_NL;
  outC->_L70 = outC->_L59.Req_Exit_SH;
  outC->_L79 = outC->Loc_DMI_Req_Valid;
  outC->_L72 = outC->_L79 & outC->_L70;
  outC->Loc_Driver_Req_Exit_SH = outC->_L72;
  outC->_L128 = outC->Loc_Driver_Req_Exit_SH;
  kcg_copy_DMI_DriverAck_T_DMI_Types_Pkg(&outC->_L60, &outC->_L16.DriverAck);
  outC->_L63 = outC->_L60.whichMode;
  outC->Loc_Acked_Mode = outC->_L63;
  outC->_L114 = outC->Loc_Acked_Mode == M_MODE_Unfitted;
  outC->_L62 = outC->_L60.acknowledgement;
  outC->_L64 = outC->_L60.valid;
  outC->_L87 = outC->Loc_DMI_Msg_Valid;
  outC->_L86 = outC->_L87 & outC->_L64 & outC->_L62;
  outC->Loc_Ack_Mode_Valid = outC->_L86;
  outC->_L115 = outC->Loc_Ack_Mode_Valid;
  outC->_L116 = outC->_L115 & outC->_L114;
  outC->Loc_Driver_Ack_UN = outC->_L116;
  outC->_L127 = outC->Loc_Driver_Ack_UN;
  outC->_L113 = outC->Loc_Acked_Mode == M_MODE_Trip;
  outC->_L111 = outC->Loc_Ack_Mode_Valid;
  outC->_L112 = outC->_L111 & outC->_L113;
  outC->Loc_Driver_Ack_TR = outC->_L112;
  outC->_L126 = outC->Loc_Driver_Ack_TR;
  outC->_L108 = outC->Loc_Acked_Mode == M_MODE_Staff_Responsible;
  outC->_L109 = outC->Loc_Ack_Mode_Valid;
  outC->_L110 = outC->_L109 & outC->_L108;
  outC->Loc_Driver_Ack_SR = outC->_L110;
  outC->_L125 = outC->Loc_Driver_Ack_SR;
  outC->_L106 = outC->Loc_Acked_Mode == M_MODE_National_System;
  outC->_L107 = outC->Loc_Ack_Mode_Valid;
  outC->_L105 = outC->_L107 & outC->_L106;
  outC->Loc_Driver_Ack_SN = outC->_L105;
  outC->_L124 = outC->Loc_Driver_Ack_SN;
  outC->_L103 = outC->Loc_Acked_Mode == M_MODE_Shunting;
  outC->_L104 = outC->Loc_Ack_Mode_Valid;
  outC->_L102 = outC->_L104 & outC->_L103;
  outC->Loc_Driver_Ack_SH = outC->_L102;
  outC->_L123 = outC->Loc_Driver_Ack_SH;
  outC->_L101 = outC->Loc_Acked_Mode == M_MODE_Reversing;
  outC->_L100 = outC->Loc_Ack_Mode_Valid;
  outC->_L99 = outC->_L100 & outC->_L101;
  outC->Loc_Driver_Ack_RV = outC->_L99;
  outC->_L122 = outC->Loc_Driver_Ack_RV;
  outC->_L97 = outC->Loc_Acked_Mode == M_MODE_On_Sight;
  outC->_L98 = outC->Loc_Ack_Mode_Valid;
  outC->_L96 = outC->_L98 & outC->_L97;
  outC->Loc_Driver_Ack_OS = outC->_L96;
  outC->_L121 = outC->Loc_Driver_Ack_OS;
  outC->_L92 = outC->Loc_Acked_Mode == M_MODE_Limited_Supervision;
  outC->_L88 = outC->Loc_Ack_Mode_Valid;
  outC->_L91 = outC->_L88 & outC->_L92;
  outC->Loc_Driver_Ack_LS = outC->_L91;
  outC->_L120 = outC->Loc_Driver_Ack_LS;
  outC->_L119.Ack_LS = outC->_L120;
  outC->_L119.Ack_OS = outC->_L121;
  outC->_L119.Ack_RV = outC->_L122;
  outC->_L119.Ack_SH = outC->_L123;
  outC->_L119.Ack_SN = outC->_L124;
  outC->_L119.Ack_SR = outC->_L125;
  outC->_L119.Ack_TR = outC->_L126;
  outC->_L119.Ack_UN = outC->_L127;
  outC->_L119.Req_Exit_SH = outC->_L128;
  outC->_L119.Req_NL = outC->_L129;
  outC->_L119.Req_Override = outC->_L130;
  outC->_L119.Req_SH = outC->_L131;
  outC->_L119.Req_Start = outC->_L132;
  outC->_L119.ETCS_Isolated = outC->_L133;
  kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg(
    &outC->Data_From_DMI_To_Mode,
    &outC->_L119);
  outC->_L118 = outC->Loc_DMI_Msg_Valid;
  outC->_L58 = outC->_L16.LevelAck;
  outC->_L117 = outC->_L58 & outC->_L118;
  outC->Level_Ack = outC->_L117;
}

#ifndef KCG_USER_DEFINED_INIT
void InputDMI_init_InputManagement(outC_InputDMI_InputManagement *outC)
{
  outC->_L134.is_set = kcg_true;
  outC->_L134.transition.level = M_LEVEL_Level_0;
  outC->_L134.transition.position = kcg_lit_int32(0);
  outC->_L134.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L134.transition.immediateAck = kcg_true;
  outC->_L134.transition.AckLength = kcg_lit_int32(0);
  outC->_L134.LRBG = kcg_lit_int32(0);
  outC->_L134.referenceLocation = kcg_lit_int32(0);
  outC->_L133 = kcg_true;
  outC->_L132 = kcg_true;
  outC->_L131 = kcg_true;
  outC->_L130 = kcg_true;
  outC->_L129 = kcg_true;
  outC->_L128 = kcg_true;
  outC->_L127 = kcg_true;
  outC->_L126 = kcg_true;
  outC->_L125 = kcg_true;
  outC->_L124 = kcg_true;
  outC->_L123 = kcg_true;
  outC->_L122 = kcg_true;
  outC->_L121 = kcg_true;
  outC->_L120 = kcg_true;
  outC->_L119.Ack_LS = kcg_true;
  outC->_L119.Ack_OS = kcg_true;
  outC->_L119.Ack_RV = kcg_true;
  outC->_L119.Ack_SH = kcg_true;
  outC->_L119.Ack_SN = kcg_true;
  outC->_L119.Ack_SR = kcg_true;
  outC->_L119.Ack_TR = kcg_true;
  outC->_L119.Ack_UN = kcg_true;
  outC->_L119.Req_Exit_SH = kcg_true;
  outC->_L119.Req_NL = kcg_true;
  outC->_L119.Req_Override = kcg_true;
  outC->_L119.Req_SH = kcg_true;
  outC->_L119.Req_Start = kcg_true;
  outC->_L119.ETCS_Isolated = kcg_true;
  outC->_L118 = kcg_true;
  outC->_L117 = kcg_true;
  outC->_L114 = kcg_true;
  outC->_L115 = kcg_true;
  outC->_L116 = kcg_true;
  outC->_L111 = kcg_true;
  outC->_L112 = kcg_true;
  outC->_L113 = kcg_true;
  outC->_L108 = kcg_true;
  outC->_L109 = kcg_true;
  outC->_L110 = kcg_true;
  outC->_L105 = kcg_true;
  outC->_L106 = kcg_true;
  outC->_L107 = kcg_true;
  outC->_L102 = kcg_true;
  outC->_L103 = kcg_true;
  outC->_L104 = kcg_true;
  outC->_L99 = kcg_true;
  outC->_L100 = kcg_true;
  outC->_L101 = kcg_true;
  outC->_L96 = kcg_true;
  outC->_L97 = kcg_true;
  outC->_L98 = kcg_true;
  outC->_L92 = kcg_true;
  outC->_L91 = kcg_true;
  outC->_L88 = kcg_true;
  outC->_L87 = kcg_true;
  outC->_L86 = kcg_true;
  outC->_L85 = kcg_true;
  outC->_L84 = kcg_true;
  outC->_L83 = kcg_true;
  outC->_L82 = kcg_true;
  outC->_L81 = kcg_true;
  outC->_L80 = kcg_true;
  outC->_L79 = kcg_true;
  outC->_L78 = kcg_true;
  outC->_L72 = kcg_true;
  outC->_L73 = kcg_true;
  outC->_L74 = kcg_true;
  outC->_L75 = kcg_true;
  outC->_L76 = kcg_true;
  outC->_L77 = kcg_true;
  outC->_L65 = kcg_true;
  outC->_L66 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L68 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L70 = kcg_true;
  outC->_L71 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L63 = M_MODE_Full_Supervision;
  outC->_L64 = kcg_true;
  outC->_L58 = kcg_true;
  outC->_L59.valid = kcg_true;
  outC->_L59.Req_Exit_SH = kcg_true;
  outC->_L59.Req_NL = kcg_true;
  outC->_L59.Req_Override = kcg_true;
  outC->_L59.Req_SH = kcg_true;
  outC->_L59.Req_Start = kcg_true;
  outC->_L59.ETCS_Isolated = kcg_true;
  outC->_L60.valid = kcg_true;
  outC->_L60.whichMode = M_MODE_Full_Supervision;
  outC->_L60.acknowledgement = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L16.valid = kcg_true;
  outC->_L16.DriverAck.valid = kcg_true;
  outC->_L16.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->_L16.DriverAck.acknowledgement = kcg_true;
  outC->_L16.DriverRequest.valid = kcg_true;
  outC->_L16.DriverRequest.Req_Exit_SH = kcg_true;
  outC->_L16.DriverRequest.Req_NL = kcg_true;
  outC->_L16.DriverRequest.Req_Override = kcg_true;
  outC->_L16.DriverRequest.Req_SH = kcg_true;
  outC->_L16.DriverRequest.Req_Start = kcg_true;
  outC->_L16.DriverRequest.ETCS_Isolated = kcg_true;
  outC->_L16.LevelAck = kcg_true;
  outC->Loc_ETCS_Isolated = kcg_true;
  outC->Loc_Driver_Req_Start = kcg_true;
  outC->Loc_Driver_Req_SH = kcg_true;
  outC->Loc_Driver_Req_Override = kcg_true;
  outC->Loc_Driver_Req_NL = kcg_true;
  outC->Loc_Driver_Req_Exit_SH = kcg_true;
  outC->Loc_Driver_Ack_UN = kcg_true;
  outC->Loc_Driver_Ack_TR = kcg_true;
  outC->Loc_Driver_Ack_SR = kcg_true;
  outC->Loc_Driver_Ack_SN = kcg_true;
  outC->Loc_Driver_Ack_SH = kcg_true;
  outC->Loc_Driver_Ack_RV = kcg_true;
  outC->Loc_Driver_Ack_OS = kcg_true;
  outC->Loc_Driver_Ack_LS = kcg_true;
  outC->Loc_Ack_Mode_Valid = kcg_true;
  outC->Loc_Acked_Mode = M_MODE_Full_Supervision;
  outC->Loc_DMI_Msg_Valid = kcg_true;
  outC->Loc_DMI_Req_Valid = kcg_true;
  outC->Data_From_DMI_To_Mode.Ack_LS = kcg_true;
  outC->Data_From_DMI_To_Mode.Ack_OS = kcg_true;
  outC->Data_From_DMI_To_Mode.Ack_RV = kcg_true;
  outC->Data_From_DMI_To_Mode.Ack_SH = kcg_true;
  outC->Data_From_DMI_To_Mode.Ack_SN = kcg_true;
  outC->Data_From_DMI_To_Mode.Ack_SR = kcg_true;
  outC->Data_From_DMI_To_Mode.Ack_TR = kcg_true;
  outC->Data_From_DMI_To_Mode.Ack_UN = kcg_true;
  outC->Data_From_DMI_To_Mode.Req_Exit_SH = kcg_true;
  outC->Data_From_DMI_To_Mode.Req_NL = kcg_true;
  outC->Data_From_DMI_To_Mode.Req_Override = kcg_true;
  outC->Data_From_DMI_To_Mode.Req_SH = kcg_true;
  outC->Data_From_DMI_To_Mode.Req_Start = kcg_true;
  outC->Data_From_DMI_To_Mode.ETCS_Isolated = kcg_true;
  outC->Level_Ack = kcg_true;
  outC->driver_level_transition.is_set = kcg_true;
  outC->driver_level_transition.transition.level = M_LEVEL_Level_0;
  outC->driver_level_transition.transition.position = kcg_lit_int32(0);
  outC->driver_level_transition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->driver_level_transition.transition.immediateAck = kcg_true;
  outC->driver_level_transition.transition.AckLength = kcg_lit_int32(0);
  outC->driver_level_transition.LRBG = kcg_lit_int32(0);
  outC->driver_level_transition.referenceLocation = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InputDMI_reset_InputManagement(outC_InputDMI_InputManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputDMI_InputManagement.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

