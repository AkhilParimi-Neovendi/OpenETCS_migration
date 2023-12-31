/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RisingEdge_digital.h"

void RisingEdge_init_digital(outC_RisingEdge_digital *outC)
{
  outC->init = kcg_true;
  outC->rem_RE_Input = kcg_true;
  outC->RE_Output = kcg_true;
}


void RisingEdge_reset_digital(outC_RisingEdge_digital *outC)
{
  outC->init = kcg_true;
}

/* digital::RisingEdge */
void RisingEdge_digital(
  /* digital::RisingEdge::RE_Input */ kcg_bool RE_Input,
  outC_RisingEdge_digital *outC)
{
  kcg_bool tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    tmp = !RE_Input;
  }
  else {
    tmp = !outC->rem_RE_Input;
  }
  outC->RE_Output = tmp & RE_Input;
  outC->rem_RE_Input = RE_Input;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** RisingEdge_digital.c
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

