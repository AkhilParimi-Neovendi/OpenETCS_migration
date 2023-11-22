/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _internalCycle_SDM_GradientAcceleration_Pkg_H_
#define _internalCycle_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"
#include "addNewSection_SDM_GradientAcceleration_Pkg.h"
#include "MoveTrainPosition_SDM_GradientAcceleration_Pkg.h"
#include "CalcNearestDistance_SDM_GradientAcceleration_Pkg.h"
#include "DetermineNewIndices_SDM_GradientAcceleration_Pkg.h"
#include "lowestGradient_SDM_GradientAcceleration_Pkg.h"
#include "selectGradientOffset_SDM_GradientAcceleration_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* condition/ */ condition;
  ACC_SDM_GradientAcceleration_Pkg /* AccuOut/ */ AccuOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_DetermineNewIndices_SDM_GradientAcceleration_Pkg /* _L73=(SDM_GradientAcceleration_Pkg::DetermineNewIndices)/ */ Context_DetermineNewIndices;
  outC_MoveTrainPosition_SDM_GradientAcceleration_Pkg /* _L78=(SDM_GradientAcceleration_Pkg::MoveTrainPosition)/ */ Context_MoveTrainPosition;
  outC_CalcNearestDistance_SDM_GradientAcceleration_Pkg /* _L75=(SDM_GradientAcceleration_Pkg::CalcNearestDistance)/ */ Context_CalcNearestDistance;
  outC_addNewSection_SDM_GradientAcceleration_Pkg /* _L115=(SDM_GradientAcceleration_Pkg::addNewSection)/ */ Context_addNewSection;
  outC_lowestGradient_SDM_GradientAcceleration_Pkg /* _L46=(SDM_GradientAcceleration_Pkg::lowestGradient#1)/ */ Context_lowestGradient_1[50];
  outC_selectGradientOffset_SDM_GradientAcceleration_Pkg /* _L116=(SDM_GradientAcceleration_Pkg::selectGradientOffset#1)/ */ Context_selectGradientOffset_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* _L9/ */ _L9;
  GradientProfile_real_t_SDM_GradientAcceleration_types /* _L13/ */ _L13;
  ACC_SDM_GradientAcceleration_Pkg /* _L26/ */ _L26;
  ACC_SDM_GradientAcceleration_Pkg /* _L41/ */ _L41;
  Gradient_real_t_SDM_GradientAcceleration_types /* _L45/ */ _L45;
  kcg_int32 /* _L46/ */ _L46;
  kcg_bool /* _L48/ */ _L48;
  GradientProfile_real_t_SDM_GradientAcceleration_types /* _L49/ */ _L49;
  _114_array /* _L50/ */ _L50;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L51/ */ _L51;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L52/ */ _L52;
  ACC_SDM_GradientAcceleration_Pkg /* _L53/ */ _L53;
  ACC_SDM_GradientAcceleration_Pkg /* _L60/ */ _L60;
  kcg_int32 /* _L74/ */ _L74;
  kcg_int32 /* _L73/ */ _L73;
  kcg_bool /* _L77/ */ _L77;
  kcg_float32 /* _L76/ */ _L76;
  kcg_bool /* _L75/ */ _L75;
  kcg_float32 /* _L79/ */ _L79;
  kcg_float32 /* _L78/ */ _L78;
  ACC_SDM_GradientAcceleration_Pkg /* _L80/ */ _L80;
  kcg_int32 /* _L83/ */ _L83;
  kcg_bool /* _L88/ */ _L88;
  GradientProfile_real_t_SDM_GradientAcceleration_types /* _L92/ */ _L92;
  Gradient_real_t_SDM_GradientAcceleration_types /* _L94/ */ _L94;
  kcg_bool /* _L99/ */ _L99;
  ACC_SDM_GradientAcceleration_Pkg /* _L104/ */ _L104;
  kcg_int32 /* _L105/ */ _L105;
  ACC_SDM_GradientAcceleration_Pkg /* _L109/ */ _L109;
  kcg_int32 /* _L108/ */ _L108;
  kcg_int32 /* _L112/ */ _L112;
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types /* _L115/ */ _L115;
  Gradient_section_real_t_SDM_GradientAcceleration_types /* _L116/ */ _L116;
  kcg_int32 /* _L117/ */ _L117;
} outC_internalCycle_SDM_GradientAcceleration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_GradientAcceleration_Pkg::internalCycle/ */
extern void internalCycle_SDM_GradientAcceleration_Pkg(
  /* index/ */
  kcg_int32 index,
  /* Accu/ */
  ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* SvLPosition/ */
  L_internal_real_Type_SDM_Types_Pkg SvLPosition,
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  outC_internalCycle_SDM_GradientAcceleration_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void internalCycle_reset_SDM_GradientAcceleration_Pkg(
  outC_internalCycle_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void internalCycle_init_SDM_GradientAcceleration_Pkg(
  outC_internalCycle_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _internalCycle_SDM_GradientAcceleration_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** internalCycle_SDM_GradientAcceleration_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

