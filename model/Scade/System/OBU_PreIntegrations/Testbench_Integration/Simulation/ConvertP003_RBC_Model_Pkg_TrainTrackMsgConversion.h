/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion_H_
#define _ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg /* oldP003/ */ oldP003;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P003_TM_TrainToTrack /* _L1/ */ _L1;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg /* _L39/ */ _L39;
  aNID_RADIO_T_Packet_TrainTypes_Pkg /* _L41/ */ _L41;
  kcg_bool /* _L46/ */ _L46;
  NID_PACKET /* _L45/ */ _L45;
  L_PACKET /* _L44/ */ _L44;
  N_ITER /* _L43/ */ _L43;
  P003_nid_radio_list_t_TM_TrainToTrack /* _L42/ */ _L42;
} outC_ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003/ */
extern void ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* newP003/ */
  P003_TM_TrainToTrack *newP003,
  outC_ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ConvertP003_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ConvertP003_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

