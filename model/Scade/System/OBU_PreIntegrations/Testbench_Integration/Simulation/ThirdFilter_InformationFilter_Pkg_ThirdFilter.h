/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _ThirdFilter_InformationFilter_Pkg_ThirdFilter_H_
#define _ThirdFilter_InformationFilter_Pkg_ThirdFilter_H_

#include "kcg_types.h"
#include "ModeFilter_InformationFilter_Pkg_ThirdFilter.h"
#include "SetValidFlag_InformationFilter_Pkg_Common.h"
#include "GetPacketId_InformationFilter_Pkg_Common.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* outMessage/ */ outMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SetValidFlag_InformationFilter_Pkg_Common /* _L13=(InformationFilter_Pkg::Common::SetValidFlag#1)/ */ Context_SetValidFlag_1[30];
  outC_ModeFilter_InformationFilter_Pkg_ThirdFilter /* _L10=(InformationFilter_Pkg::ThirdFilter::ModeFilter#2)/ */ Context_ModeFilter_2[30];
  outC_GetPacketId_InformationFilter_Pkg_Common /* _L12=(InformationFilter_Pkg::Common::GetPacketId#1)/ */ Context_GetPacketId_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* valid/ */ valid;
  MsgSource_T_Common_Types_Pkg /* source/ */ source;
  RadioMetadata_T_Common_Types_Pkg /* radio_metadata/ */ radio_metadata;
  BG_Header_T_BG_Types_Pkg /* bg_header/ */ bg_header;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* radio_header/ */ radio_header;
  CompressedPackets_T_Common_Types_Pkg /* packets/ */ packets;
  RBC_Id_T_Common_Types_Pkg /* sendingRBC/ */ sendingRBC;
  DMI_Available_Menu_int_T_DATA /* _L10/ */ _L10;
  ReceivedMessage_T_Common_Types_Pkg /* _L11/ */ _L11;
  array_int64_30 /* _L12/ */ _L12;
  Metadata_T_Common_Types_Pkg /* _L13/ */ _L13;
  kcg_bool /* _L18/ */ _L18;
  ReceivedMessage_T_Common_Types_Pkg /* _L22/ */ _L22;
  _57_array /* _L23/ */ _L23;
  M_MODE /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  MsgSource_T_Common_Types_Pkg /* _L26/ */ _L26;
  RadioMetadata_T_Common_Types_Pkg /* _L27/ */ _L27;
  BG_Header_T_BG_Types_Pkg /* _L31/ */ _L31;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L32/ */ _L32;
  CompressedPackets_T_Common_Types_Pkg /* _L33/ */ _L33;
  CompressedPackets_T_Common_Types_Pkg /* _L52/ */ _L52;
  Metadata_T_Common_Types_Pkg /* _L53/ */ _L53;
  CompressedPackets_T_Common_Types_Pkg /* _L29/ */ _L29;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L30/ */ _L30;
  BG_Header_T_BG_Types_Pkg /* _L21/ */ _L21;
  RadioMetadata_T_Common_Types_Pkg /* _L20/ */ _L20;
  MsgSource_T_Common_Types_Pkg /* _L19/ */ _L19;
  RBC_Id_T_Common_Types_Pkg /* _L68/ */ _L68;
  RBC_Id_T_Common_Types_Pkg /* _L76/ */ _L76;
} outC_ThirdFilter_InformationFilter_Pkg_ThirdFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::ThirdFilter::ThirdFilter/ */
extern void ThirdFilter_InformationFilter_Pkg_ThirdFilter(
  /* inMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* inModus/ */
  M_MODE inModus,
  outC_ThirdFilter_InformationFilter_Pkg_ThirdFilter *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ThirdFilter_reset_InformationFilter_Pkg_ThirdFilter(
  outC_ThirdFilter_InformationFilter_Pkg_ThirdFilter *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ThirdFilter_init_InformationFilter_Pkg_ThirdFilter(
  outC_ThirdFilter_InformationFilter_Pkg_ThirdFilter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ThirdFilter_InformationFilter_Pkg_ThirdFilter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ThirdFilter_InformationFilter_Pkg_ThirdFilter.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

