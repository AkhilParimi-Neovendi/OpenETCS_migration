/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _SetValidFlag_InformationFilter_Pkg_Common_H_
#define _SetValidFlag_InformationFilter_Pkg_Common_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* outPacket/ */ outPacket;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MetadataElement_T_Common_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  MetadataElement_T_Common_Types_Pkg /* _L3/ */ _L3;
  NID_PACKET /* _L4/ */ _L4;
  Q_DIR /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L7/ */ _L7;
  kcg_bool /* _L9/ */ _L9;
} outC_SetValidFlag_InformationFilter_Pkg_Common;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::Common::SetValidFlag/ */
extern void SetValidFlag_InformationFilter_Pkg_Common(
  /* inValidFlag/ */
  kcg_bool inValidFlag,
  /* inPacket/ */
  MetadataElement_T_Common_Types_Pkg *inPacket,
  outC_SetValidFlag_InformationFilter_Pkg_Common *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SetValidFlag_reset_InformationFilter_Pkg_Common(
  outC_SetValidFlag_InformationFilter_Pkg_Common *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SetValidFlag_init_InformationFilter_Pkg_Common(
  outC_SetValidFlag_InformationFilter_Pkg_Common *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SetValidFlag_InformationFilter_Pkg_Common_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SetValidFlag_InformationFilter_Pkg_Common.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

