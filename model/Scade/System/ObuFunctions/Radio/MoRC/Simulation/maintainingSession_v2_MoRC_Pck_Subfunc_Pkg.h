/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/ObuFunctions/Radio/MoRC/Simulation/config.txt
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */
#ifndef _maintainingSession_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _maintainingSession_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  sessionStatus_T_RCM_Session_Types_Pkg /* sessionStatus/ */ sessionStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  sessionStatus_T_RCM_Session_Types_Pkg /* @1/_L4/ */ _L4_MemoryBasic_1_struct;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  sessionStatus_T_RCM_Session_Types_Pkg /* @1/Memorized/ */ Memorized_MemoryBasic_1_struct;
  kcg_bool /* @1/Write/ */ Write_MemoryBasic_1_struct;
  sessionStatus_T_RCM_Session_Types_Pkg /* @1/Init/ */ Init_MemoryBasic_1_struct;
  sessionStatus_T_RCM_Session_Types_Pkg /* @1/BM_Input/ */ BM_Input_MemoryBasic_1_struct;
  sessionStatus_T_RCM_Session_Types_Pkg /* @1/_L7/ */ _L7_MemoryBasic_1_struct;
  sessionStatus_T_RCM_Session_Types_Pkg /* @1/_L6/ */ _L6_MemoryBasic_1_struct;
  kcg_bool /* @1/_L5/ */ _L5_MemoryBasic_1_struct;
  sessionStatus_T_RCM_Session_Types_Pkg /* @1/_L2/ */ _L2_MemoryBasic_1_struct;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L128/ */ _L128;
  kcg_bool /* _L129/ */ _L129;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L130/ */ _L130;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L131/ */ _L131;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L133/ */ _L133;
  kcg_bool /* _L134/ */ _L134;
  NID_C /* _L135/ */ _L135;
  NID_RBC /* _L136/ */ _L136;
  NID_RADIO /* _L137/ */ _L137;
} outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2/ */
extern void maintainingSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* prevSessionStatus/ */
  sessionStatus_T_RCM_Session_Types_Pkg *prevSessionStatus,
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *outC);

extern void maintainingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void maintainingSession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: MoRC_Pck::Subfunc_Pkg::maintainingSession_v2/
  @1: (linear::MemoryBasic#1)
*/

#endif /* _maintainingSession_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** maintainingSession_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

