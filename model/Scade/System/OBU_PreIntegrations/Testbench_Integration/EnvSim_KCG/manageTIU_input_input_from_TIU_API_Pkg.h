/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _manageTIU_input_input_from_TIU_API_Pkg_H_
#define _manageTIU_input_input_from_TIU_API_Pkg_H_

#include "kcg_types.h"
#include "detectEvokeBrake_input_from_TIU_API_Pkg.h"
#include "mergeTIU_Info_input_from_TIU_API_Pkg.h"
#include "getTIUStatusFromData_input_from_TIU_API_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TIU_trainStatus_T_TIU_Types_Pkg /* outTIUStatus/ */ outTIUStatus;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* outTIUCurrentInfo/ */ outTIUCurrentInfo;
  kcg_bool /* outRevokeEB/ */ outRevokeEB;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* storeTIU/ */ storeTIU;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_getTIUStatusFromData_input_from_TIU_API_Pkg /* _L22=(input_from_TIU_API_Pkg::getTIUStatusFromData#1)/ */ Context_getTIUStatusFromData_1;
  outC_detectEvokeBrake_input_from_TIU_API_Pkg /* _L42=(input_from_TIU_API_Pkg::detectEvokeBrake#1)/ */ Context_detectEvokeBrake_1;
  outC_mergeTIU_Info_input_from_TIU_API_Pkg /* _L35=(input_from_TIU_API_Pkg::mergeTIU_Info#1)/ */ Context_mergeTIU_Info_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* _L8/ */ _L8;
  TIU_Input_msg_API_TIU_Pkg /* _L1/ */ _L1;
  TIU_trainStatus_T_TIU_Types_Pkg /* _L22/ */ _L22;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* _L35/ */ _L35;
  trainData_T_TIU_Types_Pkg /* _L36/ */ _L36;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* _L37/ */ _L37;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* _L41/ */ _L41;
  kcg_bool /* _L42/ */ _L42;
  Brake_pressure_value_T_TIU_Types_Pkg /* _L43/ */ _L43;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
} outC_manageTIU_input_input_from_TIU_API_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* input_from_TIU_API_Pkg::manageTIU_input/ */
extern void manageTIU_input_input_from_TIU_API_Pkg(
  /* inTIUfromAPI/ */
  TIU_Input_msg_API_TIU_Pkg *inTIUfromAPI,
  /* evc_trainData/ */
  trainData_T_TIU_Types_Pkg *evc_trainData,
  /* inModeLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeLevel,
  /* inDriverWindowEB/ */
  kcg_bool inDriverWindowEB,
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void manageTIU_input_reset_input_from_TIU_API_Pkg(
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void manageTIU_input_init_input_from_TIU_API_Pkg(
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _manageTIU_input_input_from_TIU_API_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** manageTIU_input_input_from_TIU_API_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

