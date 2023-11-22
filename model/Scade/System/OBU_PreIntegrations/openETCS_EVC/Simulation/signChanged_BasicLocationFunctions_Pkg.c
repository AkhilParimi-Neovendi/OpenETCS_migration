/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "signChanged_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::signChanged/ */
void signChanged_BasicLocationFunctions_Pkg(
  /* val/ */
  kcg_int32 val,
  outC_signChanged_BasicLocationFunctions_Pkg *outC)
{
  /* val/ */
  kcg_int32 last_val;

  last_val = outC->mem_val;
  outC->mem_val = val;
  outC->_L8_Abs_1_int32 = kcg_lit_int32(0);
  outC->_L2 = last_val;
  outC->_L1 = val;
  outC->_L3 = outC->_L1 + outC->_L2;
  outC->A_Input_Abs_1_int32 = outC->_L3;
  outC->_L5_Abs_1_int32 = outC->A_Input_Abs_1_int32;
  outC->_L3_Abs_1_int32 = - outC->_L5_Abs_1_int32;
  outC->_L1_Abs_1_int32 = outC->_L8_Abs_1_int32 <= outC->_L5_Abs_1_int32;
  /* @1/_L2= */
  if (outC->_L1_Abs_1_int32) {
    outC->_L2_Abs_1_int32 = outC->_L5_Abs_1_int32;
  }
  else {
    outC->_L2_Abs_1_int32 = outC->_L3_Abs_1_int32;
  }
  outC->A_Output_Abs_1_int32 = outC->_L2_Abs_1_int32;
  outC->_L8_Abs_2_int32 = kcg_lit_int32(0);
  outC->A_Input_Abs_2_int32 = outC->_L1;
  outC->_L5_Abs_2_int32 = outC->A_Input_Abs_2_int32;
  outC->_L3_Abs_2_int32 = - outC->_L5_Abs_2_int32;
  outC->_L1_Abs_2_int32 = outC->_L8_Abs_2_int32 <= outC->_L5_Abs_2_int32;
  /* @2/_L2= */
  if (outC->_L1_Abs_2_int32) {
    outC->_L2_Abs_2_int32 = outC->_L5_Abs_2_int32;
  }
  else {
    outC->_L2_Abs_2_int32 = outC->_L3_Abs_2_int32;
  }
  outC->A_Output_Abs_2_int32 = outC->_L2_Abs_2_int32;
  outC->_L8_Abs_3_int32 = kcg_lit_int32(0);
  outC->A_Input_Abs_3_int32 = outC->_L2;
  outC->_L5_Abs_3_int32 = outC->A_Input_Abs_3_int32;
  outC->_L3_Abs_3_int32 = - outC->_L5_Abs_3_int32;
  outC->_L1_Abs_3_int32 = outC->_L8_Abs_3_int32 <= outC->_L5_Abs_3_int32;
  /* @3/_L2= */
  if (outC->_L1_Abs_3_int32) {
    outC->_L2_Abs_3_int32 = outC->_L5_Abs_3_int32;
  }
  else {
    outC->_L2_Abs_3_int32 = outC->_L3_Abs_3_int32;
  }
  outC->A_Output_Abs_3_int32 = outC->_L2_Abs_3_int32;
  outC->_L7 = outC->A_Output_Abs_3_int32;
  outC->_L6 = outC->A_Output_Abs_2_int32;
  outC->_L8 = outC->_L6 + outC->_L7;
  outC->_L4 = outC->A_Output_Abs_1_int32;
  outC->_L5 = outC->_L4 < outC->_L8;
  outC->change = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void signChanged_init_BasicLocationFunctions_Pkg(
  outC_signChanged_BasicLocationFunctions_Pkg *outC)
{
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->_L1_Abs_3_int32 = kcg_true;
  outC->_L2_Abs_3_int32 = kcg_lit_int32(0);
  outC->_L3_Abs_3_int32 = kcg_lit_int32(0);
  outC->_L5_Abs_3_int32 = kcg_lit_int32(0);
  outC->_L8_Abs_3_int32 = kcg_lit_int32(0);
  outC->A_Input_Abs_3_int32 = kcg_lit_int32(0);
  outC->A_Output_Abs_3_int32 = kcg_lit_int32(0);
  outC->_L1_Abs_2_int32 = kcg_true;
  outC->_L2_Abs_2_int32 = kcg_lit_int32(0);
  outC->_L3_Abs_2_int32 = kcg_lit_int32(0);
  outC->_L5_Abs_2_int32 = kcg_lit_int32(0);
  outC->_L8_Abs_2_int32 = kcg_lit_int32(0);
  outC->A_Input_Abs_2_int32 = kcg_lit_int32(0);
  outC->A_Output_Abs_2_int32 = kcg_lit_int32(0);
  outC->_L1_Abs_1_int32 = kcg_true;
  outC->_L2_Abs_1_int32 = kcg_lit_int32(0);
  outC->_L3_Abs_1_int32 = kcg_lit_int32(0);
  outC->_L5_Abs_1_int32 = kcg_lit_int32(0);
  outC->_L8_Abs_1_int32 = kcg_lit_int32(0);
  outC->A_Input_Abs_1_int32 = kcg_lit_int32(0);
  outC->A_Output_Abs_1_int32 = kcg_lit_int32(0);
  outC->change = kcg_true;
  outC->mem_val = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void signChanged_reset_BasicLocationFunctions_Pkg(
  outC_signChanged_BasicLocationFunctions_Pkg *outC)
{
  outC->mem_val = kcg_lit_int32(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: BasicLocationFunctions_Pkg::signChanged/
  @1: (math::Abs#1)
  @2: (math::Abs#2)
  @3: (math::Abs#3)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** signChanged_BasicLocationFunctions_Pkg.c
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

