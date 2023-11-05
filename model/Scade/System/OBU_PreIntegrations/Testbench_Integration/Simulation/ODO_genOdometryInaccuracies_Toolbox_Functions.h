/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _ODO_genOdometryInaccuracies_Toolbox_Functions_H_
#define _ODO_genOdometryInaccuracies_Toolbox_Functions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  OdometryLocations_T_Obu_BasicTypes_Pkg /* odometryLocations/ */ odometryLocations;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  kcg_float32 /* _L16/ */ _L16;
  kcg_int32 /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
  kcg_int32 /* _L19/ */ _L19;
  kcg_float32 /* _L20/ */ _L20;
  kcg_float32 /* _L21/ */ _L21;
  kcg_float32 /* _L22/ */ _L22;
  odometryFactors_T_Toolbox /* _L33/ */ _L33;
  kcg_float32 /* _L36/ */ _L36;
  kcg_float32 /* _L35/ */ _L35;
  kcg_float32 /* _L34/ */ _L34;
} outC_ODO_genOdometryInaccuracies_Toolbox_Functions;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::ODO_genOdometryInaccuracies/ */
extern void ODO_genOdometryInaccuracies_Toolbox_Functions(
  /* trueLocation/ */
  L_internal_Type_Obu_BasicTypes_Pkg trueLocation,
  /* odometryProperties/ */
  odometryFactors_T_Toolbox *odometryProperties,
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ODO_genOdometryInaccuracies_reset_Toolbox_Functions(
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ODO_genOdometryInaccuracies_init_Toolbox_Functions(
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ODO_genOdometryInaccuracies_Toolbox_Functions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ODO_genOdometryInaccuracies_Toolbox_Functions.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

