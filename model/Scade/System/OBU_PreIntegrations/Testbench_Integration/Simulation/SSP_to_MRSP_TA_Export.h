/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _SSP_to_MRSP_TA_Export_H_
#define _SSP_to_MRSP_TA_Export_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  MRSP_Profile_t_TrackAtlasTypes /* MRSP/ */ MRSP;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L3/ */ _L3;
  MRSP_Profile_t_TrackAtlasTypes /* _L4/ */ _L4;
  MRSP_Profile_t_TrackAtlasTypes /* _L5/ */ _L5;
  StaticSpeedSection_t_TrackAtlasTypes /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L18/ */ _L18;
  kcg_bool /* _L17/ */ _L17;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L16/ */ _L16;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L15/ */ _L15;
  kcg_bool /* _L14/ */ _L14;
  MRSP_section_t_TrackAtlasTypes /* _L19/ */ _L19;
} outC_SSP_to_MRSP_TA_Export;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Export::SSP_to_MRSP/ */
extern void SSP_to_MRSP_TA_Export(
  /* i/ */
  kcg_int32 i,
  /* MRSP_init/ */
  MRSP_Profile_t_TrackAtlasTypes *MRSP_init,
  /* SSP/ */
  StaticSpeedProfile_t_TrackAtlasTypes *SSP,
  outC_SSP_to_MRSP_TA_Export *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SSP_to_MRSP_reset_TA_Export(outC_SSP_to_MRSP_TA_Export *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SSP_to_MRSP_init_TA_Export(outC_SSP_to_MRSP_TA_Export *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SSP_to_MRSP_TA_Export_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_to_MRSP_TA_Export.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

