/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _FlashingIconsOperator_DMI_Control_Pkg_Utils_H_
#define _FlashingIconsOperator_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"
#include "FlashingOperator_DMI_Control_Pkg_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* yellowBorderC1Area_toDisplay/ */ yellowBorderC1Area_toDisplay;
  kcg_bool /* yellowBorderBrakeSymbol_toDisplay/ */ yellowBorderBrakeSymbol_toDisplay;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FlashingOperator_DMI_Control_Pkg_Utils /* _L12=(DMI_Control_Pkg::Utils::FlashingOperator#1)/ */ Context_FlashingOperator_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* _L7/ */ _L7;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  kcg_float32 /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_float32 /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  kcg_bool /* _L14/ */ _L14;
} outC_FlashingIconsOperator_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::FlashingIconsOperator/ */
extern void FlashingIconsOperator_DMI_Control_Pkg_Utils(
  /* Input3/ */
  kcg_bool Input3,
  /* Input5/ */
  kcg_bool Input5,
  /* Input6/ */
  kcg_float32 Input6,
  /* SystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* Input7/ */
  kcg_float32 Input7,
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC);

extern void FlashingIconsOperator_reset_DMI_Control_Pkg_Utils(
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void FlashingIconsOperator_init_DMI_Control_Pkg_Utils(
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* _L13/ */ Context__L13;
  kcg_bool /* _L12/ */ Context__L12;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_FlashingOperator_DMI_Control_Pkg_Utils Context_FlashingOperator_1;
} SV_FlashingIconsOperator_DMI_Control_Pkg_Utils;

extern void kcg_save_SV_FlashingIconsOperator_DMI_Control_Pkg_Utils(
  SV_FlashingIconsOperator_DMI_Control_Pkg_Utils *SV,
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC);
extern void kcg_load_SV_FlashingIconsOperator_DMI_Control_Pkg_Utils(
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC,
  SV_FlashingIconsOperator_DMI_Control_Pkg_Utils *SV);



#endif /* _FlashingIconsOperator_DMI_Control_Pkg_Utils_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FlashingIconsOperator_DMI_Control_Pkg_Utils.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

