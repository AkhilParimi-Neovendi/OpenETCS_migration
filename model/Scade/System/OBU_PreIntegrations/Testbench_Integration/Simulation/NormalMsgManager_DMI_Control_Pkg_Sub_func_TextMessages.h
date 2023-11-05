/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "ScrollController_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int32_5 /* IndexFixedMsg/ */ IndexFixedMsg;
  array_char_30_5 /* ArrayPlainText/ */ ArrayPlainText;
  array_float32_5 /* Array_hh/ */ Array_hh;
  array_float32_5 /* Array_mm/ */ Array_mm;
  kcg_bool /* isImportantMsg/ */ isImportantMsg;
  kcg_int32 /* ScrollUpEnableIndex_toDisplay/ */ ScrollUpEnableIndex_toDisplay;
  kcg_int32 /* ScrollDownEnableIndex_toDisplay/ */ ScrollDownEnableIndex_toDisplay;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* isMoreThanFive/ */ isMoreThanFive;
  kcg_int32 /* scrollLevel/ */ scrollLevel;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages /* _L190=(DMI_Control_Pkg::Sub_func::TextMessages::ScrollController#1)/ */ Context_ScrollController_1;
  outC_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages /* _L198=(DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain#1)/ */ Context_ShowMsg_Plain_1;
  outC_SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages /* _L20=(DMI_Control_Pkg::Sub_func::TextMessages::SortMsgTopDown#1)/ */ Context_SortMsgTopDown_1[10];
  outC_SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages /* _L224=(DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal#2)/ */ Context_SortTimeTopDown_normal_2[10];
  outC_SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages /* _L226=(DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal#1)/ */ Context_SortTimeTopDown_normal_1[10];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  _94_array /* LocalArray/ */ LocalArray;
  array_float32_10 /* Local_mm_array/ */ Local_mm_array;
  array_float32_10 /* Local_hh_array/ */ Local_hh_array;
  _94_array /* _L26/ */ _L26;
  _94_array /* _L24/ */ _L24;
  array_int32_10 /* _L23/ */ _L23;
  _85_array /* _L22/ */ _L22;
  _94_array /* _L21/ */ _L21;
  _94_array /* _L20/ */ _L20;
  kcg_bool /* _L19/ */ _L19;
  _94_array /* _L162/ */ _L162;
  kcg_int32 /* _L176/ */ _L176;
  kcg_bool /* _L188/ */ _L188;
  kcg_bool /* _L189/ */ _L189;
  kcg_int32 /* _L190/ */ _L190;
  kcg_bool /* _L195/ */ _L195;
  kcg_int32 /* _L197/ */ _L197;
  kcg_bool /* _L204/ */ _L204;
  array_char_30_5 /* _L198/ */ _L198;
  array_int32_5 /* _L205/ */ _L205;
  kcg_int32 /* _L207/ */ _L207;
  kcg_int32 /* _L210/ */ _L210;
  kcg_int32 /* _L211/ */ _L211;
  array_int32_10 /* _L217/ */ _L217;
  array_float32_5 /* _L218/ */ _L218;
  array_float32_5 /* _L219/ */ _L219;
  array_float32_10_10 /* _L233/ */ _L233;
  kcg_int32 /* _L232/ */ _L232;
  array_float32_10 /* _L231/ */ _L231;
  array_float32_10 /* _L230/ */ _L230;
  array_float32_10 /* _L229/ */ _L229;
  array_float32_10 /* _L228/ */ _L228;
  array_float32_10 /* _L227/ */ _L227;
  array_float32_10 /* _L226/ */ _L226;
  kcg_int32 /* _L225/ */ _L225;
  array_float32_10 /* _L224/ */ _L224;
  array_float32_10 /* _L223/ */ _L223;
  array_int32_10 /* _L222/ */ _L222;
  array_int32_10 /* _L221/ */ _L221;
  array_float32_10_10 /* _L220/ */ _L220;
  array_float32_10 /* _L234/ */ _L234;
  array_float32_10 /* _L235/ */ _L235;
} outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager/ */
extern void NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  /* Queue/ */
  _94_array *Queue,
  /* hh_array/ */
  array_float32_10 *hh_array,
  /* mm_array/ */
  array_float32_10 *mm_array,
  /* numE/ */
  kcg_int32 numE,
  /* scrollUp/ */
  kcg_bool scrollUp,
  /* scrollDown/ */
  kcg_bool scrollDown,
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void NormalMsgManager_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void NormalMsgManager_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  kcg_int32 /* ScrollDownEnableIndex_toDisplay/ */ Context_ScrollDownEnableIndex_toDisplay;
  kcg_int32 /* ScrollUpEnableIndex_toDisplay/ */ Context_ScrollUpEnableIndex_toDisplay;
  array_char_30_5 /* ArrayPlainText/ */ Context_ArrayPlainText;
  array_int32_5 /* IndexFixedMsg/ */ Context_IndexFixedMsg;
  /* ----------------------- local memories  ------------------------- */
  kcg_int32 /* scrollLevel/ */ Context_scrollLevel;
  kcg_bool /* isMoreThanFive/ */ Context_isMoreThanFive;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages Context_ShowMsg_Plain_1;
  SV_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages Context_ScrollController_1;
} SV_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages;

extern void kcg_save_SV_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC);
extern void kcg_load_SV_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *SV);



#endif /* _NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

