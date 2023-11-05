/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _mapMLtoElement_manage_TextMessages_Pkg_H_
#define _mapMLtoElement_manage_TextMessages_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* outDerivedElement/ */ outDerivedElement;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* _L14/ */ _L14;
  kcg_bool /* _L16/ */ _L16;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* _L18/ */ _L18;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* _L21/ */ _L21;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* _L22/ */ _L22;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* _L24/ */ _L24;
  M_MODE /* _L26/ */ _L26;
  kcg_int32 /* _L27/ */ _L27;
  Q_TEXTREPORT /* _L28/ */ _L28;
  kcg_int32 /* _L29/ */ _L29;
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
  M_LEVEL /* _L34/ */ _L34;
} outC_mapMLtoElement_manage_TextMessages_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_TextMessages_Pkg::mapMLtoElement/ */
extern void mapMLtoElement_manage_TextMessages_Pkg(
  /* inModeLevel_Ack/ */
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *inModeLevel_Ack,
  /* announcedLevel/ */
  M_LEVEL announcedLevel,
  outC_mapMLtoElement_manage_TextMessages_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void mapMLtoElement_reset_manage_TextMessages_Pkg(
  outC_mapMLtoElement_manage_TextMessages_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void mapMLtoElement_init_manage_TextMessages_Pkg(
  outC_mapMLtoElement_manage_TextMessages_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _mapMLtoElement_manage_TextMessages_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mapMLtoElement_manage_TextMessages_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

