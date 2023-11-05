/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _Procedure_Train_Reversing_Procedures_H_
#define _Procedure_Train_Reversing_Procedures_H_

#include "kcg_types.h"
#include "Reversing_Calculations_Librairies.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition_59/ */ Condition_59;
  kcg_bool /* Ack_RV_Req_To_Driver/ */ Ack_RV_Req_To_Driver;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM_Train_Reversing /* SM_Train_Reversing: */ SM_Train_Reversing_state_nxt;
  kcg_bool /* SM_Train_Reversing: */ SM_Train_Reversing_reset_act;
  kcg_bool /* SM_Train_Reversing: */ SM_Train_Reversing_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Reversing_Calculations_Librairies /* _L16=(Librairies::Reversing_Calculations#1)/ */ Context_Reversing_Calculations_1;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM_Train_Reversing /* SM_Train_Reversing: */ SM_Train_Reversing_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM_Train_Reversing:Reversing_Condition:_L2/ */ _L2_Reversing_Condition_SM_Train_Reversing;
  kcg_bool /* SM_Train_Reversing:RV_Mode:_L1/ */ _L1_RV_Mode_SM_Train_Reversing;
  SSM_ST_SM_Train_Reversing /* SM_Train_Reversing: */ SM_Train_Reversing_state_sel;
  SSM_TR_SM_Train_Reversing /* SM_Train_Reversing: */ SM_Train_Reversing_fired_strong;
  SSM_TR_SM_Train_Reversing /* SM_Train_Reversing: */ SM_Train_Reversing_fired;
  kcg_bool /* Loc_Max_Safe_Front_In_RV_Area/ */ Loc_Max_Safe_Front_In_RV_Area;
  kcg_bool /* Loc_RV_Data_Available/ */ Loc_RV_Data_Available;
  kcg_bool /* Loc_Cond_Procedure_On/ */ Loc_Cond_Procedure_On;
  kcg_bool /* _L16/ */ _L16;
  trainPosition_T_TrainPosition_Types_Pck /* _L17/ */ _L17;
  T_Reversing_Data_Level_And_Mode_Types_Pkg /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
} outC_Procedure_Train_Reversing_Procedures;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_Train_Reversing/ */
extern void Procedure_Train_Reversing_Procedures(
  /* Driver_Ack_RV/ */
  kcg_bool Driver_Ack_RV,
  /* Train_Standstill/ */
  kcg_bool Train_Standstill,
  /* Train_Position/ */
  trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Reversing_Data/ */
  T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data,
  outC_Procedure_Train_Reversing_Procedures *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Procedure_Train_Reversing_reset_Procedures(
  outC_Procedure_Train_Reversing_Procedures *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Procedure_Train_Reversing_init_Procedures(
  outC_Procedure_Train_Reversing_Procedures *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* SM_Train_Reversing: */ Context_SM_Train_Reversing_reset_nxt;
  kcg_bool /* SM_Train_Reversing: */ Context_SM_Train_Reversing_reset_act;
  SSM_ST_SM_Train_Reversing /* SM_Train_Reversing: */ Context_SM_Train_Reversing_state_nxt;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_Procedure_Train_Reversing_Procedures;

extern void kcg_save_SV_Procedure_Train_Reversing_Procedures(
  SV_Procedure_Train_Reversing_Procedures *SV,
  outC_Procedure_Train_Reversing_Procedures *outC);
extern void kcg_load_SV_Procedure_Train_Reversing_Procedures(
  outC_Procedure_Train_Reversing_Procedures *outC,
  SV_Procedure_Train_Reversing_Procedures *SV);



#endif /* _Procedure_Train_Reversing_Procedures_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_Train_Reversing_Procedures.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

