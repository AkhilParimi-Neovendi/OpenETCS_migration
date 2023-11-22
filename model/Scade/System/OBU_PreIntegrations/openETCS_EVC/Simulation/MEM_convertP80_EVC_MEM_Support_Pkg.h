/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _MEM_convertP80_EVC_MEM_Support_Pkg_H_
#define _MEM_convertP80_EVC_MEM_Support_Pkg_H_

#include "kcg_types.h"
#include "MEM_convertP80_element_EVC_MEM_Support_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P80_ModeProfiles_T_Packet_Types_Pkg /* p80/ */ p80;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MEM_convertP80_element_EVC_MEM_Support_Pkg /* _L4=(EVC_MEM_Support_Pkg::MEM_convertP80_element#1)/ */ Context_MEM_convertP80_element_1[3];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P080_OBU_T_TM /* _L1/ */ _L1;
  P80_ModeProfiles_T_Packet_Types_Pkg /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
  P80_ModeProfile_T_Packet_Types_Pkg /* _L5/ */ _L5;
  _165_array /* _L6/ */ _L6;
  Q_DIR /* _L7/ */ _L7;
  Q_SCALE /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  P080_OBU_sectionlist_enum_T_TM /* _L10/ */ _L10;
  _128_array /* _L11/ */ _L11;
  _162_array /* _L13/ */ _L13;
  _127_array /* _L14/ */ _L14;
  P003_OBU_T_TM /* _L15/ */ _L15;
} outC_MEM_convertP80_EVC_MEM_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_MEM_Support_Pkg::MEM_convertP80/ */
extern void MEM_convertP80_EVC_MEM_Support_Pkg(
  /* P080_OBU/ */
  P080_OBU_T_TM *P080_OBU,
  /* nationalValues/ */
  P003_OBU_T_TM *nationalValues,
  outC_MEM_convertP80_EVC_MEM_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MEM_convertP80_reset_EVC_MEM_Support_Pkg(
  outC_MEM_convertP80_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MEM_convertP80_init_EVC_MEM_Support_Pkg(
  outC_MEM_convertP80_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MEM_convertP80_EVC_MEM_Support_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MEM_convertP80_EVC_MEM_Support_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

