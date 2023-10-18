/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg_H_
#define _msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg_H_

#include "kcg_types.h"
#include "Read_P005_ForCalcTrainPos_TM_specific.h"
#include "NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "DECODE_NID_LRBG_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  passedBG_T_BG_Types_Pkg /* passedBG/ */ passedBG;
  kcg_bool /* BG_passed/ */ BG_passed;
  kcg_bool /* onlyBGsAnnouncedViaRadio/ */ onlyBGsAnnouncedViaRadio;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P005_ForCalcTrainPos_TM_specific /* _L295=(TM_specific::Read_P005_ForCalcTrainPos#2)/ */ Context_Read_P005_ForCalcTrainPos_2;
  outC_NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L305=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG#3)/ */ Context_NIDLRBG_2_nidC_nidBG_3;
  outC_nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L299=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG#1)/ */ Context_nidC_nidBG_2_NIDLRBG_1;
  outC_nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L325=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG#2)/ */ Context_nidC_nidBG_2_NIDLRBG_2;
  outC_DECODE_NID_LRBG_TM_conversions /* _L323=(TM_conversions::DECODE_NID_LRBG#1)/ */ Context_DECODE_NID_LRBG_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* _L12/ */ _L12;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L11/ */ _L11;
  BG_Header_T_BG_Types_Pkg /* _L10/ */ _L10;
  RadioMetadata_T_Common_Types_Pkg /* _L9/ */ _L9;
  MsgSource_T_Common_Types_Pkg /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  ReceivedMessage_T_Common_Types_Pkg /* _L13/ */ _L13;
  passedBG_T_BG_Types_Pkg /* _L80/ */ _L80;
  NID_LRBG /* _L90/ */ _L90;
  kcg_bool /* _L91/ */ _L91;
  kcg_bool /* _L93/ */ _L93;
  kcg_bool /* _L94/ */ _L94;
  kcg_bool /* _L95/ */ _L95;
  MsgSource_T_Common_Types_Pkg /* _L109/ */ _L109;
  MsgSource_T_Common_Types_Pkg /* _L108/ */ _L108;
  kcg_bool /* _L110/ */ _L110;
  kcg_bool /* _L111/ */ _L111;
  kcg_bool /* _L112/ */ _L112;
  kcg_bool /* _L113/ */ _L113;
  kcg_bool /* _L245/ */ _L245;
  kcg_bool /* _L114/ */ _L114;
  LinkedBGs_T_BG_Types_Pkg /* _L295/ */ _L295;
  NID_LRBG /* _L296/ */ _L296;
  NID_C /* _L297/ */ _L297;
  NID_BG /* _L298/ */ _L298;
  NID_LRBG /* _L299/ */ _L299;
  kcg_bool /* _L300/ */ _L300;
  NID_BG /* _L306/ */ _L306;
  NID_C /* _L305/ */ _L305;
  RBC_Id_T_Common_Types_Pkg /* _L322/ */ _L322;
  NID_BG /* _L324/ */ _L324;
  NID_C /* _L323/ */ _L323;
  NID_LRBG /* _L325/ */ _L325;
  kcg_bool /* _L326/ */ _L326;
  kcg_int64 /* _L327/ */ _L327;
  kcg_int64 /* _L328/ */ _L328;
} outC_msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG/ */
extern void msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
  /* msgFromTrack/ */
  ReceivedMessage_T_Common_Types_Pkg *msgFromTrack,
  outC_msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void msg_2_passedBG_reset_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
  outC_msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void msg_2_passedBG_init_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
  outC_msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

