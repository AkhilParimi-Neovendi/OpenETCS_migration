/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _Read_P005_ForCalcTrainPos_TM_specific_H_
#define _Read_P005_ForCalcTrainPos_TM_specific_H_

#include "kcg_types.h"
#include "C_P005_ForCalcTrainPos_TM_conversions.h"
#include "Read_P005_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LinkedBGs_T_BG_Types_Pkg /* LinkedBGsOUT/ */ LinkedBGsOUT;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P005_ForCalcTrainPos_TM_conversions /* _L4=(TM_conversions::C_P005_ForCalcTrainPos#1)/ */ Context_C_P005_ForCalcTrainPos_1;
  outC_Read_P005_TM /* _L6=(TM::Read_P005#1)/ */ Context_Read_P005_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* _L1/ */ _L1;
  NID_LRBG /* _L2/ */ _L2;
  P005_OBU_T_TM /* _L3/ */ _L3;
  LinkedBGs_T_BG_Types_Pkg /* _L4/ */ _L4;
  NID_C /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
} outC_Read_P005_ForCalcTrainPos_TM_specific;

/* ===========  node initialization and cycle functions  =========== */
/* TM_specific::Read_P005_ForCalcTrainPos/ */
extern void Read_P005_ForCalcTrainPos_TM_specific(
  /* RadioMessage_IN/ */
  CompressedPackets_T_Common_Types_Pkg *RadioMessage_IN,
  /* LRBG/ */
  NID_LRBG LRBG,
  /* NID_C_onboard/ */
  NID_C NID_C_onboard,
  outC_Read_P005_ForCalcTrainPos_TM_specific *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Read_P005_ForCalcTrainPos_reset_TM_specific(
  outC_Read_P005_ForCalcTrainPos_TM_specific *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Read_P005_ForCalcTrainPos_init_TM_specific(
  outC_Read_P005_ForCalcTrainPos_TM_specific *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Read_P005_ForCalcTrainPos_TM_specific_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Read_P005_ForCalcTrainPos_TM_specific.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

