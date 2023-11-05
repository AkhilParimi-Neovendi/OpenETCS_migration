/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToTrip_Conditions.h"

/* Conditions::ToTrip/ */
void ToTrip_Conditions(
  /* BG_In_Expected_List_In_SH/ */
  kcg_bool BG_In_Expected_List_In_SH,
  /* BG_In_Expected_List_In_SR/ */
  kcg_bool BG_In_Expected_List_In_SR,
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Driver_Select_SH/ */
  kcg_bool Driver_Select_SH,
  /* Emergency_Stop_Message_Received/ */
  kcg_bool Emergency_Stop_Message_Received,
  /* Error_BG_System_Version/ */
  kcg_bool Error_BG_System_Version,
  /* Estimated_Front_End_Overpass_SR_Distance/ */
  kcg_bool Estimated_Front_End_Overpass_SR_Distance,
  /* Estimated_Front_End_Rear_Location_SSP_Or_Gradient/ */
  kcg_bool Estimated_Front_End_Rear_Location_SSP_Or_Gradient,
  /* Interface_To_National_System/ */
  kcg_bool Interface_To_National_System,
  /* Linked_BG_Pased_In_Wrong_Direction/ */
  kcg_bool Linked_BG_Pased_In_Wrong_Direction,
  /* Linking_Reaction_To_Trip/ */
  kcg_bool Linking_Reaction_To_Trip,
  /* List_BG_Related_To_SR_Empty/ */
  kcg_bool List_BG_Related_To_SR_Empty,
  /* MA_Available/ */
  kcg_bool MA_Available,
  /* National_Trip_Order/ */
  kcg_bool National_Trip_Order,
  /* Override_Function_Active/ */
  kcg_bool Override_Function_Active,
  /* Override_Function_Former_Active/ */
  kcg_bool Override_Function_Former_Active,
  /* Stop_If_In_Shunting/ */
  kcg_bool Stop_If_In_Shunting,
  /* Stop_If_In_SR/ */
  kcg_bool Stop_If_In_SR,
  /* T_NVCONTACT_Overpass/ */
  kcg_bool T_NVCONTACT_Overpass,
  /* Train_Overpass_EOA_Antenna/ */
  kcg_bool Train_Overpass_EOA_Antenna,
  /* Train_Overpass_EOA_Front_End/ */
  kcg_bool Train_Overpass_EOA_Front_End,
  /* Train_Overpass_Former_EOA_Antenna/ */
  kcg_bool Train_Overpass_Former_EOA_Antenna,
  /* Trip_Order_Given_By_Balise/ */
  kcg_bool Trip_Order_Given_By_Balise,
  /* TripModeFromLevel/ */
  kcg_bool TripModeFromLevel,
  outC_ToTrip_Conditions *outC)
{
  /* Current_Level/ */
  static M_LEVEL last_Current_Level;

  last_Current_Level = outC->mem_Current_Level;
  outC->mem_Current_Level = Current_Level;
  outC->_L257 = TripModeFromLevel;
  outC->_L190 = Current_Mode == UN_Level_And_Mode_Types_Pkg;
  outC->Mode_UN = outC->_L190;
  outC->_L195 = outC->Mode_UN;
  outC->_L188 = Current_Mode == SN_Level_And_Mode_Types_Pkg;
  outC->Mode_SN = outC->_L188;
  outC->_L194 = outC->Mode_SN;
  outC->_L193 = outC->_L194 | outC->_L195;
  outC->_L79 = MA_Available;
  outC->_L253 = !outC->_L79;
  outC->_L230 = (last_Current_Level == M_LEVEL_Level_0) | (last_Current_Level ==
      M_LEVEL_Level_NTC_specified_by_NID_NTC);
  outC->Level_prev_L0_LNTC = outC->_L230;
  outC->_L247 = outC->Level_prev_L0_LNTC;
  outC->_L223 = (Current_Level == M_LEVEL_Level_1) | (Current_Level ==
      M_LEVEL_Level_2) | (Current_Level == M_LEVEL_Level_3);
  outC->Level_L1_L2_L3 = outC->_L223;
  outC->_L246 = outC->Level_L1_L2_L3;
  outC->_L76 = outC->_L246 & outC->_L247 & outC->_L253 & outC->_L193;
  outC->_L255 = outC->_L76 | outC->_L257;
  outC->_L187 = Current_Mode == SR_Level_And_Mode_Types_Pkg;
  outC->Mode_SR = outC->_L187;
  outC->_L219 = outC->Mode_SR;
  outC->_L183 = (Current_Mode == FS_Level_And_Mode_Types_Pkg) | (Current_Mode ==
      LS_Level_And_Mode_Types_Pkg) | (Current_Mode ==
      OS_Level_And_Mode_Types_Pkg);
  outC->Mode_FS_LS_OS = outC->_L183;
  outC->_L218 = outC->Mode_FS_LS_OS;
  outC->_L217 = outC->_L218 | outC->_L219;
  outC->_L141 = Estimated_Front_End_Rear_Location_SSP_Or_Gradient;
  outC->_L179 = outC->_L141 & outC->_L217;
  outC->Condition69 = outC->_L179;
  outC->_L142 = outC->Condition69;
  outC->_L222 = outC->Mode_UN;
  outC->_L221 = outC->Mode_SN;
  outC->_L220 = outC->_L221 | outC->_L222;
  outC->_L138 = National_Trip_Order;
  outC->_L139 = !outC->_L138;
  outC->_L130 = Trip_Order_Given_By_Balise;
  outC->_L231 = (Current_Level == M_LEVEL_Level_1) | (Current_Level ==
      M_LEVEL_Level_2) | (Current_Level == M_LEVEL_Level_3);
  outC->Level_prev_L1 = outC->_L231;
  outC->_L251 = outC->Level_prev_L1;
  outC->_L225 = Current_Level == M_LEVEL_Level_1;
  outC->Level_L1 = outC->_L225;
  outC->_L249 = outC->Level_L1;
  outC->_L128 = outC->_L249 & outC->_L251 & outC->_L130 & outC->_L139 &
    outC->_L220;
  outC->Condition67 = outC->_L128;
  outC->_L140 = outC->Condition67;
  outC->_L216 = outC->Mode_SR;
  outC->_L215 = outC->Mode_FS_LS_OS;
  outC->_L214 = outC->_L215 | outC->_L216;
  outC->_L126 = Linked_BG_Pased_In_Wrong_Direction;
  outC->_L177 = outC->_L126 & outC->_L214;
  outC->Condition66 = outC->_L177;
  outC->_L127 = outC->Condition66;
  outC->_L213 = outC->Mode_SR;
  outC->_L189 = Current_Mode == SH_Level_And_Mode_Types_Pkg;
  outC->Mode_SH = outC->_L189;
  outC->_L212 = outC->Mode_SH;
  outC->_L211 = outC->Mode_FS_LS_OS;
  outC->_L210 = outC->_L211 | outC->_L212 | outC->_L213;
  outC->_L248 = outC->Level_L1_L2_L3;
  outC->_L124 = Error_BG_System_Version;
  outC->_L122 = outC->_L124 & outC->_L248 & outC->_L210;
  outC->Condition65 = outC->_L122;
  outC->_L125 = outC->Condition65;
  outC->_L209 = outC->Mode_SR;
  outC->_L106 = Override_Function_Active;
  outC->_L110 = !outC->_L106;
  outC->_L112 = BG_In_Expected_List_In_SR;
  outC->_L108 = !outC->_L112;
  outC->_L113 = List_BG_Related_To_SR_Empty;
  outC->_L111 = outC->_L113 | outC->_L108;
  outC->_L114 = Stop_If_In_SR;
  outC->_L109 = outC->_L114 & outC->_L111 & outC->_L110 & outC->_L209;
  outC->Condition54 = outC->_L109;
  outC->_L115 = outC->Condition54;
  outC->_L208 = outC->Mode_SH;
  outC->_L100 = Override_Function_Active;
  outC->_L99 = !outC->_L100;
  outC->_L104 = BG_In_Expected_List_In_SH;
  outC->_L101 = !outC->_L104;
  outC->_L102 = outC->_L101 & outC->_L99 & outC->_L208;
  outC->Condition52 = outC->_L102;
  outC->_L105 = outC->Condition52;
  outC->_L207 = outC->Mode_SH;
  outC->_L95 = Override_Function_Active;
  outC->_L96 = !outC->_L95;
  outC->_L94 = Stop_If_In_Shunting;
  outC->_L97 = outC->_L94 & outC->_L96 & outC->_L207;
  outC->Condition49 = outC->_L97;
  outC->_L98 = outC->Condition49;
  outC->_L206 = outC->Mode_SR;
  outC->_L90 = Override_Function_Active;
  outC->_L91 = !outC->_L90;
  outC->_L89 = Override_Function_Former_Active;
  outC->_L88 = Train_Overpass_Former_EOA_Antenna;
  outC->_L92 = outC->_L88 & outC->_L89 & outC->_L91 & outC->_L206;
  outC->Condition43 = outC->_L92;
  outC->_L93 = outC->Condition43;
  outC->_L205 = outC->Mode_SR;
  outC->_L84 = Override_Function_Active;
  outC->_L85 = !outC->_L84;
  outC->_L83 = Estimated_Front_End_Overpass_SR_Distance;
  outC->_L86 = outC->_L83 & outC->_L85 & outC->_L205;
  outC->Condition42 = outC->_L86;
  outC->_L87 = outC->Condition42;
  outC->_L204 = outC->Mode_FS_LS_OS;
  outC->_L166 = T_NVCONTACT_Overpass;
  outC->_L164 = outC->_L166 & outC->_L204;
  outC->Condition41 = outC->_L164;
  outC->_L82 = outC->Condition41;
  outC->Condition39 = outC->_L255;
  outC->_L80 = outC->Condition39;
  outC->_L196 = outC->Mode_SN;
  outC->_L63 = National_Trip_Order;
  outC->_L62 = Interface_To_National_System;
  outC->_L245 = Current_Level;
  outC->_L156 = last_Current_Level;
  outC->_L55 = outC->_L156 == outC->_L245;
  outC->_L227 = Current_Level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
  outC->Level_LNTC = outC->_L227;
  outC->_L243 = outC->Level_LNTC;
  outC->_L244 = !outC->_L243;
  outC->_L64 = outC->_L244 & outC->_L55 & outC->_L62 & outC->_L63 & outC->_L196;
  outC->Condition38 = outC->_L64;
  outC->_L65 = outC->Condition38;
  outC->_L197 = outC->Mode_SR;
  outC->_L47 = Override_Function_Active;
  outC->_L50 = !outC->_L47;
  outC->_L48 = BG_In_Expected_List_In_SR;
  outC->_L49 = !outC->_L48;
  outC->_L46 = outC->_L49 & outC->_L50 & outC->_L197;
  outC->Condition36 = outC->_L46;
  outC->_L51 = outC->Condition36;
  outC->_L198 = outC->Mode_SN;
  outC->_L43 = National_Trip_Order;
  outC->_L42 = Interface_To_National_System;
  outC->_L41 = Driver_Select_SH;
  outC->_L40 = outC->_L41 & outC->_L42 & outC->_L43 & outC->_L198;
  outC->Condition35 = outC->_L40;
  outC->_L44 = outC->Condition35;
  outC->_L199 = outC->Mode_SH;
  outC->_L200 = !outC->_L199;
  outC->_L38 = Emergency_Stop_Message_Received;
  outC->_L152 = outC->_L38 & outC->_L200;
  outC->Condition20 = outC->_L152;
  outC->_L39 = outC->Condition20;
  outC->_L203 = outC->Mode_SR;
  outC->_L202 = outC->Mode_FS_LS_OS;
  outC->_L201 = outC->_L202 | outC->_L203;
  outC->_L34 = Trip_Order_Given_By_Balise;
  outC->_L33 = Override_Function_Active;
  outC->_L45 = !outC->_L33;
  outC->_L35 = outC->_L45 & outC->_L34 & outC->_L201;
  outC->Condition18 = outC->_L35;
  outC->_L37 = outC->Condition18;
  outC->_L186 = outC->Mode_FS_LS_OS;
  outC->_L31 = Linking_Reaction_To_Trip;
  outC->_L149 = outC->_L31 & outC->_L186;
  outC->Condition17 = outC->_L149;
  outC->_L32 = outC->Condition17;
  outC->_L185 = outC->Mode_FS_LS_OS;
  outC->_L226 = (Current_Level == M_LEVEL_Level_2) | (Current_Level ==
      M_LEVEL_Level_3);
  outC->Level_L2_L3 = outC->_L226;
  outC->_L242 = outC->Level_L2_L3;
  outC->_L28 = Train_Overpass_EOA_Front_End;
  outC->_L29 = outC->_L28 & outC->_L242 & outC->_L185;
  outC->Condition16 = outC->_L29;
  outC->_L30 = outC->Condition16;
  outC->_L184 = outC->Mode_FS_LS_OS;
  outC->_L241 = outC->Level_L1;
  outC->_L17 = Train_Overpass_EOA_Antenna;
  outC->_L21 = outC->_L17 & outC->_L241 & outC->_L184;
  outC->Condition12 = outC->_L21;
  outC->_L22 = outC->Condition12;
  outC->_L252 = outC->_L22 | outC->_L30 | outC->_L32 | outC->_L37 | outC->_L39 |
    outC->_L44 | outC->_L51 | outC->_L65 | outC->_L80 | outC->_L82 |
    outC->_L87 | outC->_L93 | outC->_L98 | outC->_L105 | outC->_L115 |
    outC->_L125 | outC->_L127 | outC->_L140 | outC->_L142;
  outC->Condition2Trip = outC->_L252;
}

#ifndef KCG_USER_DEFINED_INIT
void ToTrip_init_Conditions(outC_ToTrip_Conditions *outC)
{
  outC->_L257 = kcg_true;
  outC->_L255 = kcg_true;
  outC->_L253 = kcg_true;
  outC->_L252 = kcg_true;
  outC->_L251 = kcg_true;
  outC->_L249 = kcg_true;
  outC->_L248 = kcg_true;
  outC->_L247 = kcg_true;
  outC->_L246 = kcg_true;
  outC->_L245 = M_LEVEL_Level_0;
  outC->_L244 = kcg_true;
  outC->_L243 = kcg_true;
  outC->_L242 = kcg_true;
  outC->_L241 = kcg_true;
  outC->_L230 = kcg_true;
  outC->_L231 = kcg_true;
  outC->_L227 = kcg_true;
  outC->_L226 = kcg_true;
  outC->_L225 = kcg_true;
  outC->_L223 = kcg_true;
  outC->_L222 = kcg_true;
  outC->_L221 = kcg_true;
  outC->_L220 = kcg_true;
  outC->_L217 = kcg_true;
  outC->_L218 = kcg_true;
  outC->_L219 = kcg_true;
  outC->_L216 = kcg_true;
  outC->_L215 = kcg_true;
  outC->_L214 = kcg_true;
  outC->_L213 = kcg_true;
  outC->_L212 = kcg_true;
  outC->_L211 = kcg_true;
  outC->_L210 = kcg_true;
  outC->_L209 = kcg_true;
  outC->_L208 = kcg_true;
  outC->_L207 = kcg_true;
  outC->_L206 = kcg_true;
  outC->_L205 = kcg_true;
  outC->_L204 = kcg_true;
  outC->_L203 = kcg_true;
  outC->_L202 = kcg_true;
  outC->_L201 = kcg_true;
  outC->_L200 = kcg_true;
  outC->_L199 = kcg_true;
  outC->_L198 = kcg_true;
  outC->_L197 = kcg_true;
  outC->_L196 = kcg_true;
  outC->_L195 = kcg_true;
  outC->_L194 = kcg_true;
  outC->_L193 = kcg_true;
  outC->_L190 = kcg_true;
  outC->_L189 = kcg_true;
  outC->_L188 = kcg_true;
  outC->_L187 = kcg_true;
  outC->_L186 = kcg_true;
  outC->_L185 = kcg_true;
  outC->_L184 = kcg_true;
  outC->_L183 = kcg_true;
  outC->_L179 = kcg_true;
  outC->_L177 = kcg_true;
  outC->_L166 = kcg_true;
  outC->_L164 = kcg_true;
  outC->_L156 = M_LEVEL_Level_0;
  outC->_L152 = kcg_true;
  outC->_L149 = kcg_true;
  outC->_L142 = kcg_true;
  outC->_L141 = kcg_true;
  outC->_L140 = kcg_true;
  outC->_L139 = kcg_true;
  outC->_L138 = kcg_true;
  outC->_L128 = kcg_true;
  outC->_L130 = kcg_true;
  outC->_L127 = kcg_true;
  outC->_L126 = kcg_true;
  outC->_L125 = kcg_true;
  outC->_L124 = kcg_true;
  outC->_L122 = kcg_true;
  outC->_L115 = kcg_true;
  outC->_L114 = kcg_true;
  outC->_L113 = kcg_true;
  outC->_L112 = kcg_true;
  outC->_L111 = kcg_true;
  outC->_L106 = kcg_true;
  outC->_L108 = kcg_true;
  outC->_L109 = kcg_true;
  outC->_L110 = kcg_true;
  outC->_L105 = kcg_true;
  outC->_L104 = kcg_true;
  outC->_L99 = kcg_true;
  outC->_L100 = kcg_true;
  outC->_L101 = kcg_true;
  outC->_L102 = kcg_true;
  outC->_L98 = kcg_true;
  outC->_L97 = kcg_true;
  outC->_L96 = kcg_true;
  outC->_L95 = kcg_true;
  outC->_L94 = kcg_true;
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
  outC->_L80 = kcg_true;
  outC->_L79 = kcg_true;
  outC->_L76 = kcg_true;
  outC->_L65 = kcg_true;
  outC->_L64 = kcg_true;
  outC->_L63 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L55 = kcg_true;
  outC->_L51 = kcg_true;
  outC->_L50 = kcg_true;
  outC->_L49 = kcg_true;
  outC->_L48 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L46 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L41 = kcg_true;
  outC->_L40 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L38 = kcg_true;
  outC->_L37 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L17 = kcg_true;
  outC->Level_L1 = kcg_true;
  outC->Level_prev_L1 = kcg_true;
  outC->Level_prev_L0_LNTC = kcg_true;
  outC->Level_LNTC = kcg_true;
  outC->Level_L2_L3 = kcg_true;
  outC->Level_L1_L2_L3 = kcg_true;
  outC->Mode_UN = kcg_true;
  outC->Mode_SH = kcg_true;
  outC->Mode_SN = kcg_true;
  outC->Mode_SR = kcg_true;
  outC->Mode_FS_LS_OS = kcg_true;
  outC->Condition69 = kcg_true;
  outC->Condition67 = kcg_true;
  outC->Condition66 = kcg_true;
  outC->Condition65 = kcg_true;
  outC->Condition54 = kcg_true;
  outC->Condition52 = kcg_true;
  outC->Condition49 = kcg_true;
  outC->Condition43 = kcg_true;
  outC->Condition42 = kcg_true;
  outC->Condition41 = kcg_true;
  outC->Condition39 = kcg_true;
  outC->Condition38 = kcg_true;
  outC->Condition36 = kcg_true;
  outC->Condition35 = kcg_true;
  outC->Condition20 = kcg_true;
  outC->Condition17 = kcg_true;
  outC->Condition18 = kcg_true;
  outC->Condition16 = kcg_true;
  outC->Condition12 = kcg_true;
  outC->Condition2Trip = kcg_true;
  outC->mem_Current_Level = M_LEVEL_Level_0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToTrip_reset_Conditions(outC_ToTrip_Conditions *outC)
{
  outC->mem_Current_Level = M_LEVEL_Level_0;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_ToTrip_Conditions(
  SV_ToTrip_Conditions *SV,
  outC_ToTrip_Conditions *outC)
{
  SV->Context_mem_Current_Level = outC->mem_Current_Level;
}

void kcg_load_SV_ToTrip_Conditions(
  outC_ToTrip_Conditions *outC,
  SV_ToTrip_Conditions *SV)
{
  outC->mem_Current_Level = SV->Context_mem_Current_Level;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToTrip_Conditions.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

