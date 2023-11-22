/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _Procedure_TRIP_EVC_MEM_Support_Pkg_H_
#define _Procedure_TRIP_EVC_MEM_Support_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* outEB/ */ outEB;
  kcg_bool /* TIU_driverWindow/ */ TIU_driverWindow;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_Revoke_Procedure /* Revoke_Procedure: */ Revoke_Procedure_state_nxt;
  kcg_bool /* Revoke_Procedure: */ Revoke_Procedure_reset_act;
  kcg_bool /* Revoke_Procedure: */ Revoke_Procedure_reset_nxt;
  kcg_bool /* revokeEB/ */ revokeEB;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_Revoke_Procedure /* Revoke_Procedure: */ Revoke_Procedure_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Revoke_Procedure:waitingDriverRevoke:_L1/ */ _L1_waitingDriverRevoke_Revoke_Procedure;
  kcg_bool /* Revoke_Procedure:waitingModeChange:_L1/ */ _L1_waitingModeChange_Revoke_Procedure;
  SSM_ST_Revoke_Procedure /* Revoke_Procedure: */ Revoke_Procedure_state_sel;
  SSM_TR_Revoke_Procedure /* Revoke_Procedure: */ Revoke_Procedure_fired_strong;
  SSM_TR_Revoke_Procedure /* Revoke_Procedure: */ Revoke_Procedure_fired;
  kcg_bool /* msg18/ */ msg18;
  kcg_bool /* isPostTrip/ */ isPostTrip;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L13/ */ _L13;
  ReceivedMessage_T_Common_Types_Pkg /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L20/ */ _L20;
  NID_MESSAGE /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  NID_MESSAGE /* _L24/ */ _L24;
  M_MODE /* _L28/ */ _L28;
  kcg_bool /* _L27/ */ _L27;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L26/ */ _L26;
  M_MODE /* _L29/ */ _L29;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  kcg_bool /* _L37/ */ _L37;
} outC_Procedure_TRIP_EVC_MEM_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_MEM_Support_Pkg::Procedure_TRIP/ */
extern void Procedure_TRIP_EVC_MEM_Support_Pkg(
  /* inModeAndLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* inEBFromML/ */
  kcg_bool inEBFromML,
  /* inTrackMsg/ */
  ReceivedMessage_T_Common_Types_Pkg *inTrackMsg,
  /* inDriverResponse/ */
  kcg_bool inDriverResponse,
  outC_Procedure_TRIP_EVC_MEM_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Procedure_TRIP_reset_EVC_MEM_Support_Pkg(
  outC_Procedure_TRIP_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Procedure_TRIP_init_EVC_MEM_Support_Pkg(
  outC_Procedure_TRIP_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Procedure_TRIP_EVC_MEM_Support_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_TRIP_EVC_MEM_Support_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

