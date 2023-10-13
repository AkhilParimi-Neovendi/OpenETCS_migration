/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _Write_int_to_DMI_to_EVC_Messages_H_
#define _Write_int_to_DMI_to_EVC_Messages_H_

#include "kcg_types.h"
#include "CAST_int_to_DMI_to_EVC_Messages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_to_EVC_Message_T_API_DMI_Pkg /* dmi_to_evc_ct/ */ dmi_to_evc_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_int_to_DMI_to_EVC_Messages /* _L5=(Messages::CAST_int_to_DMI_to_EVC#1)/ */ Context_CAST_int_to_DMI_to_EVC_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  DMI_to_EVC_Message_T_API_DMI_Pkg /* _L5/ */ _L5;
  DMI_to_EVC_Message_T_API_DMI_Pkg /* _L6/ */ _L6;
} outC_Write_int_to_DMI_to_EVC_Messages;

/* ===========  node initialization and cycle functions  =========== */
/* Messages::Write_int_to_DMI_to_EVC/ */
extern void Write_int_to_DMI_to_EVC_Messages(
  /* dmi_to_evc_int/ */
  DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmi_to_evc_int,
  outC_Write_int_to_DMI_to_EVC_Messages *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_int_to_DMI_to_EVC_reset_Messages(
  outC_Write_int_to_DMI_to_EVC_Messages *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_int_to_DMI_to_EVC_init_Messages(
  outC_Write_int_to_DMI_to_EVC_Messages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_int_to_DMI_to_EVC_Messages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_to_EVC_Messages.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

