/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _Build_GradientProfile_TA_Gradient_new_H_
#define _Build_GradientProfile_TA_Gradient_new_H_

#include "kcg_types.h"
#include "GP_Postprocessing_TA_Gradient_new.h"
#include "GP_Preprocessing_TA_Gradient_new.h"
#include "Get_Position_of_LRBG_TA_Lib_internal.h"
#include "Read_P021_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* GP/ */ GP;
  kcg_bool /* updated/ */ updated;
  kcg_bool /* available/ */ available;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  GradientProfile_t_TrackAtlasTypes /* _L237/ */ _L237;
  kcg_bool /* _L241/ */ _L241;
  GradientProfile_t_TrackAtlasTypes /* _L242/ */ _L242;
  NID_BG /* _L247/ */ _L247;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GP_Postprocessing_TA_Gradient_new /* _L241=(TA_Gradient_new::GP_Postprocessing#1)/ */ Context_GP_Postprocessing_1;
  outC_GP_Preprocessing_TA_Gradient_new /* _L237=(TA_Gradient_new::GP_Preprocessing#1)/ */ Context_GP_Preprocessing_1;
  outC_Get_Position_of_LRBG_TA_Lib_internal /* _L246=(TA_Lib_internal::Get_Position_of_LRBG#1)/ */ Context_Get_Position_of_LRBG_1;
  outC_Read_P021_TM /* _L59=(TM::Read_P021#1)/ */ Context_Read_P021_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  P021_OBU_T_TM /* _L60/ */ _L60;
  kcg_bool /* _L59/ */ _L59;
  CompressedPackets_T_Common_Types_Pkg /* _L73/ */ _L73;
  ReceivedMessage_T_Common_Types_Pkg /* _L107/ */ _L107;
  kcg_bool /* _L202/ */ _L202;
  NID_BG /* _L238/ */ _L238;
  kcg_bool /* _L239/ */ _L239;
  kcg_bool /* _L240/ */ _L240;
  positionedBGs_T_TrainPosition_Types_Pck /* _L244/ */ _L244;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L246/ */ _L246;
  trainPosition_T_TrainPosition_Types_Pck /* _L248/ */ _L248;
  trainPosition_T_TrainPosition_Types_Pck /* _L42/ */ _L42;
  kcg_bool /* _L209/ */ _L209;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L194/ */ _L194;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L193/ */ _L193;
} outC_Build_GradientProfile_TA_Gradient_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient_new::Build_GradientProfile/ */
extern void Build_GradientProfile_TA_Gradient_new(
  /* reset/ */
  kcg_bool reset,
  /* MessageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* train_position/ */
  trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* balisegroups/ */
  positionedBGs_T_TrainPosition_Types_Pck *balisegroups,
  outC_Build_GradientProfile_TA_Gradient_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_GradientProfile_reset_TA_Gradient_new(
  outC_Build_GradientProfile_TA_Gradient_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_GradientProfile_init_TA_Gradient_new(
  outC_Build_GradientProfile_TA_Gradient_new *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  NID_BG /* _L247/ */ Context__L247;
  GradientProfile_t_TrackAtlasTypes /* _L242/ */ Context__L242;
  kcg_bool /* _L241/ */ Context__L241;
  GradientProfile_t_TrackAtlasTypes /* _L237/ */ Context__L237;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_GP_Postprocessing_TA_Gradient_new Context_GP_Postprocessing_1;
} SV_Build_GradientProfile_TA_Gradient_new;

extern void kcg_save_SV_Build_GradientProfile_TA_Gradient_new(
  SV_Build_GradientProfile_TA_Gradient_new *SV,
  outC_Build_GradientProfile_TA_Gradient_new *outC);
extern void kcg_load_SV_Build_GradientProfile_TA_Gradient_new(
  outC_Build_GradientProfile_TA_Gradient_new *outC,
  SV_Build_GradientProfile_TA_Gradient_new *SV);



#endif /* _Build_GradientProfile_TA_Gradient_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_GradientProfile_TA_Gradient_new.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

