/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _TA_to_ML_TA_Export_H_
#define _TA_to_ML_TA_Export_H_

#include "kcg_types.h"
#include "Read_P046_Legacy_TM_specific.h"
#include "Read_P041_Legacy_TM_specific.h"
#include "Read_P021_Legacy_TM_specific.h"
#include "Read_P015_Legacy_TM_specific.h"
#include "Read_P139_Legacy_TM_specific.h"
#include "Read_P138_Legacy_TM_specific.h"
#include "Read_P137_Legacy_TM_specific.h"
#include "Read_P135_TM.h"
#include "CAST_NID_MESSAGE_to_int_TM_conversions.h"
#include "Read_P027V1_Legacy_for_ML_TM_specific.h"
#include "Read_P012_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* Data_to_From_Track_Packets_at_ML/ */ Data_to_From_Track_Packets_at_ML;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg /* Data_to_From_Track_Messages_at_ML/ */ Data_to_From_Track_Messages_at_ML;
  kcg_bool /* P_12_to_Input_MA_SSP_Gradient_at_ML/ */ P_12_to_Input_MA_SSP_Gradient_at_ML;
  kcg_bool /* P_15_to_Input_MA_SSP_Gradient_at_ML/ */ P_15_to_Input_MA_SSP_Gradient_at_ML;
  kcg_bool /* P_21_to_Input_MA_SSP_Gradient_at_ML/ */ P_21_to_Input_MA_SSP_Gradient_at_ML;
  kcg_bool /* P_27_to_Input_MA_SSP_Gradient_at_ML/ */ P_27_to_Input_MA_SSP_Gradient_at_ML;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P137_Legacy_TM_specific /* _L69=(TM_specific::Read_P137_Legacy#1)/ */ Context_Read_P137_Legacy_1;
  outC_Read_P138_Legacy_TM_specific /* _L71=(TM_specific::Read_P138_Legacy#1)/ */ Context_Read_P138_Legacy_1;
  outC_Read_P139_Legacy_TM_specific /* _L73=(TM_specific::Read_P139_Legacy#1)/ */ Context_Read_P139_Legacy_1;
  outC_Read_P015_Legacy_TM_specific /* _L121=(TM_specific::Read_P015_Legacy#1)/ */ Context_Read_P015_Legacy_1;
  outC_Read_P021_Legacy_TM_specific /* _L122=(TM_specific::Read_P021_Legacy#1)/ */ Context_Read_P021_Legacy_1;
  outC_Read_P027V1_Legacy_for_ML_TM_specific /* _L123=(TM_specific::Read_P027V1_Legacy_for_ML#1)/ */ Context_Read_P027V1_Legacy_for_ML_1;
  outC_Read_P041_Legacy_TM_specific /* _L81=(TM_specific::Read_P041_Legacy#1)/ */ Context_Read_P041_Legacy_1;
  outC_Read_P046_Legacy_TM_specific /* _L83=(TM_specific::Read_P046_Legacy#1)/ */ Context_Read_P046_Legacy_1;
  outC_Read_P135_TM /* _L88=(TM::Read_P135#2)/ */ Context_Read_P135_2;
  outC_Read_P012_TM /* _L107=(TM::Read_P012#1)/ */ Context_Read_P012_1;
  outC_Read_P135_TM /* _L67=(TM::Read_P135#1)/ */ Context_Read_P135_1;
  outC_CAST_NID_MESSAGE_to_int_TM_conversions /* _L20=(TM_conversions::CAST_NID_MESSAGE_to_int#2)/ */ Context_CAST_NID_MESSAGE_to_int_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L26/ */ _L26;
  kcg_int32 /* _L25/ */ _L25;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L21/ */ _L21;
  kcg_int32 /* _L20/ */ _L20;
  kcg_bool /* _L18/ */ _L18;
  kcg_int32 /* _L27/ */ _L27;
  kcg_int32 /* _L28/ */ _L28;
  kcg_int32 /* _L29/ */ _L29;
  kcg_int32 /* _L30/ */ _L30;
  kcg_int32 /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  ReceivedMessage_T_Common_Types_Pkg /* _L33/ */ _L33;
  NID_MESSAGE /* _L48/ */ _L48;
  CompressedPackets_T_Common_Types_Pkg /* _L51/ */ _L51;
  ReceivedMessage_T_Common_Types_Pkg /* _L49/ */ _L49;
  P135_OBU_T_TM /* _L68/ */ _L68;
  kcg_bool /* _L67/ */ _L67;
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg /* _L69/ */ _L69;
  P138_ReversingAreaInformation_T_Packet_Types_Pkg /* _L71/ */ _L71;
  P139_ReversingSupervisionInformation_T_Packet_Types_Pkg /* _L73/ */ _L73;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* _L81/ */ _L81;
  _8_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg /* _L83/ */ _L83;
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg /* _L85/ */ _L85;
  P80_ModeProfiles_T_Packet_Types_Pkg /* _L86/ */ _L86;
  CompressedPackets_T_Common_Types_Pkg /* _L99/ */ _L99;
  ReceivedMessage_T_Common_Types_Pkg /* _L97/ */ _L97;
  kcg_bool /* _L88/ */ _L88;
  P135_OBU_T_TM /* _L89/ */ _L89;
  kcg_bool /* _L103/ */ _L103;
  P012_OBU_T_TM /* _L108/ */ _L108;
  kcg_bool /* _L107/ */ _L107;
  kcg_bool /* _L109/ */ _L109;
  kcg_bool /* _L110/ */ _L110;
  kcg_bool /* _L111/ */ _L111;
  _6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg /* _L121/ */ _L121;
  P21_GradientProfiles_T_Packet_Types_Pkg /* _L122/ */ _L122;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg /* _L123/ */ _L123;
  _7_P12_Level1MovementAuthorities_T_Packet_Types_Pkg /* _L124/ */ _L124;
  P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg /* _L125/ */ _L125;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg /* _L126/ */ _L126;
  NID_LRBG /* _L127/ */ _L127;
  Location_T_Obu_BasicTypes_Pkg /* _L128/ */ _L128;
} outC_TA_to_ML_TA_Export;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Export::TA_to_ML/ */
extern void TA_to_ML_TA_Export(
  /* MessageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* t_nvcontact_overpass/ */
  kcg_bool t_nvcontact_overpass,
  /* valid_GP/ */
  kcg_bool valid_GP,
  /* valid_MA/ */
  kcg_bool valid_MA,
  /* valid_SSP/ */
  kcg_bool valid_SSP,
  outC_TA_to_ML_TA_Export *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TA_to_ML_reset_TA_Export(outC_TA_to_ML_TA_Export *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TA_to_ML_init_TA_Export(outC_TA_to_ML_TA_Export *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TA_to_ML_TA_Export_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TA_to_ML_TA_Export.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

