/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _Kv_intVectorMerger_SDMConversionModelPkg_H_
#define _Kv_intVectorMerger_SDMConversionModelPkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int64_2 /* indices_out/ */ indices_out;
  A_internal_Type_Obu_BasicTypes_Pkg /* a/ */ a;
  V_internal_Type_Obu_BasicTypes_Pkg /* v/ */ v;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* @1/Ma_Output/ */ Ma_Output_Max_1_int64;
  kcg_int64 /* @1/I2/ */ I2_Max_1_int64;
  kcg_int64 /* @1/I1/ */ I1_Max_1_int64;
  kcg_int64 /* @1/_L4/ */ _L4_Max_1_int64;
  kcg_bool /* @1/_L3/ */ _L3_Max_1_int64;
  kcg_int64 /* @1/_L2/ */ _L2_Max_1_int64;
  kcg_int64 /* @1/_L1/ */ _L1_Max_1_int64;
  array_int64_2 /* _L1/ */ _L1;
  mv_Map_t_SDMConversionModelPkg /* _L2/ */ _L2;
  av_Map_t_SDMConversionModelPkg /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
  array_int64_2 /* _L6/ */ _L6;
  a_BrakeSteps_t_SDMConversionModelPkg /* _L7/ */ _L7;
  m_KvSteps_t_SDMConversionModelPkg /* _L8/ */ _L8;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  kcg_int64 /* _L10/ */ _L10;
  kcg_int64 /* _L11/ */ _L11;
  kcg_int64 /* _L12/ */ _L12;
  kcg_int64 /* _L13/ */ _L13;
  kcg_int64 /* _L23/ */ _L23;
  kcg_int64 /* _L22/ */ _L22;
  array_int64_2 /* _L21/ */ _L21;
  av_Map_t_SDMConversionModelPkg /* _L20/ */ _L20;
  array_int64_2 /* _L19/ */ _L19;
  kcg_int64 /* _L18/ */ _L18;
  v_KvSteps_t_SDMConversionModelPkg /* _L17/ */ _L17;
  mv_Map_t_SDMConversionModelPkg /* _L16/ */ _L16;
  v_BrakeSteps_t_SDMConversionModelPkg /* _L15/ */ _L15;
  kcg_int64 /* _L14/ */ _L14;
  kcg_int64 /* _L24/ */ _L24;
  kcg_int64 /* _L25/ */ _L25;
  kcg_int64 /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  array_int64_2 /* _L28/ */ _L28;
  kcg_int64 /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  kcg_int64 /* _L31/ */ _L31;
  array_int64_2 /* _L51/ */ _L51;
  kcg_int64 /* _L50/ */ _L50;
  v_BrakeSteps_t_SDMConversionModelPkg /* _L49/ */ _L49;
  kcg_int64 /* _L48/ */ _L48;
  array_int64_2 /* _L47/ */ _L47;
  mv_Map_t_SDMConversionModelPkg /* _L46/ */ _L46;
  kcg_int64 /* _L45/ */ _L45;
  kcg_int64 /* _L44/ */ _L44;
  av_Map_t_SDMConversionModelPkg /* _L43/ */ _L43;
  v_KvSteps_t_SDMConversionModelPkg /* _L42/ */ _L42;
  kcg_int64 /* _L54/ */ _L54;
  kcg_bool /* _L55/ */ _L55;
  kcg_bool /* _L56/ */ _L56;
  kcg_int64 /* _L57/ */ _L57;
  kcg_bool /* _L58/ */ _L58;
  kcg_int64 /* _L60/ */ _L60;
  kcg_bool /* _L59/ */ _L59;
  kcg_bool /* _L64/ */ _L64;
  kcg_bool /* _L66/ */ _L66;
  kcg_bool /* _L67/ */ _L67;
  kcg_bool /* _L68/ */ _L68;
} outC_Kv_intVectorMerger_SDMConversionModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMConversionModelPkg::Kv_intVectorMerger/ */
extern void Kv_intVectorMerger_SDMConversionModelPkg(
  /* indices_in/ */
  array_int64_2 *indices_in,
  /* Kv/ */
  mv_Map_t_SDMConversionModelPkg *Kv,
  /* Abrake/ */
  av_Map_t_SDMConversionModelPkg *Abrake,
  outC_Kv_intVectorMerger_SDMConversionModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Kv_intVectorMerger_reset_SDMConversionModelPkg(
  outC_Kv_intVectorMerger_SDMConversionModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Kv_intVectorMerger_init_SDMConversionModelPkg(
  outC_Kv_intVectorMerger_SDMConversionModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: SDMConversionModelPkg::Kv_intVectorMerger/
  @1: (math::Max#1)
*/

#endif /* _Kv_intVectorMerger_SDMConversionModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Kv_intVectorMerger_SDMConversionModelPkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

