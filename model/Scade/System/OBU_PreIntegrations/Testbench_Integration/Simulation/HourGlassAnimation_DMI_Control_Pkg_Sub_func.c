/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "HourGlassAnimation_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::HourGlassAnimation/ */
void HourGlassAnimation_DMI_Control_Pkg_Sub_func(
  /* start/ */
  kcg_bool start,
  /* stop/ */
  kcg_bool stop,
  /* actualtime/ */
  time_Type_MoRC_Pck actualtime,
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_bool noname;

  outC->_L12 = kcg_lit_int32(40);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(10);
  outC->_L1 = start;
  outC->_L2 = stop;
  outC->_L3 = actualtime;
  outC->_L15 = kcg_true;
  /* _L8=(MoRC_Pck::Utils::countDownTimer#1)/ */
  countDownTimer_MoRC_Pck_Utils(
    outC->_L1,
    outC->_L2,
    outC->_L3,
    outC->_L15,
    kcg_lit_int32(20),
    &outC->Context_countDownTimer_1);
  outC->_L8 = outC->Context_countDownTimer_1.expired;
  outC->_L9 = outC->Context_countDownTimer_1.started;
  /* _L6=(digital::RisingEdge#1)/ */
  RisingEdge_digital(outC->_L8, &outC->Context_RisingEdge_1);
  outC->_L6 = outC->Context_RisingEdge_1.RE_Output;
  /* _L13= */
  if (outC->_L6) {
    outC->_L13 = outC->_L10;
  }
  else {
    outC->_L13 = outC->_L5;
  }
  /* _L14=(pwlinear::Counter#1)/ */
  Counter_pwlinear_int32(outC->_L13, kcg_false, &outC->Context_Counter_1);
  outC->_L14 = outC->Context_Counter_1.Count_int32;
  outC->_L7 = outC->_L14 % outC->_L12;
  outC->Output1 = outC->_L7;
  noname = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void HourGlassAnimation_init_DMI_Control_Pkg_Sub_func(
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
  outC->Output1 = kcg_lit_int32(0);
  /* _L14=(pwlinear::Counter#1)/ */
  Counter_init_pwlinear_int32(&outC->Context_Counter_1);
  /* _L6=(digital::RisingEdge#1)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_1);
  /* _L8=(MoRC_Pck::Utils::countDownTimer#1)/ */
  countDownTimer_init_MoRC_Pck_Utils(&outC->Context_countDownTimer_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void HourGlassAnimation_reset_DMI_Control_Pkg_Sub_func(
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC)
{
  /* _L14=(pwlinear::Counter#1)/ */
  Counter_reset_pwlinear_int32(&outC->Context_Counter_1);
  /* _L6=(digital::RisingEdge#1)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_1);
  /* _L8=(MoRC_Pck::Utils::countDownTimer#1)/ */
  countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_countDownTimer_1);
}


void kcg_save_SV_HourGlassAnimation_DMI_Control_Pkg_Sub_func(
  SV_HourGlassAnimation_DMI_Control_Pkg_Sub_func *SV,
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC)
{
  kcg_save_SV_countDownTimer_MoRC_Pck_Utils(
    &SV->Context_countDownTimer_1,
    &outC->Context_countDownTimer_1);
  kcg_save_SV_RisingEdge_digital(
    &SV->Context_RisingEdge_1,
    &outC->Context_RisingEdge_1);
  kcg_save_SV_Counter_pwlinear_int32(
    &SV->Context_Counter_1,
    &outC->Context_Counter_1);
}

void kcg_load_SV_HourGlassAnimation_DMI_Control_Pkg_Sub_func(
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC,
  SV_HourGlassAnimation_DMI_Control_Pkg_Sub_func *SV)
{
  kcg_load_SV_countDownTimer_MoRC_Pck_Utils(
    &outC->Context_countDownTimer_1,
    &SV->Context_countDownTimer_1);
  kcg_load_SV_RisingEdge_digital(
    &outC->Context_RisingEdge_1,
    &SV->Context_RisingEdge_1);
  kcg_load_SV_Counter_pwlinear_int32(
    &outC->Context_Counter_1,
    &SV->Context_Counter_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** HourGlassAnimation_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

