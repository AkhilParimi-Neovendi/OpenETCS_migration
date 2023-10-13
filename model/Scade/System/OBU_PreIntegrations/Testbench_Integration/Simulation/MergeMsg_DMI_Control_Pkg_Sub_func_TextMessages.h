/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _95_array /* OutQueue/ */ OutQueue;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages /* _L39=(DMI_Control_Pkg::Sub_func::TextMessages::MergeMSG_iterator#1)/ */ Context_MergeMSG_iterator_1[10];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  _95_array /* _L14/ */ _L14;
  _95_array /* _L39/ */ _L39;
  _95_array /* _L43/ */ _L43;
  kcg_int64 /* _L45/ */ _L45;
  _83_array /* _L40/ */ _L40;
  array_int64_10 /* _L46/ */ _L46;
  _83_array /* _L47/ */ _L47;
} outC_MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg/ */
extern void MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  /* num/ */
  kcg_int64 num,
  /* impQueue/ */
  _95_array *impQueue,
  /* AuxiQueue/ */
  _95_array *AuxiQueue,
  outC_MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void MergeMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void MergeMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

