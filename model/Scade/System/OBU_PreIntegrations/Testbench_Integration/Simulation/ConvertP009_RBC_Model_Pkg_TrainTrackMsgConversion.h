/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion_H_
#define _ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg /* oldP009/ */ oldP009;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P009_TM_TrainToTrack /* _L1/ */ _L1;
  kcg_bool /* _L5/ */ _L5;
  NID_PACKET /* _L4/ */ _L4;
  L_PACKET /* _L3/ */ _L3;
  NID_LTRBG /* _L2/ */ _L2;
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg /* _L6/ */ _L6;
} outC_ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009/ */
extern void ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* newP009/ */
  P009_TM_TrainToTrack *newP009,
  outC_ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ConvertP009_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ConvertP009_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

