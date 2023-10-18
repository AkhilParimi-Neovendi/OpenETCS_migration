/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _C_P042_onboard_legacy_to_int_TM_conversions_H_
#define _C_P042_onboard_legacy_to_int_TM_conversions_H_

#include "kcg_types.h"
#include "CAST_Q_SLEEPSESSION_to_int_TM_conversions.h"
#include "CAST_NID_RADIO_to_int_TM_conversions.h"
#include "CAST_NID_RBC_to_int_TM_conversions.h"
#include "CAST_Q_DIR_to_int_TM_conversions.h"
#include "CAST_Q_RBC_to_int_TM_conversions.h"
#include "CAST_NID_C_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P042_trackside_int_T_TM /* P042_int/ */ P042_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Q_RBC_to_int_TM_conversions /* _L4=(TM_conversions::CAST_Q_RBC_to_int#1)/ */ Context_CAST_Q_RBC_to_int_1;
  outC_CAST_Q_DIR_to_int_TM_conversions /* _L11=(TM_conversions::CAST_Q_DIR_to_int#1)/ */ Context_CAST_Q_DIR_to_int_1;
  outC_CAST_NID_C_to_int_TM_conversions /* _L27=(TM_conversions::CAST_NID_C_to_int#1)/ */ Context_CAST_NID_C_to_int_1;
  outC_CAST_NID_RBC_to_int_TM_conversions /* _L29=(TM_conversions::CAST_NID_RBC_to_int#1)/ */ Context_CAST_NID_RBC_to_int_1;
  outC_CAST_NID_RADIO_to_int_TM_conversions /* _L31=(TM_conversions::CAST_NID_RADIO_to_int#1)/ */ Context_CAST_NID_RADIO_to_int_1;
  outC_CAST_Q_SLEEPSESSION_to_int_TM_conversions /* _L33=(TM_conversions::CAST_Q_SLEEPSESSION_to_int#1)/ */ Context_CAST_Q_SLEEPSESSION_to_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L11/ */ _L11;
  P042_trackside_int_T_TM /* _L10/ */ _L10;
  P42_SessionManagement_T_Packet_Types_Pkg /* _L9/ */ _L9;
  kcg_int64 /* _L4/ */ _L4;
  kcg_int64 /* _L21/ */ _L21;
  kcg_int64 /* _L27/ */ _L27;
  kcg_int64 /* _L29/ */ _L29;
  kcg_int64 /* _L31/ */ _L31;
  kcg_int64 /* _L33/ */ _L33;
  Q_SLEEPSESSION /* _L40/ */ _L40;
  NID_RADIO /* _L39/ */ _L39;
  NID_RBC /* _L38/ */ _L38;
  NID_C /* _L37/ */ _L37;
  Q_RBC /* _L36/ */ _L36;
  Q_DIR /* _L35/ */ _L35;
  kcg_bool /* _L34/ */ _L34;
  kcg_int64 /* _L48/ */ _L48;
} outC_C_P042_onboard_legacy_to_int_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P042_onboard_legacy_to_int/ */
extern void C_P042_onboard_legacy_to_int_TM_conversions(
  /* PacketData/ */
  P42_SessionManagement_T_Packet_Types_Pkg *PacketData,
  outC_C_P042_onboard_legacy_to_int_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P042_onboard_legacy_to_int_reset_TM_conversions(
  outC_C_P042_onboard_legacy_to_int_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P042_onboard_legacy_to_int_init_TM_conversions(
  outC_C_P042_onboard_legacy_to_int_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P042_onboard_legacy_to_int_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P042_onboard_legacy_to_int_TM_conversions.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

