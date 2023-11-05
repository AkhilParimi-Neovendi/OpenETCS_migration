/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _DetermineValidFlags_InformationFilter_Pkg_SecondFilter_H_
#define _DetermineValidFlags_InformationFilter_Pkg_SecondFilter_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* packet/ */ packet;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MetadataElement_T_Common_Types_Pkg /* _L2/ */ _L2;
  MetadataElement_T_Common_Types_Pkg /* _L1/ */ _L1;
  NID_PACKET /* _L3/ */ _L3;
  Q_DIR /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  NID_PACKET /* _L8/ */ _L8;
  Q_DIR /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
  MetadataElement_T_Common_Types_Pkg /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
} outC_DetermineValidFlags_InformationFilter_Pkg_SecondFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::SecondFilter::DetermineValidFlags/ */
extern void DetermineValidFlags_InformationFilter_Pkg_SecondFilter(
  /* filterPacket/ */
  MetadataElement_T_Common_Types_Pkg *filterPacket,
  /* bufferPacket/ */
  MetadataElement_T_Common_Types_Pkg *bufferPacket,
  outC_DetermineValidFlags_InformationFilter_Pkg_SecondFilter *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DetermineValidFlags_reset_InformationFilter_Pkg_SecondFilter(
  outC_DetermineValidFlags_InformationFilter_Pkg_SecondFilter *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DetermineValidFlags_init_InformationFilter_Pkg_SecondFilter(
  outC_DetermineValidFlags_InformationFilter_Pkg_SecondFilter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _DetermineValidFlags_InformationFilter_Pkg_SecondFilter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DetermineValidFlags_InformationFilter_Pkg_SecondFilter.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

