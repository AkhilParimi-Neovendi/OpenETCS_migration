/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_char_30_5 /* Output1/ */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MsgStructure /* _L1/ */ _L1;
  array_char_30 /* _L2/ */ _L2;
  array_char_30 /* _L3/ */ _L3;
  array_char_30 /* _L4/ */ _L4;
  array_char_30 /* _L5/ */ _L5;
  array_char_30 /* _L6/ */ _L6;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L8/ */ _L8;
  DMI_TEXT_DMI_Types_Pkg /* _L9/ */ _L9;
  L_TEXT /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_int64 /* _L13/ */ _L13;
  kcg_int64 /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  array_char_30_5 /* _L16/ */ _L16;
  MsgStructure /* _L18/ */ _L18;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L19/ */ _L19;
  kcg_int64 /* _L26/ */ _L26;
  kcg_bool /* _L25/ */ _L25;
  L_TEXT /* _L24/ */ _L24;
  kcg_int64 /* _L23/ */ _L23;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L21/ */ _L21;
  array_char_30_5 /* _L28/ */ _L28;
  array_char_30 /* _L29/ */ _L29;
  array_char_30_5 /* _L30/ */ _L30;
  DMI_TEXT_DMI_Types_Pkg /* _L31/ */ _L31;
  array_char_30 /* _L32/ */ _L32;
  array_char_30_5 /* _L33/ */ _L33;
  array_char_30 /* _L34/ */ _L34;
  array_char_30_5 /* _L35/ */ _L35;
  kcg_bool /* _L43/ */ _L43;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L42/ */ _L42;
  kcg_bool /* _L41/ */ _L41;
  kcg_int64 /* _L40/ */ _L40;
  kcg_int64 /* _L39/ */ _L39;
  kcg_bool /* _L38/ */ _L38;
  MsgStructure /* _L37/ */ _L37;
  L_TEXT /* _L36/ */ _L36;
  DMI_TEXT_DMI_Types_Pkg /* _L44/ */ _L44;
  array_char_30 /* _L45/ */ _L45;
  array_char_30 /* _L46/ */ _L46;
  array_char_30 /* _L47/ */ _L47;
  array_char_30_5 /* _L48/ */ _L48;
  array_char_30_5 /* _L49/ */ _L49;
  kcg_bool /* _L57/ */ _L57;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L56/ */ _L56;
  kcg_int64 /* _L55/ */ _L55;
  kcg_int64 /* _L54/ */ _L54;
  MsgStructure /* _L53/ */ _L53;
  kcg_bool /* _L52/ */ _L52;
  L_TEXT /* _L51/ */ _L51;
  kcg_bool /* _L50/ */ _L50;
  DMI_TEXT_DMI_Types_Pkg /* _L58/ */ _L58;
  array_char_30 /* _L62/ */ _L62;
  array_char_30 /* _L61/ */ _L61;
  array_char_30 /* _L60/ */ _L60;
  array_char_30 /* _L59/ */ _L59;
  array_char_30_5 /* _L63/ */ _L63;
  array_char_30_5 /* _L64/ */ _L64;
  kcg_int64 /* _L72/ */ _L72;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L71/ */ _L71;
  kcg_bool /* _L70/ */ _L70;
  kcg_bool /* _L69/ */ _L69;
  kcg_bool /* _L68/ */ _L68;
  L_TEXT /* _L67/ */ _L67;
  MsgStructure /* _L66/ */ _L66;
  kcg_int64 /* _L65/ */ _L65;
  DMI_TEXT_DMI_Types_Pkg /* _L73/ */ _L73;
  array_char_30 /* _L79/ */ _L79;
  array_char_30 /* _L78/ */ _L78;
  array_char_30 /* _L77/ */ _L77;
  array_char_30 /* _L76/ */ _L76;
  array_char_30 /* _L75/ */ _L75;
  array_char_30_5 /* _L80/ */ _L80;
  array_char_30_5 /* _L81/ */ _L81;
  kcg_bool /* _L86/ */ _L86;
  MsgStructure /* _L83/ */ _L83;
  MsgStructure /* _L88/ */ _L88;
  array_char_30_5 /* _L89/ */ _L89;
  array_char_30_5 /* _L91/ */ _L91;
} outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg/ */
extern void SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  /* Input/ */
  MsgStructure *Input1,
  outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void SliceMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SliceMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

