/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _SP_STM_MaxSpeed_TA_SpeedProfiles_H_
#define _SP_STM_MaxSpeed_TA_SpeedProfiles_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_cat_t_TA_MRSP /* STM_MaxSpeed/ */ STM_MaxSpeed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  SSP_cat_t_TA_MRSP /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
} outC_SP_STM_MaxSpeed_TA_SpeedProfiles;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SpeedProfiles::SP_STM_MaxSpeed/ */
extern void SP_STM_MaxSpeed_TA_SpeedProfiles(
  /* reset/ */
  kcg_bool reset,
  /* PacketsIn/ */
  ReceivedMessage_T_Common_Types_Pkg *PacketsIn,
  outC_SP_STM_MaxSpeed_TA_SpeedProfiles *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SP_STM_MaxSpeed_reset_TA_SpeedProfiles(
  outC_SP_STM_MaxSpeed_TA_SpeedProfiles *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SP_STM_MaxSpeed_init_TA_SpeedProfiles(
  outC_SP_STM_MaxSpeed_TA_SpeedProfiles *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SP_STM_MaxSpeed_TA_SpeedProfiles_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SP_STM_MaxSpeed_TA_SpeedProfiles.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

