/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg_H_
#define _linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg_H_

#include "kcg_types.h"
#include "indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* linkingIsUsed/ */ linkingIsUsed;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  kcg_int32 /* _L6/ */ _L6;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  kcg_int32 /* _L9/ */ _L9;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L28=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG#1)/ */ Context_positionDerivedFromPassedBG_1;
  outC_indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L9=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG#1)/ */ Context_indexOfLastBG_1;
  outC_indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L6=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastPassedBG#1)/ */ Context_indexOfLastPassedBG_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* lastLinkedBG/ */ lastLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck /* lastPassedLinkedBG/ */ lastPassedLinkedBG;
  odometry_T_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L22/ */ _L22;
  kcg_int32 /* _L21/ */ _L21;
  kcg_bool /* _L24/ */ _L24;
  kcg_int32 /* _L23/ */ _L23;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L28/ */ _L28;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L29/ */ _L29;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L30/ */ _L30;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L33/ */ _L33;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L34/ */ _L34;
  kcg_int32 /* _L37/ */ _L37;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L40/ */ _L40;
  kcg_int32 /* _L39/ */ _L39;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L38/ */ _L38;
  kcg_bool /* _L41/ */ _L41;
  kcg_bool /* _L46/ */ _L46;
  kcg_bool /* _L47/ */ _L47;
} outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed/ */
extern void linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* currentOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* recalculateBGs/ */
  kcg_bool recalculateBGs,
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void linkingIsUsed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void linkingIsUsed_init_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int32 /* _L9/ */ Context__L9;
  kcg_bool /* _L10/ */ Context__L10;
  kcg_bool /* _L11/ */ Context__L11;
  kcg_int32 /* _L6/ */ Context__L6;
  kcg_bool /* _L7/ */ Context__L7;
  kcg_bool /* _L8/ */ Context__L8;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg;

extern void kcg_save_SV_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg(
  SV_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *SV,
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC);
extern void kcg_load_SV_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC,
  SV_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *SV);



#endif /* _linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

