/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _MEM_combineForLevelChange_EVC_MEM_Support_Pkg_H_
#define _MEM_combineForLevelChange_EVC_MEM_Support_Pkg_H_

#include "kcg_types.h"
#include "MEM_dataForLevelTransition_EVC_MEM_Support_Pkg.h"
#include "Read_P021_Legacy_TM_specific.h"
#include "Read_P015_Legacy_TM_specific.h"
#include "Read_P139_Legacy_TM_specific.h"
#include "Read_P138_Legacy_TM_specific.h"
#include "Read_P137_Legacy_TM_specific.h"
#include "Read_P135_TM.h"
#include "Read_P027V1_Legacy_for_ML_TM_specific.h"
#include "Read_P012_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* Data_From_Track_Packets_at_ML/ */ Data_From_Track_Packets_at_ML;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* infoForLevelTransition/ */ infoForLevelTransition;
  M_LEVEL /* level/ */ level;
  kcg_bool /* LRBGpositionNeeded/ */ LRBGpositionNeeded;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P135_TM /* _L131=(TM::Read_P135#1)/ */ Context_Read_P135_1;
  outC_Read_P012_TM /* _L116=(TM::Read_P012#1)/ */ Context_Read_P012_1;
  outC_Read_P027V1_Legacy_for_ML_TM_specific /* _L122=(TM_specific::Read_P027V1_Legacy_for_ML#1)/ */ Context_Read_P027V1_Legacy_for_ML_1;
  outC_Read_P015_Legacy_TM_specific /* _L129=(TM_specific::Read_P015_Legacy#1)/ */ Context_Read_P015_Legacy_1;
  outC_Read_P139_Legacy_TM_specific /* _L127=(TM_specific::Read_P139_Legacy#1)/ */ Context_Read_P139_Legacy_1;
  outC_Read_P138_Legacy_TM_specific /* _L134=(TM_specific::Read_P138_Legacy#1)/ */ Context_Read_P138_Legacy_1;
  outC_Read_P137_Legacy_TM_specific /* _L125=(TM_specific::Read_P137_Legacy#1)/ */ Context_Read_P137_Legacy_1;
  outC_Read_P021_Legacy_TM_specific /* _L136=(TM_specific::Read_P021_Legacy#1)/ */ Context_Read_P021_Legacy_1;
  outC_MEM_dataForLevelTransition_EVC_MEM_Support_Pkg /* IfBlock1:then:_L35=(EVC_MEM_Support_Pkg::MEM_dataForLevelTransition)/ */ Context_MEM_dataForLevelTransition;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P003_OBU_T_TM /* IfBlock1:then:_L38/ */ _L38_then_IfBlock1;
  trainProperties_T_TrainPosition_Types_Pck /* IfBlock1:then:_L37/ */ _L37_then_IfBlock1;
  M_LEVEL /* IfBlock1:then:_L36/ */ _L36_then_IfBlock1;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* IfBlock1:then:_L35/ */ _L35_then_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* IfBlock1:then:_L34/ */ _L34_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L33/ */ _L33_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L32/ */ _L32_then_IfBlock1;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* IfBlock1:then:_L31/ */ _L31_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* IfBlock1:else:else:_L4/ */ _L4_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L5/ */ _L5_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* IfBlock1:else:then:_L7/ */ _L7_then_else_IfBlock1;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* IfBlock1:else:then:_L8/ */ _L8_then_else_IfBlock1;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg /* IfBlock1:else:then:_L9/ */ _L9_then_else_IfBlock1;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* IfBlock1:else:then:_L10/ */ _L10_then_else_IfBlock1;
  P80_ModeProfiles_T_Packet_Types_Pkg /* IfBlock1:else:then:_L12/ */ _L12_then_else_IfBlock1;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* IfBlock1:else:then:_L13/ */ _L13_then_else_IfBlock1;
  P80_ModeProfiles_T_Packet_Types_Pkg /* IfBlock1:else:then:_L14/ */ _L14_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L15/ */ _L15_then_else_IfBlock1;
  P80_ModeProfiles_T_Packet_Types_Pkg /* IfBlock1:else:then:_L16/ */ _L16_then_else_IfBlock1;
  kcg_bool /* msgToCheck/ */ msgToCheck;
  kcg_bool /* doReset/ */ doReset;
  kcg_bool /* doResetMode/ */ doResetMode;
  ReceivedMessage_T_Common_Types_Pkg /* _L12/ */ _L12;
  kcg_bool /* _L31/ */ _L31;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L37/ */ _L37;
  M_LEVEL /* _L38/ */ _L38;
  ReceivedMessage_T_Common_Types_Pkg /* _L137/ */ _L137;
  P21_GradientProfiles_T_Packet_Types_Pkg /* _L136/ */ _L136;
  P138_ReversingAreaInformation_T_Packet_Types_Pkg /* _L134/ */ _L134;
  kcg_bool /* _L131/ */ _L131;
  P135_OBU_T_TM /* _L132/ */ _L132;
  P12_Level1MovementAuthorities_T_Packet_Types_Pkg /* _L130/ */ _L130;
  P15_Level23MovementAuthorities_T_Packet_Types_Pkg /* _L129/ */ _L129;
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg /* _L128/ */ _L128;
  P139_ReversingSupervisionInformation_T_Packet_Types_Pkg /* _L127/ */ _L127;
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg /* _L125/ */ _L125;
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* _L124/ */ _L124;
  P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg /* _L123/ */ _L123;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg /* _L122/ */ _L122;
  CompressedPackets_T_Common_Types_Pkg /* _L119/ */ _L119;
  kcg_bool /* _L116/ */ _L116;
  P012_OBU_T_TM /* _L117/ */ _L117;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* _L138/ */ _L138;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* _L139/ */ _L139;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg /* _L140/ */ _L140;
  NID_LRBG /* _L141/ */ _L141;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L143/ */ _L143;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* _L145/ */ _L145;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* _L146/ */ _L146;
  kcg_bool /* _L147/ */ _L147;
  kcg_bool /* _L148/ */ _L148;
  kcg_bool /* _L149/ */ _L149;
  M_MODE /* _L150/ */ _L150;
  kcg_bool /* _L151/ */ _L151;
  M_MODE /* _L152/ */ _L152;
  kcg_bool /* _L153/ */ _L153;
  kcg_bool /* _L154/ */ _L154;
  P80_ModeProfiles_T_Packet_Types_Pkg /* _L237/ */ _L237;
  kcg_bool /* _L238/ */ _L238;
  kcg_bool /* _L239/ */ _L239;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* _L240/ */ _L240;
  P80_ModeProfiles_T_Packet_Types_Pkg /* _L241/ */ _L241;
  P80_ModeProfile_T_Packet_Types_Pkg /* _L242/ */ _L242;
  kcg_bool /* _L243/ */ _L243;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L245/ */ _L245;
  NID_MESSAGE /* _L246/ */ _L246;
  kcg_bool /* _L247/ */ _L247;
  NID_MESSAGE /* _L248/ */ _L248;
  kcg_bool /* _L249/ */ _L249;
} outC_MEM_combineForLevelChange_EVC_MEM_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_MEM_Support_Pkg::MEM_combineForLevelChange/ */
extern void MEM_combineForLevelChange_EVC_MEM_Support_Pkg(
  /* actualMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* ModeLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *ModeLevel,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* nationalValues/ */
  P003_OBU_T_TM *nationalValues,
  outC_MEM_combineForLevelChange_EVC_MEM_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MEM_combineForLevelChange_reset_EVC_MEM_Support_Pkg(
  outC_MEM_combineForLevelChange_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MEM_combineForLevelChange_init_EVC_MEM_Support_Pkg(
  outC_MEM_combineForLevelChange_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* LRBGpositionNeeded/ */ Context_LRBGpositionNeeded;
  M_LEVEL /* level/ */ Context_level;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* infoForLevelTransition/ */ Context_infoForLevelTransition;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_MEM_combineForLevelChange_EVC_MEM_Support_Pkg;

extern void kcg_save_SV_MEM_combineForLevelChange_EVC_MEM_Support_Pkg(
  SV_MEM_combineForLevelChange_EVC_MEM_Support_Pkg *SV,
  outC_MEM_combineForLevelChange_EVC_MEM_Support_Pkg *outC);
extern void kcg_load_SV_MEM_combineForLevelChange_EVC_MEM_Support_Pkg(
  outC_MEM_combineForLevelChange_EVC_MEM_Support_Pkg *outC,
  SV_MEM_combineForLevelChange_EVC_MEM_Support_Pkg *SV);



#endif /* _MEM_combineForLevelChange_EVC_MEM_Support_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MEM_combineForLevelChange_EVC_MEM_Support_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

