/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _SH_Initiated_By_Driver_On_Procedures_H_
#define _SH_Initiated_By_Driver_On_Procedures_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Clean_BG_List_SH_Area/ */ Clean_BG_List_SH_Area;
  kcg_bool /* Condition5/ */ Condition5;
  kcg_bool /* Condition6/ */ Condition6;
  kcg_bool /* End_Of_Mission_Procedure_Req/ */ End_Of_Mission_Procedure_Req;
  kcg_bool /* SH_Refused_By_RBC_To_DMI/ */ SH_Refused_By_RBC_To_DMI;
  kcg_bool /* Request_For_SH_To_RBC/ */ Request_For_SH_To_RBC;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM_SH_Initiated_By_Driver /* SM_SH_Initiated_By_Driver: */ SM_SH_Initiated_By_Driver_state_nxt;
  kcg_bool /* SM_SH_Initiated_By_Driver: */ SM_SH_Initiated_By_Driver_reset_act;
  kcg_bool /* SM_SH_Initiated_By_Driver: */ _1_SM_SH_Initiated_By_Driver_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* SM_SH_Initiated_By_Driver:Issue_SH_Request_L2_L3:<1> */ tr_1_clock_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
  kcg_bool /* SM_SH_Initiated_By_Driver:Issue_SH_Request_L2_L3:<2> */ tr_2_clock_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
  SSM_ST_SM_SH_Initiated_By_Driver /* SM_SH_Initiated_By_Driver: */ _2_SM_SH_Initiated_By_Driver_state_sel;
  SSM_ST_SM_SH_Initiated_By_Driver /* SM_SH_Initiated_By_Driver: */ _3_SM_SH_Initiated_By_Driver_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM_SH_Initiated_By_Driver:Issue_SH_Request_L2_L3:_L1/ */ _L1_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
  kcg_bool /* SM_SH_Initiated_By_Driver:SH_Authorized_L0_L1_LNTC:_L3/ */ _L3_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver;
  kcg_bool /* SM_SH_Initiated_By_Driver:SH_Authorized_L0_L1_LNTC:_L2/ */ _L2_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver;
  kcg_bool /* SM_SH_Initiated_By_Driver:SH_Authorized_L0_L1_LNTC:_L1/ */ _L1_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver;
  kcg_bool /* SM_SH_Initiated_By_Driver:SH_Authorized_L2_L3:_L3/ */ _L3_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver;
  kcg_bool /* SM_SH_Initiated_By_Driver:SH_Authorized_L2_L3:_L2/ */ _L2_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver;
  kcg_bool /* SM_SH_Initiated_By_Driver:SH_Authorized_L2_L3:_L1/ */ _L1_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver;
  SSM_TR_SM_SH_Initiated_By_Driver /* SM_SH_Initiated_By_Driver: */ SM_SH_Initiated_By_Driver_fired_strong;
  SSM_TR_SM_SH_Initiated_By_Driver /* SM_SH_Initiated_By_Driver: */ _4_SM_SH_Initiated_By_Driver_fired;
  kcg_bool /* Loc_Level_2_3/ */ Loc_Level_2_3;
  M_LEVEL /* _L14/ */ _L14;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L2/ */ _L2;
} outC_SH_Initiated_By_Driver_On_Procedures;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::SH_Initiated_By_Driver_On/ */
extern void SH_Initiated_By_Driver_On_Procedures(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Driver_Req_SH/ */
  kcg_bool Driver_Req_SH,
  /* On_Going_Mission/ */
  kcg_bool On_Going_Mission,
  /* Shunting_Granted_By_RBC/ */
  kcg_bool Shunting_Granted_By_RBC,
  outC_SH_Initiated_By_Driver_On_Procedures *outC);

extern void SH_Initiated_By_Driver_On_reset_Procedures(
  outC_SH_Initiated_By_Driver_On_Procedures *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SH_Initiated_By_Driver_On_init_Procedures(
  outC_SH_Initiated_By_Driver_On_Procedures *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SH_Initiated_By_Driver_On_Procedures_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SH_Initiated_By_Driver_On_Procedures.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

