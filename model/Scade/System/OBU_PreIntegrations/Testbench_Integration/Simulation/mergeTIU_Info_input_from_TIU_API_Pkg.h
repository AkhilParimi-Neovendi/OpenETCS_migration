/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _mergeTIU_Info_input_from_TIU_API_Pkg_H_
#define _mergeTIU_Info_input_from_TIU_API_Pkg_H_

#include "kcg_types.h"
#include "selectTrainData_input_from_TIU_API_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* updatedInfo/ */ updatedInfo;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_selectTrainData_input_from_TIU_API_Pkg /* _L78=(input_from_TIU_API_Pkg::selectTrainData#1)/ */ Context_selectTrainData_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Mode_control_and_train_status_T_TIU_Types_Pkg /* _L5/ */ _L5;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* _L6/ */ _L6;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* _L31/ */ _L31;
  kcg_bool /* _L50/ */ _L50;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* _L52/ */ _L52;
  Mode_control_and_train_status_T_TIU_Types_Pkg /* _L53/ */ _L53;
  Brake_status_T_TIU_Types_Pkg /* _L57/ */ _L57;
  kcg_bool /* _L56/ */ _L56;
  Brake_status_T_TIU_Types_Pkg /* _L55/ */ _L55;
  Brake_status_T_TIU_Types_Pkg /* _L54/ */ _L54;
  Brake_pressure_value_T_TIU_Types_Pkg /* _L61/ */ _L61;
  Brake_pressure_value_T_TIU_Types_Pkg /* _L60/ */ _L60;
  kcg_bool /* _L59/ */ _L59;
  Brake_pressure_value_T_TIU_Types_Pkg /* _L58/ */ _L58;
  trainData_T_TIU_Types_Pkg /* _L65/ */ _L65;
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg /* _L69/ */ _L69;
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg /* _L68/ */ _L68;
  kcg_bool /* _L67/ */ _L67;
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg /* _L66/ */ _L66;
  M_train_data_entry_type_T_TIU_Types_Pkg /* _L71/ */ _L71;
  M_train_data_entry_type_T_TIU_Types_Pkg /* _L72/ */ _L72;
  M_train_data_entry_type_T_TIU_Types_Pkg /* _L73/ */ _L73;
  kcg_bool /* _L74/ */ _L74;
  M_train_data_entry_type_T_TIU_Types_Pkg /* _L75/ */ _L75;
  M_train_data_entry_type_T_TIU_Types_Pkg /* _L76/ */ _L76;
  Mode_control_and_train_status_T_TIU_Types_Pkg /* _L77/ */ _L77;
  trainData_T_TIU_Types_Pkg /* _L78/ */ _L78;
  trainData_T_TIU_Types_Pkg /* _L79/ */ _L79;
} outC_mergeTIU_Info_input_from_TIU_API_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* input_from_TIU_API_Pkg::mergeTIU_Info/ */
extern void mergeTIU_Info_input_from_TIU_API_Pkg(
  /* newInfo/ */
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *newInfo,
  /* storedInfo/ */
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *storedInfo,
  /* EVC_trainData/ */
  trainData_T_TIU_Types_Pkg *EVC_trainData,
  outC_mergeTIU_Info_input_from_TIU_API_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void mergeTIU_Info_reset_input_from_TIU_API_Pkg(
  outC_mergeTIU_Info_input_from_TIU_API_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void mergeTIU_Info_init_input_from_TIU_API_Pkg(
  outC_mergeTIU_Info_input_from_TIU_API_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _mergeTIU_Info_input_from_TIU_API_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mergeTIU_Info_input_from_TIU_API_Pkg.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

