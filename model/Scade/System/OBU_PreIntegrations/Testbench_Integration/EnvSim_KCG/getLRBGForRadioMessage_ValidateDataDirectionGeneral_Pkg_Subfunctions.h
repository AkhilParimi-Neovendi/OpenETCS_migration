/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions_H_
#define _getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions_H_

#include "kcg_types.h"
#include "Decode_NID_LRBG_TM.h"
#include "getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* outLRBG/ */ outLRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions /* _L5=(ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator#1)/ */ Context_getLRBGForRadioMessageIterator_1[41];
  outC_Decode_NID_LRBG_TM /* _L9=(TM::Decode_NID_LRBG#1)/ */ Context_Decode_NID_LRBG_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  NID_LRBG /* _L3/ */ _L3;
  positionedBG_T_TrainPosition_Types_Pck /* _L5/ */ _L5;
  array_int64_41 /* _L6/ */ _L6;
  positionedBG_T_TrainPosition_Types_Pck /* _L8/ */ _L8;
  NID_BG /* _L10/ */ _L10;
  NID_C /* _L9/ */ _L9;
  array_int64_41 /* _L12/ */ _L12;
} outC_getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions;

/* ===========  node initialization and cycle functions  =========== */
/* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage/ */
extern void getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  /* inMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* inPositionedBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *inPositionedBGs,
  outC_getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void getLRBGForRadioMessage_reset_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  outC_getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void getLRBGForRadioMessage_init_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  outC_getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

