/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _95_array /* Queue/ */ Queue;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages /* _L1=(DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator#1)/ */ Context_DeleteMSGFIFO_iterator_1[10];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  _95_array /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  array_int64_10 /* _L3/ */ _L3;
  _95_array /* _L5/ */ _L5;
  _95_array /* _L6/ */ _L6;
  _95_array /* _L7/ */ _L7;
  _36_array /* _L8/ */ _L8;
  _37_array /* _L9/ */ _L9;
} outC_FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal/ */
extern void FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DeletePos/ */
  kcg_int64 DeletePos,
  /* queueIn/ */
  _95_array *queueIn,
  outC_FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void FIFO_Delete_Op_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void FIFO_Delete_Op_Normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

