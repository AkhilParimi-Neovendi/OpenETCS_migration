/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _CalcBrakeCmd_SDM_Commands_Pkg_H_
#define _CalcBrakeCmd_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Brake_command_T_TIU_Types_Pkg /* brakeCmd/ */ brakeCmd;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* trigEB/ */ trigEB;
  kcg_bool /* trigSB/ */ trigSB;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* NoSBinTSM/ */ NoSBinTSM;
  kcg_bool /* RevokeEBBeforeStandStill/ */ RevokeEBBeforeStandStill;
  kcg_bool /* TSM/ */ TSM;
  kcg_bool /* SB2EB/ */ SB2EB;
  kcg_bool /* SB2SB/ */ SB2SB;
  kcg_bool /* revSB/ */ revSB;
  kcg_bool /* revEB/ */ revEB;
  SDM_Commands_T_SDM_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  SDM_Types_T_SDM_Types_Pkg /* _L7/ */ _L7;
  P3_NationalValues_T_Packet_Types_Pkg /* _L8/ */ _L8;
  Speeds_T_SDM_Types_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  Q_NVEMRRLS /* _L14/ */ _L14;
  trainData_internal_t_SDM_Types_Pkg /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  Q_NVSBTSMPERM /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  Q_NVEMRRLS /* _L19/ */ _L19;
  Q_NVSBTSMPERM /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  SDM_Types_T_SDM_Types_Pkg /* _L29/ */ _L29;
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
  kcg_bool /* _L66/ */ _L66;
  kcg_bool /* _L65/ */ _L65;
  kcg_bool /* _L64/ */ _L64;
  Brake_command_T_TIU_Types_Pkg /* _L63/ */ _L63;
  kcg_bool /* _L61/ */ _L61;
  kcg_bool /* _L57/ */ _L57;
  kcg_bool /* _L56/ */ _L56;
  kcg_bool /* _L55/ */ _L55;
  kcg_bool /* _L54/ */ _L54;
  kcg_bool /* _L53/ */ _L53;
  kcg_bool /* _L69/ */ _L69;
  kcg_bool /* _L70/ */ _L70;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L71/ */ _L71;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L73/ */ _L73;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L74/ */ _L74;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L75/ */ _L75;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L77/ */ _L77;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L82/ */ _L82;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L81/ */ _L81;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L80/ */ _L80;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L79/ */ _L79;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L78/ */ _L78;
} outC_CalcBrakeCmd_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::CalcBrakeCmd/ */
extern void CalcBrakeCmd_SDM_Commands_Pkg(
  /* in_sdmCmd/ */
  SDM_Commands_T_SDM_Types_Pkg *in_sdmCmd,
  /* speeds/ */
  Speeds_T_SDM_Types_Pkg *speeds,
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* TrainData_int/ */
  trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  outC_CalcBrakeCmd_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalcBrakeCmd_reset_SDM_Commands_Pkg(
  outC_CalcBrakeCmd_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalcBrakeCmd_init_SDM_Commands_Pkg(
  outC_CalcBrakeCmd_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* trigSB/ */ Context_trigSB;
  kcg_bool /* trigEB/ */ Context_trigEB;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_CalcBrakeCmd_SDM_Commands_Pkg;

extern void kcg_save_SV_CalcBrakeCmd_SDM_Commands_Pkg(
  SV_CalcBrakeCmd_SDM_Commands_Pkg *SV,
  outC_CalcBrakeCmd_SDM_Commands_Pkg *outC);
extern void kcg_load_SV_CalcBrakeCmd_SDM_Commands_Pkg(
  outC_CalcBrakeCmd_SDM_Commands_Pkg *outC,
  SV_CalcBrakeCmd_SDM_Commands_Pkg *SV);



#endif /* _CalcBrakeCmd_SDM_Commands_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcBrakeCmd_SDM_Commands_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

