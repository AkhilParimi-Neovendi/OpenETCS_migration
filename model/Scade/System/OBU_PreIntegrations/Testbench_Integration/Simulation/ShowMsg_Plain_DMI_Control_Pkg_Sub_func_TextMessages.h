/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "CountMSG_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"
#include "MergeMessagesToPlain_iteration_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_char_30_5 /* PlainText/ */ PlainText;
  kcg_bool /* isMoreThanFive/ */ isMoreThanFive;
  array_int32_10 /* MsgNumArray/ */ MsgNumArray;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MergeMessagesToPlain_iteration_DMI_Control_Pkg_Sub_func_TextMessages /* _L19=(DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration#1)/ */ Context_MergeMessagesToPlain_iteration_1[5];
  outC_CountMSG_DMI_Control_Pkg_Sub_func_TextMessages /* _L167=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#1)/ */ Context_CountMSG_1;
  outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages /* _L166=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#1)/ */ Context_SliceMsg_1;
  outC_CountMSG_DMI_Control_Pkg_Sub_func_TextMessages /* _L178=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#2)/ */ Context_CountMSG_2;
  outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages /* _L169=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#2)/ */ Context_SliceMsg_2;
  outC_CountMSG_DMI_Control_Pkg_Sub_func_TextMessages /* _L179=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#3)/ */ Context_CountMSG_3;
  outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages /* _L170=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#3)/ */ Context_SliceMsg_3;
  outC_CountMSG_DMI_Control_Pkg_Sub_func_TextMessages /* _L180=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#4)/ */ Context_CountMSG_4;
  outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages /* _L171=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#4)/ */ Context_SliceMsg_4;
  outC_CountMSG_DMI_Control_Pkg_Sub_func_TextMessages /* _L181=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#5)/ */ Context_CountMSG_5;
  outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages /* _L172=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#5)/ */ Context_SliceMsg_5;
  outC_CountMSG_DMI_Control_Pkg_Sub_func_TextMessages /* _L182=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#6)/ */ Context_CountMSG_6;
  outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages /* _L173=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#6)/ */ Context_SliceMsg_6;
  outC_CountMSG_DMI_Control_Pkg_Sub_func_TextMessages /* _L183=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#7)/ */ Context_CountMSG_7;
  outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages /* _L174=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#7)/ */ Context_SliceMsg_7;
  outC_CountMSG_DMI_Control_Pkg_Sub_func_TextMessages /* _L184=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#8)/ */ Context_CountMSG_8;
  outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages /* _L175=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#8)/ */ Context_SliceMsg_8;
  outC_CountMSG_DMI_Control_Pkg_Sub_func_TextMessages /* _L185=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#9)/ */ Context_CountMSG_9;
  outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages /* _L176=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#9)/ */ Context_SliceMsg_9;
  outC_CountMSG_DMI_Control_Pkg_Sub_func_TextMessages /* _L186=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#10)/ */ Context_CountMSG_10;
  outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages /* _L177=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#10)/ */ Context_SliceMsg_10;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MsgStructure /* Msg1/ */ Msg1;
  MsgStructure /* Msg2/ */ Msg2;
  MsgStructure /* Msg3/ */ Msg3;
  MsgStructure /* Msg4/ */ Msg4;
  MsgStructure /* Msg5/ */ Msg5;
  kcg_int32 /* LocalNumMsg/ */ LocalNumMsg;
  MsgStructure /* Msg6/ */ Msg6;
  MsgStructure /* Msg7/ */ Msg7;
  MsgStructure /* Msg8/ */ Msg8;
  MsgStructure /* Msg9/ */ Msg9;
  MsgStructure /* Msg10/ */ Msg10;
  kcg_int32 /* num1/ */ num1;
  kcg_int32 /* num2/ */ num2;
  kcg_int32 /* num3/ */ num3;
  kcg_int32 /* num4/ */ num4;
  kcg_int32 /* num5/ */ num5;
  kcg_int32 /* num6/ */ num6;
  kcg_int32 /* num7/ */ num7;
  kcg_int32 /* num8/ */ num8;
  kcg_int32 /* num9/ */ num9;
  kcg_int32 /* num10/ */ num10;
  array_char_30_5 /* _L19/ */ _L19;
  MsgStructure /* _L74/ */ _L74;
  MsgStructure /* _L91/ */ _L91;
  _94_array /* _L88/ */ _L88;
  MsgStructure /* _L97/ */ _L97;
  MsgStructure /* _L104/ */ _L104;
  MsgStructure /* _L114/ */ _L114;
  MsgStructure /* _L117/ */ _L117;
  MsgStructure /* _L118/ */ _L118;
  kcg_int32 /* _L147/ */ _L147;
  kcg_bool /* _L148/ */ _L148;
  kcg_int32 /* _L149/ */ _L149;
  MsgStructure /* _L150/ */ _L150;
  MsgStructure /* _L151/ */ _L151;
  MsgStructure /* _L152/ */ _L152;
  MsgStructure /* _L153/ */ _L153;
  MsgStructure /* _L154/ */ _L154;
  MsgStructure /* _L155/ */ _L155;
  MsgStructure /* _L156/ */ _L156;
  MsgStructure /* _L157/ */ _L157;
  MsgStructure /* _L161/ */ _L161;
  MsgStructure /* _L162/ */ _L162;
  MsgStructure /* _L163/ */ _L163;
  MsgStructure /* _L164/ */ _L164;
  MsgStructure /* _L165/ */ _L165;
  array_char_30_5 /* _L166/ */ _L166;
  kcg_int32 /* _L167/ */ _L167;
  array_char_30_5_5 /* _L168/ */ _L168;
  array_char_30_5 /* _L169/ */ _L169;
  array_char_30_5 /* _L170/ */ _L170;
  array_char_30_5 /* _L171/ */ _L171;
  array_char_30_5 /* _L172/ */ _L172;
  array_char_30_5 /* _L173/ */ _L173;
  array_char_30_5 /* _L174/ */ _L174;
  array_char_30_5 /* _L175/ */ _L175;
  array_char_30_5 /* _L176/ */ _L176;
  array_char_30_5 /* _L177/ */ _L177;
  kcg_int32 /* _L178/ */ _L178;
  kcg_int32 /* _L179/ */ _L179;
  kcg_int32 /* _L180/ */ _L180;
  kcg_int32 /* _L181/ */ _L181;
  kcg_int32 /* _L182/ */ _L182;
  kcg_int32 /* _L183/ */ _L183;
  kcg_int32 /* _L184/ */ _L184;
  kcg_int32 /* _L185/ */ _L185;
  kcg_int32 /* _L186/ */ _L186;
  array_char_30_5_5 /* _L187/ */ _L187;
  array_char_30_5_5 /* _L188/ */ _L188;
  array_char_30_5_5 /* _L189/ */ _L189;
  array_char_30_5_5 /* _L190/ */ _L190;
  array_char_30_5_5 /* _L191/ */ _L191;
  array_char_30_5_5 /* _L192/ */ _L192;
  array_char_30_5_5 /* _L193/ */ _L193;
  array_char_30_5_5 /* _L194/ */ _L194;
  array_char_30_5_5 /* _L195/ */ _L195;
  array_int32_5 /* _L196/ */ _L196;
  array_int32_5 /* _L197/ */ _L197;
  array_int32_5 /* _L198/ */ _L198;
  array_int32_5 /* _L199/ */ _L199;
  array_int32_5 /* _L203/ */ _L203;
  array_int32_5 /* _L204/ */ _L204;
  array_int32_5 /* _L205/ */ _L205;
  array_int32_5 /* _L206/ */ _L206;
  array_int32_5 /* _L207/ */ _L207;
  kcg_int32 /* _L209/ */ _L209;
  kcg_int32 /* _L210/ */ _L210;
  array_int32_5 /* _L211/ */ _L211;
  kcg_int32 /* _L215/ */ _L215;
  kcg_int32 /* _L216/ */ _L216;
  kcg_int32 /* _L217/ */ _L217;
  kcg_int32 /* _L218/ */ _L218;
  kcg_int32 /* _L219/ */ _L219;
  kcg_int32 /* _L220/ */ _L220;
  kcg_int32 /* _L221/ */ _L221;
  kcg_int32 /* _L222/ */ _L222;
  kcg_int32 /* _L223/ */ _L223;
  kcg_int32 /* _L224/ */ _L224;
  array_int32_10 /* _L226/ */ _L226;
  kcg_int32 /* _L231/ */ _L231;
  kcg_int32 /* _L232/ */ _L232;
  kcg_int32 /* _L233/ */ _L233;
  kcg_int32 /* _L234/ */ _L234;
  kcg_int32 /* _L235/ */ _L235;
  kcg_int32 /* _L236/ */ _L236;
  kcg_int32 /* _L237/ */ _L237;
  kcg_int32 /* _L238/ */ _L238;
  kcg_int32 /* _L239/ */ _L239;
} outC_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain/ */
extern void ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages(
  /* Msgarray/ */
  _94_array *Msgarray,
  /* scrollLevel/ */
  kcg_int32 scrollLevel,
  outC_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void ShowMsg_Plain_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ShowMsg_Plain_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  kcg_bool /* isMoreThanFive/ */ Context_isMoreThanFive;
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages;

extern void kcg_save_SV_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages *outC);
extern void kcg_load_SV_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages *SV);



#endif /* _ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

