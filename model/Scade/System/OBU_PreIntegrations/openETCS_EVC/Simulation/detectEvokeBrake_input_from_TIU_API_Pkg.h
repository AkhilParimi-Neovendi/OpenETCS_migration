/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _detectEvokeBrake_input_from_TIU_API_Pkg_H_
#define _detectEvokeBrake_input_from_TIU_API_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* EB_RevokedByDriver/ */ EB_RevokedByDriver;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_brake_Management /* brake_Management: */ brake_Management_state_nxt;
  kcg_bool /* brake_Management: */ brake_Management_reset_act;
  kcg_bool /* brake_Management: */ brake_Management_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_brake_Management /* brake_Management: */ brake_Management_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* brake_Management:BrakeMinDone:_L1/ */ _L1_BrakeMinDone_brake_Management;
  SSM_ST_brake_Management /* brake_Management: */ brake_Management_state_sel;
  SSM_TR_brake_Management /* brake_Management: */ brake_Management_fired_strong;
  SSM_TR_brake_Management /* brake_Management: */ brake_Management_fired;
  kcg_bool /* is_PostTrip/ */ is_PostTrip;
  kcg_bool /* isMax/ */ isMax;
  kcg_bool /* isMin/ */ isMin;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L2/ */ _L2;
  M_MODE /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  M_MODE /* _L5/ */ _L5;
  Brake_pressure_value_T_TIU_Types_Pkg /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
} outC_detectEvokeBrake_input_from_TIU_API_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* input_from_TIU_API_Pkg::detectEvokeBrake/ */
extern void detectEvokeBrake_input_from_TIU_API_Pkg(
  /* brakeController/ */
  Brake_pressure_value_T_TIU_Types_Pkg *brakeController,
  /* ModeLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *ModeLevel,
  /* inDriverWindowEB/ */
  kcg_bool inDriverWindowEB,
  outC_detectEvokeBrake_input_from_TIU_API_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void detectEvokeBrake_reset_input_from_TIU_API_Pkg(
  outC_detectEvokeBrake_input_from_TIU_API_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void detectEvokeBrake_init_input_from_TIU_API_Pkg(
  outC_detectEvokeBrake_input_from_TIU_API_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _detectEvokeBrake_input_from_TIU_API_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** detectEvokeBrake_input_from_TIU_API_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

