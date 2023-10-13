/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* txt/ */ txt;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  _112_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  _112_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* SM1:insert1:_L1/ */ _L1_insert1_SM1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* SM1:State2:_L1/ */ _L1_State2_SM1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* SM1:insert2:_L1/ */ _L1_insert2_SM1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* SM1:State4:_L1/ */ _L1_State4_SM1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* SM1:insert3:_L1/ */ _L1_insert3_SM1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* SM1:State6:_L1/ */ _L1_State6_SM1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* SM1:insert4:_L1/ */ _L1_insert4_SM1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* SM1:State8:_L1/ */ _L1_State8_SM1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* SM1:State0:_L1/ */ _L1_State0_SM1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* SM1:insertAck2:_L1/ */ _L1_insertAck2_SM1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* SM1:insertAck1:_L1/ */ _L1_insertAck1_SM1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* SM1:State5:_L1/ */ _L1_State5_SM1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* SM1:State3:_L1/ */ _L1_State3_SM1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* SM1:insert5:_L1/ */ _L1_insert5_SM1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* SM1:State7:_L1/ */ _L1_State7_SM1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* SM1:insert6:_L1/ */ _L1_insert6_SM1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* SM1:State9:_L1/ */ _L1_State9_SM1;
  _112_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _113_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _113_SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* clicked/ */ clicked;
  kcg_bool /* _L1/ */ _L1;
} outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator/ */
extern void TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* MousePressed/ */
  kcg_bool MousePressed,
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void TxtMsgSimulator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void TxtMsgSimulator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* SM1: */ Context_SM1_reset_nxt;
  kcg_bool /* SM1: */ Context_SM1_reset_act;
  _112_SSM_ST_SM1 /* SM1: */ Context_SM1_state_nxt;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages;

extern void kcg_save_SV_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC);
extern void kcg_load_SV_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *SV);



#endif /* _TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

