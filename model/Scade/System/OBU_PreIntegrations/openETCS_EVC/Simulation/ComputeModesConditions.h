/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _ComputeModesConditions_H_
#define _ComputeModesConditions_H_

#include "kcg_types.h"
#include "Merge_Conditions.h"
#include "Procedure_Train_Reversing_Procedures.h"
#include "Procedure_Train_Trip_Procedures.h"
#include "Procedure_StartOfMission_Procedures.h"
#include "ToTrip_Conditions.h"
#include "ToSystemNational_Conditions.h"
#include "ToUnfitted_Conditions.h"
#include "ToNonLeading_Conditions.h"
#include "ToStaffResponsible_Conditions.h"
#include "ToPassiveShunting_Conditions.h"
#include "Procedure_OnSight_Procedures.h"
#include "Procedure_LimitedSupervision_Procedures.h"
#include "ToFullSupervision_Conditions.h"
#include "ToShunting_Conditions.h"
#include "ToStandBy_Conditions.h"
#include "ToSleeping_Conditions.h"
#include "ToNoPower_Conditions.h"
#include "ToSystemFailure_Conditions.h"
#include "ToIsolate_Conditions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition1/ */ Condition1;
  kcg_bool /* Condition2/ */ Condition2;
  kcg_bool /* Condition3/ */ Condition3;
  kcg_bool /* Condition4/ */ Condition4;
  kcg_bool /* Condition5/ */ Condition5;
  kcg_bool /* Condition6/ */ Condition6;
  kcg_bool /* Condition7/ */ Condition7;
  kcg_bool /* Condition8/ */ Condition8;
  kcg_bool /* Condition10/ */ Condition10;
  kcg_bool /* Condition13/ */ Condition13;
  kcg_bool /* Condition14/ */ Condition14;
  kcg_bool /* Condition15/ */ Condition15;
  kcg_bool /* Condition19/ */ Condition19;
  kcg_bool /* Condition21/ */ Condition21;
  kcg_bool /* Condition22/ */ Condition22;
  kcg_bool /* Condition23/ */ Condition23;
  kcg_bool /* Condition25/ */ Condition25;
  kcg_bool /* Condition26/ */ Condition26;
  kcg_bool /* Condition27/ */ Condition27;
  kcg_bool /* Condition28/ */ Condition28;
  kcg_bool /* Condition29/ */ Condition29;
  kcg_bool /* Condition30/ */ Condition30;
  kcg_bool /* Condition31/ */ Condition31;
  kcg_bool /* Condition32/ */ Condition32;
  kcg_bool /* Condition34/ */ Condition34;
  kcg_bool /* Condition37/ */ Condition37;
  kcg_bool /* Condition40/ */ Condition40;
  kcg_bool /* Condition44/ */ Condition44;
  kcg_bool /* Condition45/ */ Condition45;
  kcg_bool /* Condition46/ */ Condition46;
  kcg_bool /* Condition47/ */ Condition47;
  kcg_bool /* Condition50/ */ Condition50;
  kcg_bool /* Condition51/ */ Condition51;
  kcg_bool /* Condition56/ */ Condition56;
  kcg_bool /* Condition58/ */ Condition58;
  kcg_bool /* Condition59/ */ Condition59;
  kcg_bool /* Condition60/ */ Condition60;
  kcg_bool /* Condition61/ */ Condition61;
  kcg_bool /* Condition62/ */ Condition62;
  kcg_bool /* Condition63/ */ Condition63;
  kcg_bool /* Condition68/ */ Condition68;
  kcg_bool /* Condition70/ */ Condition70;
  kcg_bool /* Condition71/ */ Condition71;
  kcg_bool /* Condition72/ */ Condition72;
  kcg_bool /* Condition73/ */ Condition73;
  kcg_bool /* Condition74/ */ Condition74;
  kcg_bool /* Condition_Trip/ */ Condition_Trip;
  kcg_bool /* Ack_LS_Req_To_Driver/ */ Ack_LS_Req_To_Driver;
  kcg_bool /* Ack_OS_Req_To_Driver/ */ Ack_OS_Req_To_Driver;
  kcg_bool /* Ack_RV_Req_To_Driver/ */ Ack_RV_Req_To_Driver;
  kcg_bool /* Ack_SH_Req_To_Driver/ */ Ack_SH_Req_To_Driver;
  kcg_bool /* Ack_SN_Req_To_Driver/ */ Ack_SN_Req_To_Driver;
  kcg_bool /* Ack_SR_Req_To_Driver/ */ Ack_SR_Req_To_Driver;
  kcg_bool /* Ack_TR_Req_To_Driver/ */ Ack_TR_Req_To_Driver;
  kcg_bool /* Ack_UN_Req_To_Driver/ */ Ack_UN_Req_To_Driver;
  kcg_bool /* Clean_BG_List_SH_Area/ */ Clean_BG_List_SH_Area;
  kcg_bool /* EB_Requested/ */ EB_Requested;
  kcg_bool /* End_Of_Mission_Procedure_Req/ */ End_Of_Mission_Procedure_Req;
  kcg_bool /* MA_Req_To_RBC/ */ MA_Req_To_RBC;
  kcg_bool /* Request_For_SH_To_RBC/ */ Request_For_SH_To_RBC;
  kcg_bool /* Service_Brake_Command/ */ Service_Brake_Command;
  kcg_bool /* SH_Refused_By_RBC_To_DMI/ */ SH_Refused_By_RBC_To_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  M_LEVEL /* Current_Level/ */ mem_Current_Level;
  kcg_bool /* Override_Function_Active/ */ mem_Override_Function_Active;
  kcg_bool /* Train_Overpass_EOA_Antenna/ */ mem_Train_Overpass_EOA_Antenna;
  kcg_bool /* Failure_Occured/ */ mem_Failure_Occured;
  kcg_bool /* On_Going_Mission/ */ On_Going_Mission;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ToNoPower_Conditions /* _L5=(Conditions::ToNoPower#1)/ */ Context_ToNoPower_1;
  outC_ToPassiveShunting_Conditions /* _L107=(Conditions::ToPassiveShunting#1)/ */ Context_ToPassiveShunting_1;
  outC_ToStaffResponsible_Conditions /* _L111=(Conditions::ToStaffResponsible#1)/ */ Context_ToStaffResponsible_1;
  outC_ToSleeping_Conditions /* _L7=(Conditions::ToSleeping#1)/ */ Context_ToSleeping_1;
  outC_ToIsolate_Conditions /* _L1=(Conditions::ToIsolate#1)/ */ Context_ToIsolate_1;
  outC_ToSystemFailure_Conditions /* _L3=(Conditions::ToSystemFailure#1)/ */ Context_ToSystemFailure_1;
  outC_ToUnfitted_Conditions /* _L124=(Conditions::ToUnfitted#1)/ */ Context_ToUnfitted_1;
  outC_ToSystemNational_Conditions /* _L141=(Conditions::ToSystemNational#1)/ */ Context_ToSystemNational_1;
  outC_Procedure_Train_Reversing_Procedures /* _L361=(Procedures::Procedure_Train_Reversing#1)/ */ Context_Procedure_Train_Reversing_1;
  outC_Merge_Conditions /* _L448=(Merge_Conditions#1)/ */ Context_Merge_Conditions_1;
  outC_ToNonLeading_Conditions /* _L123=(Conditions::ToNonLeading#1)/ */ Context_ToNonLeading_1;
  outC_ToFullSupervision_Conditions /* _L96=(Conditions::ToFullSupervision#1)/ */ Context_ToFullSupervision_1;
  outC_ToStandBy_Conditions /* _L79=(Conditions::ToStandBy#1)/ */ Context_ToStandBy_1;
  outC_Procedure_OnSight_Procedures /* _L103=(Procedures::Procedure_OnSight#1)/ */ Context_Procedure_OnSight_1;
  outC_Procedure_LimitedSupervision_Procedures /* _L100=(Procedures::Procedure_LimitedSupervision#1)/ */ Context_Procedure_LimitedSupervision_1;
  outC_Procedure_Train_Trip_Procedures /* _L328=(Procedures::Procedure_Train_Trip#1)/ */ Context_Procedure_Train_Trip_1;
  outC_ToTrip_Conditions /* _L147=(Conditions::ToTrip#1)/ */ Context_ToTrip_1;
  outC_Procedure_StartOfMission_Procedures /* _L268=(Procedures::Procedure_StartOfMission#1)/ */ Context_Procedure_StartOfMission_1;
  outC_ToShunting_Conditions /* _L88=(Conditions::ToShunting#1)/ */ Context_ToShunting_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Condition_to_Trip/ */ Condition_to_Trip;
  kcg_bool /* Loc_Service_Brake_Command_SH/ */ Loc_Service_Brake_Command_SH;
  kcg_bool /* Loc_Clean_BG_List_SH_Area_SH/ */ Loc_Clean_BG_List_SH_Area_SH;
  kcg_bool /* Loc_Service_Brake_Command_OS/ */ Loc_Service_Brake_Command_OS;
  kcg_bool /* Loc_Service_Brake_Command_LS/ */ Loc_Service_Brake_Command_LS;
  kcg_bool /* Loc_Clean_BG_List_Of_SoM/ */ Loc_Clean_BG_List_Of_SoM;
  kcg_bool /* Loc_End_Of_Mission_Procedure_Req_SH/ */ Loc_End_Of_Mission_Procedure_Req_SH;
  kcg_bool /* Loc_End_Of_Mission_Procedure_Req_SB/ */ _1_Loc_End_Of_Mission_Procedure_Req_SB;
  kcg_bool /* Loc_End_Of_Mission_Procedure_Req_TR/ */ _2_Loc_End_Of_Mission_Procedure_Req_TR;
  kcg_bool /* Loc_Clean_BG_List_SH_Area_TR/ */ Loc_Clean_BG_List_SH_Area_TR;
  kcg_bool /* Loc_End_Of_Mission_Procedure_Req_SoM/ */ _3_Loc_End_Of_Mission_Procedure_Req_SoM;
  kcg_bool /* Loc_Request_For_SH_To_RBC_SH/ */ Loc_Request_For_SH_To_RBC_SH;
  kcg_bool /* Loc_SH_Refused_By_RBC_To_DMI_SH/ */ Loc_SH_Refused_By_RBC_To_DMI_SH;
  kcg_bool /* Loc_Request_For_SH_To_RBC_TR/ */ Loc_Request_For_SH_To_RBC_TR;
  kcg_bool /* Loc_SH_Refused_By_RBC_To_DMI_TR/ */ Loc_SH_Refused_By_RBC_To_DMI_TR;
  kcg_bool /* Loc_SH_Refused_By_RBC_To_DMI_SoM/ */ Loc_SH_Refused_By_RBC_To_DMI_SoM;
  kcg_bool /* Loc_Request_For_SH_To_RBC_SoM/ */ Loc_Request_For_SH_To_RBC_SoM;
  kcg_bool /* Loc_Cond_5_SH/ */ Loc_Cond_5_SH;
  kcg_bool /* Loc_Cond_6_SH/ */ Loc_Cond_6_SH;
  kcg_bool /* Loc_Cond_50_SH/ */ Loc_Cond_50_SH;
  kcg_bool /* Loc_Cond_6_TR/ */ Loc_Cond_6_TR;
  kcg_bool /* Loc_Cond_5_TR/ */ Loc_Cond_5_TR;
  kcg_bool /* Loc_Cond_50_TR/ */ Loc_Cond_50_TR;
  kcg_bool /* Loc_Cond_6_SoM/ */ Loc_Cond_6_SoM;
  kcg_bool /* Loc_Cond_5_SoM/ */ Loc_Cond_5_SoM;
  kcg_bool /* Loc_Cond_50_SoM/ */ Loc_Cond_50_SoM;
  kcg_bool /* Loc_Cond_15_OS/ */ Loc_Cond_15_OS;
  kcg_bool /* Loc_Cond_70_LS/ */ Loc_Cond_70_LS;
  kcg_bool /* Loc_Cond_46_NL/ */ Loc_Cond_46_NL;
  kcg_bool /* Loc_Cond_70_TR/ */ Loc_Cond_70_TR;
  kcg_bool /* Loc_Cond_15_TR/ */ Loc_Cond_15_TR;
  kcg_bool /* Loc_Cond_70_SoM/ */ Loc_Cond_70_SoM;
  kcg_bool /* Loc_Cond_46_SoM/ */ Loc_Cond_46_SoM;
  kcg_bool /* Loc_Cond_15_SoM/ */ Loc_Cond_15_SoM;
  kcg_bool /* Loc_Cond_8_TR/ */ Loc_Cond_8_TR;
  kcg_bool /* Loc_Cond_8_SoM/ */ Loc_Cond_8_SoM;
  kcg_bool /* Loc_Ack_LS_Req_To_Driver_TR/ */ Loc_Ack_LS_Req_To_Driver_TR;
  kcg_bool /* Loc_Ack_OS_Req_To_Driver_TR/ */ Loc_Ack_OS_Req_To_Driver_TR;
  kcg_bool /* Loc_Ack_SH_Req_To_Driver_TR/ */ Loc_Ack_SH_Req_To_Driver_TR;
  kcg_bool /* Loc_Ack_SR_Req_To_Driver_TR/ */ Loc_Ack_SR_Req_To_Driver_TR;
  kcg_bool /* Loc_Ack_SR_Req_To_Driver_SoM/ */ Loc_Ack_SR_Req_To_Driver_SoM;
  kcg_bool /* Loc_Ack_SH_Req_To_Driver_SoM/ */ Loc_Ack_SH_Req_To_Driver_SoM;
  kcg_bool /* Loc_Ack_OS_Req_To_Driver_SoM/ */ Loc_Ack_OS_Req_To_Driver_SoM;
  kcg_bool /* Loc_Ack_LS_Req_To_Driver_SoM/ */ Loc_Ack_LS_Req_To_Driver_SoM;
  kcg_bool /* Loc_Ack_SH_Req_To_Driver_SH/ */ Loc_Ack_SH_Req_To_Driver_SH;
  kcg_bool /* Loc_Ack_OS_Req_To_Driver_OS/ */ Loc_Ack_OS_Req_To_Driver_OS;
  kcg_bool /* Loc_Ack_LS_Req_To_Driver_LS/ */ Loc_Ack_LS_Req_To_Driver_LS;
  kcg_bool /* Loc_MA_Req_To_RBC_SoM/ */ Loc_MA_Req_To_RBC_SoM;
  kcg_bool /* Loc_MA_Req_To_RBC_TR/ */ Loc_MA_Req_To_RBC_TR;
  kcg_bool /* Loc_Cond_31_FS/ */ Loc_Cond_31_FS;
  kcg_bool /* Loc_Cond_31_TR/ */ Loc_Cond_31_TR;
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L41/ */ _L41;
  kcg_bool /* _L42/ */ _L42;
  kcg_bool /* _L45/ */ _L45;
  kcg_bool /* _L46/ */ _L46;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* _L50/ */ _L50;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* _L57/ */ _L57;
  kcg_bool /* _L59/ */ _L59;
  kcg_bool /* _L60/ */ _L60;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* _L64/ */ _L64;
  kcg_bool /* _L68/ */ _L68;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* _L73/ */ _L73;
  kcg_bool /* _L77/ */ _L77;
  kcg_bool /* _L79/ */ _L79;
  kcg_bool /* _L80/ */ _L80;
  kcg_bool /* _L81/ */ _L81;
  kcg_bool /* _L82/ */ _L82;
  kcg_bool /* _L83/ */ _L83;
  kcg_bool /* _L84/ */ _L84;
  kcg_bool /* _L85/ */ _L85;
  kcg_bool /* _L86/ */ _L86;
  kcg_bool /* _L87/ */ _L87;
  kcg_bool /* _L88/ */ _L88;
  kcg_bool /* _L89/ */ _L89;
  kcg_bool /* _L90/ */ _L90;
  kcg_bool /* _L91/ */ _L91;
  kcg_bool /* _L92/ */ _L92;
  kcg_bool /* _L93/ */ _L93;
  kcg_bool /* _L96/ */ _L96;
  kcg_bool /* _L97/ */ _L97;
  kcg_bool /* _L98/ */ _L98;
  kcg_bool /* _L99/ */ _L99;
  kcg_bool /* _L100/ */ _L100;
  kcg_bool /* _L101/ */ _L101;
  kcg_bool /* _L102/ */ _L102;
  kcg_bool /* _L103/ */ _L103;
  kcg_bool /* _L104/ */ _L104;
  kcg_bool /* _L105/ */ _L105;
  kcg_bool /* _L106/ */ _L106;
  kcg_bool /* _L107/ */ _L107;
  kcg_bool /* _L109/ */ _L109;
  kcg_bool /* _L110/ */ _L110;
  kcg_bool /* _L113/ */ _L113;
  kcg_bool /* _L112/ */ _L112;
  kcg_bool /* _L111/ */ _L111;
  kcg_bool /* _L119/ */ _L119;
  kcg_bool /* _L120/ */ _L120;
  kcg_bool /* _L121/ */ _L121;
  kcg_bool /* _L122/ */ _L122;
  kcg_bool /* _L123/ */ _L123;
  kcg_bool /* _L124/ */ _L124;
  kcg_bool /* _L127/ */ _L127;
  kcg_bool /* _L128/ */ _L128;
  kcg_bool /* _L129/ */ _L129;
  kcg_bool /* _L141/ */ _L141;
  kcg_bool /* _L147/ */ _L147;
  kcg_bool /* _L164/ */ _L164;
  kcg_bool /* _L165/ */ _L165;
  kcg_bool /* _L166/ */ _L166;
  kcg_bool /* _L174/ */ _L174;
  kcg_bool /* _L175/ */ _L175;
  kcg_bool /* _L178/ */ _L178;
  kcg_bool /* _L179/ */ _L179;
  kcg_bool /* _L180/ */ _L180;
  kcg_bool /* _L181/ */ _L181;
  kcg_bool /* _L182/ */ _L182;
  kcg_bool /* _L183/ */ _L183;
  kcg_bool /* _L184/ */ _L184;
  kcg_bool /* _L186/ */ _L186;
  kcg_bool /* _L187/ */ _L187;
  kcg_bool /* _L190/ */ _L190;
  kcg_bool /* _L191/ */ _L191;
  kcg_bool /* _L192/ */ _L192;
  kcg_bool /* _L193/ */ _L193;
  kcg_bool /* _L195/ */ _L195;
  kcg_bool /* _L200/ */ _L200;
  kcg_bool /* _L201/ */ _L201;
  kcg_bool /* _L202/ */ _L202;
  kcg_bool /* _L203/ */ _L203;
  T_Mode_Level_And_Mode_Types_Pkg /* _L206/ */ _L206;
  kcg_bool /* _L207/ */ _L207;
  kcg_bool /* _L208/ */ _L208;
  kcg_bool /* _L212/ */ _L212;
  kcg_bool /* _L213/ */ _L213;
  kcg_bool /* _L214/ */ _L214;
  kcg_bool /* _L215/ */ _L215;
  kcg_bool /* _L220/ */ _L220;
  Speed_T_Obu_BasicTypes_Pkg /* _L221/ */ _L221;
  T_Mode_Level_And_Mode_Types_Pkg /* _L223/ */ _L223;
  Speed_T_Obu_BasicTypes_Pkg /* _L225/ */ _L225;
  T_Mode_Level_And_Mode_Types_Pkg /* _L226/ */ _L226;
  Speed_T_Obu_BasicTypes_Pkg /* _L228/ */ _L228;
  M_LEVEL /* _L43/ */ _L43;
  M_LEVEL /* _L54/ */ _L54;
  M_LEVEL /* _L130/ */ _L130;
  M_LEVEL /* _L155/ */ _L155;
  kcg_bool /* _L248/ */ _L248;
  kcg_bool /* _L247/ */ _L247;
  kcg_bool /* _L246/ */ _L246;
  kcg_bool /* _L245/ */ _L245;
  kcg_bool /* _L244/ */ _L244;
  kcg_bool /* _L242/ */ _L242;
  kcg_bool /* _L241/ */ _L241;
  kcg_bool /* _L240/ */ _L240;
  kcg_bool /* _L239/ */ _L239;
  kcg_bool /* _L238/ */ _L238;
  kcg_bool /* _L237/ */ _L237;
  kcg_bool /* _L236/ */ _L236;
  kcg_bool /* _L235/ */ _L235;
  kcg_bool /* _L234/ */ _L234;
  kcg_bool /* _L233/ */ _L233;
  kcg_bool /* _L232/ */ _L232;
  kcg_bool /* _L231/ */ _L231;
  kcg_bool /* _L230/ */ _L230;
  kcg_bool /* _L229/ */ _L229;
  M_LEVEL /* _L249/ */ _L249;
  T_Mode_Level_And_Mode_Types_Pkg /* _L250/ */ _L250;
  kcg_bool /* _L251/ */ _L251;
  kcg_bool /* _L252/ */ _L252;
  kcg_bool /* _L253/ */ _L253;
  kcg_bool /* _L254/ */ _L254;
  kcg_bool /* _L255/ */ _L255;
  kcg_bool /* _L256/ */ _L256;
  kcg_bool /* _L257/ */ _L257;
  kcg_bool /* _L258/ */ _L258;
  kcg_bool /* _L260/ */ _L260;
  kcg_bool /* _L261/ */ _L261;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* _L262/ */ _L262;
  kcg_bool /* _L263/ */ _L263;
  kcg_bool /* _L264/ */ _L264;
  kcg_bool /* _L265/ */ _L265;
  kcg_bool /* _L266/ */ _L266;
  kcg_bool /* _L267/ */ _L267;
  kcg_bool /* _L268/ */ _L268;
  kcg_bool /* _L269/ */ _L269;
  kcg_bool /* _L270/ */ _L270;
  kcg_bool /* _L287/ */ _L287;
  kcg_bool /* _L286/ */ _L286;
  kcg_bool /* _L285/ */ _L285;
  kcg_bool /* _L280/ */ _L280;
  kcg_bool /* _L277/ */ _L277;
  kcg_bool /* _L275/ */ _L275;
  kcg_bool /* _L294/ */ _L294;
  T_Mode_Level_And_Mode_Types_Pkg /* _L295/ */ _L295;
  kcg_bool /* _L296/ */ _L296;
  kcg_bool /* _L297/ */ _L297;
  kcg_bool /* _L298/ */ _L298;
  kcg_bool /* _L299/ */ _L299;
  kcg_bool /* _L300/ */ _L300;
  kcg_bool /* _L301/ */ _L301;
  kcg_bool /* _L302/ */ _L302;
  kcg_bool /* _L303/ */ _L303;
  kcg_bool /* _L304/ */ _L304;
  kcg_bool /* _L305/ */ _L305;
  kcg_bool /* _L306/ */ _L306;
  kcg_bool /* _L309/ */ _L309;
  kcg_bool /* _L312/ */ _L312;
  kcg_bool /* _L315/ */ _L315;
  kcg_bool /* _L317/ */ _L317;
  kcg_bool /* _L318/ */ _L318;
  kcg_bool /* _L319/ */ _L319;
  kcg_bool /* _L324/ */ _L324;
  kcg_bool /* _L326/ */ _L326;
  kcg_bool /* _L327/ */ _L327;
  kcg_bool /* _L328/ */ _L328;
  trainPosition_T_TrainPosition_Types_Pck /* _L329/ */ _L329;
  trainPosition_T_TrainPosition_Types_Pck /* _L330/ */ _L330;
  trainPosition_T_TrainPosition_Types_Pck /* _L331/ */ _L331;
  kcg_bool /* _L333/ */ _L333;
  M_LEVEL /* _L334/ */ _L334;
  T_Mode_Level_And_Mode_Types_Pkg /* _L335/ */ _L335;
  kcg_bool /* _L336/ */ _L336;
  kcg_bool /* _L337/ */ _L337;
  kcg_bool /* _L338/ */ _L338;
  kcg_bool /* _L339/ */ _L339;
  kcg_bool /* _L340/ */ _L340;
  kcg_bool /* _L341/ */ _L341;
  kcg_bool /* _L342/ */ _L342;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* _L343/ */ _L343;
  kcg_bool /* _L344/ */ _L344;
  kcg_bool /* _L345/ */ _L345;
  kcg_bool /* _L346/ */ _L346;
  kcg_bool /* _L347/ */ _L347;
  kcg_bool /* _L348/ */ _L348;
  kcg_bool /* _L349/ */ _L349;
  kcg_bool /* _L350/ */ _L350;
  M_LEVEL /* _L351/ */ _L351;
  kcg_bool /* _L352/ */ _L352;
  kcg_bool /* _L353/ */ _L353;
  kcg_bool /* _L354/ */ _L354;
  kcg_bool /* _L355/ */ _L355;
  kcg_bool /* _L356/ */ _L356;
  kcg_bool /* _L357/ */ _L357;
  kcg_bool /* _L358/ */ _L358;
  kcg_bool /* _L359/ */ _L359;
  kcg_bool /* _L360/ */ _L360;
  kcg_bool /* _L362/ */ _L362;
  kcg_bool /* _L361/ */ _L361;
  T_Mode_Level_And_Mode_Types_Pkg /* _L363/ */ _L363;
  trainPosition_T_TrainPosition_Types_Pck /* _L364/ */ _L364;
  T_Reversing_Data_Level_And_Mode_Types_Pkg /* _L365/ */ _L365;
  M_LEVEL /* _L176/ */ _L176;
  T_Mode_Level_And_Mode_Types_Pkg /* _L366/ */ _L366;
  kcg_bool /* _L367/ */ _L367;
  kcg_bool /* _L372/ */ _L372;
  kcg_bool /* _L380/ */ _L380;
  kcg_bool /* _L381/ */ _L381;
  kcg_bool /* _L386/ */ _L386;
  kcg_bool /* _L387/ */ _L387;
  kcg_bool /* _L388/ */ _L388;
  kcg_bool /* _L390/ */ _L390;
  kcg_bool /* _L391/ */ _L391;
  kcg_bool /* _L392/ */ _L392;
  kcg_bool /* _L393/ */ _L393;
  kcg_bool /* _L394/ */ _L394;
  kcg_bool /* _L395/ */ _L395;
  kcg_bool /* _L400/ */ _L400;
  kcg_bool /* _L401/ */ _L401;
  kcg_bool /* _L402/ */ _L402;
  kcg_bool /* _L403/ */ _L403;
  kcg_bool /* _L404/ */ _L404;
  kcg_bool /* _L405/ */ _L405;
  kcg_bool /* _L406/ */ _L406;
  kcg_bool /* _L407/ */ _L407;
  kcg_bool /* _L408/ */ _L408;
  kcg_bool /* _L411/ */ _L411;
  kcg_bool /* _L412/ */ _L412;
  kcg_bool /* _L413/ */ _L413;
  kcg_bool /* _L414/ */ _L414;
  kcg_bool /* _L415/ */ _L415;
  kcg_bool /* _L416/ */ _L416;
  kcg_bool /* _L417/ */ _L417;
  kcg_bool /* _L418/ */ _L418;
  kcg_bool /* _L426/ */ _L426;
  kcg_bool /* _L427/ */ _L427;
  kcg_bool /* _L428/ */ _L428;
  kcg_bool /* _L429/ */ _L429;
  kcg_bool /* _L430/ */ _L430;
  kcg_bool /* _L431/ */ _L431;
  kcg_bool /* _L432/ */ _L432;
  kcg_bool /* _L433/ */ _L433;
  kcg_bool /* _L434/ */ _L434;
  kcg_bool /* _L435/ */ _L435;
  kcg_bool /* _L436/ */ _L436;
  kcg_bool /* _L437/ */ _L437;
  kcg_bool /* _L438/ */ _L438;
  kcg_bool /* _L439/ */ _L439;
  kcg_bool /* _L440/ */ _L440;
  kcg_bool /* _L441/ */ _L441;
  kcg_bool /* _L442/ */ _L442;
  kcg_bool /* _L443/ */ _L443;
  kcg_bool /* _L444/ */ _L444;
  kcg_bool /* _L446/ */ _L446;
  kcg_bool /* _L447/ */ _L447;
  kcg_bool /* _L465/ */ _L465;
  kcg_bool /* _L464/ */ _L464;
  kcg_bool /* _L463/ */ _L463;
  kcg_bool /* _L462/ */ _L462;
  kcg_bool /* _L461/ */ _L461;
  kcg_bool /* _L460/ */ _L460;
  kcg_bool /* _L459/ */ _L459;
  kcg_bool /* _L458/ */ _L458;
  kcg_bool /* _L457/ */ _L457;
  kcg_bool /* _L456/ */ _L456;
  kcg_bool /* _L455/ */ _L455;
  kcg_bool /* _L454/ */ _L454;
  kcg_bool /* _L453/ */ _L453;
  kcg_bool /* _L452/ */ _L452;
  kcg_bool /* _L451/ */ _L451;
  kcg_bool /* _L450/ */ _L450;
  kcg_bool /* _L449/ */ _L449;
  kcg_bool /* _L448/ */ _L448;
  kcg_bool /* _L484/ */ _L484;
  kcg_bool /* _L485/ */ _L485;
  kcg_bool /* _L486/ */ _L486;
  kcg_bool /* _L487/ */ _L487;
  kcg_bool /* _L488/ */ _L488;
  kcg_bool /* _L489/ */ _L489;
  kcg_bool /* _L490/ */ _L490;
  kcg_bool /* _L494/ */ _L494;
  kcg_bool /* _L495/ */ _L495;
  kcg_bool /* _L496/ */ _L496;
  kcg_bool /* _L497/ */ _L497;
} outC_ComputeModesConditions;

/* ===========  node initialization and cycle functions  =========== */
/* ComputeModesConditions/ */
extern void ComputeModesConditions(
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
  outC_ComputeModesConditions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ComputeModesConditions_reset(outC_ComputeModesConditions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ComputeModesConditions_init(outC_ComputeModesConditions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ComputeModesConditions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ComputeModesConditions.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

