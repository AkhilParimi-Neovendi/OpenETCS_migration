/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _LimitToReducedAdhesion_SDMModelPkg_H_
#define _LimitToReducedAdhesion_SDMModelPkg_H_

#include "kcg_types.h"
#include "TransformA_realToA_int_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ASafe_T_CalcBrakingCurves_types /* A_brake_safe_reduced/ */ A_brake_safe_reduced;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TransformA_realToA_int_SDM_Types_Pkg /* _L24=(SDM_Types_Pkg::TransformA_realToA_int#1)/ */ Context_TransformA_realToA_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NC_TRAIN /* _L4/ */ _L4;
  trainData_T_TIU_Types_Pkg /* _L3/ */ _L3;
  A_NVMAXREDADH1 /* _L2/ */ _L2;
  P3_NationalValues_T_Packet_Types_Pkg /* _L1/ */ _L1;
  A_NVMAXREDADH1 /* _L5/ */ _L5;
  A_NVMAXREDADH2 /* _L6/ */ _L6;
  A_NVMAXREDADH3 /* _L7/ */ _L7;
  A_NVMAXREDADH1 /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  ASafe_T_CalcBrakingCurves_types /* _L10/ */ _L10;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L24/ */ _L24;
  array_int32_14 /* _L23/ */ _L23;
  ASafe_Data_T_CalcBrakingCurves_types /* _L30/ */ _L30;
  ASafeSpeedDefinition_T_CalcBrakingCurves_types /* _L29/ */ _L29;
  ASafeDistanceDefinition_T_CalcBrakingCurves_types /* _L28/ */ _L28;
  ASafe_T_CalcBrakingCurves_types /* _L34/ */ _L34;
  Q_NVDRIVER_ADHES /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  kcg_bool /* _L37/ */ _L37;
  P3_NationalValues_T_Packet_Types_Pkg /* _L38/ */ _L38;
  kcg_bool /* _L39/ */ _L39;
} outC_LimitToReducedAdhesion_SDMModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMModelPkg::LimitToReducedAdhesion/ */
extern void LimitToReducedAdhesion_SDMModelPkg(
  /* aBrakeSafe/ */
  ASafe_T_CalcBrakingCurves_types *aBrakeSafe,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  outC_LimitToReducedAdhesion_SDMModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LimitToReducedAdhesion_reset_SDMModelPkg(
  outC_LimitToReducedAdhesion_SDMModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LimitToReducedAdhesion_init_SDMModelPkg(
  outC_LimitToReducedAdhesion_SDMModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _LimitToReducedAdhesion_SDMModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LimitToReducedAdhesion_SDMModelPkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

