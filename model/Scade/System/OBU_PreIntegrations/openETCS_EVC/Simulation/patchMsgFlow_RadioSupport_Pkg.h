/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _patchMsgFlow_RadioSupport_Pkg_H_
#define _patchMsgFlow_RadioSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_Message_T_TM_radio_messages /* toRBC/ */ toRBC;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* reset136/ */ reset136;
  kcg_bool /* reset132/ */ reset132;
  M_TrainTrack_Message_T_TM_radio_messages /* _L1/ */ _L1;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L12/ */ _L12;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  M_LEVEL /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  M_LEVEL /* _L5/ */ _L5;
  M_LEVEL /* _L4/ */ _L4;
  kcg_int32 /* _L13/ */ _L13;
  NID_MESSAGE /* _L14/ */ _L14;
  NID_MESSAGE /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  M_TrainTrack_Message_T_TM_radio_messages /* _L19/ */ _L19;
  kcg_int32 /* _L28/ */ _L28;
  M_TrainTrack_Message_T_TM_radio_messages /* _L27/ */ _L27;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L25/ */ _L25;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L22/ */ _L22;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
  M_TrainTrack_Message_T_TM_radio_messages /* _L34/ */ _L34;
  M_TrainTrack_Message_T_TM_radio_messages /* _L35/ */ _L35;
} outC_patchMsgFlow_RadioSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RadioSupport_Pkg::patchMsgFlow/ */
extern void patchMsgFlow_RadioSupport_Pkg(
  /* fromEVC/ */
  M_TrainTrack_Message_T_TM_radio_messages *fromEVC,
  /* insafeSessionEstablished/ */
  kcg_bool insafeSessionEstablished,
  /* inModeAndLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  outC_patchMsgFlow_RadioSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void patchMsgFlow_reset_RadioSupport_Pkg(
  outC_patchMsgFlow_RadioSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void patchMsgFlow_init_RadioSupport_Pkg(
  outC_patchMsgFlow_RadioSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _patchMsgFlow_RadioSupport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** patchMsgFlow_RadioSupport_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

