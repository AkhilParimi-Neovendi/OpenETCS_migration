/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _synchWithDMI_manage_DMI_Output_Pkg_H_
#define _synchWithDMI_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* send_dmi_identifierRequest/ */ send_dmi_identifierRequest;
  dmiOutputs_T_manage_DMI_Output_Pkg /* updatedOutputStatus/ */ updatedOutputStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* doSend/ */ doSend;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L2/ */ _L2;
  TIU_trainStatus_T_TIU_Types_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L5/ */ _L5;
  dmiOutputs_T_manage_DMI_Output_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L15/ */ _L15;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L16/ */ _L16;
  dmiOutputs_T_manage_DMI_Output_Pkg /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L21/ */ _L21;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L22/ */ _L22;
} outC_synchWithDMI_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::synchWithDMI/ */
extern void synchWithDMI_manage_DMI_Output_Pkg(
  /* dmi_identifierRequest/ */
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_identifierRequest,
  /* TIU_TrainStatus/ */
  TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* outputStatus/ */
  dmiOutputs_T_manage_DMI_Output_Pkg *outputStatus,
  /* systemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_synchWithDMI_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void synchWithDMI_reset_manage_DMI_Output_Pkg(
  outC_synchWithDMI_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void synchWithDMI_init_manage_DMI_Output_Pkg(
  outC_synchWithDMI_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _synchWithDMI_manage_DMI_Output_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** synchWithDMI_manage_DMI_Output_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

