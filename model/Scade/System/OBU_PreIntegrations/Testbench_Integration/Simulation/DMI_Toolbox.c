/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_Toolbox.h"

/* Toolbox::DMI/ */
void DMI_Toolbox(
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
  outC_DMI_Toolbox *outC)
{
  static kcg_size idx;
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg noname;
  static kcg_bool _25_noname;
  static kcg_bool _26_noname;

  outC->_L289 = kcg_false;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L288,
    (T_Mode_Level_Level_And_Mode_Types_Pkg *) &cevcML_Toolbox);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&outC->_L118, TIU_Message);
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->_L279,
    (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg);
  /* _L5=(input_from_TIU_API_Pkg::manageTIU_input#1)/ */
  manageTIU_input_input_from_TIU_API_Pkg(
    &outC->_L118,
    &outC->_L279,
    &outC->_L288,
    outC->_L289,
    &outC->Context_manageTIU_input_1);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
    &outC->_L5,
    &outC->Context_manageTIU_input_1.outTIUStatus);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->_L6,
    &outC->Context_manageTIU_input_1.outTIUCurrentInfo);
  outC->_L287 = outC->Context_manageTIU_input_1.outRevokeEB;
  _26_noname = outC->_L287;
  outC->_L135 = _2_DMI_MousePressed;
  /* _L212/ */
  for (idx = 0; idx < 12; idx++) {
    outC->_L212[idx] = kcg_false;
  }
  outC->_L130 = kcg_lit_float64(0.0);
  kcg_copy_array_bool_12(&outC->_L210, _6_DMI_keypad);
  outC->_L132 = _12_DMI_confirmTrainData;
  outC->_L122 = _7_DMI_openTrainDataWindow;
  outC->_L127 = _3_DMI_startRequest;
  outC->_L209 = _10_DMI_traindataAck;
  outC->_L121 = _5_DMI_traindataYesAck;
  outC->_L133 = _9_DMI_traindataNoAck;
  outC->_L125 = _13_DMI_textMsgAck;
  outC->_L137 = _8_DMI_openDriverID;
  outC->_L119 = _4_DMI_openTrainRN;
  outC->_L129 = _11_DMI_closeButton;
  outC->_L276 = _21_DMI_closeButtonMain;
  outC->_L267 = _16_DMI_openMainMenu_fromDisplay;
  outC->_L274 = kcg_false;
  outC->_L277 = _22_DMI_C1AreaAck;
  outC->_L234 = _14_DMI_openLevelMenu;
  outC->_L278 = _15_DMI_InputFieldAck;
  outC->_L269 = _17_DMI_OverD9_fromDisplay;
  outC->_L270 = _18_DMI_OverD12_frpmDisplay;
  outC->_L271 = _19_DMI_HidePlanningArea_fromDisplay;
  outC->_L272 = _20_DMI_ShowPlanningArea_fromDisplay;
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&outC->_L17, EVC_toDMI);
  outC->_L284 = _23_DMI_ScrollUp;
  outC->_L285 = _24_DMI_ScrollDown;
  /* _L138=(DMI_Control_Pkg::DMI_Controller#2)/ */
  DMI_Controller_DMI_Control_Pkg(
    outC->_L135,
    &outC->_L212,
    outC->_L130,
    &outC->_L210,
    outC->_L132,
    outC->_L122,
    outC->_L127,
    outC->_L209,
    outC->_L121,
    outC->_L133,
    outC->_L125,
    outC->_L137,
    outC->_L119,
    outC->_L129,
    outC->_L276,
    outC->_L267,
    &outC->_L5,
    outC->_L274,
    outC->_L277,
    outC->_L234,
    outC->_L278,
    outC->_L269,
    outC->_L270,
    outC->_L271,
    outC->_L272,
    &outC->_L17,
    outC->_L284,
    outC->_L285,
    &outC->Context_DMI_Controller_2);
  outC->_L138 = outC->Context_DMI_Controller_2.TrainPosition_toDisplay;
  outC->_L139 = outC->Context_DMI_Controller_2.ETCS_LevelSymbol_toDisplay;
  outC->_L140 = outC->Context_DMI_Controller_2.LevelSymbolVisibility_toDisplay;
  outC->_L141 = outC->Context_DMI_Controller_2.TrainSpeed_toDisplay;
  outC->_L142 =
    outC->Context_DMI_Controller_2.TrainDataWindowVisibility_toDisplay;
  outC->_L143 = outC->Context_DMI_Controller_2.SpeedDigitOne_toDisplay;
  outC->_L144 = outC->Context_DMI_Controller_2.SpeedDigitTwo_toDisplay;
  outC->_L145 = outC->Context_DMI_Controller_2.SpeedDigitThree_toDisplay;
  outC->_L146 = outC->Context_DMI_Controller_2.SpeedTarget_toDisplay;
  outC->_L147 = outC->Context_DMI_Controller_2.SpeedPermitted_toDisplay;
  outC->_L148 = outC->Context_DMI_Controller_2.SpeedRelease_toDisplay;
  outC->_L149 = outC->Context_DMI_Controller_2.SpeedIntervention_toDisplay;
  outC->_L150 = outC->Context_DMI_Controller_2.DistanceToTarget_toDisplay;
  outC->_L151 =
    outC->Context_DMI_Controller_2.DistanceToTargetVisibilityDigital_toDisplay;
  outC->_L152 =
    outC->Context_DMI_Controller_2.InterpolatedDistanceToTarget_toDisplay;
  outC->_L153 = outC->Context_DMI_Controller_2.StatusSymbolBrake_toDisplay;
  outC->_L154 = outC->Context_DMI_Controller_2.PointerColor_toDisplay;
  kcg_copy_array_int64_9(
    &outC->_L155,
    &outC->Context_DMI_Controller_2.DriverID_Display_toDisplay);
  kcg_copy_array_int64_9(
    &outC->_L156,
    &outC->Context_DMI_Controller_2.TrainRN_Display_toDisplay);
  kcg_copy_array_bool_15(
    &outC->_L157,
    &outC->Context_DMI_Controller_2.window_mask_visibility__toDisplay);
  kcg_copy_array_int64_30(
    &outC->_L158,
    &outC->Context_DMI_Controller_2.ArrayButtonsEnabler_toDisplay);
  outC->_L159 = outC->Context_DMI_Controller_2.CloseButtonEnabler_toDisplay;
  outC->_L160 = outC->Context_DMI_Controller_2.StatusSymbolVisibility_toDisplay;
  outC->_L161 = outC->Context_DMI_Controller_2.RBC_status_symbol_toDisplay;
  outC->_L162 =
    outC->Context_DMI_Controller_2.DistanceToTargetBarVisibility_toDisplay;
  outC->_L163 = outC->Context_DMI_Controller_2.ModeSymbol_toDisplay;
  outC->_L164 = outC->Context_DMI_Controller_2.ModeSymbolVisibility_toDisplay;
  kcg_copy_array_int64_5(
    &outC->_L165,
    &outC->Context_DMI_Controller_2.ArrayOfMsgIndex_toDisplay);
  outC->_L166 = outC->Context_DMI_Controller_2.trainCategoryIndex_toDisplay;
  outC->_L167 = outC->Context_DMI_Controller_2.trainAxleloadIndex_toDisplay;
  outC->_L168 = outC->Context_DMI_Controller_2.trainAirtightIndex_toDisplay;
  outC->_L169 = outC->Context_DMI_Controller_2.trainLoadingGougeIndex_toDisplay;
  outC->_L170 = outC->Context_DMI_Controller_2.trainLenght_toDisplay;
  outC->_L171 = outC->Context_DMI_Controller_2.trainBrakePerc_toDisplay;
  outC->_L172 = outC->Context_DMI_Controller_2.trainMaxspeed_toDisplay;
  outC->_L173 =
    outC->Context_DMI_Controller_2.traindataValidWinVisibility_toDisplay;
  outC->_L174 = outC->Context_DMI_Controller_2.traindataYesNoIndex_toDisplay;
  outC->_L175 = outC->Context_DMI_Controller_2.yellowBorderMsg_toDisplay;
  outC->_L176 = outC->Context_DMI_Controller_2.closeButtonIndex_toDisplay;
  outC->_L177 = outC->Context_DMI_Controller_2.openDesk_toDisplay;
  outC->_L178 = outC->Context_DMI_Controller_2.yellowBorderBrakeSymbol_toDisplay;
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L179,
    &outC->Context_DMI_Controller_2.DMI_icons_ack);
  outC->_L180 = outC->Context_DMI_Controller_2.yellowBorderC1Area_toDisplay;
  outC->_L181 = outC->Context_DMI_Controller_2.iconGroupIndex_toDisplay;
  outC->_L182 =
    outC->Context_DMI_Controller_2.levelSymbolAnnouncementIndex_toDisplay;
  outC->_L183 =
    outC->Context_DMI_Controller_2.modeSymbolAnnouncementIndex_toDisplay;
  outC->_L184 = outC->Context_DMI_Controller_2.hourGlassCounter_toDisplay;
  outC->_L185 = outC->Context_DMI_Controller_2.hourGlassVisibility_toDisplay;
  outC->_L186 = outC->Context_DMI_Controller_2.VpermColor_toDisplay;
  outC->_L187 = outC->Context_DMI_Controller_2.VreleaseColor_toDisplay;
  outC->_L188 = outC->Context_DMI_Controller_2.VtargetColor_toDisplay;
  outC->_L189 = outC->Context_DMI_Controller_2.Vtarget_permVisibility_toDisplay;
  outC->_L190 = outC->Context_DMI_Controller_2.Vinterv_Visibility_toDisplay;
  outC->_L191 = outC->Context_DMI_Controller_2.vtarget_permColor_toDisplay;
  outC->_L192 = outC->Context_DMI_Controller_2.Vinterv_Color_toDisplay;
  outC->_L193 = outC->Context_DMI_Controller_2.levelMenuVisibility_toDisplay;
  kcg_copy_array_int64_12(
    &outC->_L194,
    &outC->Context_DMI_Controller_2.ArrayLevelIndex_toDisplay);
  outC->_L195 = outC->Context_DMI_Controller_2.IndexLevel_toDisplay;
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L196,
    &outC->Context_DMI_Controller_2.DMI_level_data);
  kcg_copy_array_int64_5(
    &outC->_L197,
    &outC->Context_DMI_Controller_2.IndexFixedMsg_toDisplay);
  kcg_copy_array_char_30_5(
    &outC->_L198,
    &outC->Context_DMI_Controller_2.PlainText_toDisplay);
  kcg_copy_array_float64_5(
    &outC->_L199,
    &outC->Context_DMI_Controller_2.Array_hh_toDisplay);
  kcg_copy_array_float64_5(
    &outC->_L200,
    &outC->Context_DMI_Controller_2.Array_mm_toDisplay);
  outC->_L201 = outC->Context_DMI_Controller_2.isAuxiliarMsg_toDisplay;
  kcg_copy_array_bool_10(
    &outC->_L202,
    &outC->Context_DMI_Controller_2.D_SPDI_SpeedChangeSymbolsVisible_toDisplay);
  kcg_copy_array_int64_10(
    &outC->_L203,
    &outC->Context_DMI_Controller_2.D_SPDI_SpeedChangeIndex_toDisplay);
  kcg_copy_array_float64_10(
    &outC->_L204,
    &outC->Context_DMI_Controller_2.D_SPDI_SpeedChangePosition_toDisplay);
  kcg_copy_array_float64_1(
    &outC->_L205,
    &outC->Context_DMI_Controller_2.D_PASP_IndicatorMarker_toDisplay);
  kcg_copy_tPASPOutput_Array(
    &outC->_L206,
    &outC->Context_DMI_Controller_2.D_PASP_Speeds_toDisplay);
  kcg_copy_tPASPOutput_Array(
    &outC->_L207,
    &outC->Context_DMI_Controller_2.D_PASP_Distances_toDisplay);
  kcg_copy_array_bool_32(
    &outC->_L208,
    &outC->Context_DMI_Controller_2.D_GradientVisible_toDisplay);
  kcg_copy_array_float64_32(
    &outC->_L237,
    &outC->Context_DMI_Controller_2.D_GradientEndInterpolated_toDisplay);
  kcg_copy_array_float64_32(
    &outC->_L238,
    &outC->Context_DMI_Controller_2.D_GradientStartInterpolated_toDisplay);
  kcg_copy_tScale(
    &outC->_L239,
    &outC->Context_DMI_Controller_2.D_Scale_toDisplay);
  outC->_L240 = outC->Context_DMI_Controller_2.PlanningAreaVisibility_toDisplay;
  kcg_copy_array_float64_32(
    &outC->_L241,
    &outC->Context_DMI_Controller_2.D_GradientsValue_toDisplay);
  outC->_L281 = outC->Context_DMI_Controller_2.ScrollDownEnableTypeIndex;
  outC->_L282 = outC->Context_DMI_Controller_2.ScrollUpEnableTypeIndex;
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
    &outC->_L283,
    &outC->Context_DMI_Controller_2.DMI_to_evc_message_int);
  kcg_copy_tPASPOutput_Array(
    &outC->_L286,
    &outC->Context_DMI_Controller_2.TimeArray);
  kcg_copy_tPASPOutput_Array(&outC->DMI_TimeArray, &outC->_L286);
  outC->DMI_ScrollUpEnableIndex = outC->_L282;
  outC->DMI_ScrollDownEnableIndex = outC->_L281;
  kcg_copy_array_float64_1(
    &outC->DMI_D_PASP_IndicationMarker_toDisplay,
    &outC->_L205);
  outC->_L280 = _1_GUI_reset;
  _25_noname = outC->_L280;
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(&noname, &outC->_L6);
  outC->DMI_PlanningAreaVisibility_toDisplay = outC->_L240;
  kcg_copy_tScale(&outC->DMI_D_Scale_toDisplay, &outC->_L239);
  kcg_copy_array_bool_32(&outC->DMI_D_GradientVisible_toDisplay, &outC->_L208);
  kcg_copy_tPASPOutput_Array(&outC->DMI_D_PASP_Distances_toDisplay, &outC->_L207);
  kcg_copy_tPASPOutput_Array(&outC->DMI_D_PASP_Speeds_toDisplay, &outC->_L206);
  kcg_copy_array_float64_10(
    &outC->DMI_D_SPDI_SpeedChangePosition_toDisplay,
    &outC->_L204);
  kcg_copy_array_int64_10(
    &outC->DMI_D_SPDI_SpeedChangeIndex_toDisplay,
    &outC->_L203);
  kcg_copy_array_bool_10(
    &outC->DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay,
    &outC->_L202);
  outC->DMI_isAuxiliarMsg_toDisplay = outC->_L201;
  kcg_copy_array_float64_5(&outC->DMI_Array_mm_toDisplay, &outC->_L200);
  kcg_copy_array_float64_5(&outC->DMI_Array_hh_toDisplay, &outC->_L199);
  kcg_copy_array_char_30_5(&outC->DMI_PlainText_toDisplay, &outC->_L198);
  outC->_L273 = kcg_false;
  kcg_copy_array_float64_32(&outC->DMI_GradientsStart_toDisplay, &outC->_L238);
  kcg_copy_array_float64_32(&outC->DMI_GradientsEnd_toDisplay, &outC->_L237);
  kcg_copy_array_float64_32(&outC->DMI_GradientsValue_toDisplay, &outC->_L241);
  outC->DMI_IndexLevel_toDisplay = outC->_L195;
  outC->DMI_CloseButtonEnabler_toDisplay = outC->_L159;
  outC->DMI_SpeedRelease_toDisplay = outC->_L148;
  outC->DMI_Vtarget_permVisibility_toDisplay = outC->_L189;
  outC->DMI_trainMaxspeed_toDisplay = outC->_L172;
  outC->DMI_DistanceToTargetVisible_toDisplay = outC->_L151;
  outC->DMI_LevelSymbolVisibility_toDisplay = outC->_L140;
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->DMI_icons_ack,
    &outC->_L179);
  outC->DMI_iconGroupIndex_toDisplay = outC->_L181;
  outC->DMI_openDesk_toDisplay = outC->_L177;
  outC->DMI_ModeSymbolVisibility_toDisplay = outC->_L164;
  outC->DMI_SpeedDigitThree_toDisplay = outC->_L145;
  outC->DMI_VpermColor_toDisplay = outC->_L186;
  outC->DMI_trainLoadingGougeIndex_toDisplay = outC->_L169;
  kcg_copy_array_int64_9(&outC->DMI_TrainRN_Display_toDisplay, &outC->_L156);
  kcg_copy_array_int64_5(&outC->DMI_IndexFixedMsg_toDisplay, &outC->_L197);
  outC->DMI_RBC_status_symbol_toDisplay = outC->_L161;
  outC->DMI_Vinterv_Visibility_toDisplay = outC->_L190;
  outC->DMI_traindataYesNoIndex_toDisplay = outC->_L174;
  outC->DMI_StatusSymbolBrake_toDisplay = outC->_L153;
  outC->DMI_TrainDataWindowVisibility_toDisplay = outC->_L142;
  kcg_copy_array_int64_12(&outC->DMI_ArrayLevelIndex_toDisplay, &outC->_L194);
  outC->DMI_hourGlassVisibility_toDisplay = outC->_L185;
  outC->DMI_trainCategoryIndex_toDisplay = outC->_L166;
  outC->DMI_SpeedPermitted_toDisplay = outC->_L147;
  outC->DMI_VtargetColor_toDisplay = outC->_L188;
  outC->DMI_trainBrakePerc_toDisplay = outC->_L171;
  kcg_copy_array_int64_30(&outC->DMI_ArrayButtonsEnabler_toDisplay, &outC->_L158);
  outC->DMI_ETCS_LevelSymbol_toDisplay = outC->_L139;
  outC->DMI_yellowBorderBrakeSymbol_toDisplay = outC->_L178;
  outC->DMI_ModeSymbol_toDisplay = outC->_L163;
  outC->DMI_DistanceToTarget_toDisplay = outC->_L150;
  outC->DMI_SpeedIntervention_toDisplay = outC->_L149;
  outC->DMI_closeButtonIndex_toDisplay = outC->_L176;
  kcg_copy_array_int64_9(&outC->DMI_DriverID_Display_toDisplay, &outC->_L155);
  outC->DMI_SpeedDigitTwo_toDisplay = outC->_L144;
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->DMI_level_data,
    &outC->_L196);
  outC->DMI_hourGlassCounter_toDisplay = outC->_L184;
  outC->DMI_trainAirtightIndex_toDisplay = outC->_L168;
  outC->DMI_vtarget_permColor_toDisplay = outC->_L191;
  outC->DMI_traindataValidWinVisibility_toDisplay = outC->_L173;
  outC->DMI_StatusSymbolVisibility_toDisplay = outC->_L160;
  outC->DMI_TrainSpeed_toDisplay = outC->_L141;
  outC->DMI_levelSymbolAnnouncementIndex_toDisplay = outC->_L182;
  kcg_copy_array_int64_5(&outC->DMI_ArrayOfMsgIndex_toDisplay, &outC->_L165);
  outC->DMI_InterpolatedDistanceToTarget_toDisplay = outC->_L152;
  outC->DMI_levelMenuVisibility_toDisplay = outC->_L193;
  kcg_copy_array_bool_15(
    &outC->DMI_window_mask_visibility__toDisplay,
    &outC->_L157);
  outC->DMI_SpeedTarget_toDisplay = outC->_L146;
  outC->DMI_SingleMsgAckRequiredVisibility_toDysplay = outC->_L273;
  outC->DMI_VreleaseColor_toDisplay = outC->_L187;
  outC->DMI_trainLenght_toDisplay = outC->_L170;
  outC->DMI_TrainPosition_toDisplay = outC->_L138;
  outC->DMI_Vinterv_Color_toDisplay = outC->_L192;
  outC->DMI_modeSymbolAnnouncementIndex_toDisplay = outC->_L183;
  outC->DMI_yellowBorderMsg_toDisplay = outC->_L175;
  outC->DMI_DistanceToTargetBarVisibility_toDisplay = outC->_L162;
  outC->DMI_SpeedDigitOne_toDisplay = outC->_L143;
  outC->DMI_yellowBorderC1Area_toDisplay = outC->_L180;
  outC->DMI_trainAxleloadIndex_toDisplay = outC->_L167;
  outC->DMI_PointerColor_toDisplay = outC->_L154;
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&outC->EVC_fromDMI, &outC->_L283);
}

#ifndef KCG_USER_DEFINED_INIT
void DMI_init_Toolbox(outC_DMI_Toolbox *outC)
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
  static kcg_size idx40;
  static kcg_size idx41;
  static kcg_size idx42;
  static kcg_size idx43;
  static kcg_size idx44;
  static kcg_size idx45;
  static kcg_size idx46;
  static kcg_size idx47;
  static kcg_size idx48;
  static kcg_size idx49;
  static kcg_size idx50;
  static kcg_size idx51;
  static kcg_size idx52;
  static kcg_size idx53;
  static kcg_size idx54;
  static kcg_size idx55;
  static kcg_size idx56;

  outC->_L289 = kcg_true;
  outC->_L288.compatibleModeAndLevel = kcg_true;
  outC->_L288.level = M_LEVEL_Level_0;
  outC->_L288.newLevel = kcg_true;
  outC->_L288.Mode = M_MODE_Full_Supervision;
  outC->_L288.newMode = kcg_true;
  outC->_L287 = kcg_true;
  for (idx = 0; idx < 4; idx++) {
    outC->_L286[idx] = kcg_lit_float64(0.0);
  }
  outC->_L285 = kcg_true;
  outC->_L284 = kcg_true;
  for (idx1 = 0; idx1 < 311; idx1++) {
    outC->_L283[idx1] = kcg_lit_int64(0);
  }
  outC->_L282 = kcg_lit_int64(0);
  outC->_L281 = kcg_lit_int64(0);
  outC->_L280 = kcg_true;
  outC->_L279.valid = kcg_true;
  outC->_L279.acknowledgedByDriver = kcg_true;
  outC->_L279.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L279.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L279.trainLength = kcg_lit_int64(0);
  outC->_L279.brakePerctage = kcg_lit_int64(0);
  outC->_L279.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L279.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L279.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L279.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L279.axleNumber = kcg_lit_int64(0);
  outC->_L279.numberNationalSystems = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L279.nationSystems[idx2] = kcg_lit_int64(0);
  }
  outC->_L279.numberTractionSystems = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 4; idx3++) {
    outC->_L279.tractionSystem[idx3].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L279.tractionSystem[idx3].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L278 = kcg_true;
  outC->_L277 = kcg_true;
  outC->_L276 = kcg_true;
  outC->_L274 = kcg_true;
  outC->_L273 = kcg_true;
  outC->_L272 = kcg_true;
  outC->_L271 = kcg_true;
  outC->_L270 = kcg_true;
  outC->_L269 = kcg_true;
  outC->_L267 = kcg_true;
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L237[idx4] = kcg_lit_float64(0.0);
  }
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L238[idx5] = kcg_lit_float64(0.0);
  }
  for (idx6 = 0; idx6 < 9; idx6++) {
    outC->_L239[idx6] = kcg_lit_float64(0.0);
  }
  outC->_L240 = kcg_true;
  for (idx7 = 0; idx7 < 32; idx7++) {
    outC->_L241[idx7] = kcg_lit_float64(0.0);
  }
  outC->_L119 = kcg_true;
  outC->_L121 = kcg_true;
  outC->_L122 = kcg_true;
  outC->_L125 = kcg_true;
  outC->_L127 = kcg_true;
  outC->_L129 = kcg_true;
  outC->_L130 = kcg_lit_float64(0.0);
  outC->_L132 = kcg_true;
  outC->_L133 = kcg_true;
  outC->_L135 = kcg_true;
  outC->_L137 = kcg_true;
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->_L208[idx8] = kcg_true;
  }
  for (idx9 = 0; idx9 < 4; idx9++) {
    outC->_L207[idx9] = kcg_lit_float64(0.0);
  }
  for (idx10 = 0; idx10 < 4; idx10++) {
    outC->_L206[idx10] = kcg_lit_float64(0.0);
  }
  for (idx11 = 0; idx11 < 1; idx11++) {
    outC->_L205[idx11] = kcg_lit_float64(0.0);
  }
  for (idx12 = 0; idx12 < 10; idx12++) {
    outC->_L204[idx12] = kcg_lit_float64(0.0);
  }
  for (idx13 = 0; idx13 < 10; idx13++) {
    outC->_L203[idx13] = kcg_lit_int64(0);
  }
  for (idx14 = 0; idx14 < 10; idx14++) {
    outC->_L202[idx14] = kcg_true;
  }
  outC->_L201 = kcg_true;
  for (idx15 = 0; idx15 < 5; idx15++) {
    outC->_L200[idx15] = kcg_lit_float64(0.0);
  }
  for (idx16 = 0; idx16 < 5; idx16++) {
    outC->_L199[idx16] = kcg_lit_float64(0.0);
  }
  for (idx18 = 0; idx18 < 5; idx18++) {
    for (idx17 = 0; idx17 < 30; idx17++) {
      outC->_L198[idx18][idx17] = ' ';
    }
  }
  for (idx19 = 0; idx19 < 5; idx19++) {
    outC->_L197[idx19] = kcg_lit_int64(0);
  }
  outC->_L196.valid = kcg_true;
  outC->_L196.systemTime = kcg_lit_int64(0);
  outC->_L196.level.level = M_LEVEL_Level_0;
  outC->_L196.level.nid_stm = kcg_lit_int64(0);
  outC->_L195 = kcg_lit_int64(0);
  for (idx20 = 0; idx20 < 12; idx20++) {
    outC->_L194[idx20] = kcg_lit_int64(0);
  }
  outC->_L193 = kcg_true;
  outC->_L192 = kcg_lit_int64(0);
  outC->_L191 = kcg_lit_int64(0);
  outC->_L190 = kcg_true;
  outC->_L189 = kcg_true;
  outC->_L188 = kcg_lit_int64(0);
  outC->_L187 = kcg_lit_int64(0);
  outC->_L186 = kcg_lit_int64(0);
  outC->_L185 = kcg_true;
  outC->_L184 = kcg_lit_float64(0.0);
  outC->_L183 = kcg_lit_int64(0);
  outC->_L182 = kcg_lit_int64(0);
  outC->_L181 = kcg_lit_int64(0);
  outC->_L180 = kcg_true;
  outC->_L179.valid = kcg_true;
  outC->_L179.systemTime = kcg_lit_int64(0);
  outC->_L179.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->_L178 = kcg_true;
  outC->_L177 = kcg_true;
  outC->_L176 = kcg_lit_int64(0);
  outC->_L175 = kcg_true;
  outC->_L174 = kcg_lit_int64(0);
  outC->_L173 = kcg_true;
  outC->_L172 = kcg_lit_float64(0.0);
  outC->_L171 = kcg_lit_float64(0.0);
  outC->_L170 = kcg_lit_float64(0.0);
  outC->_L169 = kcg_lit_int64(0);
  outC->_L168 = kcg_lit_int64(0);
  outC->_L167 = kcg_lit_int64(0);
  outC->_L166 = kcg_lit_int64(0);
  for (idx21 = 0; idx21 < 5; idx21++) {
    outC->_L165[idx21] = kcg_lit_int64(0);
  }
  outC->_L164 = kcg_true;
  outC->_L163 = kcg_lit_int64(0);
  outC->_L162 = kcg_true;
  outC->_L161 = kcg_lit_int64(0);
  outC->_L160 = kcg_true;
  outC->_L159 = kcg_lit_int64(0);
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->_L158[idx22] = kcg_lit_int64(0);
  }
  for (idx23 = 0; idx23 < 15; idx23++) {
    outC->_L157[idx23] = kcg_true;
  }
  for (idx24 = 0; idx24 < 9; idx24++) {
    outC->_L156[idx24] = kcg_lit_int64(0);
  }
  for (idx25 = 0; idx25 < 9; idx25++) {
    outC->_L155[idx25] = kcg_lit_int64(0);
  }
  outC->_L154 = kcg_lit_int64(0);
  outC->_L153 = kcg_true;
  outC->_L152 = kcg_lit_float64(0.0);
  outC->_L151 = kcg_true;
  outC->_L150 = kcg_lit_float64(0.0);
  outC->_L149 = kcg_lit_float64(0.0);
  outC->_L148 = kcg_lit_float64(0.0);
  outC->_L147 = kcg_lit_float64(0.0);
  outC->_L146 = kcg_lit_float64(0.0);
  outC->_L145 = kcg_lit_float64(0.0);
  outC->_L144 = kcg_lit_float64(0.0);
  outC->_L143 = kcg_lit_float64(0.0);
  outC->_L142 = kcg_true;
  outC->_L141 = kcg_lit_float64(0.0);
  outC->_L140 = kcg_true;
  outC->_L139 = kcg_lit_int64(0);
  outC->_L138 = kcg_lit_float64(0.0);
  outC->_L209 = kcg_true;
  for (idx26 = 0; idx26 < 12; idx26++) {
    outC->_L210[idx26] = kcg_true;
  }
  for (idx27 = 0; idx27 < 12; idx27++) {
    outC->_L212[idx27] = kcg_true;
  }
  outC->_L234 = kcg_true;
  outC->_L118.valid = kcg_true;
  outC->_L118.info.train_status.valid = kcg_true;
  outC->_L118.info.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L118.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L118.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L118.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L118.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L118.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L118.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L118.info.brake_status.valid = kcg_true;
  outC->_L118.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L118.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L118.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L118.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L118.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L118.info.brake_pressure.valid = kcg_true;
  outC->_L118.info.brake_pressure.pressure = kcg_lit_int64(0);
  outC->_L118.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L118.info.train_data_info.valid = kcg_true;
  outC->_L118.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L118.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L118.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L118.info.train_data_info.trainLength = kcg_lit_int64(0);
  outC->_L118.info.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->_L118.info.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L118.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L118.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L118.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L118.info.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->_L118.info.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx28 = 0; idx28 < 5; idx28++) {
    outC->_L118.info.train_data_info.nationSystems[idx28] = kcg_lit_int64(0);
  }
  outC->_L118.info.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx29 = 0; idx29 < 4; idx29++) {
    outC->_L118.info.train_data_info.tractionSystem[idx29].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L118.info.train_data_info.tractionSystem[idx29].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L118.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L118.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L118.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L118.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L118.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L118.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L118.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->_L118.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->_L6.train_status.valid = kcg_true;
  outC->_L6.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L6.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L6.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L6.train_status.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L6.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L6.train_status.m_trainintegrity_st = train_is_not_integer_TIU_Types_Pkg;
  outC->_L6.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L6.brake_status.valid = kcg_true;
  outC->_L6.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L6.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L6.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L6.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L6.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L6.brake_pressure.valid = kcg_true;
  outC->_L6.brake_pressure.pressure = kcg_lit_int64(0);
  outC->_L6.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L6.train_data_info.valid = kcg_true;
  outC->_L6.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L6.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L6.train_data_info.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L6.train_data_info.trainLength = kcg_lit_int64(0);
  outC->_L6.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->_L6.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L6.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L6.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L6.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L6.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->_L6.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx30 = 0; idx30 < 5; idx30++) {
    outC->_L6.train_data_info.nationSystems[idx30] = kcg_lit_int64(0);
  }
  outC->_L6.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx31 = 0; idx31 < 4; idx31++) {
    outC->_L6.train_data_info.tractionSystem[idx31].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L6.train_data_info.tractionSystem[idx31].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L6.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L6.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L6.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L6.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L6.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L6.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L6.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->_L6.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->_L5.valid = kcg_true;
  outC->_L5.deskOpen = kcg_true;
  outC->_L5.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L5.activeCab = CabUndefined_TIU_Types_Pkg;
  for (idx32 = 0; idx32 < 999; idx32++) {
    outC->_L17[idx32] = kcg_lit_int64(0);
  }
  for (idx33 = 0; idx33 < 4; idx33++) {
    outC->DMI_TimeArray[idx33] = kcg_lit_float64(0.0);
  }
  outC->DMI_ScrollUpEnableIndex = kcg_lit_int64(0);
  outC->DMI_ScrollDownEnableIndex = kcg_lit_int64(0);
  outC->DMI_PlanningAreaVisibility_toDisplay = kcg_true;
  for (idx34 = 0; idx34 < 9; idx34++) {
    outC->DMI_D_Scale_toDisplay[idx34] = kcg_lit_float64(0.0);
  }
  for (idx35 = 0; idx35 < 32; idx35++) {
    outC->DMI_D_GradientVisible_toDisplay[idx35] = kcg_true;
  }
  for (idx36 = 0; idx36 < 1; idx36++) {
    outC->DMI_D_PASP_IndicationMarker_toDisplay[idx36] = kcg_lit_float64(0.0);
  }
  for (idx37 = 0; idx37 < 4; idx37++) {
    outC->DMI_D_PASP_Distances_toDisplay[idx37] = kcg_lit_float64(0.0);
  }
  for (idx38 = 0; idx38 < 4; idx38++) {
    outC->DMI_D_PASP_Speeds_toDisplay[idx38] = kcg_lit_float64(0.0);
  }
  for (idx39 = 0; idx39 < 10; idx39++) {
    outC->DMI_D_SPDI_SpeedChangePosition_toDisplay[idx39] = kcg_lit_float64(0.0);
  }
  for (idx40 = 0; idx40 < 10; idx40++) {
    outC->DMI_D_SPDI_SpeedChangeIndex_toDisplay[idx40] = kcg_lit_int64(0);
  }
  for (idx41 = 0; idx41 < 10; idx41++) {
    outC->DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay[idx41] = kcg_true;
  }
  outC->DMI_isAuxiliarMsg_toDisplay = kcg_true;
  for (idx42 = 0; idx42 < 5; idx42++) {
    outC->DMI_Array_mm_toDisplay[idx42] = kcg_lit_float64(0.0);
  }
  for (idx43 = 0; idx43 < 5; idx43++) {
    outC->DMI_Array_hh_toDisplay[idx43] = kcg_lit_float64(0.0);
  }
  for (idx45 = 0; idx45 < 5; idx45++) {
    for (idx44 = 0; idx44 < 30; idx44++) {
      outC->DMI_PlainText_toDisplay[idx45][idx44] = ' ';
    }
  }
  outC->DMI_levelMenuVisibility_toDisplay = kcg_true;
  for (idx46 = 0; idx46 < 12; idx46++) {
    outC->DMI_ArrayLevelIndex_toDisplay[idx46] = kcg_lit_int64(0);
  }
  outC->DMI_IndexLevel_toDisplay = kcg_lit_int64(0);
  outC->DMI_level_data.valid = kcg_true;
  outC->DMI_level_data.systemTime = kcg_lit_int64(0);
  outC->DMI_level_data.level.level = M_LEVEL_Level_0;
  outC->DMI_level_data.level.nid_stm = kcg_lit_int64(0);
  for (idx47 = 0; idx47 < 5; idx47++) {
    outC->DMI_IndexFixedMsg_toDisplay[idx47] = kcg_lit_int64(0);
  }
  outC->DMI_SingleMsgAckRequiredVisibility_toDysplay = kcg_true;
  outC->DMI_InterpolatedDistanceToTarget_toDisplay = kcg_lit_float64(0.0);
  for (idx48 = 0; idx48 < 5; idx48++) {
    outC->DMI_ArrayOfMsgIndex_toDisplay[idx48] = kcg_lit_int64(0);
  }
  outC->DMI_iconGroupIndex_toDisplay = kcg_lit_int64(0);
  outC->DMI_TrainSpeed_toDisplay = kcg_lit_float64(0.0);
  outC->DMI_StatusSymbolVisibility_toDisplay = kcg_true;
  outC->DMI_traindataValidWinVisibility_toDisplay = kcg_true;
  outC->DMI_Vtarget_permVisibility_toDisplay = kcg_true;
  for (idx49 = 0; idx49 < 32; idx49++) {
    outC->DMI_GradientsStart_toDisplay[idx49] = kcg_lit_float64(0.0);
  }
  outC->DMI_trainAirtightIndex_toDisplay = kcg_lit_int64(0);
  outC->DMI_yellowBorderC1Area_toDisplay = kcg_true;
  outC->DMI_SpeedDigitTwo_toDisplay = kcg_lit_float64(0.0);
  for (idx50 = 0; idx50 < 9; idx50++) {
    outC->DMI_DriverID_Display_toDisplay[idx50] = kcg_lit_int64(0);
  }
  outC->DMI_yellowBorderMsg_toDisplay = kcg_true;
  outC->DMI_Vinterv_Color_toDisplay = kcg_lit_int64(0);
  outC->DMI_DistanceToTarget_toDisplay = kcg_lit_float64(0.0);
  outC->DMI_ModeSymbol_toDisplay = kcg_lit_int64(0);
  outC->DMI_modeSymbolAnnouncementIndex_toDisplay = kcg_lit_int64(0);
  outC->DMI_ETCS_LevelSymbol_toDisplay = kcg_lit_int64(0);
  for (idx51 = 0; idx51 < 30; idx51++) {
    outC->DMI_ArrayButtonsEnabler_toDisplay[idx51] = kcg_lit_int64(0);
  }
  outC->DMI_trainBrakePerc_toDisplay = kcg_lit_float64(0.0);
  outC->DMI_VreleaseColor_toDisplay = kcg_lit_int64(0);
  outC->DMI_SpeedPermitted_toDisplay = kcg_lit_float64(0.0);
  outC->DMI_trainCategoryIndex_toDisplay = kcg_lit_int64(0);
  outC->DMI_levelSymbolAnnouncementIndex_toDisplay = kcg_lit_int64(0);
  outC->DMI_TrainDataWindowVisibility_toDisplay = kcg_true;
  outC->DMI_StatusSymbolBrake_toDisplay = kcg_true;
  outC->DMI_traindataYesNoIndex_toDisplay = kcg_lit_int64(0);
  outC->DMI_vtarget_permColor_toDisplay = kcg_lit_int64(0);
  for (idx52 = 0; idx52 < 32; idx52++) {
    outC->DMI_GradientsEnd_toDisplay[idx52] = kcg_lit_float64(0.0);
  }
  outC->DMI_RBC_status_symbol_toDisplay = kcg_lit_int64(0);
  for (idx53 = 0; idx53 < 9; idx53++) {
    outC->DMI_TrainRN_Display_toDisplay[idx53] = kcg_lit_int64(0);
  }
  outC->DMI_trainLoadingGougeIndex_toDisplay = kcg_lit_int64(0);
  outC->DMI_hourGlassCounter_toDisplay = kcg_lit_float64(0.0);
  outC->DMI_SpeedDigitThree_toDisplay = kcg_lit_float64(0.0);
  outC->DMI_ModeSymbolVisibility_toDisplay = kcg_true;
  outC->DMI_closeButtonIndex_toDisplay = kcg_lit_int64(0);
  outC->DMI_yellowBorderBrakeSymbol_toDisplay = kcg_true;
  outC->DMI_SpeedIntervention_toDisplay = kcg_lit_float64(0.0);
  outC->DMI_LevelSymbolVisibility_toDisplay = kcg_true;
  outC->DMI_DistanceToTargetVisible_toDisplay = kcg_true;
  outC->DMI_trainMaxspeed_toDisplay = kcg_lit_float64(0.0);
  outC->DMI_VtargetColor_toDisplay = kcg_lit_int64(0);
  outC->DMI_SpeedRelease_toDisplay = kcg_lit_float64(0.0);
  outC->DMI_CloseButtonEnabler_toDisplay = kcg_lit_int64(0);
  outC->DMI_PointerColor_toDisplay = kcg_lit_int64(0);
  outC->DMI_trainAxleloadIndex_toDisplay = kcg_lit_int64(0);
  outC->DMI_hourGlassVisibility_toDisplay = kcg_true;
  outC->DMI_SpeedDigitOne_toDisplay = kcg_lit_float64(0.0);
  outC->DMI_DistanceToTargetBarVisibility_toDisplay = kcg_true;
  outC->DMI_Vinterv_Visibility_toDisplay = kcg_true;
  outC->DMI_TrainPosition_toDisplay = kcg_lit_float64(0.0);
  for (idx54 = 0; idx54 < 32; idx54++) {
    outC->DMI_GradientsValue_toDisplay[idx54] = kcg_lit_float64(0.0);
  }
  outC->DMI_trainLenght_toDisplay = kcg_lit_float64(0.0);
  outC->DMI_VpermColor_toDisplay = kcg_lit_int64(0);
  outC->DMI_SpeedTarget_toDisplay = kcg_lit_float64(0.0);
  for (idx55 = 0; idx55 < 15; idx55++) {
    outC->DMI_window_mask_visibility__toDisplay[idx55] = kcg_true;
  }
  outC->DMI_openDesk_toDisplay = kcg_true;
  outC->DMI_icons_ack.valid = kcg_true;
  outC->DMI_icons_ack.systemTime = kcg_lit_int64(0);
  outC->DMI_icons_ack.DMI_nid_icon_identifier = kcg_lit_int64(0);
  for (idx56 = 0; idx56 < 311; idx56++) {
    outC->EVC_fromDMI[idx56] = kcg_lit_int64(0);
  }
  /* _L138=(DMI_Control_Pkg::DMI_Controller#2)/ */
  DMI_Controller_init_DMI_Control_Pkg(&outC->Context_DMI_Controller_2);
  /* _L5=(input_from_TIU_API_Pkg::manageTIU_input#1)/ */
  manageTIU_input_init_input_from_TIU_API_Pkg(&outC->Context_manageTIU_input_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DMI_reset_Toolbox(outC_DMI_Toolbox *outC)
{
  /* _L138=(DMI_Control_Pkg::DMI_Controller#2)/ */
  DMI_Controller_reset_DMI_Control_Pkg(&outC->Context_DMI_Controller_2);
  /* _L5=(input_from_TIU_API_Pkg::manageTIU_input#1)/ */
  manageTIU_input_reset_input_from_TIU_API_Pkg(
    &outC->Context_manageTIU_input_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_DMI_Toolbox(SV_DMI_Toolbox *SV, outC_DMI_Toolbox *outC)
{
  kcg_save_SV_manageTIU_input_input_from_TIU_API_Pkg(
    &SV->Context_manageTIU_input_1,
    &outC->Context_manageTIU_input_1);
  kcg_save_SV_DMI_Controller_DMI_Control_Pkg(
    &SV->Context_DMI_Controller_2,
    &outC->Context_DMI_Controller_2);
}

void kcg_load_SV_DMI_Toolbox(outC_DMI_Toolbox *outC, SV_DMI_Toolbox *SV)
{
  kcg_load_SV_manageTIU_input_input_from_TIU_API_Pkg(
    &outC->Context_manageTIU_input_1,
    &SV->Context_manageTIU_input_1);
  kcg_load_SV_DMI_Controller_DMI_Control_Pkg(
    &outC->Context_DMI_Controller_2,
    &SV->Context_DMI_Controller_2);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DMI_Toolbox.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

