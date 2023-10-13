/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_genSpeedInaccuracies_Toolbox_Functions.h"

/* Toolbox::Functions::ODO_genSpeedInaccuracies/ */
void ODO_genSpeedInaccuracies_Toolbox_Functions(
  /* trueVelocity/ */
  Speed_T_Obu_BasicTypes_Pkg trueVelocity,
  /* odometryProperties/ */
  odometryFactors_T_Toolbox *odometryProperties,
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC)
{
  kcg_copy_odometryFactors_T_Toolbox(&outC->_L14, odometryProperties);
  outC->_L21 = outC->_L14.o_nominal;
  outC->_L20 = outC->_L14.o_min;
  outC->_L19 = outC->_L14.o_max;
  outC->_L15 = trueVelocity;
  outC->_L8 = /* _L8= */(kcg_float64) outC->_L15;
  outC->_L12 = outC->_L19 * outC->_L8;
  outC->_L17 = kcg_lit_float64(0.99);
  outC->_L16 = outC->_L17 * outC->_L12;
  outC->_L18 = /* _L18= */(kcg_int64) outC->_L16;
  outC->_L6 = outC->_L21 * outC->_L8;
  outC->_L11 = /* _L11= */(kcg_int64) outC->_L6;
  outC->_L2 = outC->_L20 * outC->_L8;
  outC->_L1 = /* _L1= */(kcg_int64) outC->_L2;
  outC->_L7 = /* _L7= */(kcg_int64) outC->_L12;
  outC->_L13.v_safeNominal = outC->_L18;
  outC->_L13.v_rawNominal = outC->_L11;
  outC->_L13.v_lower = outC->_L1;
  outC->_L13.v_upper = outC->_L7;
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
    &outC->odometrySpeeds,
    &outC->_L13);
}

#ifndef KCG_USER_DEFINED_INIT
void ODO_genSpeedInaccuracies_init_Toolbox_Functions(
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC)
{
  outC->_L19 = kcg_lit_float64(0.0);
  outC->_L20 = kcg_lit_float64(0.0);
  outC->_L21 = kcg_lit_float64(0.0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L14.o_nominal = kcg_lit_float64(0.0);
  outC->_L14.o_min = kcg_lit_float64(0.0);
  outC->_L14.o_max = kcg_lit_float64(0.0);
  outC->_L13.v_safeNominal = kcg_lit_int64(0);
  outC->_L13.v_rawNominal = kcg_lit_int64(0);
  outC->_L13.v_lower = kcg_lit_int64(0);
  outC->_L13.v_upper = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_float64(0.0);
  outC->odometrySpeeds.v_safeNominal = kcg_lit_int64(0);
  outC->odometrySpeeds.v_rawNominal = kcg_lit_int64(0);
  outC->odometrySpeeds.v_lower = kcg_lit_int64(0);
  outC->odometrySpeeds.v_upper = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ODO_genSpeedInaccuracies_reset_Toolbox_Functions(
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ODO_genSpeedInaccuracies_Toolbox_Functions.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

