/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _Build_Header_ProvidePositionReport_Pkg_H_
#define _Build_Header_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* posRepHeader/ */ posRepHeader;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L8/ */ _L8;
  Q_MARQSTREASON /* _L7/ */ _L7;
  trainProperties_T_TrainPosition_Types_Pck /* _L5/ */ _L5;
  T_TRAIN /* _L4/ */ _L4;
  kcg_int64 /* _L3/ */ _L3;
  NID_ENGINE /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  NID_EM /* _L9/ */ _L9;
  NID_TEXTMESSAGE /* _L10/ */ _L10;
  Q_EMERGENCYSTOP /* _L11/ */ _L11;
  T_TRAIN /* _L12/ */ _L12;
} outC_Build_Header_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Build_Header/ */
extern void Build_Header_ProvidePositionReport_Pkg(
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* t_train/ */
  T_TRAIN t_train,
  outC_Build_Header_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_Header_reset_ProvidePositionReport_Pkg(
  outC_Build_Header_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_Header_init_ProvidePositionReport_Pkg(
  outC_Build_Header_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Build_Header_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_Header_ProvidePositionReport_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

