/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _MRSP_limit_to_EOA_TA_Export_H_
#define _MRSP_limit_to_EOA_TA_Export_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  MRSP_section_t_TrackAtlasTypes /* limited/ */ limited;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MRSP_section_t_TrackAtlasTypes /* MRSP_section0/ */ MRSP_section0;
  MRSP_section_t_TrackAtlasTypes /* MRSP_section1/ */ MRSP_section1;
  kcg_int32 /* _L1/ */ _L1;
  MRSP_Profile_t_TrackAtlasTypes /* _L3/ */ _L3;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L225/ */ _L225;
  MRSP_section_t_TrackAtlasTypes /* _L226/ */ _L226;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L227/ */ _L227;
  kcg_bool /* _L229/ */ _L229;
  MRSP_section_t_TrackAtlasTypes /* _L230/ */ _L230;
  MRSP_section_t_TrackAtlasTypes /* _L231/ */ _L231;
  MRSP_section_t_TrackAtlasTypes /* _L233/ */ _L233;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L235/ */ _L235;
  kcg_bool /* _L236/ */ _L236;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L237/ */ _L237;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L238/ */ _L238;
  kcg_bool /* _L239/ */ _L239;
  kcg_bool /* _L240/ */ _L240;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L241/ */ _L241;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L242/ */ _L242;
  MRSP_section_t_TrackAtlasTypes /* _L244/ */ _L244;
  MRSP_section_t_TrackAtlasTypes /* _L245/ */ _L245;
  MRSP_section_t_TrackAtlasTypes /* _L249/ */ _L249;
  kcg_int32 /* _L248/ */ _L248;
  MRSP_Profile_t_TrackAtlasTypes /* _L247/ */ _L247;
  kcg_int32 /* _L250/ */ _L250;
  kcg_int32 /* _L251/ */ _L251;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L252/ */ _L252;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L253/ */ _L253;
  kcg_bool /* _L254/ */ _L254;
  MRSP_section_t_TrackAtlasTypes /* _L255/ */ _L255;
  MRSP_section_t_TrackAtlasTypes /* _L256/ */ _L256;
  MRSP_section_t_TrackAtlasTypes /* _L257/ */ _L257;
} outC_MRSP_limit_to_EOA_TA_Export;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Export::MRSP_limit_to_EOA/ */
extern void MRSP_limit_to_EOA_TA_Export(
  /* i/ */
  kcg_int32 i,
  /* MRSP/ */
  MRSP_Profile_t_TrackAtlasTypes *MRSP,
  /* EoA/ */
  L_internal_Type_Obu_BasicTypes_Pkg EoA,
  outC_MRSP_limit_to_EOA_TA_Export *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MRSP_limit_to_EOA_reset_TA_Export(
  outC_MRSP_limit_to_EOA_TA_Export *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MRSP_limit_to_EOA_init_TA_Export(
  outC_MRSP_limit_to_EOA_TA_Export *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MRSP_limit_to_EOA_TA_Export_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MRSP_limit_to_EOA_TA_Export.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

