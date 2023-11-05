/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_convert_engineering_TM_conversions.h"

/* TM_conversions::TOOLS_convert_engineering_location/ */
void TOOLS_convert_engineering_TM_conversions(
  /* Loc_int/ */
  kcg_int32 Loc_int,
  outC_TOOLS_convert_engineering_TM_conversions *outC)
{
  outC->_L3 = DIM_scale_eng_location_TM;
  outC->_L1 = Loc_int;
  outC->_L2 = /* _L2= */(kcg_float32) outC->_L1;
  outC->_L4 = outC->_L2 * outC->_L3;
  outC->Loc_real = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void TOOLS_convert_engineering_init_TM_conversions(
  outC_TOOLS_convert_engineering_TM_conversions *outC)
{
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_float32(0.0);
  outC->_L1 = kcg_lit_int32(0);
  outC->Loc_real = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TOOLS_convert_engineering_reset_TM_conversions(
  outC_TOOLS_convert_engineering_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TOOLS_convert_engineering_TM_conversions.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

