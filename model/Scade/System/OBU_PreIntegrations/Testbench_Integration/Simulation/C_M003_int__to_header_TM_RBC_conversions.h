/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _C_M003_int__to_header_TM_RBC_conversions_H_
#define _C_M003_int__to_header_TM_RBC_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrackTrain_Radio_T_TM_radio_messages /* Message_Header_Out/ */ Message_Header_Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_003_int_T_TM_radio_messages /* _L1/ */ _L1;
  M_TrackTrain_Radio_T_TM_radio_messages /* _L2/ */ _L2;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_int32 /* _L19/ */ _L19;
} outC_C_M003_int__to_header_TM_RBC_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_RBC_conversions::C_M003_int__to_header/ */
extern void C_M003_int__to_header_TM_RBC_conversions(
  /* Message_Data_in/ */
  M_003_int_T_TM_radio_messages *Message_Data_in,
  outC_C_M003_int__to_header_TM_RBC_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_M003_int__to_header_reset_TM_RBC_conversions(
  outC_C_M003_int__to_header_TM_RBC_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_M003_int__to_header_init_TM_RBC_conversions(
  outC_C_M003_int__to_header_TM_RBC_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_M003_int__to_header_TM_RBC_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_M003_int__to_header_TM_RBC_conversions.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

