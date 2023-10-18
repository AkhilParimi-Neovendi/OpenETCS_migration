/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _Kr_intLookUp_SDMConversionModelPkg_H_
#define _Kr_intLookUp_SDMConversionModelPkg_H_

#include "kcg_types.h"
#include "Kr_intIterator_SDMConversionModelPkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* m_KrInt/ */ m_KrInt;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Kr_intIterator_SDMConversionModelPkg /* _L8=(SDMConversionModelPkg::Kr_intIterator#1)/ */ Context_Kr_intIterator_1[7];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P3_NationalValues_T_Packet_Types_Pkg /* _L2/ */ _L2;
  nvkrintArray_T_Packet_Types_Pkg /* _L1/ */ _L1;
  trainData_T_TIU_Types_Pkg /* _L5/ */ _L5;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  kcg_int64 /* _L6/ */ _L6;
  kcg_int64 /* _L8/ */ _L8;
  kcg_int64 /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  array_int64_7 /* _L11/ */ _L11;
} outC_Kr_intLookUp_SDMConversionModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMConversionModelPkg::Kr_intLookUp/ */
extern void Kr_intLookUp_SDMConversionModelPkg(
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  outC_Kr_intLookUp_SDMConversionModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Kr_intLookUp_reset_SDMConversionModelPkg(
  outC_Kr_intLookUp_SDMConversionModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Kr_intLookUp_init_SDMConversionModelPkg(
  outC_Kr_intLookUp_SDMConversionModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Kr_intLookUp_SDMConversionModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Kr_intLookUp_SDMConversionModelPkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

