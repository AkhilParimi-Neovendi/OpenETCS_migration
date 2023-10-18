/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _SP_LX_SR_TA_SpeedProfiles_H_
#define _SP_LX_SR_TA_SpeedProfiles_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_cat_t_TA_MRSP /* LX_SR/ */ LX_SR;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* _L4/ */ _L4;
  SSP_cat_t_TA_MRSP /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
} outC_SP_LX_SR_TA_SpeedProfiles;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SpeedProfiles::SP_LX_SR/ */
extern void SP_LX_SR_TA_SpeedProfiles(
  /* reset/ */
  kcg_bool reset,
  /* PacketsIn/ */
  ReceivedMessage_T_Common_Types_Pkg *PacketsIn,
  outC_SP_LX_SR_TA_SpeedProfiles *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SP_LX_SR_reset_TA_SpeedProfiles(
  outC_SP_LX_SR_TA_SpeedProfiles *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SP_LX_SR_init_TA_SpeedProfiles(
  outC_SP_LX_SR_TA_SpeedProfiles *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SP_LX_SR_TA_SpeedProfiles_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SP_LX_SR_TA_SpeedProfiles.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

