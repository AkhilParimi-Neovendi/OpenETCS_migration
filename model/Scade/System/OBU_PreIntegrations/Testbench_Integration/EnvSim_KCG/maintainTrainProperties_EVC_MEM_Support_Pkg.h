/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _maintainTrainProperties_EVC_MEM_Support_Pkg_H_
#define _maintainTrainProperties_EVC_MEM_Support_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainProperties_T_TrainPosition_Types_Pck /* UpdatedtrainProperties/ */ UpdatedtrainProperties;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  NID_OPERATIONAL /* _L13/ */ _L13;
  NID_OPERATIONAL /* _L14/ */ _L14;
  trainProperties_T_TrainPosition_Types_Pck /* _L15/ */ _L15;
  NID_OPERATIONAL /* _L16/ */ _L16;
  trainProperties_T_TrainPosition_Types_Pck /* _L17/ */ _L17;
  trainData_T_TIU_Types_Pkg /* _L18/ */ _L18;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L19/ */ _L19;
  kcg_int64 /* _L21/ */ _L21;
  kcg_int64 /* _L22/ */ _L22;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L23/ */ _L23;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L24/ */ _L24;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L25/ */ _L25;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L26/ */ _L26;
  NID_ENGINE /* _L27/ */ _L27;
} outC_maintainTrainProperties_EVC_MEM_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_MEM_Support_Pkg::maintainTrainProperties/ */
extern void maintainTrainProperties_EVC_MEM_Support_Pkg(
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* trainRunningNumber/ */
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *trainRunningNumber,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* nid_engine/ */
  NID_ENGINE nid_engine,
  outC_maintainTrainProperties_EVC_MEM_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void maintainTrainProperties_reset_EVC_MEM_Support_Pkg(
  outC_maintainTrainProperties_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void maintainTrainProperties_init_EVC_MEM_Support_Pkg(
  outC_maintainTrainProperties_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _maintainTrainProperties_EVC_MEM_Support_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** maintainTrainProperties_EVC_MEM_Support_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

