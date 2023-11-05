/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* seqNo/ */ seqNo;
  positionedBG_T_TrainPosition_Types_Pck /* BG_out/ */ BG_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L13/ */ _L13;
  kcg_int32 /* _L14/ */ _L14;
  kcg_int32 /* _L15/ */ _L15;
  positionedBG_T_TrainPosition_Types_Pck /* _L16/ */ _L16;
} outC_trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr/ */
extern void trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* prevSeqNo/ */
  kcg_int32 prevSeqNo,
  /* BG_in/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_in,
  outC_trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void trimSeqNoOnTrack_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void trimSeqNoOnTrack_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

