/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _LengthLargerThanLKr_SDMConversionModelPkg_H_
#define _LengthLargerThanLKr_SDMConversionModelPkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isLarger/ */ isLarger;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  L_NVKRINT /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  array_int32_32 /* _L7/ */ _L7;
  kcg_int32 /* _L81/ */ _L81;
  kcg_int32 /* _L80/ */ _L80;
  kcg_int32 /* _L79/ */ _L79;
  kcg_int32 /* _L78/ */ _L78;
  kcg_int32 /* _L77/ */ _L77;
  kcg_int32 /* _L76/ */ _L76;
  kcg_int32 /* _L75/ */ _L75;
  kcg_int32 /* _L74/ */ _L74;
  kcg_int32 /* _L73/ */ _L73;
  kcg_int32 /* _L72/ */ _L72;
  kcg_int32 /* _L71/ */ _L71;
  kcg_int32 /* _L70/ */ _L70;
  kcg_int32 /* _L69/ */ _L69;
  kcg_int32 /* _L68/ */ _L68;
  kcg_int32 /* _L67/ */ _L67;
  kcg_int32 /* _L66/ */ _L66;
  kcg_int32 /* _L65/ */ _L65;
  kcg_int32 /* _L64/ */ _L64;
  kcg_int32 /* _L63/ */ _L63;
  kcg_int32 /* _L62/ */ _L62;
  kcg_int32 /* _L61/ */ _L61;
  kcg_int32 /* _L60/ */ _L60;
  kcg_int32 /* _L59/ */ _L59;
  kcg_int32 /* _L58/ */ _L58;
  kcg_int32 /* _L57/ */ _L57;
  kcg_int32 /* _L56/ */ _L56;
  kcg_int32 /* _L55/ */ _L55;
  kcg_int32 /* _L54/ */ _L54;
  kcg_int32 /* _L53/ */ _L53;
  kcg_int32 /* _L52/ */ _L52;
  kcg_int32 /* _L51/ */ _L51;
  kcg_int32 /* _L50/ */ _L50;
  kcg_int32 /* _L82/ */ _L82;
  kcg_int32 /* _L83/ */ _L83;
} outC_LengthLargerThanLKr_SDMConversionModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMConversionModelPkg::LengthLargerThanLKr/ */
extern void LengthLargerThanLKr_SDMConversionModelPkg(
  /* L/ */
  L_internal_Type_Obu_BasicTypes_Pkg L,
  /* LnvKrInt/ */
  L_NVKRINT LnvKrInt,
  outC_LengthLargerThanLKr_SDMConversionModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LengthLargerThanLKr_reset_SDMConversionModelPkg(
  outC_LengthLargerThanLKr_SDMConversionModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LengthLargerThanLKr_init_SDMConversionModelPkg(
  outC_LengthLargerThanLKr_SDMConversionModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _LengthLargerThanLKr_SDMConversionModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LengthLargerThanLKr_SDMConversionModelPkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

