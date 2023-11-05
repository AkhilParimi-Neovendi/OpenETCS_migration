/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages_H_

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
  kcg_int32 /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  kcg_bool /* _L4/ */ _L4;
  _94_array /* _L6/ */ _L6;
  _94_array /* _L14/ */ _L14;
  kcg_bool /* _L13/ */ _L13;
  MsgStructure /* _L12/ */ _L12;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L3/ */ _L3;
  _94_array /* _L19/ */ _L19;
  kcg_int32 /* _L20/ */ _L20;
  _94_array /* _L26/ */ _L26;
  _94_array /* _L22/ */ _L22;
  kcg_bool /* _L33/ */ _L33;
  kcg_int32 /* _L32/ */ _L32;
  kcg_bool /* _L31/ */ _L31;
  kcg_int32 /* _L30/ */ _L30;
  kcg_bool /* _L29/ */ _L29;
  _94_array /* _L35/ */ _L35;
  kcg_int32 /* _L38/ */ _L38;
  MsgStructure /* _L39/ */ _L39;
  _94_array /* _L40/ */ _L40;
  MsgStructure /* _L41/ */ _L41;
  kcg_int32 /* _L42/ */ _L42;
  kcg_int32 /* _L43/ */ _L43;
  kcg_int32 /* _L44/ */ _L44;
  _94_array /* _L63/ */ _L63;
  kcg_int32 /* _L72/ */ _L72;
  kcg_int32 /* _L70/ */ _L70;
  kcg_bool /* _L69/ */ _L69;
  _94_array /* _L74/ */ _L74;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L80/ */ _L80;
  kcg_bool /* _L79/ */ _L79;
  _94_array /* _L78/ */ _L78;
  MsgStructure /* _L77/ */ _L77;
  kcg_int32 /* _L76/ */ _L76;
  _94_array /* _L75/ */ _L75;
  kcg_bool /* _L81/ */ _L81;
  kcg_bool /* _L82/ */ _L82;
  kcg_bool /* _L83/ */ _L83;
  kcg_bool /* _L84/ */ _L84;
  kcg_bool /* _L85/ */ _L85;
} outC_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal/ */
extern void InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int32 index,
  /* acc/ */
  _94_array *acc,
  /* Position/ */
  kcg_int32 Position,
  /* newMsg/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *newMsg,
  /* isFull/ */
  kcg_bool isFull,
  outC_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void InsertStructMSGFIFO_iterator_normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void InsertStructMSGFIFO_iterator_normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  _94_array /* OutputArray/ */ Context_OutputArray;
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages;

extern void kcg_save_SV_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);
extern void kcg_load_SV_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages *SV);



#endif /* _InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

