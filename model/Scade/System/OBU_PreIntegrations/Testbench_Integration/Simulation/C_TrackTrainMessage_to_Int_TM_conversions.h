/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _C_TrackTrainMessage_to_Int_TM_conversions_H_
#define _C_TrackTrainMessage_to_Int_TM_conversions_H_

#include "kcg_types.h"
#include "CAST_D_EMERGENCYSTOP_to_int_TM_conversions.h"
#include "CAST_D_REF_to_int_TM_conversions.h"
#include "CAST_D_SR_to_int_TM_conversions.h"
#include "CAST_M_ACK_to_int_TM_conversions.h"
#include "CAST_Q_DIR_to_int_TM_conversions.h"
#include "CAST_NID_EM_to_int_TM_conversions.h"
#include "CAST_NID_MESSAGE_to_int_TM_conversions.h"
#include "CAST_T_TRAIN_to_int_TM_conversions.h"
#include "CAST_NID_LRBG_to_int_TM_conversions.h"
#include "CAST_Q_SCALE_to_int_TM_conversions.h"
#include "CAST_M_VERSION_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrackTrain_Header_T_TM /* Message_Out/ */ Message_Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_NID_MESSAGE_to_int_TM_conversions /* _L33=(TM_conversions::CAST_NID_MESSAGE_to_int#1)/ */ Context_CAST_NID_MESSAGE_to_int_1;
  outC_CAST_T_TRAIN_to_int_TM_conversions /* _L34=(TM_conversions::CAST_T_TRAIN_to_int#1)/ */ Context_CAST_T_TRAIN_to_int_1;
  outC_CAST_M_ACK_to_int_TM_conversions /* _L35=(TM_conversions::CAST_M_ACK_to_int#1)/ */ Context_CAST_M_ACK_to_int_1;
  outC_CAST_NID_LRBG_to_int_TM_conversions /* _L36=(TM_conversions::CAST_NID_LRBG_to_int#1)/ */ Context_CAST_NID_LRBG_to_int_1;
  outC_CAST_T_TRAIN_to_int_TM_conversions /* _L37=(TM_conversions::CAST_T_TRAIN_to_int#2)/ */ Context_CAST_T_TRAIN_to_int_2;
  outC_CAST_NID_EM_to_int_TM_conversions /* _L38=(TM_conversions::CAST_NID_EM_to_int#1)/ */ Context_CAST_NID_EM_to_int_1;
  outC_CAST_Q_SCALE_to_int_TM_conversions /* _L39=(TM_conversions::CAST_Q_SCALE_to_int#1)/ */ Context_CAST_Q_SCALE_to_int_1;
  outC_CAST_D_SR_to_int_TM_conversions /* _L40=(TM_conversions::CAST_D_SR_to_int#1)/ */ Context_CAST_D_SR_to_int_1;
  outC_CAST_T_TRAIN_to_int_TM_conversions /* _L41=(TM_conversions::CAST_T_TRAIN_to_int#3)/ */ Context_CAST_T_TRAIN_to_int_3;
  outC_CAST_D_REF_to_int_TM_conversions /* _L42=(TM_conversions::CAST_D_REF_to_int#1)/ */ Context_CAST_D_REF_to_int_1;
  outC_CAST_Q_DIR_to_int_TM_conversions /* _L43=(TM_conversions::CAST_Q_DIR_to_int#1)/ */ Context_CAST_Q_DIR_to_int_1;
  outC_CAST_M_VERSION_to_int_TM_conversions /* _L44=(TM_conversions::CAST_M_VERSION_to_int#1)/ */ Context_CAST_M_VERSION_to_int_1;
  outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions /* _L45=(TM_conversions::CAST_D_EMERGENCYSTOP_to_int#1)/ */ Context_CAST_D_EMERGENCYSTOP_to_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Radio_TrackTrain_Header_T_TM_transitional /* _L1/ */ _L1;
  M_VERSION /* _L16/ */ _L16;
  D_EMERGENCYSTOP /* _L15/ */ _L15;
  Q_DIR /* _L14/ */ _L14;
  D_REF /* _L13/ */ _L13;
  T_TRAIN /* _L12/ */ _L12;
  D_SR /* _L11/ */ _L11;
  Q_SCALE /* _L10/ */ _L10;
  NID_EM /* _L9/ */ _L9;
  T_TRAIN /* _L8/ */ _L8;
  NID_LRBG /* _L7/ */ _L7;
  M_ACK /* _L6/ */ _L6;
  T_TRAIN /* _L5/ */ _L5;
  NID_MESSAGE /* _L4/ */ _L4;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  kcg_int32 /* _L2/ */ _L2;
  Radio_TrackTrain_Header_T_TM /* _L32/ */ _L32;
  kcg_int32 /* _L33/ */ _L33;
  kcg_int32 /* _L34/ */ _L34;
  kcg_int32 /* _L35/ */ _L35;
  kcg_int32 /* _L36/ */ _L36;
  kcg_int32 /* _L37/ */ _L37;
  kcg_int32 /* _L38/ */ _L38;
  kcg_int32 /* _L39/ */ _L39;
  kcg_int32 /* _L40/ */ _L40;
  kcg_int32 /* _L41/ */ _L41;
  kcg_int32 /* _L42/ */ _L42;
  kcg_int32 /* _L43/ */ _L43;
  kcg_int32 /* _L44/ */ _L44;
  kcg_int32 /* _L45/ */ _L45;
} outC_C_TrackTrainMessage_to_Int_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_TrackTrainMessage_to_Int/ */
extern void C_TrackTrainMessage_to_Int_TM_conversions(
  /* Message_In/ */
  Radio_TrackTrain_Header_T_TM_transitional *Message_In,
  outC_C_TrackTrainMessage_to_Int_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_TrackTrainMessage_to_Int_reset_TM_conversions(
  outC_C_TrackTrainMessage_to_Int_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_TrackTrainMessage_to_Int_init_TM_conversions(
  outC_C_TrackTrainMessage_to_Int_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_TrackTrainMessage_to_Int_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_TrackTrainMessage_to_Int_TM_conversions.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

