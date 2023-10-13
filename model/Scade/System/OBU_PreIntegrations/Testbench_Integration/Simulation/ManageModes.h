/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _ManageModes_H_
#define _ManageModes_H_

#include "kcg_types.h"
#include "InputF2Functions_Interfaces.h"
#include "InputSTM_Interfaces.h"
#include "InputDMI_Interfaces.h"
#include "InputLocalisation_Interfaces.h"
#include "OutputManagement_Interfaces.h"
#include "InputSpeedAndSupervision_Interfaces.h"
#include "InputTrackManagement_Interfaces.h"
#include "InputTIUManagement_Interfaces.h"
#include "SwitchModes.h"
#include "ComputeModesConditions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* currentMode/ */ currentMode;
  kcg_bool /* EB_Requested/ */ EB_Requested;
  kcg_bool /* Service_Brake_Command/ */ Service_Brake_Command;
  T_Data_To_DMI_Level_And_Mode_Types_Pkg /* Data_To_DMI/ */ Data_To_DMI;
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg /* Data_To_BG_Management/ */ Data_To_BG_Management;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_OutputManagement_Interfaces /* _L291=(Interfaces::OutputManagement#1)/ */ Context_OutputManagement_1;
  outC_SwitchModes /* _L1=(SwitchModes#1)/ */ Context_SwitchModes_1;
  outC_ComputeModesConditions /* _L55=(ComputeModesConditions#1)/ */ Context_ComputeModesConditions_1;
  outC_InputSpeedAndSupervision_Interfaces /* _L226=(Interfaces::InputSpeedAndSupervision#1)/ */ Context_InputSpeedAndSupervision_1;
  outC_InputTrackManagement_Interfaces /* _L210=(Interfaces::InputTrackManagement#1)/ */ Context_InputTrackManagement_1;
  outC_InputTIUManagement_Interfaces /* _L177=(Interfaces::InputTIUManagement#1)/ */ Context_InputTIUManagement_1;
  outC_InputLocalisation_Interfaces /* _L256=(Interfaces::InputLocalisation#1)/ */ Context_InputLocalisation_1;
  outC_InputDMI_Interfaces /* _L277=(Interfaces::InputDMI)/ */ Context_InputDMI;
  outC_InputSTM_Interfaces /* _L296=(Interfaces::InputSTM#1)/ */ Context_InputSTM_1;
  outC_InputF2Functions_Interfaces /* _L301=(Interfaces::InputF2Functions#1)/ */ Context_InputF2Functions_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  kcg_bool /* _L37/ */ _L37;
  kcg_bool /* _L38/ */ _L38;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L41/ */ _L41;
  kcg_bool /* _L42/ */ _L42;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
  kcg_bool /* _L46/ */ _L46;
  kcg_bool /* _L47/ */ _L47;
  kcg_bool /* _L48/ */ _L48;
  kcg_bool /* _L49/ */ _L49;
  kcg_bool /* _L50/ */ _L50;
  kcg_bool /* _L51/ */ _L51;
  kcg_bool /* _L52/ */ _L52;
  kcg_bool /* _L53/ */ _L53;
  kcg_bool /* _L54/ */ _L54;
  kcg_bool /* _L55/ */ _L55;
  kcg_bool /* _L56/ */ _L56;
  kcg_bool /* _L57/ */ _L57;
  kcg_bool /* _L58/ */ _L58;
  kcg_bool /* _L59/ */ _L59;
  kcg_bool /* _L60/ */ _L60;
  kcg_bool /* _L61/ */ _L61;
  kcg_bool /* _L62/ */ _L62;
  kcg_bool /* _L63/ */ _L63;
  kcg_bool /* _L64/ */ _L64;
  kcg_bool /* _L65/ */ _L65;
  M_LEVEL /* _L83/ */ _L83;
  kcg_bool /* _L153/ */ _L153;
  kcg_bool /* _L154/ */ _L154;
  kcg_bool /* _L155/ */ _L155;
  kcg_bool /* _L156/ */ _L156;
  T_Mode_Level_And_Mode_Types_Pkg /* _L157/ */ _L157;
  kcg_bool /* _L161/ */ _L161;
  kcg_bool /* _L162/ */ _L162;
  kcg_bool /* _L163/ */ _L163;
  kcg_bool /* _L164/ */ _L164;
  kcg_bool /* _L169/ */ _L169;
  kcg_bool /* _L170/ */ _L170;
  kcg_bool /* _L173/ */ _L173;
  kcg_bool /* _L174/ */ _L174;
  kcg_bool /* _L175/ */ _L175;
  kcg_bool /* _L177/ */ _L177;
  kcg_bool /* _L179/ */ _L179;
  kcg_bool /* _L180/ */ _L180;
  kcg_bool /* _L181/ */ _L181;
  kcg_bool /* _L182/ */ _L182;
  kcg_bool /* _L183/ */ _L183;
  kcg_bool /* _L184/ */ _L184;
  kcg_bool /* _L185/ */ _L185;
  T_Data_From_DMI_Level_And_Mode_Types_Pkg /* _L190/ */ _L190;
  cab_ID_T_TIU_Types_Pkg /* _L205/ */ _L205;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* _L206/ */ _L206;
  kcg_bool /* _L210/ */ _L210;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* _L212/ */ _L212;
  kcg_bool /* _L213/ */ _L213;
  kcg_bool /* _L214/ */ _L214;
  kcg_bool /* _L215/ */ _L215;
  kcg_bool /* _L216/ */ _L216;
  kcg_bool /* _L217/ */ _L217;
  T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg /* _L220/ */ _L220;
  kcg_bool /* _L221/ */ _L221;
  kcg_bool /* _L222/ */ _L222;
  T_Reversing_Data_Level_And_Mode_Types_Pkg /* _L223/ */ _L223;
  kcg_bool /* _L235/ */ _L235;
  kcg_bool /* _L231/ */ _L231;
  kcg_bool /* _L229/ */ _L229;
  kcg_bool /* _L227/ */ _L227;
  kcg_bool /* _L226/ */ _L226;
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg /* _L237/ */ _L237;
  T_Mode_Level_And_Mode_Types_Pkg /* _L253/ */ _L253;
  kcg_bool /* _L252/ */ _L252;
  kcg_bool /* _L251/ */ _L251;
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg /* _L250/ */ _L250;
  kcg_bool /* _L254/ */ _L254;
  kcg_bool /* _L261/ */ _L261;
  Speed_T_Obu_BasicTypes_Pkg /* _L260/ */ _L260;
  trainPosition_T_TrainPosition_Types_Pck /* _L259/ */ _L259;
  kcg_bool /* _L258/ */ _L258;
  kcg_bool /* _L257/ */ _L257;
  kcg_bool /* _L256/ */ _L256;
  kcg_bool /* _L232/ */ _L232;
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg /* _L262/ */ _L262;
  kcg_bool /* _L277/ */ _L277;
  kcg_bool /* _L278/ */ _L278;
  kcg_bool /* _L279/ */ _L279;
  kcg_bool /* _L280/ */ _L280;
  kcg_bool /* _L281/ */ _L281;
  kcg_bool /* _L282/ */ _L282;
  kcg_bool /* _L283/ */ _L283;
  kcg_bool /* _L284/ */ _L284;
  kcg_bool /* _L285/ */ _L285;
  kcg_bool /* _L286/ */ _L286;
  kcg_bool /* _L287/ */ _L287;
  kcg_bool /* _L288/ */ _L288;
  kcg_bool /* _L289/ */ _L289;
  kcg_bool /* _L290/ */ _L290;
  T_Data_To_DMI_Level_And_Mode_Types_Pkg /* _L291/ */ _L291;
  kcg_bool /* _L292/ */ _L292;
  kcg_bool /* _L293/ */ _L293;
  T_Data_From_STM_Level_And_Mode_Types_Pkg /* _L294/ */ _L294;
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg /* _L295/ */ _L295;
  kcg_bool /* _L296/ */ _L296;
  kcg_bool /* _L297/ */ _L297;
  kcg_bool /* _L298/ */ _L298;
  kcg_bool /* _L299/ */ _L299;
  kcg_bool /* _L300/ */ _L300;
  kcg_bool /* _L301/ */ _L301;
  kcg_bool /* _L302/ */ _L302;
  kcg_bool /* _L303/ */ _L303;
  kcg_bool /* _L304/ */ _L304;
} outC_ManageModes;

/* ===========  node initialization and cycle functions  =========== */
/* ManageModes/ */
extern void ManageModes(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Cab/ */
  cab_ID_T_TIU_Types_Pkg Cab,
  /* Data_From_DMI/ */
  T_Data_From_DMI_Level_And_Mode_Types_Pkg *Data_From_DMI,
  /* Data_From_F2_Functions/ */
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions,
  /* Data_From_Localisation/ */
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* Data_From_Speed_and_Supervision/ */
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* Data_From_STM/ */
  T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM,
  /* Data_From_TIU/ */
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU,
  /* Data_From_Track/ */
  T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *Data_From_Track,
  /* TripModeFromLevel/ */
  kcg_bool TripModeFromLevel,
  outC_ManageModes *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ManageModes_reset(outC_ManageModes *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ManageModes_init(outC_ManageModes *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* currentMode/ */ Context_currentMode;
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_ComputeModesConditions Context_ComputeModesConditions_1;
  SV_SwitchModes Context_SwitchModes_1;
} SV_ManageModes;

extern void kcg_save_SV_ManageModes(SV_ManageModes *SV, outC_ManageModes *outC);
extern void kcg_load_SV_ManageModes(outC_ManageModes *outC, SV_ManageModes *SV);



#endif /* _ManageModes_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ManageModes.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

