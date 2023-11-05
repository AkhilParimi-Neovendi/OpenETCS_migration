/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_doLocInacc_Toolbox_Functions.h"

/* Toolbox::Functions::ODO_doLocInacc/ */
void ODO_doLocInacc_Toolbox_Functions(
  /* d_min/ */
  L_internal_Type_Obu_BasicTypes_Pkg d_min,
  /* d_Max/ */
  L_internal_Type_Obu_BasicTypes_Pkg d_Max,
  outC_ODO_doLocInacc_Toolbox_Functions *outC)
{
  outC->_L13 = d_Max;
  outC->_L12 = d_min;
  outC->_L9 = kcg_lit_int32(0);
  outC->_L2.nominal = outC->_L9;
  outC->_L2.d_min = outC->_L12;
  outC->_L2.d_max = outC->_L13;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->locInAcc, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void ODO_doLocInacc_init_Toolbox_Functions(
  outC_ODO_doLocInacc_Toolbox_Functions *outC)
{
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L2.nominal = kcg_lit_int32(0);
  outC->_L2.d_min = kcg_lit_int32(0);
  outC->_L2.d_max = kcg_lit_int32(0);
  outC->locInAcc.nominal = kcg_lit_int32(0);
  outC->locInAcc.d_min = kcg_lit_int32(0);
  outC->locInAcc.d_max = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ODO_doLocInacc_reset_Toolbox_Functions(
  outC_ODO_doLocInacc_Toolbox_Functions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ODO_doLocInacc_Toolbox_Functions.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

