/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _MEM_dataForLevelTransition_EVC_MEM_Support_Pkg_H_
#define _MEM_dataForLevelTransition_EVC_MEM_Support_Pkg_H_

#include "kcg_types.h"
#include "Read_P080_TM.h"
#include "MEM_convertP80_EVC_MEM_Support_Pkg.h"
#include "getP41Level_xdebugSupport_Pkg.h"
#include "getLRBGFromMsg_xdebugSupport_Pkg.h"
#include "checkNTCPriority_xdebugSupport_Pkg.h"
#include "packetValid_xdebugSupport_Pkg.h"
#include "MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg.h"
#include "Read_P046_Legacy_TM_specific.h"
#include "Read_P041_Legacy_TM_specific.h"
#include "Read_P027V1_Legacy_for_ML_TM_specific.h"
#include "Read_P021_TM.h"
#include "Read_P015_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* outstoredData/ */ outstoredData;
  kcg_bool /* outPositionNeeded/ */ outPositionNeeded;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_packetValid_xdebugSupport_Pkg /* _L77=(xdebugSupport_Pkg::packetValid#1)/ */ Context_packetValid_1;
  outC_Read_P046_Legacy_TM_specific /* _L11=(TM_specific::Read_P046_Legacy#1)/ */ Context_Read_P046_Legacy_1;
  outC_Read_P015_TM /* _L3=(TM::Read_P015#1)/ */ Context_Read_P015_1;
  outC_Read_P021_TM /* _L20=(TM::Read_P021#1)/ */ Context_Read_P021_1;
  outC_Read_P027V1_Legacy_for_ML_TM_specific /* _L38=(TM_specific::Read_P027V1_Legacy_for_ML#1)/ */ Context_Read_P027V1_Legacy_for_ML_1;
  outC_MEM_convertP80_EVC_MEM_Support_Pkg /* _L128=(EVC_MEM_Support_Pkg::MEM_convertP80#1)/ */ Context_MEM_convertP80_1;
  outC_Read_P080_TM /* _L129=(TM::Read_P080#1)/ */ Context_Read_P080_1;
  outC_checkNTCPriority_xdebugSupport_Pkg /* _L85=(xdebugSupport_Pkg::checkNTCPriority#1)/ */ Context_checkNTCPriority_1;
  outC_MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg /* _L61=(EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG#1)/ */ Context_MEM_locationOfReferenceLRBG_1;
  outC_getLRBGFromMsg_xdebugSupport_Pkg /* _L116=(xdebugSupport_Pkg::getLRBGFromMsg#1)/ */ Context_getLRBGFromMsg_1;
  outC_getP41Level_xdebugSupport_Pkg /* _L148=(xdebugSupport_Pkg::getP41Level#2)/ */ Context_getP41Level_2;
  outC_Read_P041_Legacy_TM_specific /* _L18=(TM_specific::Read_P041_Legacy#1)/ */ Context_Read_P041_Legacy_1;
  outC_getP41Level_xdebugSupport_Pkg /* _L117=(xdebugSupport_Pkg::getP41Level#1)/ */ Context_getP41Level_1;
  outC_packetValid_xdebugSupport_Pkg /* _L74=(xdebugSupport_Pkg::packetValid#2)/ */ Context_packetValid_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every1;
  kcg_bool every2;
  kcg_bool every3;
  kcg_bool every4;
  kcg_bool every5;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* p41Valid/ */ p41Valid;
  kcg_bool /* p46Valid/ */ p46Valid;
  kcg_bool /* ntcRequested/ */ ntcRequested;
  kcg_bool /* p80Valid/ */ p80Valid;
  kcg_bool /* isMsg3/ */ isMsg3;
  M_LEVEL /* levelStored/ */ levelStored;
  M_LEVEL /* levelIn/ */ levelIn;
  kcg_bool /* noConflictWithOngoingTransmission/ */ noConflictWithOngoingTransmission;
  ReceivedMessage_T_Common_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  P015_OBU_T_TM /* _L4/ */ _L4;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg /* _L10/ */ _L10;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg /* _L11/ */ _L11;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* _L13/ */ _L13;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* _L18/ */ _L18;
  CompressedPackets_T_Common_Types_Pkg /* _L19/ */ _L19;
  P021_OBU_T_TM /* _L21/ */ _L21;
  kcg_bool /* _L20/ */ _L20;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* _L23/ */ _L23;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* _L24/ */ _L24;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* _L25/ */ _L25;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* _L26/ */ _L26;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* _L27/ */ _L27;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* _L31/ */ _L31;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg /* _L38/ */ _L38;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* _L40/ */ _L40;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L46/ */ _L46;
  kcg_bool /* _L48/ */ _L48;
  ReceivedMessage_T_Common_Types_Pkg /* _L49/ */ _L49;
  NID_LRBG /* _L55/ */ _L55;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* _L59/ */ _L59;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L61/ */ _L61;
  kcg_bool /* _L60/ */ _L60;
  trainPosition_T_TrainPosition_Types_Pck /* _L62/ */ _L62;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* _L63/ */ _L63;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L65/ */ _L65;
  kcg_bool /* _L66/ */ _L66;
  kcg_bool /* _L68/ */ _L68;
  kcg_bool /* _L71/ */ _L71;
  kcg_bool /* _L73/ */ _L73;
  kcg_bool /* _L74/ */ _L74;
  Metadata_T_Common_Types_Pkg /* _L75/ */ _L75;
  NID_PACKET /* _L76/ */ _L76;
  kcg_bool /* _L77/ */ _L77;
  NID_PACKET /* _L78/ */ _L78;
  kcg_bool /* _L83/ */ _L83;
  kcg_bool /* _L84/ */ _L84;
  kcg_bool /* _L85/ */ _L85;
  kcg_bool /* _L86/ */ _L86;
  kcg_bool /* _L87/ */ _L87;
  NID_LRBG /* _L116/ */ _L116;
  M_LEVEL /* _L117/ */ _L117;
  M_LEVEL /* _L119/ */ _L119;
  kcg_bool /* _L120/ */ _L120;
  kcg_bool /* _L121/ */ _L121;
  M_LEVEL /* _L122/ */ _L122;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* _L123/ */ _L123;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* _L124/ */ _L124;
  trainProperties_T_TrainPosition_Types_Pck /* _L125/ */ _L125;
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg /* _L126/ */ _L126;
  P80_ModeProfiles_T_Packet_Types_Pkg /* _L127/ */ _L127;
  kcg_bool /* _L129/ */ _L129;
  P080_OBU_T_TM /* _L130/ */ _L130;
  P80_ModeProfiles_T_Packet_Types_Pkg /* _L128/ */ _L128;
  P80_ModeProfiles_T_Packet_Types_Pkg /* _L132/ */ _L132;
  kcg_bool /* _L134/ */ _L134;
  P80_ModeProfiles_T_Packet_Types_Pkg /* _L133/ */ _L133;
  P003_OBU_T_TM /* _L136/ */ _L136;
  NID_MESSAGE /* _L137/ */ _L137;
  NID_MESSAGE /* _L138/ */ _L138;
  kcg_bool /* _L139/ */ _L139;
  P80_ModeProfiles_T_Packet_Types_Pkg /* _L140/ */ _L140;
  kcg_bool /* _L141/ */ _L141;
  P80_ModeProfiles_T_Packet_Types_Pkg /* _L142/ */ _L142;
  kcg_bool /* _L147/ */ _L147;
  kcg_bool /* _L149/ */ _L149;
  M_LEVEL /* _L148/ */ _L148;
  M_LEVEL /* _L151/ */ _L151;
  M_LEVEL /* _L152/ */ _L152;
  kcg_bool /* _L153/ */ _L153;
  M_LEVEL /* _L155/ */ _L155;
  M_LEVEL /* _L156/ */ _L156;
  kcg_bool /* _L158/ */ _L158;
  kcg_bool /* _L159/ */ _L159;
  kcg_bool /* _L162/ */ _L162;
  kcg_bool /* _L166/ */ _L166;
  kcg_bool /* _L167/ */ _L167;
  kcg_bool /* _L168/ */ _L168;
  kcg_bool /* _L169/ */ _L169;
  kcg_bool /* _L170/ */ _L170;
} outC_MEM_dataForLevelTransition_EVC_MEM_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_MEM_Support_Pkg::MEM_dataForLevelTransition/ */
extern void MEM_dataForLevelTransition_EVC_MEM_Support_Pkg(
  /* actualMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* storedData/ */
  dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg *storedData,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* positionNeeded/ */
  kcg_bool positionNeeded,
  /* actualLevel/ */
  M_LEVEL actualLevel,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* nationalValues/ */
  P003_OBU_T_TM *nationalValues,
  outC_MEM_dataForLevelTransition_EVC_MEM_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MEM_dataForLevelTransition_reset_EVC_MEM_Support_Pkg(
  outC_MEM_dataForLevelTransition_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MEM_dataForLevelTransition_init_EVC_MEM_Support_Pkg(
  outC_MEM_dataForLevelTransition_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MEM_dataForLevelTransition_EVC_MEM_Support_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MEM_dataForLevelTransition_EVC_MEM_Support_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

