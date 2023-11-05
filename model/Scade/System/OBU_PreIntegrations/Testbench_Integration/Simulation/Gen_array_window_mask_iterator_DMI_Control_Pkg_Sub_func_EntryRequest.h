/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest_H_
#define _Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Output/ */ Output;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
} outC_Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::EntryRequest::Gen_array_window_mask_iterator/ */
extern void Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* index/ */
  kcg_int32 index,
  /* position/ */
  kcg_int32 position,
  outC_Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Gen_array_window_mask_iterator_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Gen_array_window_mask_iterator_init_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

