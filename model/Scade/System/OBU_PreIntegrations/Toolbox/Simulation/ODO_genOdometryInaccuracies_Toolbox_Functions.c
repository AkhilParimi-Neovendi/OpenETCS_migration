/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_genOdometryInaccuracies_Toolbox_Functions.h"

/* Toolbox::Functions::ODO_genOdometryInaccuracies/ */
void ODO_genOdometryInaccuracies_Toolbox_Functions(
  /* trueLocation/ */
  L_internal_Type_Obu_BasicTypes_Pkg trueLocation,
  /* odometryProperties/ */
  odometryFactors_T_Toolbox *odometryProperties,
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC)
{
  kcg_copy_odometryFactors_T_Toolbox(&outC->_L33, odometryProperties);
  outC->_L36 = outC->_L33.o_nominal;
  outC->_L35 = outC->_L33.o_min;
  outC->_L34 = outC->_L33.o_max;
  outC->_L1 = trueLocation;
  outC->_L16 = /* _L16= */(kcg_float64) outC->_L1;
  outC->_L20 = outC->_L36 * outC->_L16;
  outC->_L17 = /* _L17= */(kcg_int64) outC->_L20;
  outC->_L21 = outC->_L35 * outC->_L16;
  outC->_L18 = /* _L18= */(kcg_int64) outC->_L21;
  outC->_L22 = outC->_L34 * outC->_L16;
  outC->_L19 = /* _L19= */(kcg_int64) outC->_L22;
  outC->_L8.o_nominal = outC->_L17;
  outC->_L8.o_min = outC->_L18;
  outC->_L8.o_max = outC->_L19;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->odometryLocations,
    &outC->_L8);
}

#ifndef KCG_USER_DEFINED_INIT
void ODO_genOdometryInaccuracies_init_Toolbox_Functions(
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC)
{
  outC->_L34 = kcg_lit_float64(0.0);
  outC->_L35 = kcg_lit_float64(0.0);
  outC->_L36 = kcg_lit_float64(0.0);
  outC->_L33.o_nominal = kcg_lit_float64(0.0);
  outC->_L33.o_min = kcg_lit_float64(0.0);
  outC->_L33.o_max = kcg_lit_float64(0.0);
  outC->_L22 = kcg_lit_float64(0.0);
  outC->_L21 = kcg_lit_float64(0.0);
  outC->_L20 = kcg_lit_float64(0.0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L17 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L8.o_nominal = kcg_lit_int64(0);
  outC->_L8.o_min = kcg_lit_int64(0);
  outC->_L8.o_max = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->odometryLocations.o_nominal = kcg_lit_int64(0);
  outC->odometryLocations.o_min = kcg_lit_int64(0);
  outC->odometryLocations.o_max = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ODO_genOdometryInaccuracies_reset_Toolbox_Functions(
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ODO_genOdometryInaccuracies_Toolbox_Functions.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

