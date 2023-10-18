/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _triggerForMA_manage_DMI_Input_Pkg_H_
#define _triggerForMA_manage_DMI_Input_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Driver2MAR_T_MA_Request /* outForMA/ */ outForMA;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Request_T_DMI_Types_Pkg /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  Driver2MAR_T_MA_Request /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  DMI_Request_T_DMI_Types_Pkg /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  DMI_Request_T_DMI_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  Driver2MAR_T_MA_Request /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* isValid/ */ isValid;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
} outC_triggerForMA_manage_DMI_Input_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Input_Pkg::triggerForMA/ */
extern void triggerForMA_manage_DMI_Input_Pkg(
  /* fromDMI_driverRequest/ */
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_driverRequest,
  outC_triggerForMA_manage_DMI_Input_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void triggerForMA_reset_manage_DMI_Input_Pkg(
  outC_triggerForMA_manage_DMI_Input_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void triggerForMA_init_manage_DMI_Input_Pkg(
  outC_triggerForMA_manage_DMI_Input_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _triggerForMA_manage_DMI_Input_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** triggerForMA_manage_DMI_Input_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

