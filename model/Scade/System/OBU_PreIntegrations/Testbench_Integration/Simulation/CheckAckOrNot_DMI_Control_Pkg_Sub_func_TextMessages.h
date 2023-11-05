/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Output1/ */ Output1;
  kcg_bool /* Output2/ */ Output2;
  kcg_bool /* Output3/ */ Output3;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_TEXTCONFIRM /* ackMsg1/ */ ackMsg1;
  Q_TEXTCONFIRM /* askMsg2/ */ askMsg2;
  Q_TEXTCONFIRM /* _L17/ */ _L17;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L14/ */ _L14;
  Q_TEXTCONFIRM /* _L13/ */ _L13;
  Q_TEXTCLASS /* _L12/ */ _L12;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  Q_TEXTCLASS /* _L8/ */ _L8;
  Q_TEXTCONFIRM /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  Q_TEXTCLASS /* _L1/ */ _L1;
  Q_TEXTCONFIRM /* _L18/ */ _L18;
  Q_TEXTCONFIRM /* _L19/ */ _L19;
  Q_TEXTCONFIRM /* _L20/ */ _L20;
  Q_TEXTCONFIRM /* _L21/ */ _L21;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L27/ */ _L27;
} outC_CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot/ */
extern void CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_text_message/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_text_message,
  outC_CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void CheckAckOrNot_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void CheckAckOrNot_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

