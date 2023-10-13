/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _SP_ModeRelated_TA_SpeedProfiles_H_
#define _SP_ModeRelated_TA_SpeedProfiles_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_cat_t_TA_MRSP /* ModeRelated/ */ ModeRelated;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L2/ */ _L2;
  SSP_cat_t_TA_MRSP /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  SSP_cat_t_TA_MRSP /* _L5/ */ _L5;
  SSP_cat_t_TA_MRSP /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
} outC_SP_ModeRelated_TA_SpeedProfiles;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SpeedProfiles::SP_ModeRelated/ */
extern void SP_ModeRelated_TA_SpeedProfiles(
  /* reset/ */
  kcg_bool reset,
  /* SP_available/ */
  kcg_bool SP_available,
  /* MessageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* ModeDataIn/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *ModeDataIn,
  outC_SP_ModeRelated_TA_SpeedProfiles *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SP_ModeRelated_reset_TA_SpeedProfiles(
  outC_SP_ModeRelated_TA_SpeedProfiles *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SP_ModeRelated_init_TA_SpeedProfiles(
  outC_SP_ModeRelated_TA_SpeedProfiles *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SP_ModeRelated_TA_SpeedProfiles_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SP_ModeRelated_TA_SpeedProfiles.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

