/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _FirstFilter_InformationFilter_Pkg_FirstFilter_H_
#define _FirstFilter_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"
#include "SetValidFlag_InformationFilter_Pkg_Common.h"
#include "GetPacketId_InformationFilter_Pkg_Common.h"
#include "LevelFilter_InformationFilter_Pkg_FirstFilter.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* messageForFilter2/ */ messageForFilter2;
  ReceivedMessage_T_Common_Types_Pkg /* messageForBuffer/ */ messageForBuffer;
  kcg_bool /* storeInBuffer1/ */ storeInBuffer1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SetValidFlag_InformationFilter_Pkg_Common /* _L183=(InformationFilter_Pkg::Common::SetValidFlag#1)/ */ Context_SetValidFlag_1[30];
  outC_SetValidFlag_InformationFilter_Pkg_Common /* _L184=(InformationFilter_Pkg::Common::SetValidFlag#2)/ */ Context_SetValidFlag_2[30];
  outC_LevelFilter_InformationFilter_Pkg_FirstFilter /* _L114=(InformationFilter_Pkg::FirstFilter::LevelFilter#1)/ */ Context_LevelFilter_1[30];
  outC_GetPacketId_InformationFilter_Pkg_Common /* _L49=(InformationFilter_Pkg::Common::GetPacketId#1)/ */ Context_GetPacketId_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MsgSource_T_Common_Types_Pkg /* source/ */ source;
  kcg_bool /* valid/ */ valid;
  BG_Header_T_BG_Types_Pkg /* bg_header/ */ bg_header;
  RadioMetadata_T_Common_Types_Pkg /* radio_metadata/ */ radio_metadata;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* radio_header/ */ radio_header;
  CompressedPackets_T_Common_Types_Pkg /* packets/ */ packets;
  RBC_Id_T_Common_Types_Pkg /* sendingRBC/ */ sendingRBC;
  ReceivedMessage_T_Common_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L6/ */ _L6;
  MsgSource_T_Common_Types_Pkg /* _L5/ */ _L5;
  M_LEVEL /* _L7/ */ _L7;
  RadioMetadata_T_Common_Types_Pkg /* _L8/ */ _L8;
  BG_Header_T_BG_Types_Pkg /* _L9/ */ _L9;
  DMI_Available_Menu_int_T_DATA /* _L1/ */ _L1;
  _35_array /* _L46/ */ _L46;
  MsgSource_T_Common_Types_Pkg /* _L48/ */ _L48;
  array_int32_30 /* _L49/ */ _L49;
  _18_array /* _L45/ */ _L45;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L82/ */ _L82;
  CompressedPackets_T_Common_Types_Pkg /* _L81/ */ _L81;
  Metadata_T_Common_Types_Pkg /* _L98/ */ _L98;
  DMI_Available_Menu_int_T_DATA /* _L106/ */ _L106;
  DMI_Available_Menu_int_T_DATA /* _L108/ */ _L108;
  DMI_Available_Menu_int_T_DATA /* _L110/ */ _L110;
  DMI_Available_Menu_int_T_DATA /* _L111/ */ _L111;
  array_int32_30 /* _L112/ */ _L112;
  DMI_Available_Menu_int_T_DATA /* _L113/ */ _L113;
  DMI_Available_Menu_int_T_DATA /* _L114/ */ _L114;
  kcg_bool /* _L116/ */ _L116;
  kcg_bool /* _L117/ */ _L117;
  DMI_Available_Menu_int_T_DATA /* _L120/ */ _L120;
  DMI_Available_Menu_int_T_DATA /* _L121/ */ _L121;
  RBC_Id_T_Common_Types_Pkg /* _L129/ */ _L129;
  filterRelatedEvents_T_Common_Types_Pkg /* _L139/ */ _L139;
  kcg_bool /* _L148/ */ _L148;
  kcg_bool /* _L149/ */ _L149;
  kcg_bool /* _L150/ */ _L150;
  kcg_bool /* _L151/ */ _L151;
  kcg_int32 /* _L152/ */ _L152;
  kcg_bool /* _L153/ */ _L153;
  kcg_bool /* _L154/ */ _L154;
  kcg_bool /* _L155/ */ _L155;
  RBC_Id_T_Common_Types_Pkg /* _L175/ */ _L175;
  ReceivedMessage_T_Common_Types_Pkg /* _L174/ */ _L174;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L173/ */ _L173;
  BG_Header_T_BG_Types_Pkg /* _L172/ */ _L172;
  CompressedPackets_T_Common_Types_Pkg /* _L171/ */ _L171;
  CompressedPackets_T_Common_Types_Pkg /* _L170/ */ _L170;
  RadioMetadata_T_Common_Types_Pkg /* _L169/ */ _L169;
  kcg_bool /* _L168/ */ _L168;
  MsgSource_T_Common_Types_Pkg /* _L167/ */ _L167;
  RBC_Id_T_Common_Types_Pkg /* _L138/ */ _L138;
  CompressedPackets_T_Common_Types_Pkg /* _L105/ */ _L105;
  CompressedPackets_T_Common_Types_Pkg /* _L85/ */ _L85;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L84/ */ _L84;
  RadioMetadata_T_Common_Types_Pkg /* _L83/ */ _L83;
  BG_Header_T_BG_Types_Pkg /* _L78/ */ _L78;
  MsgSource_T_Common_Types_Pkg /* _L77/ */ _L77;
  kcg_bool /* _L76/ */ _L76;
  ReceivedMessage_T_Common_Types_Pkg /* _L58/ */ _L58;
  Metadata_T_Common_Types_Pkg /* _L183/ */ _L183;
  Metadata_T_Common_Types_Pkg /* _L184/ */ _L184;
} outC_FirstFilter_InformationFilter_Pkg_FirstFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::FirstFilter::FirstFilter/ */
extern void FirstFilter_InformationFilter_Pkg_FirstFilter(
  /* inMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* inLevel/ */
  M_LEVEL inLevel,
  /* inFilterEvents/ */
  filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  outC_FirstFilter_InformationFilter_Pkg_FirstFilter *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void FirstFilter_reset_InformationFilter_Pkg_FirstFilter(
  outC_FirstFilter_InformationFilter_Pkg_FirstFilter *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void FirstFilter_init_InformationFilter_Pkg_FirstFilter(
  outC_FirstFilter_InformationFilter_Pkg_FirstFilter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _FirstFilter_InformationFilter_Pkg_FirstFilter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FirstFilter_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

