/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _SSP_Merge_New_P27V1_to_Profile_TA_SSP_new_H_
#define _SSP_Merge_New_P27V1_to_Profile_TA_SSP_new_H_

#include "kcg_types.h"
#include "SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_new.h"
#include "FindStartOfNewSpeedProfileAbs_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* SpeedProfile_out/ */ SpeedProfile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_new /* _L14=(TA_SSP_new::SSP_Merge_New_P27V1_to_Profile_loop#1)/ */ Context_SSP_Merge_New_P27V1_to_Profile_loop_1[50];
  outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal /* _L1=(TA_Lib_internal::FindStartOfNewSpeedProfileAbs#1)/ */ Context_FindStartOfNewSpeedProfileAbs_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L1/ */ _L1;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L5/ */ _L5;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L9/ */ _L9;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L14/ */ _L14;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L45/ */ _L45;
  _3_array /* _L47/ */ _L47;
  kcg_bool /* _L148/ */ _L148;
} outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP_new::SSP_Merge_New_P27V1_to_Profile/ */
extern void SSP_Merge_New_P27V1_to_Profile_TA_SSP_new(
  /* new_GP/ */
  StaticSpeedProfile_t_TrackAtlasTypes *new_GP,
  /* Last_SpeedProfile_in/ */
  StaticSpeedProfile_t_TrackAtlasTypes *Last_SpeedProfile_in,
  outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SSP_Merge_New_P27V1_to_Profile_reset_TA_SSP_new(
  outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SSP_Merge_New_P27V1_to_Profile_init_TA_SSP_new(
  outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SSP_Merge_New_P27V1_to_Profile_TA_SSP_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Merge_New_P27V1_to_Profile_TA_SSP_new.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

