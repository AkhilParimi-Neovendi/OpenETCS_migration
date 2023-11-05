/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i/ */
void op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg(
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg *outC)
{
  /* odometry/ */
  static odometry_T_Obu_BasicTypes_Pkg last_odometry;

  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&last_odometry, &outC->mem_odometry);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->mem_odometry, odometry);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L27, &last_odometry);
  outC->_L35 = outC->_L27.valid;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L26, odometry);
  outC->_L22 = outC->_L26.valid;
  outC->_L17 = outC->_L26.motionState;
  outC->_L19 = outC->_L27.motionState;
  outC->_L33 = outC->_L19 != outC->_L17;
  outC->_L34 = outC->_L35 & outC->_L33 & outC->_L22;
  outC->trigger = outC->_L34;
}

#ifndef KCG_USER_DEFINED_INIT
void op_3_6_5_1_4_a_i_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg *outC)
{
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L27.valid = kcg_true;
  outC->_L27.timestamp = kcg_lit_int32(0);
  outC->_L27.odo.o_nominal = kcg_lit_int32(0);
  outC->_L27.odo.o_min = kcg_lit_int32(0);
  outC->_L27.odo.o_max = kcg_lit_int32(0);
  outC->_L27.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L27.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L27.speed.v_lower = kcg_lit_int32(0);
  outC->_L27.speed.v_upper = kcg_lit_int32(0);
  outC->_L27.acceleration = kcg_lit_int32(0);
  outC->_L27.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L27.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L26.valid = kcg_true;
  outC->_L26.timestamp = kcg_lit_int32(0);
  outC->_L26.odo.o_nominal = kcg_lit_int32(0);
  outC->_L26.odo.o_min = kcg_lit_int32(0);
  outC->_L26.odo.o_max = kcg_lit_int32(0);
  outC->_L26.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L26.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L26.speed.v_lower = kcg_lit_int32(0);
  outC->_L26.speed.v_upper = kcg_lit_int32(0);
  outC->_L26.acceleration = kcg_lit_int32(0);
  outC->_L26.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L26.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L22 = kcg_true;
  outC->_L19 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L17 = noMotion_Obu_BasicTypes_Pkg;
  outC->trigger = kcg_true;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->mem_odometry,
    (odometry_T_Obu_BasicTypes_Pkg *) &cOdomerty_ProvidePositionReport_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_6_5_1_4_a_i_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg *outC)
{
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->mem_odometry,
    (odometry_T_Obu_BasicTypes_Pkg *) &cOdomerty_ProvidePositionReport_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

