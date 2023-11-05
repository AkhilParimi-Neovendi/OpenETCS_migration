/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator/ */
void Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int32 index,
  /* acc_in/ */
  kcg_bool acc_in,
  /* q_text_1/ */
  DMI_Q_TEXT_DMI_Types_Pkg q_text_1,
  /* q_text_2/ */
  DMI_Q_TEXT_DMI_Types_Pkg q_text_2,
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int32 noname;
  static kcg_bool _1_noname;

  outC->_L13 = acc_in;
  _1_noname = outC->_L13;
  outC->_L18 = index;
  outC->_L14 = q_text_1;
  outC->_L16 = q_text_2;
  outC->_L15 = outC->_L16 == outC->_L14;
  outC->_L17 = !outC->_L15;
  outC->accout = outC->_L17;
  outC->output = outC->_L15;
  noname = outC->_L18;
}

#ifndef KCG_USER_DEFINED_INIT
void Find_Q_Text_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L13 = kcg_true;
  outC->_L14 = balise_read_error_DMI_Types_Pkg;
  outC->_L15 = kcg_true;
  outC->_L16 = balise_read_error_DMI_Types_Pkg;
  outC->_L17 = kcg_true;
  outC->_L18 = kcg_lit_int32(0);
  outC->output = kcg_true;
  outC->accout = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void Find_Q_Text_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

