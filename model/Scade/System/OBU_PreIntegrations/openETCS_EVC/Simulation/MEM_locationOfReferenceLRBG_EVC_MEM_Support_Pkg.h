/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg_H_
#define _MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg_H_

#include "kcg_types.h"
#include "Decode_NID_LRBG_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* position/ */ position;
  kcg_bool /* passed/ */ passed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Decode_NID_LRBG_TM /* _L13=(TM::Decode_NID_LRBG#1)/ */ Context_Decode_NID_LRBG_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  trainPosition_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  positionedBG_T_TrainPosition_Types_Pck /* _L3/ */ _L3;
  NID_C /* _L4/ */ _L4;
  NID_BG /* _L5/ */ _L5;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  NID_LRBG /* _L10/ */ _L10;
  kcg_bool /* _L12/ */ _L12;
  NID_BG /* _L14/ */ _L14;
  NID_C /* _L13/ */ _L13;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  Location_T_Obu_BasicTypes_Pkg /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_int32 /* _L19/ */ _L19;
  trainProperties_T_TrainPosition_Types_Pck /* _L20/ */ _L20;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L21/ */ _L21;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L22/ */ _L22;
} outC_MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG/ */
extern void MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg(
  /* LRBG/ */
  NID_LRBG LRBG,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MEM_locationOfReferenceLRBG_reset_EVC_MEM_Support_Pkg(
  outC_MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MEM_locationOfReferenceLRBG_init_EVC_MEM_Support_Pkg(
  outC_MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

