/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Procedure_SH_Initiated_By_Driver_Procedures_H_
#define _Procedure_SH_Initiated_By_Driver_Procedures_H_

#include "kcg_types.h"
#include "SH_Initiated_By_Driver_On_Procedures.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition5/ */ Condition5;
  kcg_bool /* Condition6/ */ Condition6;
  kcg_bool /* Clean_BG_List_SH_Area/ */ Clean_BG_List_SH_Area;
  kcg_bool /* End_Of_Mission_Procedure_Req/ */ End_Of_Mission_Procedure_Req;
  kcg_bool /* Request_For_SH_To_RBC/ */ Request_For_SH_To_RBC;
  kcg_bool /* SH_Refused_By_RBC_To_DMI/ */ SH_Refused_By_RBC_To_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SH_Initiated_By_Driver /* SH_Initiated_By_Driver: */ SH_Initiated_By_Driver_state_nxt;
  kcg_bool /* SH_Initiated_By_Driver: */ SH_Initiated_By_Driver_reset_act;
  kcg_bool /* SH_Initiated_By_Driver: */ SH_Initiated_By_Driver_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SH_Initiated_By_Driver_On_Procedures /* SH_Initiated_By_Driver:S0_SH_initiated_by_driver_procedure_on:_L1=(Procedures::SH_Initiated_By_Driver_On#1)/ */ Context_SH_Initiated_By_Driver_On_1;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SH_Initiated_By_Driver /* SH_Initiated_By_Driver: */ SH_Initiated_By_Driver_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SH_Initiated_By_Driver:S0_SH_initiated_by_driver_procedure_on:_L14/ */ _L14_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
  kcg_bool /* SH_Initiated_By_Driver:S0_SH_initiated_by_driver_procedure_on:_L13/ */ _L13_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
  kcg_bool /* SH_Initiated_By_Driver:S0_SH_initiated_by_driver_procedure_on:_L12/ */ _L12_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
  M_LEVEL /* SH_Initiated_By_Driver:S0_SH_initiated_by_driver_procedure_on:_L11/ */ _L11_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
  kcg_bool /* SH_Initiated_By_Driver:S0_SH_initiated_by_driver_procedure_on:_L1/ */ _L1_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
  kcg_bool /* SH_Initiated_By_Driver:S0_SH_initiated_by_driver_procedure_on:_L2/ */ _L2_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
  kcg_bool /* SH_Initiated_By_Driver:S0_SH_initiated_by_driver_procedure_on:_L3/ */ _L3_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
  kcg_bool /* SH_Initiated_By_Driver:S0_SH_initiated_by_driver_procedure_on:_L4/ */ _L4_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
  kcg_bool /* SH_Initiated_By_Driver:S0_SH_initiated_by_driver_procedure_on:_L5/ */ _L5_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
  kcg_bool /* SH_Initiated_By_Driver:S0_SH_initiated_by_driver_procedure_on:_L6/ */ _L6_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
  SSM_ST_SH_Initiated_By_Driver /* SH_Initiated_By_Driver: */ SH_Initiated_By_Driver_state_sel;
  SSM_TR_SH_Initiated_By_Driver /* SH_Initiated_By_Driver: */ SH_Initiated_By_Driver_fired_strong;
  SSM_TR_SH_Initiated_By_Driver /* SH_Initiated_By_Driver: */ SH_Initiated_By_Driver_fired;
  kcg_bool /* Loc_Procedure_Possible/ */ Loc_Procedure_Possible;
  T_Mode_Level_And_Mode_Types_Pkg /* _L49/ */ _L49;
  kcg_bool /* _L47/ */ _L47;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L6/ */ _L6;
} outC_Procedure_SH_Initiated_By_Driver_Procedures;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_SH_Initiated_By_Driver/ */
extern void Procedure_SH_Initiated_By_Driver_Procedures(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Driver_Req_SH/ */
  kcg_bool Driver_Req_SH,
  /* On_Going_Mission/ */
  kcg_bool On_Going_Mission,
  /* Shunting_Granted_By_RBC/ */
  kcg_bool Shunting_Granted_By_RBC,
  /* Train_Standstill/ */
  kcg_bool Train_Standstill,
  outC_Procedure_SH_Initiated_By_Driver_Procedures *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Procedure_SH_Initiated_By_Driver_reset_Procedures(
  outC_Procedure_SH_Initiated_By_Driver_Procedures *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Procedure_SH_Initiated_By_Driver_init_Procedures(
  outC_Procedure_SH_Initiated_By_Driver_Procedures *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Procedure_SH_Initiated_By_Driver_Procedures_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_SH_Initiated_By_Driver_Procedures.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

