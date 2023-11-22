/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _storeTIUData_trainData_pkg_H_
#define _storeTIUData_trainData_pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainData_T_TIU_Types_Pkg /* actualTrainData/ */ actualTrainData;
  trainDataStatus_T_trainData_Types_pkg /* updatedStatus/ */ updatedStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  trainData_T_TIU_Types_Pkg /* _L1/ */ _L1;
  trainData_T_TIU_Types_Pkg /* _L2/ */ _L2;
  trainDataStatus_T_trainData_Types_pkg /* _L3/ */ _L3;
  trainDataStatus_T_trainData_Types_pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  trainDataStatus_T_trainData_Types_pkg /* _L6/ */ _L6;
} outC_storeTIUData_trainData_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::storeTIUData/ */
extern void storeTIUData_trainData_pkg(
  /* trainDatafromTIU/ */
  trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* originalTrainData/ */
  trainData_T_TIU_Types_Pkg *originalTrainData,
  /* actualStatus/ */
  trainDataStatus_T_trainData_Types_pkg *actualStatus,
  outC_storeTIUData_trainData_pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void storeTIUData_reset_trainData_pkg(
  outC_storeTIUData_trainData_pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void storeTIUData_init_trainData_pkg(
  outC_storeTIUData_trainData_pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _storeTIUData_trainData_pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** storeTIUData_trainData_pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

