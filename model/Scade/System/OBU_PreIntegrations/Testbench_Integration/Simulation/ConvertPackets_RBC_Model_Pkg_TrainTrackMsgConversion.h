/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion_H_
#define _ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion_H_

#include "kcg_types.h"
#include "ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion.h"
#include "ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion.h"
#include "ConvertP005_RBC_Model_Pkg_TrainTrackMsgConversion.h"
#include "ConvertP004_RBC_Model_Pkg_TrainTrackMsgConversion.h"
#include "ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion.h"
#include "ConvertP001_RBC_Model_Pkg_TrainTrackMsgConversion.h"
#include "ConvertP000_RBC_Model_Pkg_TrainTrackMsgConversion.h"
#include "C_compr_P003_TM_TrainToTrack.h"
#include "C_compr_P005_TM_TrainToTrack.h"
#include "C_compr_P004_TM_TrainToTrack.h"
#include "C_compr_P009_TM_TrainToTrack.h"
#include "C_compr_P011_TM_TrainToTrack.h"
#include "C_compr_P000_TM_TrainToTrack.h"
#include "C_compr_P001_TM_TrainToTrack.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  outPackets_T_Common_Types_Pkg /* oldPackets/ */ oldPackets;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ConvertP000_RBC_Model_Pkg_TrainTrackMsgConversion /* _L38=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000#1)/ */ Context_ConvertP000_1;
  outC_C_compr_P000_TM_TrainToTrack /* Det_if_P0_or_P1:then:_L3=(TM_TrainToTrack::C_compr_P000#1)/ */ Context_C_compr_P000_1;
  outC_ConvertP001_RBC_Model_Pkg_TrainTrackMsgConversion /* _L39=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP001#1)/ */ Context_ConvertP001_1;
  outC_C_compr_P001_TM_TrainToTrack /* Det_if_P0_or_P1:else:then:_L3=(TM_TrainToTrack::C_compr_P001#1)/ */ Context_C_compr_P001_1;
  outC_ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion /* _L40=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003#1)/ */ Context_ConvertP003_1;
  outC_C_compr_P003_TM_TrainToTrack /* Det_if_P003:then:_L2=(TM_TrainToTrack::C_compr_P003#2)/ */ Context_C_compr_P003_2;
  outC_ConvertP004_RBC_Model_Pkg_TrainTrackMsgConversion /* _L41=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004#1)/ */ Context_ConvertP004_1;
  outC_C_compr_P004_TM_TrainToTrack /* Det_if_P004:then:_L2=(TM_TrainToTrack::C_compr_P004#2)/ */ Context_C_compr_P004_2;
  outC_ConvertP005_RBC_Model_Pkg_TrainTrackMsgConversion /* _L42=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005#1)/ */ Context_ConvertP005_1;
  outC_C_compr_P005_TM_TrainToTrack /* Det_if_P005:then:_L2=(TM_TrainToTrack::C_compr_P005#2)/ */ Context_C_compr_P005_2;
  outC_ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion /* _L43=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009#1)/ */ Context_ConvertP009_1;
  outC_C_compr_P009_TM_TrainToTrack /* Det_if_P009:then:_L2=(TM_TrainToTrack::C_compr_P009#2)/ */ Context_C_compr_P009_2;
  outC_ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion /* _L44=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011#1)/ */ Context_ConvertP011_1;
  outC_C_compr_P011_TM_TrainToTrack /* Det_if_P011:then:_L2=(TM_TrainToTrack::C_compr_P011#4)/ */ Context_C_compr_P011_4;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Det_if_P0_or_P1:else: */ else_clock_Det_if_P0_or_P1;
  kcg_bool /* Det_if_P003: */ Det_if_P003_clock;
  kcg_bool /* Det_if_P005: */ Det_if_P005_clock;
  kcg_bool /* Det_if_P004: */ Det_if_P004_clock;
  kcg_bool /* Det_if_P009: */ Det_if_P009_clock;
  kcg_bool /* Det_if_P011: */ Det_if_P011_clock;
  kcg_bool /* Det_if_P0_or_P1: */ Det_if_P0_or_P1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* Det_if_P003:then:_L3/ */ _L3_then_Det_if_P003;
  P003_TM_TrainToTrack /* Det_if_P003:then:_L2/ */ _L2_then_Det_if_P003;
  array_int32_8 /* Det_if_P003:then:_L1/ */ _L1_then_Det_if_P003;
  P003_TM_TrainToTrack /* Det_if_P003:else:_L1/ */ _L1_else_Det_if_P003;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* Det_if_P005:then:_L3/ */ _L3_then_Det_if_P005;
  P005_TM_TrainToTrack /* Det_if_P005:then:_L2/ */ _L2_then_Det_if_P005;
  array_int32_3 /* Det_if_P005:then:_L1/ */ _L1_then_Det_if_P005;
  P005_TM_TrainToTrack /* Det_if_P005:else:_L1/ */ _L1_else_Det_if_P005;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* Det_if_P004:then:_L3/ */ _L3_then_Det_if_P004;
  P004_TM_TrainToTrack /* Det_if_P004:then:_L2/ */ _L2_then_Det_if_P004;
  array_int32_3 /* Det_if_P004:then:_L1/ */ _L1_then_Det_if_P004;
  P004_TM_TrainToTrack /* Det_if_P004:else:_L1/ */ _L1_else_Det_if_P004;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* Det_if_P009:then:_L3/ */ _L3_then_Det_if_P009;
  P009_TM_TrainToTrack /* Det_if_P009:then:_L2/ */ _L2_then_Det_if_P009;
  array_int32_3 /* Det_if_P009:then:_L1/ */ _L1_then_Det_if_P009;
  P009_TM_TrainToTrack /* Det_if_P009:else:_L1/ */ _L1_else_Det_if_P009;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* Det_if_P011:then:_L3/ */ _L3_then_Det_if_P011;
  P011_TM_TrainToTrack /* Det_if_P011:then:_L2/ */ _L2_then_Det_if_P011;
  array_int32_25 /* Det_if_P011:then:_L1/ */ _L1_then_Det_if_P011;
  P011_TM_TrainToTrack /* Det_if_P011:else:_L1/ */ _L1_else_Det_if_P011;
  P000_TM_TrainToTrack /* Det_if_P0_or_P1:then:_L3/ */ _L3_then_Det_if_P0_or_P1;
  P000_TrainTrack_int_TM_TrainToTrack /* Det_if_P0_or_P1:then:_L2/ */ _L2_then_Det_if_P0_or_P1;
  P001_TM_TrainToTrack /* Det_if_P0_or_P1:then:_L1/ */ _L1_then_Det_if_P0_or_P1;
  P001_TM_TrainToTrack /* Det_if_P0_or_P1:else:else:_L2/ */ _L2_else_else_Det_if_P0_or_P1;
  P000_TM_TrainToTrack /* Det_if_P0_or_P1:else:else:_L3/ */ _L3_else_else_Det_if_P0_or_P1;
  P000_TrainTrack_int_TM_TrainToTrack /* Det_if_P0_or_P1:else:then:_L2/ */ _L2_then_else_Det_if_P0_or_P1;
  P001_TM_TrainToTrack /* Det_if_P0_or_P1:else:then:_L3/ */ _L3_then_else_Det_if_P0_or_P1;
  P000_TM_TrainToTrack /* Det_if_P0_or_P1:else:then:_L5/ */ _L5_then_else_Det_if_P0_or_P1;
  P000_TrainTrack_int_TM_TrainToTrack /* P0_or_P1/ */ P0_or_P1;
  kcg_int32 /* nid_packet/ */ nid_packet;
  P000_TM_TrainToTrack /* P000/ */ P000;
  P001_TM_TrainToTrack /* P001/ */ P001;
  P011_TM_TrainToTrack /* P011/ */ P011;
  P009_TM_TrainToTrack /* P009/ */ P009;
  P004_TM_TrainToTrack /* P004/ */ P004;
  P005_TM_TrainToTrack /* P005/ */ P005;
  P003_TM_TrainToTrack /* P003/ */ P003;
  kcg_bool /* hasPosReport/ */ hasPosReport;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L1/ */ _L1;
  array_int32_17 /* _L4/ */ _L4;
  kcg_int32 /* _L3/ */ _L3;
  P000_TM_TrainToTrack /* _L7/ */ _L7;
  P001_TM_TrainToTrack /* _L8/ */ _L8;
  P011_TM_TrainToTrack /* _L13/ */ _L13;
  outPackets_T_Common_Types_Pkg /* _L18/ */ _L18;
  P004_TM_TrainToTrack /* _L30/ */ _L30;
  P009_TM_TrainToTrack /* _L31/ */ _L31;
  P005_TM_TrainToTrack /* _L34/ */ _L34;
  P003_TM_TrainToTrack /* _L37/ */ _L37;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L38/ */ _L38;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L39/ */ _L39;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg /* _L40/ */ _L40;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg /* _L41/ */ _L41;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg /* _L42/ */ _L42;
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg /* _L43/ */ _L43;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
} outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets/ */
extern void ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* nid_message/ */
  kcg_int32 nid_message,
  /* newPackets/ */
  M_TrainTrack_compressed_packets_T_TM_radio_messages *newPackets,
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ConvertPackets_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ConvertPackets_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_C_compr_P003_TM_TrainToTrack Context_C_compr_P003_2;
} SV_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion;

extern void kcg_save_SV_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion(
  SV_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *SV,
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
extern void kcg_load_SV_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *outC,
  SV_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *SV);



#endif /* _ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

