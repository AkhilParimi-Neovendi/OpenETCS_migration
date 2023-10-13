/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _Write_int_to_EVC_to_DMI_Messages_H_
#define _Write_int_to_EVC_to_DMI_Messages_H_

#include "kcg_types.h"
#include "CAST_int_to_EVC_to_DMI_Messages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  EVC_to_DMI_Message_T_API_DMI_Pkg /* evc_to_dmi_ct/ */ evc_to_dmi_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_int_to_EVC_to_DMI_Messages /* _L5=(Messages::CAST_int_to_EVC_to_DMI#1)/ */ Context_CAST_int_to_EVC_to_DMI_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  EVC_to_DMI_Message_T_API_DMI_Pkg /* _L5/ */ _L5;
  EVC_to_DMI_Message_T_API_DMI_Pkg /* _L6/ */ _L6;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* _L7/ */ _L7;
} outC_Write_int_to_EVC_to_DMI_Messages;

/* ===========  node initialization and cycle functions  =========== */
/* Messages::Write_int_to_EVC_to_DMI/ */
extern void Write_int_to_EVC_to_DMI_Messages(
  /* evc_to_dmi_int/ */
  EVC_to_DMI_Message_int_T_API_DMI_Pkg *evc_to_dmi_int,
  outC_Write_int_to_EVC_to_DMI_Messages *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_int_to_EVC_to_DMI_reset_Messages(
  outC_Write_int_to_EVC_to_DMI_Messages *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_int_to_EVC_to_DMI_init_Messages(
  outC_Write_int_to_EVC_to_DMI_Messages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_int_to_EVC_to_DMI_Messages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_EVC_to_DMI_Messages.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

