/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _C_P005_LinkedBGs_TM_conversions_H_
#define _C_P005_LinkedBGs_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LinkedBG_T_BG_Types_Pkg /* LinkedBGsOUT/ */ LinkedBGsOUT;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_C /* nid_c/ */ nid_c;
  Q_NEWCOUNTRY /* q_newcountry/ */ q_newcountry;
  LinkedBG_T_BG_Types_Pkg /* _L2/ */ _L2;
  NID_LRBG /* _L3/ */ _L3;
  Q_DIR /* _L4/ */ _L4;
  Q_SCALE /* _L5/ */ _L5;
  P005_section_enum_T_TM /* _L6/ */ _L6;
  Q_LOCACC /* _L14/ */ _L14;
  Q_LINKREACTION /* _L13/ */ _L13;
  Q_LINKORIENTATION /* _L12/ */ _L12;
  NID_BG /* _L11/ */ _L11;
  NID_C /* _L10/ */ _L10;
  Q_NEWCOUNTRY /* _L9/ */ _L9;
  D_LINK /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  NID_C /* _L15/ */ _L15;
  Q_NEWCOUNTRY /* _L16/ */ _L16;
  NID_C /* _L17/ */ _L17;
  NID_C /* _L18/ */ _L18;
  Q_NEWCOUNTRY /* _L19/ */ _L19;
  Q_NEWCOUNTRY /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
} outC_C_P005_LinkedBGs_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P005_LinkedBGs/ */
extern void C_P005_LinkedBGs_TM_conversions(
  /* LRBG/ */
  NID_LRBG LRBG,
  /* q_dir/ */
  Q_DIR q_dir,
  /* q_scale/ */
  Q_SCALE q_scale,
  /* SectionsIn/ */
  P005_section_enum_T_TM *SectionsIn,
  /* NID_C_onboard/ */
  NID_C NID_C_onboard,
  outC_C_P005_LinkedBGs_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P005_LinkedBGs_reset_TM_conversions(
  outC_C_P005_LinkedBGs_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P005_LinkedBGs_init_TM_conversions(
  outC_C_P005_LinkedBGs_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P005_LinkedBGs_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P005_LinkedBGs_TM_conversions.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

