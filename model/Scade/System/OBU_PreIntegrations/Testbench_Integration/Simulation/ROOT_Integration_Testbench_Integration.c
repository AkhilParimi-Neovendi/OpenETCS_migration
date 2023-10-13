/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ROOT_Integration_Testbench_Integration.h"

/* Testbench_Integration::ROOT_Integration/ */
void ROOT_Integration_Testbench_Integration(void)
{
  static kcg_int64 tmp;
  static kcg_int64 tmp1;
  static M_TrainTrack_Message_T_TM_radio_messages tmp2;
  static RadioManagement_T_API_RadioCommunication_Pkg tmp3;
  static TIU_Output_msg_API_TIU_Pkg tmp4;
  static kcg_bool tmp5;
  static M_LEVEL tmp6;
  static M_MODE tmp7;
  static kcg_float64 tmp8;
  static kcg_float64 tmp9;
  static kcg_int64 tmp10;
  static kcg_bool tmp11;
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg tmp12;
  static M_LEVEL op_call;
  static M_MODE _13_op_call;
  static kcg_float64 _14_op_call;
  static kcg_float64 _15_op_call;
  static L_internal_Type_Obu_BasicTypes_Pkg _16_op_call;
  static L_internal_Type_Obu_BasicTypes_Pkg _17_op_call;
  static L_internal_Type_Obu_BasicTypes_Pkg _18_op_call;
  static kcg_bool _19_op_call;
  static TIU_Output_msg_API_TIU_Pkg _20_op_call;
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg _21_op_call;
  static RadioManagement_T_API_RadioCommunication_Pkg _22_op_call;
  static M_TrainTrack_Message_T_TM_radio_messages _23_op_call;
  static kcg_bool _24_op_call;
  static kcg_bool noname;
  static kcg_bool _25_noname;
  static kcg_bool _26_noname;
  static kcg_bool _27_noname;
  /* API_toRBC/ */
  static M_TrainTrack_Message_T_TM_radio_messages last_API_toRBC;
  /* API_toRTM_Management/ */
  static RadioManagement_T_API_RadioCommunication_Pkg last_API_toRTM_Management;
  /* API_toTIU/ */
  static TIU_Output_msg_API_TIU_Pkg last_API_toTIU;
  /* API_toDMI/ */
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg last_API_toDMI;
  /* DMI_InterpolatedDistanceToTarget_toDisplay/ */
  static kcg_float64 last_DMI_InterpolatedDistanceToTarget_toDisplay;
  /* DMI_ArrayOfMsgIndex_toDisplay/ */
  static array_int64_5 last_DMI_ArrayOfMsgIndex_toDisplay;
  /* DMI_iconGroupIndex_toDisplay/ */
  static kcg_int64 last_DMI_iconGroupIndex_toDisplay;
  /* DMI_TrainSpeed_toDisplay/ */
  static kcg_float64 last_DMI_TrainSpeed_toDisplay;
  /* DMI_traindataValidWinVisibility_toDisplay/ */
  static kcg_bool last_DMI_traindataValidWinVisibility_toDisplay;
  /* DMI_Vtarget_permVisibility_toDisplay/ */
  static kcg_bool last_DMI_Vtarget_permVisibility_toDisplay;
  /* DMI_GradientsStart_toDisplay/ */
  static array_float64_32 last_DMI_GradientsStart_toDisplay;
  /* DMI_trainAirtightIndex_toDisplay/ */
  static kcg_int64 last_DMI_trainAirtightIndex_toDisplay;
  /* DMI_SpeedDigitTwo_toDisplay/ */
  static kcg_float64 last_DMI_SpeedDigitTwo_toDisplay;
  /* DMI_DriverID_Display_toDisplay/ */
  static array_int64_9 last_DMI_DriverID_Display_toDisplay;
  /* DMI_Vinterv_Color_toDisplay/ */
  static kcg_int64 last_DMI_Vinterv_Color_toDisplay;
  /* DMI_DistanceToTarget_toDisplay/ */
  static kcg_float64 last_DMI_DistanceToTarget_toDisplay;
  /* DMI_ModeSymbol_toDisplay/ */
  static kcg_int64 last_DMI_ModeSymbol_toDisplay;
  /* DMI_modeSymbolAnnouncementIndex_toDisplay/ */
  static kcg_int64 last_DMI_modeSymbolAnnouncementIndex_toDisplay;
  /* DMI_ETCS_LevelSymbol_toDisplay/ */
  static kcg_int64 last_DMI_ETCS_LevelSymbol_toDisplay;
  /* DMI_ArrayButtonsEnabler_toDisplay/ */
  static array_int64_30 last_DMI_ArrayButtonsEnabler_toDisplay;
  /* DMI_trainBrakePerc_toDisplay/ */
  static kcg_float64 last_DMI_trainBrakePerc_toDisplay;
  /* DMI_VreleaseColor_toDisplay/ */
  static kcg_int64 last_DMI_VreleaseColor_toDisplay;
  /* DMI_SpeedPermitted_toDisplay/ */
  static kcg_float64 last_DMI_SpeedPermitted_toDisplay;
  /* DMI_trainCategoryIndex_toDisplay/ */
  static kcg_int64 last_DMI_trainCategoryIndex_toDisplay;
  /* DMI_levelSymbolAnnouncementIndex_toDisplay/ */
  static kcg_int64 last_DMI_levelSymbolAnnouncementIndex_toDisplay;
  /* DMI_TrainDataWindowVisibility_toDisplay/ */
  static kcg_bool last_DMI_TrainDataWindowVisibility_toDisplay;
  /* DMI_StatusSymbolBrake_toDisplay/ */
  static kcg_bool last_DMI_StatusSymbolBrake_toDisplay;
  /* DMI_traindataYesNoIndex_toDisplay/ */
  static kcg_int64 last_DMI_traindataYesNoIndex_toDisplay;
  /* DMI_vtarget_permColor_toDisplay/ */
  static kcg_int64 last_DMI_vtarget_permColor_toDisplay;
  /* DMI_GradientsEnd_toDisplay/ */
  static array_float64_32 last_DMI_GradientsEnd_toDisplay;
  /* DMI_TrainRN_Display_toDisplay/ */
  static array_int64_9 last_DMI_TrainRN_Display_toDisplay;
  /* DMI_trainLoadingGougeIndex_toDisplay/ */
  static kcg_int64 last_DMI_trainLoadingGougeIndex_toDisplay;
  /* DMI_SpeedDigitThree_toDisplay/ */
  static kcg_float64 last_DMI_SpeedDigitThree_toDisplay;
  /* DMI_ModeSymbolVisibility_toDisplay/ */
  static kcg_bool last_DMI_ModeSymbolVisibility_toDisplay;
  /* DMI_SpeedIntervention_toDisplay/ */
  static kcg_float64 last_DMI_SpeedIntervention_toDisplay;
  /* DMI_LevelSymbolVisibility_toDisplay/ */
  static kcg_bool last_DMI_LevelSymbolVisibility_toDisplay;
  /* DMI_DistanceToTargetVisible_toDisplay/ */
  static kcg_bool last_DMI_DistanceToTargetVisible_toDisplay;
  /* DMI_trainMaxspeed_toDisplay/ */
  static kcg_float64 last_DMI_trainMaxspeed_toDisplay;
  /* DMI_VtargetColor_toDisplay/ */
  static kcg_int64 last_DMI_VtargetColor_toDisplay;
  /* DMI_SpeedRelease_toDisplay/ */
  static kcg_float64 last_DMI_SpeedRelease_toDisplay;
  /* DMI_CloseButtonEnabler_toDisplay/ */
  static kcg_int64 last_DMI_CloseButtonEnabler_toDisplay;
  /* DMI_PointerColor_toDisplay/ */
  static kcg_int64 last_DMI_PointerColor_toDisplay;
  /* DMI_trainAxleloadIndex_toDisplay/ */
  static kcg_int64 last_DMI_trainAxleloadIndex_toDisplay;
  /* DMI_SpeedDigitOne_toDisplay/ */
  static kcg_float64 last_DMI_SpeedDigitOne_toDisplay;
  /* DMI_DistanceToTargetBarVisibility_toDisplay/ */
  static kcg_bool last_DMI_DistanceToTargetBarVisibility_toDisplay;
  /* DMI_Vinterv_Visibility_toDisplay/ */
  static kcg_bool last_DMI_Vinterv_Visibility_toDisplay;
  /* DMI_TrainPosition_toDisplay/ */
  static kcg_float64 last_DMI_TrainPosition_toDisplay;
  /* DMI_GradientsValue_toDisplay/ */
  static array_float64_32 last_DMI_GradientsValue_toDisplay;
  /* DMI_trainLenght_toDisplay/ */
  static kcg_float64 last_DMI_trainLenght_toDisplay;
  /* DMI_VpermColor_toDisplay/ */
  static kcg_int64 last_DMI_VpermColor_toDisplay;
  /* DMI_SpeedTarget_toDisplay/ */
  static kcg_float64 last_DMI_SpeedTarget_toDisplay;
  /* DMI_window_mask_visibility__toDisplay/ */
  static array_bool_15 last_DMI_window_mask_visibility__toDisplay;
  /* DMI_openDesk_toDisplay/ */
  static kcg_bool last_DMI_openDesk_toDisplay;

  last_DMI_openDesk_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_openDesk_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L158 = GUI_reset;
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &last_API_toDMI,
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toDMI);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L156,
    &last_API_toDMI);
  Ctxt_ROOT_Integration_Testbench_Integration._L159 = DMI_MousePressed;
  Ctxt_ROOT_Integration_Testbench_Integration._L160 = DMI_startRequest;
  Ctxt_ROOT_Integration_Testbench_Integration._L161 = DMI_openTrainRN;
  Ctxt_ROOT_Integration_Testbench_Integration._L162 = DMI_traindataYesAck;
  kcg_copy_array_bool_12(
    &Ctxt_ROOT_Integration_Testbench_Integration._L164,
    &DMI_keypad);
  Ctxt_ROOT_Integration_Testbench_Integration._L165 = DMI_openTrainDataWindow;
  Ctxt_ROOT_Integration_Testbench_Integration._L166 = DMI_openDriverID;
  Ctxt_ROOT_Integration_Testbench_Integration._L168 = DMI_traindataNoAck;
  Ctxt_ROOT_Integration_Testbench_Integration._L169 = DMI_traindataAck;
  Ctxt_ROOT_Integration_Testbench_Integration._L170 = DMI_closeButton;
  Ctxt_ROOT_Integration_Testbench_Integration._L171 = DMI_confirmTrainData;
  Ctxt_ROOT_Integration_Testbench_Integration._L172 = DMI_textMsgAck;
  Ctxt_ROOT_Integration_Testbench_Integration._L157 = GUI_reset;
  Ctxt_ROOT_Integration_Testbench_Integration._L231 = GUI_targetSpeed;
  Ctxt_ROOT_Integration_Testbench_Integration._L233 = GUI_traction;
  Ctxt_ROOT_Integration_Testbench_Integration._L232 = GUI_brake;
  Ctxt_ROOT_Integration_Testbench_Integration._L175 = GUI_initialPosition;
  Ctxt_ROOT_Integration_Testbench_Integration._L176 = GUI_initialVelocity;
  Ctxt_ROOT_Integration_Testbench_Integration._L178 = GUI_level;
  Ctxt_ROOT_Integration_Testbench_Integration._L177 = GUI_mode;
  Ctxt_ROOT_Integration_Testbench_Integration._L179 = GUI_mobileHWStatus;
  Ctxt_ROOT_Integration_Testbench_Integration._L180 = GUI_openDesk;
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &last_API_toRTM_Management,
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toRTM_Management);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L241,
    &last_API_toRTM_Management);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &last_API_toTIU,
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L240,
    &last_API_toTIU);
  Ctxt_ROOT_Integration_Testbench_Integration._L196 =
    cDeltaSimulationTime_Toolbox;
  Ctxt_ROOT_Integration_Testbench_Integration._L229 = kcg_false;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &last_API_toRBC,
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toRBC);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &Ctxt_ROOT_Integration_Testbench_Integration._L244,
    &last_API_toRBC);
  /* _L21=(Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete#1)/ */
  TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox(
    Ctxt_ROOT_Integration_Testbench_Integration._L157,
    Ctxt_ROOT_Integration_Testbench_Integration._L231,
    Ctxt_ROOT_Integration_Testbench_Integration._L233,
    Ctxt_ROOT_Integration_Testbench_Integration._L232,
    Ctxt_ROOT_Integration_Testbench_Integration._L175,
    Ctxt_ROOT_Integration_Testbench_Integration._L176,
    Ctxt_ROOT_Integration_Testbench_Integration._L178,
    Ctxt_ROOT_Integration_Testbench_Integration._L177,
    Ctxt_ROOT_Integration_Testbench_Integration._L179,
    Ctxt_ROOT_Integration_Testbench_Integration._L180,
    &Ctxt_ROOT_Integration_Testbench_Integration._L241,
    &Ctxt_ROOT_Integration_Testbench_Integration._L240,
    Ctxt_ROOT_Integration_Testbench_Integration._L196,
    Ctxt_ROOT_Integration_Testbench_Integration._L229,
    Ctxt_ROOT_Integration_Testbench_Integration._L229,
    &Ctxt_ROOT_Integration_Testbench_Integration._L244,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_TestEnvironmentSimulation_IncludingRBC_Complete_1);
  Ctxt_ROOT_Integration_Testbench_Integration._L21 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.EVC_reset;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L22,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.EVC_Odometry);
  Ctxt_ROOT_Integration_Testbench_Integration._L23 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.EVC_SystemTime;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L24,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.EVC_fromTrack);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L25,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.EVC_fromTIU);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &Ctxt_ROOT_Integration_Testbench_Integration._L26,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.EVC_mobileHWStatus);
  Ctxt_ROOT_Integration_Testbench_Integration._L27 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.GUI_emergencyBrake;
  Ctxt_ROOT_Integration_Testbench_Integration._L28 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.GUI_serviceBrake;
  Ctxt_ROOT_Integration_Testbench_Integration._L29 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.GUI_TractionCutOff;
  Ctxt_ROOT_Integration_Testbench_Integration._L30 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.GUI_currentPositionInCm;
  Ctxt_ROOT_Integration_Testbench_Integration._L31 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.GUI_currentPositionInM;
  Ctxt_ROOT_Integration_Testbench_Integration._L32 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.GUI_currentVelocityInKmH;
  Ctxt_ROOT_Integration_Testbench_Integration._L227 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.EVC_cycleEVC;
  Ctxt_ROOT_Integration_Testbench_Integration._L230 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.GUI_AFBActive;
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU,
    &Ctxt_ROOT_Integration_Testbench_Integration._L25);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L173,
    &Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU);
  Ctxt_ROOT_Integration_Testbench_Integration._L190 = DMI_openLevelMenu;
  Ctxt_ROOT_Integration_Testbench_Integration._L189 = DMI_InputFieldAck;
  Ctxt_ROOT_Integration_Testbench_Integration._L215 =
    DMI_openMainMenu_fromDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L216 = DMI_OverD9_fromDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L217 = DMI_OverD12_frpmDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L218 =
    DMI_HidePlanningArea_fromDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L219 =
    DMI_ShowPlanningArea_fromDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L220 = DMI_closeButtonMain;
  Ctxt_ROOT_Integration_Testbench_Integration._L221 = DMI_C1AreaAck;
  Ctxt_ROOT_Integration_Testbench_Integration._L248 = DMI_ScrollUp;
  Ctxt_ROOT_Integration_Testbench_Integration._L249 = DMI_ScrollDown;
  /* _L94=(Toolbox::DMI#1)/ */
  DMI_Toolbox(
    Ctxt_ROOT_Integration_Testbench_Integration._L158,
    &Ctxt_ROOT_Integration_Testbench_Integration._L156,
    Ctxt_ROOT_Integration_Testbench_Integration._L159,
    Ctxt_ROOT_Integration_Testbench_Integration._L160,
    Ctxt_ROOT_Integration_Testbench_Integration._L161,
    Ctxt_ROOT_Integration_Testbench_Integration._L162,
    &Ctxt_ROOT_Integration_Testbench_Integration._L164,
    Ctxt_ROOT_Integration_Testbench_Integration._L165,
    Ctxt_ROOT_Integration_Testbench_Integration._L166,
    Ctxt_ROOT_Integration_Testbench_Integration._L168,
    Ctxt_ROOT_Integration_Testbench_Integration._L169,
    Ctxt_ROOT_Integration_Testbench_Integration._L170,
    Ctxt_ROOT_Integration_Testbench_Integration._L171,
    Ctxt_ROOT_Integration_Testbench_Integration._L172,
    &Ctxt_ROOT_Integration_Testbench_Integration._L173,
    Ctxt_ROOT_Integration_Testbench_Integration._L190,
    Ctxt_ROOT_Integration_Testbench_Integration._L189,
    Ctxt_ROOT_Integration_Testbench_Integration._L215,
    Ctxt_ROOT_Integration_Testbench_Integration._L216,
    Ctxt_ROOT_Integration_Testbench_Integration._L217,
    Ctxt_ROOT_Integration_Testbench_Integration._L218,
    Ctxt_ROOT_Integration_Testbench_Integration._L219,
    Ctxt_ROOT_Integration_Testbench_Integration._L220,
    Ctxt_ROOT_Integration_Testbench_Integration._L221,
    Ctxt_ROOT_Integration_Testbench_Integration._L248,
    Ctxt_ROOT_Integration_Testbench_Integration._L249,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1);
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L94,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.EVC_fromDMI);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L95,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_icons_ack);
  Ctxt_ROOT_Integration_Testbench_Integration._L96 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_openDesk_toDisplay;
  kcg_copy_array_bool_15(
    &Ctxt_ROOT_Integration_Testbench_Integration._L97,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_window_mask_visibility__toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L98 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_SpeedTarget_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L99 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_VpermColor_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L100 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_trainLenght_toDisplay;
  kcg_copy_array_float64_32(
    &Ctxt_ROOT_Integration_Testbench_Integration._L101,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_GradientsValue_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L102 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_TrainPosition_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L103 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_Vinterv_Visibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L104 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_DistanceToTargetBarVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L105 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_SpeedDigitOne_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L106 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_hourGlassVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L107 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_trainAxleloadIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L108 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_PointerColor_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L109 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_CloseButtonEnabler_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L110 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_SpeedRelease_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L111 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_VtargetColor_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L112 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_trainMaxspeed_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L113 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_DistanceToTargetVisible_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L114 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_LevelSymbolVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L115 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_SpeedIntervention_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L116 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_yellowBorderBrakeSymbol_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L117 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_closeButtonIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L118 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_ModeSymbolVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L119 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_SpeedDigitThree_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L120 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_hourGlassCounter_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L121 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_trainLoadingGougeIndex_toDisplay;
  kcg_copy_array_int64_9(
    &Ctxt_ROOT_Integration_Testbench_Integration._L122,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_TrainRN_Display_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L123 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_RBC_status_symbol_toDisplay;
  kcg_copy_array_float64_32(
    &Ctxt_ROOT_Integration_Testbench_Integration._L124,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_GradientsEnd_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L125 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_vtarget_permColor_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L126 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_traindataYesNoIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L127 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_StatusSymbolBrake_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L128 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_TrainDataWindowVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L129 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_levelSymbolAnnouncementIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L130 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_trainCategoryIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L131 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_SpeedPermitted_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L132 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_VreleaseColor_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L133 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_trainBrakePerc_toDisplay;
  kcg_copy_array_int64_30(
    &Ctxt_ROOT_Integration_Testbench_Integration._L134,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_ArrayButtonsEnabler_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L135 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_ETCS_LevelSymbol_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L136 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_modeSymbolAnnouncementIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L137 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_ModeSymbol_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L138 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_DistanceToTarget_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L139 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_Vinterv_Color_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L140 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_yellowBorderMsg_toDisplay;
  kcg_copy_array_int64_9(
    &Ctxt_ROOT_Integration_Testbench_Integration._L141,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_DriverID_Display_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L142 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_SpeedDigitTwo_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L143 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_yellowBorderC1Area_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L144 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_trainAirtightIndex_toDisplay;
  kcg_copy_array_float64_32(
    &Ctxt_ROOT_Integration_Testbench_Integration._L145,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_GradientsStart_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L146 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_Vtarget_permVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L147 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_traindataValidWinVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L148 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_StatusSymbolVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L149 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_TrainSpeed_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L150 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_iconGroupIndex_toDisplay;
  kcg_copy_array_int64_5(
    &Ctxt_ROOT_Integration_Testbench_Integration._L151,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_ArrayOfMsgIndex_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L152 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_InterpolatedDistanceToTarget_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L153 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_SingleMsgAckRequiredVisibility_toDysplay;
  kcg_copy_array_int64_5(
    &Ctxt_ROOT_Integration_Testbench_Integration._L191,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_IndexFixedMsg_toDisplay);
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L192,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_level_data);
  Ctxt_ROOT_Integration_Testbench_Integration._L193 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_IndexLevel_toDisplay;
  kcg_copy_array_int64_12(
    &Ctxt_ROOT_Integration_Testbench_Integration._L194,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_ArrayLevelIndex_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L195 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_levelMenuVisibility_toDisplay;
  kcg_copy_array_char_30_5(
    &Ctxt_ROOT_Integration_Testbench_Integration._L203,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_PlainText_toDisplay);
  kcg_copy_array_float64_5(
    &Ctxt_ROOT_Integration_Testbench_Integration._L204,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_Array_hh_toDisplay);
  kcg_copy_array_float64_5(
    &Ctxt_ROOT_Integration_Testbench_Integration._L205,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_Array_mm_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L206 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_isAuxiliarMsg_toDisplay;
  kcg_copy_array_bool_10(
    &Ctxt_ROOT_Integration_Testbench_Integration._L207,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay);
  kcg_copy_array_int64_10(
    &Ctxt_ROOT_Integration_Testbench_Integration._L208,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_D_SPDI_SpeedChangeIndex_toDisplay);
  kcg_copy_array_float64_10(
    &Ctxt_ROOT_Integration_Testbench_Integration._L209,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_D_SPDI_SpeedChangePosition_toDisplay);
  kcg_copy_tPASPOutput_Array(
    &Ctxt_ROOT_Integration_Testbench_Integration._L210,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_D_PASP_Speeds_toDisplay);
  kcg_copy_tPASPOutput_Array(
    &Ctxt_ROOT_Integration_Testbench_Integration._L211,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_D_PASP_Distances_toDisplay);
  kcg_copy_array_float64_1(
    &Ctxt_ROOT_Integration_Testbench_Integration._L212,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_D_PASP_IndicationMarker_toDisplay);
  kcg_copy_array_bool_32(
    &Ctxt_ROOT_Integration_Testbench_Integration._L213,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_D_GradientVisible_toDisplay);
  kcg_copy_tScale(
    &Ctxt_ROOT_Integration_Testbench_Integration._L214,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_D_Scale_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L245 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_PlanningAreaVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L246 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_ScrollDownEnableIndex;
  Ctxt_ROOT_Integration_Testbench_Integration._L247 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_ScrollUpEnableIndex;
  kcg_copy_tPASPOutput_Array(
    &Ctxt_ROOT_Integration_Testbench_Integration._L250,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1.DMI_TimeArray);
  DMI_openDesk_toDisplay = Ctxt_ROOT_Integration_Testbench_Integration._L96;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_openDesk_toDisplay =
    DMI_openDesk_toDisplay;
  kcg_copy_array_bool_15(
    &last_DMI_window_mask_visibility__toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay);
  kcg_copy_array_bool_15(
    &DMI_window_mask_visibility__toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L97);
  kcg_copy_array_bool_15(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay,
    &DMI_window_mask_visibility__toDisplay);
  last_DMI_SpeedTarget_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedTarget_toDisplay;
  DMI_SpeedTarget_toDisplay = Ctxt_ROOT_Integration_Testbench_Integration._L98;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedTarget_toDisplay =
    DMI_SpeedTarget_toDisplay;
  last_DMI_VpermColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_VpermColor_toDisplay;
  DMI_VpermColor_toDisplay = Ctxt_ROOT_Integration_Testbench_Integration._L99;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_VpermColor_toDisplay =
    DMI_VpermColor_toDisplay;
  last_DMI_trainLenght_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainLenght_toDisplay;
  DMI_trainLenght_toDisplay = Ctxt_ROOT_Integration_Testbench_Integration._L100;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainLenght_toDisplay =
    DMI_trainLenght_toDisplay;
  kcg_copy_array_float64_32(
    &last_DMI_GradientsValue_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_GradientsValue_toDisplay);
  kcg_copy_array_float64_32(
    &DMI_GradientsValue_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L101);
  kcg_copy_array_float64_32(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_GradientsValue_toDisplay,
    &DMI_GradientsValue_toDisplay);
  last_DMI_TrainPosition_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainPosition_toDisplay;
  DMI_TrainPosition_toDisplay = Ctxt_ROOT_Integration_Testbench_Integration._L102;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainPosition_toDisplay =
    DMI_TrainPosition_toDisplay;
  last_DMI_Vinterv_Visibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_Vinterv_Visibility_toDisplay;
  DMI_Vinterv_Visibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L103;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_Vinterv_Visibility_toDisplay =
    DMI_Vinterv_Visibility_toDisplay;
  last_DMI_DistanceToTargetBarVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DistanceToTargetBarVisibility_toDisplay;
  DMI_DistanceToTargetBarVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L104;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DistanceToTargetBarVisibility_toDisplay =
    DMI_DistanceToTargetBarVisibility_toDisplay;
  last_DMI_SpeedDigitOne_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedDigitOne_toDisplay;
  DMI_SpeedDigitOne_toDisplay = Ctxt_ROOT_Integration_Testbench_Integration._L105;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedDigitOne_toDisplay =
    DMI_SpeedDigitOne_toDisplay;
  last_DMI_trainAxleloadIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainAxleloadIndex_toDisplay;
  DMI_trainAxleloadIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L107;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainAxleloadIndex_toDisplay =
    DMI_trainAxleloadIndex_toDisplay;
  last_DMI_PointerColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_PointerColor_toDisplay;
  DMI_PointerColor_toDisplay = Ctxt_ROOT_Integration_Testbench_Integration._L108;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_PointerColor_toDisplay =
    DMI_PointerColor_toDisplay;
  last_DMI_CloseButtonEnabler_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_CloseButtonEnabler_toDisplay;
  DMI_CloseButtonEnabler_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L109;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_CloseButtonEnabler_toDisplay =
    DMI_CloseButtonEnabler_toDisplay;
  last_DMI_SpeedRelease_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedRelease_toDisplay;
  DMI_SpeedRelease_toDisplay = Ctxt_ROOT_Integration_Testbench_Integration._L110;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedRelease_toDisplay =
    DMI_SpeedRelease_toDisplay;
  last_DMI_VtargetColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_VtargetColor_toDisplay;
  DMI_VtargetColor_toDisplay = Ctxt_ROOT_Integration_Testbench_Integration._L111;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_VtargetColor_toDisplay =
    DMI_VtargetColor_toDisplay;
  last_DMI_trainMaxspeed_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainMaxspeed_toDisplay;
  DMI_trainMaxspeed_toDisplay = Ctxt_ROOT_Integration_Testbench_Integration._L112;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainMaxspeed_toDisplay =
    DMI_trainMaxspeed_toDisplay;
  last_DMI_DistanceToTargetVisible_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DistanceToTargetVisible_toDisplay;
  DMI_DistanceToTargetVisible_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L113;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DistanceToTargetVisible_toDisplay =
    DMI_DistanceToTargetVisible_toDisplay;
  last_DMI_LevelSymbolVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_LevelSymbolVisibility_toDisplay;
  DMI_LevelSymbolVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L114;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_LevelSymbolVisibility_toDisplay =
    DMI_LevelSymbolVisibility_toDisplay;
  last_DMI_SpeedIntervention_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedIntervention_toDisplay;
  DMI_SpeedIntervention_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L115;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedIntervention_toDisplay =
    DMI_SpeedIntervention_toDisplay;
  last_DMI_ModeSymbolVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ModeSymbolVisibility_toDisplay;
  DMI_ModeSymbolVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L118;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ModeSymbolVisibility_toDisplay =
    DMI_ModeSymbolVisibility_toDisplay;
  last_DMI_SpeedDigitThree_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedDigitThree_toDisplay;
  DMI_SpeedDigitThree_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L119;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedDigitThree_toDisplay =
    DMI_SpeedDigitThree_toDisplay;
  last_DMI_trainLoadingGougeIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainLoadingGougeIndex_toDisplay;
  DMI_trainLoadingGougeIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L121;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainLoadingGougeIndex_toDisplay =
    DMI_trainLoadingGougeIndex_toDisplay;
  kcg_copy_array_int64_9(
    &last_DMI_TrainRN_Display_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainRN_Display_toDisplay);
  kcg_copy_array_int64_9(
    &DMI_TrainRN_Display_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L122);
  kcg_copy_array_int64_9(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainRN_Display_toDisplay,
    &DMI_TrainRN_Display_toDisplay);
  kcg_copy_array_float64_32(
    &last_DMI_GradientsEnd_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_GradientsEnd_toDisplay);
  kcg_copy_array_float64_32(
    &DMI_GradientsEnd_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L124);
  kcg_copy_array_float64_32(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_GradientsEnd_toDisplay,
    &DMI_GradientsEnd_toDisplay);
  last_DMI_vtarget_permColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_vtarget_permColor_toDisplay;
  DMI_vtarget_permColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L125;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_vtarget_permColor_toDisplay =
    DMI_vtarget_permColor_toDisplay;
  last_DMI_traindataYesNoIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_traindataYesNoIndex_toDisplay;
  DMI_traindataYesNoIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L126;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_traindataYesNoIndex_toDisplay =
    DMI_traindataYesNoIndex_toDisplay;
  last_DMI_StatusSymbolBrake_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_StatusSymbolBrake_toDisplay;
  DMI_StatusSymbolBrake_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L127;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_StatusSymbolBrake_toDisplay =
    DMI_StatusSymbolBrake_toDisplay;
  last_DMI_TrainDataWindowVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainDataWindowVisibility_toDisplay;
  DMI_TrainDataWindowVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L128;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainDataWindowVisibility_toDisplay =
    DMI_TrainDataWindowVisibility_toDisplay;
  last_DMI_levelSymbolAnnouncementIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_levelSymbolAnnouncementIndex_toDisplay;
  DMI_levelSymbolAnnouncementIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L129;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_levelSymbolAnnouncementIndex_toDisplay =
    DMI_levelSymbolAnnouncementIndex_toDisplay;
  last_DMI_trainCategoryIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainCategoryIndex_toDisplay;
  DMI_trainCategoryIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L130;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainCategoryIndex_toDisplay =
    DMI_trainCategoryIndex_toDisplay;
  last_DMI_SpeedPermitted_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedPermitted_toDisplay;
  DMI_SpeedPermitted_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L131;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedPermitted_toDisplay =
    DMI_SpeedPermitted_toDisplay;
  last_DMI_VreleaseColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_VreleaseColor_toDisplay;
  DMI_VreleaseColor_toDisplay = Ctxt_ROOT_Integration_Testbench_Integration._L132;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_VreleaseColor_toDisplay =
    DMI_VreleaseColor_toDisplay;
  last_DMI_trainBrakePerc_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainBrakePerc_toDisplay;
  DMI_trainBrakePerc_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L133;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainBrakePerc_toDisplay =
    DMI_trainBrakePerc_toDisplay;
  kcg_copy_array_int64_30(
    &last_DMI_ArrayButtonsEnabler_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay);
  kcg_copy_array_int64_30(
    &DMI_ArrayButtonsEnabler_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L134);
  kcg_copy_array_int64_30(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay,
    &DMI_ArrayButtonsEnabler_toDisplay);
  last_DMI_ETCS_LevelSymbol_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ETCS_LevelSymbol_toDisplay;
  DMI_ETCS_LevelSymbol_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L135;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ETCS_LevelSymbol_toDisplay =
    DMI_ETCS_LevelSymbol_toDisplay;
  last_DMI_modeSymbolAnnouncementIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_modeSymbolAnnouncementIndex_toDisplay;
  DMI_modeSymbolAnnouncementIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L136;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_modeSymbolAnnouncementIndex_toDisplay =
    DMI_modeSymbolAnnouncementIndex_toDisplay;
  last_DMI_ModeSymbol_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ModeSymbol_toDisplay;
  DMI_ModeSymbol_toDisplay = Ctxt_ROOT_Integration_Testbench_Integration._L137;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ModeSymbol_toDisplay =
    DMI_ModeSymbol_toDisplay;
  last_DMI_DistanceToTarget_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DistanceToTarget_toDisplay;
  DMI_DistanceToTarget_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L138;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DistanceToTarget_toDisplay =
    DMI_DistanceToTarget_toDisplay;
  last_DMI_Vinterv_Color_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_Vinterv_Color_toDisplay;
  DMI_Vinterv_Color_toDisplay = Ctxt_ROOT_Integration_Testbench_Integration._L139;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_Vinterv_Color_toDisplay =
    DMI_Vinterv_Color_toDisplay;
  kcg_copy_array_int64_9(
    &last_DMI_DriverID_Display_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DriverID_Display_toDisplay);
  kcg_copy_array_int64_9(
    &DMI_DriverID_Display_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L141);
  kcg_copy_array_int64_9(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DriverID_Display_toDisplay,
    &DMI_DriverID_Display_toDisplay);
  last_DMI_SpeedDigitTwo_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedDigitTwo_toDisplay;
  DMI_SpeedDigitTwo_toDisplay = Ctxt_ROOT_Integration_Testbench_Integration._L142;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedDigitTwo_toDisplay =
    DMI_SpeedDigitTwo_toDisplay;
  last_DMI_trainAirtightIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainAirtightIndex_toDisplay;
  DMI_trainAirtightIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L144;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainAirtightIndex_toDisplay =
    DMI_trainAirtightIndex_toDisplay;
  kcg_copy_array_float64_32(
    &last_DMI_GradientsStart_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_GradientsStart_toDisplay);
  kcg_copy_array_float64_32(
    &DMI_GradientsStart_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L145);
  kcg_copy_array_float64_32(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_GradientsStart_toDisplay,
    &DMI_GradientsStart_toDisplay);
  last_DMI_Vtarget_permVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_Vtarget_permVisibility_toDisplay;
  DMI_Vtarget_permVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L146;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_Vtarget_permVisibility_toDisplay =
    DMI_Vtarget_permVisibility_toDisplay;
  last_DMI_traindataValidWinVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_traindataValidWinVisibility_toDisplay;
  DMI_traindataValidWinVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L147;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_traindataValidWinVisibility_toDisplay =
    DMI_traindataValidWinVisibility_toDisplay;
  last_DMI_TrainSpeed_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainSpeed_toDisplay;
  DMI_TrainSpeed_toDisplay = Ctxt_ROOT_Integration_Testbench_Integration._L149;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainSpeed_toDisplay =
    DMI_TrainSpeed_toDisplay;
  last_DMI_iconGroupIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_iconGroupIndex_toDisplay;
  DMI_iconGroupIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L150;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_iconGroupIndex_toDisplay =
    DMI_iconGroupIndex_toDisplay;
  kcg_copy_array_int64_5(
    &last_DMI_ArrayOfMsgIndex_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayOfMsgIndex_toDisplay);
  kcg_copy_array_int64_5(
    &DMI_ArrayOfMsgIndex_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L151);
  kcg_copy_array_int64_5(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayOfMsgIndex_toDisplay,
    &DMI_ArrayOfMsgIndex_toDisplay);
  last_DMI_InterpolatedDistanceToTarget_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_InterpolatedDistanceToTarget_toDisplay;
  DMI_InterpolatedDistanceToTarget_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L152;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_InterpolatedDistanceToTarget_toDisplay =
    DMI_InterpolatedDistanceToTarget_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.clockEVC =
    Ctxt_ROOT_Integration_Testbench_Integration._L227;
  Ctxt_ROOT_Integration_Testbench_Integration._L228 =
    Ctxt_ROOT_Integration_Testbench_Integration.clockEVC;
  Ctxt_ROOT_Integration_Testbench_Integration.every =
    Ctxt_ROOT_Integration_Testbench_Integration._L228;
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_fromDMI,
    &Ctxt_ROOT_Integration_Testbench_Integration._L94);
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L154,
    &Ctxt_ROOT_Integration_Testbench_Integration.API_fromDMI);
  kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L201,
    (ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *)
      &cDataStorage_ForInit1_Testbench_Integration);
  if (Ctxt_ROOT_Integration_Testbench_Integration.every) {
    /* _L1=(EVC#1)/ */
    EVC(
      Ctxt_ROOT_Integration_Testbench_Integration._L21,
      &Ctxt_ROOT_Integration_Testbench_Integration._L22,
      Ctxt_ROOT_Integration_Testbench_Integration._L23,
      &Ctxt_ROOT_Integration_Testbench_Integration._L24,
      &Ctxt_ROOT_Integration_Testbench_Integration._L154,
      &Ctxt_ROOT_Integration_Testbench_Integration._L25,
      &Ctxt_ROOT_Integration_Testbench_Integration._L26,
      &Ctxt_ROOT_Integration_Testbench_Integration._L201,
      &Ctxt_ROOT_Integration_Testbench_Integration.Context_EVC_1);
    _24_op_call =
      Ctxt_ROOT_Integration_Testbench_Integration.Context_EVC_1.resetOut;
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &_23_op_call,
      &Ctxt_ROOT_Integration_Testbench_Integration.Context_EVC_1.API_toRBC);
    kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
      &_22_op_call,
      &Ctxt_ROOT_Integration_Testbench_Integration.Context_EVC_1.API_RTM_management);
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
      &_21_op_call,
      &Ctxt_ROOT_Integration_Testbench_Integration.Context_EVC_1.API_toDMI);
    kcg_copy_TIU_Output_msg_API_TIU_Pkg(
      &_20_op_call,
      &Ctxt_ROOT_Integration_Testbench_Integration.Context_EVC_1.API_toTIU);
    _19_op_call =
      Ctxt_ROOT_Integration_Testbench_Integration.Context_EVC_1.EVC_ready;
    _18_op_call =
      Ctxt_ROOT_Integration_Testbench_Integration.Context_EVC_1.debugTrainPositionNominal;
    _17_op_call =
      Ctxt_ROOT_Integration_Testbench_Integration.Context_EVC_1.debugTrainPositionDeltaMax;
    _16_op_call =
      Ctxt_ROOT_Integration_Testbench_Integration.Context_EVC_1.debugTrainPositionDeltaMin;
    _15_op_call =
      Ctxt_ROOT_Integration_Testbench_Integration.Context_EVC_1.debugPermittedSpeed;
    _14_op_call =
      Ctxt_ROOT_Integration_Testbench_Integration.Context_EVC_1.debugIinterventionSpeed;
    _13_op_call =
      Ctxt_ROOT_Integration_Testbench_Integration.Context_EVC_1.debugCurrentMode;
    op_call =
      Ctxt_ROOT_Integration_Testbench_Integration.Context_EVC_1.debugCurrentLevel;
  }
  GUI_serviceBrake = Ctxt_ROOT_Integration_Testbench_Integration._L28;
  GUI_TractionCutOff = Ctxt_ROOT_Integration_Testbench_Integration._L29;
  GUI_currentPositionInCm = Ctxt_ROOT_Integration_Testbench_Integration._L30;
  GUI_currentPositionInM = Ctxt_ROOT_Integration_Testbench_Integration._L31;
  GUI_currentVelocityInKmH = Ctxt_ROOT_Integration_Testbench_Integration._L32;
  if (Ctxt_ROOT_Integration_Testbench_Integration.every) {
    Ctxt_ROOT_Integration_Testbench_Integration._L8 = _17_op_call;
  }
  else {
    /* _L1= */
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      tmp = kcg_lit_int64(0);
    }
    else {
      tmp = Ctxt_ROOT_Integration_Testbench_Integration._L8;
    }
    Ctxt_ROOT_Integration_Testbench_Integration._L8 = tmp;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L182 = /* _L182= */(kcg_float64)
      Ctxt_ROOT_Integration_Testbench_Integration._L8;
  GUI_TrainPositionDeltaMax = Ctxt_ROOT_Integration_Testbench_Integration._L182;
  if (Ctxt_ROOT_Integration_Testbench_Integration.every) {
    Ctxt_ROOT_Integration_Testbench_Integration._L9 = _16_op_call;
  }
  else {
    /* _L1= */
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      tmp1 = kcg_lit_int64(0);
    }
    else {
      tmp1 = Ctxt_ROOT_Integration_Testbench_Integration._L9;
    }
    Ctxt_ROOT_Integration_Testbench_Integration._L9 = tmp1;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L183 = /* _L183= */(kcg_float64)
      Ctxt_ROOT_Integration_Testbench_Integration._L9;
  GUI_TrainPositionDeltaMin = Ctxt_ROOT_Integration_Testbench_Integration._L183;
  GUI_timestamp = Ctxt_ROOT_Integration_Testbench_Integration._L23;
  Ctxt_ROOT_Integration_Testbench_Integration._L188 = kcg_lit_float64(0.0);
  GUI_TrainPositionNominal = Ctxt_ROOT_Integration_Testbench_Integration._L188;
  GUI_emergencyBrake = Ctxt_ROOT_Integration_Testbench_Integration._L27;
  GUI_AFBActive = Ctxt_ROOT_Integration_Testbench_Integration._L230;
  kcg_copy_tPASPOutput_Array(
    &DMI_localTime,
    &Ctxt_ROOT_Integration_Testbench_Integration._L250);
  DMI_ScrollUpEnableIndex = Ctxt_ROOT_Integration_Testbench_Integration._L247;
  DMI_ScrollDownEnableIndex = Ctxt_ROOT_Integration_Testbench_Integration._L246;
  kcg_copy_array_float64_1(
    &DMI_D_PASP_IndicationMarker_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L212);
  if (Ctxt_ROOT_Integration_Testbench_Integration.every) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &Ctxt_ROOT_Integration_Testbench_Integration._L2,
      &_23_op_call);
  }
  else {
    /* _L1= */
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &tmp2,
        (M_TrainTrack_Message_T_TM_radio_messages *)
          &cInit_toRTM_Testbench_Integration);
    }
    else {
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &tmp2,
        &Ctxt_ROOT_Integration_Testbench_Integration._L2);
    }
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &Ctxt_ROOT_Integration_Testbench_Integration._L2,
      &tmp2);
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toRBC,
    &Ctxt_ROOT_Integration_Testbench_Integration._L2);
  if (Ctxt_ROOT_Integration_Testbench_Integration.every) {
    kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
      &Ctxt_ROOT_Integration_Testbench_Integration._L3,
      &_22_op_call);
  }
  else {
    /* _L1= */
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
        &tmp3,
        (RadioManagement_T_API_RadioCommunication_Pkg *)
          &cInitRTMManagement_Testbench_Integration);
    }
    else {
      kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
        &tmp3,
        &Ctxt_ROOT_Integration_Testbench_Integration._L3);
    }
    kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
      &Ctxt_ROOT_Integration_Testbench_Integration._L3,
      &tmp3);
  }
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toRTM_Management,
    &Ctxt_ROOT_Integration_Testbench_Integration._L3);
  if (Ctxt_ROOT_Integration_Testbench_Integration.every) {
    kcg_copy_TIU_Output_msg_API_TIU_Pkg(
      &Ctxt_ROOT_Integration_Testbench_Integration._L5,
      &_20_op_call);
  }
  else {
    /* _L1= */
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      kcg_copy_TIU_Output_msg_API_TIU_Pkg(
        &tmp4,
        (TIU_Output_msg_API_TIU_Pkg *) &cInit_API_toTIU1_Testbench_Integration);
    }
    else {
      kcg_copy_TIU_Output_msg_API_TIU_Pkg(
        &tmp4,
        &Ctxt_ROOT_Integration_Testbench_Integration._L5);
    }
    kcg_copy_TIU_Output_msg_API_TIU_Pkg(
      &Ctxt_ROOT_Integration_Testbench_Integration._L5,
      &tmp4);
  }
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU,
    &Ctxt_ROOT_Integration_Testbench_Integration._L5);
  Ctxt_ROOT_Integration_Testbench_Integration._L224 = DMI_DriverID_Ack;
  _27_noname = Ctxt_ROOT_Integration_Testbench_Integration._L224;
  Ctxt_ROOT_Integration_Testbench_Integration._L223 = DMI_TrainRN_Ack;
  _26_noname = Ctxt_ROOT_Integration_Testbench_Integration._L223;
  if (Ctxt_ROOT_Integration_Testbench_Integration.every) {
    Ctxt_ROOT_Integration_Testbench_Integration._L6 = _19_op_call;
  }
  else {
    /* _L1= */
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      tmp5 = kcg_true;
    }
    else {
      tmp5 = Ctxt_ROOT_Integration_Testbench_Integration._L6;
    }
    Ctxt_ROOT_Integration_Testbench_Integration._L6 = tmp5;
  }
  _25_noname = Ctxt_ROOT_Integration_Testbench_Integration._L6;
  DMI_PlanningAreaVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L245;
  kcg_copy_tScale(
    &DMI_D_Scale_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L214);
  kcg_copy_array_bool_32(
    &DMI_D_GradientVisible_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L213);
  kcg_copy_tPASPOutput_Array(
    &DMI_D_PASP_Distances_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L211);
  kcg_copy_tPASPOutput_Array(
    &DMI_D_PASP_Speeds_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L210);
  kcg_copy_array_float64_10(
    &DMI_D_SPDI_SpeedChangePosition_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L209);
  kcg_copy_array_int64_10(
    &DMI_D_SPDI_SpeedChangeIndex_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L208);
  kcg_copy_array_bool_10(
    &DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L207);
  DMI_isAuxiliarMsg_toDisplay = Ctxt_ROOT_Integration_Testbench_Integration._L206;
  kcg_copy_array_float64_5(
    &DMI_Array_mm_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L205);
  kcg_copy_array_float64_5(
    &DMI_Array_hh_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L204);
  kcg_copy_array_char_30_5(
    &DMI_PlainText_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L203);
  DMI_levelMenuVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L195;
  kcg_copy_array_int64_12(
    &DMI_ArrayLevelIndex_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L194);
  DMI_IndexLevel_toDisplay = Ctxt_ROOT_Integration_Testbench_Integration._L193;
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &DMI_level_data,
    &Ctxt_ROOT_Integration_Testbench_Integration._L192);
  kcg_copy_array_int64_5(
    &DMI_IndexFixedMsg_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L191);
  DMI_SingleMsgAckRequiredVisibility_toDysplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L153;
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &Ctxt_ROOT_Integration_Testbench_Integration.debugMobileHwStatus,
    &Ctxt_ROOT_Integration_Testbench_Integration._L26);
  if (Ctxt_ROOT_Integration_Testbench_Integration.every) {
    Ctxt_ROOT_Integration_Testbench_Integration._L238 = op_call;
  }
  else {
    /* _L1= */
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      tmp6 = cInit_M_LEVEL1_Testbench_Integration;
    }
    else {
      tmp6 = Ctxt_ROOT_Integration_Testbench_Integration._L238;
    }
    Ctxt_ROOT_Integration_Testbench_Integration._L238 = tmp6;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.debugCurrentLevel =
    Ctxt_ROOT_Integration_Testbench_Integration._L238;
  if (Ctxt_ROOT_Integration_Testbench_Integration.every) {
    Ctxt_ROOT_Integration_Testbench_Integration._L222 = _13_op_call;
  }
  else {
    /* _L1= */
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      tmp7 = cInit_M_MODE1_Testbench_Integration;
    }
    else {
      tmp7 = Ctxt_ROOT_Integration_Testbench_Integration._L222;
    }
    Ctxt_ROOT_Integration_Testbench_Integration._L222 = tmp7;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.debugCurrentMode =
    Ctxt_ROOT_Integration_Testbench_Integration._L222;
  if (Ctxt_ROOT_Integration_Testbench_Integration.every) {
    Ctxt_ROOT_Integration_Testbench_Integration._L11 = _14_op_call;
  }
  else {
    /* _L1= */
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      tmp8 = kcg_lit_float64(0.0);
    }
    else {
      tmp8 = Ctxt_ROOT_Integration_Testbench_Integration._L11;
    }
    Ctxt_ROOT_Integration_Testbench_Integration._L11 = tmp8;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.debugInterventionSpeed =
    Ctxt_ROOT_Integration_Testbench_Integration._L11;
  if (Ctxt_ROOT_Integration_Testbench_Integration.every) {
    Ctxt_ROOT_Integration_Testbench_Integration._L10 = _15_op_call;
  }
  else {
    /* _L1= */
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      tmp9 = kcg_lit_float64(0.0);
    }
    else {
      tmp9 = Ctxt_ROOT_Integration_Testbench_Integration._L10;
    }
    Ctxt_ROOT_Integration_Testbench_Integration._L10 = tmp9;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.debugPermittedSpeed =
    Ctxt_ROOT_Integration_Testbench_Integration._L10;
  if (Ctxt_ROOT_Integration_Testbench_Integration.every) {
    Ctxt_ROOT_Integration_Testbench_Integration._L7 = _18_op_call;
  }
  else {
    /* _L1= */
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      tmp10 = kcg_lit_int64(0);
    }
    else {
      tmp10 = Ctxt_ROOT_Integration_Testbench_Integration._L7;
    }
    Ctxt_ROOT_Integration_Testbench_Integration._L7 = tmp10;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.debugTrainPositionNominal =
    Ctxt_ROOT_Integration_Testbench_Integration._L7;
  if (Ctxt_ROOT_Integration_Testbench_Integration.every) {
    Ctxt_ROOT_Integration_Testbench_Integration._L1 = _24_op_call;
  }
  else {
    /* _L1= */
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      tmp11 = kcg_false;
    }
    else {
      tmp11 = Ctxt_ROOT_Integration_Testbench_Integration._L1;
    }
    Ctxt_ROOT_Integration_Testbench_Integration._L1 = tmp11;
  }
  noname = Ctxt_ROOT_Integration_Testbench_Integration._L1;
  DMI_StatusSymbolVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L148;
  DMI_yellowBorderC1Area_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L143;
  DMI_yellowBorderMsg_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L140;
  DMI_RBC_status_symbol_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L123;
  DMI_hourGlassCounter_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L120;
  DMI_closeButtonIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L117;
  DMI_yellowBorderBrakeSymbol_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L116;
  DMI_hourGlassVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L106;
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &DMI_icons_ack,
    &Ctxt_ROOT_Integration_Testbench_Integration._L95);
  if (Ctxt_ROOT_Integration_Testbench_Integration.every) {
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
      &Ctxt_ROOT_Integration_Testbench_Integration._L4,
      &_21_op_call);
  }
  else {
    /* _L1= */
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
        &tmp12,
        (EVC_to_DMI_Message_int_T_API_DMI_Pkg *)
          &cInit_API_toDMI_Testbench_Integration);
    }
    else {
      kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
        &tmp12,
        &Ctxt_ROOT_Integration_Testbench_Integration._L4);
    }
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
      &Ctxt_ROOT_Integration_Testbench_Integration._L4,
      &tmp12);
  }
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toDMI,
    &Ctxt_ROOT_Integration_Testbench_Integration._L4);
  Ctxt_ROOT_Integration_Testbench_Integration.init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void ROOT_Integration_init_Testbench_Integration(void)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;
  static kcg_size idx36;
  static kcg_size idx37;
  static kcg_size idx38;
  static kcg_size idx39;

  Ctxt_ROOT_Integration_Testbench_Integration._L158 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L157 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L231 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L233 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L232 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L175 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L176 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L177 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L178 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L179 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L180 = kcg_true;
  for (idx = 0; idx < 4; idx++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L250[idx] = kcg_lit_float64(0.0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L249 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L248 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L247 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L246 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L245 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L244.Message.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L244.Message.nid_message =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L244.Message.l_message =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L244.Message.t_train =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L244.Message.nid_engine =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L244.Message.field1 =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L244.Message.field2 =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L244.Message.field3 =
    kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 50; idx1++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L244.OptionalPackets[idx1] =
      kcg_lit_int64(0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L241.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L241.cmd =
    cmdr_not_relevant_API_RadioCommunication_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L241.networkID = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L240.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.isolation_status.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.brake_command.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.brake_inhibition.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.type_I_train_commands.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_traction_system.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_traction_system.d_test_traction.now =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_traction_system.d_test_traction.distance =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_traction_system.m_voltage.NID_ctraction =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.passenger_door_control_info.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.passenger_door_control_info.door_control_info =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_of_allowed_current_consumption.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_of_allowed_current_consumption.d_test_current.now =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_of_allowed_current_consumption.d_test_current.distance =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_of_allowed_current_consumption.m_current.restriction =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L230 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L229 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L228 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L227 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L224 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L223 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L221 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L220 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L219 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L218 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L217 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L216 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L215 = kcg_true;
  for (idx3 = 0; idx3 < 5; idx3++) {
    for (idx2 = 0; idx2 < 30; idx2++) {
      Ctxt_ROOT_Integration_Testbench_Integration._L203[idx3][idx2] = ' ';
    }
  }
  for (idx4 = 0; idx4 < 5; idx4++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L204[idx4] = kcg_lit_float64(0.0);
  }
  for (idx5 = 0; idx5 < 5; idx5++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L205[idx5] = kcg_lit_float64(0.0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L206 = kcg_true;
  for (idx6 = 0; idx6 < 10; idx6++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L207[idx6] = kcg_true;
  }
  for (idx7 = 0; idx7 < 10; idx7++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L208[idx7] = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 10; idx8++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L209[idx8] = kcg_lit_float64(0.0);
  }
  for (idx9 = 0; idx9 < 4; idx9++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L210[idx9] = kcg_lit_float64(0.0);
  }
  for (idx10 = 0; idx10 < 4; idx10++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L211[idx10] = kcg_lit_float64(0.0);
  }
  for (idx11 = 0; idx11 < 1; idx11++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L212[idx11] = kcg_lit_float64(0.0);
  }
  for (idx12 = 0; idx12 < 32; idx12++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L213[idx12] = kcg_true;
  }
  for (idx13 = 0; idx13 < 9; idx13++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L214[idx13] = kcg_lit_float64(0.0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L201.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L201.lastActiveLevel =
    M_LEVEL_Level_0;
  Ctxt_ROOT_Integration_Testbench_Integration._L201.lastActiveNTC =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L201.availableLevelsList.number =
    kcg_lit_int64(0);
  for (idx14 = 0; idx14 < 32; idx14++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L201.availableLevelsList.levelList[idx14].level =
      M_LEVEL_Level_0;
    Ctxt_ROOT_Integration_Testbench_Integration._L201.availableLevelsList.levelList[idx14].nid_stm =
      kcg_lit_int64(0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L196 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L27 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L28 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L29 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L30 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L31 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L32 = kcg_lit_float64(0.0);
  for (idx15 = 0; idx15 < 5; idx15++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L191[idx15] = kcg_lit_int64(0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L192.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L192.systemTime = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L192.level.level = M_LEVEL_Level_0;
  Ctxt_ROOT_Integration_Testbench_Integration._L192.level.nid_stm =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L193 = kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 12; idx16++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L194[idx16] = kcg_lit_int64(0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L195 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L190 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L189 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L188 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L183 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L182 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L173.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_status.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_status.m_sleeping_st =
    signal_active_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_status.m_traction_st =
    traction_on_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.brake_status.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.brake_pressure.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.brake_pressure.pressure =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_entry_type =
    fixed_entry_type_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.acknowledgedByDriver =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.trainLength =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.brakePerctage =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.maxTrainSpeed =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.axleLoadCategory =
    M_AXLELOADCAT_A;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.airtightSystem =
    M_AIRTIGHT_Not_fitted;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.axleNumber =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.numberNationalSystems =
    kcg_lit_int64(0);
  for (idx17 = 0; idx17 < 5; idx17++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.nationSystems[idx17] =
      kcg_lit_int64(0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.numberTractionSystems =
    kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 4; idx18++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.tractionSystem[idx18].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.tractionSystem[idx18].nid_ctraction =
      kcg_lit_int64(0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.type_I_train_and_brake_inhibition.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L172 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L171 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L170 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L169 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L168 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L166 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L165 = kcg_true;
  for (idx19 = 0; idx19 < 12; idx19++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L164[idx19] = kcg_true;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L162 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L161 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L160 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L159 = kcg_true;
  for (idx20 = 0; idx20 < 999; idx20++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L156[idx20] = kcg_lit_int64(0);
  }
  for (idx21 = 0; idx21 < 311; idx21++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L154[idx21] = kcg_lit_int64(0);
  }
  for (idx22 = 0; idx22 < 311; idx22++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L94[idx22] = kcg_lit_int64(0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L95.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L95.systemTime = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L95.DMI_nid_icon_identifier =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L96 = kcg_true;
  for (idx23 = 0; idx23 < 15; idx23++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L97[idx23] = kcg_true;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L98 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L99 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L100 = kcg_lit_float64(0.0);
  for (idx24 = 0; idx24 < 32; idx24++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L101[idx24] = kcg_lit_float64(0.0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L102 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L103 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L104 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L105 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L106 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L107 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L108 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L109 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L110 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L111 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L112 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L113 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L114 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L115 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L116 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L117 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L118 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L119 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L120 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L121 = kcg_lit_int64(0);
  for (idx25 = 0; idx25 < 9; idx25++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L122[idx25] = kcg_lit_int64(0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L123 = kcg_lit_int64(0);
  for (idx26 = 0; idx26 < 32; idx26++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L124[idx26] = kcg_lit_float64(0.0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L125 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L126 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L127 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L128 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L129 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L130 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L131 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L132 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L133 = kcg_lit_float64(0.0);
  for (idx27 = 0; idx27 < 30; idx27++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L134[idx27] = kcg_lit_int64(0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L135 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L136 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L137 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L138 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L139 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L140 = kcg_true;
  for (idx28 = 0; idx28 < 9; idx28++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L141[idx28] = kcg_lit_int64(0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L142 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L143 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L144 = kcg_lit_int64(0);
  for (idx29 = 0; idx29 < 32; idx29++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L145[idx29] = kcg_lit_float64(0.0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L146 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L147 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L148 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L149 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L150 = kcg_lit_int64(0);
  for (idx30 = 0; idx30 < 5; idx30++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L151[idx30] = kcg_lit_int64(0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L152 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L153 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L21 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L22.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L22.timestamp = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L22.odo.o_nominal =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L22.odo.o_min = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L22.odo.o_max = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L22.speed.v_safeNominal =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L22.speed.v_rawNominal =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L22.speed.v_lower =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L22.speed.v_upper =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L22.acceleration = kcg_lit_int64(
      0);
  Ctxt_ROOT_Integration_Testbench_Integration._L22.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L22.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L23 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.systemTimeMsgReceived =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.msg_type =
    msrc_undefined_Common_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.present = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.checkResult = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_bad_balise_received =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.q_media =
    Q_MEDIA_Balise;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.n_pig =
    N_PIG_I_am_the_1st;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.n_total =
    N_TOTAL_1_balise_in_the_group;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.m_dup =
    M_DUP_No_duplicates;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.m_mcount =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.nid_c =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.nid_bg =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.q_link =
    Q_LINK_Unlinked;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.present = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.apiConsistencyError =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.radioDevice =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.nid_message =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.t_train =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.nid_lrbg =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.nid_em =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.d_sr =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.d_ref =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_MetaData.t_train_reference =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_MetaData.nid_em =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_MetaData.q_scale =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_MetaData.d_sr =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_MetaData.t_sh_rqst =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_MetaData.d_ref =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_MetaData.q_dir =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_MetaData.d_emergencystop =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_MetaData.m_version =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.sendingRBC_Id.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.sendingRBC_Id.nid_c =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.sendingRBC_Id.rbc_id =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.sendingRBC_Id.device_id =
    kcg_lit_int64(0);
  for (idx31 = 0; idx31 < 30; idx31++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L24.packets.PacketHeaders[idx31].nid_packet =
      kcg_lit_int64(0);
    Ctxt_ROOT_Integration_Testbench_Integration._L24.packets.PacketHeaders[idx31].q_dir =
      Q_DIR_Reverse;
    Ctxt_ROOT_Integration_Testbench_Integration._L24.packets.PacketHeaders[idx31].valid =
      kcg_true;
    Ctxt_ROOT_Integration_Testbench_Integration._L24.packets.PacketHeaders[idx31].startAddress =
      kcg_lit_int64(0);
    Ctxt_ROOT_Integration_Testbench_Integration._L24.packets.PacketHeaders[idx31].endAddress =
      kcg_lit_int64(0);
  }
  for (idx32 = 0; idx32 < 500; idx32++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L24.packets.PacketData[idx32] =
      kcg_lit_int64(0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L25.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_status.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_status.m_sleeping_st =
    signal_active_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_status.m_traction_st =
    traction_on_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.brake_status.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.brake_pressure.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.brake_pressure.pressure =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_entry_type =
    fixed_entry_type_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.acknowledgedByDriver =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.trainLength =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.brakePerctage =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.maxTrainSpeed =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.axleLoadCategory =
    M_AXLELOADCAT_A;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.airtightSystem =
    M_AIRTIGHT_Not_fitted;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.axleNumber =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.numberNationalSystems =
    kcg_lit_int64(0);
  for (idx33 = 0; idx33 < 5; idx33++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.nationSystems[idx33] =
      kcg_lit_int64(0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.numberTractionSystems =
    kcg_lit_int64(0);
  for (idx34 = 0; idx34 < 4; idx34++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.tractionSystem[idx34].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.tractionSystem[idx34].nid_ctraction =
      kcg_lit_int64(0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.type_I_train_and_brake_inhibition.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L26.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L26.connectionStatus =
    mhwc_notRegistered_MoRC_Pck;
  Ctxt_ROOT_Integration_Testbench_Integration._L26.settingUpConnectionHasFailed =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L26.connectionLost = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.clockEVC = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.debugMobileHwStatus.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.debugMobileHwStatus.connectionStatus =
    mhwc_notRegistered_MoRC_Pck;
  Ctxt_ROOT_Integration_Testbench_Integration.debugMobileHwStatus.settingUpConnectionHasFailed =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.debugMobileHwStatus.connectionLost =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.debugCurrentLevel = M_LEVEL_Level_0;
  Ctxt_ROOT_Integration_Testbench_Integration.debugCurrentMode =
    M_MODE_Full_Supervision;
  Ctxt_ROOT_Integration_Testbench_Integration.debugInterventionSpeed =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.debugPermittedSpeed =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.debugTrainPositionNominal =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_status.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_status.m_sleeping_st =
    signal_active_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_status.m_traction_st =
    traction_on_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.brake_status.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.brake_pressure.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.brake_pressure.pressure =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_entry_type =
    fixed_entry_type_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.acknowledgedByDriver =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.trainLength =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.brakePerctage =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.maxTrainSpeed =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.axleLoadCategory =
    M_AXLELOADCAT_A;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.airtightSystem =
    M_AIRTIGHT_Not_fitted;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.axleNumber =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.numberNationalSystems =
    kcg_lit_int64(0);
  for (idx35 = 0; idx35 < 5; idx35++) {
    Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.nationSystems[idx35] =
      kcg_lit_int64(0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.numberTractionSystems =
    kcg_lit_int64(0);
  for (idx36 = 0; idx36 < 4; idx36++) {
    Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.tractionSystem[idx36].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.tractionSystem[idx36].nid_ctraction =
      kcg_lit_int64(0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.type_I_train_and_brake_inhibition.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  for (idx37 = 0; idx37 < 311; idx37++) {
    Ctxt_ROOT_Integration_Testbench_Integration.API_fromDMI[idx37] =
      kcg_lit_int64(0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration.every = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L238 = M_LEVEL_Level_0;
  Ctxt_ROOT_Integration_Testbench_Integration._L222 = M_MODE_Full_Supervision;
  Ctxt_ROOT_Integration_Testbench_Integration._L1 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L2.Message.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L2.Message.nid_message =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L2.Message.l_message =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L2.Message.t_train =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L2.Message.nid_engine =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L2.Message.field1 =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L2.Message.field2 =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L2.Message.field3 =
    kcg_lit_int64(0);
  for (idx38 = 0; idx38 < 50; idx38++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L2.OptionalPackets[idx38] =
      kcg_lit_int64(0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L3.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L3.cmd =
    cmdr_not_relevant_API_RadioCommunication_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L3.networkID = kcg_lit_int64(0);
  for (idx39 = 0; idx39 < 999; idx39++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L4[idx39] = kcg_lit_int64(0);
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L5.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.isolation_status.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.brake_command.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.brake_inhibition.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.type_I_train_commands.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_traction_system.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_traction_system.d_test_traction.now =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_traction_system.d_test_traction.distance =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_traction_system.m_voltage.NID_ctraction =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.passenger_door_control_info.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.passenger_door_control_info.door_control_info =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_of_allowed_current_consumption.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_of_allowed_current_consumption.d_test_current.now =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_of_allowed_current_consumption.d_test_current.distance =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_of_allowed_current_consumption.m_current.restriction =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L6 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L7 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L8 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L9 = kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration._L10 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration._L11 = kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.init = kcg_true;
  /* _L1=(EVC#1)/ */
  EVC_init(&Ctxt_ROOT_Integration_Testbench_Integration.Context_EVC_1);
  /* _L94=(Toolbox::DMI#1)/ */
  DMI_init_Toolbox(&Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1);
  /* _L21=(Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete#1)/ */
  TestEnvironmentSimulation_IncludingRBC_Complete_init_Toolbox(
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_TestEnvironmentSimulation_IncludingRBC_Complete_1);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_InterpolatedDistanceToTarget_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayOfMsgIndex_toDisplay[0] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayOfMsgIndex_toDisplay[1] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayOfMsgIndex_toDisplay[2] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayOfMsgIndex_toDisplay[3] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayOfMsgIndex_toDisplay[4] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_iconGroupIndex_toDisplay =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainSpeed_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_traindataValidWinVisibility_toDisplay =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_Vtarget_permVisibility_toDisplay =
    kcg_false;
  kcg_copy_array_float64_32(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_GradientsStart_toDisplay,
    (array_float64_32 *) &cD_GradientsValue_DMI_Control_Pkg);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainAirtightIndex_toDisplay =
    kcg_lit_int64(1);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedDigitTwo_toDisplay =
    kcg_lit_float64(0.0);
  kcg_copy_array_int64_9(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DriverID_Display_toDisplay,
    (array_int64_9 *) &InitText1_DMI_Control_Pkg);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_Vinterv_Color_toDisplay =
    kcg_lit_int64(1);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DistanceToTarget_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ModeSymbol_toDisplay =
    kcg_lit_int64(13);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_modeSymbolAnnouncementIndex_toDisplay =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ETCS_LevelSymbol_toDisplay =
    kcg_lit_int64(4);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[0] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[1] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[2] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[3] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[4] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[5] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[6] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[7] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[8] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[9] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[10] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[11] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[12] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[13] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[14] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[15] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[16] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[17] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[18] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[19] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[20] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[21] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[22] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[23] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[24] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[25] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[26] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[27] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[28] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[29] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainBrakePerc_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_VreleaseColor_toDisplay =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedPermitted_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainCategoryIndex_toDisplay =
    kcg_lit_int64(1);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_levelSymbolAnnouncementIndex_toDisplay =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainDataWindowVisibility_toDisplay =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_StatusSymbolBrake_toDisplay =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_traindataYesNoIndex_toDisplay =
    kcg_lit_int64(1);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_vtarget_permColor_toDisplay =
    kcg_lit_int64(1);
  kcg_copy_array_float64_32(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_GradientsEnd_toDisplay,
    (array_float64_32 *) &cD_GradientsValue_DMI_Control_Pkg);
  kcg_copy_array_int64_9(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainRN_Display_toDisplay,
    (array_int64_9 *) &InitText1_DMI_Control_Pkg);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainLoadingGougeIndex_toDisplay =
    kcg_lit_int64(1);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedDigitThree_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ModeSymbolVisibility_toDisplay =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedIntervention_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_LevelSymbolVisibility_toDisplay =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DistanceToTargetVisible_toDisplay =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainMaxspeed_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_VtargetColor_toDisplay =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedRelease_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_CloseButtonEnabler_toDisplay =
    kcg_lit_int64(26);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_PointerColor_toDisplay =
    kcg_lit_int64(1);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainAxleloadIndex_toDisplay =
    kcg_lit_int64(1);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedDigitOne_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DistanceToTargetBarVisibility_toDisplay =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_Vinterv_Visibility_toDisplay =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainPosition_toDisplay =
    kcg_lit_float64(0.0);
  kcg_copy_array_float64_32(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_GradientsValue_toDisplay,
    (array_float64_32 *) &cD_GradientsValue_DMI_Control_Pkg);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainLenght_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_VpermColor_toDisplay =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedTarget_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[0] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[1] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[2] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[3] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[4] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[5] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[6] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[7] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[8] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[9] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[10] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[11] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[12] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[13] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[14] =
    kcg_false;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toRBC,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &cInit_toRTM_Testbench_Integration);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU,
    (TIU_Output_msg_API_TIU_Pkg *) &cInit_API_toTIU1_Testbench_Integration);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toRTM_Management,
    (RadioManagement_T_API_RadioCommunication_Pkg *)
      &cInitRTMManagement_Testbench_Integration);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toDMI,
    (EVC_to_DMI_Message_int_T_API_DMI_Pkg *)
      &cInit_API_toDMI_Testbench_Integration);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_openDesk_toDisplay =
    kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ROOT_Integration_reset_Testbench_Integration(void)
{
  Ctxt_ROOT_Integration_Testbench_Integration.init = kcg_true;
  /* _L1=(EVC#1)/ */
  EVC_reset(&Ctxt_ROOT_Integration_Testbench_Integration.Context_EVC_1);
  /* _L94=(Toolbox::DMI#1)/ */
  DMI_reset_Toolbox(&Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1);
  /* _L21=(Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete#1)/ */
  TestEnvironmentSimulation_IncludingRBC_Complete_reset_Toolbox(
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_TestEnvironmentSimulation_IncludingRBC_Complete_1);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_InterpolatedDistanceToTarget_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayOfMsgIndex_toDisplay[0] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayOfMsgIndex_toDisplay[1] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayOfMsgIndex_toDisplay[2] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayOfMsgIndex_toDisplay[3] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayOfMsgIndex_toDisplay[4] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_iconGroupIndex_toDisplay =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainSpeed_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_traindataValidWinVisibility_toDisplay =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_Vtarget_permVisibility_toDisplay =
    kcg_false;
  kcg_copy_array_float64_32(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_GradientsStart_toDisplay,
    (array_float64_32 *) &cD_GradientsValue_DMI_Control_Pkg);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainAirtightIndex_toDisplay =
    kcg_lit_int64(1);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedDigitTwo_toDisplay =
    kcg_lit_float64(0.0);
  kcg_copy_array_int64_9(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DriverID_Display_toDisplay,
    (array_int64_9 *) &InitText1_DMI_Control_Pkg);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_Vinterv_Color_toDisplay =
    kcg_lit_int64(1);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DistanceToTarget_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ModeSymbol_toDisplay =
    kcg_lit_int64(13);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_modeSymbolAnnouncementIndex_toDisplay =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ETCS_LevelSymbol_toDisplay =
    kcg_lit_int64(4);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[0] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[1] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[2] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[3] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[4] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[5] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[6] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[7] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[8] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[9] =
    kcg_lit_int64(2);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[10] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[11] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[12] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[13] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[14] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[15] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[16] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[17] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[18] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[19] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[20] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[21] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[22] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[23] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[24] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[25] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[26] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[27] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[28] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay[29] =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainBrakePerc_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_VreleaseColor_toDisplay =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedPermitted_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainCategoryIndex_toDisplay =
    kcg_lit_int64(1);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_levelSymbolAnnouncementIndex_toDisplay =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainDataWindowVisibility_toDisplay =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_StatusSymbolBrake_toDisplay =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_traindataYesNoIndex_toDisplay =
    kcg_lit_int64(1);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_vtarget_permColor_toDisplay =
    kcg_lit_int64(1);
  kcg_copy_array_float64_32(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_GradientsEnd_toDisplay,
    (array_float64_32 *) &cD_GradientsValue_DMI_Control_Pkg);
  kcg_copy_array_int64_9(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainRN_Display_toDisplay,
    (array_int64_9 *) &InitText1_DMI_Control_Pkg);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainLoadingGougeIndex_toDisplay =
    kcg_lit_int64(1);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedDigitThree_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ModeSymbolVisibility_toDisplay =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedIntervention_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_LevelSymbolVisibility_toDisplay =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DistanceToTargetVisible_toDisplay =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainMaxspeed_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_VtargetColor_toDisplay =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedRelease_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_CloseButtonEnabler_toDisplay =
    kcg_lit_int64(26);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_PointerColor_toDisplay =
    kcg_lit_int64(1);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainAxleloadIndex_toDisplay =
    kcg_lit_int64(1);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedDigitOne_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DistanceToTargetBarVisibility_toDisplay =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_Vinterv_Visibility_toDisplay =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainPosition_toDisplay =
    kcg_lit_float64(0.0);
  kcg_copy_array_float64_32(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_GradientsValue_toDisplay,
    (array_float64_32 *) &cD_GradientsValue_DMI_Control_Pkg);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainLenght_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_VpermColor_toDisplay =
    kcg_lit_int64(0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedTarget_toDisplay =
    kcg_lit_float64(0.0);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[0] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[1] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[2] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[3] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[4] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[5] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[6] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[7] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[8] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[9] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[10] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[11] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[12] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[13] =
    kcg_false;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay[14] =
    kcg_false;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toRBC,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &cInit_toRTM_Testbench_Integration);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU,
    (TIU_Output_msg_API_TIU_Pkg *) &cInit_API_toTIU1_Testbench_Integration);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toRTM_Management,
    (RadioManagement_T_API_RadioCommunication_Pkg *)
      &cInitRTMManagement_Testbench_Integration);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toDMI,
    (EVC_to_DMI_Message_int_T_API_DMI_Pkg *)
      &cInit_API_toDMI_Testbench_Integration);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_openDesk_toDisplay =
    kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_ROOT_Integration_Testbench_Integration(
  SV_ROOT_Integration_Testbench_Integration *SV)
{
  kcg_save_SV_TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox(
    &SV->Context_TestEnvironmentSimulation_IncludingRBC_Complete_1,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_TestEnvironmentSimulation_IncludingRBC_Complete_1);
  kcg_save_SV_DMI_Toolbox(
    &SV->Context_DMI_1,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1);
  kcg_save_SV_EVC(
    &SV->Context_EVC_1,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_EVC_1);
  SV->Context__L238 = Ctxt_ROOT_Integration_Testbench_Integration._L238;
  SV->Context__L222 = Ctxt_ROOT_Integration_Testbench_Integration._L222;
  SV->Context__L1 = Ctxt_ROOT_Integration_Testbench_Integration._L1;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &SV->Context__L2,
    &Ctxt_ROOT_Integration_Testbench_Integration._L2);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &SV->Context__L3,
    &Ctxt_ROOT_Integration_Testbench_Integration._L3);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &SV->Context__L4,
    &Ctxt_ROOT_Integration_Testbench_Integration._L4);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &SV->Context__L5,
    &Ctxt_ROOT_Integration_Testbench_Integration._L5);
  SV->Context__L6 = Ctxt_ROOT_Integration_Testbench_Integration._L6;
  SV->Context__L7 = Ctxt_ROOT_Integration_Testbench_Integration._L7;
  SV->Context__L8 = Ctxt_ROOT_Integration_Testbench_Integration._L8;
  SV->Context__L9 = Ctxt_ROOT_Integration_Testbench_Integration._L9;
  SV->Context__L10 = Ctxt_ROOT_Integration_Testbench_Integration._L10;
  SV->Context__L11 = Ctxt_ROOT_Integration_Testbench_Integration._L11;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &SV->Context_API_toRBC,
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toRBC);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &SV->Context_API_toRTM_Management,
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toRTM_Management);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &SV->Context_API_toTIU,
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &SV->Context_API_toDMI,
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toDMI);
  SV->Context_init = Ctxt_ROOT_Integration_Testbench_Integration.init;
  SV->Context_mem_DMI_InterpolatedDistanceToTarget_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_InterpolatedDistanceToTarget_toDisplay;
  kcg_copy_array_int64_5(
    &SV->Context_mem_DMI_ArrayOfMsgIndex_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayOfMsgIndex_toDisplay);
  SV->Context_mem_DMI_iconGroupIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_iconGroupIndex_toDisplay;
  SV->Context_mem_DMI_TrainSpeed_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainSpeed_toDisplay;
  SV->Context_mem_DMI_traindataValidWinVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_traindataValidWinVisibility_toDisplay;
  SV->Context_mem_DMI_Vtarget_permVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_Vtarget_permVisibility_toDisplay;
  kcg_copy_array_float64_32(
    &SV->Context_mem_DMI_GradientsStart_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_GradientsStart_toDisplay);
  SV->Context_mem_DMI_trainAirtightIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainAirtightIndex_toDisplay;
  SV->Context_mem_DMI_SpeedDigitTwo_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedDigitTwo_toDisplay;
  kcg_copy_array_int64_9(
    &SV->Context_mem_DMI_DriverID_Display_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DriverID_Display_toDisplay);
  SV->Context_mem_DMI_Vinterv_Color_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_Vinterv_Color_toDisplay;
  SV->Context_mem_DMI_DistanceToTarget_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DistanceToTarget_toDisplay;
  SV->Context_mem_DMI_ModeSymbol_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ModeSymbol_toDisplay;
  SV->Context_mem_DMI_modeSymbolAnnouncementIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_modeSymbolAnnouncementIndex_toDisplay;
  SV->Context_mem_DMI_ETCS_LevelSymbol_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ETCS_LevelSymbol_toDisplay;
  kcg_copy_array_int64_30(
    &SV->Context_mem_DMI_ArrayButtonsEnabler_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay);
  SV->Context_mem_DMI_trainBrakePerc_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainBrakePerc_toDisplay;
  SV->Context_mem_DMI_VreleaseColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_VreleaseColor_toDisplay;
  SV->Context_mem_DMI_SpeedPermitted_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedPermitted_toDisplay;
  SV->Context_mem_DMI_trainCategoryIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainCategoryIndex_toDisplay;
  SV->Context_mem_DMI_levelSymbolAnnouncementIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_levelSymbolAnnouncementIndex_toDisplay;
  SV->Context_mem_DMI_TrainDataWindowVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainDataWindowVisibility_toDisplay;
  SV->Context_mem_DMI_StatusSymbolBrake_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_StatusSymbolBrake_toDisplay;
  SV->Context_mem_DMI_traindataYesNoIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_traindataYesNoIndex_toDisplay;
  SV->Context_mem_DMI_vtarget_permColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_vtarget_permColor_toDisplay;
  kcg_copy_array_float64_32(
    &SV->Context_mem_DMI_GradientsEnd_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_GradientsEnd_toDisplay);
  kcg_copy_array_int64_9(
    &SV->Context_mem_DMI_TrainRN_Display_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainRN_Display_toDisplay);
  SV->Context_mem_DMI_trainLoadingGougeIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainLoadingGougeIndex_toDisplay;
  SV->Context_mem_DMI_SpeedDigitThree_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedDigitThree_toDisplay;
  SV->Context_mem_DMI_ModeSymbolVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ModeSymbolVisibility_toDisplay;
  SV->Context_mem_DMI_SpeedIntervention_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedIntervention_toDisplay;
  SV->Context_mem_DMI_LevelSymbolVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_LevelSymbolVisibility_toDisplay;
  SV->Context_mem_DMI_DistanceToTargetVisible_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DistanceToTargetVisible_toDisplay;
  SV->Context_mem_DMI_trainMaxspeed_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainMaxspeed_toDisplay;
  SV->Context_mem_DMI_VtargetColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_VtargetColor_toDisplay;
  SV->Context_mem_DMI_SpeedRelease_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedRelease_toDisplay;
  SV->Context_mem_DMI_CloseButtonEnabler_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_CloseButtonEnabler_toDisplay;
  SV->Context_mem_DMI_PointerColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_PointerColor_toDisplay;
  SV->Context_mem_DMI_trainAxleloadIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainAxleloadIndex_toDisplay;
  SV->Context_mem_DMI_SpeedDigitOne_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedDigitOne_toDisplay;
  SV->Context_mem_DMI_DistanceToTargetBarVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DistanceToTargetBarVisibility_toDisplay;
  SV->Context_mem_DMI_Vinterv_Visibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_Vinterv_Visibility_toDisplay;
  SV->Context_mem_DMI_TrainPosition_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainPosition_toDisplay;
  kcg_copy_array_float64_32(
    &SV->Context_mem_DMI_GradientsValue_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_GradientsValue_toDisplay);
  SV->Context_mem_DMI_trainLenght_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainLenght_toDisplay;
  SV->Context_mem_DMI_VpermColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_VpermColor_toDisplay;
  SV->Context_mem_DMI_SpeedTarget_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedTarget_toDisplay;
  kcg_copy_array_bool_15(
    &SV->Context_mem_DMI_window_mask_visibility__toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay);
  SV->Context_mem_DMI_openDesk_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_openDesk_toDisplay;
}

void kcg_load_SV_ROOT_Integration_Testbench_Integration(
  SV_ROOT_Integration_Testbench_Integration *SV)
{
  kcg_load_SV_TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox(
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_TestEnvironmentSimulation_IncludingRBC_Complete_1,
    &SV->Context_TestEnvironmentSimulation_IncludingRBC_Complete_1);
  kcg_load_SV_DMI_Toolbox(
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_DMI_1,
    &SV->Context_DMI_1);
  kcg_load_SV_EVC(
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_EVC_1,
    &SV->Context_EVC_1);
  Ctxt_ROOT_Integration_Testbench_Integration._L238 = SV->Context__L238;
  Ctxt_ROOT_Integration_Testbench_Integration._L222 = SV->Context__L222;
  Ctxt_ROOT_Integration_Testbench_Integration._L1 = SV->Context__L1;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &Ctxt_ROOT_Integration_Testbench_Integration._L2,
    &SV->Context__L2);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L3,
    &SV->Context__L3);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L4,
    &SV->Context__L4);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L5,
    &SV->Context__L5);
  Ctxt_ROOT_Integration_Testbench_Integration._L6 = SV->Context__L6;
  Ctxt_ROOT_Integration_Testbench_Integration._L7 = SV->Context__L7;
  Ctxt_ROOT_Integration_Testbench_Integration._L8 = SV->Context__L8;
  Ctxt_ROOT_Integration_Testbench_Integration._L9 = SV->Context__L9;
  Ctxt_ROOT_Integration_Testbench_Integration._L10 = SV->Context__L10;
  Ctxt_ROOT_Integration_Testbench_Integration._L11 = SV->Context__L11;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toRBC,
    &SV->Context_API_toRBC);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toRTM_Management,
    &SV->Context_API_toRTM_Management);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU,
    &SV->Context_API_toTIU);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toDMI,
    &SV->Context_API_toDMI);
  Ctxt_ROOT_Integration_Testbench_Integration.init = SV->Context_init;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_InterpolatedDistanceToTarget_toDisplay =
    SV->Context_mem_DMI_InterpolatedDistanceToTarget_toDisplay;
  kcg_copy_array_int64_5(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayOfMsgIndex_toDisplay,
    &SV->Context_mem_DMI_ArrayOfMsgIndex_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_iconGroupIndex_toDisplay =
    SV->Context_mem_DMI_iconGroupIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainSpeed_toDisplay =
    SV->Context_mem_DMI_TrainSpeed_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_traindataValidWinVisibility_toDisplay =
    SV->Context_mem_DMI_traindataValidWinVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_Vtarget_permVisibility_toDisplay =
    SV->Context_mem_DMI_Vtarget_permVisibility_toDisplay;
  kcg_copy_array_float64_32(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_GradientsStart_toDisplay,
    &SV->Context_mem_DMI_GradientsStart_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainAirtightIndex_toDisplay =
    SV->Context_mem_DMI_trainAirtightIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedDigitTwo_toDisplay =
    SV->Context_mem_DMI_SpeedDigitTwo_toDisplay;
  kcg_copy_array_int64_9(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DriverID_Display_toDisplay,
    &SV->Context_mem_DMI_DriverID_Display_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_Vinterv_Color_toDisplay =
    SV->Context_mem_DMI_Vinterv_Color_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DistanceToTarget_toDisplay =
    SV->Context_mem_DMI_DistanceToTarget_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ModeSymbol_toDisplay =
    SV->Context_mem_DMI_ModeSymbol_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_modeSymbolAnnouncementIndex_toDisplay =
    SV->Context_mem_DMI_modeSymbolAnnouncementIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ETCS_LevelSymbol_toDisplay =
    SV->Context_mem_DMI_ETCS_LevelSymbol_toDisplay;
  kcg_copy_array_int64_30(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ArrayButtonsEnabler_toDisplay,
    &SV->Context_mem_DMI_ArrayButtonsEnabler_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainBrakePerc_toDisplay =
    SV->Context_mem_DMI_trainBrakePerc_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_VreleaseColor_toDisplay =
    SV->Context_mem_DMI_VreleaseColor_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedPermitted_toDisplay =
    SV->Context_mem_DMI_SpeedPermitted_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainCategoryIndex_toDisplay =
    SV->Context_mem_DMI_trainCategoryIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_levelSymbolAnnouncementIndex_toDisplay =
    SV->Context_mem_DMI_levelSymbolAnnouncementIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainDataWindowVisibility_toDisplay =
    SV->Context_mem_DMI_TrainDataWindowVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_StatusSymbolBrake_toDisplay =
    SV->Context_mem_DMI_StatusSymbolBrake_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_traindataYesNoIndex_toDisplay =
    SV->Context_mem_DMI_traindataYesNoIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_vtarget_permColor_toDisplay =
    SV->Context_mem_DMI_vtarget_permColor_toDisplay;
  kcg_copy_array_float64_32(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_GradientsEnd_toDisplay,
    &SV->Context_mem_DMI_GradientsEnd_toDisplay);
  kcg_copy_array_int64_9(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainRN_Display_toDisplay,
    &SV->Context_mem_DMI_TrainRN_Display_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainLoadingGougeIndex_toDisplay =
    SV->Context_mem_DMI_trainLoadingGougeIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedDigitThree_toDisplay =
    SV->Context_mem_DMI_SpeedDigitThree_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_ModeSymbolVisibility_toDisplay =
    SV->Context_mem_DMI_ModeSymbolVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedIntervention_toDisplay =
    SV->Context_mem_DMI_SpeedIntervention_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_LevelSymbolVisibility_toDisplay =
    SV->Context_mem_DMI_LevelSymbolVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DistanceToTargetVisible_toDisplay =
    SV->Context_mem_DMI_DistanceToTargetVisible_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainMaxspeed_toDisplay =
    SV->Context_mem_DMI_trainMaxspeed_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_VtargetColor_toDisplay =
    SV->Context_mem_DMI_VtargetColor_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedRelease_toDisplay =
    SV->Context_mem_DMI_SpeedRelease_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_CloseButtonEnabler_toDisplay =
    SV->Context_mem_DMI_CloseButtonEnabler_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_PointerColor_toDisplay =
    SV->Context_mem_DMI_PointerColor_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainAxleloadIndex_toDisplay =
    SV->Context_mem_DMI_trainAxleloadIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedDigitOne_toDisplay =
    SV->Context_mem_DMI_SpeedDigitOne_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_DistanceToTargetBarVisibility_toDisplay =
    SV->Context_mem_DMI_DistanceToTargetBarVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_Vinterv_Visibility_toDisplay =
    SV->Context_mem_DMI_Vinterv_Visibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_TrainPosition_toDisplay =
    SV->Context_mem_DMI_TrainPosition_toDisplay;
  kcg_copy_array_float64_32(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_GradientsValue_toDisplay,
    &SV->Context_mem_DMI_GradientsValue_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_trainLenght_toDisplay =
    SV->Context_mem_DMI_trainLenght_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_VpermColor_toDisplay =
    SV->Context_mem_DMI_VpermColor_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_SpeedTarget_toDisplay =
    SV->Context_mem_DMI_SpeedTarget_toDisplay;
  kcg_copy_array_bool_15(
    &Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_window_mask_visibility__toDisplay,
    &SV->Context_mem_DMI_window_mask_visibility__toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration.mem_DMI_openDesk_toDisplay =
    SV->Context_mem_DMI_openDesk_toDisplay;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ROOT_Integration_Testbench_Integration.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

