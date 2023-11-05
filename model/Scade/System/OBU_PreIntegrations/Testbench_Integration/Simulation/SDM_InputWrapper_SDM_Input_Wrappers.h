/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _SDM_InputWrapper_SDM_Input_Wrappers_H_
#define _SDM_InputWrapper_SDM_Input_Wrappers_H_

#include "kcg_types.h"
#include "defaultMA_SDM_Input_Wrappers.h"
#include "ConvertGradient_section_SDM_Input_Wrappers.h"
#include "ConvertMA_SDM_Input_Wrappers.h"
#include "ConvertMRSP_section_SDM_Input_Wrappers.h"
#include "TransformL_intToL_real_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MRSP_internal_T_TargetManagement_types /* mrsp_out/ */ mrsp_out;
  kcg_bool /* mrsp_update_out/ */ mrsp_update_out;
  MA_section_real_T_TargetManagement_types /* ma_out/ */ ma_out;
  kcg_bool /* ma_update_out/ */ ma_update_out;
  TrainLocations_real_T_SDM_Types_Pkg /* trainLocations/ */ trainLocations;
  GradientProfile_real_t_SDM_GradientAcceleration_types /* gp_out/ */ gp_out;
  kcg_bool /* gp_update_out/ */ gp_update_out;
  L_internal_Type_Obu_BasicTypes_Pkg /* offsetAntennaL1/ */ offsetAntennaL1;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  MA_section_real_T_TargetManagement_types /* _L255/ */ _L255;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TransformL_intToL_real_SDM_Types_Pkg /* _L110=(SDM_Types_Pkg::TransformL_intToL_real#11)/ */ Context_TransformL_intToL_real_11;
  outC_TransformL_intToL_real_SDM_Types_Pkg /* _L96=(SDM_Types_Pkg::TransformL_intToL_real#4)/ */ Context_TransformL_intToL_real_4;
  outC_TransformL_intToL_real_SDM_Types_Pkg /* _L105=(SDM_Types_Pkg::TransformL_intToL_real#9)/ */ Context_TransformL_intToL_real_9;
  outC_ConvertMRSP_section_SDM_Input_Wrappers /* _L167=(SDM_Input_Wrappers::ConvertMRSP_section)/ */ Context_ConvertMRSP_section[110];
  outC_TransformL_intToL_real_SDM_Types_Pkg /* _L241=(SDM_Types_Pkg::TransformL_intToL_real#12)/ */ Context_TransformL_intToL_real_12;
  outC_TransformL_intToL_real_SDM_Types_Pkg /* _L250=(SDM_Types_Pkg::TransformL_intToL_real#16)/ */ Context_TransformL_intToL_real_16;
  outC_ConvertGradient_section_SDM_Input_Wrappers /* _L269=(SDM_Input_Wrappers::ConvertGradient_section#1)/ */ Context_ConvertGradient_section_1[50];
  outC_defaultMA_SDM_Input_Wrappers /* _L289=(SDM_Input_Wrappers::defaultMA#1)/ */ Context_defaultMA_1;
  outC_ConvertMA_SDM_Input_Wrappers /* _L255=(SDM_Input_Wrappers::ConvertMA#2)/ */ Context_ConvertMA_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  trainPosition_T_TrainPosition_Types_Pck /* _L5/ */ _L5;
  kcg_bool /* _L74/ */ _L74;
  Location_T_Obu_BasicTypes_Pkg /* _L75/ */ _L75;
  kcg_bool /* _L77/ */ _L77;
  kcg_bool /* _L94/ */ _L94;
  kcg_bool /* _L95/ */ _L95;
  L_internal_real_Type_SDM_Types_Pkg /* _L96/ */ _L96;
  Location_T_Obu_BasicTypes_Pkg /* _L106/ */ _L106;
  L_internal_real_Type_SDM_Types_Pkg /* _L105/ */ _L105;
  L_internal_real_Type_SDM_Types_Pkg /* _L110/ */ _L110;
  Location_T_Obu_BasicTypes_Pkg /* _L109/ */ _L109;
  TrainLocations_real_T_SDM_Types_Pkg /* _L151/ */ _L151;
  MRSP_internal_T_TargetManagement_types /* _L167/ */ _L167;
  trainPosition_T_TrainPosition_Types_Pck /* _L237/ */ _L237;
  positionedBG_T_TrainPosition_Types_Pck /* _L238/ */ _L238;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L239/ */ _L239;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L240/ */ _L240;
  L_internal_real_Type_SDM_Types_Pkg /* _L241/ */ _L241;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L245/ */ _L245;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L246/ */ _L246;
  kcg_int32 /* _L247/ */ _L247;
  kcg_int32 /* _L248/ */ _L248;
  kcg_int32 /* _L249/ */ _L249;
  L_internal_real_Type_SDM_Types_Pkg /* _L250/ */ _L250;
  kcg_bool /* _L262/ */ _L262;
  MovementAuthority_t_TrackAtlasTypes /* _L263/ */ _L263;
  kcg_bool /* _L264/ */ _L264;
  GradientProfile_t_TrackAtlasTypes /* _L265/ */ _L265;
  kcg_bool /* _L266/ */ _L266;
  MRSP_Profile_t_TrackAtlasTypes /* _L267/ */ _L267;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* _L268/ */ _L268;
  GradientProfile_real_t_SDM_GradientAcceleration_types /* _L269/ */ _L269;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L271/ */ _L271;
  trainProperties_T_TrainPosition_Types_Pck /* _L280/ */ _L280;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L279/ */ _L279;
  kcg_int32 /* _L281/ */ _L281;
  MA_Level_t_TrackAtlasTypes /* _L282/ */ _L282;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* _L284/ */ _L284;
  MA_section_real_T_TargetManagement_types /* _L289/ */ _L289;
} outC_SDM_InputWrapper_SDM_Input_Wrappers;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Input_Wrappers::SDM_InputWrapper/ */
extern void SDM_InputWrapper_SDM_Input_Wrappers(
  /* TrainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* dataFromTrackAtlas/ */
  DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTrackAtlas,
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SDM_InputWrapper_reset_SDM_Input_Wrappers(
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SDM_InputWrapper_init_SDM_Input_Wrappers(
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  MA_section_real_T_TargetManagement_types /* _L255/ */ Context__L255;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_SDM_InputWrapper_SDM_Input_Wrappers;

extern void kcg_save_SV_SDM_InputWrapper_SDM_Input_Wrappers(
  SV_SDM_InputWrapper_SDM_Input_Wrappers *SV,
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC);
extern void kcg_load_SV_SDM_InputWrapper_SDM_Input_Wrappers(
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC,
  SV_SDM_InputWrapper_SDM_Input_Wrappers *SV);



#endif /* _SDM_InputWrapper_SDM_Input_Wrappers_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SDM_InputWrapper_SDM_Input_Wrappers.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

