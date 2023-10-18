/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Build_MRSP_TA_MRSP_new_H_
#define _Build_MRSP_TA_MRSP_new_H_

#include "kcg_types.h"
#include "SP_TSR_TA_SpeedProfiles.h"
#include "SP_STM_SystemSpeed_TA_SpeedProfiles.h"
#include "SP_STM_MaxSpeed_TA_SpeedProfiles.h"
#include "Build_StaticSpeedProfile_TA_SSP_new.h"
#include "SP_SignalingRelated_TA_SpeedProfiles.h"
#include "SP_PBD_SR_TA_SpeedProfiles.h"
#include "SP_OverrideRelated_TA_SpeedProfiles.h"
#include "SP_ModeRelated_TA_SpeedProfiles.h"
#include "SP_MaxTrainSpeed_TA_SpeedProfiles.h"
#include "SP_LX_SR_TA_SpeedProfiles.h"
#include "SP_ASP_TA_SpeedProfiles.h"
#include "Build_SSP_Matrix_TA_SpeedProfiles.h"
#include "Calculate_MRSP1_TA_MRSP_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* newMRSP/ */ newMRSP;
  MRSP_Profile_t_TrackAtlasTypes /* MRSP/ */ MRSP;
  kcg_bool /* SSP_available/ */ SSP_available;
  StaticSpeedProfile_t_TrackAtlasTypes /* SSP/ */ SSP;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  MRSP_Profile_t_TrackAtlasTypes /* _L1/ */ _L1;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Calculate_MRSP1_TA_MRSP_new /* _L1=(TA_MRSP_new::Calculate_MRSP1#1)/ */ Context_Calculate_MRSP1_1;
  outC_Build_SSP_Matrix_TA_SpeedProfiles /* _L19=(TA_SpeedProfiles::Build_SSP_Matrix#1)/ */ Context_Build_SSP_Matrix_1;
  outC_SP_TSR_TA_SpeedProfiles /* _L15=(TA_SpeedProfiles::SP_TSR#1)/ */ Context_SP_TSR_1;
  outC_SP_STM_SystemSpeed_TA_SpeedProfiles /* _L14=(TA_SpeedProfiles::SP_STM_SystemSpeed#1)/ */ Context_SP_STM_SystemSpeed_1;
  outC_SP_STM_MaxSpeed_TA_SpeedProfiles /* _L13=(TA_SpeedProfiles::SP_STM_MaxSpeed#1)/ */ Context_SP_STM_MaxSpeed_1;
  outC_Build_StaticSpeedProfile_TA_SSP_new /* _L26=(TA_SSP_new::Build_StaticSpeedProfile#1)/ */ Context_Build_StaticSpeedProfile_1;
  outC_SP_SignalingRelated_TA_SpeedProfiles /* _L11=(TA_SpeedProfiles::SP_SignalingRelated#1)/ */ Context_SP_SignalingRelated_1;
  outC_SP_PBD_SR_TA_SpeedProfiles /* _L9=(TA_SpeedProfiles::SP_PBD_SR#1)/ */ Context_SP_PBD_SR_1;
  outC_SP_OverrideRelated_TA_SpeedProfiles /* _L8=(TA_SpeedProfiles::SP_OverrideRelated#1)/ */ Context_SP_OverrideRelated_1;
  outC_SP_ModeRelated_TA_SpeedProfiles /* _L7=(TA_SpeedProfiles::SP_ModeRelated#1)/ */ Context_SP_ModeRelated_1;
  outC_SP_MaxTrainSpeed_TA_SpeedProfiles /* _L5=(TA_SpeedProfiles::SP_MaxTrainSpeed#1)/ */ Context_SP_MaxTrainSpeed_1;
  outC_SP_LX_SR_TA_SpeedProfiles /* _L4=(TA_SpeedProfiles::SP_LX_SR#1)/ */ Context_SP_LX_SR_1;
  outC_SP_ASP_TA_SpeedProfiles /* _L3=(TA_SpeedProfiles::SP_ASP#1)/ */ Context_SP_ASP_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_matrix_t_TA_MRSP /* _L2/ */ _L2;
  SSP_cat_t_TA_MRSP /* _L3/ */ _L3;
  SSP_cat_t_TA_MRSP /* _L4/ */ _L4;
  SSP_cat_t_TA_MRSP /* _L5/ */ _L5;
  SSP_cat_t_TA_MRSP /* _L7/ */ _L7;
  SSP_cat_t_TA_MRSP /* _L8/ */ _L8;
  SSP_cat_t_TA_MRSP /* _L9/ */ _L9;
  SSP_cat_t_TA_MRSP /* _L11/ */ _L11;
  SSP_cat_t_TA_MRSP /* _L13/ */ _L13;
  SSP_cat_t_TA_MRSP /* _L14/ */ _L14;
  SSP_cat_t_TA_MRSP /* _L15/ */ _L15;
  ReceivedMessage_T_Common_Types_Pkg /* _L16/ */ _L16;
  FromTIU_t_TrackAtlasTypes /* _L17/ */ _L17;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  trainPosition_T_TrainPosition_Types_Pck /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L25/ */ _L25;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  SSP_cat_t_TA_MRSP_new /* _L29/ */ _L29;
  kcg_int64 /* _L34/ */ _L34;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L22/ */ _L22;
  positionedBGs_T_TrainPosition_Types_Pck /* _L35/ */ _L35;
} outC_Build_MRSP_TA_MRSP_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP_new::Build_MRSP/ */
extern void Build_MRSP_TA_MRSP_new(
  /* MessageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TrainDataIn/ */
  FromTIU_t_TrackAtlasTypes TrainDataIn,
  /* ModeAndLevel_in/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *ModeAndLevel_in,
  /* train_length/ */
  L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* train_position/ */
  trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* balisegroups/ */
  positionedBGs_T_TrainPosition_Types_Pck *balisegroups,
  outC_Build_MRSP_TA_MRSP_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_MRSP_reset_TA_MRSP_new(outC_Build_MRSP_TA_MRSP_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_MRSP_init_TA_MRSP_new(outC_Build_MRSP_TA_MRSP_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Build_MRSP_TA_MRSP_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_MRSP_TA_MRSP_new.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

