/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* accout/ */ accout;
  kcg_bool /* output/ */ output;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L18/ */ _L18;
  kcg_bool /* _L17/ */ _L17;
  DMI_Q_TEXT_DMI_Types_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L15/ */ _L15;
  DMI_Q_TEXT_DMI_Types_Pkg /* _L14/ */ _L14;
  kcg_bool /* _L13/ */ _L13;
} outC_Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator/ */
extern void Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int64 index,
  /* acc_in/ */
  kcg_bool acc_in,
  /* q_text_1/ */
  DMI_Q_TEXT_DMI_Types_Pkg q_text_1,
  /* q_text_2/ */
  DMI_Q_TEXT_DMI_Types_Pkg q_text_2,
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void Find_Q_Text_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Find_Q_Text_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

