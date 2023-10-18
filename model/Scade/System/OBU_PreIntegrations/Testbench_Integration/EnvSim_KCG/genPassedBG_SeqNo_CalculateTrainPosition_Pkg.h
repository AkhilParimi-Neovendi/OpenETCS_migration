/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _genPassedBG_SeqNo_CalculateTrainPosition_Pkg_H_
#define _genPassedBG_SeqNo_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.h"
#include "indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* seqNo/ */ seqNo;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg /* _L19=(CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp#1)/ */ Context_countUp_1;
  outC_indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L4=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id#1)/ */ Context_indexOfPassedBG_by_id_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* keepPassedBGSeqNo/ */ keepPassedBGSeqNo;
  kcg_bool /* incrPassedBGSeqNo/ */ incrPassedBGSeqNo;
  passedBG_T_BG_Types_Pkg /* _L1/ */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  kcg_int64 /* _L4/ */ _L4;
  positionedBG_T_TrainPosition_Types_Pck /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_int64 /* _L19/ */ _L19;
  kcg_int64 /* _L20/ */ _L20;
  kcg_int64 /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
} outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::genPassedBG_SeqNo/ */
extern void genPassedBG_SeqNo_CalculateTrainPosition_Pkg(
  /* passedBG/ */
  passedBG_T_BG_Types_Pkg *passedBG,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* reset/ */
  kcg_bool reset,
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void genPassedBG_SeqNo_reset_CalculateTrainPosition_Pkg(
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void genPassedBG_SeqNo_init_CalculateTrainPosition_Pkg(
  outC_genPassedBG_SeqNo_CalculateTrainPosition_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _genPassedBG_SeqNo_CalculateTrainPosition_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** genPassedBG_SeqNo_CalculateTrainPosition_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

