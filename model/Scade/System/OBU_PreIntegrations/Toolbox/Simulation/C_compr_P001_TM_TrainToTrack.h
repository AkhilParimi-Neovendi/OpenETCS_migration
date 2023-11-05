/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _C_compr_P001_TM_TrainToTrack_H_
#define _C_compr_P001_TM_TrainToTrack_H_

#include "kcg_types.h"
#include "CAST_Int_to_NID_PRVLRBG_TM_conversions.h"
#include "CAST_Int_to_D_LRBG_TM_conversions.h"
#include "Filter_Variable_TM_TrainToTrack.h"
#include "Decode_NID_PACKET_TM_TrainToTrack.h"
#include "CAST_Int_to_NID_NTC_TM_conversions.h"
#include "CAST_Int_to_M_LEVEL_TM_conversions.h"
#include "CAST_Int_to_M_MODE_TM_conversions.h"
#include "CAST_Int_to_Q_DIRTRAIN_TM_conversions.h"
#include "CAST_Int_to_V_TRAIN_TM_conversions.h"
#include "CAST_Int_to_L_TRAININT_TM_conversions.h"
#include "CAST_Int_to_Q_LENGTH_TM_conversions.h"
#include "CAST_Int_to_L_DOUBTUNDER_TM_conversions.h"
#include "CAST_Int_to_L_DOUBTOVER_TM_conversions.h"
#include "CAST_Int_to_Q_DRLRBG_TM_conversions.h"
#include "CAST_Int_to_Q_DIRLRBG_TM_conversions.h"
#include "CAST_Int_to_NID_LRBG_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P001_TM_TrainToTrack /* P001_out/ */ P001_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_NID_NTC_TM_conversions /* _L85=(TM_conversions::CAST_Int_to_NID_NTC#1)/ */ Context_CAST_Int_to_NID_NTC_1;
  outC_CAST_Int_to_M_LEVEL_TM_conversions /* _L84=(TM_conversions::CAST_Int_to_M_LEVEL#1)/ */ Context_CAST_Int_to_M_LEVEL_1;
  outC_CAST_Int_to_M_MODE_TM_conversions /* _L83=(TM_conversions::CAST_Int_to_M_MODE#1)/ */ Context_CAST_Int_to_M_MODE_1;
  outC_CAST_Int_to_Q_DIRTRAIN_TM_conversions /* _L82=(TM_conversions::CAST_Int_to_Q_DIRTRAIN#1)/ */ Context_CAST_Int_to_Q_DIRTRAIN_1;
  outC_CAST_Int_to_V_TRAIN_TM_conversions /* _L81=(TM_conversions::CAST_Int_to_V_TRAIN#1)/ */ Context_CAST_Int_to_V_TRAIN_1;
  outC_CAST_Int_to_L_TRAININT_TM_conversions /* _L80=(TM_conversions::CAST_Int_to_L_TRAININT#1)/ */ Context_CAST_Int_to_L_TRAININT_1;
  outC_CAST_Int_to_Q_LENGTH_TM_conversions /* _L79=(TM_conversions::CAST_Int_to_Q_LENGTH#1)/ */ Context_CAST_Int_to_Q_LENGTH_1;
  outC_CAST_Int_to_L_DOUBTUNDER_TM_conversions /* _L78=(TM_conversions::CAST_Int_to_L_DOUBTUNDER#1)/ */ Context_CAST_Int_to_L_DOUBTUNDER_1;
  outC_CAST_Int_to_L_DOUBTOVER_TM_conversions /* _L77=(TM_conversions::CAST_Int_to_L_DOUBTOVER#1)/ */ Context_CAST_Int_to_L_DOUBTOVER_1;
  outC_CAST_Int_to_Q_DRLRBG_TM_conversions /* _L75=(TM_conversions::CAST_Int_to_Q_DRLRBG#1)/ */ Context_CAST_Int_to_Q_DRLRBG_1;
  outC_CAST_Int_to_Q_DIRLRBG_TM_conversions /* _L74=(TM_conversions::CAST_Int_to_Q_DIRLRBG#1)/ */ Context_CAST_Int_to_Q_DIRLRBG_1;
  outC_CAST_Int_to_NID_LRBG_TM_conversions /* _L72=(TM_conversions::CAST_Int_to_NID_LRBG#1)/ */ Context_CAST_Int_to_NID_LRBG_1;
  outC_Filter_Variable_TM_TrainToTrack /* _L93=(TM_TrainToTrack::Filter_Variable#4)/ */ Context_Filter_Variable_4;
  outC_Filter_Variable_TM_TrainToTrack /* _L94=(TM_TrainToTrack::Filter_Variable#5)/ */ Context_Filter_Variable_5;
  outC_Filter_Variable_TM_TrainToTrack /* _L95=(TM_TrainToTrack::Filter_Variable#6)/ */ Context_Filter_Variable_6;
  outC_Filter_Variable_TM_TrainToTrack /* _L96=(TM_TrainToTrack::Filter_Variable#7)/ */ Context_Filter_Variable_7;
  outC_Filter_Variable_TM_TrainToTrack /* _L97=(TM_TrainToTrack::Filter_Variable#8)/ */ Context_Filter_Variable_8;
  outC_Filter_Variable_TM_TrainToTrack /* _L98=(TM_TrainToTrack::Filter_Variable#9)/ */ Context_Filter_Variable_9;
  outC_Filter_Variable_TM_TrainToTrack /* _L99=(TM_TrainToTrack::Filter_Variable#10)/ */ Context_Filter_Variable_10;
  outC_Filter_Variable_TM_TrainToTrack /* _L100=(TM_TrainToTrack::Filter_Variable#11)/ */ Context_Filter_Variable_11;
  outC_Filter_Variable_TM_TrainToTrack /* _L101=(TM_TrainToTrack::Filter_Variable#12)/ */ Context_Filter_Variable_12;
  outC_Filter_Variable_TM_TrainToTrack /* _L102=(TM_TrainToTrack::Filter_Variable#13)/ */ Context_Filter_Variable_13;
  outC_Filter_Variable_TM_TrainToTrack /* _L103=(TM_TrainToTrack::Filter_Variable#14)/ */ Context_Filter_Variable_14;
  outC_Filter_Variable_TM_TrainToTrack /* _L104=(TM_TrainToTrack::Filter_Variable#15)/ */ Context_Filter_Variable_15;
  outC_CAST_Int_to_D_LRBG_TM_conversions /* _L107=(TM_conversions::CAST_Int_to_D_LRBG#1)/ */ Context_CAST_Int_to_D_LRBG_1;
  outC_Filter_Variable_TM_TrainToTrack /* _L106=(TM_TrainToTrack::Filter_Variable#16)/ */ Context_Filter_Variable_16;
  outC_CAST_Int_to_NID_PRVLRBG_TM_conversions /* _L110=(TM_conversions::CAST_Int_to_NID_PRVLRBG#1)/ */ Context_CAST_Int_to_NID_PRVLRBG_1;
  outC_Filter_Variable_TM_TrainToTrack /* _L109=(TM_TrainToTrack::Filter_Variable#17)/ */ Context_Filter_Variable_17;
  outC_Filter_Variable_TM_TrainToTrack /* _L92=(TM_TrainToTrack::Filter_Variable#3)/ */ Context_Filter_Variable_3;
  outC_Filter_Variable_TM_TrainToTrack /* _L91=(TM_TrainToTrack::Filter_Variable#2)/ */ Context_Filter_Variable_2;
  outC_Filter_Variable_TM_TrainToTrack /* _L90=(TM_TrainToTrack::Filter_Variable#1)/ */ Context_Filter_Variable_1;
  outC_Decode_NID_PACKET_TM_TrainToTrack /* _L88=(TM_TrainToTrack::Decode_NID_PACKET#1)/ */ Context_Decode_NID_PACKET_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* @3/IfBlock1: */ IfBlock1_clock_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @3/IfBlock1:else:else: */ else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1;
  kcg_bool /* @3/IfBlock1:else: */ _1_else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_PACKET /* @1/nid_packet/ */ nid_packet_CAST_Int_to_NID_PACKET_1;
  kcg_int32 /* @1/nid_packet_int/ */ nid_packet_int_CAST_Int_to_NID_PACKET_1;
  kcg_bool /* @1/_L2/ */ _L2_CAST_Int_to_NID_PACKET_1;
  kcg_int32 /* @1/_L3/ */ _L3_CAST_Int_to_NID_PACKET_1;
  kcg_bool /* @1/_L4/ */ _L4_CAST_Int_to_NID_PACKET_1;
  kcg_int32 /* @1/_L5/ */ _L5_CAST_Int_to_NID_PACKET_1;
  kcg_int32 /* @1/_L1/ */ _L1_CAST_Int_to_NID_PACKET_1;
  L_PACKET /* @2/l_packet/ */ l_packet_CAST_Int_to_L_PACKET_1;
  kcg_int32 /* @2/l_packet_int/ */ l_packet_int_CAST_Int_to_L_PACKET_1;
  kcg_int32 /* @2/_L13/ */ _L13_CAST_Int_to_L_PACKET_1;
  kcg_int32 /* @2/_L12/ */ _L12_CAST_Int_to_L_PACKET_1;
  kcg_bool /* @2/_L8/ */ _L8_CAST_Int_to_L_PACKET_1;
  kcg_bool /* @2/_L9/ */ _L9_CAST_Int_to_L_PACKET_1;
  kcg_int32 /* @2/_L1/ */ _L1_CAST_Int_to_L_PACKET_1;
  Q_SCALE /* @3/q_scale/ */ q_scale_CAST_Int_to_Q_SCALE_1;
  kcg_int32 /* @3/q_scale_int/ */ q_scale_int_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @3/_L4/ */ _L4_CAST_Int_to_Q_SCALE_1;
  kcg_int32 /* @3/_L2/ */ _L2_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @3/error/ */ error_CAST_Int_to_Q_SCALE_1;
  kcg_int32 /* @3/q_scale_in/ */ q_scale_in_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @3/IfBlock1:else:then:_L3/ */ _L3_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
  Q_SCALE /* @3/IfBlock1:else:then:_L1/ */ _L1_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
  kcg_bool /* @3/IfBlock1:else:else:else:_L2/ */ _L2_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
  Q_SCALE /* @3/IfBlock1:else:else:else:_L1/ */ _L1_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
  Q_SCALE /* @3/IfBlock1:else:else:then:_L1/ */ _2__L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
  kcg_bool /* @3/IfBlock1:else:else:then:_L4/ */ _L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
  Q_SCALE /* @3/IfBlock1:then:_L2/ */ _L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
  kcg_bool /* @3/IfBlock1:then:_L3/ */ _3__L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
  P001_TrainTrack_int_TM_TrainToTrack /* _L1/ */ _L1;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L14/ */ _L14;
  kcg_int32 /* _L13/ */ _L13;
  kcg_int32 /* _L12/ */ _L12;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L2/ */ _L2;
  NID_PACKET /* _L69/ */ _L69;
  L_PACKET /* _L70/ */ _L70;
  Q_SCALE /* _L71/ */ _L71;
  NID_LRBG /* _L72/ */ _L72;
  Q_DIRLRBG /* _L74/ */ _L74;
  Q_DLRBG /* _L75/ */ _L75;
  L_DOUBTOVER /* _L77/ */ _L77;
  L_DOUBTUNDER /* _L78/ */ _L78;
  Q_LENGTH /* _L79/ */ _L79;
  L_TRAININT /* _L80/ */ _L80;
  V_TRAIN /* _L81/ */ _L81;
  Q_DIRTRAIN /* _L82/ */ _L82;
  M_MODE /* _L83/ */ _L83;
  M_LEVEL /* _L84/ */ _L84;
  NID_NTC /* _L85/ */ _L85;
  P001_TM_TrainToTrack /* _L86/ */ _L86;
  kcg_bool /* _L88/ */ _L88;
  kcg_int32 /* _L90/ */ _L90;
  kcg_int32 /* _L91/ */ _L91;
  kcg_int32 /* _L93/ */ _L93;
  kcg_int32 /* _L92/ */ _L92;
  kcg_int32 /* _L95/ */ _L95;
  kcg_int32 /* _L94/ */ _L94;
  kcg_int32 /* _L97/ */ _L97;
  kcg_int32 /* _L96/ */ _L96;
  kcg_int32 /* _L99/ */ _L99;
  kcg_int32 /* _L98/ */ _L98;
  kcg_int32 /* _L101/ */ _L101;
  kcg_int32 /* _L100/ */ _L100;
  kcg_int32 /* _L103/ */ _L103;
  kcg_int32 /* _L102/ */ _L102;
  kcg_int32 /* _L104/ */ _L104;
  kcg_int32 /* _L105/ */ _L105;
  kcg_int32 /* _L106/ */ _L106;
  D_LRBG /* _L107/ */ _L107;
  kcg_int32 /* _L108/ */ _L108;
  kcg_int32 /* _L109/ */ _L109;
  NID_PRVLRBG /* _L110/ */ _L110;
} outC_C_compr_P001_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::C_compr_P001/ */
extern void C_compr_P001_TM_TrainToTrack(
  /* P001_in/ */
  P001_TrainTrack_int_TM_TrainToTrack *P001_in,
  outC_C_compr_P001_TM_TrainToTrack *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_compr_P001_reset_TM_TrainToTrack(
  outC_C_compr_P001_TM_TrainToTrack *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_compr_P001_init_TM_TrainToTrack(
  outC_C_compr_P001_TM_TrainToTrack *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TM_TrainToTrack::C_compr_P001/
  @1: (TM_conversions::CAST_Int_to_NID_PACKET#1)
  @2: (TM_conversions::CAST_Int_to_L_PACKET#1)
  @3: (TM_conversions::CAST_Int_to_Q_SCALE#1)
*/

#endif /* _C_compr_P001_TM_TrainToTrack_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_compr_P001_TM_TrainToTrack.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

