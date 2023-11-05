/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2_H_
#define _C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_C /* nid_c1/ */ nid_c1;
  N_ITER /* n_iter_out/ */ n_iter_out;
  P003_OBU_nid_c_sectionlist_enum_T_TM /* nid_c_list/ */ nid_c_list;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P003V1_OBU_T_TM_baseline2 /* _L59/ */ _L59;
  N_ITER /* _L108/ */ _L108;
  P003V1_sectionlist_enum_T_TM_baseline2 /* _L109/ */ _L109;
  _101_array /* _L110/ */ _L110;
  P003V1_section_enum_T_TM_baseline2 /* _L111/ */ _L111;
  NID_C /* _L112/ */ _L112;
  _64_array /* _L113/ */ _L113;
  P003V1_section_enum_T_TM_baseline2 /* _L115/ */ _L115;
  _32_array /* _L116/ */ _L116;
} outC_C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list/ */
extern void C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2(
  /* P003V1_onboard/ */
  P003V1_OBU_T_TM_baseline2 *P003V1_onboard,
  outC_C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P003V1_OBU_P003_OBU_convert_nid_c_list_reset_TM_conversions_baseline2(
  outC_C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P003V1_OBU_P003_OBU_convert_nid_c_list_init_TM_conversions_baseline2(
  outC_C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

