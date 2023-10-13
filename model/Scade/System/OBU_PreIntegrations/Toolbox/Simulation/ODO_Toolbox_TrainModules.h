/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _ODO_Toolbox_TrainModules_H_
#define _ODO_Toolbox_TrainModules_H_

#include "kcg_types.h"
#include "ODO_genSpeedInaccuracies_Toolbox_Functions.h"
#include "ODO_genOdometryInaccuracies_Toolbox_Functions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  odometry_T_Obu_BasicTypes_Pkg /* odometry/ */ odometry;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions /* _L9=(Toolbox::Functions::ODO_genOdometryInaccuracies#1)/ */ Context_ODO_genOdometryInaccuracies_1;
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions /* _L20=(Toolbox::Functions::ODO_genSpeedInaccuracies#1)/ */ Context_ODO_genSpeedInaccuracies_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  odometry_T_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L4/ */ _L4;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  OdometrySpeed_T_Toolbox /* _L6/ */ _L6;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  odometryFactors_T_Toolbox /* _L11/ */ _L11;
  odoMotionState_T_Obu_BasicTypes_Pkg /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  OdometrySpeed_T_Toolbox /* _L15/ */ _L15;
  kcg_int64 /* _L16/ */ _L16;
  odoMotionState_T_Obu_BasicTypes_Pkg /* _L17/ */ _L17;
  odoMotionState_T_Obu_BasicTypes_Pkg /* _L18/ */ _L18;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* _L19/ */ _L19;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* _L20/ */ _L20;
  odometryFactors_T_Toolbox /* _L21/ */ _L21;
} outC_ODO_Toolbox_TrainModules;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::TrainModules::ODO/ */
extern void ODO_Toolbox_TrainModules(
  /* timestamp/ */
  T_internal_Type_Obu_BasicTypes_Pkg timestamp,
  /* velocity/ */
  OdometrySpeed_T_Toolbox velocity,
  /* acceleration/ */
  A_internal_Type_Obu_BasicTypes_Pkg acceleration,
  /* position/ */
  L_internal_Type_Obu_BasicTypes_Pkg position,
  /* motionDirection/ */
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection,
  outC_ODO_Toolbox_TrainModules *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ODO_reset_Toolbox_TrainModules(outC_ODO_Toolbox_TrainModules *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ODO_init_Toolbox_TrainModules(outC_ODO_Toolbox_TrainModules *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ODO_Toolbox_TrainModules_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ODO_Toolbox_TrainModules.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

