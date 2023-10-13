/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::DMI_Speed_and_CPS_for_Planning_Area/ */
void DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func(
  /* DMI_track_atlas/ */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_track_atlas,
  outC_DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L8 = kcg_lit_float64(100.0);
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L3, DMI_track_atlas);
  outC->_L2 = outC->_L3.location_front_train;
  outC->_L5 = /* _L5= */(kcg_float64) outC->_L2;
  outC->_L7 = outC->_L5 / outC->_L8;
  outC->_L1 = outC->_L3.v_permitted;
  outC->_L4 = /* _L4= */(kcg_float64) outC->_L1;
  outC->fronttrain = outC->_L7;
  outC->vpermitted = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void DMI_Speed_and_CPS_for_Planning_Area_init_DMI_Control_Pkg_Sub_func(
  outC_DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3.valid = kcg_true;
  outC->_L3.system_clock = kcg_lit_int64(0);
  outC->_L3.v_train = kcg_lit_int64(0);
  outC->_L3.location_front_train = kcg_lit_int64(0);
  outC->_L3.location_brake_target = kcg_lit_int64(0);
  outC->_L3.v_target = kcg_lit_int64(0);
  outC->_L3.v_permitted = kcg_lit_int64(0);
  outC->_L3.v_release = kcg_lit_int64(0);
  outC->_L3.location_brake_curve_starting_point = kcg_lit_int64(0);
  outC->_L3.v_intervention = kcg_lit_int64(0);
  outC->_L3.mode = M_MODE_Full_Supervision;
  outC->_L3.level.level = M_LEVEL_Level_0;
  outC->_L3.level.nid_stm = kcg_lit_int64(0);
  outC->_L3.nid_c = kcg_lit_int64(0);
  outC->_L3.nid_c_valid = kcg_true;
  outC->_L3.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L3.sup_status = CSM_DMI_Types_Pkg;
  outC->_L3.location_LOA = kcg_lit_int64(0);
  outC->_L3.v_LOA = kcg_lit_int64(0);
  outC->_L3.location_KP_Balise_Track = kcg_lit_int64(0);
  outC->_L3.distance_KP_Balise = kcg_lit_int64(0);
  outC->_L3.distance_to_TSA = kcg_lit_int64(0);
  outC->_L3.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L3.distanceIndicationPoint = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->fronttrain = kcg_lit_float64(0.0);
  outC->vpermitted = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DMI_Speed_and_CPS_for_Planning_Area_reset_DMI_Control_Pkg_Sub_func(
  outC_DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

