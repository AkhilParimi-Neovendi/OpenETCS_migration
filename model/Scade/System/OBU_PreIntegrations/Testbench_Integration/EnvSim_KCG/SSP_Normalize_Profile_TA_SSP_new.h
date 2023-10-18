/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _SSP_Normalize_Profile_TA_SSP_new_H_
#define _SSP_Normalize_Profile_TA_SSP_new_H_

#include "kcg_types.h"
#include "SSP_Normalize_Profile_loop_TA_SSP_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* ProfileNormalized_LRBG/ */ ProfileNormalized_LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SSP_Normalize_Profile_loop_TA_SSP_new /* _L3=(TA_SSP_new::SSP_Normalize_Profile_loop#1)/ */ Context_SSP_Normalize_Profile_loop_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* _L1/ */ _L1;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L3/ */ _L3;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L4/ */ _L4;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L6/ */ _L6;
} outC_SSP_Normalize_Profile_TA_SSP_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP_new::SSP_Normalize_Profile/ */
extern void SSP_Normalize_Profile_TA_SSP_new(
  /* ProfileIn/ */
  StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* pos_BG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* train_length/ */
  L_internal_Type_Obu_BasicTypes_Pkg train_length,
  outC_SSP_Normalize_Profile_TA_SSP_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SSP_Normalize_Profile_reset_TA_SSP_new(
  outC_SSP_Normalize_Profile_TA_SSP_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SSP_Normalize_Profile_init_TA_SSP_new(
  outC_SSP_Normalize_Profile_TA_SSP_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SSP_Normalize_Profile_TA_SSP_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Normalize_Profile_TA_SSP_new.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

