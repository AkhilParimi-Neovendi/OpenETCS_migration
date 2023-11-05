/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _genMsgToRBC_MoRC_Pck_Coder_Pkg_H_
#define _genMsgToRBC_MoRC_Pck_Coder_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* radioMessage/ */ radioMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L2/ */ _L2;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L3/ */ _L3;
  NID_MESSAGE /* _L4/ */ _L4;
  T_TRAIN /* _L5/ */ _L5;
  NID_ENGINE /* _L6/ */ _L6;
  outPackets_T_Common_Types_Pkg /* _L7/ */ _L7;
  Q_MARQSTREASON /* _L8/ */ _L8;
  kcg_int32 /* _L10/ */ _L10;
  Q_EMERGENCYSTOP /* _L11/ */ _L11;
  T_TRAIN /* _L12/ */ _L12;
} outC_genMsgToRBC_MoRC_Pck_Coder_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Coder_Pkg::genMsgToRBC/ */
extern void genMsgToRBC_MoRC_Pck_Coder_Pkg(
  /* present/ */
  kcg_bool present,
  /* nid_message/ */
  NID_MESSAGE nid_message,
  /* t_train/ */
  T_TRAIN t_train,
  /* xt_train/ */
  T_TRAIN xt_train,
  /* nid_engine/ */
  NID_ENGINE nid_engine,
  outC_genMsgToRBC_MoRC_Pck_Coder_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void genMsgToRBC_reset_MoRC_Pck_Coder_Pkg(
  outC_genMsgToRBC_MoRC_Pck_Coder_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void genMsgToRBC_init_MoRC_Pck_Coder_Pkg(
  outC_genMsgToRBC_MoRC_Pck_Coder_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _genMsgToRBC_MoRC_Pck_Coder_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** genMsgToRBC_MoRC_Pck_Coder_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

