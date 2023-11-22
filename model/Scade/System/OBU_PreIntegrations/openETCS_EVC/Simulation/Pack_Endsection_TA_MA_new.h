/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Pack_Endsection_TA_MA_new_H_
#define _Pack_Endsection_TA_MA_new_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P015_section_enum_T_TM /* endsection/ */ endsection;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P015_OBU_T_TM /* _L1/ */ _L1;
  P015_section_enum_T_TM /* _L46/ */ _L46;
  kcg_bool /* _L47/ */ _L47;
  L_ENDSECTION /* _L48/ */ _L48;
  D_SECTIONTIMERSTOPLOC /* _L52/ */ _L52;
  Q_SECTIONTIMER /* _L54/ */ _L54;
  T_SECTIONTIMER /* _L53/ */ _L53;
} outC_Pack_Endsection_TA_MA_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_new::Pack_Endsection/ */
extern void Pack_Endsection_TA_MA_new(
  /* Packet15_in/ */
  P015_OBU_T_TM *Packet15_in,
  outC_Pack_Endsection_TA_MA_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Pack_Endsection_reset_TA_MA_new(
  outC_Pack_Endsection_TA_MA_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Pack_Endsection_init_TA_MA_new(
  outC_Pack_Endsection_TA_MA_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Pack_Endsection_TA_MA_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Pack_Endsection_TA_MA_new.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

