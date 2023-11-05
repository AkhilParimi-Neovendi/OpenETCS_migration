/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "waitAndRepeatTimer_MoRC_Pck_Utils.h"

/* MoRC_Pck::Utils::waitAndRepeatTimer/ */
void waitAndRepeatTimer_MoRC_Pck_Utils(
  /* actualTime/ */
  time_Type_MoRC_Pck actualTime,
  /* re_start/ */
  kcg_bool re_start,
  /* stop/ */
  kcg_bool stop,
  /* repeatInterval/ */
  time_Type_MoRC_Pck repeatInterval,
  /* maxNoOfRepetitions/ */
  kcg_int32 maxNoOfRepetitions,
  outC_waitAndRepeatTimer_MoRC_Pck_Utils *outC)
{
  outC->_L21 = re_start;
  outC->_L24 = stop;
  outC->_L3 = actualTime;
  outC->_L4 = kcg_true;
  outC->_L5 = repeatInterval;
  /* _L1=(MoRC_Pck::Utils::countDownTimer#1)/ */
  countDownTimer_MoRC_Pck_Utils(
    outC->_L21,
    outC->_L24,
    outC->_L3,
    outC->_L4,
    outC->_L5,
    &outC->Context_countDownTimer_1);
  outC->_L1 = outC->Context_countDownTimer_1.expired;
  outC->_L27 = outC->Context_countDownTimer_1.started;
  outC->_L11 = maxNoOfRepetitions;
  /* _L9= */
  if (outC->init) {
    outC->_L9 = kcg_lit_int32(0);
  }
  else {
    outC->_L9 = outC->_L22;
  }
  outC->_L10 = outC->_L9 >= outC->_L11;
  outC->_L14 = !outC->_L10;
  outC->_L28 = outC->_L14 & outC->_L27;
  outC->_L15 = outC->_L14 & outC->_L1;
  outC->_L25 = outC->_L15 | outC->_L28;
  outC->_L23 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(1);
  outC->_L6 = outC->_L7 + outC->_L9;
  /* _L8= */
  if (outC->_L1) {
    outC->_L8 = outC->_L6;
  }
  else {
    outC->_L8 = outC->_L9;
  }
  /* _L22= */
  if (outC->_L21) {
    outC->_L22 = outC->_L23;
  }
  else {
    outC->_L22 = outC->_L8;
  }
  outC->triggerAction = outC->_L25;
  outC->elapsed = outC->_L10;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void waitAndRepeatTimer_init_MoRC_Pck_Utils(
  outC_waitAndRepeatTimer_MoRC_Pck_Utils *outC)
{
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_lit_int32(0);
  outC->_L21 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L1 = kcg_true;
  outC->_L22 = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->elapsed = kcg_true;
  outC->triggerAction = kcg_true;
  /* _L1=(MoRC_Pck::Utils::countDownTimer#1)/ */
  countDownTimer_init_MoRC_Pck_Utils(&outC->Context_countDownTimer_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void waitAndRepeatTimer_reset_MoRC_Pck_Utils(
  outC_waitAndRepeatTimer_MoRC_Pck_Utils *outC)
{
  outC->init = kcg_true;
  /* _L1=(MoRC_Pck::Utils::countDownTimer#1)/ */
  countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_countDownTimer_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** waitAndRepeatTimer_MoRC_Pck_Utils.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

