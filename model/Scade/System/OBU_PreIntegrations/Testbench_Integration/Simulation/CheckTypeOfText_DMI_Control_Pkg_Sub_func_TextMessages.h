/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Output1/ */ Output1;
  kcg_bool /* Output2/ */ Output2;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  _82_array /* _L1/ */ _L1;
  MsgStructure /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  L_TEXT /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
} outC_CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText/ */
extern void CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages(
  /* Queue/ */
  _82_array *Queue,
  outC_CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void CheckTypeOfText_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void CheckTypeOfText_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

