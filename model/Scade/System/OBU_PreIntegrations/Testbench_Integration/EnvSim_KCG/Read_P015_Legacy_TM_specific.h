/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Read_P015_Legacy_TM_specific_H_
#define _Read_P015_Legacy_TM_specific_H_

#include "kcg_types.h"
#include "C_P015_to_legacy_t_TM_conversions.h"
#include "Read_P015_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P15_Level23MovementAuthorities_T_Packet_Types_Pkg /* P015_legacy_out/ */ P015_legacy_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P015_to_legacy_t_TM_conversions /* _L4=(TM_conversions::C_P015_to_legacy_t#1)/ */ Context_C_P015_to_legacy_t_1;
  outC_Read_P015_TM /* _L1=(TM::Read_P015#1)/ */ Context_Read_P015_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P015_OBU_T_TM /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  CompressedPackets_T_Common_Types_Pkg /* _L3/ */ _L3;
  P15_Level23MovementAuthorities_T_Packet_Types_Pkg /* _L4/ */ _L4;
} outC_Read_P015_Legacy_TM_specific;

/* ===========  node initialization and cycle functions  =========== */
/* TM_specific::Read_P015_Legacy/ */
extern void Read_P015_Legacy_TM_specific(
  /* Message_IN/ */
  CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P015_Legacy_TM_specific *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Read_P015_Legacy_reset_TM_specific(
  outC_Read_P015_Legacy_TM_specific *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Read_P015_Legacy_init_TM_specific(
  outC_Read_P015_Legacy_TM_specific *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Read_P015_Legacy_TM_specific_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Read_P015_Legacy_TM_specific.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

