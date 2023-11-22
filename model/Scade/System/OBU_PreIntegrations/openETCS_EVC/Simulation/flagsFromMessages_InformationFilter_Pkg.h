/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _flagsFromMessages_InformationFilter_Pkg_H_
#define _flagsFromMessages_InformationFilter_Pkg_H_

#include "kcg_types.h"
#include "Read_P027V1_Legacy_for_ML_TM_specific.h"
#include "Read_P021_TM.h"
#include "Read_P015_TM.h"
#include "Read_P012_TM.h"
#include "Read_P041_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  filterRelatedEvents_T_Common_Types_Pkg /* outFilterEvents/ */ outFilterEvents;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* IF_toML/ */ IF_toML;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* L2L3_transitionPending/ */ L2L3_transitionPending;
  kcg_bool /* L1_transitionPending/ */ L1_transitionPending;
  kcg_bool /* p12valid/ */ p12valid;
  kcg_bool /* p15valid/ */ p15valid;
  kcg_bool /* p21valid/ */ p21valid;
  kcg_bool /* p27valid/ */ p27valid;
  kcg_bool /* NTC_transitionPending/ */ NTC_transitionPending;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P027V1_Legacy_for_ML_TM_specific /* _L185=(TM_specific::Read_P027V1_Legacy_for_ML#1)/ */ Context_Read_P027V1_Legacy_for_ML_1;
  outC_Read_P021_TM /* _L183=(TM::Read_P021#1)/ */ Context_Read_P021_1;
  outC_Read_P015_TM /* _L181=(TM::Read_P015#1)/ */ Context_Read_P015_1;
  outC_Read_P041_TM /* _L158=(TM::Read_P041#1)/ */ Context_Read_P041_1;
  outC_Read_P012_TM /* _L177=(TM::Read_P012#1)/ */ Context_Read_P012_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L30/ */ _L30_then_IfBlock1;
  M_LEVELTR /* IfBlock1:then:_L31/ */ _L31_then_IfBlock1;
  P041_OBU_T_TM /* IfBlock1:then:_L28/ */ _L28_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  M_LEVELTR /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  P041_section_enum_T_TM /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  P041_section_enum_T_TM /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  M_LEVELTR /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  M_LEVELTR /* IfBlock1:then:_L19/ */ _L19_then_IfBlock1;
  M_LEVELTR /* IfBlock1:then:_L20/ */ _L20_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L21/ */ _L21_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L23/ */ _L23_then_IfBlock1;
  P041_OBU_sectionlist_enum_T_TM /* IfBlock1:then:_L25/ */ _L25_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L10/ */ _L10_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L11/ */ _L11_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L12/ */ _L12_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  kcg_bool /* p41valid/ */ p41valid;
  P041_OBU_T_TM /* p41/ */ p41;
  kcg_bool /* isBalise/ */ isBalise;
  kcg_bool /* isMsg3/ */ isMsg3;
  ReceivedMessage_T_Common_Types_Pkg /* _L155/ */ _L155;
  CompressedPackets_T_Common_Types_Pkg /* _L154/ */ _L154;
  P041_OBU_T_TM /* _L159/ */ _L159;
  kcg_bool /* _L158/ */ _L158;
  filterRelatedEvents_T_Common_Types_Pkg /* _L170/ */ _L170;
  filterRelatedEvents_T_Common_Types_Pkg /* _L168/ */ _L168;
  filterRelatedEvents_T_Common_Types_Pkg /* _L167/ */ _L167;
  filterRelatedEvents_T_Common_Types_Pkg /* _L166/ */ _L166;
  kcg_bool /* _L171/ */ _L171;
  kcg_bool /* _L172/ */ _L172;
  kcg_bool /* _L173/ */ _L173;
  kcg_bool /* _L177/ */ _L177;
  P012_OBU_T_TM /* _L178/ */ _L178;
  kcg_bool /* _L181/ */ _L181;
  P015_OBU_T_TM /* _L182/ */ _L182;
  kcg_bool /* _L183/ */ _L183;
  P021_OBU_T_TM /* _L184/ */ _L184;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg /* _L185/ */ _L185;
  kcg_bool /* _L191/ */ _L191;
  kcg_bool /* _L192/ */ _L192;
  kcg_bool /* _L193/ */ _L193;
  kcg_bool /* _L201/ */ _L201;
  kcg_bool /* _L200/ */ _L200;
  kcg_bool /* _L203/ */ _L203;
  kcg_bool /* _L202/ */ _L202;
  kcg_bool /* _L205/ */ _L205;
  kcg_bool /* _L204/ */ _L204;
  kcg_bool /* _L206/ */ _L206;
  kcg_bool /* _L207/ */ _L207;
  kcg_bool /* _L208/ */ _L208;
  kcg_bool /* _L211/ */ _L211;
  kcg_bool /* _L210/ */ _L210;
  kcg_bool /* _L209/ */ _L209;
  kcg_bool /* _L214/ */ _L214;
  kcg_bool /* _L213/ */ _L213;
  kcg_bool /* _L212/ */ _L212;
  kcg_bool /* _L217/ */ _L217;
  kcg_bool /* _L216/ */ _L216;
  kcg_bool /* _L215/ */ _L215;
  kcg_bool /* _L218/ */ _L218;
  kcg_bool /* _L219/ */ _L219;
  kcg_bool /* _L220/ */ _L220;
  kcg_bool /* _L221/ */ _L221;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* _L222/ */ _L222;
  kcg_bool /* _L223/ */ _L223;
  kcg_bool /* _L224/ */ _L224;
  MsgSource_T_Common_Types_Pkg /* _L241/ */ _L241;
  kcg_bool /* _L242/ */ _L242;
  MsgSource_T_Common_Types_Pkg /* _L243/ */ _L243;
  MsgSource_T_Common_Types_Pkg /* _L244/ */ _L244;
  kcg_bool /* _L245/ */ _L245;
  MsgSource_T_Common_Types_Pkg /* _L246/ */ _L246;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L247/ */ _L247;
  NID_MESSAGE /* _L248/ */ _L248;
  NID_MESSAGE /* _L249/ */ _L249;
  kcg_bool /* _L250/ */ _L250;
  kcg_bool /* _L251/ */ _L251;
  kcg_bool /* _L252/ */ _L252;
  kcg_bool /* _L253/ */ _L253;
} outC_flagsFromMessages_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::flagsFromMessages/ */
extern void flagsFromMessages_InformationFilter_Pkg(
  /* doReset/ */
  kcg_bool doReset,
  /* actualMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* inFilterEvents/ */
  filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  outC_flagsFromMessages_InformationFilter_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void flagsFromMessages_reset_InformationFilter_Pkg(
  outC_flagsFromMessages_InformationFilter_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void flagsFromMessages_init_InformationFilter_Pkg(
  outC_flagsFromMessages_InformationFilter_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _flagsFromMessages_InformationFilter_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** flagsFromMessages_InformationFilter_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

