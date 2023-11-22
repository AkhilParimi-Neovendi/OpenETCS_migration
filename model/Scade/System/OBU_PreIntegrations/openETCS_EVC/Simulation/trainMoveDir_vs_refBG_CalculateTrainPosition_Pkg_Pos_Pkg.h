/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg_H_
#define _trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg_H_

#include "kcg_types.h"
#include "invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Q_DIRTRAIN /* direction/ */ direction;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_invert_Q_DIRTRAIN_CalculateTrainPosition_Pkg_Pos_Pkg /* _L24=(CalculateTrainPosition_Pkg::Pos_Pkg::invert_Q_DIRTRAIN#1)/ */ Context_invert_Q_DIRTRAIN_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* refMotionDir/ */ refMotionDir;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* currMotionDir/ */ currMotionDir;
  Q_DIRTRAIN /* refRunningDirectionToBG/ */ refRunningDirectionToBG;
  positionedBG_T_TrainPosition_Types_Pck /* _L7/ */ _L7;
  passedBG_T_BG_Types_Pkg /* _L9/ */ _L9;
  BG_Header_T_BG_Types_Pkg /* _L10/ */ _L10;
  Q_DIRTRAIN /* _L13/ */ _L13;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* _L14/ */ _L14;
  odometry_T_Obu_BasicTypes_Pkg /* _L15/ */ _L15;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* _L18/ */ _L18;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  Q_DIRTRAIN /* _L22/ */ _L22;
  Q_DIRTRAIN /* _L23/ */ _L23;
  Q_DIRTRAIN /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  positionedBG_T_TrainPosition_Types_Pck /* _L29/ */ _L29;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L30/ */ _L30;
  passedBG_T_BG_Types_Pkg /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  BG_Header_T_BG_Types_Pkg /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  kcg_bool /* _L37/ */ _L37;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  Q_DIRTRAIN /* _L44/ */ _L44;
  Q_DIRTRAIN /* _L45/ */ _L45;
} outC_trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG/ */
extern void trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* currentOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* refBG/ */
  positionedBG_T_TrainPosition_Types_Pck *refBG,
  outC_trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void trainMoveDir_vs_refBG_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
  outC_trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void trainMoveDir_vs_refBG_init_CalculateTrainPosition_Pkg_Pos_Pkg(
  outC_trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

