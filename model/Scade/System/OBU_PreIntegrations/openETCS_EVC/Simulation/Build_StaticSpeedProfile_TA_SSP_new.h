/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Build_StaticSpeedProfile_TA_SSP_new_H_
#define _Build_StaticSpeedProfile_TA_SSP_new_H_

#include "kcg_types.h"
#include "SSP_Postprocessing_TA_SSP_new.h"
#include "SSP_Preprocessing_TA_SSP_new.h"
#include "Get_Position_of_LRBG_TA_Lib_internal.h"
#include "Read_P027V1_TM_baseline2.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* SSP/ */ SSP;
  kcg_bool /* updated/ */ updated;
  kcg_bool /* available/ */ available;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L237/ */ _L237;
  kcg_bool /* _L241/ */ _L241;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L242/ */ _L242;
  NID_BG /* _L248/ */ _L248;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SSP_Postprocessing_TA_SSP_new /* _L241=(TA_SSP_new::SSP_Postprocessing#1)/ */ Context_SSP_Postprocessing_1;
  outC_SSP_Preprocessing_TA_SSP_new /* _L237=(TA_SSP_new::SSP_Preprocessing#1)/ */ Context_SSP_Preprocessing_1;
  outC_Get_Position_of_LRBG_TA_Lib_internal /* _L247=(TA_Lib_internal::Get_Position_of_LRBG#1)/ */ Context_Get_Position_of_LRBG_1;
  outC_Read_P027V1_TM_baseline2 /* _L59=(TM_baseline2::Read_P027V1#1)/ */ Context_Read_P027V1_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  trainPosition_T_TrainPosition_Types_Pck /* _L42/ */ _L42;
  P027V1_OBU_T_TM_baseline2 /* _L60/ */ _L60;
  kcg_bool /* _L59/ */ _L59;
  CompressedPackets_T_Common_Types_Pkg /* _L73/ */ _L73;
  ReceivedMessage_T_Common_Types_Pkg /* _L107/ */ _L107;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L193/ */ _L193;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L194/ */ _L194;
  kcg_bool /* _L202/ */ _L202;
  kcg_bool /* _L209/ */ _L209;
  NID_BG /* _L238/ */ _L238;
  kcg_bool /* _L239/ */ _L239;
  kcg_bool /* _L240/ */ _L240;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L243/ */ _L243;
  positionedBGs_T_TrainPosition_Types_Pck /* _L246/ */ _L246;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L247/ */ _L247;
  trainPosition_T_TrainPosition_Types_Pck /* _L249/ */ _L249;
} outC_Build_StaticSpeedProfile_TA_SSP_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP_new::Build_StaticSpeedProfile/ */
extern void Build_StaticSpeedProfile_TA_SSP_new(
  /* reset/ */
  kcg_bool reset,
  /* MessageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* train_position/ */
  trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* train_length/ */
  L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* balisegroups/ */
  positionedBGs_T_TrainPosition_Types_Pck *balisegroups,
  outC_Build_StaticSpeedProfile_TA_SSP_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_StaticSpeedProfile_reset_TA_SSP_new(
  outC_Build_StaticSpeedProfile_TA_SSP_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_StaticSpeedProfile_init_TA_SSP_new(
  outC_Build_StaticSpeedProfile_TA_SSP_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Build_StaticSpeedProfile_TA_SSP_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_StaticSpeedProfile_TA_SSP_new.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

