/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _copyGradientElement_manage_DMI_Output_Pkg_H_
#define _copyGradientElement_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* continue/ */ _1_continue;
  DMI_gradientProfileElement_T_DMI_Types_Pkg /* toDMI/ */ toDMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_for_DMI_section_t_TrackAtlasTypes /* _L1/ */ _L1;
  DMI_gradientProfileElement_T_DMI_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L6/ */ _L6;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  G_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  kcg_int64 /* _L7/ */ _L7;
} outC_copyGradientElement_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::copyGradientElement/ */
extern void copyGradientElement_manage_DMI_Output_Pkg(
  /* index/ */
  kcg_int64 index,
  /* fromTrackAtlas/ */
  GradientProfile_for_DMI_section_t_TrackAtlasTypes *fromTrackAtlas,
  outC_copyGradientElement_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void copyGradientElement_reset_manage_DMI_Output_Pkg(
  outC_copyGradientElement_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void copyGradientElement_init_manage_DMI_Output_Pkg(
  outC_copyGradientElement_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _copyGradientElement_manage_DMI_Output_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** copyGradientElement_manage_DMI_Output_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

