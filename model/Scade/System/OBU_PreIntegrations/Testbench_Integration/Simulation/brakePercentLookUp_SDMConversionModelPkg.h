/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _brakePercentLookUp_SDMConversionModelPkg_H_
#define _brakePercentLookUp_SDMConversionModelPkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  av_Map_t_SDMConversionModelPkg /* av/ */ av;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* V_lim/ */ V_lim;
  kcg_int64 /* _L1/ */ _L1;
  array_int64_6_221 /* _L67/ */ _L67;
  array_int64_6 /* _L68/ */ _L68;
  array_int64_6 /* _L74/ */ _L74;
  kcg_int64 /* _L76/ */ _L76;
  kcg_int64 /* _L77/ */ _L77;
  array_int64_4 /* _L78/ */ _L78;
  array_int64_221 /* _L79/ */ _L79;
  kcg_int64 /* _L80/ */ _L80;
  kcg_int64 /* _L81/ */ _L81;
  kcg_int64 /* _L89/ */ _L89;
  kcg_int64 /* _L91/ */ _L91;
  kcg_bool /* _L96/ */ _L96;
  kcg_int64 /* _L97/ */ _L97;
  kcg_int64 /* _L98/ */ _L98;
  kcg_int64 /* _L99/ */ _L99;
  kcg_int64 /* _L100/ */ _L100;
  kcg_bool /* _L101/ */ _L101;
  kcg_bool /* _L102/ */ _L102;
  kcg_int64 /* _L104/ */ _L104;
  kcg_int64 /* _L105/ */ _L105;
  kcg_int64 /* _L106/ */ _L106;
  kcg_int64 /* _L107/ */ _L107;
  kcg_int64 /* _L108/ */ _L108;
  kcg_int64 /* _L109/ */ _L109;
  kcg_int64 /* _L110/ */ _L110;
  kcg_int64 /* _L111/ */ _L111;
  kcg_int64 /* _L112/ */ _L112;
  kcg_bool /* _L113/ */ _L113;
  kcg_int64 /* _L116/ */ _L116;
  kcg_int64 /* _L117/ */ _L117;
  av_Map_t_SDMConversionModelPkg /* _L120/ */ _L120;
  array_int64_6 /* _L127/ */ _L127;
  kcg_int64 /* _L114/ */ _L114;
} outC_brakePercentLookUp_SDMConversionModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMConversionModelPkg::brakePercentLookUp/ */
extern void brakePercentLookUp_SDMConversionModelPkg(
  /* lambda0/ */
  kcg_int64 lambda0,
  outC_brakePercentLookUp_SDMConversionModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void brakePercentLookUp_reset_SDMConversionModelPkg(
  outC_brakePercentLookUp_SDMConversionModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void brakePercentLookUp_init_SDMConversionModelPkg(
  outC_brakePercentLookUp_SDMConversionModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _brakePercentLookUp_SDMConversionModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** brakePercentLookUp_SDMConversionModelPkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

