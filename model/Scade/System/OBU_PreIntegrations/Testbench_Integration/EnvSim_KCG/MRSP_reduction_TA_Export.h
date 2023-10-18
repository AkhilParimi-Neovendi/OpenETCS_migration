/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _MRSP_reduction_TA_Export_H_
#define _MRSP_reduction_TA_Export_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  MRSP_reduction_acc_TA_Export /* reduced/ */ reduced;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* index/ */ index;
  kcg_int64 /* next_index/ */ next_index;
  kcg_int64 /* _L1/ */ _L1;
  MRSP_Profile_t_TrackAtlasTypes /* _L3/ */ _L3;
  MRSP_Profile_t_TrackAtlasTypes /* _L7/ */ _L7;
  kcg_int64 /* _L6/ */ _L6;
  MRSP_reduction_acc_TA_Export /* _L11/ */ _L11;
  kcg_int64 /* _L12/ */ _L12;
  MRSP_Profile_t_TrackAtlasTypes /* _L13/ */ _L13;
  kcg_int64 /* _L14/ */ _L14;
  MRSP_section_t_TrackAtlasTypes /* _L15/ */ _L15;
  kcg_int64 /* _L16/ */ _L16;
  kcg_int64 /* _L17/ */ _L17;
  MRSP_section_t_TrackAtlasTypes /* _L19/ */ _L19;
  MRSP_Profile_t_TrackAtlasTypes /* _L18/ */ _L18;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L20/ */ _L20;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  kcg_int64 /* _L23/ */ _L23;
  kcg_int64 /* _L24/ */ _L24;
  kcg_int64 /* _L25/ */ _L25;
  kcg_int64 /* _L26/ */ _L26;
  kcg_bool /* _L28/ */ _L28;
  MRSP_reduction_acc_TA_Export /* _L2/ */ _L2;
} outC_MRSP_reduction_TA_Export;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Export::MRSP_reduction/ */
extern void MRSP_reduction_TA_Export(
  /* i/ */
  kcg_int64 i,
  /* acc/ */
  MRSP_reduction_acc_TA_Export *acc,
  /* MRSP/ */
  MRSP_Profile_t_TrackAtlasTypes *MRSP,
  outC_MRSP_reduction_TA_Export *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MRSP_reduction_reset_TA_Export(outC_MRSP_reduction_TA_Export *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MRSP_reduction_init_TA_Export(outC_MRSP_reduction_TA_Export *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MRSP_reduction_TA_Export_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MRSP_reduction_TA_Export.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

