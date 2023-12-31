/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Interdistance_InfraLib.h"

/* InfraLib::Balise_Interdistance/ */
void Balise_Interdistance_InfraLib(
  /* pig0/ */
  kcg_int32 pig0,
  /* n_pig/ */
  kcg_int32 n_pig,
  outC_Balise_Interdistance_InfraLib *outC)
{
  outC->_L8_Abs_1_int32 = kcg_lit_int32(0);
  outC->_L6 = pig0;
  outC->_L10 = n_pig;
  outC->_L11 = outC->_L10 - outC->_L6;
  outC->A_Input_Abs_1_int32 = outC->_L11;
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
  outC->_L13 = outC->A_Output_Abs_1_int32;
  outC->_L14 = /* _L14= */(kcg_float32) outC->_L13;
  outC->_L3 = Distance_Balises_in_BG_InfraLib;
  outC->_L12 = outC->_L14 * outC->_L3;
  outC->distance_BB = outC->_L12;
}

#ifndef KCG_USER_DEFINED_INIT
void Balise_Interdistance_init_InfraLib(
  outC_Balise_Interdistance_InfraLib *outC)
{
  outC->_L14 = kcg_lit_float32(0.0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_float32(0.0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L1_Abs_1_int32 = kcg_true;
  outC->_L2_Abs_1_int32 = kcg_lit_int32(0);
  outC->_L3_Abs_1_int32 = kcg_lit_int32(0);
  outC->_L5_Abs_1_int32 = kcg_lit_int32(0);
  outC->_L8_Abs_1_int32 = kcg_lit_int32(0);
  outC->A_Input_Abs_1_int32 = kcg_lit_int32(0);
  outC->A_Output_Abs_1_int32 = kcg_lit_int32(0);
  outC->distance_BB = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Balise_Interdistance_reset_InfraLib(
  outC_Balise_Interdistance_InfraLib *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: InfraLib::Balise_Interdistance/
  @1: (math::Abs#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balise_Interdistance_InfraLib.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

