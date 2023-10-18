/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Mode_Profile_Calculations_Librairies_H_
#define _Mode_Profile_Calculations_Librairies_H_

#include "kcg_types.h"
#include "Position_In_Area_Librairies.h"
#include "Position_In_Ack_Area_Librairies.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Max_Safe_Front_In_Mode_Profile/ */ Max_Safe_Front_In_Mode_Profile;
  kcg_bool /* Supervision_Condition_In_Mode_Profile/ */ Supervision_Condition_In_Mode_Profile;
  kcg_bool /* Awaited_Mode_Profile/ */ Awaited_Mode_Profile;
  kcg_bool /* Estimated_front_End_In_Ack_Area/ */ Estimated_front_End_In_Ack_Area;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Position_In_Area_Librairies /* _L36=(Librairies::Position_In_Area#1)/ */ Context_Position_In_Area_1;
  outC_Position_In_Ack_Area_Librairies /* _L35=(Librairies::Position_In_Ack_Area#1)/ */ Context_Position_In_Ack_Area_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock2:else: */ else_clock_IfBlock2;
  kcg_bool /* IfBlock2:else:else: */ else_clock_else_IfBlock2;
  kcg_bool /* IfBlock2: */ IfBlock2_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock2:then:_L1/ */ _L1_then_IfBlock2;
  kcg_bool /* IfBlock2:else:else:then:_L1/ */ _L1_then_else_else_IfBlock2;
  kcg_bool /* IfBlock2:else:else:else:_L1/ */ _L1_else_else_else_IfBlock2;
  kcg_bool /* IfBlock2:else:then:_L1/ */ _L1_then_else_IfBlock2;
  kcg_bool /* Valid_Train_Position/ */ Valid_Train_Position;
  Location_T_Obu_BasicTypes_Pkg /* Estimated_Front_End/ */ Estimated_Front_End;
  Location_T_Obu_BasicTypes_Pkg /* Max_Safe_Front_End/ */ Max_Safe_Front_End;
  Location_T_Obu_BasicTypes_Pkg /* Loc_MP_Distance/ */ Loc_MP_Distance;
  T_MA_Level_And_Mode_Types_Pkg /* Loc_MP_Mode/ */ Loc_MP_Mode;
  Speed_T_Obu_BasicTypes_Pkg /* Loc_MP_Speed/ */ Loc_MP_Speed;
  Location_T_Obu_BasicTypes_Pkg /* Loc_MP_Length/ */ Loc_MP_Length;
  Location_T_Obu_BasicTypes_Pkg /* Loc_MP_Length_Ack/ */ Loc_MP_Length_Ack;
  kcg_bool /* Condition_Ok/ */ Condition_Ok;
  kcg_bool /* Condition_Loc/ */ Condition_Loc;
  Speed_T_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L12/ */ _L12;
  T_MA_Level_And_Mode_Types_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L30/ */ _L30;
  trainPosition_T_TrainPosition_Types_Pck /* _L29/ */ _L29;
  Location_T_Obu_BasicTypes_Pkg /* _L28/ */ _L28;
  Location_T_Obu_BasicTypes_Pkg /* _L25/ */ _L25;
  trainPosition_T_TrainPosition_Types_Pck /* _L21/ */ _L21;
  trainPosition_T_TrainPosition_Types_Pck /* _L20/ */ _L20;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* _L37/ */ _L37;
  Location_T_Obu_BasicTypes_Pkg /* _L42/ */ _L42;
  T_MA_Level_And_Mode_Types_Pkg /* _L41/ */ _L41;
  Speed_T_Obu_BasicTypes_Pkg /* _L40/ */ _L40;
  Location_T_Obu_BasicTypes_Pkg /* _L39/ */ _L39;
  Location_T_Obu_BasicTypes_Pkg /* _L38/ */ _L38;
  T_MA_Level_And_Mode_Types_Pkg /* _L43/ */ _L43;
  kcg_bool /* _L45/ */ _L45;
  kcg_bool /* _L47/ */ _L47;
  kcg_bool /* _L48/ */ _L48;
  Location_T_Obu_BasicTypes_Pkg /* _L49/ */ _L49;
  kcg_bool /* _L50/ */ _L50;
  Location_T_Obu_BasicTypes_Pkg /* _L51/ */ _L51;
  Location_T_Obu_BasicTypes_Pkg /* _L52/ */ _L52;
  Speed_T_Obu_BasicTypes_Pkg /* _L53/ */ _L53;
  kcg_bool /* _L54/ */ _L54;
  kcg_bool /* _L55/ */ _L55;
  kcg_bool /* _L56/ */ _L56;
  Location_T_Obu_BasicTypes_Pkg /* _L57/ */ _L57;
  Location_T_Obu_BasicTypes_Pkg /* _L58/ */ _L58;
  Location_T_Obu_BasicTypes_Pkg /* _L59/ */ _L59;
  kcg_bool /* _L60/ */ _L60;
  kcg_bool /* _L61/ */ _L61;
  kcg_bool /* _L62/ */ _L62;
  kcg_bool /* _L63/ */ _L63;
  kcg_bool /* _L65/ */ _L65;
  kcg_bool /* _L64/ */ _L64;
  kcg_bool /* _L66/ */ _L66;
} outC_Mode_Profile_Calculations_Librairies;

/* ===========  node initialization and cycle functions  =========== */
/* Librairies::Mode_Profile_Calculations/ */
extern void Mode_Profile_Calculations_Librairies(
  /* Selected_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Selected_Mode,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Profile_Mode/ */
  T_MA_Level_And_Mode_Types_Pkg Profile_Mode,
  /* Train_Speed/ */
  Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  /* Train_Position/ */
  trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  outC_Mode_Profile_Calculations_Librairies *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Mode_Profile_Calculations_reset_Librairies(
  outC_Mode_Profile_Calculations_Librairies *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Mode_Profile_Calculations_init_Librairies(
  outC_Mode_Profile_Calculations_Librairies *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Mode_Profile_Calculations_Librairies_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Mode_Profile_Calculations_Librairies.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

