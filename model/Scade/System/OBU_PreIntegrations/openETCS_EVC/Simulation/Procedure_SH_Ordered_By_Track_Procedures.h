/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Procedure_SH_Ordered_By_Track_Procedures_H_
#define _Procedure_SH_Ordered_By_Track_Procedures_H_

#include "kcg_types.h"
#include "Procedure_With_Mode_Profile_Procedures.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition50/ */ Condition50;
  kcg_bool /* Condition51/ */ Condition51;
  kcg_bool /* Condition61/ */ Condition61;
  kcg_bool /* Ack_SH_Req_To_Driver/ */ Ack_SH_Req_To_Driver;
  kcg_bool /* Service_Brake_Command/ */ Service_Brake_Command;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Procedure_With_Mode_Profile_Procedures /* _L162=(Procedures::Procedure_With_Mode_Profile#1)/ */ Context_Procedure_With_Mode_Profile_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Loc_Procedure_Possible/ */ Loc_Procedure_Possible;
  kcg_bool /* Loc_Supervision_Mode/ */ Loc_Supervision_Mode;
  kcg_bool /* _L98/ */ _L98;
  kcg_bool /* _L95/ */ _L95;
  kcg_bool /* _L89/ */ _L89;
  kcg_bool /* _L86/ */ _L86;
  kcg_bool /* _L82/ */ _L82;
  kcg_bool /* _L78/ */ _L78;
  kcg_bool /* _L72/ */ _L72;
  T_Mode_Level_And_Mode_Types_Pkg /* _L66/ */ _L66;
  kcg_bool /* _L64/ */ _L64;
  kcg_bool /* _L61/ */ _L61;
  kcg_bool /* _L51/ */ _L51;
  T_Mode_Level_And_Mode_Types_Pkg /* _L130/ */ _L130;
  kcg_bool /* _L131/ */ _L131;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* _L134/ */ _L134;
  Speed_T_Obu_BasicTypes_Pkg /* _L135/ */ _L135;
  kcg_bool /* _L136/ */ _L136;
  T_MA_Level_And_Mode_Types_Pkg /* _L138/ */ _L138;
  T_Mode_Level_And_Mode_Types_Pkg /* _L143/ */ _L143;
  kcg_bool /* _L142/ */ _L142;
  kcg_bool /* _L141/ */ _L141;
  kcg_bool /* _L140/ */ _L140;
  kcg_bool /* _L139/ */ _L139;
  kcg_bool /* _L144/ */ _L144;
  kcg_bool /* _L145/ */ _L145;
  kcg_bool /* _L166/ */ _L166;
  kcg_bool /* _L165/ */ _L165;
  kcg_bool /* _L164/ */ _L164;
  kcg_bool /* _L163/ */ _L163;
  kcg_bool /* _L162/ */ _L162;
  kcg_bool /* _L167/ */ _L167;
  trainPosition_T_TrainPosition_Types_Pck /* _L169/ */ _L169;
  T_Mode_Level_And_Mode_Types_Pkg /* _L170/ */ _L170;
} outC_Procedure_SH_Ordered_By_Track_Procedures;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_SH_Ordered_By_Track/ */
extern void Procedure_SH_Ordered_By_Track_Procedures(
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Driver_Ack_SH/ */
  kcg_bool Driver_Ack_SH,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Train_Position/ */
  trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Train_Speed/ */
  Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_SH_Ordered_By_Track_Procedures *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Procedure_SH_Ordered_By_Track_reset_Procedures(
  outC_Procedure_SH_Ordered_By_Track_Procedures *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Procedure_SH_Ordered_By_Track_init_Procedures(
  outC_Procedure_SH_Ordered_By_Track_Procedures *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Procedure_SH_Ordered_By_Track_Procedures_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_SH_Ordered_By_Track_Procedures.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

