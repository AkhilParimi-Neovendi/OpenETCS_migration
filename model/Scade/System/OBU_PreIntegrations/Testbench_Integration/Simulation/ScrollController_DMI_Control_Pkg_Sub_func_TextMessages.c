/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ScrollController_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController/ */
void ScrollController_DMI_Control_Pkg_Sub_func_TextMessages(
  /* scrollUp/ */
  kcg_bool scrollUp,
  /* scrollDown/ */
  kcg_bool scrollDown,
  /* isMoreThanFive/ */
  kcg_bool isMoreThanFive,
  /* numE/ */
  kcg_int64 numE,
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* scrollLevel/ */
  static kcg_int64 scrollLevel_partial;
  /* scrollLevel/ */
  static kcg_int64 _1_scrollLevel_partial;
  /* scrollLevel/ */
  static kcg_int64 _2_scrollLevel_partial;
  /* scrollLevel/ */
  static kcg_int64 _3_scrollLevel_partial;
  /* scrollDownTypeIndex/ */
  static kcg_int64 last_scrollDownTypeIndex;
  /* scrollLevel/ */
  static kcg_int64 last_scrollLevel;
  /* scrollUpTypeIndex/ */
  static kcg_int64 last_scrollUpTypeIndex;

  last_scrollDownTypeIndex = outC->scrollDownTypeIndex;
  last_scrollLevel = outC->scrollLevel;
  last_scrollUpTypeIndex = outC->scrollUpTypeIndex;
  outC->_L28 = cDIM_MSGQueue_DMI_Control_Pkg;
  outC->_L17 = numE;
  outC->_L27 = outC->_L17 - outC->_L28;
  outC->_L25 = isMoreThanFive;
  outC->_L26 = !outC->_L25;
  outC->_L16 = kcg_lit_int64(0);
  outC->_L14 = last_scrollLevel;
  outC->_L15 = outC->_L14 <= outC->_L16;
  outC->_L24 = outC->_L26 | outC->_L15;
  outC->_L22 = kcg_lit_int64(1);
  outC->_L21 = kcg_lit_int64(0);
  /* _L20= */
  if (outC->_L24) {
    outC->_L20 = outC->_L21;
  }
  else {
    outC->_L20 = outC->_L22;
  }
  outC->_L8 = kcg_lit_int64(1);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L9 = last_scrollLevel;
  outC->_L10 = outC->_L9 >= outC->_L27;
  outC->_L5 = isMoreThanFive;
  outC->_L13 = !outC->_L5;
  outC->_L12 = outC->_L13 | outC->_L10;
  /* _L6= */
  if (outC->_L12) {
    outC->_L6 = outC->_L7;
  }
  else {
    outC->_L6 = outC->_L8;
  }
  outC->scrollDownTypeIndex = outC->_L6;
  outC->scrollUpTypeIndex = outC->_L20;
  outC->IfBlock1_clock = scrollUp & (outC->scrollUpTypeIndex == kcg_lit_int64(1));
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = kcg_lit_int64(1);
    outC->_L2_then_IfBlock1 = last_scrollLevel;
    outC->_L1_then_IfBlock1 = outC->_L2_then_IfBlock1 - outC->_L3_then_IfBlock1;
    scrollLevel_partial = outC->_L1_then_IfBlock1;
    outC->scrollLevel = scrollLevel_partial;
  }
  else {
    outC->else_clock_IfBlock1 = scrollDown & (outC->scrollDownTypeIndex ==
        kcg_lit_int64(1));
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = last_scrollLevel;
      outC->_L2_then_else_IfBlock1 = kcg_lit_int64(1);
      outC->_L1_then_else_IfBlock1 = outC->_L3_then_else_IfBlock1 +
        outC->_L2_then_else_IfBlock1;
      _3_scrollLevel_partial = outC->_L1_then_else_IfBlock1;
      _1_scrollLevel_partial = _3_scrollLevel_partial;
    }
    else {
      outC->_L1_else_else_IfBlock1 = last_scrollLevel;
      _2_scrollLevel_partial = outC->_L1_else_else_IfBlock1;
      _1_scrollLevel_partial = _2_scrollLevel_partial;
    }
    outC->scrollLevel = _1_scrollLevel_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ScrollController_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L28 = kcg_lit_int64(0);
  outC->_L27 = kcg_lit_int64(0);
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L22 = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L17 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_lit_int64(0);
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L1_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1 = kcg_lit_int64(0);
  outC->scrollUpTypeIndex = kcg_lit_int64(0);
  outC->scrollLevel = kcg_lit_int64(0);
  outC->scrollDownTypeIndex = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void ScrollController_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->scrollUpTypeIndex = kcg_lit_int64(0);
  outC->scrollLevel = kcg_lit_int64(0);
  outC->scrollDownTypeIndex = kcg_lit_int64(0);
}


void kcg_save_SV_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  SV->Context_scrollDownTypeIndex = outC->scrollDownTypeIndex;
  SV->Context_scrollLevel = outC->scrollLevel;
  SV->Context_scrollUpTypeIndex = outC->scrollUpTypeIndex;
}

void kcg_load_SV_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *SV)
{
  outC->scrollDownTypeIndex = SV->Context_scrollDownTypeIndex;
  outC->scrollLevel = SV->Context_scrollLevel;
  outC->scrollUpTypeIndex = SV->Context_scrollUpTypeIndex;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ScrollController_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

