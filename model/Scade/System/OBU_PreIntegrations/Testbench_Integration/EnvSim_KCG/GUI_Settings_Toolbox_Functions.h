/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _GUI_Settings_Toolbox_Functions_H_
#define _GUI_Settings_Toolbox_Functions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_MODE /* modeOut/ */ modeOut;
  M_LEVEL /* levelOut/ */ levelOut;
  mobileHWStatus_Type_MoRC_Pck /* mobileHWStatusOut/ */ mobileHWStatusOut;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg /* directionOut/ */ directionOut;
  M_cab_signal_status_T_TIU_Types_Pkg /* cabStatusOut/ */ cabStatusOut;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* apiConnectionStatus/ */ apiConnectionStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_MODE /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  M_MODE /* _L3/ */ _L3;
  M_MODE /* _L4/ */ _L4;
  M_MODE /* _L5/ */ _L5;
  M_MODE /* _L6/ */ _L6;
  M_MODE /* _L7/ */ _L7;
  M_MODE /* _L8/ */ _L8;
  M_MODE /* _L9/ */ _L9;
  M_LEVEL /* _L10/ */ _L10;
  kcg_int64 /* _L11/ */ _L11;
  M_LEVEL /* _L12/ */ _L12;
  M_LEVEL /* _L13/ */ _L13;
  M_LEVEL /* _L14/ */ _L14;
  M_LEVEL /* _L15/ */ _L15;
  M_LEVEL /* _L16/ */ _L16;
  M_LEVEL /* _L17/ */ _L17;
  mobileHWStatus_Type_MoRC_Pck /* _L18/ */ _L18;
  kcg_int64 /* _L19/ */ _L19;
  mobileHWStatus_Type_MoRC_Pck /* _L20/ */ _L20;
  mobileHWStatus_Type_MoRC_Pck /* _L21/ */ _L21;
  mobileHWStatus_Type_MoRC_Pck /* _L22/ */ _L22;
  mobileHWStatus_Type_MoRC_Pck /* _L23/ */ _L23;
  mobileHWStatus_Type_MoRC_Pck /* _L24/ */ _L24;
  kcg_int64 /* _L25/ */ _L25;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg /* _L26/ */ _L26;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg /* _L27/ */ _L27;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg /* _L28/ */ _L28;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg /* _L29/ */ _L29;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  M_cab_signal_status_T_TIU_Types_Pkg /* _L39/ */ _L39;
  M_cab_signal_status_T_TIU_Types_Pkg /* _L40/ */ _L40;
  M_cab_signal_status_T_TIU_Types_Pkg /* _L41/ */ _L41;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* _L55/ */ _L55;
  kcg_int64 /* _L54/ */ _L54;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* _L53/ */ _L53;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* _L51/ */ _L51;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* _L50/ */ _L50;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* _L49/ */ _L49;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* _L57/ */ _L57;
} outC_GUI_Settings_Toolbox_Functions;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::GUI_Settings/ */
extern void GUI_Settings_Toolbox_Functions(
  /* mode/ */
  kcg_int64 mode,
  /* level/ */
  kcg_int64 level,
  /* mobileHWStatus/ */
  kcg_int64 mobileHWStatus,
  /* directionIn/ */
  kcg_int64 directionIn,
  /* cabStatusIin/ */
  kcg_bool cabStatusIin,
  outC_GUI_Settings_Toolbox_Functions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GUI_Settings_reset_Toolbox_Functions(
  outC_GUI_Settings_Toolbox_Functions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GUI_Settings_init_Toolbox_Functions(
  outC_GUI_Settings_Toolbox_Functions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _GUI_Settings_Toolbox_Functions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GUI_Settings_Toolbox_Functions.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

