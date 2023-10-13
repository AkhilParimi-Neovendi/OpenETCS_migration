/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"

/* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar/ */
void ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  /* DMI_dynamic/ */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic,
  outC_ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  outC->_L7 = CSM_DMI_Types_Pkg;
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L1, DMI_dynamic);
  outC->_L4 = outC->_L1.sup_status;
  outC->_L8 = outC->_L4 != outC->_L7;
  outC->_L2 = outC->_L1.mode;
  outC->_L6 = M_MODE_Full_Supervision;
  outC->_L5 = outC->_L6 == outC->_L2;
  outC->_L9 = outC->_L5 & outC->_L8;
  outC->_L12 = outC->_L1.mode;
  outC->_L13 = M_MODE_Reversing;
  outC->_L11 = outC->_L13 == outC->_L12;
  outC->_L10 = outC->_L11 | outC->_L9;
  outC->Condition = outC->_L10;
}

#ifndef KCG_USER_DEFINED_INIT
void ConditionDistanceToTargetBar_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  outC->_L13 = M_MODE_Full_Supervision;
  outC->_L12 = M_MODE_Full_Supervision;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = CSM_DMI_Types_Pkg;
  outC->_L6 = M_MODE_Full_Supervision;
  outC->_L5 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = kcg_lit_int64(0);
  outC->_L1.v_train = kcg_lit_int64(0);
  outC->_L1.location_front_train = kcg_lit_int64(0);
  outC->_L1.location_brake_target = kcg_lit_int64(0);
  outC->_L1.v_target = kcg_lit_int64(0);
  outC->_L1.v_permitted = kcg_lit_int64(0);
  outC->_L1.v_release = kcg_lit_int64(0);
  outC->_L1.location_brake_curve_starting_point = kcg_lit_int64(0);
  outC->_L1.v_intervention = kcg_lit_int64(0);
  outC->_L1.mode = M_MODE_Full_Supervision;
  outC->_L1.level.level = M_LEVEL_Level_0;
  outC->_L1.level.nid_stm = kcg_lit_int64(0);
  outC->_L1.nid_c = kcg_lit_int64(0);
  outC->_L1.nid_c_valid = kcg_true;
  outC->_L1.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L1.sup_status = CSM_DMI_Types_Pkg;
  outC->_L1.location_LOA = kcg_lit_int64(0);
  outC->_L1.v_LOA = kcg_lit_int64(0);
  outC->_L1.location_KP_Balise_Track = kcg_lit_int64(0);
  outC->_L1.distance_KP_Balise = kcg_lit_int64(0);
  outC->_L1.distance_to_TSA = kcg_lit_int64(0);
  outC->_L1.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L1.distanceIndicationPoint = kcg_lit_int64(0);
  outC->_L2 = M_MODE_Full_Supervision;
  outC->_L4 = CSM_DMI_Types_Pkg;
  outC->Condition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void ConditionDistanceToTargetBar_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

