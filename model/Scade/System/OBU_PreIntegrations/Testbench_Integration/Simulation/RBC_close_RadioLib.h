/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _RBC_close_RadioLib_H_
#define _RBC_close_RadioLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrackTrain_Radio_T_TM_radio_messages /* Message_out/ */ Message_out;
  CompressedPackets_T_Common_Types_Pkg /* Packets_out/ */ Packets_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* _L1/ */ _L1;
  kcg_bool /* _L5/ */ _L5;
  kcg_int64 /* _L4/ */ _L4;
  CompressedPackets_T_Common_Types_Pkg /* _L3/ */ _L3;
  M_TrackTrain_Radio_T_TM_radio_messages /* _L2/ */ _L2;
} outC_RBC_close_RadioLib;

/* ===========  node initialization and cycle functions  =========== */
/* RadioLib::RBC_close/ */
extern void RBC_close_RadioLib(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_close_RadioLib *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RBC_close_reset_RadioLib(outC_RBC_close_RadioLib *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RBC_close_init_RadioLib(outC_RBC_close_RadioLib *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RBC_close_RadioLib_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC_close_RadioLib.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

