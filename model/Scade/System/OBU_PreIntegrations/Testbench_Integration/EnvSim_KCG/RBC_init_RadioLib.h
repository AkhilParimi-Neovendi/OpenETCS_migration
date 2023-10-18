/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RBC_init_RadioLib_H_
#define _RBC_init_RadioLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* R_data_out/ */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* _L1/ */ _L1;
  M_TrackTrain_Radio_T_TM_radio_messages /* _L2/ */ _L2;
  CompressedPackets_T_Common_Types_Pkg /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  kcg_bool /* _L6/ */ _L6;
} outC_RBC_init_RadioLib;

/* ===========  node initialization and cycle functions  =========== */
/* RadioLib::RBC_init/ */
extern void RBC_init_RadioLib(
  /* Message_in/ */
  M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* Packets_in/ */
  CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* Trigger_in/ */
  kcg_int64 Trigger_in,
  /* Message_sent/ */
  kcg_bool Message_sent,
  outC_RBC_init_RadioLib *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RBC_init_reset_RadioLib(outC_RBC_init_RadioLib *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RBC_init_init_RadioLib(outC_RBC_init_RadioLib *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RBC_init_RadioLib_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC_init_RadioLib.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

