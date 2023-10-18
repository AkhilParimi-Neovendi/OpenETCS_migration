/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions_H_
#define _getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* LRBG/ */ LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  NID_LRBG /* _L2/ */ _L2;
  positionedBG_T_TrainPosition_Types_Pck /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  NID_BG /* _L5/ */ _L5;
  positionedBG_T_TrainPosition_Types_Pck /* _L7/ */ _L7;
  positionedBG_T_TrainPosition_Types_Pck /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  NID_C /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  NID_C /* _L14/ */ _L14;
} outC_getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions;

/* ===========  node initialization and cycle functions  =========== */
/* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator/ */
extern void getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  /* accumulator/ */
  positionedBG_T_TrainPosition_Types_Pck *accumulator,
  /* nid_c/ */
  NID_C nid_c,
  /* nid_lrbg/ */
  NID_LRBG nid_lrbg,
  /* positionedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *positionedBG,
  outC_getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void getLRBGForRadioMessageIterator_reset_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  outC_getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void getLRBGForRadioMessageIterator_init_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  outC_getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

