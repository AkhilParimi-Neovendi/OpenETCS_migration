/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _A_brake_safe_SDMConversionModelPkg_H_
#define _A_brake_safe_SDMConversionModelPkg_H_

#include "kcg_types.h"
#include "Kv_intConstructor_SDMConversionModelPkg.h"
#include "Kr_intLookUp_SDMConversionModelPkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  av_MergedMap_t_SDMConversionModelPkg /* aBrakeSafe_cm/ */ aBrakeSafe_cm;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Kv_intConstructor_SDMConversionModelPkg /* _L32=(SDMConversionModelPkg::Kv_intConstructor#1)/ */ Context_Kv_intConstructor_1;
  outC_Kr_intLookUp_SDMConversionModelPkg /* _L10=(SDMConversionModelPkg::Kr_intLookUp#1)/ */ Context_Kr_intLookUp_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int64_6 /* @1/_L4/ */ _L4_Max_1_int64;
  array_bool_6 /* @1/_L3/ */ _L3_Max_1_int64;
  array_int64_6 /* @1/_L2/ */ _L2_Max_1_int64;
  array_int64_6 /* @1/_L1/ */ _L1_Max_1_int64;
  kcg_int64 /* _L10/ */ _L10;
  P3_NationalValues_T_Packet_Types_Pkg /* _L11/ */ _L11;
  trainData_T_TIU_Types_Pkg /* _L12/ */ _L12;
  a_Brake_t_SDMConversionModelPkg /* _L13/ */ _L13;
  a_BrakeSteps_t_SDMConversionModelPkg /* _L14/ */ _L14;
  array_int64_6 /* _L16/ */ _L16;
  array_int64_6 /* _L17/ */ _L17;
  kcg_int64 /* _L18/ */ _L18;
  kcg_int64 /* _L19/ */ _L19;
  array_int64_6 /* _L23/ */ _L23;
  array_int64_6 /* _L25/ */ _L25;
  kcg_int64 /* _L26/ */ _L26;
  P3_NationalValues_T_Packet_Types_Pkg /* _L30/ */ _L30;
  av_MergedMap_t_SDMConversionModelPkg /* _L32/ */ _L32;
  trainData_T_TIU_Types_Pkg /* _L34/ */ _L34;
  av_Map_t_SDMConversionModelPkg /* _L47/ */ _L47;
  v_BrakeSteps_t_SDMConversionModelPkg /* _L48/ */ _L48;
} outC_A_brake_safe_SDMConversionModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMConversionModelPkg::A_brake_safe/ */
extern void A_brake_safe_SDMConversionModelPkg(
  /* aBrake/ */
  a_Brake_t_SDMConversionModelPkg *aBrake,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  outC_A_brake_safe_SDMConversionModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void A_brake_safe_reset_SDMConversionModelPkg(
  outC_A_brake_safe_SDMConversionModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void A_brake_safe_init_SDMConversionModelPkg(
  outC_A_brake_safe_SDMConversionModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: SDMConversionModelPkg::A_brake_safe/
  @1: (math::Max#1)
*/

#endif /* _A_brake_safe_SDMConversionModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** A_brake_safe_SDMConversionModelPkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

