/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _nextGen_Msg136_radioOutput_Pkg_H_
#define _nextGen_Msg136_radioOutput_Pkg_H_

#include "kcg_types.h"
#include "nextGen_P05_radioOutput_Pkg.h"
#include "nextGen_P04_radioOutput_Pkg.h"
#include "nextGen_P01_radioOutput_Pkg.h"
#include "nextGen_P00_radioOutput_Pkg.h"
#include "nextGen_MsgHdr136_radioOutput_Pkg.h"
#include "Send_M136_TM_radio_messages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* MessageBus_out/ */ MessageBus_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M136_TM_radio_messages /* IfBlock1:then:_L4=(TM_radio_messages::Send_M136#2)/ */ Context_Send_M136_2;
  outC_nextGen_P05_radioOutput_Pkg /* IfBlock1:then:_L21=(radioOutput_Pkg::nextGen_P05#1)/ */ Context_nextGen_P05_1;
  outC_nextGen_P04_radioOutput_Pkg /* IfBlock1:then:_L18=(radioOutput_Pkg::nextGen_P04#1)/ */ Context_nextGen_P04_1;
  outC_nextGen_MsgHdr136_radioOutput_Pkg /* IfBlock1:then:_L6=(radioOutput_Pkg::nextGen_MsgHdr136#2)/ */ Context_nextGen_MsgHdr136_2;
  outC_nextGen_P01_radioOutput_Pkg /* IfBlock1:then:_L16=(radioOutput_Pkg::nextGen_P01#2)/ */ Context_nextGen_P01_2;
  outC_nextGen_P00_radioOutput_Pkg /* IfBlock1:then:_L10=(radioOutput_Pkg::nextGen_P00#1)/ */ Context_nextGen_P00_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* IfBlock1:then:_L24/ */ _L24_then_IfBlock1;
  M_VERSION /* IfBlock1:then:_L23/ */ _L23_then_IfBlock1;
  T_TRAIN /* IfBlock1:then:_L22/ */ _L22_then_IfBlock1;
  P005_TM_TrainToTrack /* IfBlock1:then:_L21/ */ _L21_then_IfBlock1;
  P044_TM_TrainToTrack /* IfBlock1:then:_L20/ */ _L20_then_IfBlock1;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg /* IfBlock1:then:_L19/ */ _L19_then_IfBlock1;
  P004_TM_TrainToTrack /* IfBlock1:then:_L18/ */ _L18_then_IfBlock1;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg /* IfBlock1:then:_L17/ */ _L17_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  P001_TM_TrainToTrack /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  P001_TM_TrainToTrack /* IfBlock1:then:_L16/ */ _L16_then_IfBlock1;
  P000_TM_TrainToTrack /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  P000_TM_TrainToTrack /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  outPackets_T_Common_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  M_136_T_TM_radio_messages /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* isPresent/ */ isPresent;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
} outC_nextGen_Msg136_radioOutput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* radioOutput_Pkg::nextGen_Msg136/ */
extern void nextGen_Msg136_radioOutput_Pkg(
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* inFromPositionReport/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromPositionReport,
  /* inVersion/ */
  M_VERSION inVersion,
  /* inT_TRAIN/ */
  T_TRAIN inT_TRAIN,
  outC_nextGen_Msg136_radioOutput_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void nextGen_Msg136_reset_radioOutput_Pkg(
  outC_nextGen_Msg136_radioOutput_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void nextGen_Msg136_init_radioOutput_Pkg(
  outC_nextGen_Msg136_radioOutput_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _nextGen_Msg136_radioOutput_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** nextGen_Msg136_radioOutput_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

