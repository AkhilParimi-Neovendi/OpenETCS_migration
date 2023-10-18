/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _selectTrainData_input_from_TIU_API_Pkg_H_
#define _selectTrainData_input_from_TIU_API_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainData_T_TIU_Types_Pkg /* outTrainData/ */ outTrainData;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  trainData_T_TIU_Types_Pkg /* _L2/ */ _L2;
  trainData_T_TIU_Types_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L8/ */ _L8;
  trainData_T_TIU_Types_Pkg /* _L9/ */ _L9;
  trainData_T_TIU_Types_Pkg /* _L10/ */ _L10;
  trainData_T_TIU_Types_Pkg /* _L14/ */ _L14;
} outC_selectTrainData_input_from_TIU_API_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* input_from_TIU_API_Pkg::selectTrainData/ */
extern void selectTrainData_input_from_TIU_API_Pkg(
  /* newTIUTrainData/ */
  trainData_T_TIU_Types_Pkg *newTIUTrainData,
  /* EVC_trainData/ */
  trainData_T_TIU_Types_Pkg *EVC_trainData,
  outC_selectTrainData_input_from_TIU_API_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void selectTrainData_reset_input_from_TIU_API_Pkg(
  outC_selectTrainData_input_from_TIU_API_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void selectTrainData_init_input_from_TIU_API_Pkg(
  outC_selectTrainData_input_from_TIU_API_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _selectTrainData_input_from_TIU_API_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** selectTrainData_input_from_TIU_API_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

