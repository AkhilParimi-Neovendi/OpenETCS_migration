/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _DMI_Toolbox_H_
#define _DMI_Toolbox_H_

#include "kcg_types.h"
#include "DMI_Controller_DMI_Control_Pkg.h"
#include "manageTIU_input_input_from_TIU_API_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* EVC_fromDMI/ */ EVC_fromDMI;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* DMI_icons_ack/ */ DMI_icons_ack;
  kcg_bool /* DMI_openDesk_toDisplay/ */ DMI_openDesk_toDisplay;
  array_bool_15 /* DMI_window_mask_visibility__toDisplay/ */ DMI_window_mask_visibility__toDisplay;
  kcg_float32 /* DMI_SpeedTarget_toDisplay/ */ DMI_SpeedTarget_toDisplay;
  kcg_int32 /* DMI_VpermColor_toDisplay/ */ DMI_VpermColor_toDisplay;
  kcg_float32 /* DMI_trainLenght_toDisplay/ */ DMI_trainLenght_toDisplay;
  array_float32_32 /* DMI_GradientsValue_toDisplay/ */ DMI_GradientsValue_toDisplay;
  kcg_float32 /* DMI_TrainPosition_toDisplay/ */ DMI_TrainPosition_toDisplay;
  kcg_bool /* DMI_Vinterv_Visibility_toDisplay/ */ DMI_Vinterv_Visibility_toDisplay;
  kcg_bool /* DMI_DistanceToTargetBarVisibility_toDisplay/ */ DMI_DistanceToTargetBarVisibility_toDisplay;
  kcg_float32 /* DMI_SpeedDigitOne_toDisplay/ */ DMI_SpeedDigitOne_toDisplay;
  kcg_bool /* DMI_hourGlassVisibility_toDisplay/ */ DMI_hourGlassVisibility_toDisplay;
  kcg_int32 /* DMI_trainAxleloadIndex_toDisplay/ */ DMI_trainAxleloadIndex_toDisplay;
  kcg_int32 /* DMI_PointerColor_toDisplay/ */ DMI_PointerColor_toDisplay;
  kcg_int32 /* DMI_CloseButtonEnabler_toDisplay/ */ DMI_CloseButtonEnabler_toDisplay;
  kcg_float32 /* DMI_SpeedRelease_toDisplay/ */ DMI_SpeedRelease_toDisplay;
  kcg_int32 /* DMI_VtargetColor_toDisplay/ */ DMI_VtargetColor_toDisplay;
  kcg_float32 /* DMI_trainMaxspeed_toDisplay/ */ DMI_trainMaxspeed_toDisplay;
  kcg_bool /* DMI_DistanceToTargetVisible_toDisplay/ */ DMI_DistanceToTargetVisible_toDisplay;
  kcg_bool /* DMI_LevelSymbolVisibility_toDisplay/ */ DMI_LevelSymbolVisibility_toDisplay;
  kcg_float32 /* DMI_SpeedIntervention_toDisplay/ */ DMI_SpeedIntervention_toDisplay;
  kcg_bool /* DMI_yellowBorderBrakeSymbol_toDisplay/ */ DMI_yellowBorderBrakeSymbol_toDisplay;
  kcg_int32 /* DMI_closeButtonIndex_toDisplay/ */ DMI_closeButtonIndex_toDisplay;
  kcg_bool /* DMI_ModeSymbolVisibility_toDisplay/ */ DMI_ModeSymbolVisibility_toDisplay;
  kcg_float32 /* DMI_SpeedDigitThree_toDisplay/ */ DMI_SpeedDigitThree_toDisplay;
  kcg_float32 /* DMI_hourGlassCounter_toDisplay/ */ DMI_hourGlassCounter_toDisplay;
  kcg_int32 /* DMI_trainLoadingGougeIndex_toDisplay/ */ DMI_trainLoadingGougeIndex_toDisplay;
  array_int32_9 /* DMI_TrainRN_Display_toDisplay/ */ DMI_TrainRN_Display_toDisplay;
  kcg_int32 /* DMI_RBC_status_symbol_toDisplay/ */ DMI_RBC_status_symbol_toDisplay;
  array_float32_32 /* DMI_GradientsEnd_toDisplay/ */ DMI_GradientsEnd_toDisplay;
  kcg_int32 /* DMI_vtarget_permColor_toDisplay/ */ DMI_vtarget_permColor_toDisplay;
  kcg_int32 /* DMI_traindataYesNoIndex_toDisplay/ */ DMI_traindataYesNoIndex_toDisplay;
  kcg_bool /* DMI_StatusSymbolBrake_toDisplay/ */ DMI_StatusSymbolBrake_toDisplay;
  kcg_bool /* DMI_TrainDataWindowVisibility_toDisplay/ */ DMI_TrainDataWindowVisibility_toDisplay;
  kcg_int32 /* DMI_levelSymbolAnnouncementIndex_toDisplay/ */ DMI_levelSymbolAnnouncementIndex_toDisplay;
  kcg_int32 /* DMI_trainCategoryIndex_toDisplay/ */ DMI_trainCategoryIndex_toDisplay;
  kcg_float32 /* DMI_SpeedPermitted_toDisplay/ */ DMI_SpeedPermitted_toDisplay;
  kcg_int32 /* DMI_VreleaseColor_toDisplay/ */ DMI_VreleaseColor_toDisplay;
  kcg_float32 /* DMI_trainBrakePerc_toDisplay/ */ DMI_trainBrakePerc_toDisplay;
  array_int32_30 /* DMI_ArrayButtonsEnabler_toDisplay/ */ DMI_ArrayButtonsEnabler_toDisplay;
  kcg_int32 /* DMI_ETCS_LevelSymbol_toDisplay/ */ DMI_ETCS_LevelSymbol_toDisplay;
  kcg_int32 /* DMI_modeSymbolAnnouncementIndex_toDisplay/ */ DMI_modeSymbolAnnouncementIndex_toDisplay;
  kcg_int32 /* DMI_ModeSymbol_toDisplay/ */ DMI_ModeSymbol_toDisplay;
  kcg_float32 /* DMI_DistanceToTarget_toDisplay/ */ DMI_DistanceToTarget_toDisplay;
  kcg_int32 /* DMI_Vinterv_Color_toDisplay/ */ DMI_Vinterv_Color_toDisplay;
  kcg_bool /* DMI_yellowBorderMsg_toDisplay/ */ DMI_yellowBorderMsg_toDisplay;
  array_int32_9 /* DMI_DriverID_Display_toDisplay/ */ DMI_DriverID_Display_toDisplay;
  kcg_float32 /* DMI_SpeedDigitTwo_toDisplay/ */ DMI_SpeedDigitTwo_toDisplay;
  kcg_bool /* DMI_yellowBorderC1Area_toDisplay/ */ DMI_yellowBorderC1Area_toDisplay;
  kcg_int32 /* DMI_trainAirtightIndex_toDisplay/ */ DMI_trainAirtightIndex_toDisplay;
  array_float32_32 /* DMI_GradientsStart_toDisplay/ */ DMI_GradientsStart_toDisplay;
  kcg_bool /* DMI_Vtarget_permVisibility_toDisplay/ */ DMI_Vtarget_permVisibility_toDisplay;
  kcg_bool /* DMI_traindataValidWinVisibility_toDisplay/ */ DMI_traindataValidWinVisibility_toDisplay;
  kcg_bool /* DMI_StatusSymbolVisibility_toDisplay/ */ DMI_StatusSymbolVisibility_toDisplay;
  kcg_float32 /* DMI_TrainSpeed_toDisplay/ */ DMI_TrainSpeed_toDisplay;
  kcg_int32 /* DMI_iconGroupIndex_toDisplay/ */ DMI_iconGroupIndex_toDisplay;
  array_int32_5 /* DMI_ArrayOfMsgIndex_toDisplay/ */ DMI_ArrayOfMsgIndex_toDisplay;
  kcg_float32 /* DMI_InterpolatedDistanceToTarget_toDisplay/ */ DMI_InterpolatedDistanceToTarget_toDisplay;
  kcg_bool /* DMI_SingleMsgAckRequiredVisibility_toDysplay/ */ DMI_SingleMsgAckRequiredVisibility_toDysplay;
  array_int32_5 /* DMI_IndexFixedMsg_toDisplay/ */ DMI_IndexFixedMsg_toDisplay;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* DMI_level_data/ */ DMI_level_data;
  kcg_int32 /* DMI_IndexLevel_toDisplay/ */ DMI_IndexLevel_toDisplay;
  array_int32_12 /* DMI_ArrayLevelIndex_toDisplay/ */ DMI_ArrayLevelIndex_toDisplay;
  kcg_bool /* DMI_levelMenuVisibility_toDisplay/ */ DMI_levelMenuVisibility_toDisplay;
  array_char_30_5 /* DMI_PlainText_toDisplay/ */ DMI_PlainText_toDisplay;
  array_float32_5 /* DMI_Array_hh_toDisplay/ */ DMI_Array_hh_toDisplay;
  array_float32_5 /* DMI_Array_mm_toDisplay/ */ DMI_Array_mm_toDisplay;
  kcg_bool /* DMI_isAuxiliarMsg_toDisplay/ */ DMI_isAuxiliarMsg_toDisplay;
  array_bool_10 /* DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay/ */ DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay;
  array_int32_10 /* DMI_D_SPDI_SpeedChangeIndex_toDisplay/ */ DMI_D_SPDI_SpeedChangeIndex_toDisplay;
  array_float32_10 /* DMI_D_SPDI_SpeedChangePosition_toDisplay/ */ DMI_D_SPDI_SpeedChangePosition_toDisplay;
  tPASPOutput_Array /* DMI_D_PASP_Speeds_toDisplay/ */ DMI_D_PASP_Speeds_toDisplay;
  tPASPOutput_Array /* DMI_D_PASP_Distances_toDisplay/ */ DMI_D_PASP_Distances_toDisplay;
  array_float32_1 /* DMI_D_PASP_IndicationMarker_toDisplay/ */ DMI_D_PASP_IndicationMarker_toDisplay;
  array_bool_32 /* DMI_D_GradientVisible_toDisplay/ */ DMI_D_GradientVisible_toDisplay;
  tScale /* DMI_D_Scale_toDisplay/ */ DMI_D_Scale_toDisplay;
  kcg_bool /* DMI_PlanningAreaVisibility_toDisplay/ */ DMI_PlanningAreaVisibility_toDisplay;
  kcg_int32 /* DMI_ScrollDownEnableIndex/ */ DMI_ScrollDownEnableIndex;
  kcg_int32 /* DMI_ScrollUpEnableIndex/ */ DMI_ScrollUpEnableIndex;
  tPASPOutput_Array /* DMI_TimeArray/ */ DMI_TimeArray;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_DMI_Controller_DMI_Control_Pkg /* _L138=(DMI_Control_Pkg::DMI_Controller#2)/ */ Context_DMI_Controller_2;
  outC_manageTIU_input_input_from_TIU_API_Pkg /* _L5=(input_from_TIU_API_Pkg::manageTIU_input#1)/ */ Context_manageTIU_input_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* _L17/ */ _L17;
  TIU_trainStatus_T_TIU_Types_Pkg /* _L5/ */ _L5;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* _L6/ */ _L6;
  TIU_Input_msg_API_TIU_Pkg /* _L118/ */ _L118;
  kcg_bool /* _L234/ */ _L234;
  array_bool_12 /* _L212/ */ _L212;
  array_bool_12 /* _L210/ */ _L210;
  kcg_bool /* _L209/ */ _L209;
  kcg_float32 /* _L138/ */ _L138;
  kcg_int32 /* _L139/ */ _L139;
  kcg_bool /* _L140/ */ _L140;
  kcg_float32 /* _L141/ */ _L141;
  kcg_bool /* _L142/ */ _L142;
  kcg_float32 /* _L143/ */ _L143;
  kcg_float32 /* _L144/ */ _L144;
  kcg_float32 /* _L145/ */ _L145;
  kcg_float32 /* _L146/ */ _L146;
  kcg_float32 /* _L147/ */ _L147;
  kcg_float32 /* _L148/ */ _L148;
  kcg_float32 /* _L149/ */ _L149;
  kcg_float32 /* _L150/ */ _L150;
  kcg_bool /* _L151/ */ _L151;
  kcg_float32 /* _L152/ */ _L152;
  kcg_bool /* _L153/ */ _L153;
  kcg_int32 /* _L154/ */ _L154;
  array_int32_9 /* _L155/ */ _L155;
  array_int32_9 /* _L156/ */ _L156;
  array_bool_15 /* _L157/ */ _L157;
  array_int32_30 /* _L158/ */ _L158;
  kcg_int32 /* _L159/ */ _L159;
  kcg_bool /* _L160/ */ _L160;
  kcg_int32 /* _L161/ */ _L161;
  kcg_bool /* _L162/ */ _L162;
  kcg_int32 /* _L163/ */ _L163;
  kcg_bool /* _L164/ */ _L164;
  array_int32_5 /* _L165/ */ _L165;
  kcg_int32 /* _L166/ */ _L166;
  kcg_int32 /* _L167/ */ _L167;
  kcg_int32 /* _L168/ */ _L168;
  kcg_int32 /* _L169/ */ _L169;
  kcg_float32 /* _L170/ */ _L170;
  kcg_float32 /* _L171/ */ _L171;
  kcg_float32 /* _L172/ */ _L172;
  kcg_bool /* _L173/ */ _L173;
  kcg_int32 /* _L174/ */ _L174;
  kcg_bool /* _L175/ */ _L175;
  kcg_int32 /* _L176/ */ _L176;
  kcg_bool /* _L177/ */ _L177;
  kcg_bool /* _L178/ */ _L178;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L179/ */ _L179;
  kcg_bool /* _L180/ */ _L180;
  kcg_int32 /* _L181/ */ _L181;
  kcg_int32 /* _L182/ */ _L182;
  kcg_int32 /* _L183/ */ _L183;
  kcg_float32 /* _L184/ */ _L184;
  kcg_bool /* _L185/ */ _L185;
  kcg_int32 /* _L186/ */ _L186;
  kcg_int32 /* _L187/ */ _L187;
  kcg_int32 /* _L188/ */ _L188;
  kcg_bool /* _L189/ */ _L189;
  kcg_bool /* _L190/ */ _L190;
  kcg_int32 /* _L191/ */ _L191;
  kcg_int32 /* _L192/ */ _L192;
  kcg_bool /* _L193/ */ _L193;
  array_int32_12 /* _L194/ */ _L194;
  kcg_int32 /* _L195/ */ _L195;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* _L196/ */ _L196;
  array_int32_5 /* _L197/ */ _L197;
  array_char_30_5 /* _L198/ */ _L198;
  array_float32_5 /* _L199/ */ _L199;
  array_float32_5 /* _L200/ */ _L200;
  kcg_bool /* _L201/ */ _L201;
  array_bool_10 /* _L202/ */ _L202;
  array_int32_10 /* _L203/ */ _L203;
  array_float32_10 /* _L204/ */ _L204;
  array_float32_1 /* _L205/ */ _L205;
  tPASPOutput_Array /* _L206/ */ _L206;
  tPASPOutput_Array /* _L207/ */ _L207;
  array_bool_32 /* _L208/ */ _L208;
  kcg_bool /* _L137/ */ _L137;
  kcg_bool /* _L135/ */ _L135;
  kcg_bool /* _L133/ */ _L133;
  kcg_bool /* _L132/ */ _L132;
  kcg_float32 /* _L130/ */ _L130;
  kcg_bool /* _L129/ */ _L129;
  kcg_bool /* _L127/ */ _L127;
  kcg_bool /* _L125/ */ _L125;
  kcg_bool /* _L122/ */ _L122;
  kcg_bool /* _L121/ */ _L121;
  kcg_bool /* _L119/ */ _L119;
  array_float32_32 /* _L241/ */ _L241;
  kcg_bool /* _L240/ */ _L240;
  tScale /* _L239/ */ _L239;
  array_float32_32 /* _L238/ */ _L238;
  array_float32_32 /* _L237/ */ _L237;
  kcg_bool /* _L267/ */ _L267;
  kcg_bool /* _L269/ */ _L269;
  kcg_bool /* _L270/ */ _L270;
  kcg_bool /* _L271/ */ _L271;
  kcg_bool /* _L272/ */ _L272;
  kcg_bool /* _L273/ */ _L273;
  kcg_bool /* _L274/ */ _L274;
  kcg_bool /* _L276/ */ _L276;
  kcg_bool /* _L277/ */ _L277;
  kcg_bool /* _L278/ */ _L278;
  trainData_T_TIU_Types_Pkg /* _L279/ */ _L279;
  kcg_bool /* _L280/ */ _L280;
  kcg_int32 /* _L281/ */ _L281;
  kcg_int32 /* _L282/ */ _L282;
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* _L283/ */ _L283;
  kcg_bool /* _L284/ */ _L284;
  kcg_bool /* _L285/ */ _L285;
  tPASPOutput_Array /* _L286/ */ _L286;
  kcg_bool /* _L287/ */ _L287;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L288/ */ _L288;
  kcg_bool /* _L289/ */ _L289;
} outC_DMI_Toolbox;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::DMI/ */
extern void DMI_Toolbox(
  /* GUI_reset/ */
  kcg_bool _1_GUI_reset,
  /* EVC_toDMI/ */
  EVC_to_DMI_Message_int_T_API_DMI_Pkg *EVC_toDMI,
  /* DMI_MousePressed/ */
  kcg_bool _2_DMI_MousePressed,
  /* DMI_startRequest/ */
  kcg_bool _3_DMI_startRequest,
  /* DMI_openTrainRN/ */
  kcg_bool _4_DMI_openTrainRN,
  /* DMI_traindataYesAck/ */
  kcg_bool _5_DMI_traindataYesAck,
  /* DMI_keypad/ */
  array_bool_12 *_6_DMI_keypad,
  /* DMI_openTrainDataWindow/ */
  kcg_bool _7_DMI_openTrainDataWindow,
  /* DMI_openDriverID/ */
  kcg_bool _8_DMI_openDriverID,
  /* DMI_traindataNoAck/ */
  kcg_bool _9_DMI_traindataNoAck,
  /* DMI_traindataAck/ */
  kcg_bool _10_DMI_traindataAck,
  /* DMI_closeButton/ */
  kcg_bool _11_DMI_closeButton,
  /* DMI_confirmTrainData/ */
  kcg_bool _12_DMI_confirmTrainData,
  /* DMI_textMsgAck/ */
  kcg_bool _13_DMI_textMsgAck,
  /* TIU_Message/ */
  TIU_Input_msg_API_TIU_Pkg *TIU_Message,
  /* DMI_openLevelMenu/ */
  kcg_bool _14_DMI_openLevelMenu,
  /* DMI_InputFieldAck/ */
  kcg_bool _15_DMI_InputFieldAck,
  /* DMI_openMainMenu_fromDisplay/ */
  kcg_bool _16_DMI_openMainMenu_fromDisplay,
  /* DMI_OverD9_fromDisplay/ */
  kcg_bool _17_DMI_OverD9_fromDisplay,
  /* DMI_OverD12_frpmDisplay/ */
  kcg_bool _18_DMI_OverD12_frpmDisplay,
  /* DMI_HidePlanningArea_fromDisplay/ */
  kcg_bool _19_DMI_HidePlanningArea_fromDisplay,
  /* DMI_ShowPlanningArea_fromDisplay/ */
  kcg_bool _20_DMI_ShowPlanningArea_fromDisplay,
  /* DMI_closeButtonMain/ */
  kcg_bool _21_DMI_closeButtonMain,
  /* DMI_C1AreaAck/ */
  kcg_bool _22_DMI_C1AreaAck,
  /* DMI_ScrollUp/ */
  kcg_bool _23_DMI_ScrollUp,
  /* DMI_ScrollDown/ */
  kcg_bool _24_DMI_ScrollDown,
  outC_DMI_Toolbox *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DMI_reset_Toolbox(outC_DMI_Toolbox *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DMI_init_Toolbox(outC_DMI_Toolbox *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_manageTIU_input_input_from_TIU_API_Pkg Context_manageTIU_input_1;
  SV_DMI_Controller_DMI_Control_Pkg Context_DMI_Controller_2;
} SV_DMI_Toolbox;

extern void kcg_save_SV_DMI_Toolbox(SV_DMI_Toolbox *SV, outC_DMI_Toolbox *outC);
extern void kcg_load_SV_DMI_Toolbox(outC_DMI_Toolbox *outC, SV_DMI_Toolbox *SV);



#endif /* _DMI_Toolbox_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DMI_Toolbox.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

