/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _Kv_intConstructor_SDMConversionModelPkg_H_
#define _Kv_intConstructor_SDMConversionModelPkg_H_

#include "kcg_types.h"
#include "Kv_intVectorMapper_SDMConversionModelPkg.h"
#include "Kv_intIterator_SDMConversionModelPkg.h"
#include "Kv_intSetIterator_SDMConversionModelPkg.h"
#include "TransformA_realToA_int_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  av_MergedMap_t_SDMConversionModelPkg /* A_brake_safe/ */ A_brake_safe;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Kv_intVectorMapper_SDMConversionModelPkg /* _L59=(SDMConversionModelPkg::Kv_intVectorMapper#1)/ */ Context_Kv_intVectorMapper_1;
  outC_Kv_intIterator_SDMConversionModelPkg /* _L39=(SDMConversionModelPkg::Kv_intIterator#1)/ */ Context_Kv_intIterator_1[7];
  outC_TransformA_realToA_int_SDM_Types_Pkg /* _L58=(SDM_Types_Pkg::TransformA_realToA_int#2)/ */ Context_TransformA_realToA_int_2;
  outC_TransformA_realToA_int_SDM_Types_Pkg /* _L57=(SDM_Types_Pkg::TransformA_realToA_int#1)/ */ Context_TransformA_realToA_int_1;
  outC_Kv_intSetIterator_SDMConversionModelPkg /* _L10=(SDMConversionModelPkg::Kv_intSetIterator#1)/ */ Context_Kv_intSetIterator_1[7];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  nvkvintsetArray_T_Packet_Types_Pkg /* _L6/ */ _L6;
  P3_NationalValues_T_Packet_Types_Pkg /* _L4/ */ _L4;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  kcg_bool /* _L12/ */ _L12;
  nvkvintset_T_Packet_Types_Pkg /* _L14/ */ _L14;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  nvkvintset_T_Packet_Types_Pkg /* _L27/ */ _L27;
  kcg_bool /* _L32/ */ _L32;
  NC_TRAIN /* _L34/ */ _L34;
  trainData_T_TIU_Types_Pkg /* _L33/ */ _L33;
  _75_array /* _L35/ */ _L35;
  av_Map_t_SDMConversionModelPkg /* _L36/ */ _L36;
  array_int32_7 /* _L38/ */ _L38;
  kcg_int32 /* _L39/ */ _L39;
  array_int32_7 /* _L41/ */ _L41;
  kcg_bool /* _L42/ */ _L42;
  nvkvintArray_T_Packet_Types_Pkg /* _L43/ */ _L43;
  array_int32_7 /* _L44/ */ _L44;
  array_int32_7 /* _L45/ */ _L45;
  array_int32_7 /* _L46/ */ _L46;
  array_bool_7 /* _L47/ */ _L47;
  A_NVP12 /* _L48/ */ _L48;
  A_NVP23 /* _L49/ */ _L49;
  Q_NVKVINTSET /* _L50/ */ _L50;
  kcg_bool /* _L51/ */ _L51;
  Q_NVKVINTSET /* _L52/ */ _L52;
  kcg_int32 /* _L55/ */ _L55;
  kcg_int32 /* _L56/ */ _L56;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L57/ */ _L57;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L58/ */ _L58;
  av_MergedMap_t_SDMConversionModelPkg /* _L59/ */ _L59;
  mv_Map_t_SDMConversionModelPkg /* _L66/ */ _L66;
  Q_NVKINT /* _L70/ */ _L70;
  Q_NVKINT /* _L68/ */ _L68;
  kcg_bool /* _L67/ */ _L67;
} outC_Kv_intConstructor_SDMConversionModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMConversionModelPkg::Kv_intConstructor/ */
extern void Kv_intConstructor_SDMConversionModelPkg(
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* A_ebmax/ */
  A_internal_Type_Obu_BasicTypes_Pkg A_ebmax,
  /* A_brake_em/ */
  av_Map_t_SDMConversionModelPkg *A_brake_em,
  outC_Kv_intConstructor_SDMConversionModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Kv_intConstructor_reset_SDMConversionModelPkg(
  outC_Kv_intConstructor_SDMConversionModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Kv_intConstructor_init_SDMConversionModelPkg(
  outC_Kv_intConstructor_SDMConversionModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Kv_intConstructor_SDMConversionModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Kv_intConstructor_SDMConversionModelPkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

