/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _Build_SSP_Matrix_TA_SpeedProfiles_H_
#define _Build_SSP_Matrix_TA_SpeedProfiles_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* SSP_matrix_updated/ */ SSP_matrix_updated;
  SSP_matrix_t_TA_MRSP /* SSP_matrix_out/ */ SSP_matrix_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_cat_t_TA_MRSP /* _L1/ */ _L1;
  SSP_cat_t_TA_MRSP /* _L2/ */ _L2;
  SSP_cat_t_TA_MRSP /* _L3/ */ _L3;
  SSP_cat_t_TA_MRSP /* _L4/ */ _L4;
  SSP_cat_t_TA_MRSP /* _L5/ */ _L5;
  SSP_cat_t_TA_MRSP /* _L6/ */ _L6;
  SSP_cat_t_TA_MRSP /* _L7/ */ _L7;
  SSP_cat_t_TA_MRSP /* _L8/ */ _L8;
  SSP_cat_t_TA_MRSP /* _L9/ */ _L9;
  SSP_cat_t_TA_MRSP /* _L10/ */ _L10;
  SSP_cat_t_TA_MRSP /* _L11/ */ _L11;
  _83_array /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
} outC_Build_SSP_Matrix_TA_SpeedProfiles;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SpeedProfiles::Build_SSP_Matrix/ */
extern void Build_SSP_Matrix_TA_SpeedProfiles(
  /* ASP/ */
  SSP_cat_t_TA_MRSP *ASP,
  /* LX_SR/ */
  SSP_cat_t_TA_MRSP *LX_SR,
  /* MaxTrainSpeed/ */
  SSP_cat_t_TA_MRSP *MaxTrainSpeed,
  /* ModeRelated/ */
  SSP_cat_t_TA_MRSP *ModeRelated,
  /* OverrideRelated/ */
  SSP_cat_t_TA_MRSP *OverrideRelated,
  /* PBD_SR/ */
  SSP_cat_t_TA_MRSP *PBD_SR,
  /* SignalingRelated/ */
  SSP_cat_t_TA_MRSP *SignalingRelated,
  /* SSP/ */
  SSP_cat_t_TA_MRSP *SSP,
  /* SSP_updated/ */
  kcg_bool SSP_updated,
  /* STM_MaxSpeed/ */
  SSP_cat_t_TA_MRSP *STM_MaxSpeed,
  /* STM_SystemSpeed/ */
  SSP_cat_t_TA_MRSP *STM_SystemSpeed,
  /* TSR/ */
  SSP_cat_t_TA_MRSP *TSR,
  outC_Build_SSP_Matrix_TA_SpeedProfiles *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_SSP_Matrix_reset_TA_SpeedProfiles(
  outC_Build_SSP_Matrix_TA_SpeedProfiles *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_SSP_Matrix_init_TA_SpeedProfiles(
  outC_Build_SSP_Matrix_TA_SpeedProfiles *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Build_SSP_Matrix_TA_SpeedProfiles_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_SSP_Matrix_TA_SpeedProfiles.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

