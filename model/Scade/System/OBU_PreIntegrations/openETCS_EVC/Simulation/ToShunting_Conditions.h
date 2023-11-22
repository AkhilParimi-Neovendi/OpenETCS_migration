/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _ToShunting_Conditions_H_
#define _ToShunting_Conditions_H_

#include "kcg_types.h"
#include "Procedure_SH_Ordered_By_Track_Procedures.h"
#include "Procedure_SH_Initiated_By_Procedures.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition5/ */ Condition5;
  kcg_bool /* Condition6/ */ Condition6;
  kcg_bool /* Condition23/ */ Condition23;
  kcg_bool /* Condition50/ */ Condition50;
  kcg_bool /* Condition51/ */ Condition51;
  kcg_bool /* Condition61/ */ Condition61;
  kcg_bool /* Ack_SH_Req_To_Driver/ */ Ack_SH_Req_To_Driver;
  kcg_bool /* Clean_BG_List_SH_Area/ */ Clean_BG_List_SH_Area;
  kcg_bool /* End_Of_Mission_Procedure_Req/ */ End_Of_Mission_Procedure_Req;
  kcg_bool /* Request_For_SH_To_RBC/ */ Request_For_SH_To_RBC;
  kcg_bool /* Service_Brake_Command/ */ Service_Brake_Command;
  kcg_bool /* SH_refused_By_RBC_To_DMI/ */ SH_refused_By_RBC_To_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Procedure_SH_Ordered_By_Track_Procedures /* _L454=(Procedures::Procedure_SH_Ordered_By_Track#1)/ */ Context_Procedure_SH_Ordered_By_Track_1;
  outC_Procedure_SH_Initiated_By_Procedures /* _L449=(Procedures::Procedure_SH_Initiated_By_Driver#1)/ */ Context_Procedure_SH_Initiated_By_Driver_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L80/ */ _L80;
  kcg_bool /* _L77/ */ _L77;
  kcg_bool /* _L348/ */ _L348;
  kcg_bool /* _L349/ */ _L349;
  kcg_bool /* _L452/ */ _L452;
  kcg_bool /* _L451/ */ _L451;
  kcg_bool /* _L450/ */ _L450;
  kcg_bool /* _L449/ */ _L449;
  kcg_bool /* _L457/ */ _L457;
  kcg_bool /* _L456/ */ _L456;
  kcg_bool /* _L455/ */ _L455;
  kcg_bool /* _L454/ */ _L454;
  kcg_bool /* _L453/ */ _L453;
  M_LEVEL /* _L458/ */ _L458;
  kcg_bool /* _L459/ */ _L459;
  T_Mode_Level_And_Mode_Types_Pkg /* _L460/ */ _L460;
  kcg_bool /* _L461/ */ _L461;
  kcg_bool /* _L462/ */ _L462;
  kcg_bool /* _L463/ */ _L463;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* _L465/ */ _L465;
  T_Mode_Level_And_Mode_Types_Pkg /* _L466/ */ _L466;
  kcg_bool /* _L467/ */ _L467;
  kcg_bool /* _L468/ */ _L468;
  Speed_T_Obu_BasicTypes_Pkg /* _L469/ */ _L469;
  kcg_bool /* _L471/ */ _L471;
  trainPosition_T_TrainPosition_Types_Pck /* _L472/ */ _L472;
} outC_ToShunting_Conditions;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToShunting/ */
extern void ToShunting_Conditions(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Desk_Open/ */
  kcg_bool Desk_Open,
  /* Driver_Ack_SH/ */
  kcg_bool Driver_Ack_SH,
  /* Driver_Req_SH/ */
  kcg_bool Driver_Req_SH,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* On_Going_Mission/ */
  kcg_bool On_Going_Mission,
  /* Shunting_Granted_By_RBC/ */
  kcg_bool Shunting_Granted_By_RBC,
  /* Stop_Shunting_Stored/ */
  kcg_bool Stop_Shunting_Stored,
  /* Train_Position/ */
  trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Train_Speed/ */
  Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  /* Train_Standstill/ */
  kcg_bool Train_Standstill,
  outC_ToShunting_Conditions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToShunting_reset_Conditions(outC_ToShunting_Conditions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToShunting_init_Conditions(outC_ToShunting_Conditions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ToShunting_Conditions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToShunting_Conditions.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

