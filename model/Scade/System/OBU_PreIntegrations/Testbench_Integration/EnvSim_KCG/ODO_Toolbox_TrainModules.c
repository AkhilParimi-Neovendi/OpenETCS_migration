/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_Toolbox_TrainModules.h"

/* Toolbox::TrainModules::ODO/ */
void ODO_Toolbox_TrainModules(
  /* timestamp/ */
  T_internal_Type_Obu_BasicTypes_Pkg timestamp,
  /* velocity/ */
  OdometrySpeed_T_Toolbox velocity,
  /* acceleration/ */
  A_internal_Type_Obu_BasicTypes_Pkg acceleration,
  /* position/ */
  L_internal_Type_Obu_BasicTypes_Pkg position,
  /* motionDirection/ */
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection,
  outC_ODO_Toolbox_TrainModules *outC)
{
  kcg_copy_odometryFactors_T_Toolbox(
    &outC->_L21,
    (odometryFactors_T_Toolbox *) &cOdometryFactors_Toolbox);
  outC->_L6 = velocity;
  /* _L20=(Toolbox::Functions::ODO_genSpeedInaccuracies#1)/ */
  ODO_genSpeedInaccuracies_Toolbox_Functions(
    outC->_L6,
    &outC->_L21,
    &outC->Context_ODO_genSpeedInaccuracies_1);
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
    &outC->_L20,
    &outC->Context_ODO_genSpeedInaccuracies_1.odometrySpeeds);
  outC->_L19 = motionDirection;
  outC->_L18 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L17 = Motion_Obu_BasicTypes_Pkg;
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = velocity;
  outC->_L14 = outC->_L15 > outC->_L16;
  /* _L13= */
  if (outC->_L14) {
    outC->_L13 = outC->_L17;
  }
  else {
    outC->_L13 = outC->_L18;
  }
  kcg_copy_odometryFactors_T_Toolbox(
    &outC->_L11,
    (odometryFactors_T_Toolbox *) &cOdometryFactors_Toolbox);
  outC->_L10 = position;
  /* _L9=(Toolbox::Functions::ODO_genOdometryInaccuracies#1)/ */
  ODO_genOdometryInaccuracies_Toolbox_Functions(
    outC->_L10,
    &outC->_L11,
    &outC->Context_ODO_genOdometryInaccuracies_1);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L9,
    &outC->Context_ODO_genOdometryInaccuracies_1.odometryLocations);
  outC->_L7 = acceleration;
  outC->_L5 = timestamp;
  outC->_L4 = kcg_true;
  outC->_L1.valid = outC->_L4;
  outC->_L1.timestamp = outC->_L5;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L1.odo, &outC->_L9);
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&outC->_L1.speed, &outC->_L20);
  outC->_L1.acceleration = outC->_L7;
  outC->_L1.motionState = outC->_L13;
  outC->_L1.motionDirection = outC->_L19;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->odometry, &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void ODO_init_Toolbox_TrainModules(outC_ODO_Toolbox_TrainModules *outC)
{
  outC->_L21.o_nominal = kcg_lit_float64(0.0);
  outC->_L21.o_min = kcg_lit_float64(0.0);
  outC->_L21.o_max = kcg_lit_float64(0.0);
  outC->_L20.v_safeNominal = kcg_lit_int64(0);
  outC->_L20.v_rawNominal = kcg_lit_int64(0);
  outC->_L20.v_lower = kcg_lit_int64(0);
  outC->_L20.v_upper = kcg_lit_int64(0);
  outC->_L19 = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L18 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L17 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L14 = kcg_true;
  outC->_L13 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L11.o_nominal = kcg_lit_float64(0.0);
  outC->_L11.o_min = kcg_lit_float64(0.0);
  outC->_L11.o_max = kcg_lit_float64(0.0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9.o_nominal = kcg_lit_int64(0);
  outC->_L9.o_min = kcg_lit_int64(0);
  outC->_L9.o_max = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.timestamp = kcg_lit_int64(0);
  outC->_L1.odo.o_nominal = kcg_lit_int64(0);
  outC->_L1.odo.o_min = kcg_lit_int64(0);
  outC->_L1.odo.o_max = kcg_lit_int64(0);
  outC->_L1.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L1.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L1.speed.v_lower = kcg_lit_int64(0);
  outC->_L1.speed.v_upper = kcg_lit_int64(0);
  outC->_L1.acceleration = kcg_lit_int64(0);
  outC->_L1.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->odometry.valid = kcg_true;
  outC->odometry.timestamp = kcg_lit_int64(0);
  outC->odometry.odo.o_nominal = kcg_lit_int64(0);
  outC->odometry.odo.o_min = kcg_lit_int64(0);
  outC->odometry.odo.o_max = kcg_lit_int64(0);
  outC->odometry.speed.v_safeNominal = kcg_lit_int64(0);
  outC->odometry.speed.v_rawNominal = kcg_lit_int64(0);
  outC->odometry.speed.v_lower = kcg_lit_int64(0);
  outC->odometry.speed.v_upper = kcg_lit_int64(0);
  outC->odometry.acceleration = kcg_lit_int64(0);
  outC->odometry.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->odometry.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  /* _L9=(Toolbox::Functions::ODO_genOdometryInaccuracies#1)/ */
  ODO_genOdometryInaccuracies_init_Toolbox_Functions(
    &outC->Context_ODO_genOdometryInaccuracies_1);
  /* _L20=(Toolbox::Functions::ODO_genSpeedInaccuracies#1)/ */
  ODO_genSpeedInaccuracies_init_Toolbox_Functions(
    &outC->Context_ODO_genSpeedInaccuracies_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ODO_reset_Toolbox_TrainModules(outC_ODO_Toolbox_TrainModules *outC)
{
  /* _L9=(Toolbox::Functions::ODO_genOdometryInaccuracies#1)/ */
  ODO_genOdometryInaccuracies_reset_Toolbox_Functions(
    &outC->Context_ODO_genOdometryInaccuracies_1);
  /* _L20=(Toolbox::Functions::ODO_genSpeedInaccuracies#1)/ */
  ODO_genSpeedInaccuracies_reset_Toolbox_Functions(
    &outC->Context_ODO_genSpeedInaccuracies_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ODO_Toolbox_TrainModules.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

