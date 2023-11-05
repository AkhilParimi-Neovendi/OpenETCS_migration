/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _sendTrainData_manage_DMI_Output_Pkg_H_
#define _sendTrainData_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* trainData_ForDMI/ */ trainData_ForDMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  trainData_T_TIU_Types_Pkg /* _L5/ */ _L5;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  NC_TRAIN /* _L8/ */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L11/ */ _L11;
  M_AXLELOADCAT /* _L12/ */ _L12;
  M_AIRTIGHT /* _L13/ */ _L13;
  M_LOADINGGAUGE /* _L14/ */ _L14;
} outC_sendTrainData_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::sendTrainData/ */
extern void sendTrainData_manage_DMI_Output_Pkg(
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* trainDataFromEVC/ */
  trainData_T_TIU_Types_Pkg *trainDataFromEVC,
  outC_sendTrainData_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void sendTrainData_reset_manage_DMI_Output_Pkg(
  outC_sendTrainData_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void sendTrainData_init_manage_DMI_Output_Pkg(
  outC_sendTrainData_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _sendTrainData_manage_DMI_Output_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sendTrainData_manage_DMI_Output_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

