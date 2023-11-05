/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _Kv_intIterator_SDMConversionModelPkg_H_
#define _Kv_intIterator_SDMConversionModelPkg_H_

#include "kcg_types.h"
#include "interpolateMfromA_SDMConversionModelPkg.h"
#include "TransformA_realToA_int_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* goOn/ */ goOn;
  kcg_int32 /* m/ */ m;
  V_internal_Type_Obu_BasicTypes_Pkg /* v/ */ v;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_interpolateMfromA_SDMConversionModelPkg /* _L16=(SDMConversionModelPkg::interpolateMfromA#2)/ */ Context_interpolateMfromA_2;
  outC_TransformA_realToA_int_SDM_Types_Pkg /* _L18=(SDM_Types_Pkg::TransformA_realToA_int#2)/ */ Context_TransformA_realToA_int_2;
  outC_TransformA_realToA_int_SDM_Types_Pkg /* _L17=(SDM_Types_Pkg::TransformA_realToA_int#1)/ */ Context_TransformA_realToA_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  nvkvint_T_Packet_Types_Pkg /* _L1/ */ _L1;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  M_NVKVINT /* _L15/ */ _L15;
  M_NVKVINT /* _L14/ */ _L14;
  V_NVKVINT /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L16/ */ _L16;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L17/ */ _L17;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L18/ */ _L18;
} outC_Kv_intIterator_SDMConversionModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMConversionModelPkg::Kv_intIterator/ */
extern void Kv_intIterator_SDMConversionModelPkg(
  /* Kv_int/ */
  nvkvint_T_Packet_Types_Pkg *Kv_int,
  /* a/ */
  A_internal_Type_Obu_BasicTypes_Pkg a,
  /* a12/ */
  A_internal_Type_Obu_BasicTypes_Pkg a12,
  /* a23/ */
  A_internal_Type_Obu_BasicTypes_Pkg a23,
  /* P/ */
  kcg_bool P,
  outC_Kv_intIterator_SDMConversionModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Kv_intIterator_reset_SDMConversionModelPkg(
  outC_Kv_intIterator_SDMConversionModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Kv_intIterator_init_SDMConversionModelPkg(
  outC_Kv_intIterator_SDMConversionModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Kv_intIterator_SDMConversionModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Kv_intIterator_SDMConversionModelPkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

