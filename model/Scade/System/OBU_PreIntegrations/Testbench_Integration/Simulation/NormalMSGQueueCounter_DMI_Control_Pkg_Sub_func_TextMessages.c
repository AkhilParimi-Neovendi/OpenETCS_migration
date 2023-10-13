/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter/ */
void NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
  /* insert/ */
  kcg_bool insert,
  /* isFull/ */
  kcg_bool isFull,
  /* countCommand/ */
  kcg_int64 countCommand,
  /* num_last/ */
  kcg_int64 num_last,
  outC_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* NumElem/ */
  static kcg_int64 last_NumElem;

  last_NumElem = outC->NumElem;
  outC->_L169 = num_last;
  outC->_L167 = countCommand;
  outC->_L148 = kcg_lit_int64(0);
  outC->_L160 = insert;
  outC->_L154 = isFull;
  outC->_L153 = outC->_L154 & outC->_L160;
  /* _L161= */
  if (outC->_L153) {
    outC->_L161 = outC->_L148;
  }
  else {
    outC->_L161 = outC->_L167;
  }
  outC->_L147 = kcg_lit_int64(0);
  outC->_L158 = outC->_L169 <= outC->_L147;
  outC->_L156 = cDIM_MSGQueueMax_DMI_Control_Pkg;
  outC->_L143 = outC->_L169 > outC->_L156;
  outC->_L149 = outC->_L158 | outC->_L143;
  /* _L155=(pwlinear::Counter#1)/ */
  Counter_pwlinear_int64(outC->_L161, outC->_L149, &outC->Context_Counter_1);
  outC->_L155 = outC->Context_Counter_1.Count_int64;
  outC->NumElem = outC->_L155;
}

#ifndef KCG_USER_DEFINED_INIT
void NormalMSGQueueCounter_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L169 = kcg_lit_int64(0);
  outC->_L167 = kcg_lit_int64(0);
  outC->_L143 = kcg_true;
  outC->_L147 = kcg_lit_int64(0);
  outC->_L148 = kcg_lit_int64(0);
  outC->_L149 = kcg_true;
  outC->_L153 = kcg_true;
  outC->_L154 = kcg_true;
  outC->_L155 = kcg_lit_int64(0);
  outC->_L156 = kcg_lit_int64(0);
  outC->_L158 = kcg_true;
  outC->_L160 = kcg_true;
  outC->_L161 = kcg_lit_int64(0);
  /* _L155=(pwlinear::Counter#1)/ */
  Counter_init_pwlinear_int64(&outC->Context_Counter_1);
  outC->NumElem = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void NormalMSGQueueCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* _L155=(pwlinear::Counter#1)/ */
  Counter_reset_pwlinear_int64(&outC->Context_Counter_1);
  outC->NumElem = kcg_lit_int64(0);
}


void kcg_save_SV_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_save_SV_Counter_pwlinear_int64(
    &SV->Context_Counter_1,
    &outC->Context_Counter_1);
  SV->Context_NumElem = outC->NumElem;
}

void kcg_load_SV_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *SV)
{
  kcg_load_SV_Counter_pwlinear_int64(
    &outC->Context_Counter_1,
    &SV->Context_Counter_1);
  outC->NumElem = SV->Context_NumElem;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */
