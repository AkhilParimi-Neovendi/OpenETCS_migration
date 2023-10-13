/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _MoveGPSectionsAbsolute_new_TA_Lib_internal_H_
#define _MoveGPSectionsAbsolute_new_TA_Lib_internal_H_

#include "kcg_types.h"
#include "MoveGPSectionsAbsolute_Loop_new_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* ProfileOut/ */ ProfileOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MoveGPSectionsAbsolute_Loop_new_TA_Lib_internal /* _L4=(TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new#1)/ */ Context_MoveGPSectionsAbsolute_Loop_new_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_t_TrackAtlasTypes /* _L2/ */ _L2;
  GradientProfile_t_TrackAtlasTypes /* _L4/ */ _L4;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L37/ */ _L37;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L40/ */ _L40;
} outC_MoveGPSectionsAbsolute_new_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::MoveGPSectionsAbsolute_new/ */
extern void MoveGPSectionsAbsolute_new_TA_Lib_internal(
  /* ProfileIn/ */
  GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_MoveGPSectionsAbsolute_new_TA_Lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MoveGPSectionsAbsolute_new_reset_TA_Lib_internal(
  outC_MoveGPSectionsAbsolute_new_TA_Lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MoveGPSectionsAbsolute_new_init_TA_Lib_internal(
  outC_MoveGPSectionsAbsolute_new_TA_Lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MoveGPSectionsAbsolute_new_TA_Lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MoveGPSectionsAbsolute_new_TA_Lib_internal.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

