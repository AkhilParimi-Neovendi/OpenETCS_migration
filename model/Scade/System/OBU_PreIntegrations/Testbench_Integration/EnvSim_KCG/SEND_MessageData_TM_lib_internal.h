/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _SEND_MessageData_TM_lib_internal_H_
#define _SEND_MessageData_TM_lib_internal_H_

#include "kcg_types.h"
#include "SEND_WriteBaliseDataElement_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* DataOut/ */ DataOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SEND_WriteBaliseDataElement_TM_lib_internal /* _L402=(TM_lib_internal::SEND_WriteBaliseDataElement#1)/ */ Context_SEND_WriteBaliseDataElement_1[500];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* _L1/ */ _L1;
  kcg_int64 /* _L402/ */ _L402;
  kcg_bool /* _L403/ */ _L403;
  CompressedPacketData_T_Common_Types_Pkg /* _L404/ */ _L404;
  CompressedPacketData_T_Common_Types_Pkg /* _L406/ */ _L406;
  kcg_int64 /* _L407/ */ _L407;
  kcg_int64 /* _L408/ */ _L408;
  array_int64_500_500 /* _L413/ */ _L413;
  CompressedPacketData_T_Common_Types_Pkg /* _L414/ */ _L414;
  CompressedPacketData_T_Common_Types_Pkg /* _L415/ */ _L415;
} outC_SEND_MessageData_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::SEND_MessageData/ */
extern void SEND_MessageData_TM_lib_internal(
  /* StartAddress/ */
  kcg_int64 StartAddress,
  /* EndAddress/ */
  kcg_int64 EndAddress,
  /* DataIn/ */
  CompressedPacketData_T_Common_Types_Pkg *DataIn,
  /* DataElementIn/ */
  CompressedPacketData_T_Common_Types_Pkg *DataElementIn,
  outC_SEND_MessageData_TM_lib_internal *outC);

extern void SEND_MessageData_reset_TM_lib_internal(
  outC_SEND_MessageData_TM_lib_internal *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SEND_MessageData_init_TM_lib_internal(
  outC_SEND_MessageData_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SEND_MessageData_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SEND_MessageData_TM_lib_internal.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

