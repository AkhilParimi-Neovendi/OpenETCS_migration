/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Square_mathext_float32.h"

/* mathext::Square/ */
void Square_mathext_float32(
  /* Square_In/ */
  kcg_float32 Square_In_float32,
  outC_Square_mathext_float32 *outC)
{
  outC->_L1_float32 = Square_In_float32;
  outC->_L2_float32 = outC->_L1_float32 * outC->_L1_float32;
  outC->Square_Out_float32 = outC->_L2_float32;
}

#ifndef KCG_USER_DEFINED_INIT
void Square_init_mathext_float32(outC_Square_mathext_float32 *outC)
{
  outC->_L2_float32 = kcg_lit_float32(0.0);
  outC->_L1_float32 = kcg_lit_float32(0.0);
  outC->Square_Out_float32 = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Square_reset_mathext_float32(outC_Square_mathext_float32 *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Square_mathext_float32.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

