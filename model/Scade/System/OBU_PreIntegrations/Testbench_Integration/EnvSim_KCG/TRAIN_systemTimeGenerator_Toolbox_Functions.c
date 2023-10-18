/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TRAIN_systemTimeGenerator_Toolbox_Functions.h"

/* Toolbox::Functions::TRAIN_systemTimeGenerator/ */
void TRAIN_systemTimeGenerator_Toolbox_Functions(
  /* deltaTime/ */
  kcg_int64 deltaTime,
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC)
{
  /* _L4= */
  if (outC->init) {
    outC->_L4 = kcg_lit_int64(0);
  }
  else {
    outC->_L4 = outC->_L2;
  }
  outC->_L3 = deltaTime;
  outC->_L2 = outC->_L3 + outC->_L4;
  outC->timestamp = outC->_L2;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void TRAIN_systemTimeGenerator_init_Toolbox_Functions(
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC)
{
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->init = kcg_true;
  outC->timestamp = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TRAIN_systemTimeGenerator_reset_Toolbox_Functions(
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TRAIN_systemTimeGenerator_Toolbox_Functions.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

