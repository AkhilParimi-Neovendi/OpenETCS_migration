/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _94_array /* OutputArray/ */ OutputArray;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  _94_array /* _L5/ */ _L5;
  _94_array /* _L15/ */ _L15;
  kcg_int32 /* _L13/ */ _L13;
  _94_array /* _L12/ */ _L12;
  MsgStructure /* _L11/ */ _L11;
  kcg_int32 /* _L21/ */ _L21;
  kcg_int32 /* _L22/ */ _L22;
  _94_array /* _L24/ */ _L24;
  kcg_int32 /* _L25/ */ _L25;
  MsgStructure /* _L29/ */ _L29;
  MsgStructure /* _L32/ */ _L32;
  kcg_int32 /* _L33/ */ _L33;
  MsgStructure /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  MsgStructure /* _L36/ */ _L36;
  _94_array /* _L37/ */ _L37;
  _94_array /* _L38/ */ _L38;
} outC_MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::MergeMSG_iterator/ */
extern void MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int32 index,
  /* acc/ */
  _94_array *acc,
  /* ImpmsgArray/ */
  _94_array *ImpmsgArray,
  /* numAuxi/ */
  kcg_int32 numAuxi,
  /* auximsgArray/ */
  _94_array *auximsgArray,
  outC_MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void MergeMSG_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void MergeMSG_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

