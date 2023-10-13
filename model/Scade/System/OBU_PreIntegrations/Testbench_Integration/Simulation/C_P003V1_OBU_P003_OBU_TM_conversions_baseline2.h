/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _C_P003V1_OBU_P003_OBU_TM_conversions_baseline2_H_
#define _C_P003V1_OBU_P003_OBU_TM_conversions_baseline2_H_

#include "kcg_types.h"
#include "C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P003_OBU_T_TM /* P003_onbaord_out/ */ P003_onbaord_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2 /* _L61=(TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list#1)/ */ Context_C_P003V1_OBU_P003_OBU_convert_nid_c_list_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P003_OBU_T_TM /* _L50/ */ _L50;
  kcg_int64 /* _L52/ */ _L52;
  kcg_bool /* _L53/ */ _L53;
  P003V1_OBU_T_TM_baseline2 /* _L54/ */ _L54;
  Q_DIR /* _L55/ */ _L55;
  Q_SCALE /* _L57/ */ _L57;
  D_VALIDNV /* _L58/ */ _L58;
  P003_OBU_nid_c_sectionlist_enum_T_TM /* _L59/ */ _L59;
  N_ITER /* _L60/ */ _L60;
  NID_C /* _L61/ */ _L61;
  V_NVSHUNT /* _L62/ */ _L62;
  V_NVSTFF /* _L63/ */ _L63;
  V_NVONSIGHT /* _L64/ */ _L64;
  P003_permanent_data_T_TM_baseline2 /* _L65/ */ _L65;
  V_NVLIMSUPERV /* _L70/ */ _L70;
  V_NVONSIGHT /* _L71/ */ _L71;
  V_NVREL /* _L72/ */ _L72;
  D_NVROLL /* _L73/ */ _L73;
  Q_NVSBTSMPERM /* _L74/ */ _L74;
  Q_NVEMRRLS /* _L75/ */ _L75;
  P203V1_OBU_T_TM_baseline2 /* _L76/ */ _L76;
  Q_NVGUIPERM /* _L77/ */ _L77;
  Q_NVLOCACC /* _L78/ */ _L78;
  Q_NVSBFBPERM /* _L79/ */ _L79;
  Q_NVINHSMICPERM /* _L80/ */ _L80;
  V_NVALLOWOVTRP /* _L137/ */ _L137;
  V_NVSUPOVTRP /* _L138/ */ _L138;
  D_NVOVTRP /* _L139/ */ _L139;
  T_NVOVTRP /* _L140/ */ _L140;
  D_NVPOTRP /* _L141/ */ _L141;
  M_NVCONTACT /* _L142/ */ _L142;
  T_NVCONTACT /* _L143/ */ _L143;
  M_NVDERUN /* _L144/ */ _L144;
  D_NVSTFF /* _L145/ */ _L145;
  Q_NVDRIVER_ADHES /* _L146/ */ _L146;
  A_NVMAXREDADH1 /* _L147/ */ _L147;
  A_NVMAXREDADH2 /* _L204/ */ _L204;
  A_NVMAXREDADH3 /* _L205/ */ _L205;
  M_NVAVADH /* _L206/ */ _L206;
  M_NVEBCL /* _L207/ */ _L207;
  Q_NVKINT /* _L208/ */ _L208;
  Q_NVKVINTSET /* _L209/ */ _L209;
  A_NVP23 /* _L210/ */ _L210;
  A_NVP12 /* _L211/ */ _L211;
  V_NVKVINT /* _L212/ */ _L212;
  M_NVKVINT /* _L213/ */ _L213;
  M_NVKVINT /* _L214/ */ _L214;
  N_ITER /* _L215/ */ _L215;
  P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 /* _L216/ */ _L216;
  N_ITER /* _L217/ */ _L217;
  P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 /* _L218/ */ _L218;
  L_NVKRINT /* _L219/ */ _L219;
  M_NVKRINT /* _L220/ */ _L220;
  N_ITER /* _L221/ */ _L221;
  P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 /* _L222/ */ _L222;
  M_NVKTINT /* _L223/ */ _L223;
} outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU/ */
extern void C_P003V1_OBU_P003_OBU_TM_conversions_baseline2(
  /* P003V1_onboard/ */
  P003V1_OBU_T_TM_baseline2 *P003V1_onboard,
  /* P203V1_onboard/ */
  P203V1_OBU_T_TM_baseline2 *P203V1_onboard,
  /* PermanentDataP003/ */
  P003_permanent_data_T_TM_baseline2 *PermanentDataP003,
  outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P003V1_OBU_P003_OBU_reset_TM_conversions_baseline2(
  outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P003V1_OBU_P003_OBU_init_TM_conversions_baseline2(
  outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P003V1_OBU_P003_OBU_TM_conversions_baseline2_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

