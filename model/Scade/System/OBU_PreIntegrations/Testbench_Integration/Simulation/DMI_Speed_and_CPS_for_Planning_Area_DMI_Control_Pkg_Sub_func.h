/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func_H_
#define _DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* vpermitted/ */ vpermitted;
  kcg_float64 /* fronttrain/ */ fronttrain;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  V_internal_Type_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* _L3/ */ _L3;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L5/ */ _L5;
  kcg_float64 /* _L7/ */ _L7;
  kcg_float64 /* _L8/ */ _L8;
} outC_DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::DMI_Speed_and_CPS_for_Planning_Area/ */
extern void DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func(
  /* DMI_track_atlas/ */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_track_atlas,
  outC_DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DMI_Speed_and_CPS_for_Planning_Area_reset_DMI_Control_Pkg_Sub_func(
  outC_DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DMI_Speed_and_CPS_for_Planning_Area_init_DMI_Control_Pkg_Sub_func(
  outC_DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

