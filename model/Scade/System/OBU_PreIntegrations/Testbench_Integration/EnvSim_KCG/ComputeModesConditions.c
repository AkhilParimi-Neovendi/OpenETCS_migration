/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ComputeModesConditions.h"

/* ComputeModesConditions/ */
void ComputeModesConditions(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Train_Permitted_NL/ */
  kcg_bool Train_Permitted_NL,
  /* Train_Permitted_PS/ */
  kcg_bool Train_Permitted_PS,
  /* Train_Req_SL/ */
  kcg_bool Train_Req_SL,
  /* All_Desks_Closed/ */
  kcg_bool All_Desks_Closed,
  /* Desk_Open/ */
  kcg_bool Desk_Open,
  /* OnBoard_Powered/ */
  kcg_bool OnBoard_Powered,
  /* Valid_Train_Data_Stored/ */
  kcg_bool Valid_Train_Data_Stored,
  /* Driver_Ack_LS/ */
  kcg_bool Driver_Ack_LS,
  /* Driver_Ack_OS/ */
  kcg_bool Driver_Ack_OS,
  /* Driver_Ack_RV/ */
  kcg_bool Driver_Ack_RV,
  /* Driver_Ack_SH/ */
  kcg_bool Driver_Ack_SH,
  /* Driver_Ack_SN/ */
  kcg_bool Driver_Ack_SN,
  /* Driver_Ack_SR/ */
  kcg_bool Driver_Ack_SR,
  /* Driver_Ack_TR/ */
  kcg_bool Driver_Ack_TR,
  /* Driver_Ack_UN/ */
  kcg_bool Driver_Ack_UN,
  /* Driver_Req_Exit_SH/ */
  kcg_bool Driver_Req_Exit_SH,
  /* Driver_Req_NL/ */
  kcg_bool Driver_Req_NL,
  /* Driver_Req_Override/ */
  kcg_bool Driver_Req_Override,
  /* Driver_Req_SH/ */
  kcg_bool Driver_Req_SH,
  /* Driver_Req_Start/ */
  kcg_bool Driver_Req_Start,
  /* ETCS_Isolated/ */
  kcg_bool ETCS_Isolated,
  /* MA_SSP_Gradiant_Available/ */
  kcg_bool MA_SSP_Gradiant_Available,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Shunting_Granted_By_RBC/ */
  kcg_bool Shunting_Granted_By_RBC,
  /* Trip_Order_Given_By_Balise/ */
  kcg_bool Trip_Order_Given_By_Balise,
  /* List_BG_Related_To_SR_Empty/ */
  kcg_bool List_BG_Related_To_SR_Empty,
  /* Stop_If_In_Shunting/ */
  kcg_bool Stop_If_In_Shunting,
  /* Stop_If_In_SR/ */
  kcg_bool Stop_If_In_SR,
  /* RBC_Ack_And_EB_Revocked/ */
  kcg_bool RBC_Ack_And_EB_Revocked,
  /* RBC_Authorized_SR/ */
  kcg_bool RBC_Authorized_SR,
  /* Reversing_Data/ */
  T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data,
  /* Emergency_Stop_Message_Received/ */
  kcg_bool Emergency_Stop_Message_Received,
  /* Estimated_Front_End_Overpass_SR_Distance/ */
  kcg_bool Estimated_Front_End_Overpass_SR_Distance,
  /* Estimated_Front_End_Rear_Location_SSP_Or_Gradient/ */
  kcg_bool Estimated_Front_End_Rear_Location_SSP_Or_Gradient,
  /* Override_Function_Active/ */
  kcg_bool Override_Function_Active,
  /* Train_Overpass_EOA_Antenna/ */
  kcg_bool Train_Overpass_EOA_Antenna,
  /* Train_Overpass_EOA_Front_End/ */
  kcg_bool Train_Overpass_EOA_Front_End,
  /* Train_Speed_Under_Override_Limit/ */
  kcg_bool Train_Speed_Under_Override_Limit,
  /* BG_In_Expected_List_In_SR/ */
  kcg_bool BG_In_Expected_List_In_SR,
  /* BG_In_Expected_List_In_SH/ */
  kcg_bool BG_In_Expected_List_In_SH,
  /* Linked_BG_Pased_In_Wrong_Direction/ */
  kcg_bool Linked_BG_Pased_In_Wrong_Direction,
  /* Train_Position/ */
  trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Train_Speed/ */
  Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  /* Train_Standstill/ */
  kcg_bool Train_Standstill,
  /* Interface_To_National_System/ */
  kcg_bool Interface_To_National_System,
  /* National_Trip_Order/ */
  kcg_bool National_Trip_Order,
  /* T_NVCONTACT_Overpass/ */
  kcg_bool T_NVCONTACT_Overpass,
  /* Error_BG_System_Version/ */
  kcg_bool Error_BG_System_Version,
  /* Failure_Occured/ */
  kcg_bool Failure_Occured,
  /* Continue_Shunting_Function_Active/ */
  kcg_bool Continue_Shunting_Function_Active,
  /* Stop_Shunting_Stored/ */
  kcg_bool Stop_Shunting_Stored,
  /* Linking_Reaction_To_Trip/ */
  kcg_bool Linking_Reaction_To_Trip,
  /* TripModeFromLevel/ */
  kcg_bool TripModeFromLevel,
  outC_ComputeModesConditions *outC)
{
  /* On_Going_Mission/ */
  static kcg_bool last_On_Going_Mission;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool last_End_Of_Mission_Procedure_Req;
  /* Failure_Occured/ */
  static kcg_bool last_Failure_Occured;
  /* Train_Overpass_EOA_Antenna/ */
  static kcg_bool last_Train_Overpass_EOA_Antenna;
  /* Override_Function_Active/ */
  static kcg_bool last_Override_Function_Active;
  /* Current_Level/ */
  static M_LEVEL last_Current_Level;

  last_Current_Level = outC->mem_Current_Level;
  outC->mem_Current_Level = Current_Level;
  last_Override_Function_Active = outC->mem_Override_Function_Active;
  outC->mem_Override_Function_Active = Override_Function_Active;
  last_Train_Overpass_EOA_Antenna = outC->mem_Train_Overpass_EOA_Antenna;
  outC->mem_Train_Overpass_EOA_Antenna = Train_Overpass_EOA_Antenna;
  last_Failure_Occured = outC->mem_Failure_Occured;
  outC->mem_Failure_Occured = Failure_Occured;
  last_On_Going_Mission = outC->On_Going_Mission;
  last_End_Of_Mission_Procedure_Req = outC->End_Of_Mission_Procedure_Req;
  outC->_L497 = TripModeFromLevel;
  outC->_L496 = MA_SSP_Gradiant_Available;
  outC->_L495 = last_Override_Function_Active;
  outC->_L494 = last_Train_Overpass_EOA_Antenna;
  outC->_L490 = Driver_Req_SH;
  outC->_L489 = Desk_Open;
  outC->_L488 = All_Desks_Closed;
  outC->_L487 = Desk_Open;
  outC->_L486 = All_Desks_Closed;
  outC->_L485 = All_Desks_Closed;
  outC->_L484 = Desk_Open;
  outC->_L43 = Current_Level;
  outC->_L206 = Current_Mode;
  outC->_L46 = Driver_Ack_SH;
  outC->_L42 = Driver_Req_SH;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &outC->_L50,
    Mode_Profile_On_Board);
  outC->_L360 = last_End_Of_Mission_Procedure_Req;
  outC->_L298 = last_On_Going_Mission;
  outC->_L297 = outC->_L298 & outC->_L360;
  outC->_L352 = kcg_true;
  outC->_L353 = kcg_true;
  outC->_L354 = kcg_true;
  outC->_L355 = kcg_true;
  outC->_L356 = kcg_true;
  outC->_L357 = kcg_true;
  outC->_L358 = kcg_true;
  outC->_L359 = kcg_false;
  outC->_L295 = Current_Mode;
  /* _L294= */
  switch (outC->_L295) {
    case FS_Level_And_Mode_Types_Pkg :
      outC->_L294 = outC->_L352;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      outC->_L294 = outC->_L353;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      outC->_L294 = outC->_L354;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      outC->_L294 = outC->_L355;
      break;
    case NL_Level_And_Mode_Types_Pkg :
      outC->_L294 = outC->_L356;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      outC->_L294 = outC->_L357;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      outC->_L294 = outC->_L358;
      break;
    default :
      outC->_L294 = outC->_L359;
      break;
  }
  outC->_L296 = outC->_L294 | outC->_L297;
  outC->On_Going_Mission = outC->_L296;
  outC->_L220 = outC->On_Going_Mission;
  outC->_L40 = Shunting_Granted_By_RBC;
  outC->_L45 = Stop_Shunting_Stored;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L329, Train_Position);
  outC->_L221 = Train_Speed;
  outC->_L39 = Train_Standstill;
  /* _L88=(Conditions::ToShunting#1)/ */
  ToShunting_Conditions(
    outC->_L43,
    outC->_L206,
    outC->_L489,
    outC->_L46,
    outC->_L42,
    &outC->_L50,
    outC->_L220,
    outC->_L40,
    outC->_L45,
    &outC->_L329,
    outC->_L221,
    outC->_L39,
    &outC->Context_ToShunting_1);
  outC->_L88 = outC->Context_ToShunting_1.Condition5;
  outC->_L89 = outC->Context_ToShunting_1.Condition6;
  outC->_L90 = outC->Context_ToShunting_1.Condition23;
  outC->_L91 = outC->Context_ToShunting_1.Condition50;
  outC->_L92 = outC->Context_ToShunting_1.Condition51;
  outC->_L93 = outC->Context_ToShunting_1.Condition61;
  outC->_L203 = outC->Context_ToShunting_1.Ack_SH_Req_To_Driver;
  outC->_L208 = outC->Context_ToShunting_1.Clean_BG_List_SH_Area;
  outC->_L207 = outC->Context_ToShunting_1.End_Of_Mission_Procedure_Req;
  outC->_L201 = outC->Context_ToShunting_1.Request_For_SH_To_RBC;
  outC->_L202 = outC->Context_ToShunting_1.Service_Brake_Command;
  outC->_L200 = outC->Context_ToShunting_1.SH_refused_By_RBC_To_DMI;
  outC->Loc_SH_Refused_By_RBC_To_DMI_SH = outC->_L200;
  outC->_L372 = outC->Loc_SH_Refused_By_RBC_To_DMI_SH;
  outC->_L249 = Current_Level;
  outC->_L250 = Current_Mode;
  outC->_L251 = Driver_Ack_LS;
  outC->_L252 = Driver_Ack_OS;
  outC->_L253 = Driver_Ack_SH;
  outC->_L254 = Driver_Ack_SN;
  outC->_L255 = Driver_Ack_SR;
  outC->_L256 = Driver_Ack_UN;
  outC->_L257 = Driver_Req_NL;
  outC->_L258 = Driver_Req_SH;
  outC->_L260 = Driver_Req_Start;
  outC->_L261 = MA_SSP_Gradiant_Available;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &outC->_L262,
    Mode_Profile_On_Board);
  outC->_L267 = RBC_Authorized_SR;
  outC->_L263 = Shunting_Granted_By_RBC;
  outC->_L264 = Train_Permitted_NL;
  outC->_L265 = Train_Standstill;
  outC->_L266 = Valid_Train_Data_Stored;
  /* _L268=(Procedures::Procedure_StartOfMission#1)/ */
  Procedure_StartOfMission_Procedures(
    outC->_L249,
    outC->_L250,
    outC->_L484,
    outC->_L251,
    outC->_L252,
    outC->_L253,
    outC->_L254,
    outC->_L255,
    outC->_L256,
    outC->_L257,
    outC->_L258,
    outC->_L260,
    outC->_L261,
    &outC->_L262,
    outC->_L267,
    outC->_L263,
    outC->_L264,
    outC->_L265,
    outC->_L266,
    &outC->Context_Procedure_StartOfMission_1);
  outC->_L268 = outC->Context_Procedure_StartOfMission_1.Ack_LS_Req_To_Driver;
  outC->_L269 = outC->Context_Procedure_StartOfMission_1.Ack_OS_Req_To_Driver;
  outC->_L270 = outC->Context_Procedure_StartOfMission_1.Ack_SH_Req_To_Driver;
  outC->_L230 = outC->Context_Procedure_StartOfMission_1.Ack_SN_Req_To_Driver;
  outC->_L229 = outC->Context_Procedure_StartOfMission_1.Ack_SR_Req_To_Driver;
  outC->_L231 = outC->Context_Procedure_StartOfMission_1.Ack_UN_Req_To_Driver;
  outC->_L232 = outC->Context_Procedure_StartOfMission_1.Clean_BG_List_SH_Area;
  outC->_L233 = outC->Context_Procedure_StartOfMission_1.Condition_5;
  outC->_L234 = outC->Context_Procedure_StartOfMission_1.Condition_6;
  outC->_L235 = outC->Context_Procedure_StartOfMission_1.Condition_8;
  outC->_L236 = outC->Context_Procedure_StartOfMission_1.Condition_10;
  outC->_L246 = outC->Context_Procedure_StartOfMission_1.Condition_15;
  outC->_L237 = outC->Context_Procedure_StartOfMission_1.Condition_46;
  outC->_L247 = outC->Context_Procedure_StartOfMission_1.Condition_50;
  outC->_L239 = outC->Context_Procedure_StartOfMission_1.Condition_58;
  outC->_L238 = outC->Context_Procedure_StartOfMission_1.Condition_60;
  outC->_L248 = outC->Context_Procedure_StartOfMission_1.Condition_70;
  outC->_L241 = outC->Context_Procedure_StartOfMission_1.EB_Requested;
  outC->_L240 =
    outC->Context_Procedure_StartOfMission_1.End_Of_Mission_Procedure_Req;
  outC->_L242 = outC->Context_Procedure_StartOfMission_1.MA_Req_To_RBC;
  outC->_L245 = outC->Context_Procedure_StartOfMission_1.Request_For_SH_To_RBC;
  outC->_L244 = outC->Context_Procedure_StartOfMission_1.SH_Refused_By_RBC_To_DMI;
  outC->Loc_SH_Refused_By_RBC_To_DMI_SoM = outC->_L244;
  outC->_L380 = outC->Loc_SH_Refused_By_RBC_To_DMI_SoM;
  outC->_L174 = BG_In_Expected_List_In_SH;
  outC->_L175 = BG_In_Expected_List_In_SR;
  outC->_L176 = Current_Level;
  outC->_L366 = Current_Mode;
  outC->_L178 = Emergency_Stop_Message_Received;
  outC->_L179 = Error_BG_System_Version;
  outC->_L180 = Estimated_Front_End_Overpass_SR_Distance;
  outC->_L181 = Estimated_Front_End_Rear_Location_SSP_Or_Gradient;
  outC->_L182 = Interface_To_National_System;
  outC->_L183 = Linked_BG_Pased_In_Wrong_Direction;
  outC->_L166 = Linking_Reaction_To_Trip;
  outC->_L184 = List_BG_Related_To_SR_Empty;
  outC->_L186 = National_Trip_Order;
  outC->_L187 = Override_Function_Active;
  outC->_L190 = Stop_If_In_Shunting;
  outC->_L191 = Stop_If_In_SR;
  outC->_L367 = T_NVCONTACT_Overpass;
  outC->_L192 = Train_Overpass_EOA_Antenna;
  outC->_L193 = Train_Overpass_EOA_Front_End;
  outC->_L195 = Trip_Order_Given_By_Balise;
  /* _L147=(Conditions::ToTrip#1)/ */
  ToTrip_Conditions(
    outC->_L174,
    outC->_L175,
    outC->_L176,
    outC->_L366,
    outC->_L490,
    outC->_L178,
    outC->_L179,
    outC->_L180,
    outC->_L181,
    outC->_L182,
    outC->_L183,
    outC->_L166,
    outC->_L184,
    outC->_L496,
    outC->_L186,
    outC->_L187,
    outC->_L495,
    outC->_L190,
    outC->_L191,
    outC->_L367,
    outC->_L192,
    outC->_L193,
    outC->_L494,
    outC->_L195,
    outC->_L497,
    &outC->Context_ToTrip_1);
  outC->_L147 = outC->Context_ToTrip_1.Condition2Trip;
  outC->Condition_to_Trip = outC->_L147;
  outC->_L333 = outC->Condition_to_Trip;
  outC->_L334 = Current_Level;
  outC->_L335 = Current_Mode;
  outC->_L336 = Driver_Ack_LS;
  outC->_L337 = Driver_Ack_OS;
  outC->_L338 = Driver_Ack_SH;
  outC->_L339 = Driver_Ack_SR;
  outC->_L340 = Driver_Ack_TR;
  outC->_L341 = Driver_Req_SH;
  outC->_L345 = Driver_Req_Start;
  outC->_L342 = MA_SSP_Gradiant_Available;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &outC->_L343,
    Mode_Profile_On_Board);
  outC->_L344 = outC->On_Going_Mission;
  outC->_L350 = RBC_Ack_And_EB_Revocked;
  outC->_L346 = RBC_Authorized_SR;
  outC->_L347 = Shunting_Granted_By_RBC;
  outC->_L348 = Train_Standstill;
  outC->_L349 = Valid_Train_Data_Stored;
  /* _L328=(Procedures::Procedure_Train_Trip#1)/ */
  Procedure_Train_Trip_Procedures(
    outC->_L333,
    outC->_L334,
    outC->_L335,
    outC->_L336,
    outC->_L337,
    outC->_L338,
    outC->_L339,
    outC->_L340,
    outC->_L341,
    outC->_L345,
    outC->_L342,
    &outC->_L343,
    outC->_L344,
    outC->_L350,
    outC->_L346,
    outC->_L347,
    outC->_L348,
    outC->_L349,
    &outC->Context_Procedure_Train_Trip_1);
  outC->_L328 = outC->Context_Procedure_Train_Trip_1.Ack_LS_Req_To_Driver;
  outC->_L327 = outC->Context_Procedure_Train_Trip_1.Ack_OS_Req_To_Driver;
  outC->_L326 = outC->Context_Procedure_Train_Trip_1.Ack_SH_Req_To_Driver;
  outC->_L324 = outC->Context_Procedure_Train_Trip_1.Ack_SR_Req_To_Driver;
  outC->_L275 = outC->Context_Procedure_Train_Trip_1.Ack_TR_Req_To_Driver;
  outC->_L304 = outC->Context_Procedure_Train_Trip_1.Clean_BG_List_SH_Area;
  outC->_L277 = outC->Context_Procedure_Train_Trip_1.Condition_Trip;
  outC->_L306 = outC->Context_Procedure_Train_Trip_1.Condition_5;
  outC->_L305 = outC->Context_Procedure_Train_Trip_1.Condition_6;
  outC->_L280 = outC->Context_Procedure_Train_Trip_1.Condition_7;
  outC->_L319 = outC->Context_Procedure_Train_Trip_1.Condition_8;
  outC->_L318 = outC->Context_Procedure_Train_Trip_1.Condition_31;
  outC->_L317 = outC->Context_Procedure_Train_Trip_1.Condition_15;
  outC->_L315 = outC->Context_Procedure_Train_Trip_1.Condition_50;
  outC->_L285 = outC->Context_Procedure_Train_Trip_1.Condition_62;
  outC->_L286 = outC->Context_Procedure_Train_Trip_1.Condition_63;
  outC->_L287 = outC->Context_Procedure_Train_Trip_1.Condition_68;
  outC->_L312 = outC->Context_Procedure_Train_Trip_1.Condition_70;
  outC->_L303 = outC->Context_Procedure_Train_Trip_1.End_Of_Mission_Procedure_Req;
  outC->_L309 = outC->Context_Procedure_Train_Trip_1.MA_Req_To_RBC;
  outC->_L302 = outC->Context_Procedure_Train_Trip_1.Request_For_SH_To_RBC;
  outC->_L301 = outC->Context_Procedure_Train_Trip_1.SH_Refused_By_RBC_To_DMI;
  outC->Loc_SH_Refused_By_RBC_To_DMI_TR = outC->_L301;
  outC->_L381 = outC->Loc_SH_Refused_By_RBC_To_DMI_TR;
  outC->_L223 = Current_Mode;
  outC->_L68 = Driver_Ack_LS;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &outC->_L64,
    Mode_Profile_On_Board);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L330, Train_Position);
  outC->_L225 = Train_Speed;
  /* _L100=(Procedures::Procedure_LimitedSupervision#1)/ */
  Procedure_LimitedSupervision_Procedures(
    outC->_L223,
    outC->_L68,
    &outC->_L64,
    &outC->_L330,
    outC->_L225,
    &outC->Context_Procedure_LimitedSupervision_1);
  outC->_L100 = outC->Context_Procedure_LimitedSupervision_1.Condition70;
  outC->_L101 = outC->Context_Procedure_LimitedSupervision_1.Condition71;
  outC->_L102 = outC->Context_Procedure_LimitedSupervision_1.Condition72;
  outC->_L99 = outC->Context_Procedure_LimitedSupervision_1.Condition74;
  outC->_L215 = outC->Context_Procedure_LimitedSupervision_1.Ack_LS_Req_To_Driver;
  outC->_L214 =
    outC->Context_Procedure_LimitedSupervision_1.Service_Brake_Command;
  outC->Loc_Ack_LS_Req_To_Driver_LS = outC->_L215;
  outC->_L386 = outC->Loc_Ack_LS_Req_To_Driver_LS;
  outC->Loc_Ack_LS_Req_To_Driver_SoM = outC->_L268;
  outC->_L387 = outC->Loc_Ack_LS_Req_To_Driver_SoM;
  outC->Loc_Ack_LS_Req_To_Driver_TR = outC->_L328;
  outC->_L388 = outC->Loc_Ack_LS_Req_To_Driver_TR;
  outC->_L226 = Current_Mode;
  outC->_L77 = Driver_Ack_OS;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &outC->_L73,
    Mode_Profile_On_Board);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L331, Train_Position);
  outC->_L228 = Train_Speed;
  /* _L103=(Procedures::Procedure_OnSight#1)/ */
  Procedure_OnSight_Procedures(
    outC->_L226,
    outC->_L77,
    &outC->_L73,
    &outC->_L331,
    outC->_L228,
    &outC->Context_Procedure_OnSight_1);
  outC->_L103 = outC->Context_Procedure_OnSight_1.Condition15;
  outC->_L104 = outC->Context_Procedure_OnSight_1.Condition34;
  outC->_L105 = outC->Context_Procedure_OnSight_1.Condition40;
  outC->_L106 = outC->Context_Procedure_OnSight_1.Condition73;
  outC->_L213 = outC->Context_Procedure_OnSight_1.Ack_OS_Req_To_Driver;
  outC->_L212 = outC->Context_Procedure_OnSight_1.Service_Brake_Command;
  outC->Loc_Ack_OS_Req_To_Driver_OS = outC->_L213;
  outC->_L390 = outC->Loc_Ack_OS_Req_To_Driver_OS;
  outC->Loc_Ack_OS_Req_To_Driver_SoM = outC->_L269;
  outC->_L391 = outC->Loc_Ack_OS_Req_To_Driver_SoM;
  outC->Loc_Ack_OS_Req_To_Driver_TR = outC->_L327;
  outC->_L392 = outC->Loc_Ack_OS_Req_To_Driver_TR;
  outC->Loc_Ack_SH_Req_To_Driver_SH = outC->_L203;
  outC->_L393 = outC->Loc_Ack_SH_Req_To_Driver_SH;
  outC->Loc_Ack_SH_Req_To_Driver_SoM = outC->_L270;
  outC->_L394 = outC->Loc_Ack_SH_Req_To_Driver_SoM;
  outC->Loc_Ack_SH_Req_To_Driver_TR = outC->_L326;
  outC->_L395 = outC->Loc_Ack_SH_Req_To_Driver_TR;
  outC->Loc_Ack_SR_Req_To_Driver_SoM = outC->_L229;
  outC->_L400 = outC->Loc_Ack_SR_Req_To_Driver_SoM;
  outC->Loc_Ack_SR_Req_To_Driver_TR = outC->_L324;
  outC->_L401 = outC->Loc_Ack_SR_Req_To_Driver_TR;
  outC->Loc_Clean_BG_List_Of_SoM = outC->_L232;
  outC->_L402 = outC->Loc_Clean_BG_List_Of_SoM;
  outC->Loc_Clean_BG_List_SH_Area_SH = outC->_L208;
  outC->_L403 = outC->Loc_Clean_BG_List_SH_Area_SH;
  outC->Loc_Clean_BG_List_SH_Area_TR = outC->_L304;
  outC->_L404 = outC->Loc_Clean_BG_List_SH_Area_TR;
  outC->_L27 = Train_Standstill;
  outC->_L28 = Train_Req_SL;
  outC->_L29 = OnBoard_Powered;
  outC->_L30 = Train_Permitted_PS;
  outC->_L31 = Train_Permitted_NL;
  outC->_L32 = Continue_Shunting_Function_Active;
  outC->_L33 = Driver_Req_Exit_SH;
  outC->_L41 = Stop_Shunting_Stored;
  outC->_L300 = outC->On_Going_Mission;
  /* _L79=(Conditions::ToStandBy#1)/ */
  ToStandBy_Conditions(
    outC->_L487,
    outC->_L486,
    outC->_L27,
    outC->_L28,
    outC->_L29,
    outC->_L30,
    outC->_L31,
    outC->_L32,
    outC->_L33,
    outC->_L41,
    outC->_L300,
    &outC->Context_ToStandBy_1);
  outC->_L79 = outC->Context_ToStandBy_1.Condition2;
  outC->_L80 = outC->Context_ToStandBy_1.Condition3;
  outC->_L81 = outC->Context_ToStandBy_1.Condition4;
  outC->_L82 = outC->Context_ToStandBy_1.Condition19;
  outC->_L83 = outC->Context_ToStandBy_1.Condition22;
  outC->_L84 = outC->Context_ToStandBy_1.Condition27;
  outC->_L85 = outC->Context_ToStandBy_1.Condition28;
  outC->_L86 = outC->Context_ToStandBy_1.Condition30;
  outC->_L87 = outC->Context_ToStandBy_1.Condition47;
  outC->_L299 = outC->Context_ToStandBy_1.End_Of_Mission_Procedure_Req;
  outC->Loc_End_Of_Mission_Procedure_Req_SB = outC->_L299;
  outC->_L405 = outC->Loc_End_Of_Mission_Procedure_Req_SB;
  outC->Loc_End_Of_Mission_Procedure_Req_SH = outC->_L207;
  outC->_L406 = outC->Loc_End_Of_Mission_Procedure_Req_SH;
  outC->Loc_End_Of_Mission_Procedure_Req_SoM = outC->_L240;
  outC->_L407 = outC->Loc_End_Of_Mission_Procedure_Req_SoM;
  outC->Loc_End_Of_Mission_Procedure_Req_TR = outC->_L303;
  outC->_L408 = outC->Loc_End_Of_Mission_Procedure_Req_TR;
  outC->Loc_MA_Req_To_RBC_SoM = outC->_L242;
  outC->_L411 = outC->Loc_MA_Req_To_RBC_SoM;
  outC->Loc_MA_Req_To_RBC_TR = outC->_L309;
  outC->_L412 = outC->Loc_MA_Req_To_RBC_TR;
  outC->Loc_Request_For_SH_To_RBC_SH = outC->_L201;
  outC->_L413 = outC->Loc_Request_For_SH_To_RBC_SH;
  outC->Loc_Request_For_SH_To_RBC_SoM = outC->_L245;
  outC->_L414 = outC->Loc_Request_For_SH_To_RBC_SoM;
  outC->Loc_Request_For_SH_To_RBC_TR = outC->_L302;
  outC->_L415 = outC->Loc_Request_For_SH_To_RBC_TR;
  outC->Loc_Service_Brake_Command_LS = outC->_L214;
  outC->_L416 = outC->Loc_Service_Brake_Command_LS;
  outC->Loc_Service_Brake_Command_OS = outC->_L212;
  outC->_L417 = outC->Loc_Service_Brake_Command_OS;
  outC->Loc_Service_Brake_Command_SH = outC->_L202;
  outC->_L418 = outC->Loc_Service_Brake_Command_SH;
  outC->Loc_Cond_15_OS = outC->_L103;
  outC->_L426 = outC->Loc_Cond_15_OS;
  outC->Loc_Cond_15_SoM = outC->_L246;
  outC->_L427 = outC->Loc_Cond_15_SoM;
  outC->Loc_Cond_15_TR = outC->_L317;
  outC->_L428 = outC->Loc_Cond_15_TR;
  outC->_L54 = Current_Level;
  outC->_L59 = Trip_Order_Given_By_Balise;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &outC->_L57,
    Mode_Profile_On_Board);
  outC->_L60 = MA_SSP_Gradiant_Available;
  /* _L96=(Conditions::ToFullSupervision#1)/ */
  ToFullSupervision_Conditions(
    outC->_L54,
    outC->_L59,
    &outC->_L57,
    outC->_L60,
    &outC->Context_ToFullSupervision_1);
  outC->_L96 = outC->Context_ToFullSupervision_1.Condition25;
  outC->_L97 = outC->Context_ToFullSupervision_1.Condition31;
  outC->_L98 = outC->Context_ToFullSupervision_1.Condition32;
  outC->Loc_Cond_31_FS = outC->_L97;
  outC->_L429 = outC->Loc_Cond_31_FS;
  outC->Loc_Cond_31_TR = outC->_L318;
  outC->_L430 = outC->Loc_Cond_31_TR;
  outC->_L127 = Train_Permitted_NL;
  outC->_L128 = Train_Standstill;
  outC->_L129 = Driver_Req_NL;
  /* _L123=(Conditions::ToNonLeading#1)/ */
  ToNonLeading_Conditions(
    outC->_L127,
    outC->_L128,
    outC->_L129,
    &outC->Context_ToNonLeading_1);
  outC->_L123 = outC->Context_ToNonLeading_1.Condition46;
  outC->Loc_Cond_46_NL = outC->_L123;
  outC->_L431 = outC->Loc_Cond_46_NL;
  outC->Loc_Cond_46_SoM = outC->_L237;
  outC->_L432 = outC->Loc_Cond_46_SoM;
  outC->Loc_Cond_50_SH = outC->_L91;
  outC->_L433 = outC->Loc_Cond_50_SH;
  outC->Loc_Cond_50_SoM = outC->_L247;
  outC->_L434 = outC->Loc_Cond_50_SoM;
  outC->Loc_Cond_50_TR = outC->_L315;
  outC->_L435 = outC->Loc_Cond_50_TR;
  outC->Loc_Cond_5_SH = outC->_L88;
  outC->_L436 = outC->Loc_Cond_5_SH;
  outC->Loc_Cond_5_SoM = outC->_L233;
  outC->_L437 = outC->Loc_Cond_5_SoM;
  outC->Loc_Cond_5_TR = outC->_L306;
  outC->_L438 = outC->Loc_Cond_5_TR;
  outC->Loc_Cond_6_SH = outC->_L89;
  outC->_L439 = outC->Loc_Cond_6_SH;
  outC->Loc_Cond_6_SoM = outC->_L234;
  outC->_L440 = outC->Loc_Cond_6_SoM;
  outC->Loc_Cond_6_TR = outC->_L305;
  outC->_L441 = outC->Loc_Cond_6_TR;
  outC->Loc_Cond_70_LS = outC->_L100;
  outC->_L442 = outC->Loc_Cond_70_LS;
  outC->Loc_Cond_70_SoM = outC->_L248;
  outC->_L443 = outC->Loc_Cond_70_SoM;
  outC->Loc_Cond_70_TR = outC->_L312;
  outC->_L444 = outC->Loc_Cond_70_TR;
  outC->Loc_Cond_8_SoM = outC->_L235;
  outC->_L446 = outC->Loc_Cond_8_SoM;
  outC->Loc_Cond_8_TR = outC->_L319;
  outC->_L447 = outC->Loc_Cond_8_TR;
  /* _L448=(Merge_Conditions#1)/ */
  Merge_Conditions(
    outC->_L372,
    outC->_L380,
    outC->_L381,
    outC->_L386,
    outC->_L387,
    outC->_L388,
    outC->_L390,
    outC->_L391,
    outC->_L392,
    outC->_L393,
    outC->_L394,
    outC->_L395,
    outC->_L400,
    outC->_L401,
    outC->_L402,
    outC->_L403,
    outC->_L404,
    outC->_L405,
    outC->_L406,
    outC->_L407,
    outC->_L408,
    outC->_L411,
    outC->_L412,
    outC->_L413,
    outC->_L414,
    outC->_L415,
    outC->_L416,
    outC->_L417,
    outC->_L418,
    outC->_L426,
    outC->_L427,
    outC->_L428,
    outC->_L429,
    outC->_L430,
    outC->_L431,
    outC->_L432,
    outC->_L433,
    outC->_L434,
    outC->_L435,
    outC->_L436,
    outC->_L437,
    outC->_L438,
    outC->_L439,
    outC->_L440,
    outC->_L441,
    outC->_L442,
    outC->_L443,
    outC->_L444,
    outC->_L446,
    outC->_L447,
    &outC->Context_Merge_Conditions_1);
  outC->_L448 = outC->Context_Merge_Conditions_1.SH_Refused_By_RBC_To_DMI;
  outC->_L449 = outC->Context_Merge_Conditions_1.Ack_LS_Req_To_Driver;
  outC->_L450 = outC->Context_Merge_Conditions_1.Ack_OS_Req_To_Driver;
  outC->_L451 = outC->Context_Merge_Conditions_1.Ack_SH_Req_To_Driver;
  outC->_L452 = outC->Context_Merge_Conditions_1.Ack_SR_Req_To_Driver;
  outC->_L453 = outC->Context_Merge_Conditions_1.Clean_BG_List_SH_Area;
  outC->_L454 = outC->Context_Merge_Conditions_1.End_Of_Mission_Procedure_Req;
  outC->_L455 = outC->Context_Merge_Conditions_1.MA_Req_To_RBC;
  outC->_L456 = outC->Context_Merge_Conditions_1.Request_For_SH_To_RBC;
  outC->_L457 = outC->Context_Merge_Conditions_1.Service_Brake_Command;
  outC->_L458 = outC->Context_Merge_Conditions_1.Condition15;
  outC->_L459 = outC->Context_Merge_Conditions_1.Condition31;
  outC->_L460 = outC->Context_Merge_Conditions_1.Condition46;
  outC->_L461 = outC->Context_Merge_Conditions_1.Condition50;
  outC->_L462 = outC->Context_Merge_Conditions_1.Condition5;
  outC->_L463 = outC->Context_Merge_Conditions_1.Condition6;
  outC->_L464 = outC->Context_Merge_Conditions_1.Condition70;
  outC->_L465 = outC->Context_Merge_Conditions_1.Condition8;
  outC->Condition8 = outC->_L465;
  outC->Condition70 = outC->_L464;
  outC->Condition6 = outC->_L463;
  outC->Condition5 = outC->_L462;
  outC->Condition50 = outC->_L461;
  outC->Condition46 = outC->_L460;
  outC->Condition31 = outC->_L459;
  outC->Condition15 = outC->_L458;
  outC->Clean_BG_List_SH_Area = outC->_L453;
  outC->Ack_SR_Req_To_Driver = outC->_L452;
  outC->Ack_SH_Req_To_Driver = outC->_L451;
  outC->Ack_OS_Req_To_Driver = outC->_L450;
  outC->Ack_LS_Req_To_Driver = outC->_L449;
  outC->SH_Refused_By_RBC_To_DMI = outC->_L448;
  outC->Condition51 = outC->_L92;
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(
    &outC->_L365,
    Reversing_Data);
  outC->_L165 = Driver_Ack_RV;
  outC->_L164 = Train_Standstill;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L364, Train_Position);
  outC->_L363 = Current_Mode;
  /* _L361=(Procedures::Procedure_Train_Reversing#1)/ */
  Procedure_Train_Reversing_Procedures(
    outC->_L165,
    outC->_L164,
    &outC->_L364,
    outC->_L363,
    &outC->_L365,
    &outC->Context_Procedure_Train_Reversing_1);
  outC->_L361 = outC->Context_Procedure_Train_Reversing_1.Condition_59;
  outC->_L362 = outC->Context_Procedure_Train_Reversing_1.Ack_RV_Req_To_Driver;
  outC->Ack_RV_Req_To_Driver = outC->_L362;
  outC->_L351 = Current_Level;
  outC->Condition_Trip = outC->_L277;
  outC->Ack_TR_Req_To_Driver = outC->_L275;
  outC->Condition68 = outC->_L287;
  outC->Condition63 = outC->_L286;
  outC->Condition62 = outC->_L285;
  outC->Condition7 = outC->_L280;
  outC->Condition60 = outC->_L238;
  outC->Condition58 = outC->_L239;
  outC->Condition10 = outC->_L236;
  outC->MA_Req_To_RBC = outC->_L455;
  outC->EB_Requested = outC->_L241;
  outC->Ack_UN_Req_To_Driver = outC->_L231;
  outC->Ack_SN_Req_To_Driver = outC->_L230;
  outC->_L155 = Current_Level;
  outC->_L130 = Current_Level;
  outC->End_Of_Mission_Procedure_Req = outC->_L454;
  outC->Service_Brake_Command = outC->_L457;
  outC->Request_For_SH_To_RBC = outC->_L456;
  outC->Condition59 = outC->_L361;
  /* _L141=(Conditions::ToSystemNational#1)/ */
  ToSystemNational_Conditions(outC->_L155, &outC->Context_ToSystemNational_1);
  outC->_L141 = outC->Context_ToSystemNational_1.Condition56;
  outC->Condition56 = outC->_L141;
  /* _L124=(Conditions::ToUnfitted#1)/ */
  ToUnfitted_Conditions(outC->_L130, &outC->Context_ToUnfitted_1);
  outC->_L124 = outC->Context_ToUnfitted_1.Condition21;
  outC->Condition21 = outC->_L124;
  outC->_L4 = Failure_Occured;
  /* _L3=(Conditions::ToSystemFailure#1)/ */
  ToSystemFailure_Conditions(outC->_L4, &outC->Context_ToSystemFailure_1);
  outC->_L3 = outC->Context_ToSystemFailure_1.Condition13;
  outC->Condition13 = outC->_L3;
  outC->_L2 = ETCS_Isolated;
  /* _L1=(Conditions::ToIsolate#1)/ */
  ToIsolate_Conditions(outC->_L2, &outC->Context_ToIsolate_1);
  outC->_L1 = outC->Context_ToIsolate_1.Condition1;
  outC->Condition1 = outC->_L1;
  outC->_L10 = Train_Standstill;
  outC->_L11 = Train_Req_SL;
  /* _L7=(Conditions::ToSleeping#1)/ */
  ToSleeping_Conditions(
    outC->_L485,
    outC->_L10,
    outC->_L11,
    &outC->Context_ToSleeping_1);
  outC->_L7 = outC->Context_ToSleeping_1.Condition14;
  outC->Condition14 = outC->_L7;
  outC->Condition73 = outC->_L106;
  outC->Condition40 = outC->_L105;
  outC->Condition34 = outC->_L104;
  outC->_L119 = Driver_Req_Override;
  outC->_L120 = Train_Speed_Under_Override_Limit;
  outC->_L121 = Override_Function_Active;
  outC->_L122 = Emergency_Stop_Message_Received;
  /* _L111=(Conditions::ToStaffResponsible#1)/ */
  ToStaffResponsible_Conditions(
    outC->_L351,
    outC->_L119,
    outC->_L120,
    outC->_L121,
    outC->_L122,
    &outC->Context_ToStaffResponsible_1);
  outC->_L111 = outC->Context_ToStaffResponsible_1.Condition44;
  outC->_L112 = outC->Context_ToStaffResponsible_1.Condition45;
  outC->_L113 = outC->Context_ToStaffResponsible_1.Condition37;
  outC->Condition37 = outC->_L113;
  outC->Condition45 = outC->_L112;
  outC->Condition44 = outC->_L111;
  outC->Condition72 = outC->_L102;
  outC->Condition71 = outC->_L101;
  outC->Condition74 = outC->_L99;
  outC->Condition32 = outC->_L98;
  outC->Condition25 = outC->_L96;
  outC->Condition61 = outC->_L93;
  outC->Condition23 = outC->_L90;
  outC->_L110 = Train_Permitted_PS;
  outC->_L109 = Continue_Shunting_Function_Active;
  /* _L107=(Conditions::ToPassiveShunting#1)/ */
  ToPassiveShunting_Conditions(
    outC->_L110,
    outC->_L109,
    outC->_L488,
    &outC->Context_ToPassiveShunting_1);
  outC->_L107 = outC->Context_ToPassiveShunting_1.Condition26;
  outC->Condition26 = outC->_L107;
  outC->Condition47 = outC->_L87;
  outC->Condition30 = outC->_L86;
  outC->Condition28 = outC->_L85;
  outC->Condition27 = outC->_L84;
  outC->Condition22 = outC->_L83;
  outC->Condition19 = outC->_L82;
  outC->Condition4 = outC->_L81;
  outC->Condition3 = outC->_L80;
  outC->Condition2 = outC->_L79;
  outC->_L6 = OnBoard_Powered;
  /* _L5=(Conditions::ToNoPower#1)/ */
  ToNoPower_Conditions(outC->_L6, &outC->Context_ToNoPower_1);
  outC->_L5 = outC->Context_ToNoPower_1.Condition29;
  outC->Condition29 = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void ComputeModesConditions_init(outC_ComputeModesConditions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L497 = kcg_true;
  outC->_L496 = kcg_true;
  outC->_L495 = kcg_true;
  outC->_L494 = kcg_true;
  outC->_L490 = kcg_true;
  outC->_L489 = kcg_true;
  outC->_L488 = kcg_true;
  outC->_L487 = kcg_true;
  outC->_L486 = kcg_true;
  outC->_L485 = kcg_true;
  outC->_L484 = kcg_true;
  outC->_L448 = kcg_true;
  outC->_L449 = kcg_true;
  outC->_L450 = kcg_true;
  outC->_L451 = kcg_true;
  outC->_L452 = kcg_true;
  outC->_L453 = kcg_true;
  outC->_L454 = kcg_true;
  outC->_L455 = kcg_true;
  outC->_L456 = kcg_true;
  outC->_L457 = kcg_true;
  outC->_L458 = kcg_true;
  outC->_L459 = kcg_true;
  outC->_L460 = kcg_true;
  outC->_L461 = kcg_true;
  outC->_L462 = kcg_true;
  outC->_L463 = kcg_true;
  outC->_L464 = kcg_true;
  outC->_L465 = kcg_true;
  outC->_L447 = kcg_true;
  outC->_L446 = kcg_true;
  outC->_L444 = kcg_true;
  outC->_L443 = kcg_true;
  outC->_L442 = kcg_true;
  outC->_L441 = kcg_true;
  outC->_L440 = kcg_true;
  outC->_L439 = kcg_true;
  outC->_L438 = kcg_true;
  outC->_L437 = kcg_true;
  outC->_L436 = kcg_true;
  outC->_L435 = kcg_true;
  outC->_L434 = kcg_true;
  outC->_L433 = kcg_true;
  outC->_L432 = kcg_true;
  outC->_L431 = kcg_true;
  outC->_L430 = kcg_true;
  outC->_L429 = kcg_true;
  outC->_L428 = kcg_true;
  outC->_L427 = kcg_true;
  outC->_L426 = kcg_true;
  outC->_L418 = kcg_true;
  outC->_L417 = kcg_true;
  outC->_L416 = kcg_true;
  outC->_L415 = kcg_true;
  outC->_L414 = kcg_true;
  outC->_L413 = kcg_true;
  outC->_L412 = kcg_true;
  outC->_L411 = kcg_true;
  outC->_L408 = kcg_true;
  outC->_L407 = kcg_true;
  outC->_L406 = kcg_true;
  outC->_L405 = kcg_true;
  outC->_L404 = kcg_true;
  outC->_L403 = kcg_true;
  outC->_L402 = kcg_true;
  outC->_L401 = kcg_true;
  outC->_L400 = kcg_true;
  outC->_L395 = kcg_true;
  outC->_L394 = kcg_true;
  outC->_L393 = kcg_true;
  outC->_L392 = kcg_true;
  outC->_L391 = kcg_true;
  outC->_L390 = kcg_true;
  outC->_L388 = kcg_true;
  outC->_L387 = kcg_true;
  outC->_L386 = kcg_true;
  outC->_L381 = kcg_true;
  outC->_L380 = kcg_true;
  outC->_L372 = kcg_true;
  outC->_L367 = kcg_true;
  outC->_L366 = NP_Level_And_Mode_Types_Pkg;
  outC->_L176 = M_LEVEL_Level_0;
  outC->_L365.Available = kcg_true;
  outC->_L365.Dist_Start = kcg_lit_int32(0);
  outC->_L365.Length = kcg_lit_int32(0);
  outC->_L365.Dist_Run = kcg_lit_int32(0);
  outC->_L365.Speed = kcg_lit_int32(0);
  outC->_L364.valid = kcg_true;
  outC->_L364.timestamp = kcg_lit_int32(0);
  outC->_L364.trainPositionIsUnknown = kcg_true;
  outC->_L364.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L364.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L364.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L364.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L364.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L364.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L364.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L364.LRBG.valid = kcg_true;
  outC->_L364.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L364.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L364.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L364.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L364.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L364.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L364.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L364.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L364.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L364.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L364.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L364.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L364.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L364.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L364.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L364.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L364.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L364.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L364.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L364.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L364.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L364.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L364.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L364.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L364.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L364.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L364.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L364.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L364.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L364.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L364.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L364.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L364.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L364.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L364.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L364.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L364.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L364.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L364.LRBG.missed = kcg_true;
  outC->_L364.prvLRBG.valid = kcg_true;
  outC->_L364.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L364.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L364.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L364.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L364.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L364.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L364.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L364.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L364.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L364.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L364.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L364.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L364.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L364.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L364.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L364.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L364.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L364.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L364.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L364.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L364.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L364.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L364.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L364.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L364.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L364.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L364.prvLRBG.missed = kcg_true;
  outC->_L364.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L364.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L364.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L364.linkingIsUsedOnboard = kcg_true;
  outC->_L364.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L364.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L364.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L363 = NP_Level_And_Mode_Types_Pkg;
  outC->_L361 = kcg_true;
  outC->_L362 = kcg_true;
  outC->_L360 = kcg_true;
  outC->_L359 = kcg_true;
  outC->_L358 = kcg_true;
  outC->_L357 = kcg_true;
  outC->_L356 = kcg_true;
  outC->_L355 = kcg_true;
  outC->_L354 = kcg_true;
  outC->_L353 = kcg_true;
  outC->_L352 = kcg_true;
  outC->_L351 = M_LEVEL_Level_0;
  outC->_L350 = kcg_true;
  outC->_L349 = kcg_true;
  outC->_L348 = kcg_true;
  outC->_L347 = kcg_true;
  outC->_L346 = kcg_true;
  outC->_L345 = kcg_true;
  outC->_L344 = kcg_true;
  outC->_L343.Distance = kcg_lit_int32(0);
  outC->_L343.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L343.Speed = kcg_lit_int32(0);
  outC->_L343.Length = kcg_lit_int32(0);
  outC->_L343.Length_Ack = kcg_lit_int32(0);
  outC->_L342 = kcg_true;
  outC->_L341 = kcg_true;
  outC->_L340 = kcg_true;
  outC->_L339 = kcg_true;
  outC->_L338 = kcg_true;
  outC->_L337 = kcg_true;
  outC->_L336 = kcg_true;
  outC->_L335 = NP_Level_And_Mode_Types_Pkg;
  outC->_L334 = M_LEVEL_Level_0;
  outC->_L333 = kcg_true;
  outC->_L331.valid = kcg_true;
  outC->_L331.timestamp = kcg_lit_int32(0);
  outC->_L331.trainPositionIsUnknown = kcg_true;
  outC->_L331.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L331.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L331.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L331.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L331.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L331.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L331.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L331.LRBG.valid = kcg_true;
  outC->_L331.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L331.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L331.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L331.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L331.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L331.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L331.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L331.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L331.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L331.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L331.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L331.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L331.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L331.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L331.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L331.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L331.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L331.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L331.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L331.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L331.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L331.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L331.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L331.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L331.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L331.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L331.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L331.LRBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L331.LRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L331.LRBG.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L331.LRBG.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L331.LRBG.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L331.LRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L331.LRBG.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L331.LRBG.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L331.LRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L331.LRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L331.LRBG.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L331.LRBG.missed = kcg_true;
  outC->_L331.prvLRBG.valid = kcg_true;
  outC->_L331.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L331.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L331.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L331.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L331.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L331.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L331.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L331.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L331.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L331.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L331.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L331.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L331.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L331.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L331.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L331.prvLRBG.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L331.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L331.prvLRBG.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L331.prvLRBG.infoFromPassing.linkedBGs[idx3].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L331.prvLRBG.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L331.prvLRBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L331.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L331.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L331.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L331.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L331.prvLRBG.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->_L331.prvLRBG.missed = kcg_true;
  outC->_L331.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L331.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L331.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L331.linkingIsUsedOnboard = kcg_true;
  outC->_L331.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L331.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L331.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L330.valid = kcg_true;
  outC->_L330.timestamp = kcg_lit_int32(0);
  outC->_L330.trainPositionIsUnknown = kcg_true;
  outC->_L330.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L330.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L330.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L330.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L330.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L330.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L330.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L330.LRBG.valid = kcg_true;
  outC->_L330.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L330.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L330.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L330.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L330.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L330.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L330.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L330.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L330.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L330.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L330.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L330.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L330.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L330.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L330.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L330.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L330.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L330.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L330.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L330.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L330.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L330.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L330.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L330.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L330.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L330.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L330.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L330.LRBG.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L330.LRBG.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
    outC->_L330.LRBG.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L330.LRBG.infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L330.LRBG.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
    outC->_L330.LRBG.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L330.LRBG.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
    outC->_L330.LRBG.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
    outC->_L330.LRBG.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L330.LRBG.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L330.LRBG.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
  }
  outC->_L330.LRBG.missed = kcg_true;
  outC->_L330.prvLRBG.valid = kcg_true;
  outC->_L330.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L330.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L330.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L330.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L330.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L330.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L330.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L330.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L330.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L330.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L330.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L330.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L330.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L330.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L330.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L330.prvLRBG.infoFromPassing.linkedBGs[idx5].valid = kcg_true;
    outC->_L330.prvLRBG.infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int32(0);
    outC->_L330.prvLRBG.infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
    outC->_L330.prvLRBG.infoFromPassing.linkedBGs[idx5].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L330.prvLRBG.infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int32(0);
    outC->_L330.prvLRBG.infoFromPassing.linkedBGs[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L330.prvLRBG.infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int32(0);
    outC->_L330.prvLRBG.infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int32(0);
    outC->_L330.prvLRBG.infoFromPassing.linkedBGs[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L330.prvLRBG.infoFromPassing.linkedBGs[idx5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L330.prvLRBG.infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int32(0);
  }
  outC->_L330.prvLRBG.missed = kcg_true;
  outC->_L330.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L330.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L330.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L330.linkingIsUsedOnboard = kcg_true;
  outC->_L330.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L330.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L330.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L329.valid = kcg_true;
  outC->_L329.timestamp = kcg_lit_int32(0);
  outC->_L329.trainPositionIsUnknown = kcg_true;
  outC->_L329.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L329.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L329.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L329.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L329.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L329.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L329.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L329.LRBG.valid = kcg_true;
  outC->_L329.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L329.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L329.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L329.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L329.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L329.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L329.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L329.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L329.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L329.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L329.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L329.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L329.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L329.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L329.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L329.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L329.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L329.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L329.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L329.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L329.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L329.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L329.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L329.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L329.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L329.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L329.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L329.LRBG.infoFromPassing.linkedBGs[idx6].valid = kcg_true;
    outC->_L329.LRBG.infoFromPassing.linkedBGs[idx6].nid_LRBG = kcg_lit_int32(0);
    outC->_L329.LRBG.infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
    outC->_L329.LRBG.infoFromPassing.linkedBGs[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L329.LRBG.infoFromPassing.linkedBGs[idx6].d_link = kcg_lit_int32(0);
    outC->_L329.LRBG.infoFromPassing.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L329.LRBG.infoFromPassing.linkedBGs[idx6].nid_c = kcg_lit_int32(0);
    outC->_L329.LRBG.infoFromPassing.linkedBGs[idx6].nid_bg = kcg_lit_int32(0);
    outC->_L329.LRBG.infoFromPassing.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L329.LRBG.infoFromPassing.linkedBGs[idx6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L329.LRBG.infoFromPassing.linkedBGs[idx6].q_locacc = kcg_lit_int32(0);
  }
  outC->_L329.LRBG.missed = kcg_true;
  outC->_L329.prvLRBG.valid = kcg_true;
  outC->_L329.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L329.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L329.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L329.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L329.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L329.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L329.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L329.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L329.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L329.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L329.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L329.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L329.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L329.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L329.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L329.prvLRBG.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->_L329.prvLRBG.infoFromPassing.linkedBGs[idx7].nid_LRBG = kcg_lit_int32(0);
    outC->_L329.prvLRBG.infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
    outC->_L329.prvLRBG.infoFromPassing.linkedBGs[idx7].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L329.prvLRBG.infoFromPassing.linkedBGs[idx7].d_link = kcg_lit_int32(0);
    outC->_L329.prvLRBG.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L329.prvLRBG.infoFromPassing.linkedBGs[idx7].nid_c = kcg_lit_int32(0);
    outC->_L329.prvLRBG.infoFromPassing.linkedBGs[idx7].nid_bg = kcg_lit_int32(0);
    outC->_L329.prvLRBG.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L329.prvLRBG.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L329.prvLRBG.infoFromPassing.linkedBGs[idx7].q_locacc = kcg_lit_int32(0);
  }
  outC->_L329.prvLRBG.missed = kcg_true;
  outC->_L329.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L329.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L329.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L329.linkingIsUsedOnboard = kcg_true;
  outC->_L329.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L329.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L329.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L328 = kcg_true;
  outC->_L327 = kcg_true;
  outC->_L326 = kcg_true;
  outC->_L324 = kcg_true;
  outC->_L319 = kcg_true;
  outC->_L318 = kcg_true;
  outC->_L317 = kcg_true;
  outC->_L315 = kcg_true;
  outC->_L312 = kcg_true;
  outC->_L309 = kcg_true;
  outC->_L306 = kcg_true;
  outC->_L305 = kcg_true;
  outC->_L304 = kcg_true;
  outC->_L303 = kcg_true;
  outC->_L302 = kcg_true;
  outC->_L301 = kcg_true;
  outC->_L300 = kcg_true;
  outC->_L299 = kcg_true;
  outC->_L298 = kcg_true;
  outC->_L297 = kcg_true;
  outC->_L296 = kcg_true;
  outC->_L295 = NP_Level_And_Mode_Types_Pkg;
  outC->_L294 = kcg_true;
  outC->_L275 = kcg_true;
  outC->_L277 = kcg_true;
  outC->_L280 = kcg_true;
  outC->_L285 = kcg_true;
  outC->_L286 = kcg_true;
  outC->_L287 = kcg_true;
  outC->_L270 = kcg_true;
  outC->_L269 = kcg_true;
  outC->_L268 = kcg_true;
  outC->_L267 = kcg_true;
  outC->_L266 = kcg_true;
  outC->_L265 = kcg_true;
  outC->_L264 = kcg_true;
  outC->_L263 = kcg_true;
  outC->_L262.Distance = kcg_lit_int32(0);
  outC->_L262.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L262.Speed = kcg_lit_int32(0);
  outC->_L262.Length = kcg_lit_int32(0);
  outC->_L262.Length_Ack = kcg_lit_int32(0);
  outC->_L261 = kcg_true;
  outC->_L260 = kcg_true;
  outC->_L258 = kcg_true;
  outC->_L257 = kcg_true;
  outC->_L256 = kcg_true;
  outC->_L255 = kcg_true;
  outC->_L254 = kcg_true;
  outC->_L253 = kcg_true;
  outC->_L252 = kcg_true;
  outC->_L251 = kcg_true;
  outC->_L250 = NP_Level_And_Mode_Types_Pkg;
  outC->_L249 = M_LEVEL_Level_0;
  outC->_L229 = kcg_true;
  outC->_L230 = kcg_true;
  outC->_L231 = kcg_true;
  outC->_L232 = kcg_true;
  outC->_L233 = kcg_true;
  outC->_L234 = kcg_true;
  outC->_L235 = kcg_true;
  outC->_L236 = kcg_true;
  outC->_L237 = kcg_true;
  outC->_L238 = kcg_true;
  outC->_L239 = kcg_true;
  outC->_L240 = kcg_true;
  outC->_L241 = kcg_true;
  outC->_L242 = kcg_true;
  outC->_L244 = kcg_true;
  outC->_L245 = kcg_true;
  outC->_L246 = kcg_true;
  outC->_L247 = kcg_true;
  outC->_L248 = kcg_true;
  outC->_L155 = M_LEVEL_Level_0;
  outC->_L130 = M_LEVEL_Level_0;
  outC->_L54 = M_LEVEL_Level_0;
  outC->_L43 = M_LEVEL_Level_0;
  outC->_L228 = kcg_lit_int32(0);
  outC->_L226 = NP_Level_And_Mode_Types_Pkg;
  outC->_L225 = kcg_lit_int32(0);
  outC->_L223 = NP_Level_And_Mode_Types_Pkg;
  outC->_L221 = kcg_lit_int32(0);
  outC->_L220 = kcg_true;
  outC->_L215 = kcg_true;
  outC->_L214 = kcg_true;
  outC->_L213 = kcg_true;
  outC->_L212 = kcg_true;
  outC->_L208 = kcg_true;
  outC->_L207 = kcg_true;
  outC->_L206 = NP_Level_And_Mode_Types_Pkg;
  outC->_L203 = kcg_true;
  outC->_L202 = kcg_true;
  outC->_L201 = kcg_true;
  outC->_L200 = kcg_true;
  outC->_L195 = kcg_true;
  outC->_L193 = kcg_true;
  outC->_L192 = kcg_true;
  outC->_L191 = kcg_true;
  outC->_L190 = kcg_true;
  outC->_L187 = kcg_true;
  outC->_L186 = kcg_true;
  outC->_L184 = kcg_true;
  outC->_L183 = kcg_true;
  outC->_L182 = kcg_true;
  outC->_L181 = kcg_true;
  outC->_L180 = kcg_true;
  outC->_L179 = kcg_true;
  outC->_L178 = kcg_true;
  outC->_L175 = kcg_true;
  outC->_L174 = kcg_true;
  outC->_L166 = kcg_true;
  outC->_L165 = kcg_true;
  outC->_L164 = kcg_true;
  outC->_L147 = kcg_true;
  outC->_L141 = kcg_true;
  outC->_L129 = kcg_true;
  outC->_L128 = kcg_true;
  outC->_L127 = kcg_true;
  outC->_L124 = kcg_true;
  outC->_L123 = kcg_true;
  outC->_L122 = kcg_true;
  outC->_L121 = kcg_true;
  outC->_L120 = kcg_true;
  outC->_L119 = kcg_true;
  outC->_L111 = kcg_true;
  outC->_L112 = kcg_true;
  outC->_L113 = kcg_true;
  outC->_L110 = kcg_true;
  outC->_L109 = kcg_true;
  outC->_L107 = kcg_true;
  outC->_L106 = kcg_true;
  outC->_L105 = kcg_true;
  outC->_L104 = kcg_true;
  outC->_L103 = kcg_true;
  outC->_L102 = kcg_true;
  outC->_L101 = kcg_true;
  outC->_L100 = kcg_true;
  outC->_L99 = kcg_true;
  outC->_L98 = kcg_true;
  outC->_L97 = kcg_true;
  outC->_L96 = kcg_true;
  outC->_L93 = kcg_true;
  outC->_L92 = kcg_true;
  outC->_L91 = kcg_true;
  outC->_L90 = kcg_true;
  outC->_L89 = kcg_true;
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
  outC->_L77 = kcg_true;
  outC->_L73.Distance = kcg_lit_int32(0);
  outC->_L73.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L73.Speed = kcg_lit_int32(0);
  outC->_L73.Length = kcg_lit_int32(0);
  outC->_L73.Length_Ack = kcg_lit_int32(0);
  outC->_L68 = kcg_true;
  outC->_L64.Distance = kcg_lit_int32(0);
  outC->_L64.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L64.Speed = kcg_lit_int32(0);
  outC->_L64.Length = kcg_lit_int32(0);
  outC->_L64.Length_Ack = kcg_lit_int32(0);
  outC->_L60 = kcg_true;
  outC->_L59 = kcg_true;
  outC->_L57.Distance = kcg_lit_int32(0);
  outC->_L57.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L57.Speed = kcg_lit_int32(0);
  outC->_L57.Length = kcg_lit_int32(0);
  outC->_L57.Length_Ack = kcg_lit_int32(0);
  outC->_L50.Distance = kcg_lit_int32(0);
  outC->_L50.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L50.Speed = kcg_lit_int32(0);
  outC->_L50.Length = kcg_lit_int32(0);
  outC->_L50.Length_Ack = kcg_lit_int32(0);
  outC->_L46 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L41 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L40 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_true;
  outC->Loc_Cond_31_TR = kcg_true;
  outC->Loc_Cond_31_FS = kcg_true;
  outC->Loc_MA_Req_To_RBC_TR = kcg_true;
  outC->Loc_MA_Req_To_RBC_SoM = kcg_true;
  outC->Loc_Ack_LS_Req_To_Driver_LS = kcg_true;
  outC->Loc_Ack_OS_Req_To_Driver_OS = kcg_true;
  outC->Loc_Ack_SH_Req_To_Driver_SH = kcg_true;
  outC->Loc_Ack_LS_Req_To_Driver_SoM = kcg_true;
  outC->Loc_Ack_OS_Req_To_Driver_SoM = kcg_true;
  outC->Loc_Ack_SH_Req_To_Driver_SoM = kcg_true;
  outC->Loc_Ack_SR_Req_To_Driver_SoM = kcg_true;
  outC->Loc_Ack_SR_Req_To_Driver_TR = kcg_true;
  outC->Loc_Ack_SH_Req_To_Driver_TR = kcg_true;
  outC->Loc_Ack_OS_Req_To_Driver_TR = kcg_true;
  outC->Loc_Ack_LS_Req_To_Driver_TR = kcg_true;
  outC->Loc_Cond_8_SoM = kcg_true;
  outC->Loc_Cond_8_TR = kcg_true;
  outC->Loc_Cond_15_SoM = kcg_true;
  outC->Loc_Cond_46_SoM = kcg_true;
  outC->Loc_Cond_70_SoM = kcg_true;
  outC->Loc_Cond_15_TR = kcg_true;
  outC->Loc_Cond_70_TR = kcg_true;
  outC->Loc_Cond_46_NL = kcg_true;
  outC->Loc_Cond_70_LS = kcg_true;
  outC->Loc_Cond_15_OS = kcg_true;
  outC->Loc_Cond_50_SoM = kcg_true;
  outC->Loc_Cond_5_SoM = kcg_true;
  outC->Loc_Cond_6_SoM = kcg_true;
  outC->Loc_Cond_50_TR = kcg_true;
  outC->Loc_Cond_5_TR = kcg_true;
  outC->Loc_Cond_6_TR = kcg_true;
  outC->Loc_Cond_50_SH = kcg_true;
  outC->Loc_Cond_6_SH = kcg_true;
  outC->Loc_Cond_5_SH = kcg_true;
  outC->Loc_Request_For_SH_To_RBC_SoM = kcg_true;
  outC->Loc_SH_Refused_By_RBC_To_DMI_SoM = kcg_true;
  outC->Loc_SH_Refused_By_RBC_To_DMI_TR = kcg_true;
  outC->Loc_Request_For_SH_To_RBC_TR = kcg_true;
  outC->Loc_SH_Refused_By_RBC_To_DMI_SH = kcg_true;
  outC->Loc_Request_For_SH_To_RBC_SH = kcg_true;
  outC->Loc_End_Of_Mission_Procedure_Req_SoM = kcg_true;
  outC->Loc_Clean_BG_List_SH_Area_TR = kcg_true;
  outC->Loc_End_Of_Mission_Procedure_Req_TR = kcg_true;
  outC->Loc_End_Of_Mission_Procedure_Req_SB = kcg_true;
  outC->Loc_End_Of_Mission_Procedure_Req_SH = kcg_true;
  outC->Loc_Clean_BG_List_Of_SoM = kcg_true;
  outC->Loc_Service_Brake_Command_LS = kcg_true;
  outC->Loc_Service_Brake_Command_OS = kcg_true;
  outC->Loc_Clean_BG_List_SH_Area_SH = kcg_true;
  outC->Loc_Service_Brake_Command_SH = kcg_true;
  outC->Condition_to_Trip = kcg_true;
  outC->SH_Refused_By_RBC_To_DMI = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->MA_Req_To_RBC = kcg_true;
  outC->EB_Requested = kcg_true;
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->Ack_UN_Req_To_Driver = kcg_true;
  outC->Ack_TR_Req_To_Driver = kcg_true;
  outC->Ack_SR_Req_To_Driver = kcg_true;
  outC->Ack_SN_Req_To_Driver = kcg_true;
  outC->Ack_SH_Req_To_Driver = kcg_true;
  outC->Ack_RV_Req_To_Driver = kcg_true;
  outC->Ack_OS_Req_To_Driver = kcg_true;
  outC->Ack_LS_Req_To_Driver = kcg_true;
  outC->Condition_Trip = kcg_true;
  outC->Condition74 = kcg_true;
  outC->Condition73 = kcg_true;
  outC->Condition72 = kcg_true;
  outC->Condition71 = kcg_true;
  outC->Condition70 = kcg_true;
  outC->Condition68 = kcg_true;
  outC->Condition63 = kcg_true;
  outC->Condition62 = kcg_true;
  outC->Condition61 = kcg_true;
  outC->Condition60 = kcg_true;
  outC->Condition59 = kcg_true;
  outC->Condition58 = kcg_true;
  outC->Condition56 = kcg_true;
  outC->Condition51 = kcg_true;
  outC->Condition50 = kcg_true;
  outC->Condition47 = kcg_true;
  outC->Condition46 = kcg_true;
  outC->Condition45 = kcg_true;
  outC->Condition44 = kcg_true;
  outC->Condition40 = kcg_true;
  outC->Condition37 = kcg_true;
  outC->Condition34 = kcg_true;
  outC->Condition32 = kcg_true;
  outC->Condition31 = kcg_true;
  outC->Condition30 = kcg_true;
  outC->Condition29 = kcg_true;
  outC->Condition28 = kcg_true;
  outC->Condition27 = kcg_true;
  outC->Condition26 = kcg_true;
  outC->Condition25 = kcg_true;
  outC->Condition23 = kcg_true;
  outC->Condition22 = kcg_true;
  outC->Condition21 = kcg_true;
  outC->Condition19 = kcg_true;
  outC->Condition15 = kcg_true;
  outC->Condition14 = kcg_true;
  outC->Condition13 = kcg_true;
  outC->Condition10 = kcg_true;
  outC->Condition8 = kcg_true;
  outC->Condition7 = kcg_true;
  outC->Condition6 = kcg_true;
  outC->Condition5 = kcg_true;
  outC->Condition4 = kcg_true;
  outC->Condition3 = kcg_true;
  outC->Condition2 = kcg_true;
  outC->Condition1 = kcg_true;
  /* _L5=(Conditions::ToNoPower#1)/ */
  ToNoPower_init_Conditions(&outC->Context_ToNoPower_1);
  /* _L107=(Conditions::ToPassiveShunting#1)/ */
  ToPassiveShunting_init_Conditions(&outC->Context_ToPassiveShunting_1);
  /* _L111=(Conditions::ToStaffResponsible#1)/ */
  ToStaffResponsible_init_Conditions(&outC->Context_ToStaffResponsible_1);
  /* _L7=(Conditions::ToSleeping#1)/ */
  ToSleeping_init_Conditions(&outC->Context_ToSleeping_1);
  /* _L1=(Conditions::ToIsolate#1)/ */
  ToIsolate_init_Conditions(&outC->Context_ToIsolate_1);
  /* _L3=(Conditions::ToSystemFailure#1)/ */
  ToSystemFailure_init_Conditions(&outC->Context_ToSystemFailure_1);
  /* _L124=(Conditions::ToUnfitted#1)/ */
  ToUnfitted_init_Conditions(&outC->Context_ToUnfitted_1);
  /* _L141=(Conditions::ToSystemNational#1)/ */
  ToSystemNational_init_Conditions(&outC->Context_ToSystemNational_1);
  /* _L361=(Procedures::Procedure_Train_Reversing#1)/ */
  Procedure_Train_Reversing_init_Procedures(
    &outC->Context_Procedure_Train_Reversing_1);
  /* _L448=(Merge_Conditions#1)/ */
  Merge_Conditions_init(&outC->Context_Merge_Conditions_1);
  /* _L123=(Conditions::ToNonLeading#1)/ */
  ToNonLeading_init_Conditions(&outC->Context_ToNonLeading_1);
  /* _L96=(Conditions::ToFullSupervision#1)/ */
  ToFullSupervision_init_Conditions(&outC->Context_ToFullSupervision_1);
  /* _L79=(Conditions::ToStandBy#1)/ */
  ToStandBy_init_Conditions(&outC->Context_ToStandBy_1);
  /* _L103=(Procedures::Procedure_OnSight#1)/ */
  Procedure_OnSight_init_Procedures(&outC->Context_Procedure_OnSight_1);
  /* _L100=(Procedures::Procedure_LimitedSupervision#1)/ */
  Procedure_LimitedSupervision_init_Procedures(
    &outC->Context_Procedure_LimitedSupervision_1);
  /* _L328=(Procedures::Procedure_Train_Trip#1)/ */
  Procedure_Train_Trip_init_Procedures(&outC->Context_Procedure_Train_Trip_1);
  /* _L147=(Conditions::ToTrip#1)/ */
  ToTrip_init_Conditions(&outC->Context_ToTrip_1);
  /* _L268=(Procedures::Procedure_StartOfMission#1)/ */
  Procedure_StartOfMission_init_Procedures(
    &outC->Context_Procedure_StartOfMission_1);
  /* _L88=(Conditions::ToShunting#1)/ */
  ToShunting_init_Conditions(&outC->Context_ToShunting_1);
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->On_Going_Mission = kcg_false;
  outC->mem_Failure_Occured = kcg_false;
  outC->mem_Train_Overpass_EOA_Antenna = kcg_false;
  outC->mem_Override_Function_Active = kcg_false;
  outC->mem_Current_Level = M_LEVEL_Level_0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ComputeModesConditions_reset(outC_ComputeModesConditions *outC)
{
  /* _L5=(Conditions::ToNoPower#1)/ */
  ToNoPower_reset_Conditions(&outC->Context_ToNoPower_1);
  /* _L107=(Conditions::ToPassiveShunting#1)/ */
  ToPassiveShunting_reset_Conditions(&outC->Context_ToPassiveShunting_1);
  /* _L111=(Conditions::ToStaffResponsible#1)/ */
  ToStaffResponsible_reset_Conditions(&outC->Context_ToStaffResponsible_1);
  /* _L7=(Conditions::ToSleeping#1)/ */
  ToSleeping_reset_Conditions(&outC->Context_ToSleeping_1);
  /* _L1=(Conditions::ToIsolate#1)/ */
  ToIsolate_reset_Conditions(&outC->Context_ToIsolate_1);
  /* _L3=(Conditions::ToSystemFailure#1)/ */
  ToSystemFailure_reset_Conditions(&outC->Context_ToSystemFailure_1);
  /* _L124=(Conditions::ToUnfitted#1)/ */
  ToUnfitted_reset_Conditions(&outC->Context_ToUnfitted_1);
  /* _L141=(Conditions::ToSystemNational#1)/ */
  ToSystemNational_reset_Conditions(&outC->Context_ToSystemNational_1);
  /* _L361=(Procedures::Procedure_Train_Reversing#1)/ */
  Procedure_Train_Reversing_reset_Procedures(
    &outC->Context_Procedure_Train_Reversing_1);
  /* _L448=(Merge_Conditions#1)/ */
  Merge_Conditions_reset(&outC->Context_Merge_Conditions_1);
  /* _L123=(Conditions::ToNonLeading#1)/ */
  ToNonLeading_reset_Conditions(&outC->Context_ToNonLeading_1);
  /* _L96=(Conditions::ToFullSupervision#1)/ */
  ToFullSupervision_reset_Conditions(&outC->Context_ToFullSupervision_1);
  /* _L79=(Conditions::ToStandBy#1)/ */
  ToStandBy_reset_Conditions(&outC->Context_ToStandBy_1);
  /* _L103=(Procedures::Procedure_OnSight#1)/ */
  Procedure_OnSight_reset_Procedures(&outC->Context_Procedure_OnSight_1);
  /* _L100=(Procedures::Procedure_LimitedSupervision#1)/ */
  Procedure_LimitedSupervision_reset_Procedures(
    &outC->Context_Procedure_LimitedSupervision_1);
  /* _L328=(Procedures::Procedure_Train_Trip#1)/ */
  Procedure_Train_Trip_reset_Procedures(&outC->Context_Procedure_Train_Trip_1);
  /* _L147=(Conditions::ToTrip#1)/ */
  ToTrip_reset_Conditions(&outC->Context_ToTrip_1);
  /* _L268=(Procedures::Procedure_StartOfMission#1)/ */
  Procedure_StartOfMission_reset_Procedures(
    &outC->Context_Procedure_StartOfMission_1);
  /* _L88=(Conditions::ToShunting#1)/ */
  ToShunting_reset_Conditions(&outC->Context_ToShunting_1);
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->On_Going_Mission = kcg_false;
  outC->mem_Failure_Occured = kcg_false;
  outC->mem_Train_Overpass_EOA_Antenna = kcg_false;
  outC->mem_Override_Function_Active = kcg_false;
  outC->mem_Current_Level = M_LEVEL_Level_0;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ComputeModesConditions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

