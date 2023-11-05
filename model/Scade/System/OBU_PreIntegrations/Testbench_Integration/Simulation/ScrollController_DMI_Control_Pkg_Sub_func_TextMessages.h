/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _ScrollController_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _ScrollController_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* scrollUpTypeIndex/ */ scrollUpTypeIndex;
  kcg_int32 /* scrollLevel/ */ scrollLevel;
  kcg_int32 /* scrollDownTypeIndex/ */ scrollDownTypeIndex;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  kcg_bool /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_int32 /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L17/ */ _L17;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L20/ */ _L20;
  kcg_int32 /* _L21/ */ _L21;
  kcg_int32 /* _L22/ */ _L22;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_int32 /* _L27/ */ _L27;
  kcg_int32 /* _L28/ */ _L28;
} outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController/ */
extern void ScrollController_DMI_Control_Pkg_Sub_func_TextMessages(
  /* scrollUp/ */
  kcg_bool scrollUp,
  /* scrollDown/ */
  kcg_bool scrollDown,
  /* isMoreThanFive/ */
  kcg_bool isMoreThanFive,
  /* numE/ */
  kcg_int32 numE,
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void ScrollController_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ScrollController_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  kcg_int32 /* scrollDownTypeIndex/ */ Context_scrollDownTypeIndex;
  kcg_int32 /* scrollLevel/ */ Context_scrollLevel;
  kcg_int32 /* scrollUpTypeIndex/ */ Context_scrollUpTypeIndex;
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages;

extern void kcg_save_SV_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC);
extern void kcg_load_SV_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *SV);



#endif /* _ScrollController_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ScrollController_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

