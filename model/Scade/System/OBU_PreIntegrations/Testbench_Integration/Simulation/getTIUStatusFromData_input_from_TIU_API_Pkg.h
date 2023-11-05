/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _getTIUStatusFromData_input_from_TIU_API_Pkg_H_
#define _getTIUStatusFromData_input_from_TIU_API_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TIU_trainStatus_T_TIU_Types_Pkg /* outStatus/ */ outStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* isA/ */ isA;
  kcg_bool /* isB/ */ isB;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* _L1/ */ _L1;
  Mode_control_and_train_status_T_TIU_Types_Pkg /* _L3/ */ _L3;
  TIU_trainStatus_T_TIU_Types_Pkg /* _L4/ */ _L4;
  M_cab_signal_status_T_TIU_Types_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L11/ */ _L11;
  M_cab_signal_status_T_TIU_Types_Pkg /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  M_cab_signal_status_T_TIU_Types_Pkg /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  M_cab_signal_status_T_TIU_Types_Pkg /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  cab_ID_T_TIU_Types_Pkg /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  cab_ID_T_TIU_Types_Pkg /* _L21/ */ _L21;
  cab_ID_T_TIU_Types_Pkg /* _L24/ */ _L24;
  cab_ID_T_TIU_Types_Pkg /* _L23/ */ _L23;
  kcg_bool /* _L25/ */ _L25;
  cab_ID_T_TIU_Types_Pkg /* _L26/ */ _L26;
} outC_getTIUStatusFromData_input_from_TIU_API_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* input_from_TIU_API_Pkg::getTIUStatusFromData/ */
extern void getTIUStatusFromData_input_from_TIU_API_Pkg(
  /* inTIUActualData/ */
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *inTIUActualData,
  outC_getTIUStatusFromData_input_from_TIU_API_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void getTIUStatusFromData_reset_input_from_TIU_API_Pkg(
  outC_getTIUStatusFromData_input_from_TIU_API_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void getTIUStatusFromData_init_input_from_TIU_API_Pkg(
  outC_getTIUStatusFromData_input_from_TIU_API_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _getTIUStatusFromData_input_from_TIU_API_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getTIUStatusFromData_input_from_TIU_API_Pkg.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

