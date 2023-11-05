/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _C_P005_ForCalcTrainPos_TM_conversions_H_
#define _C_P005_ForCalcTrainPos_TM_conversions_H_

#include "kcg_types.h"
#include "C_P005_LinkedBGs_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LinkedBGs_T_BG_Types_Pkg /* LinkedBGsOUT/ */ LinkedBGsOUT;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P005_LinkedBGs_TM_conversions /* _L4=(TM_conversions::C_P005_LinkedBGs#1)/ */ Context_C_P005_LinkedBGs_1[33];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_LRBG /* _L1/ */ _L1;
  P005_OBU_T_TM /* _L2/ */ _L2;
  LinkedBGs_T_BG_Types_Pkg /* _L4/ */ _L4;
  P005_OBU_sectionlist_enum_T_TM /* _L11/ */ _L11;
  N_ITER /* _L10/ */ _L10;
  Q_SCALE /* _L9/ */ _L9;
  L_PACKET /* _L8/ */ _L8;
  Q_DIR /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  P005_OBU_sectionlist_enum_T_TM /* _L18/ */ _L18;
  _20_array /* _L20/ */ _L20;
  _19_array /* _L21/ */ _L21;
  array_int32_33 /* _L22/ */ _L22;
  NID_C /* _L23/ */ _L23;
  array_int32_33 /* _L24/ */ _L24;
} outC_C_P005_ForCalcTrainPos_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P005_ForCalcTrainPos/ */
extern void C_P005_ForCalcTrainPos_TM_conversions(
  /* P005_in/ */
  P005_OBU_T_TM *P005_in,
  /* LRBG/ */
  NID_LRBG LRBG,
  /* NID_C_onboard/ */
  NID_C NID_C_onboard,
  outC_C_P005_ForCalcTrainPos_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P005_ForCalcTrainPos_reset_TM_conversions(
  outC_C_P005_ForCalcTrainPos_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P005_ForCalcTrainPos_init_TM_conversions(
  outC_C_P005_ForCalcTrainPos_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P005_ForCalcTrainPos_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P005_ForCalcTrainPos_TM_conversions.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

