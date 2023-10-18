/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Get_Position_of_LRBG_TA_Lib_internal_H_
#define _Get_Position_of_LRBG_TA_Lib_internal_H_

#include "kcg_types.h"
#include "Eval_LRBG_TA_Lib_internal.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* Position/ */ Position;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */ Context_indexOfBG_by_id_1;
  outC_Eval_LRBG_TA_Lib_internal /* _L9=(TA_Lib_internal::Eval_LRBG#1)/ */ Context_Eval_LRBG_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_int64 /* _L1/ */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
  ReceivedMessage_T_Common_Types_Pkg /* _L7/ */ _L7;
  positionedBG_T_TrainPosition_Types_Pck /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  Q_LINK /* _L10/ */ _L10;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L11/ */ _L11;
  kcg_int64 /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  infoFromLinking_T_TrainPosition_Types_Pck /* _L14/ */ _L14;
  passedBG_T_BG_Types_Pkg /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  positionedBG_T_TrainPosition_Types_Pck /* _L17/ */ _L17;
  positionedBGs_T_TrainPosition_Types_Pck /* _L18/ */ _L18;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L19/ */ _L19;
} outC_Get_Position_of_LRBG_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::Get_Position_of_LRBG/ */
extern void Get_Position_of_LRBG_TA_Lib_internal(
  /* MessageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* balisegroups/ */
  positionedBGs_T_TrainPosition_Types_Pck *balisegroups,
  outC_Get_Position_of_LRBG_TA_Lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Get_Position_of_LRBG_reset_TA_Lib_internal(
  outC_Get_Position_of_LRBG_TA_Lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Get_Position_of_LRBG_init_TA_Lib_internal(
  outC_Get_Position_of_LRBG_TA_Lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Get_Position_of_LRBG_TA_Lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Get_Position_of_LRBG_TA_Lib_internal.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

