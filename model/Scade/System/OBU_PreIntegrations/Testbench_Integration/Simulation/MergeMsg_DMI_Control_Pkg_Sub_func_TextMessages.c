/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg/ */
void MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  /* num/ */
  kcg_int32 num,
  /* impQueue/ */
  _94_array *impQueue,
  /* AuxiQueue/ */
  _94_array *AuxiQueue,
  outC_MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static _94_array acc;
  static kcg_size idx3;

  kcg_copy__94_array(&outC->_L43, AuxiQueue);
  /* _L47/ */
  for (idx = 0; idx < 10; idx++) {
    kcg_copy__94_array(&outC->_L47[idx], &outC->_L43);
  }
  outC->_L45 = num;
  /* _L46/ */
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L46[idx1] = outC->_L45;
  }
  kcg_copy__94_array(&outC->_L14, impQueue);
  /* _L40/ */
  for (idx2 = 0; idx2 < 10; idx2++) {
    kcg_copy__94_array(&outC->_L40[idx2], &outC->_L14);
  }
  kcg_copy__94_array(&outC->_L39, &outC->_L43);
  /* _L39= */
  for (idx3 = 0; idx3 < 10; idx3++) {
    kcg_copy__94_array(&acc, &outC->_L39);
    /* _L39=(DMI_Control_Pkg::Sub_func::TextMessages::MergeMSG_iterator#1)/ */
    MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
      /* _L39= */(kcg_int32) idx3,
      &acc,
      &outC->_L40[idx3],
      outC->_L46[idx3],
      &outC->_L47[idx3],
      &outC->Context_MergeMSG_iterator_1[idx3]);
    kcg_copy__94_array(
      &outC->_L39,
      &outC->Context_MergeMSG_iterator_1[idx3].OutputArray);
  }
  kcg_copy__94_array(&outC->OutQueue, &outC->_L39);
}

#ifndef KCG_USER_DEFINED_INIT
void MergeMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;

  for (idx3 = 0; idx3 < 10; idx3++) {
    for (idx2 = 0; idx2 < 10; idx2++) {
      outC->_L47[idx3][idx2].present = kcg_true;
      outC->_L47[idx3][idx2].dmi_msg.valid = kcg_true;
      outC->_L47[idx3][idx2].dmi_msg.system_clock = kcg_lit_int32(0);
      outC->_L47[idx3][idx2].dmi_msg.textMessage_ID = kcg_lit_int32(0);
      outC->_L47[idx3][idx2].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
      outC->_L47[idx3][idx2].dmi_msg.l_text = kcg_lit_int32(0);
      for (idx1 = 0; idx1 < 255; idx1++) {
        outC->_L47[idx3][idx2].dmi_msg.x_text[idx1] = ' ';
      }
      outC->_L47[idx3][idx2].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
      outC->_L47[idx3][idx2].dmi_msg.q_textConfirm =
        Q_TEXTCONFIRM_No_confirmation_required;
    }
  }
  for (idx4 = 0; idx4 < 10; idx4++) {
    outC->_L46[idx4] = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 10; idx7++) {
    for (idx6 = 0; idx6 < 10; idx6++) {
      outC->_L40[idx7][idx6].present = kcg_true;
      outC->_L40[idx7][idx6].dmi_msg.valid = kcg_true;
      outC->_L40[idx7][idx6].dmi_msg.system_clock = kcg_lit_int32(0);
      outC->_L40[idx7][idx6].dmi_msg.textMessage_ID = kcg_lit_int32(0);
      outC->_L40[idx7][idx6].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
      outC->_L40[idx7][idx6].dmi_msg.l_text = kcg_lit_int32(0);
      for (idx5 = 0; idx5 < 255; idx5++) {
        outC->_L40[idx7][idx6].dmi_msg.x_text[idx5] = ' ';
      }
      outC->_L40[idx7][idx6].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
      outC->_L40[idx7][idx6].dmi_msg.q_textConfirm =
        Q_TEXTCONFIRM_No_confirmation_required;
    }
  }
  outC->_L45 = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 10; idx9++) {
    outC->_L43[idx9].present = kcg_true;
    outC->_L43[idx9].dmi_msg.valid = kcg_true;
    outC->_L43[idx9].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L43[idx9].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L43[idx9].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L43[idx9].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx8 = 0; idx8 < 255; idx8++) {
      outC->_L43[idx9].dmi_msg.x_text[idx8] = ' ';
    }
    outC->_L43[idx9].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L43[idx9].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx11 = 0; idx11 < 10; idx11++) {
    outC->_L39[idx11].present = kcg_true;
    outC->_L39[idx11].dmi_msg.valid = kcg_true;
    outC->_L39[idx11].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L39[idx11].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L39[idx11].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L39[idx11].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx10 = 0; idx10 < 255; idx10++) {
      outC->_L39[idx11].dmi_msg.x_text[idx10] = ' ';
    }
    outC->_L39[idx11].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L39[idx11].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx13 = 0; idx13 < 10; idx13++) {
    outC->_L14[idx13].present = kcg_true;
    outC->_L14[idx13].dmi_msg.valid = kcg_true;
    outC->_L14[idx13].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L14[idx13].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L14[idx13].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L14[idx13].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx12 = 0; idx12 < 255; idx12++) {
      outC->_L14[idx13].dmi_msg.x_text[idx12] = ' ';
    }
    outC->_L14[idx13].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L14[idx13].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx15 = 0; idx15 < 10; idx15++) {
    outC->OutQueue[idx15].present = kcg_true;
    outC->OutQueue[idx15].dmi_msg.valid = kcg_true;
    outC->OutQueue[idx15].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->OutQueue[idx15].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->OutQueue[idx15].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->OutQueue[idx15].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx14 = 0; idx14 < 255; idx14++) {
      outC->OutQueue[idx15].dmi_msg.x_text[idx14] = ' ';
    }
    outC->OutQueue[idx15].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->OutQueue[idx15].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx = 0; idx < 10; idx++) {
    /* _L39=(DMI_Control_Pkg::Sub_func::TextMessages::MergeMSG_iterator#1)/ */
    MergeMSG_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_MergeMSG_iterator_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void MergeMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 10; idx++) {
    /* _L39=(DMI_Control_Pkg::Sub_func::TextMessages::MergeMSG_iterator#1)/ */
    MergeMSG_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_MergeMSG_iterator_1[idx]);
  }
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

