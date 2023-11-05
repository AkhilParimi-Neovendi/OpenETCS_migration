/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _MoveSSPSectionsAbsolute_new_TA_Lib_internal_H_
#define _MoveSSPSectionsAbsolute_new_TA_Lib_internal_H_

#include "kcg_types.h"
#include "MoveSSPSectionsAbsolute_Loop_new_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* ProfileOut/ */ ProfileOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MoveSSPSectionsAbsolute_Loop_new_TA_Lib_internal /* _L4=(TA_Lib_internal::MoveSSPSectionsAbsolute_Loop_new#1)/ */ Context_MoveSSPSectionsAbsolute_Loop_new_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* _L2/ */ _L2;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L4/ */ _L4;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L37/ */ _L37;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L40/ */ _L40;
} outC_MoveSSPSectionsAbsolute_new_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::MoveSSPSectionsAbsolute_new/ */
extern void MoveSSPSectionsAbsolute_new_TA_Lib_internal(
  /* ProfileIn/ */
  StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_MoveSSPSectionsAbsolute_new_TA_Lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MoveSSPSectionsAbsolute_new_reset_TA_Lib_internal(
  outC_MoveSSPSectionsAbsolute_new_TA_Lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MoveSSPSectionsAbsolute_new_init_TA_Lib_internal(
  outC_MoveSSPSectionsAbsolute_new_TA_Lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MoveSSPSectionsAbsolute_new_TA_Lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MoveSSPSectionsAbsolute_new_TA_Lib_internal.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

