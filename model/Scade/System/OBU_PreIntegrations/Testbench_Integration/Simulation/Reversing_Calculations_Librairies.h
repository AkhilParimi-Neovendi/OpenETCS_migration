/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _Reversing_Calculations_Librairies_H_
#define _Reversing_Calculations_Librairies_H_

#include "kcg_types.h"
#include "Position_In_Area_Librairies.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Max_Safe_Front_In_Reverse_Area/ */ Max_Safe_Front_In_Reverse_Area;
  kcg_bool /* RV_Data_Available/ */ RV_Data_Available;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Position_In_Area_Librairies /* _L36=(Librairies::Position_In_Area#1)/ */ Context_Position_In_Area_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Valid_Train_Position/ */ Valid_Train_Position;
  Location_T_Obu_BasicTypes_Pkg /* Max_Safe_Front_End/ */ Max_Safe_Front_End;
  Location_T_Obu_BasicTypes_Pkg /* Loc_RV_Dist_Start/ */ Loc_RV_Dist_Start;
  kcg_bool /* Loc_RV_Available/ */ Loc_RV_Available;
  Location_T_Obu_BasicTypes_Pkg /* Loc_RV_Length/ */ Loc_RV_Length;
  kcg_bool /* _L30/ */ _L30;
  trainPosition_T_TrainPosition_Types_Pck /* _L29/ */ _L29;
  Location_T_Obu_BasicTypes_Pkg /* _L28/ */ _L28;
  trainPosition_T_TrainPosition_Types_Pck /* _L20/ */ _L20;
  kcg_bool /* _L36/ */ _L36;
  T_Reversing_Data_Level_And_Mode_Types_Pkg /* _L37/ */ _L37;
  kcg_bool /* _L42/ */ _L42;
  Location_T_Obu_BasicTypes_Pkg /* _L41/ */ _L41;
  Location_T_Obu_BasicTypes_Pkg /* _L40/ */ _L40;
  Location_T_Obu_BasicTypes_Pkg /* _L39/ */ _L39;
  Speed_T_Obu_BasicTypes_Pkg /* _L38/ */ _L38;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L45/ */ _L45;
  kcg_bool /* _L47/ */ _L47;
  kcg_bool /* _L48/ */ _L48;
  Location_T_Obu_BasicTypes_Pkg /* _L49/ */ _L49;
  Location_T_Obu_BasicTypes_Pkg /* _L51/ */ _L51;
  Location_T_Obu_BasicTypes_Pkg /* _L52/ */ _L52;
  kcg_bool /* _L62/ */ _L62;
} outC_Reversing_Calculations_Librairies;

/* ===========  node initialization and cycle functions  =========== */
/* Librairies::Reversing_Calculations/ */
extern void Reversing_Calculations_Librairies(
  /* Reversing_Data/ */
  T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data,
  /* Train_Position/ */
  trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  outC_Reversing_Calculations_Librairies *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Reversing_Calculations_reset_Librairies(
  outC_Reversing_Calculations_Librairies *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Reversing_Calculations_init_Librairies(
  outC_Reversing_Calculations_Librairies *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Reversing_Calculations_Librairies_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Reversing_Calculations_Librairies.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

