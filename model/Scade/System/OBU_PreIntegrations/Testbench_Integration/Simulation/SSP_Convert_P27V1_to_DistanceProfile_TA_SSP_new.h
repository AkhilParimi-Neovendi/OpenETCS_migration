/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new_H_
#define _SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new_H_

#include "kcg_types.h"
#include "SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* SpeedProfile/ */ SpeedProfile;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new /* _L77=(TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop#1)/ */ Context_SSP_Convert_P27V1_to_DistanceProfile_loop_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_OBU_T_TM_baseline2 /* _L73/ */ _L73;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 /* _L71/ */ _L71;
  Q_SCALE /* _L65/ */ _L65;
  P027V1_OBU_T_TM_baseline2 /* _L63/ */ _L63;
  _16_array /* _L74/ */ _L74;
  _81_array /* _L76/ */ _L76;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L77/ */ _L77;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L83/ */ _L83;
} outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile/ */
extern void SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new(
  /* Packet27V1_in/ */
  P027V1_OBU_T_TM_baseline2 *Packet27V1_in,
  outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SSP_Convert_P27V1_to_DistanceProfile_reset_TA_SSP_new(
  outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SSP_Convert_P27V1_to_DistanceProfile_init_TA_SSP_new(
  outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

