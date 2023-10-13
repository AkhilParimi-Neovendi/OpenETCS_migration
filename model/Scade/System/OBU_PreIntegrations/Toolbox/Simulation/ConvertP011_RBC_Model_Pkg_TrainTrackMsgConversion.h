/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion_H_
#define _ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg /* oldP011/ */ oldP011;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P011_TM_TrainToTrack /* _L1/ */ _L1;
  kcg_bool /* _L16/ */ _L16;
  NID_PACKET /* _L15/ */ _L15;
  L_PACKET /* _L14/ */ _L14;
  NC_CDTRAIN /* _L13/ */ _L13;
  NC_TRAIN /* _L12/ */ _L12;
  L_TRAIN /* _L11/ */ _L11;
  V_MAXTRAIN /* _L10/ */ _L10;
  M_LOADINGGAUGE /* _L9/ */ _L9;
  M_AXLELOADCAT /* _L8/ */ _L8;
  M_AIRTIGHT /* _L7/ */ _L7;
  N_AXLE /* _L6/ */ _L6;
  N_ITER /* _L5/ */ _L5;
  P011_voltage_list_TM_TrainToTrack /* _L4/ */ _L4;
  N_ITER /* _L3/ */ _L3;
  P011_ntc_list_TM_TrainToTrack /* _L2/ */ _L2;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg /* _L17/ */ _L17;
  kcg_int64 /* _L18/ */ _L18;
  kcg_int64 /* _L19/ */ _L19;
  aTractionIdentity_T_Packet_TrainTypes_Pkg /* _L20/ */ _L20;
  aNID_NTC_T_Packet_TrainTypes_Pkg /* _L21/ */ _L21;
} outC_ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011/ */
extern void ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* newP011/ */
  P011_TM_TrainToTrack *newP011,
  outC_ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ConvertP011_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ConvertP011_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

