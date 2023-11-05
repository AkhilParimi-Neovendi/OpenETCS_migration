/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func_H_
#define _Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* continue/ */ _1_continue;
  kcg_float32 /* Loc_Abs_DMI/ */ Loc_Abs_DMI;
  kcg_float32 /* MRSP_DMI/ */ MRSP_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_speedProfileElement_T_DMI_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L10/ */ _L10;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  kcg_int32 /* _L11/ */ _L11;
  kcg_float32 /* _L12/ */ _L12;
  kcg_float32 /* _L13/ */ _L13;
  kcg_float32 /* _L14/ */ _L14;
  kcg_float32 /* _L15/ */ _L15;
} outC_Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List/ */
extern void Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func(
  /* index/ */
  kcg_int32 index,
  /* Loc_LRBG/ */
  DMI_speedProfileElement_T_DMI_Types_Pkg *Loc_LRBG,
  outC_Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Planning_Area_Speed_Profile_List_reset_DMI_Control_Pkg_Sub_func(
  outC_Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Planning_Area_Speed_Profile_List_init_DMI_Control_Pkg_Sub_func(
  outC_Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

