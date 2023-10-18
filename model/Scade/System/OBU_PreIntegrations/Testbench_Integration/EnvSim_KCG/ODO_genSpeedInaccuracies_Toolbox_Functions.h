/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _ODO_genSpeedInaccuracies_Toolbox_Functions_H_
#define _ODO_genSpeedInaccuracies_Toolbox_Functions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* odometrySpeeds/ */ odometrySpeeds;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L12/ */ _L12;
  kcg_int64 /* _L11/ */ _L11;
  kcg_float64 /* _L8/ */ _L8;
  kcg_int64 /* _L7/ */ _L7;
  kcg_float64 /* _L6/ */ _L6;
  kcg_float64 /* _L2/ */ _L2;
  kcg_int64 /* _L1/ */ _L1;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* _L13/ */ _L13;
  odometryFactors_T_Toolbox /* _L14/ */ _L14;
  Speed_T_Obu_BasicTypes_Pkg /* _L15/ */ _L15;
  kcg_float64 /* _L16/ */ _L16;
  kcg_float64 /* _L17/ */ _L17;
  kcg_int64 /* _L18/ */ _L18;
  kcg_float64 /* _L21/ */ _L21;
  kcg_float64 /* _L20/ */ _L20;
  kcg_float64 /* _L19/ */ _L19;
} outC_ODO_genSpeedInaccuracies_Toolbox_Functions;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::ODO_genSpeedInaccuracies/ */
extern void ODO_genSpeedInaccuracies_Toolbox_Functions(
  /* trueVelocity/ */
  Speed_T_Obu_BasicTypes_Pkg trueVelocity,
  /* odometryProperties/ */
  odometryFactors_T_Toolbox *odometryProperties,
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ODO_genSpeedInaccuracies_reset_Toolbox_Functions(
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ODO_genSpeedInaccuracies_init_Toolbox_Functions(
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ODO_genSpeedInaccuracies_Toolbox_Functions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ODO_genSpeedInaccuracies_Toolbox_Functions.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

