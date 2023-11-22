/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions_H_
#define _validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* outMetadataElement/ */ outMetadataElement;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L32/ */ _L32_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L31/ */ _L31_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L30/ */ _L30_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L29/ */ _L29_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  MetadataElement_T_Common_Types_Pkg /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  Q_DIRTRAIN /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  Q_DIR /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  MetadataElement_T_Common_Types_Pkg /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  Q_DIR /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  Q_DIR /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  NID_PACKET /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  Q_DIRTRAIN /* IfBlock1:then:_L16/ */ _L16_then_IfBlock1;
  Q_DIRTRAIN /* IfBlock1:then:_L18/ */ _L18_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L19/ */ _L19_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L20/ */ _L20_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L21/ */ _L21_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L22/ */ _L22_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L23/ */ _L23_then_IfBlock1;
  Q_DIR /* IfBlock1:then:_L24/ */ _L24_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L25/ */ _L25_then_IfBlock1;
  Q_DIRTRAIN /* IfBlock1:then:_L27/ */ _L27_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L28/ */ _L28_then_IfBlock1;
  MetadataElement_T_Common_Types_Pkg /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* trainPositionKnown/ */ trainPositionKnown;
  trainPosition_T_TrainPosition_Types_Pck /* _L36/ */ _L36;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L34/ */ _L34;
} outC_validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions;

/* ===========  node initialization and cycle functions  =========== */
/* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket/ */
extern void validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  /* inMetadataElement/ */
  MetadataElement_T_Common_Types_Pkg *inMetadataElement,
  /* inTrainRunningDirection/ */
  Q_DIRTRAIN inTrainRunningDirection,
  /* LRBGKnown/ */
  kcg_bool LRBGKnown,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* coordinateSystemAssigned/ */
  kcg_bool coordinateSystemAssigned,
  outC_validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void validateDataDirectionForS_reset_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  outC_validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void validateDataDirectionForS_init_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  outC_validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

