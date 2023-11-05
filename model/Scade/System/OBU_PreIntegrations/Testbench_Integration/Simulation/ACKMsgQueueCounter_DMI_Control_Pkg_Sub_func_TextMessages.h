/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "Counter_pwlinear_int32.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* NumElem/ */ NumElem;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter_pwlinear_int32 /* _L155=(pwlinear::Counter#1)/ */ Context_Counter_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L161/ */ _L161;
  kcg_bool /* _L160/ */ _L160;
  kcg_bool /* _L158/ */ _L158;
  kcg_int32 /* _L156/ */ _L156;
  kcg_int32 /* _L155/ */ _L155;
  kcg_bool /* _L154/ */ _L154;
  kcg_bool /* _L153/ */ _L153;
  kcg_bool /* _L149/ */ _L149;
  kcg_int32 /* _L148/ */ _L148;
  kcg_int32 /* _L147/ */ _L147;
  kcg_bool /* _L143/ */ _L143;
  kcg_int32 /* _L167/ */ _L167;
  kcg_int32 /* _L169/ */ _L169;
} outC_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::ACKMsgQueueCounter/ */
extern void ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
  /* insert/ */
  kcg_bool insert,
  /* isFull/ */
  kcg_bool isFull,
  /* countCommand/ */
  kcg_int32 countCommand,
  /* num_last/ */
  kcg_int32 num_last,
  outC_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void ACKMsgQueueCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ACKMsgQueueCounter_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  kcg_int32 /* NumElem/ */ Context_NumElem;
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_Counter_pwlinear_int32 Context_Counter_1;
} SV_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages;

extern void kcg_save_SV_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC);
extern void kcg_load_SV_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *SV);



#endif /* _ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

