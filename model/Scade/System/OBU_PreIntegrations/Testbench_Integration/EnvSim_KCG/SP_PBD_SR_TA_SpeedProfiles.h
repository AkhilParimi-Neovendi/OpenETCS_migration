/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _SP_PBD_SR_TA_SpeedProfiles_H_
#define _SP_PBD_SR_TA_SpeedProfiles_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_cat_t_TA_MRSP /* PBD_SR/ */ PBD_SR;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  SSP_cat_t_TA_MRSP /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
} outC_SP_PBD_SR_TA_SpeedProfiles;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SpeedProfiles::SP_PBD_SR/ */
extern void SP_PBD_SR_TA_SpeedProfiles(
  /* reset/ */
  kcg_bool reset,
  /* MessageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  outC_SP_PBD_SR_TA_SpeedProfiles *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SP_PBD_SR_reset_TA_SpeedProfiles(
  outC_SP_PBD_SR_TA_SpeedProfiles *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SP_PBD_SR_init_TA_SpeedProfiles(
  outC_SP_PBD_SR_TA_SpeedProfiles *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SP_PBD_SR_TA_SpeedProfiles_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SP_PBD_SR_TA_SpeedProfiles.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

