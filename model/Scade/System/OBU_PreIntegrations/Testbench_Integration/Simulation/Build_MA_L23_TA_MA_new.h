/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _Build_MA_L23_TA_MA_new_H_
#define _Build_MA_L23_TA_MA_new_H_

#include "kcg_types.h"
#include "Get_Position_of_LRBG_TA_Lib_internal.h"
#include "Get_EOA_TA_MA_new.h"
#include "MA_L23_Postprocessing_TA_MA_new.h"
#include "MA_L23_Preprocessing_TA_MA_new.h"
#include "Read_P015_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* updated/ */ updated;
  kcg_bool /* available/ */ available;
  MovementAuthority_t_TrackAtlasTypes /* MA_absolute/ */ MA_absolute;
  L_internal_Type_Obu_BasicTypes_Pkg /* currentEOA/ */ currentEOA;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  NID_BG /* _L111/ */ _L111;
  MovementAuthority_t_TrackAtlasTypes /* _L237/ */ _L237;
  MovementAuthority_t_TrackAtlasTypes /* _L242/ */ _L242;
  MovementAuthority_t_TrackAtlasTypes /* _L246/ */ _L246;
  kcg_bool /* _L247/ */ _L247;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Get_EOA_TA_MA_new /* _L254=(TA_MA_new::Get_EOA#1)/ */ Context_Get_EOA_1;
  outC_MA_L23_Postprocessing_TA_MA_new /* _L242=(TA_MA_new::MA_L23_Postprocessing#1)/ */ Context_MA_L23_Postprocessing_1;
  outC_MA_L23_Preprocessing_TA_MA_new /* _L237=(TA_MA_new::MA_L23_Preprocessing#1)/ */ Context_MA_L23_Preprocessing_1;
  outC_Get_Position_of_LRBG_TA_Lib_internal /* _L256=(TA_Lib_internal::Get_Position_of_LRBG#1)/ */ Context_Get_Position_of_LRBG_1;
  outC_Read_P015_TM /* _L59=(TM::Read_P015#1)/ */ Context_Read_P015_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  trainPosition_T_TrainPosition_Types_Pck /* _L42/ */ _L42;
  P015_OBU_T_TM /* _L60/ */ _L60;
  kcg_bool /* _L59/ */ _L59;
  CompressedPackets_T_Common_Types_Pkg /* _L73/ */ _L73;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L193/ */ _L193;
  NID_BG /* _L238/ */ _L238;
  kcg_bool /* _L239/ */ _L239;
  kcg_bool /* _L240/ */ _L240;
  P003V1_OBU_T_TM_baseline2 /* _L244/ */ _L244;
  kcg_bool /* _L250/ */ _L250;
  kcg_bool /* _L249/ */ _L249;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L248/ */ _L248;
  kcg_bool /* _L202/ */ _L202;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L254/ */ _L254;
  trainPosition_T_TrainPosition_Types_Pck /* _L255/ */ _L255;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L256/ */ _L256;
  ReceivedMessage_T_Common_Types_Pkg /* _L257/ */ _L257;
  positionedBGs_T_TrainPosition_Types_Pck /* _L258/ */ _L258;
} outC_Build_MA_L23_TA_MA_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_new::Build_MA_L23/ */
extern void Build_MA_L23_TA_MA_new(
  /* reset/ */
  kcg_bool reset,
  /* MessageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* NV_in/ */
  P003V1_OBU_T_TM_baseline2 *NV_in,
  /* train_position/ */
  trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* reject_new_MA/ */
  kcg_bool reject_new_MA,
  /* updatedEOA_from_EM/ */
  kcg_bool updatedEOA_from_EM,
  /* newEOA_from_EM/ */
  L_internal_Type_Obu_BasicTypes_Pkg newEOA_from_EM,
  /* balisegroups/ */
  positionedBGs_T_TrainPosition_Types_Pck *balisegroups,
  outC_Build_MA_L23_TA_MA_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_MA_L23_reset_TA_MA_new(outC_Build_MA_L23_TA_MA_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_MA_L23_init_TA_MA_new(outC_Build_MA_L23_TA_MA_new *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* _L247/ */ Context__L247;
  MovementAuthority_t_TrackAtlasTypes /* _L246/ */ Context__L246;
  MovementAuthority_t_TrackAtlasTypes /* _L242/ */ Context__L242;
  MovementAuthority_t_TrackAtlasTypes /* _L237/ */ Context__L237;
  NID_BG /* _L111/ */ Context__L111;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_MA_L23_Postprocessing_TA_MA_new Context_MA_L23_Postprocessing_1;
} SV_Build_MA_L23_TA_MA_new;

extern void kcg_save_SV_Build_MA_L23_TA_MA_new(
  SV_Build_MA_L23_TA_MA_new *SV,
  outC_Build_MA_L23_TA_MA_new *outC);
extern void kcg_load_SV_Build_MA_L23_TA_MA_new(
  outC_Build_MA_L23_TA_MA_new *outC,
  SV_Build_MA_L23_TA_MA_new *SV);



#endif /* _Build_MA_L23_TA_MA_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_MA_L23_TA_MA_new.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

