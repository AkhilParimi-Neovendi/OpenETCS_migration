/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _Gradient_from_Track_DMI_Control_Pkg_Sub_func_H_
#define _Gradient_from_Track_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"
#include "Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_float64_32 /* Gradient_End/ */ Gradient_End;
  array_float64_32 /* Gradient_Begin/ */ Gradient_Begin;
  array_float64_32 /* Gradient_Value/ */ Gradient_Value;
  array_bool_32 /* Gradient_Visible_Flag/ */ Gradient_Visible_Flag;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func /* _L24=(DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator#1)/ */ Context_Gradient_Profile_LIst_Operator_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_gradientProfileArray_T_DMI_Types_Pkg /* _L12/ */ _L12;
  kcg_int64 /* _L24/ */ _L24;
  array_float64_32 /* _L25/ */ _L25;
  array_float64_32 /* _L26/ */ _L26;
  array_float64_32 /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  array_bool_32 /* _L31/ */ _L31;
} outC_Gradient_from_Track_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Gradient_from_Track/ */
extern void Gradient_from_Track_DMI_Control_Pkg_Sub_func(
  /* Track_Atlas_Gradient/ */
  DMI_gradientProfileArray_T_DMI_Types_Pkg *Track_Atlas_Gradient,
  outC_Gradient_from_Track_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Gradient_from_Track_reset_DMI_Control_Pkg_Sub_func(
  outC_Gradient_from_Track_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Gradient_from_Track_init_DMI_Control_Pkg_Sub_func(
  outC_Gradient_from_Track_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Gradient_from_Track_DMI_Control_Pkg_Sub_func_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Gradient_from_Track_DMI_Control_Pkg_Sub_func.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

