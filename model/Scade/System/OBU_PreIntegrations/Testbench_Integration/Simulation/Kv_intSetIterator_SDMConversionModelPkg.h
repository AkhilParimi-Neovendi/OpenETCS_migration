/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _Kv_intSetIterator_SDMConversionModelPkg_H_
#define _Kv_intSetIterator_SDMConversionModelPkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* goOn/ */ goOn;
  kcg_bool /* akku_out/ */ akku_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  nvkvintset_T_Packet_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L8/ */ _L8;
  NC_TRAIN /* _L9/ */ _L9;
  Q_NVKVINTSET /* _L12/ */ _L12;
  Q_NVKVINTSET /* _L13/ */ _L13;
  Q_NVKVINTSET /* _L14/ */ _L14;
  Q_NVKVINTSET /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
} outC_Kv_intSetIterator_SDMConversionModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMConversionModelPkg::Kv_intSetIterator/ */
extern void Kv_intSetIterator_SDMConversionModelPkg(
  /* akku/ */
  kcg_bool akku,
  /* Kv_intSet/ */
  nvkvintset_T_Packet_Types_Pkg *Kv_intSet,
  /* CTrain/ */
  NC_TRAIN CTrain,
  outC_Kv_intSetIterator_SDMConversionModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Kv_intSetIterator_reset_SDMConversionModelPkg(
  outC_Kv_intSetIterator_SDMConversionModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Kv_intSetIterator_init_SDMConversionModelPkg(
  outC_Kv_intSetIterator_SDMConversionModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Kv_intSetIterator_SDMConversionModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Kv_intSetIterator_SDMConversionModelPkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

