/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_float32_5 /* time/ */ time;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  kcg_bool /* _L4/ */ _L4;
  array_float32_5 /* _L6/ */ _L6;
  array_float32_5 /* _L19/ */ _L19;
  kcg_float32 /* _L20/ */ _L20;
  array_float32_5 /* _L21/ */ _L21;
  array_float32_5 /* _L22/ */ _L22;
  kcg_int32 /* _L23/ */ _L23;
  array_float32_5 /* _L24/ */ _L24;
  kcg_int32 /* _L25/ */ _L25;
  kcg_float32 /* _L26/ */ _L26;
  kcg_int32 /* _L27/ */ _L27;
  kcg_int32 /* _L28/ */ _L28;
} outC_deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_ack/ */
extern void deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int32 index,
  /* acc/ */
  array_float32_5 *acc,
  /* Position/ */
  kcg_int32 Position,
  /* time_array/ */
  array_float32_5 *time_array,
  outC_deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void deleteTime_iterator_ack_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void deleteTime_iterator_ack_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

