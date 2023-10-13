/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _Procedure_OnSight_Procedures_H_
#define _Procedure_OnSight_Procedures_H_

#include "kcg_types.h"
#include "Procedure_With_Mode_Profile_Procedures.h"
#include "Mode_Profile_Calculations_Librairies.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition15/ */ Condition15;
  kcg_bool /* Condition34/ */ Condition34;
  kcg_bool /* Condition40/ */ Condition40;
  kcg_bool /* Condition73/ */ Condition73;
  kcg_bool /* Ack_OS_Req_To_Driver/ */ Ack_OS_Req_To_Driver;
  kcg_bool /* Service_Brake_Command/ */ Service_Brake_Command;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Procedure_With_Mode_Profile_Procedures /* _L519=(Procedures::Procedure_With_Mode_Profile#1)/ */ Context_Procedure_With_Mode_Profile_1;
  outC_Mode_Profile_Calculations_Librairies /* _L527=(Librairies::Mode_Profile_Calculations#1)/ */ Context_Mode_Profile_Calculations_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Loc_Procedure_Possible/ */ Loc_Procedure_Possible;
  kcg_bool /* Loc_Condition_73/ */ Loc_Condition_73;
  kcg_bool /* Loc_Supervision_Mode/ */ Loc_Supervision_Mode;
  kcg_bool /* _L80/ */ _L80;
  kcg_bool /* _L424/ */ _L424;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* _L438/ */ _L438;
  T_MA_Level_And_Mode_Types_Pkg /* _L439/ */ _L439;
  kcg_bool /* _L474/ */ _L474;
  kcg_bool /* _L471/ */ _L471;
  kcg_bool /* _L468/ */ _L468;
  kcg_bool /* _L457/ */ _L457;
  kcg_bool /* _L455/ */ _L455;
  kcg_bool /* _L452/ */ _L452;
  kcg_bool /* _L449/ */ _L449;
  T_Mode_Level_And_Mode_Types_Pkg /* _L446/ */ _L446;
  kcg_bool /* _L445/ */ _L445;
  kcg_bool /* _L440/ */ _L440;
  T_Mode_Level_And_Mode_Types_Pkg /* _L477/ */ _L477;
  Speed_T_Obu_BasicTypes_Pkg /* _L479/ */ _L479;
  kcg_bool /* _L480/ */ _L480;
  T_Mode_Level_And_Mode_Types_Pkg /* _L489/ */ _L489;
  kcg_bool /* _L486/ */ _L486;
  kcg_bool /* _L484/ */ _L484;
  kcg_bool /* _L483/ */ _L483;
  kcg_bool /* _L482/ */ _L482;
  kcg_bool /* _L491/ */ _L491;
  kcg_bool /* _L502/ */ _L502;
  kcg_bool /* _L523/ */ _L523;
  kcg_bool /* _L522/ */ _L522;
  kcg_bool /* _L521/ */ _L521;
  kcg_bool /* _L520/ */ _L520;
  kcg_bool /* _L519/ */ _L519;
  kcg_bool /* _L524/ */ _L524;
  trainPosition_T_TrainPosition_Types_Pck /* _L526/ */ _L526;
  kcg_bool /* _L529/ */ _L529;
  kcg_bool /* _L528/ */ _L528;
  kcg_bool /* _L527/ */ _L527;
  T_Mode_Level_And_Mode_Types_Pkg /* _L530/ */ _L530;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* _L531/ */ _L531;
  T_MA_Level_And_Mode_Types_Pkg /* _L532/ */ _L532;
  trainPosition_T_TrainPosition_Types_Pck /* _L533/ */ _L533;
  Speed_T_Obu_BasicTypes_Pkg /* _L534/ */ _L534;
  kcg_bool /* _L537/ */ _L537;
  T_Mode_Level_And_Mode_Types_Pkg /* _L538/ */ _L538;
  kcg_bool /* _L539/ */ _L539;
} outC_Procedure_OnSight_Procedures;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_OnSight/ */
extern void Procedure_OnSight_Procedures(
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Driver_Ack_OS/ */
  kcg_bool Driver_Ack_OS,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Train_Position/ */
  trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Train_Speed/ */
  Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_OnSight_Procedures *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Procedure_OnSight_reset_Procedures(
  outC_Procedure_OnSight_Procedures *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Procedure_OnSight_init_Procedures(
  outC_Procedure_OnSight_Procedures *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_Procedure_With_Mode_Profile_Procedures Context_Procedure_With_Mode_Profile_1;
} SV_Procedure_OnSight_Procedures;

extern void kcg_save_SV_Procedure_OnSight_Procedures(
  SV_Procedure_OnSight_Procedures *SV,
  outC_Procedure_OnSight_Procedures *outC);
extern void kcg_load_SV_Procedure_OnSight_Procedures(
  outC_Procedure_OnSight_Procedures *outC,
  SV_Procedure_OnSight_Procedures *SV);



#endif /* _Procedure_OnSight_Procedures_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_OnSight_Procedures.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

