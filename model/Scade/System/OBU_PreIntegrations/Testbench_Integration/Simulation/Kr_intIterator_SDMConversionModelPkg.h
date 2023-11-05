/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _Kr_intIterator_SDMConversionModelPkg_H_
#define _Kr_intIterator_SDMConversionModelPkg_H_

#include "kcg_types.h"
#include "TransformA_realToA_int_SDM_Types_Pkg.h"
#include "LengthLargerThanLKr_SDMConversionModelPkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* goOn/ */ goOn;
  kcg_int32 /* m_now/ */ m_now;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_LengthLargerThanLKr_SDMConversionModelPkg /* _L11=(SDMConversionModelPkg::LengthLargerThanLKr#1)/ */ Context_LengthLargerThanLKr_1;
  outC_TransformA_realToA_int_SDM_Types_Pkg /* _L16=(SDM_Types_Pkg::TransformA_realToA_int#1)/ */ Context_TransformA_realToA_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  nvkrint_T_Packet_Types_Pkg /* _L1/ */ _L1;
  M_NVKRINT /* _L4/ */ _L4;
  L_NVKRINT /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L16/ */ _L16;
} outC_Kr_intIterator_SDMConversionModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMConversionModelPkg::Kr_intIterator/ */
extern void Kr_intIterator_SDMConversionModelPkg(
  /* m_last/ */
  kcg_int32 m_last,
  /* Kr_int/ */
  nvkrint_T_Packet_Types_Pkg *Kr_int,
  /* L/ */
  L_internal_Type_Obu_BasicTypes_Pkg L,
  outC_Kr_intIterator_SDMConversionModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Kr_intIterator_reset_SDMConversionModelPkg(
  outC_Kr_intIterator_SDMConversionModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Kr_intIterator_init_SDMConversionModelPkg(
  outC_Kr_intIterator_SDMConversionModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Kr_intIterator_SDMConversionModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Kr_intIterator_SDMConversionModelPkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

