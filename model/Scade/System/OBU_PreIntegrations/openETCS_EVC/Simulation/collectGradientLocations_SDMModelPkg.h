/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _collectGradientLocations_SDMModelPkg_H_
#define _collectGradientLocations_SDMModelPkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* location_/ */ location_;
  L_internal_real_Type_SDM_Types_Pkg /* location/ */ location;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* _L1/ */ _L1;
  A_gradient_element_t_SDM_GradientAcceleration_types /* _L2/ */ _L2;
  kcg_bool /* _L9/ */ _L9;
  L_internal_real_Type_SDM_Types_Pkg /* _L10/ */ _L10;
  L_internal_real_Type_SDM_Types_Pkg /* _L11/ */ _L11;
} outC_collectGradientLocations_SDMModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMModelPkg::collectGradientLocations/ */
extern void collectGradientLocations_SDMModelPkg(
  /* last_loc/ */
  L_internal_real_Type_SDM_Types_Pkg last_loc,
  /* Gsection/ */
  A_gradient_element_t_SDM_GradientAcceleration_types *Gsection,
  outC_collectGradientLocations_SDMModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void collectGradientLocations_reset_SDMModelPkg(
  outC_collectGradientLocations_SDMModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void collectGradientLocations_init_SDMModelPkg(
  outC_collectGradientLocations_SDMModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _collectGradientLocations_SDMModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** collectGradientLocations_SDMModelPkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

