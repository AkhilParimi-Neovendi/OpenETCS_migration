/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _brakePosition_SDMConversionModelPkg_H_
#define _brakePosition_SDMConversionModelPkg_H_

#include "kcg_types.h"
#include "T_BrakeBasic_SDMConversionModelPkg.h"
#include "TransformL_intToL_real_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  t_Brake_t_SDMModelPkg /* T_brake_cm/ */ T_brake_cm;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_BrakeBasic_SDMConversionModelPkg /* _L10=(SDMConversionModelPkg::T_BrakeBasic#1)/ */ Context_T_BrakeBasic_1;
  outC_T_BrakeBasic_SDMConversionModelPkg /* _L36=(SDMConversionModelPkg::T_BrakeBasic#3)/ */ Context_T_BrakeBasic_3;
  outC_TransformL_intToL_real_SDM_Types_Pkg /* _L51=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */ Context_TransformL_intToL_real_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @1/Ma_Output/ */ Ma_Output_Max_2_float64;
  kcg_float64 /* @1/I2/ */ I2_Max_2_float64;
  kcg_float64 /* @1/I1/ */ I1_Max_2_float64;
  kcg_float64 /* @1/_L4/ */ _L4_Max_2_float64;
  kcg_bool /* @1/_L3/ */ _L3_Max_2_float64;
  kcg_float64 /* @1/_L2/ */ _L2_Max_2_float64;
  kcg_float64 /* @1/_L1/ */ _L1_Max_2_float64;
  T_internal_real_Type_SDM_Types_Pkg /* _L10/ */ _L10;
  t_Brake_t_SDMModelPkg /* _L14/ */ _L14;
  kcg_float64 /* _L16/ */ _L16;
  kcg_float64 /* _L17/ */ _L17;
  kcg_float64 /* _L18/ */ _L18;
  kcg_float64 /* _L19/ */ _L19;
  kcg_float64 /* _L20/ */ _L20;
  kcg_float64 /* _L21/ */ _L21;
  coeff_BrakeBasic_t_SDMConversionModelPkg /* _L23/ */ _L23;
  kcg_bool /* _L27/ */ _L27;
  kcg_float64 /* _L28/ */ _L28;
  coeff_BrakeBasic_t_SDMConversionModelPkg /* _L29/ */ _L29;
  coeff_BrakeBasic_t_SDMConversionModelPkg /* _L31/ */ _L31;
  coeff_BrakeBasic_t_SDMConversionModelPkg /* _L33/ */ _L33;
  kcg_float64 /* _L34/ */ _L34;
  T_internal_real_Type_SDM_Types_Pkg /* _L36/ */ _L36;
  coeff_BrakeBasic_t_SDMConversionModelPkg /* _L37/ */ _L37;
  coeff_BrakeBasic_t_SDMConversionModelPkg /* _L38/ */ _L38;
  coeff_BrakeBasic_t_SDMConversionModelPkg /* _L39/ */ _L39;
  coeff_BrakeBasic_t_SDMConversionModelPkg /* _L40/ */ _L40;
  coeff_BrakeBasic_t_SDMConversionModelPkg /* _L41/ */ _L41;
  coeff_BrakeBasic_t_SDMConversionModelPkg /* _L42/ */ _L42;
  t_BrakeVt_t_SDMModelPkg /* _L45/ */ _L45;
  t_BrakeVt_t_SDMModelPkg /* _L48/ */ _L48;
  trainData_T_TIU_Types_Pkg /* _L49/ */ _L49;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L50/ */ _L50;
  L_internal_real_Type_SDM_Types_Pkg /* _L51/ */ _L51;
  NC_TRAIN /* _L52/ */ _L52;
  L_internal_real_Type_SDM_Types_Pkg /* _L53/ */ _L53;
  L_internal_real_Type_SDM_Types_Pkg /* _L57/ */ _L57;
  L_internal_real_Type_SDM_Types_Pkg /* _L58/ */ _L58;
  L_internal_real_Type_SDM_Types_Pkg /* _L59/ */ _L59;
} outC_brakePosition_SDMConversionModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMConversionModelPkg::brakePosition/ */
extern void brakePosition_SDMConversionModelPkg(
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  outC_brakePosition_SDMConversionModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void brakePosition_reset_SDMConversionModelPkg(
  outC_brakePosition_SDMConversionModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void brakePosition_init_SDMConversionModelPkg(
  outC_brakePosition_SDMConversionModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: SDMConversionModelPkg::brakePosition/
  @1: (math::Max#2)
*/

#endif /* _brakePosition_SDMConversionModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** brakePosition_SDMConversionModelPkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

