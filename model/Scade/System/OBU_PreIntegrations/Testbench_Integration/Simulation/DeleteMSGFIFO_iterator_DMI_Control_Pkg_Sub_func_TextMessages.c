/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator/ */
void DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int32 index,
  /* QueueElemIn/ */
  MsgStructure *QueueElemIn,
  /* QueueElemShifted/ */
  MsgStructure *QueueElemShifted,
  /* Pos/ */
  kcg_int32 Pos,
  outC_DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_copy_MsgStructure(&outC->_L35, QueueElemShifted);
  kcg_copy_MsgStructure(&outC->_L19, QueueElemIn);
  outC->_L17 = Pos;
  outC->_L15 = index;
  outC->_L16 = outC->_L15 < outC->_L17;
  /* _L30= */
  if (outC->_L16) {
    kcg_copy_MsgStructure(&outC->_L30, &outC->_L19);
  }
  else {
    kcg_copy_MsgStructure(&outC->_L30, &outC->_L35);
  }
  kcg_copy_MsgStructure(&outC->QueueElemOut, &outC->_L30);
}

#ifndef KCG_USER_DEFINED_INIT
void DeleteMSGFIFO_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L35.present = kcg_true;
  outC->_L35.dmi_msg.valid = kcg_true;
  outC->_L35.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L35.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L35.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L35.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L35.dmi_msg.x_text[idx] = ' ';
  }
  outC->_L35.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L35.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L30.present = kcg_true;
  outC->_L30.dmi_msg.valid = kcg_true;
  outC->_L30.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L30.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L30.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L30.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 255; idx1++) {
    outC->_L30.dmi_msg.x_text[idx1] = ' ';
  }
  outC->_L30.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L30.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L19.present = kcg_true;
  outC->_L19.dmi_msg.valid = kcg_true;
  outC->_L19.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L19.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L19.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L19.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 255; idx2++) {
    outC->_L19.dmi_msg.x_text[idx2] = ' ';
  }
  outC->_L19.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L19.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_lit_int32(0);
  outC->QueueElemOut.present = kcg_true;
  outC->QueueElemOut.dmi_msg.valid = kcg_true;
  outC->QueueElemOut.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->QueueElemOut.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->QueueElemOut.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->QueueElemOut.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 255; idx3++) {
    outC->QueueElemOut.dmi_msg.x_text[idx3] = ' ';
  }
  outC->QueueElemOut.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->QueueElemOut.dmi_msg.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
}
#endif /* KCG_USER_DEFINED_INIT */


void DeleteMSGFIFO_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

