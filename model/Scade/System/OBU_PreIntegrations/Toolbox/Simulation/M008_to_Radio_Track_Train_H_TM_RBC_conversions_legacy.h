/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy_H_
#define _M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* Radio_Track_Train_Hd_out/ */ Radio_Track_Train_Hd_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_008_T_TM_radio_messages /* _L1/ */ _L1;
  NID_LRBG /* _L7/ */ _L7;
  M_ACK /* _L6/ */ _L6;
  T_TRAIN /* _L5/ */ _L5;
  L_MESSAGE /* _L4/ */ _L4;
  NID_MESSAGE /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L14/ */ _L14;
  NID_EM /* _L16/ */ _L16;
  Q_SCALE /* _L17/ */ _L17;
  D_SR /* _L18/ */ _L18;
  T_TRAIN /* _L19/ */ _L19;
  D_REF /* _L20/ */ _L20;
  Q_DIR /* _L21/ */ _L21;
  D_EMERGENCYSTOP /* _L22/ */ _L22;
  M_VERSION /* _L23/ */ _L23;
  T_TRAIN /* _L24/ */ _L24;
  kcg_int32 /* _L26/ */ _L26;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L25/ */ _L25;
} outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy;

/* ===========  node initialization and cycle functions  =========== */
/* TM_RBC_conversions_legacy::M008_to_Radio_Track_Train_H/ */
extern void M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
  /* M008_in/ */
  M_008_T_TM_radio_messages *M008_in,
  outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void M008_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
  outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void M008_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
  outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

