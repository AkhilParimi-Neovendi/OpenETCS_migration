/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func_H_
#define _Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"
#include "Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_float64_32 /* Loc_Abs_to_DMI/ */ Loc_Abs_to_DMI;
  array_float64_32 /* MRSP_to_DMI/ */ MRSP_to_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func /* _L6=(DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List#1)/ */ Context_Planning_Area_Speed_Profile_List_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_SpeedProfileArray_T_DMI_Types_Pkg /* _L1/ */ _L1;
  array_float64_32 /* _L2/ */ _L2;
  array_float64_32 /* _L4/ */ _L4;
  kcg_int64 /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
} outC_Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_from_Track_Atlas/ */
extern void Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func(
  /* Planning_Area_Speed_Profile/ */
  DMI_SpeedProfileArray_T_DMI_Types_Pkg *Planning_Area_Speed_Profile,
  outC_Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Planning_Area_Speed_Profile_from_Track_Atlas_reset_DMI_Control_Pkg_Sub_func(
  outC_Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Planning_Area_Speed_Profile_from_Track_Atlas_init_DMI_Control_Pkg_Sub_func(
  outC_Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

