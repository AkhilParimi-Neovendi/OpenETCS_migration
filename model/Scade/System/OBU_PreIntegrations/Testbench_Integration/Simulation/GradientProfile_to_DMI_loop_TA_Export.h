/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _GradientProfile_to_DMI_loop_TA_Export_H_
#define _GradientProfile_to_DMI_loop_TA_Export_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_for_DMI_section_t_TrackAtlasTypes /* Gradiient_section_for_DMI_out/ */ Gradiient_section_for_DMI_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Gradient_section_t_TrackAtlasTypes /* _L20/ */ _L20;
  kcg_int32 /* _L25/ */ _L25;
  kcg_bool /* _L24/ */ _L24;
  kcg_int32 /* _L26/ */ _L26;
  kcg_int32 /* _L27/ */ _L27;
  kcg_int32 /* _L28/ */ _L28;
  GradientProfile_for_DMI_section_t_TrackAtlasTypes /* _L40/ */ _L40;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L46/ */ _L46;
  G_internal_Type_Obu_BasicTypes_Pkg /* _L45/ */ _L45;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L44/ */ _L44;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L43/ */ _L43;
  kcg_bool /* _L42/ */ _L42;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L47/ */ _L47;
  kcg_bool /* _L48/ */ _L48;
  kcg_bool /* _L50/ */ _L50;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L51/ */ _L51;
  kcg_bool /* _L52/ */ _L52;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L53/ */ _L53;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L54/ */ _L54;
  kcg_int32 /* _L55/ */ _L55;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L56/ */ _L56;
  kcg_int32 /* _L58/ */ _L58;
  kcg_int32 /* _L59/ */ _L59;
  kcg_int32 /* _L60/ */ _L60;
} outC_GradientProfile_to_DMI_loop_TA_Export;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Export::GradientProfile_to_DMI_loop/ */
extern void GradientProfile_to_DMI_loop_TA_Export(
  /* Gradient_section_in/ */
  Gradient_section_t_TrackAtlasTypes *Gradient_section_in,
  /* EoA/ */
  L_internal_Type_Obu_BasicTypes_Pkg EoA,
  outC_GradientProfile_to_DMI_loop_TA_Export *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GradientProfile_to_DMI_loop_reset_TA_Export(
  outC_GradientProfile_to_DMI_loop_TA_Export *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GradientProfile_to_DMI_loop_init_TA_Export(
  outC_GradientProfile_to_DMI_loop_TA_Export *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _GradientProfile_to_DMI_loop_TA_Export_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GradientProfile_to_DMI_loop_TA_Export.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

