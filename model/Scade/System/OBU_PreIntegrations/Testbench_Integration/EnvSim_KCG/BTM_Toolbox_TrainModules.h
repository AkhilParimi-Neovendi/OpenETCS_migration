/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _BTM_Toolbox_TrainModules_H_
#define _BTM_Toolbox_TrainModules_H_

#include "kcg_types.h"
#include "ODO_doLocInacc_Toolbox_Functions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* TrackMessage/ */ TrackMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ODO_doLocInacc_Toolbox_Functions /* _L33=(Toolbox::Functions::ODO_doLocInacc#1)/ */ Context_ODO_doLocInacc_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* _L4/ */ _L4;
  API_TelegramHeader_T_API_Msg_Pkg /* _L5/ */ _L5;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  odometry_T_Obu_BasicTypes_Pkg /* _L18/ */ _L18;
  centerOfBalisePosition_T_BG_Types_Pkg /* _L20/ */ _L20;
  NID_C /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_int64 /* _L24/ */ _L24;
  MsgSource_T_Common_Types_Pkg /* _L25/ */ _L25;
  MsgSource_T_Common_Types_Pkg /* _L26/ */ _L26;
  MsgSource_T_Common_Types_Pkg /* _L27/ */ _L27;
  TelegramHeader_T_BG_Types_Pkg /* _L28/ */ _L28;
  TelegramHeader_T_BG_Types_Pkg /* _L29/ */ _L29;
  CompressedPackets_T_Common_Types_Pkg /* _L30/ */ _L30;
  API_RadioMsgHeader_T_API_Msg_Pkg /* _L32/ */ _L32;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L33/ */ _L33;
  kcg_int64 /* _L34/ */ _L34;
  kcg_int64 /* _L35/ */ _L35;
} outC_BTM_Toolbox_TrainModules;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::TrainModules::BTM/ */
extern void BTM_Toolbox_TrainModules(
  /* systemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* Packets/ */
  CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TelegramHeader/ */
  TelegramHeader_T_BG_Types_Pkg *TelegramHeader,
  outC_BTM_Toolbox_TrainModules *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BTM_reset_Toolbox_TrainModules(outC_BTM_Toolbox_TrainModules *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BTM_init_Toolbox_TrainModules(outC_BTM_Toolbox_TrainModules *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _BTM_Toolbox_TrainModules_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BTM_Toolbox_TrainModules.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

