/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _94_array /* outArray/ */ outArray;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L2/ */ _L2;
  _94_array /* _L4/ */ _L4;
  _94_array /* _L19/ */ _L19;
  MsgStructure /* _L23/ */ _L23;
  kcg_int32 /* _L22/ */ _L22;
  _94_array /* _L21/ */ _L21;
  MsgStructure /* _L20/ */ _L20;
  MsgStructure /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  _94_array /* _L26/ */ _L26;
  kcg_int32 /* _L27/ */ _L27;
  kcg_int32 /* _L28/ */ _L28;
  kcg_int32 /* _L29/ */ _L29;
  kcg_int32 /* _L30/ */ _L30;
  kcg_int32 /* _L31/ */ _L31;
  MsgStructure /* _L32/ */ _L32;
  _94_array /* _L33/ */ _L33;
  MsgStructure /* _L34/ */ _L34;
  _94_array /* _L35/ */ _L35;
} outC_SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::SortMsgTopDown/ */
extern void SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int32 index,
  /* acc/ */
  _94_array *acc,
  /* Queue/ */
  _94_array *Queue,
  /* numE/ */
  kcg_int32 numE,
  outC_SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void SortMsgTopDown_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SortMsgTopDown_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

