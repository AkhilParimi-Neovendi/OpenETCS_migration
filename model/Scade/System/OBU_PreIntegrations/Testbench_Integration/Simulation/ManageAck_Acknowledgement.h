/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _ManageAck_Acknowledgement_H_
#define _ManageAck_Acknowledgement_H_

#include "kcg_types.h"
#include "RequestAck_Acknowledgement.h"
#include "IsAckNeeded_Acknowledgement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* needsAckFromDriver/ */ needsAckFromDriver;
  kcg_bool /* service_brake/ */ service_brake;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RequestAck_Acknowledgement /* _L7=(Acknowledgement::RequestAck#1)/ */ Context_RequestAck_1;
  outC_IsAckNeeded_Acknowledgement /* _L3=(Acknowledgement::IsAckNeeded#1)/ */ Context_IsAckNeeded_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L3/ */ _L3;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L4/ */ _L4;
  M_LEVEL /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L8/ */ _L8;
  trainPosition_T_TrainPosition_Types_Pck /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
} outC_ManageAck_Acknowledgement;

/* ===========  node initialization and cycle functions  =========== */
/* Acknowledgement::ManageAck/ */
extern void ManageAck_Acknowledgement(
  /* selected_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* last_level/ */
  M_LEVEL last_level,
  /* levelAck/ */
  kcg_bool levelAck,
  /* IsNewLevel/ */
  kcg_bool IsNewLevel,
  outC_ManageAck_Acknowledgement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ManageAck_reset_Acknowledgement(
  outC_ManageAck_Acknowledgement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ManageAck_init_Acknowledgement(
  outC_ManageAck_Acknowledgement *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_RequestAck_Acknowledgement Context_RequestAck_1;
} SV_ManageAck_Acknowledgement;

extern void kcg_save_SV_ManageAck_Acknowledgement(
  SV_ManageAck_Acknowledgement *SV,
  outC_ManageAck_Acknowledgement *outC);
extern void kcg_load_SV_ManageAck_Acknowledgement(
  outC_ManageAck_Acknowledgement *outC,
  SV_ManageAck_Acknowledgement *SV);



#endif /* _ManageAck_Acknowledgement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ManageAck_Acknowledgement.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

