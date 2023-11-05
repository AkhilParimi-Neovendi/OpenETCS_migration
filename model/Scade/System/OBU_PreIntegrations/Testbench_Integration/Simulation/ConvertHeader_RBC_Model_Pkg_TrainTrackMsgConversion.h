/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion_H_
#define _ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion_H_

#include "kcg_types.h"
#include "CAST_Int_to_NID_TEXTMESSAGE_TM_conversions.h"
#include "CAST_Int_to_Q_EMERGENCYSTOP_TM_conversions.h"
#include "CAST_Int_to_Q_MARQSTREASON_TM_conversions.h"
#include "CAST_Int_to_NID_ENGINE_TM_conversions.h"
#include "CAST_Int_to_T_TRAIN_TM_conversions.h"
#include "CAST_Int_to_NID_EM_TM_conversions.h"
#include "CAST_Int_to_NID_MESSAGE_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* present/ */ present;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* oldHeader/ */ oldHeader;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_NID_MESSAGE_TM_conversions /* _L16=(TM_conversions::CAST_Int_to_NID_MESSAGE#1)/ */ Context_CAST_Int_to_NID_MESSAGE_1;
  outC_CAST_Int_to_T_TRAIN_TM_conversions /* _L17=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */ Context_CAST_Int_to_T_TRAIN_1;
  outC_CAST_Int_to_NID_ENGINE_TM_conversions /* _L29=(TM_conversions::CAST_Int_to_NID_ENGINE#1)/ */ Context_CAST_Int_to_NID_ENGINE_1;
  outC_CAST_Int_to_Q_MARQSTREASON_TM_conversions /* Decode_Q_MARQSTREASON:then:_L1=(TM_conversions::CAST_Int_to_Q_MARQSTREASON#2)/ */ Context_CAST_Int_to_Q_MARQSTREASON_2;
  outC_CAST_Int_to_T_TRAIN_TM_conversions /* Decode_xT_TRAIN:then:_L1=(TM_conversions::CAST_Int_to_T_TRAIN#3)/ */ Context_CAST_Int_to_T_TRAIN_3;
  outC_CAST_Int_to_NID_EM_TM_conversions /* Decode_Emergency_Stop:then:_L2=(TM_conversions::CAST_Int_to_NID_EM#2)/ */ Context_CAST_Int_to_NID_EM_2;
  outC_CAST_Int_to_Q_EMERGENCYSTOP_TM_conversions /* Decode_Emergency_Stop:then:_L3=(TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP#2)/ */ Context_CAST_Int_to_Q_EMERGENCYSTOP_2;
  outC_CAST_Int_to_NID_TEXTMESSAGE_TM_conversions /* Decode_NID_TEXTMESSAGE:then:_L1=(TM_conversions::CAST_Int_to_NID_TEXTMESSAGE#2)/ */ Context_CAST_Int_to_NID_TEXTMESSAGE_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Decode_NID_TEXTMESSAGE: */ Decode_NID_TEXTMESSAGE_clock;
  kcg_bool /* Decode_Emergency_Stop: */ Decode_Emergency_Stop_clock;
  kcg_bool /* Decode_xT_TRAIN: */ Decode_xT_TRAIN_clock;
  kcg_bool /* Decode_Q_MARQSTREASON: */ Decode_Q_MARQSTREASON_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* Decode_NID_TEXTMESSAGE:then:_L2/ */ _L2_then_Decode_NID_TEXTMESSAGE;
  NID_TEXTMESSAGE /* Decode_NID_TEXTMESSAGE:then:_L1/ */ _L1_then_Decode_NID_TEXTMESSAGE;
  NID_TEXTMESSAGE /* Decode_NID_TEXTMESSAGE:else:_L1/ */ _L1_else_Decode_NID_TEXTMESSAGE;
  kcg_int32 /* Decode_Emergency_Stop:then:_L4/ */ _L4_then_Decode_Emergency_Stop;
  Q_EMERGENCYSTOP /* Decode_Emergency_Stop:then:_L3/ */ _L3_then_Decode_Emergency_Stop;
  NID_EM /* Decode_Emergency_Stop:then:_L2/ */ _L2_then_Decode_Emergency_Stop;
  kcg_int32 /* Decode_Emergency_Stop:then:_L1/ */ _L1_then_Decode_Emergency_Stop;
  Q_EMERGENCYSTOP /* Decode_Emergency_Stop:else:_L2/ */ _L2_else_Decode_Emergency_Stop;
  NID_EM /* Decode_Emergency_Stop:else:_L1/ */ _L1_else_Decode_Emergency_Stop;
  kcg_int32 /* Decode_xT_TRAIN:then:_L2/ */ _L2_then_Decode_xT_TRAIN;
  T_TRAIN /* Decode_xT_TRAIN:then:_L1/ */ _L1_then_Decode_xT_TRAIN;
  T_TRAIN /* Decode_xT_TRAIN:else:_L1/ */ _L1_else_Decode_xT_TRAIN;
  kcg_int32 /* Decode_Q_MARQSTREASON:then:_L2/ */ _L2_then_Decode_Q_MARQSTREASON;
  Q_MARQSTREASON /* Decode_Q_MARQSTREASON:then:_L1/ */ _L1_then_Decode_Q_MARQSTREASON;
  Q_MARQSTREASON /* Decode_Q_MARQSTREASON:else:_L1/ */ _L1_else_Decode_Q_MARQSTREASON;
  kcg_int32 /* field1/ */ field1;
  kcg_int32 /* field2/ */ field2;
  kcg_int32 /* field3/ */ field3;
  Q_MARQSTREASON /* q_marqstreason/ */ q_marqstreason;
  kcg_int32 /* nid_message/ */ nid_message;
  T_TRAIN /* xt_train/ */ xt_train;
  NID_EM /* nid_em/ */ nid_em;
  Q_EMERGENCYSTOP /* q_emergencystop/ */ q_emergencystop;
  NID_TEXTMESSAGE /* nid_textmessage/ */ nid_textmessage;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L1/ */ _L1;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L10/ */ _L10;
  NID_MESSAGE /* _L16/ */ _L16;
  T_TRAIN /* _L17/ */ _L17;
  kcg_bool /* _L28/ */ _L28;
  kcg_int32 /* _L27/ */ _L27;
  kcg_int32 /* _L26/ */ _L26;
  kcg_int32 /* _L25/ */ _L25;
  kcg_int32 /* _L24/ */ _L24;
  kcg_int32 /* _L23/ */ _L23;
  kcg_int32 /* _L22/ */ _L22;
  kcg_int32 /* _L21/ */ _L21;
  NID_ENGINE /* _L29/ */ _L29;
  Q_MARQSTREASON /* _L31/ */ _L31;
  T_TRAIN /* _L32/ */ _L32;
  NID_EM /* _L34/ */ _L34;
  Q_EMERGENCYSTOP /* _L36/ */ _L36;
  NID_TEXTMESSAGE /* _L39/ */ _L39;
  kcg_int32 /* _L40/ */ _L40;
} outC_ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader/ */
extern void ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* newHeader/ */
  M_TrainTrack_MessageHd_T_TM_radio_messages *newHeader,
  outC_ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ConvertHeader_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ConvertHeader_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

