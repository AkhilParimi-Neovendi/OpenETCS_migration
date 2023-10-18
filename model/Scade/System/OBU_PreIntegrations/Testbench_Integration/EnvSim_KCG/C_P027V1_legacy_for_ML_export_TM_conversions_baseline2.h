/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _C_P027V1_legacy_for_ML_export_TM_conversions_baseline2_H_
#define _C_P027V1_legacy_for_ML_export_TM_conversions_baseline2_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg /* P027_legacy_out/ */ P027_legacy_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_OBU_T_TM_baseline2 /* _L1/ */ _L1;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg /* _L2/ */ _L2;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
} outC_C_P027V1_legacy_for_ML_export_TM_conversions_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export/ */
extern void C_P027V1_legacy_for_ML_export_TM_conversions_baseline2(
  /* P027_in/ */
  P027V1_OBU_T_TM_baseline2 *P027_in,
  outC_C_P027V1_legacy_for_ML_export_TM_conversions_baseline2 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P027V1_legacy_for_ML_export_reset_TM_conversions_baseline2(
  outC_C_P027V1_legacy_for_ML_export_TM_conversions_baseline2 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P027V1_legacy_for_ML_export_init_TM_conversions_baseline2(
  outC_C_P027V1_legacy_for_ML_export_TM_conversions_baseline2 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P027V1_legacy_for_ML_export_TM_conversions_baseline2_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P027V1_legacy_for_ML_export_TM_conversions_baseline2.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

