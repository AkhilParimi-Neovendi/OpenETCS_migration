/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _InputDMI_InputManagement_H_
#define _InputDMI_InputManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_LevelTransition_Level_And_Mode_Types_Pkg /* driver_level_transition/ */ driver_level_transition;
  kcg_bool /* Level_Ack/ */ Level_Ack;
  T_Data_From_DMI_Level_And_Mode_Types_Pkg /* Data_From_DMI_To_Mode/ */ Data_From_DMI_To_Mode;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Loc_DMI_Req_Valid/ */ Loc_DMI_Req_Valid;
  kcg_bool /* Loc_DMI_Msg_Valid/ */ Loc_DMI_Msg_Valid;
  M_MODE /* Loc_Acked_Mode/ */ Loc_Acked_Mode;
  kcg_bool /* Loc_Ack_Mode_Valid/ */ Loc_Ack_Mode_Valid;
  kcg_bool /* Loc_Driver_Ack_LS/ */ Loc_Driver_Ack_LS;
  kcg_bool /* Loc_Driver_Ack_OS/ */ Loc_Driver_Ack_OS;
  kcg_bool /* Loc_Driver_Ack_RV/ */ Loc_Driver_Ack_RV;
  kcg_bool /* Loc_Driver_Ack_SH/ */ Loc_Driver_Ack_SH;
  kcg_bool /* Loc_Driver_Ack_SN/ */ Loc_Driver_Ack_SN;
  kcg_bool /* Loc_Driver_Ack_SR/ */ Loc_Driver_Ack_SR;
  kcg_bool /* Loc_Driver_Ack_TR/ */ Loc_Driver_Ack_TR;
  kcg_bool /* Loc_Driver_Ack_UN/ */ Loc_Driver_Ack_UN;
  kcg_bool /* Loc_Driver_Req_Exit_SH/ */ Loc_Driver_Req_Exit_SH;
  kcg_bool /* Loc_Driver_Req_NL/ */ Loc_Driver_Req_NL;
  kcg_bool /* Loc_Driver_Req_Override/ */ Loc_Driver_Req_Override;
  kcg_bool /* Loc_Driver_Req_SH/ */ Loc_Driver_Req_SH;
  kcg_bool /* Loc_Driver_Req_Start/ */ Loc_Driver_Req_Start;
  kcg_bool /* Loc_ETCS_Isolated/ */ Loc_ETCS_Isolated;
  DMI_To_Modes_T_DMI_Types_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L61/ */ _L61;
  DMI_DriverAck_T_DMI_Types_Pkg /* _L60/ */ _L60;
  DMI_DriverRequest_T_DMI_Types_Pkg /* _L59/ */ _L59;
  kcg_bool /* _L58/ */ _L58;
  kcg_bool /* _L64/ */ _L64;
  M_MODE /* _L63/ */ _L63;
  kcg_bool /* _L62/ */ _L62;
  kcg_bool /* _L71/ */ _L71;
  kcg_bool /* _L70/ */ _L70;
  kcg_bool /* _L69/ */ _L69;
  kcg_bool /* _L68/ */ _L68;
  kcg_bool /* _L67/ */ _L67;
  kcg_bool /* _L66/ */ _L66;
  kcg_bool /* _L65/ */ _L65;
  kcg_bool /* _L77/ */ _L77;
  kcg_bool /* _L76/ */ _L76;
  kcg_bool /* _L75/ */ _L75;
  kcg_bool /* _L74/ */ _L74;
  kcg_bool /* _L73/ */ _L73;
  kcg_bool /* _L72/ */ _L72;
  kcg_bool /* _L78/ */ _L78;
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
  kcg_bool /* _L91/ */ _L91;
  kcg_bool /* _L92/ */ _L92;
  kcg_bool /* _L98/ */ _L98;
  kcg_bool /* _L97/ */ _L97;
  kcg_bool /* _L96/ */ _L96;
  kcg_bool /* _L101/ */ _L101;
  kcg_bool /* _L100/ */ _L100;
  kcg_bool /* _L99/ */ _L99;
  kcg_bool /* _L104/ */ _L104;
  kcg_bool /* _L103/ */ _L103;
  kcg_bool /* _L102/ */ _L102;
  kcg_bool /* _L107/ */ _L107;
  kcg_bool /* _L106/ */ _L106;
  kcg_bool /* _L105/ */ _L105;
  kcg_bool /* _L110/ */ _L110;
  kcg_bool /* _L109/ */ _L109;
  kcg_bool /* _L108/ */ _L108;
  kcg_bool /* _L113/ */ _L113;
  kcg_bool /* _L112/ */ _L112;
  kcg_bool /* _L111/ */ _L111;
  kcg_bool /* _L116/ */ _L116;
  kcg_bool /* _L115/ */ _L115;
  kcg_bool /* _L114/ */ _L114;
  kcg_bool /* _L117/ */ _L117;
  kcg_bool /* _L118/ */ _L118;
  T_Data_From_DMI_Level_And_Mode_Types_Pkg /* _L119/ */ _L119;
  kcg_bool /* _L120/ */ _L120;
  kcg_bool /* _L121/ */ _L121;
  kcg_bool /* _L122/ */ _L122;
  kcg_bool /* _L123/ */ _L123;
  kcg_bool /* _L124/ */ _L124;
  kcg_bool /* _L125/ */ _L125;
  kcg_bool /* _L126/ */ _L126;
  kcg_bool /* _L127/ */ _L127;
  kcg_bool /* _L128/ */ _L128;
  kcg_bool /* _L129/ */ _L129;
  kcg_bool /* _L130/ */ _L130;
  kcg_bool /* _L131/ */ _L131;
  kcg_bool /* _L132/ */ _L132;
  kcg_bool /* _L133/ */ _L133;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L134/ */ _L134;
} outC_InputDMI_InputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* InputManagement::InputDMI/ */
extern void InputDMI_InputManagement(
  /* Data_From_DMI/ */
  DMI_To_Modes_T_DMI_Types_Pkg *Data_From_DMI,
  /* driver_level_transition1/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition1,
  outC_InputDMI_InputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InputDMI_reset_InputManagement(outC_InputDMI_InputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InputDMI_init_InputManagement(outC_InputDMI_InputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _InputDMI_InputManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputDMI_InputManagement.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

