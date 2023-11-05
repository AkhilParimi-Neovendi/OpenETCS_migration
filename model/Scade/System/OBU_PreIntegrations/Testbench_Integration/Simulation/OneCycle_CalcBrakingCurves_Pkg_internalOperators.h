/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _OneCycle_CalcBrakingCurves_Pkg_internalOperators_H_
#define _OneCycle_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"
#include "nextIndex_CalcBrakingCurves_Pkg_internalOperators.h"
#include "FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators.h"
#include "getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators.h"
#include "FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* newDistance/ */ newDistance;
  V_internal_real_Type_SDM_Types_Pkg /* newSpeed/ */ newSpeed;
  kcg_int32 /* newDistanceIndex/ */ newDistanceIndex;
  kcg_int32 /* newSpeedIndex/ */ newSpeedIndex;
  ParabolaArc_T_CalcBrakingCurves_types /* newArc/ */ newArc;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators /* _L58=(CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition#1)/ */ Context_FormularNewPosition_1;
  outC_getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators /* _L75=(CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex#2)/ */ Context_getAFromAsafeByIndex_2;
  outC_FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators /* _L1=(CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed#1)/ */ Context_FormularNewSpeed_1;
  outC_nextIndex_CalcBrakingCurves_Pkg_internalOperators /* _L87=(CalcBrakingCurves_Pkg::internalOperators::nextIndex#3)/ */ Context_nextIndex_3;
  outC_nextIndex_CalcBrakingCurves_Pkg_internalOperators /* _L88=(CalcBrakingCurves_Pkg::internalOperators::nextIndex#1)/ */ Context_nextIndex_1;
  outC_getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators /* _L17=(CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex#1)/ */ Context_getAFromAsafeByIndex_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* currAcceleration/ */ currAcceleration;
  ASafeDistanceDefinition_T_CalcBrakingCurves_types /* AsafeDistances/ */ AsafeDistances;
  ASafeSpeedDefinition_T_CalcBrakingCurves_types /* AsafeSpeeds/ */ AsafeSpeeds;
  ASafe_Data_T_CalcBrakingCurves_types /* AsafeData/ */ AsafeData;
  kcg_bool /* newSpeedValid/ */ newSpeedValid;
  kcg_float32 /* newAcceleration/ */ newAcceleration;
  kcg_int32 /* newDistanceIndexInt/ */ newDistanceIndexInt;
  kcg_int32 /* newSpeedIndexInt/ */ newSpeedIndexInt;
  V_internal_real_Type_SDM_Types_Pkg /* _L1/ */ _L1;
  ASafe_T_CalcBrakingCurves_types /* _L9/ */ _L9;
  ASafeDistanceDefinition_T_CalcBrakingCurves_types /* _L13/ */ _L13;
  ASafe_Data_T_CalcBrakingCurves_types /* _L12/ */ _L12;
  ASafeSpeedDefinition_T_CalcBrakingCurves_types /* _L11/ */ _L11;
  A_internal_real_Type_SDM_Types_Pkg /* _L17/ */ _L17;
  kcg_int32 /* _L21/ */ _L21;
  kcg_int32 /* _L22/ */ _L22;
  ASafe_Data_T_CalcBrakingCurves_types /* _L24/ */ _L24;
  ASafeDistanceDefinition_T_CalcBrakingCurves_types /* _L25/ */ _L25;
  L_internal_real_Type_SDM_Types_Pkg /* _L26/ */ _L26;
  kcg_int32 /* _L27/ */ _L27;
  kcg_float32 /* _L30/ */ _L30;
  V_internal_real_Type_SDM_Types_Pkg /* _L31/ */ _L31;
  kcg_float32 /* _L32/ */ _L32;
  kcg_float32 /* _L34/ */ _L34;
  kcg_int32 /* _L35/ */ _L35;
  ASafeSpeedDefinition_T_CalcBrakingCurves_types /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L53/ */ _L53;
  V_internal_real_Type_SDM_Types_Pkg /* _L52/ */ _L52;
  kcg_float32 /* _L55/ */ _L55;
  kcg_bool /* _L54/ */ _L54;
  ParabolaArc_T_CalcBrakingCurves_types /* _L56/ */ _L56;
  L_internal_real_Type_SDM_Types_Pkg /* _L58/ */ _L58;
  L_internal_real_Type_SDM_Types_Pkg /* _L59/ */ _L59;
  V_internal_real_Type_SDM_Types_Pkg /* _L60/ */ _L60;
  kcg_float32 /* _L61/ */ _L61;
  kcg_int32 /* _L64/ */ _L64;
  kcg_bool /* _L63/ */ _L63;
  kcg_int32 /* _L65/ */ _L65;
  kcg_int32 /* _L67/ */ _L67;
  kcg_bool /* _L66/ */ _L66;
  kcg_float32 /* _L38/ */ _L38;
  ASafe_Data_T_CalcBrakingCurves_types /* _L76/ */ _L76;
  A_internal_real_Type_SDM_Types_Pkg /* _L75/ */ _L75;
  kcg_int32 /* _L79/ */ _L79;
  kcg_int32 /* _L80/ */ _L80;
  kcg_float32 /* _L81/ */ _L81;
  kcg_int32 /* _L82/ */ _L82;
  kcg_bool /* _L84/ */ _L84;
  kcg_int32 /* _L87/ */ _L87;
  kcg_int32 /* _L88/ */ _L88;
  kcg_bool /* _L89/ */ _L89;
  kcg_bool /* _L98/ */ _L98;
  kcg_bool /* _L99/ */ _L99;
  kcg_int32 /* _L100/ */ _L100;
  kcg_bool /* _L102/ */ _L102;
  kcg_int32 /* _L103/ */ _L103;
  kcg_int32 /* _L104/ */ _L104;
  kcg_int32 /* _L105/ */ _L105;
  kcg_float32 /* _L106/ */ _L106;
} outC_OneCycle_CalcBrakingCurves_Pkg_internalOperators;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::internalOperators::OneCycle/ */
extern void OneCycle_CalcBrakingCurves_Pkg_internalOperators(
  /* currentDistance/ */
  L_internal_real_Type_SDM_Types_Pkg currentDistance,
  /* currentSpeed/ */
  V_internal_real_Type_SDM_Types_Pkg currentSpeed,
  /* currentDistanceIndex/ */
  kcg_int32 currentDistanceIndex,
  /* currentSpeedIndex/ */
  kcg_int32 currentSpeedIndex,
  /* backwardCalculation/ */
  kcg_bool backwardCalculation,
  /* inAsafe/ */
  ASafe_T_CalcBrakingCurves_types *inAsafe,
  outC_OneCycle_CalcBrakingCurves_Pkg_internalOperators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void OneCycle_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_OneCycle_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void OneCycle_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_OneCycle_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _OneCycle_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** OneCycle_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

