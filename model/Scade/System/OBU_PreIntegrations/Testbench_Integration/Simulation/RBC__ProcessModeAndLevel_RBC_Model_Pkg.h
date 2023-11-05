/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _RBC__ProcessModeAndLevel_RBC_Model_Pkg_H_
#define _RBC__ProcessModeAndLevel_RBC_Model_Pkg_H_

#include "kcg_types.h"
#include "RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_MODE /* out_mode/ */ out_mode;
  kcg_bool /* out_modeChanged/ */ out_modeChanged;
  M_LEVEL /* out_level/ */ out_level;
  kcg_bool /* out_levelChanged/ */ out_levelChanged;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  M_MODE /* mode/ */ mode;
  M_LEVEL /* level/ */ level;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */ Context_RadioTrainTrackPackets__GetP001_1;
  outC_RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */ Context_RadioTrainTrackPackets__GetP000_1;
  outC_RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */ Context_RadioTrainTrackMessage__GetPackets_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_LEVEL /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  M_MODE /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  M_MODE /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  M_LEVEL /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  kcg_bool /* p0_isValid/ */ p0_isValid;
  kcg_bool /* p1_isValid/ */ p1_isValid;
  M_MODE /* p0_mode/ */ p0_mode;
  M_LEVEL /* p0_level/ */ p0_level;
  M_LEVEL /* p1_level/ */ p1_level;
  M_MODE /* p1_mode/ */ p1_mode;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L1/ */ _L1;
  outPackets_T_Common_Types_Pkg /* _L2/ */ _L2;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L3/ */ _L3;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  Position_Report_TrainToTrack /* _L6/ */ _L6;
  M_MODE /* _L7/ */ _L7;
  M_MODE /* _L9/ */ _L9;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  M_MODE /* _L16/ */ _L16;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L17/ */ _L17;
  M_LEVEL /* _L23/ */ _L23;
  M_LEVEL /* _L24/ */ _L24;
  M_LEVEL /* _L27/ */ _L27;
  kcg_bool /* _L31/ */ _L31;
  M_LEVEL /* _L30/ */ _L30;
  M_MODE /* _L29/ */ _L29;
  Position_Report_based_on_two_balise_groups_TrainToTrack /* _L28/ */ _L28;
  M_LEVEL /* _L32/ */ _L32;
  M_MODE /* _L33/ */ _L33;
} outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessModeAndLevel/ */
extern void RBC__ProcessModeAndLevel_RBC_Model_Pkg(
  /* inTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inTrainTrackMessage,
  outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg *outC);

extern void RBC__ProcessModeAndLevel_reset_RBC_Model_Pkg(
  outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessModeAndLevel_init_RBC_Model_Pkg(
  outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  M_LEVEL /* level/ */ Context_level;
  M_MODE /* mode/ */ Context_mode;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_RBC__ProcessModeAndLevel_RBC_Model_Pkg;

extern void kcg_save_SV_RBC__ProcessModeAndLevel_RBC_Model_Pkg(
  SV_RBC__ProcessModeAndLevel_RBC_Model_Pkg *SV,
  outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg *outC);
extern void kcg_load_SV_RBC__ProcessModeAndLevel_RBC_Model_Pkg(
  outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg *outC,
  SV_RBC__ProcessModeAndLevel_RBC_Model_Pkg *SV);



#endif /* _RBC__ProcessModeAndLevel_RBC_Model_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC__ProcessModeAndLevel_RBC_Model_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

