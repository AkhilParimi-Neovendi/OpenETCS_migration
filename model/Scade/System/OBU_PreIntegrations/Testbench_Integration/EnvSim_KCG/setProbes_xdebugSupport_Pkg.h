/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _setProbes_xdebugSupport_Pkg_H_
#define _setProbes_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "countPackets_xdebugSupport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isChanged/ */ isChanged;
  NID_MESSAGE /* radioMSG/ */ radioMSG;
  NID_BG /* BG_ID/ */ BG_ID;
  NID_PACKET /* packet_id1/ */ packet_id1;
  NID_PACKET /* packet_id2/ */ packet_id2;
  NID_MESSAGE /* lastRadioMSG/ */ lastRadioMSG;
  NID_BG /* lastBG_ID/ */ lastBG_ID;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  NID_MESSAGE /* msgID/ */ msgID;
  NID_BG /* bgID/ */ bgID;
  NID_MESSAGE /* lastMsgID/ */ lastMsgID;
  NID_BG /* lastBGID/ */ lastBGID;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countPackets_xdebugSupport_Pkg /* _L55=(xdebugSupport_Pkg::countPackets#1)/ */ Context_countPackets_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* _L1/ */ _L1;
  API_RadioMsgHeader_T_API_Msg_Pkg /* _L2/ */ _L2;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L4/ */ _L4;
  NID_MESSAGE /* _L5/ */ _L5;
  API_TelegramHeader_T_API_Msg_Pkg /* _L6/ */ _L6;
  TelegramHeader_T_BG_Types_Pkg /* _L7/ */ _L7;
  NID_BG /* _L8/ */ _L8;
  CompressedPackets_T_Common_Types_Pkg /* _L9/ */ _L9;
  Metadata_T_Common_Types_Pkg /* _L10/ */ _L10;
  MetadataElement_T_Common_Types_Pkg /* _L11/ */ _L11;
  kcg_int64 /* _L12/ */ _L12;
  NID_PACKET /* _L13/ */ _L13;
  MetadataElement_T_Common_Types_Pkg /* _L15/ */ _L15;
  NID_PACKET /* _L14/ */ _L14;
  kcg_int64 /* _L16/ */ _L16;
  NID_MESSAGE /* _L18/ */ _L18;
  NID_BG /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  NID_BG /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  NID_MESSAGE /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  MetadataElement_T_Common_Types_Pkg /* _L29/ */ _L29;
  MetadataElement_T_Common_Types_Pkg /* _L30/ */ _L30;
  NID_MESSAGE /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  NID_MESSAGE /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  NID_MESSAGE /* _L37/ */ _L37;
  NID_MESSAGE /* _L38/ */ _L38;
  NID_MESSAGE /* _L39/ */ _L39;
  NID_BG /* _L42/ */ _L42;
  NID_BG /* _L45/ */ _L45;
  NID_BG /* _L44/ */ _L44;
  NID_BG /* _L46/ */ _L46;
  NID_MESSAGE /* _L47/ */ _L47;
  kcg_bool /* _L50/ */ _L50;
  kcg_bool /* _L51/ */ _L51;
  NID_BG /* _L52/ */ _L52;
  NID_MESSAGE /* _L54/ */ _L54;
  kcg_int64 /* _L55/ */ _L55;
  kcg_bool /* _L57/ */ _L57;
  kcg_int64 /* _L58/ */ _L58;
  kcg_bool /* _L59/ */ _L59;
  kcg_int64 /* _L60/ */ _L60;
} outC_setProbes_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::setProbes/ */
extern void setProbes_xdebugSupport_Pkg(
  /* inMsg/ */
  API_TrackSideInput_T_API_Msg_Pkg *inMsg,
  /* show24/ */
  kcg_bool show24,
  outC_setProbes_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void setProbes_reset_xdebugSupport_Pkg(
  outC_setProbes_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void setProbes_init_xdebugSupport_Pkg(
  outC_setProbes_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _setProbes_xdebugSupport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** setProbes_xdebugSupport_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

