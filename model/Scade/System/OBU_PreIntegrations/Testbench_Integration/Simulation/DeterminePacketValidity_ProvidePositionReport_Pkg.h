/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _DeterminePacketValidity_ProvidePositionReport_Pkg_H_
#define _DeterminePacketValidity_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* sendPacket0/ */ sendPacket0;
  kcg_bool /* sendPacket1/ */ sendPacket1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L12/ */ _L12;
  passedBG_T_BG_Types_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  N_TOTAL /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L6/ */ _L6;
  BG_Header_T_BG_Types_Pkg /* _L5/ */ _L5;
  N_TOTAL /* _L4/ */ _L4;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  positionedBG_T_TrainPosition_Types_Pck /* _L15/ */ _L15;
} outC_DeterminePacketValidity_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::DeterminePacketValidity/ */
extern void DeterminePacketValidity_ProvidePositionReport_Pkg(
  /* lrbg/ */
  positionedBG_T_TrainPosition_Types_Pck *lrbg,
  outC_DeterminePacketValidity_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DeterminePacketValidity_reset_ProvidePositionReport_Pkg(
  outC_DeterminePacketValidity_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DeterminePacketValidity_init_ProvidePositionReport_Pkg(
  outC_DeterminePacketValidity_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _DeterminePacketValidity_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DeterminePacketValidity_ProvidePositionReport_Pkg.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

