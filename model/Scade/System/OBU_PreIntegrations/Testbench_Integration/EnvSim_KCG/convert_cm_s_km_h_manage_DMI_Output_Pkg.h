/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _convert_cm_s_km_h_manage_DMI_Output_Pkg_H_
#define _convert_cm_s_km_h_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_internal_Type_Obu_BasicTypes_Pkg /* km_h/ */ km_h;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
} outC_convert_cm_s_km_h_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::convert_cm_s_km_h/ */
extern void convert_cm_s_km_h_manage_DMI_Output_Pkg(
  /* cm_s/ */
  V_odometry_Type_Obu_BasicTypes_Pkg cm_s,
  outC_convert_cm_s_km_h_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void convert_cm_s_km_h_reset_manage_DMI_Output_Pkg(
  outC_convert_cm_s_km_h_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void convert_cm_s_km_h_init_manage_DMI_Output_Pkg(
  outC_convert_cm_s_km_h_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _convert_cm_s_km_h_manage_DMI_Output_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** convert_cm_s_km_h_manage_DMI_Output_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

