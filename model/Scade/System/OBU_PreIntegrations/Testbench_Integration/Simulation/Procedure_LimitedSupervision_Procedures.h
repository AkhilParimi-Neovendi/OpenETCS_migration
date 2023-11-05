/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _Procedure_LimitedSupervision_Procedures_H_
#define _Procedure_LimitedSupervision_Procedures_H_

#include "kcg_types.h"
#include "Procedure_With_Mode_Profile_Procedures.h"
#include "Mode_Profile_Calculations_Librairies.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition70/ */ Condition70;
  kcg_bool /* Condition71/ */ Condition71;
  kcg_bool /* Condition72/ */ Condition72;
  kcg_bool /* Condition74/ */ Condition74;
  kcg_bool /* Ack_LS_Req_To_Driver/ */ Ack_LS_Req_To_Driver;
  kcg_bool /* Service_Brake_Command/ */ Service_Brake_Command;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Procedure_With_Mode_Profile_Procedures /* _L495=(Procedures::Procedure_With_Mode_Profile#1)/ */ Context_Procedure_With_Mode_Profile_1;
  outC_Mode_Profile_Calculations_Librairies /* _L504=(Librairies::Mode_Profile_Calculations#1)/ */ Context_Mode_Profile_Calculations_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Loc_Supervision_Mode/ */ Loc_Supervision_Mode;
  kcg_bool /* Loc_Procedure_Possible/ */ Loc_Procedure_Possible;
  kcg_bool /* Loc_Condition_74/ */ Loc_Condition_74;
  kcg_bool /* _L476/ */ _L476;
  kcg_bool /* _L475/ */ _L475;
  Speed_T_Obu_BasicTypes_Pkg /* _L473/ */ _L473;
  kcg_bool /* _L471/ */ _L471;
  kcg_bool /* _L470/ */ _L470;
  kcg_bool /* _L467/ */ _L467;
  kcg_bool /* _L466/ */ _L466;
  kcg_bool /* _L465/ */ _L465;
  T_MA_Level_And_Mode_Types_Pkg /* _L464/ */ _L464;
  kcg_bool /* _L461/ */ _L461;
  kcg_bool /* _L455/ */ _L455;
  kcg_bool /* _L454/ */ _L454;
  kcg_bool /* _L452/ */ _L452;
  T_Mode_Level_And_Mode_Types_Pkg /* _L449/ */ _L449;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* _L448/ */ _L448;
  T_Mode_Level_And_Mode_Types_Pkg /* _L446/ */ _L446;
  kcg_bool /* _L445/ */ _L445;
  kcg_bool /* _L444/ */ _L444;
  T_Mode_Level_And_Mode_Types_Pkg /* _L442/ */ _L442;
  kcg_bool /* _L436/ */ _L436;
  kcg_bool /* _L435/ */ _L435;
  kcg_bool /* _L477/ */ _L477;
  kcg_bool /* _L499/ */ _L499;
  kcg_bool /* _L498/ */ _L498;
  kcg_bool /* _L497/ */ _L497;
  kcg_bool /* _L496/ */ _L496;
  kcg_bool /* _L495/ */ _L495;
  kcg_bool /* _L500/ */ _L500;
  T_Mode_Level_And_Mode_Types_Pkg /* _L511/ */ _L511;
  kcg_bool /* _L510/ */ _L510;
  kcg_bool /* _L509/ */ _L509;
  T_MA_Level_And_Mode_Types_Pkg /* _L508/ */ _L508;
  kcg_bool /* _L504/ */ _L504;
  kcg_bool /* _L505/ */ _L505;
  kcg_bool /* _L506/ */ _L506;
  kcg_bool /* _L507/ */ _L507;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* _L503/ */ _L503;
  trainPosition_T_TrainPosition_Types_Pck /* _L502/ */ _L502;
  Speed_T_Obu_BasicTypes_Pkg /* _L501/ */ _L501;
  trainPosition_T_TrainPosition_Types_Pck /* _L513/ */ _L513;
  T_Mode_Level_And_Mode_Types_Pkg /* _L514/ */ _L514;
  kcg_bool /* _L515/ */ _L515;
} outC_Procedure_LimitedSupervision_Procedures;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_LimitedSupervision/ */
extern void Procedure_LimitedSupervision_Procedures(
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Driver_Ack_LS/ */
  kcg_bool Driver_Ack_LS,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Train_Position/ */
  trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Train_Speed/ */
  Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_LimitedSupervision_Procedures *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Procedure_LimitedSupervision_reset_Procedures(
  outC_Procedure_LimitedSupervision_Procedures *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Procedure_LimitedSupervision_init_Procedures(
  outC_Procedure_LimitedSupervision_Procedures *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_Procedure_With_Mode_Profile_Procedures Context_Procedure_With_Mode_Profile_1;
} SV_Procedure_LimitedSupervision_Procedures;

extern void kcg_save_SV_Procedure_LimitedSupervision_Procedures(
  SV_Procedure_LimitedSupervision_Procedures *SV,
  outC_Procedure_LimitedSupervision_Procedures *outC);
extern void kcg_load_SV_Procedure_LimitedSupervision_Procedures(
  outC_Procedure_LimitedSupervision_Procedures *outC,
  SV_Procedure_LimitedSupervision_Procedures *SV);



#endif /* _Procedure_LimitedSupervision_Procedures_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_LimitedSupervision_Procedures.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

