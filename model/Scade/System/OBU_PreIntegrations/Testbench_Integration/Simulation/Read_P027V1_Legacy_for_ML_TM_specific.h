/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _Read_P027V1_Legacy_for_ML_TM_specific_H_
#define _Read_P027V1_Legacy_for_ML_TM_specific_H_

#include "kcg_types.h"
#include "C_P027V1_legacy_for_ML_export_TM_conversions_baseline2.h"
#include "Read_P027V1_TM_baseline2.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg /* P027_legacy_out/ */ P027_legacy_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P027V1_legacy_for_ML_export_TM_conversions_baseline2 /* _L4=(TM_conversions_baseline2::C_P027V1_legacy_for_ML_export#1)/ */ Context_C_P027V1_legacy_for_ML_export_1;
  outC_Read_P027V1_TM_baseline2 /* _L1=(TM_baseline2::Read_P027V1#1)/ */ Context_Read_P027V1_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_OBU_T_TM_baseline2 /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  CompressedPackets_T_Common_Types_Pkg /* _L3/ */ _L3;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg /* _L4/ */ _L4;
} outC_Read_P027V1_Legacy_for_ML_TM_specific;

/* ===========  node initialization and cycle functions  =========== */
/* TM_specific::Read_P027V1_Legacy_for_ML/ */
extern void Read_P027V1_Legacy_for_ML_TM_specific(
  /* Message_IN/ */
  CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P027V1_Legacy_for_ML_TM_specific *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Read_P027V1_Legacy_for_ML_reset_TM_specific(
  outC_Read_P027V1_Legacy_for_ML_TM_specific *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Read_P027V1_Legacy_for_ML_init_TM_specific(
  outC_Read_P027V1_Legacy_for_ML_TM_specific *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Read_P027V1_Legacy_for_ML_TM_specific_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Read_P027V1_Legacy_for_ML_TM_specific.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

