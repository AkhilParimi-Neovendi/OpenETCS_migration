/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MsgStructure /* QueueElemOut/ */ QueueElemOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_int32 /* _L17/ */ _L17;
  MsgStructure /* _L19/ */ _L19;
  MsgStructure /* _L30/ */ _L30;
  MsgStructure /* _L35/ */ _L35;
} outC_DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator/ */
extern void DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int32 index,
  /* QueueElemIn/ */
  MsgStructure *QueueElemIn,
  /* QueueElemShifted/ */
  MsgStructure *QueueElemShifted,
  /* Pos/ */
  kcg_int32 Pos,
  outC_DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void DeleteMSGFIFO_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void DeleteMSGFIFO_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

