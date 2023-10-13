/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _ROOT_Integration_Testbench_Integration_H_
#define _ROOT_Integration_Testbench_Integration_H_

#include "kcg_types.h"
#include "DMI_Toolbox.h"
#include "TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox.h"
#include "EVC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* -----------------------   local probes  ------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* debugTrainPositionNominal/ */ debugTrainPositionNominal;
  kcg_float64 /* debugPermittedSpeed/ */ debugPermittedSpeed;
  kcg_float64 /* debugInterventionSpeed/ */ debugInterventionSpeed;
  M_MODE /* debugCurrentMode/ */ debugCurrentMode;
  M_LEVEL /* debugCurrentLevel/ */ debugCurrentLevel;
  mobileHWStatus_Type_MoRC_Pck /* debugMobileHwStatus/ */ debugMobileHwStatus;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* DMI_openDesk_toDisplay/ */ mem_DMI_openDesk_toDisplay;
  array_bool_15 /* DMI_window_mask_visibility__toDisplay/ */ mem_DMI_window_mask_visibility__toDisplay;
  kcg_float64 /* DMI_SpeedTarget_toDisplay/ */ mem_DMI_SpeedTarget_toDisplay;
  kcg_int64 /* DMI_VpermColor_toDisplay/ */ mem_DMI_VpermColor_toDisplay;
  kcg_float64 /* DMI_trainLenght_toDisplay/ */ mem_DMI_trainLenght_toDisplay;
  array_float64_32 /* DMI_GradientsValue_toDisplay/ */ mem_DMI_GradientsValue_toDisplay;
  kcg_float64 /* DMI_TrainPosition_toDisplay/ */ mem_DMI_TrainPosition_toDisplay;
  kcg_bool /* DMI_Vinterv_Visibility_toDisplay/ */ mem_DMI_Vinterv_Visibility_toDisplay;
  kcg_bool /* DMI_DistanceToTargetBarVisibility_toDisplay/ */ mem_DMI_DistanceToTargetBarVisibility_toDisplay;
  kcg_float64 /* DMI_SpeedDigitOne_toDisplay/ */ mem_DMI_SpeedDigitOne_toDisplay;
  kcg_int64 /* DMI_trainAxleloadIndex_toDisplay/ */ mem_DMI_trainAxleloadIndex_toDisplay;
  kcg_int64 /* DMI_PointerColor_toDisplay/ */ mem_DMI_PointerColor_toDisplay;
  kcg_int64 /* DMI_CloseButtonEnabler_toDisplay/ */ mem_DMI_CloseButtonEnabler_toDisplay;
  kcg_float64 /* DMI_SpeedRelease_toDisplay/ */ mem_DMI_SpeedRelease_toDisplay;
  kcg_int64 /* DMI_VtargetColor_toDisplay/ */ mem_DMI_VtargetColor_toDisplay;
  kcg_float64 /* DMI_trainMaxspeed_toDisplay/ */ mem_DMI_trainMaxspeed_toDisplay;
  kcg_bool /* DMI_DistanceToTargetVisible_toDisplay/ */ mem_DMI_DistanceToTargetVisible_toDisplay;
  kcg_bool /* DMI_LevelSymbolVisibility_toDisplay/ */ mem_DMI_LevelSymbolVisibility_toDisplay;
  kcg_float64 /* DMI_SpeedIntervention_toDisplay/ */ mem_DMI_SpeedIntervention_toDisplay;
  kcg_bool /* DMI_ModeSymbolVisibility_toDisplay/ */ mem_DMI_ModeSymbolVisibility_toDisplay;
  kcg_float64 /* DMI_SpeedDigitThree_toDisplay/ */ mem_DMI_SpeedDigitThree_toDisplay;
  kcg_int64 /* DMI_trainLoadingGougeIndex_toDisplay/ */ mem_DMI_trainLoadingGougeIndex_toDisplay;
  array_int64_9 /* DMI_TrainRN_Display_toDisplay/ */ mem_DMI_TrainRN_Display_toDisplay;
  array_float64_32 /* DMI_GradientsEnd_toDisplay/ */ mem_DMI_GradientsEnd_toDisplay;
  kcg_int64 /* DMI_vtarget_permColor_toDisplay/ */ mem_DMI_vtarget_permColor_toDisplay;
  kcg_int64 /* DMI_traindataYesNoIndex_toDisplay/ */ mem_DMI_traindataYesNoIndex_toDisplay;
  kcg_bool /* DMI_StatusSymbolBrake_toDisplay/ */ mem_DMI_StatusSymbolBrake_toDisplay;
  kcg_bool /* DMI_TrainDataWindowVisibility_toDisplay/ */ mem_DMI_TrainDataWindowVisibility_toDisplay;
  kcg_int64 /* DMI_levelSymbolAnnouncementIndex_toDisplay/ */ mem_DMI_levelSymbolAnnouncementIndex_toDisplay;
  kcg_int64 /* DMI_trainCategoryIndex_toDisplay/ */ mem_DMI_trainCategoryIndex_toDisplay;
  kcg_float64 /* DMI_SpeedPermitted_toDisplay/ */ mem_DMI_SpeedPermitted_toDisplay;
  kcg_int64 /* DMI_VreleaseColor_toDisplay/ */ mem_DMI_VreleaseColor_toDisplay;
  kcg_float64 /* DMI_trainBrakePerc_toDisplay/ */ mem_DMI_trainBrakePerc_toDisplay;
  array_int64_30 /* DMI_ArrayButtonsEnabler_toDisplay/ */ mem_DMI_ArrayButtonsEnabler_toDisplay;
  kcg_int64 /* DMI_ETCS_LevelSymbol_toDisplay/ */ mem_DMI_ETCS_LevelSymbol_toDisplay;
  kcg_int64 /* DMI_modeSymbolAnnouncementIndex_toDisplay/ */ mem_DMI_modeSymbolAnnouncementIndex_toDisplay;
  kcg_int64 /* DMI_ModeSymbol_toDisplay/ */ mem_DMI_ModeSymbol_toDisplay;
  kcg_float64 /* DMI_DistanceToTarget_toDisplay/ */ mem_DMI_DistanceToTarget_toDisplay;
  kcg_int64 /* DMI_Vinterv_Color_toDisplay/ */ mem_DMI_Vinterv_Color_toDisplay;
  array_int64_9 /* DMI_DriverID_Display_toDisplay/ */ mem_DMI_DriverID_Display_toDisplay;
  kcg_float64 /* DMI_SpeedDigitTwo_toDisplay/ */ mem_DMI_SpeedDigitTwo_toDisplay;
  kcg_int64 /* DMI_trainAirtightIndex_toDisplay/ */ mem_DMI_trainAirtightIndex_toDisplay;
  array_float64_32 /* DMI_GradientsStart_toDisplay/ */ mem_DMI_GradientsStart_toDisplay;
  kcg_bool /* DMI_Vtarget_permVisibility_toDisplay/ */ mem_DMI_Vtarget_permVisibility_toDisplay;
  kcg_bool /* DMI_traindataValidWinVisibility_toDisplay/ */ mem_DMI_traindataValidWinVisibility_toDisplay;
  kcg_float64 /* DMI_TrainSpeed_toDisplay/ */ mem_DMI_TrainSpeed_toDisplay;
  kcg_int64 /* DMI_iconGroupIndex_toDisplay/ */ mem_DMI_iconGroupIndex_toDisplay;
  array_int64_5 /* DMI_ArrayOfMsgIndex_toDisplay/ */ mem_DMI_ArrayOfMsgIndex_toDisplay;
  kcg_float64 /* DMI_InterpolatedDistanceToTarget_toDisplay/ */ mem_DMI_InterpolatedDistanceToTarget_toDisplay;
  kcg_bool init;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* API_toDMI/ */ API_toDMI;
  TIU_Output_msg_API_TIU_Pkg /* API_toTIU/ */ API_toTIU;
  RadioManagement_T_API_RadioCommunication_Pkg /* API_toRTM_Management/ */ API_toRTM_Management;
  M_TrainTrack_Message_T_TM_radio_messages /* API_toRBC/ */ API_toRBC;
  kcg_float64 /* _L11/ */ _L11;
  kcg_float64 /* _L10/ */ _L10;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  TIU_Output_msg_API_TIU_Pkg /* _L5/ */ _L5;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* _L4/ */ _L4;
  RadioManagement_T_API_RadioCommunication_Pkg /* _L3/ */ _L3;
  M_TrainTrack_Message_T_TM_radio_messages /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  M_MODE /* _L222/ */ _L222;
  M_LEVEL /* _L238/ */ _L238;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_EVC /* _L1=(EVC#1)/ */ Context_EVC_1;
  outC_DMI_Toolbox /* _L94=(Toolbox::DMI#1)/ */ Context_DMI_1;
  outC_TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox /* _L21=(Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete#1)/ */ Context_TestEnvironmentSimulation_IncludingRBC_Complete_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* API_fromDMI/ */ API_fromDMI;
  TIU_Input_msg_API_TIU_Pkg /* EVC_fromTIU/ */ EVC_fromTIU;
  kcg_bool /* clockEVC/ */ clockEVC;
  mobileHWStatus_Type_MoRC_Pck /* _L26/ */ _L26;
  TIU_Input_msg_API_TIU_Pkg /* _L25/ */ _L25;
  API_TrackSideInput_T_API_Msg_Pkg /* _L24/ */ _L24;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L23/ */ _L23;
  odometry_T_Obu_BasicTypes_Pkg /* _L22/ */ _L22;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L153/ */ _L153;
  kcg_float64 /* _L152/ */ _L152;
  array_int64_5 /* _L151/ */ _L151;
  kcg_int64 /* _L150/ */ _L150;
  kcg_float64 /* _L149/ */ _L149;
  kcg_bool /* _L148/ */ _L148;
  kcg_bool /* _L147/ */ _L147;
  kcg_bool /* _L146/ */ _L146;
  array_float64_32 /* _L145/ */ _L145;
  kcg_int64 /* _L144/ */ _L144;
  kcg_bool /* _L143/ */ _L143;
  kcg_float64 /* _L142/ */ _L142;
  array_int64_9 /* _L141/ */ _L141;
  kcg_bool /* _L140/ */ _L140;
  kcg_int64 /* _L139/ */ _L139;
  kcg_float64 /* _L138/ */ _L138;
  kcg_int64 /* _L137/ */ _L137;
  kcg_int64 /* _L136/ */ _L136;
  kcg_int64 /* _L135/ */ _L135;
  array_int64_30 /* _L134/ */ _L134;
  kcg_float64 /* _L133/ */ _L133;
  kcg_int64 /* _L132/ */ _L132;
  kcg_float64 /* _L131/ */ _L131;
  kcg_int64 /* _L130/ */ _L130;
  kcg_int64 /* _L129/ */ _L129;
  kcg_bool /* _L128/ */ _L128;
  kcg_bool /* _L127/ */ _L127;
  kcg_int64 /* _L126/ */ _L126;
  kcg_int64 /* _L125/ */ _L125;
  array_float64_32 /* _L124/ */ _L124;
  kcg_int64 /* _L123/ */ _L123;
  array_int64_9 /* _L122/ */ _L122;
  kcg_int64 /* _L121/ */ _L121;
  kcg_float64 /* _L120/ */ _L120;
  kcg_float64 /* _L119/ */ _L119;
  kcg_bool /* _L118/ */ _L118;
  kcg_int64 /* _L117/ */ _L117;
  kcg_bool /* _L116/ */ _L116;
  kcg_float64 /* _L115/ */ _L115;
  kcg_bool /* _L114/ */ _L114;
  kcg_bool /* _L113/ */ _L113;
  kcg_float64 /* _L112/ */ _L112;
  kcg_int64 /* _L111/ */ _L111;
  kcg_float64 /* _L110/ */ _L110;
  kcg_int64 /* _L109/ */ _L109;
  kcg_int64 /* _L108/ */ _L108;
  kcg_int64 /* _L107/ */ _L107;
  kcg_bool /* _L106/ */ _L106;
  kcg_float64 /* _L105/ */ _L105;
  kcg_bool /* _L104/ */ _L104;
  kcg_bool /* _L103/ */ _L103;
  kcg_float64 /* _L102/ */ _L102;
  array_float64_32 /* _L101/ */ _L101;
  kcg_float64 /* _L100/ */ _L100;
  kcg_int64 /* _L99/ */ _L99;
  kcg_float64 /* _L98/ */ _L98;
  array_bool_15 /* _L97/ */ _L97;
  kcg_bool /* _L96/ */ _L96;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L95/ */ _L95;
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* _L94/ */ _L94;
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* _L154/ */ _L154;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* _L156/ */ _L156;
  kcg_bool /* _L159/ */ _L159;
  kcg_bool /* _L160/ */ _L160;
  kcg_bool /* _L161/ */ _L161;
  kcg_bool /* _L162/ */ _L162;
  array_bool_12 /* _L164/ */ _L164;
  kcg_bool /* _L165/ */ _L165;
  kcg_bool /* _L166/ */ _L166;
  kcg_bool /* _L168/ */ _L168;
  kcg_bool /* _L169/ */ _L169;
  kcg_bool /* _L170/ */ _L170;
  kcg_bool /* _L171/ */ _L171;
  kcg_bool /* _L172/ */ _L172;
  TIU_Input_msg_API_TIU_Pkg /* _L173/ */ _L173;
  kcg_float64 /* _L182/ */ _L182;
  kcg_float64 /* _L183/ */ _L183;
  kcg_float64 /* _L188/ */ _L188;
  kcg_bool /* _L189/ */ _L189;
  kcg_bool /* _L190/ */ _L190;
  kcg_bool /* _L195/ */ _L195;
  array_int64_12 /* _L194/ */ _L194;
  kcg_int64 /* _L193/ */ _L193;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* _L192/ */ _L192;
  array_int64_5 /* _L191/ */ _L191;
  kcg_float64 /* _L32/ */ _L32;
  kcg_float64 /* _L31/ */ _L31;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L30/ */ _L30;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L27/ */ _L27;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L196/ */ _L196;
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg /* _L201/ */ _L201;
  tScale /* _L214/ */ _L214;
  array_bool_32 /* _L213/ */ _L213;
  array_float64_1 /* _L212/ */ _L212;
  tPASPOutput_Array /* _L211/ */ _L211;
  tPASPOutput_Array /* _L210/ */ _L210;
  array_float64_10 /* _L209/ */ _L209;
  array_int64_10 /* _L208/ */ _L208;
  array_bool_10 /* _L207/ */ _L207;
  kcg_bool /* _L206/ */ _L206;
  array_float64_5 /* _L205/ */ _L205;
  array_float64_5 /* _L204/ */ _L204;
  array_char_30_5 /* _L203/ */ _L203;
  kcg_bool /* _L215/ */ _L215;
  kcg_bool /* _L216/ */ _L216;
  kcg_bool /* _L217/ */ _L217;
  kcg_bool /* _L218/ */ _L218;
  kcg_bool /* _L219/ */ _L219;
  kcg_bool /* _L220/ */ _L220;
  kcg_bool /* _L221/ */ _L221;
  kcg_bool /* _L223/ */ _L223;
  kcg_bool /* _L224/ */ _L224;
  kcg_bool /* _L227/ */ _L227;
  kcg_bool /* _L228/ */ _L228;
  kcg_bool /* _L229/ */ _L229;
  kcg_bool /* _L230/ */ _L230;
  TIU_Output_msg_API_TIU_Pkg /* _L240/ */ _L240;
  RadioManagement_T_API_RadioCommunication_Pkg /* _L241/ */ _L241;
  M_TrainTrack_Message_T_TM_radio_messages /* _L244/ */ _L244;
  kcg_bool /* _L245/ */ _L245;
  kcg_int64 /* _L246/ */ _L246;
  kcg_int64 /* _L247/ */ _L247;
  kcg_bool /* _L248/ */ _L248;
  kcg_bool /* _L249/ */ _L249;
  tPASPOutput_Array /* _L250/ */ _L250;
  kcg_bool /* _L180/ */ _L180;
  kcg_int64 /* _L179/ */ _L179;
  kcg_int64 /* _L178/ */ _L178;
  kcg_int64 /* _L177/ */ _L177;
  kcg_float64 /* _L176/ */ _L176;
  kcg_float64 /* _L175/ */ _L175;
  kcg_float64 /* _L232/ */ _L232;
  kcg_float64 /* _L233/ */ _L233;
  kcg_float64 /* _L231/ */ _L231;
  kcg_bool /* _L157/ */ _L157;
  kcg_bool /* _L158/ */ _L158;
} outC_ROOT_Integration_Testbench_Integration;

/* ===========  node initialization and cycle functions  =========== */
/* Testbench_Integration::ROOT_Integration/ */
extern void ROOT_Integration_Testbench_Integration(void);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ROOT_Integration_reset_Testbench_Integration(void);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ROOT_Integration_init_Testbench_Integration(void);
#endif /* KCG_USER_DEFINED_INIT */

extern outC_ROOT_Integration_Testbench_Integration Ctxt_ROOT_Integration_Testbench_Integration;

/* GUI_reset/ */
extern kcg_bool GUI_reset;
/* GUI_targetSpeed/ */
extern kcg_float64 GUI_targetSpeed;
/* GUI_traction/ */
extern kcg_float64 GUI_traction;
/* GUI_brake/ */
extern kcg_float64 GUI_brake;
/* GUI_initialPosition/ */
extern kcg_float64 GUI_initialPosition;
/* GUI_initialVelocity/ */
extern kcg_float64 GUI_initialVelocity;
/* GUI_mode/ */
extern kcg_int64 GUI_mode;
/* GUI_level/ */
extern kcg_int64 GUI_level;
/* GUI_mobileHWStatus/ */
extern kcg_int64 GUI_mobileHWStatus;
/* GUI_openDesk/ */
extern kcg_bool GUI_openDesk;
/* DMI_MousePressed/ */
extern kcg_bool DMI_MousePressed;
/* DMI_startRequest/ */
extern kcg_bool DMI_startRequest;
/* DMI_openTrainRN/ */
extern kcg_bool DMI_openTrainRN;
/* DMI_traindataYesAck/ */
extern kcg_bool DMI_traindataYesAck;
/* DMI_TrainRN_Ack/ */
extern kcg_bool DMI_TrainRN_Ack;
/* DMI_keypad/ */
extern array_bool_12 DMI_keypad;
/* DMI_openTrainDataWindow/ */
extern kcg_bool DMI_openTrainDataWindow;
/* DMI_openDriverID/ */
extern kcg_bool DMI_openDriverID;
/* DMI_DriverID_Ack/ */
extern kcg_bool DMI_DriverID_Ack;
/* DMI_traindataNoAck/ */
extern kcg_bool DMI_traindataNoAck;
/* DMI_traindataAck/ */
extern kcg_bool DMI_traindataAck;
/* DMI_OverD9_fromDisplay/ */
extern kcg_bool DMI_OverD9_fromDisplay;
/* DMI_closeButton/ */
extern kcg_bool DMI_closeButton;
/* DMI_confirmTrainData/ */
extern kcg_bool DMI_confirmTrainData;
/* DMI_textMsgAck/ */
extern kcg_bool DMI_textMsgAck;
/* DMI_openLevelMenu/ */
extern kcg_bool DMI_openLevelMenu;
/* DMI_InputFieldAck/ */
extern kcg_bool DMI_InputFieldAck;
/* DMI_openMainMenu_fromDisplay/ */
extern kcg_bool DMI_openMainMenu_fromDisplay;
/* DMI_OverD12_frpmDisplay/ */
extern kcg_bool DMI_OverD12_frpmDisplay;
/* DMI_HidePlanningArea_fromDisplay/ */
extern kcg_bool DMI_HidePlanningArea_fromDisplay;
/* DMI_ShowPlanningArea_fromDisplay/ */
extern kcg_bool DMI_ShowPlanningArea_fromDisplay;
/* DMI_closeButtonMain/ */
extern kcg_bool DMI_closeButtonMain;
/* DMI_C1AreaAck/ */
extern kcg_bool DMI_C1AreaAck;
/* DMI_ScrollUp/ */
extern kcg_bool DMI_ScrollUp;
/* DMI_ScrollDown/ */
extern kcg_bool DMI_ScrollDown;

/* DMI_icons_ack/ */
extern DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg DMI_icons_ack;
/* DMI_openDesk_toDisplay/ */
extern kcg_bool DMI_openDesk_toDisplay;
/* DMI_window_mask_visibility__toDisplay/ */
extern array_bool_15 DMI_window_mask_visibility__toDisplay;
/* DMI_SpeedTarget_toDisplay/ */
extern kcg_float64 DMI_SpeedTarget_toDisplay;
/* DMI_VpermColor_toDisplay/ */
extern kcg_int64 DMI_VpermColor_toDisplay;
/* DMI_trainLenght_toDisplay/ */
extern kcg_float64 DMI_trainLenght_toDisplay;
/* DMI_GradientsValue_toDisplay/ */
extern array_float64_32 DMI_GradientsValue_toDisplay;
/* DMI_TrainPosition_toDisplay/ */
extern kcg_float64 DMI_TrainPosition_toDisplay;
/* DMI_Vinterv_Visibility_toDisplay/ */
extern kcg_bool DMI_Vinterv_Visibility_toDisplay;
/* DMI_DistanceToTargetBarVisibility_toDisplay/ */
extern kcg_bool DMI_DistanceToTargetBarVisibility_toDisplay;
/* DMI_SpeedDigitOne_toDisplay/ */
extern kcg_float64 DMI_SpeedDigitOne_toDisplay;
/* DMI_hourGlassVisibility_toDisplay/ */
extern kcg_bool DMI_hourGlassVisibility_toDisplay;
/* DMI_trainAxleloadIndex_toDisplay/ */
extern kcg_int64 DMI_trainAxleloadIndex_toDisplay;
/* DMI_PointerColor_toDisplay/ */
extern kcg_int64 DMI_PointerColor_toDisplay;
/* DMI_CloseButtonEnabler_toDisplay/ */
extern kcg_int64 DMI_CloseButtonEnabler_toDisplay;
/* DMI_SpeedRelease_toDisplay/ */
extern kcg_float64 DMI_SpeedRelease_toDisplay;
/* DMI_VtargetColor_toDisplay/ */
extern kcg_int64 DMI_VtargetColor_toDisplay;
/* DMI_trainMaxspeed_toDisplay/ */
extern kcg_float64 DMI_trainMaxspeed_toDisplay;
/* DMI_DistanceToTargetVisible_toDisplay/ */
extern kcg_bool DMI_DistanceToTargetVisible_toDisplay;
/* DMI_LevelSymbolVisibility_toDisplay/ */
extern kcg_bool DMI_LevelSymbolVisibility_toDisplay;
/* DMI_SpeedIntervention_toDisplay/ */
extern kcg_float64 DMI_SpeedIntervention_toDisplay;
/* DMI_yellowBorderBrakeSymbol_toDisplay/ */
extern kcg_bool DMI_yellowBorderBrakeSymbol_toDisplay;
/* DMI_closeButtonIndex_toDisplay/ */
extern kcg_int64 DMI_closeButtonIndex_toDisplay;
/* DMI_ModeSymbolVisibility_toDisplay/ */
extern kcg_bool DMI_ModeSymbolVisibility_toDisplay;
/* DMI_SpeedDigitThree_toDisplay/ */
extern kcg_float64 DMI_SpeedDigitThree_toDisplay;
/* DMI_hourGlassCounter_toDisplay/ */
extern kcg_float64 DMI_hourGlassCounter_toDisplay;
/* DMI_trainLoadingGougeIndex_toDisplay/ */
extern kcg_int64 DMI_trainLoadingGougeIndex_toDisplay;
/* DMI_TrainRN_Display_toDisplay/ */
extern array_int64_9 DMI_TrainRN_Display_toDisplay;
/* DMI_RBC_status_symbol_toDisplay/ */
extern kcg_int64 DMI_RBC_status_symbol_toDisplay;
/* DMI_GradientsEnd_toDisplay/ */
extern array_float64_32 DMI_GradientsEnd_toDisplay;
/* DMI_vtarget_permColor_toDisplay/ */
extern kcg_int64 DMI_vtarget_permColor_toDisplay;
/* DMI_traindataYesNoIndex_toDisplay/ */
extern kcg_int64 DMI_traindataYesNoIndex_toDisplay;
/* DMI_StatusSymbolBrake_toDisplay/ */
extern kcg_bool DMI_StatusSymbolBrake_toDisplay;
/* DMI_TrainDataWindowVisibility_toDisplay/ */
extern kcg_bool DMI_TrainDataWindowVisibility_toDisplay;
/* DMI_levelSymbolAnnouncementIndex_toDisplay/ */
extern kcg_int64 DMI_levelSymbolAnnouncementIndex_toDisplay;
/* DMI_trainCategoryIndex_toDisplay/ */
extern kcg_int64 DMI_trainCategoryIndex_toDisplay;
/* DMI_SpeedPermitted_toDisplay/ */
extern kcg_float64 DMI_SpeedPermitted_toDisplay;
/* DMI_VreleaseColor_toDisplay/ */
extern kcg_int64 DMI_VreleaseColor_toDisplay;
/* DMI_trainBrakePerc_toDisplay/ */
extern kcg_float64 DMI_trainBrakePerc_toDisplay;
/* DMI_ArrayButtonsEnabler_toDisplay/ */
extern array_int64_30 DMI_ArrayButtonsEnabler_toDisplay;
/* DMI_ETCS_LevelSymbol_toDisplay/ */
extern kcg_int64 DMI_ETCS_LevelSymbol_toDisplay;
/* DMI_modeSymbolAnnouncementIndex_toDisplay/ */
extern kcg_int64 DMI_modeSymbolAnnouncementIndex_toDisplay;
/* DMI_ModeSymbol_toDisplay/ */
extern kcg_int64 DMI_ModeSymbol_toDisplay;
/* DMI_DistanceToTarget_toDisplay/ */
extern kcg_float64 DMI_DistanceToTarget_toDisplay;
/* DMI_Vinterv_Color_toDisplay/ */
extern kcg_int64 DMI_Vinterv_Color_toDisplay;
/* DMI_yellowBorderMsg_toDisplay/ */
extern kcg_bool DMI_yellowBorderMsg_toDisplay;
/* DMI_DriverID_Display_toDisplay/ */
extern array_int64_9 DMI_DriverID_Display_toDisplay;
/* DMI_SpeedDigitTwo_toDisplay/ */
extern kcg_float64 DMI_SpeedDigitTwo_toDisplay;
/* DMI_yellowBorderC1Area_toDisplay/ */
extern kcg_bool DMI_yellowBorderC1Area_toDisplay;
/* DMI_trainAirtightIndex_toDisplay/ */
extern kcg_int64 DMI_trainAirtightIndex_toDisplay;
/* DMI_GradientsStart_toDisplay/ */
extern array_float64_32 DMI_GradientsStart_toDisplay;
/* DMI_Vtarget_permVisibility_toDisplay/ */
extern kcg_bool DMI_Vtarget_permVisibility_toDisplay;
/* DMI_traindataValidWinVisibility_toDisplay/ */
extern kcg_bool DMI_traindataValidWinVisibility_toDisplay;
/* DMI_StatusSymbolVisibility_toDisplay/ */
extern kcg_bool DMI_StatusSymbolVisibility_toDisplay;
/* DMI_TrainSpeed_toDisplay/ */
extern kcg_float64 DMI_TrainSpeed_toDisplay;
/* DMI_iconGroupIndex_toDisplay/ */
extern kcg_int64 DMI_iconGroupIndex_toDisplay;
/* DMI_ArrayOfMsgIndex_toDisplay/ */
extern array_int64_5 DMI_ArrayOfMsgIndex_toDisplay;
/* DMI_InterpolatedDistanceToTarget_toDisplay/ */
extern kcg_float64 DMI_InterpolatedDistanceToTarget_toDisplay;
/* DMI_SingleMsgAckRequiredVisibility_toDysplay/ */
extern kcg_bool DMI_SingleMsgAckRequiredVisibility_toDysplay;
/* DMI_IndexFixedMsg_toDisplay/ */
extern array_int64_5 DMI_IndexFixedMsg_toDisplay;
/* DMI_level_data/ */
extern DMI_Level_Data_T_DMI_Messages_Bothways_Pkg DMI_level_data;
/* DMI_IndexLevel_toDisplay/ */
extern kcg_int64 DMI_IndexLevel_toDisplay;
/* DMI_ArrayLevelIndex_toDisplay/ */
extern array_int64_12 DMI_ArrayLevelIndex_toDisplay;
/* DMI_levelMenuVisibility_toDisplay/ */
extern kcg_bool DMI_levelMenuVisibility_toDisplay;
/* DMI_PlainText_toDisplay/ */
extern array_char_30_5 DMI_PlainText_toDisplay;
/* DMI_Array_hh_toDisplay/ */
extern array_float64_5 DMI_Array_hh_toDisplay;
/* DMI_Array_mm_toDisplay/ */
extern array_float64_5 DMI_Array_mm_toDisplay;
/* DMI_isAuxiliarMsg_toDisplay/ */
extern kcg_bool DMI_isAuxiliarMsg_toDisplay;
/* DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay/ */
extern array_bool_10 DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay;
/* DMI_D_PASP_IndicationMarker_toDisplay/ */
extern array_float64_1 DMI_D_PASP_IndicationMarker_toDisplay;
/* DMI_D_SPDI_SpeedChangeIndex_toDisplay/ */
extern array_int64_10 DMI_D_SPDI_SpeedChangeIndex_toDisplay;
/* DMI_D_SPDI_SpeedChangePosition_toDisplay/ */
extern array_float64_10 DMI_D_SPDI_SpeedChangePosition_toDisplay;
/* DMI_D_PASP_Speeds_toDisplay/ */
extern tPASPOutput_Array DMI_D_PASP_Speeds_toDisplay;
/* DMI_D_PASP_Distances_toDisplay/ */
extern tPASPOutput_Array DMI_D_PASP_Distances_toDisplay;
/* DMI_D_GradientVisible_toDisplay/ */
extern array_bool_32 DMI_D_GradientVisible_toDisplay;
/* DMI_D_Scale_toDisplay/ */
extern tScale DMI_D_Scale_toDisplay;
/* DMI_PlanningAreaVisibility_toDisplay/ */
extern kcg_bool DMI_PlanningAreaVisibility_toDisplay;
/* GUI_serviceBrake/ */
extern kcg_bool GUI_serviceBrake;
/* GUI_TractionCutOff/ */
extern kcg_bool GUI_TractionCutOff;
/* GUI_currentPositionInCm/ */
extern L_internal_Type_Obu_BasicTypes_Pkg GUI_currentPositionInCm;
/* GUI_currentPositionInM/ */
extern kcg_float64 GUI_currentPositionInM;
/* GUI_currentVelocityInKmH/ */
extern kcg_float64 GUI_currentVelocityInKmH;
/* GUI_TrainPositionDeltaMax/ */
extern kcg_float64 GUI_TrainPositionDeltaMax;
/* GUI_TrainPositionDeltaMin/ */
extern kcg_float64 GUI_TrainPositionDeltaMin;
/* GUI_timestamp/ */
extern kcg_int64 GUI_timestamp;
/* GUI_TrainPositionNominal/ */
extern kcg_float64 GUI_TrainPositionNominal;
/* GUI_emergencyBrake/ */
extern kcg_bool GUI_emergencyBrake;
/* GUI_AFBActive/ */
extern kcg_bool GUI_AFBActive;
/* DMI_ScrollDownEnableIndex/ */
extern kcg_int64 DMI_ScrollDownEnableIndex;
/* DMI_ScrollUpEnableIndex/ */
extern kcg_int64 DMI_ScrollUpEnableIndex;
/* DMI_localTime/ */
extern tPASPOutput_Array DMI_localTime;

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  M_LEVEL /* _L238/ */ Context__L238;
  M_MODE /* _L222/ */ Context__L222;
  kcg_bool /* _L1/ */ Context__L1;
  M_TrainTrack_Message_T_TM_radio_messages /* _L2/ */ Context__L2;
  RadioManagement_T_API_RadioCommunication_Pkg /* _L3/ */ Context__L3;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* _L4/ */ Context__L4;
  TIU_Output_msg_API_TIU_Pkg /* _L5/ */ Context__L5;
  kcg_bool /* _L6/ */ Context__L6;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L7/ */ Context__L7;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L8/ */ Context__L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L9/ */ Context__L9;
  kcg_float64 /* _L10/ */ Context__L10;
  kcg_float64 /* _L11/ */ Context__L11;
  M_TrainTrack_Message_T_TM_radio_messages /* API_toRBC/ */ Context_API_toRBC;
  RadioManagement_T_API_RadioCommunication_Pkg /* API_toRTM_Management/ */ Context_API_toRTM_Management;
  TIU_Output_msg_API_TIU_Pkg /* API_toTIU/ */ Context_API_toTIU;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* API_toDMI/ */ Context_API_toDMI;
  kcg_bool Context_init;
  kcg_float64 /* DMI_InterpolatedDistanceToTarget_toDisplay/ */ Context_mem_DMI_InterpolatedDistanceToTarget_toDisplay;
  array_int64_5 /* DMI_ArrayOfMsgIndex_toDisplay/ */ Context_mem_DMI_ArrayOfMsgIndex_toDisplay;
  kcg_int64 /* DMI_iconGroupIndex_toDisplay/ */ Context_mem_DMI_iconGroupIndex_toDisplay;
  kcg_float64 /* DMI_TrainSpeed_toDisplay/ */ Context_mem_DMI_TrainSpeed_toDisplay;
  kcg_bool /* DMI_traindataValidWinVisibility_toDisplay/ */ Context_mem_DMI_traindataValidWinVisibility_toDisplay;
  kcg_bool /* DMI_Vtarget_permVisibility_toDisplay/ */ Context_mem_DMI_Vtarget_permVisibility_toDisplay;
  array_float64_32 /* DMI_GradientsStart_toDisplay/ */ Context_mem_DMI_GradientsStart_toDisplay;
  kcg_int64 /* DMI_trainAirtightIndex_toDisplay/ */ Context_mem_DMI_trainAirtightIndex_toDisplay;
  kcg_float64 /* DMI_SpeedDigitTwo_toDisplay/ */ Context_mem_DMI_SpeedDigitTwo_toDisplay;
  array_int64_9 /* DMI_DriverID_Display_toDisplay/ */ Context_mem_DMI_DriverID_Display_toDisplay;
  kcg_int64 /* DMI_Vinterv_Color_toDisplay/ */ Context_mem_DMI_Vinterv_Color_toDisplay;
  kcg_float64 /* DMI_DistanceToTarget_toDisplay/ */ Context_mem_DMI_DistanceToTarget_toDisplay;
  kcg_int64 /* DMI_ModeSymbol_toDisplay/ */ Context_mem_DMI_ModeSymbol_toDisplay;
  kcg_int64 /* DMI_modeSymbolAnnouncementIndex_toDisplay/ */ Context_mem_DMI_modeSymbolAnnouncementIndex_toDisplay;
  kcg_int64 /* DMI_ETCS_LevelSymbol_toDisplay/ */ Context_mem_DMI_ETCS_LevelSymbol_toDisplay;
  array_int64_30 /* DMI_ArrayButtonsEnabler_toDisplay/ */ Context_mem_DMI_ArrayButtonsEnabler_toDisplay;
  kcg_float64 /* DMI_trainBrakePerc_toDisplay/ */ Context_mem_DMI_trainBrakePerc_toDisplay;
  kcg_int64 /* DMI_VreleaseColor_toDisplay/ */ Context_mem_DMI_VreleaseColor_toDisplay;
  kcg_float64 /* DMI_SpeedPermitted_toDisplay/ */ Context_mem_DMI_SpeedPermitted_toDisplay;
  kcg_int64 /* DMI_trainCategoryIndex_toDisplay/ */ Context_mem_DMI_trainCategoryIndex_toDisplay;
  kcg_int64 /* DMI_levelSymbolAnnouncementIndex_toDisplay/ */ Context_mem_DMI_levelSymbolAnnouncementIndex_toDisplay;
  kcg_bool /* DMI_TrainDataWindowVisibility_toDisplay/ */ Context_mem_DMI_TrainDataWindowVisibility_toDisplay;
  kcg_bool /* DMI_StatusSymbolBrake_toDisplay/ */ Context_mem_DMI_StatusSymbolBrake_toDisplay;
  kcg_int64 /* DMI_traindataYesNoIndex_toDisplay/ */ Context_mem_DMI_traindataYesNoIndex_toDisplay;
  kcg_int64 /* DMI_vtarget_permColor_toDisplay/ */ Context_mem_DMI_vtarget_permColor_toDisplay;
  array_float64_32 /* DMI_GradientsEnd_toDisplay/ */ Context_mem_DMI_GradientsEnd_toDisplay;
  array_int64_9 /* DMI_TrainRN_Display_toDisplay/ */ Context_mem_DMI_TrainRN_Display_toDisplay;
  kcg_int64 /* DMI_trainLoadingGougeIndex_toDisplay/ */ Context_mem_DMI_trainLoadingGougeIndex_toDisplay;
  kcg_float64 /* DMI_SpeedDigitThree_toDisplay/ */ Context_mem_DMI_SpeedDigitThree_toDisplay;
  kcg_bool /* DMI_ModeSymbolVisibility_toDisplay/ */ Context_mem_DMI_ModeSymbolVisibility_toDisplay;
  kcg_float64 /* DMI_SpeedIntervention_toDisplay/ */ Context_mem_DMI_SpeedIntervention_toDisplay;
  kcg_bool /* DMI_LevelSymbolVisibility_toDisplay/ */ Context_mem_DMI_LevelSymbolVisibility_toDisplay;
  kcg_bool /* DMI_DistanceToTargetVisible_toDisplay/ */ Context_mem_DMI_DistanceToTargetVisible_toDisplay;
  kcg_float64 /* DMI_trainMaxspeed_toDisplay/ */ Context_mem_DMI_trainMaxspeed_toDisplay;
  kcg_int64 /* DMI_VtargetColor_toDisplay/ */ Context_mem_DMI_VtargetColor_toDisplay;
  kcg_float64 /* DMI_SpeedRelease_toDisplay/ */ Context_mem_DMI_SpeedRelease_toDisplay;
  kcg_int64 /* DMI_CloseButtonEnabler_toDisplay/ */ Context_mem_DMI_CloseButtonEnabler_toDisplay;
  kcg_int64 /* DMI_PointerColor_toDisplay/ */ Context_mem_DMI_PointerColor_toDisplay;
  kcg_int64 /* DMI_trainAxleloadIndex_toDisplay/ */ Context_mem_DMI_trainAxleloadIndex_toDisplay;
  kcg_float64 /* DMI_SpeedDigitOne_toDisplay/ */ Context_mem_DMI_SpeedDigitOne_toDisplay;
  kcg_bool /* DMI_DistanceToTargetBarVisibility_toDisplay/ */ Context_mem_DMI_DistanceToTargetBarVisibility_toDisplay;
  kcg_bool /* DMI_Vinterv_Visibility_toDisplay/ */ Context_mem_DMI_Vinterv_Visibility_toDisplay;
  kcg_float64 /* DMI_TrainPosition_toDisplay/ */ Context_mem_DMI_TrainPosition_toDisplay;
  array_float64_32 /* DMI_GradientsValue_toDisplay/ */ Context_mem_DMI_GradientsValue_toDisplay;
  kcg_float64 /* DMI_trainLenght_toDisplay/ */ Context_mem_DMI_trainLenght_toDisplay;
  kcg_int64 /* DMI_VpermColor_toDisplay/ */ Context_mem_DMI_VpermColor_toDisplay;
  kcg_float64 /* DMI_SpeedTarget_toDisplay/ */ Context_mem_DMI_SpeedTarget_toDisplay;
  array_bool_15 /* DMI_window_mask_visibility__toDisplay/ */ Context_mem_DMI_window_mask_visibility__toDisplay;
  kcg_bool /* DMI_openDesk_toDisplay/ */ Context_mem_DMI_openDesk_toDisplay;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox Context_TestEnvironmentSimulation_IncludingRBC_Complete_1;
  SV_DMI_Toolbox Context_DMI_1;
  SV_EVC Context_EVC_1;
} SV_ROOT_Integration_Testbench_Integration;

extern void kcg_save_SV_ROOT_Integration_Testbench_Integration(
  SV_ROOT_Integration_Testbench_Integration *SV);
extern void kcg_load_SV_ROOT_Integration_Testbench_Integration(
  SV_ROOT_Integration_Testbench_Integration *SV);



#endif /* _ROOT_Integration_Testbench_Integration_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ROOT_Integration_Testbench_Integration.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

