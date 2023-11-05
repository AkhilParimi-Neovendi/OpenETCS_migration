/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _Calculate_MRSP1_TA_MRSP_new_H_
#define _Calculate_MRSP1_TA_MRSP_new_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MRSP_Profile_t_TrackAtlasTypes /* MRSP/ */ MRSP;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_matrix_t_TA_MRSP_new /* _L15/ */ _L15;
  MRSP_Profile_t_TrackAtlasTypes /* _L18/ */ _L18;
} outC_Calculate_MRSP1_TA_MRSP_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP_new::Calculate_MRSP1/ */
extern void Calculate_MRSP1_TA_MRSP_new(
  /* SSP_matrix_in/ */
  SSP_matrix_t_TA_MRSP_new *SSP_matrix_in,
  outC_Calculate_MRSP1_TA_MRSP_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Calculate_MRSP1_reset_TA_MRSP_new(
  outC_Calculate_MRSP1_TA_MRSP_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Calculate_MRSP1_init_TA_MRSP_new(
  outC_Calculate_MRSP1_TA_MRSP_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Calculate_MRSP1_TA_MRSP_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Calculate_MRSP1_TA_MRSP_new.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

