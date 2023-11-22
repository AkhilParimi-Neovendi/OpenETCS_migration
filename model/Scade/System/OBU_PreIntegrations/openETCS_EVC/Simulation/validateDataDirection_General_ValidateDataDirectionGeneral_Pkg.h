/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _validateDataDirection_General_ValidateDataDirectionGeneral_Pkg_H_
#define _validateDataDirection_General_ValidateDataDirectionGeneral_Pkg_H_

#include "kcg_types.h"
#include "validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* outMessage/ */ outMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions /* _L7=(ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket#1)/ */ Context_validateDataDirectionForSinglePacket_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_DIRTRAIN /* trainRunningDirectionToBG/ */ trainRunningDirectionToBG;
  kcg_bool /* trainPositionKnown/ */ trainPositionKnown;
  Q_DIR /* mandatoryVariableQ_DIR/ */ mandatoryVariableQ_DIR;
  MsgSource_T_Common_Types_Pkg /* msgSrc/ */ msgSrc;
  NID_MESSAGE /* nid_message/ */ nid_message;
  kcg_bool /* inputValid/ */ inputValid;
  kcg_bool /* outputValid/ */ outputValid;
  CompressedPackets_T_Common_Types_Pkg /* tmpPackets/ */ tmpPackets;
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  Metadata_T_Common_Types_Pkg /* _L6/ */ _L6;
  Metadata_T_Common_Types_Pkg /* _L7/ */ _L7;
  _140_array /* _L8/ */ _L8;
  ReceivedMessage_T_Common_Types_Pkg /* _L9/ */ _L9;
  ReceivedMessage_T_Common_Types_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L17/ */ _L17;
  MsgSource_T_Common_Types_Pkg /* _L16/ */ _L16;
  RadioMetadata_T_Common_Types_Pkg /* _L15/ */ _L15;
  BG_Header_T_BG_Types_Pkg /* _L14/ */ _L14;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L13/ */ _L13;
  CompressedPackets_T_Common_Types_Pkg /* _L12/ */ _L12;
  _133_array /* _L19/ */ _L19;
  Q_DIRTRAIN /* _L24/ */ _L24;
  Q_DIRTRAIN /* _L25/ */ _L25;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L42/ */ _L42;
  kcg_bool /* _L41/ */ _L41;
  Q_DIR /* _L40/ */ _L40;
  kcg_bool /* _L39/ */ _L39;
  Q_DIRTRAIN /* _L38/ */ _L38;
  kcg_bool /* _L36/ */ _L36;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L34/ */ _L34;
  Q_DIR /* _L33/ */ _L33;
  kcg_bool /* _L32/ */ _L32;
  Q_DIRTRAIN /* _L31/ */ _L31;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L28/ */ _L28;
  Q_DIR /* _L27/ */ _L27;
  Q_DIR /* _L44/ */ _L44;
  NID_MESSAGE /* _L45/ */ _L45;
  Q_DIR /* _L46/ */ _L46;
  Q_DIR /* _L47/ */ _L47;
  Q_DIR /* _L48/ */ _L48;
  Q_DIRTRAIN /* _L49/ */ _L49;
  Q_DIRTRAIN /* _L50/ */ _L50;
  kcg_bool /* _L51/ */ _L51;
  NID_MESSAGE /* _L52/ */ _L52;
  kcg_int32 /* _L53/ */ _L53;
  kcg_bool /* _L54/ */ _L54;
  kcg_bool /* _L55/ */ _L55;
  MsgSource_T_Common_Types_Pkg /* _L56/ */ _L56;
  MsgSource_T_Common_Types_Pkg /* _L57/ */ _L57;
  kcg_bool /* _L60/ */ _L60;
  kcg_bool /* _L64/ */ _L64;
  MsgSource_T_Common_Types_Pkg /* _L67/ */ _L67;
  MsgSource_T_Common_Types_Pkg /* _L66/ */ _L66;
  kcg_bool /* _L65/ */ _L65;
  kcg_bool /* _L68/ */ _L68;
  kcg_bool /* _L69/ */ _L69;
  kcg_bool /* _L72/ */ _L72;
  MsgSource_T_Common_Types_Pkg /* _L71/ */ _L71;
  MsgSource_T_Common_Types_Pkg /* _L70/ */ _L70;
  kcg_bool /* _L73/ */ _L73;
  NID_MESSAGE /* _L76/ */ _L76;
  kcg_int32 /* _L75/ */ _L75;
  kcg_bool /* _L74/ */ _L74;
  kcg_bool /* _L77/ */ _L77;
  kcg_bool /* _L78/ */ _L78;
  kcg_bool /* _L79/ */ _L79;
  array_bool_30 /* _L80/ */ _L80;
  kcg_bool /* _L81/ */ _L81;
  kcg_bool /* _L82/ */ _L82;
  kcg_bool /* _L83/ */ _L83;
  array_bool_30 /* _L84/ */ _L84;
  CompressedPackets_T_Common_Types_Pkg /* _L98/ */ _L98;
  CompressedPackets_T_Common_Types_Pkg /* _L99/ */ _L99;
  CompressedPackets_T_Common_Types_Pkg /* _L100/ */ _L100;
  RBC_Id_T_Common_Types_Pkg /* _L101/ */ _L101;
  kcg_bool /* _L106/ */ _L106;
  kcg_bool /* _L105/ */ _L105;
  trainPosition_T_TrainPosition_Types_Pck /* _L104/ */ _L104;
  kcg_bool /* _L103/ */ _L103;
  kcg_bool /* _L102/ */ _L102;
} outC_validateDataDirection_General_ValidateDataDirectionGeneral_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General/ */
extern void validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
  /* inMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* trainRunningDirectionFromBG/ */
  Q_DIRTRAIN trainRunningDirectionFromBG,
  /* LRBGKnown/ */
  kcg_bool LRBGKnown,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* coordinateSystemAssigned/ */
  kcg_bool coordinateSystemAssigned,
  outC_validateDataDirection_General_ValidateDataDirectionGeneral_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void validateDataDirection_General_reset_ValidateDataDirectionGeneral_Pkg(
  outC_validateDataDirection_General_ValidateDataDirectionGeneral_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void validateDataDirection_General_init_ValidateDataDirectionGeneral_Pkg(
  outC_validateDataDirection_General_ValidateDataDirectionGeneral_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _validateDataDirection_General_ValidateDataDirectionGeneral_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** validateDataDirection_General_ValidateDataDirectionGeneral_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

