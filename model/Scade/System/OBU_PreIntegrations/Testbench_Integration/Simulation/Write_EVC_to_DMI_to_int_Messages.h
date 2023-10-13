/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _Write_EVC_to_DMI_to_int_Messages_H_
#define _Write_EVC_to_DMI_to_int_Messages_H_

#include "kcg_types.h"
#include "CAST_EVC_to_DMI_to_int_Messages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* evc_to_dmi_int/ */ evc_to_dmi_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_EVC_to_DMI_to_int_Messages /* _L2=(Messages::CAST_EVC_to_DMI_to_int#1)/ */ Context_CAST_EVC_to_DMI_to_int_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* _L4/ */ _L4;
  EVC_to_DMI_Message_T_API_DMI_Pkg /* _L5/ */ _L5;
} outC_Write_EVC_to_DMI_to_int_Messages;

/* ===========  node initialization and cycle functions  =========== */
/* Messages::Write_EVC_to_DMI_to_int/ */
extern void Write_EVC_to_DMI_to_int_Messages(
  /* evc_to_dmi_ct/ */
  EVC_to_DMI_Message_T_API_DMI_Pkg *evc_to_dmi_ct,
  outC_Write_EVC_to_DMI_to_int_Messages *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_EVC_to_DMI_to_int_reset_Messages(
  outC_Write_EVC_to_DMI_to_int_Messages *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_EVC_to_DMI_to_int_init_Messages(
  outC_Write_EVC_to_DMI_to_int_Messages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_EVC_to_DMI_to_int_Messages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_EVC_to_DMI_to_int_Messages.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

