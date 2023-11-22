/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Kv_intVectorMapper_SDMConversionModelPkg_H_
#define _Kv_intVectorMapper_SDMConversionModelPkg_H_

#include "kcg_types.h"
#include "Kv_intVectorMerger_SDMConversionModelPkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  av_MergedMap_t_SDMConversionModelPkg /* A_brake_safe/ */ A_brake_safe;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Kv_intVectorMerger_SDMConversionModelPkg /* _L12=(SDMConversionModelPkg::Kv_intVectorMerger#1)/ */ Context_Kv_intVectorMerger_1[13];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  av_Map_t_SDMConversionModelPkg /* _L1/ */ _L1;
  mv_Map_t_SDMConversionModelPkg /* _L2/ */ _L2;
  array_int32_13 /* _L13/ */ _L13;
  array_int32_2 /* _L12/ */ _L12;
  _169_array /* _L14/ */ _L14;
  _168_array /* _L16/ */ _L16;
  array_int32_2 /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
  array_int32_13 /* _L19/ */ _L19;
  av_MergedMap_t_SDMConversionModelPkg /* _L26/ */ _L26;
} outC_Kv_intVectorMapper_SDMConversionModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMConversionModelPkg::Kv_intVectorMapper/ */
extern void Kv_intVectorMapper_SDMConversionModelPkg(
  /* Kv_int/ */
  mv_Map_t_SDMConversionModelPkg *Kv_int,
  /* A_brake_em/ */
  av_Map_t_SDMConversionModelPkg *A_brake_em,
  outC_Kv_intVectorMapper_SDMConversionModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Kv_intVectorMapper_reset_SDMConversionModelPkg(
  outC_Kv_intVectorMapper_SDMConversionModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Kv_intVectorMapper_init_SDMConversionModelPkg(
  outC_Kv_intVectorMapper_SDMConversionModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Kv_intVectorMapper_SDMConversionModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Kv_intVectorMapper_SDMConversionModelPkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

