/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest_H_
#define _GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* condition/ */ condition;
  kcg_int64 /* acc_out/ */ acc_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* _L3/ */ _L3;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
} outC_GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator/ */
extern void GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* index_in/ */
  kcg_int64 index_in,
  /* acc_in/ */
  kcg_int64 acc_in,
  /* inputA/ */
  DMI_List_Entry_Request_T_DMI_Types_Pkg inputA,
  /* inputB/ */
  DMI_List_Entry_Request_T_DMI_Types_Pkg inputB,
  outC_GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GenerateIndexForMask_iterator_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GenerateIndexForMask_iterator_init_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

