/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed.h"

/* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager/ */
void DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed(
  /* DMI_dynamic/ */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic,
  outC_DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed *outC)
{
  outC->_L19 = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(-1);
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L1, DMI_dynamic);
  outC->_L14 = outC->_L1.v_train;
  outC->_L17 = outC->_L18 == outC->_L14;
  /* _L16= */
  if (outC->_L17) {
    outC->_L16 = outC->_L19;
  }
  else {
    outC->_L16 = outC->_L14;
  }
  outC->_L15 = /* _L15= */(kcg_float32) outC->_L16;
  /* _L8=(DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit#1)/ */
  SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed(
    outC->_L15,
    &outC->Context_SpeedToDigit_1);
  outC->_L8 = outC->Context_SpeedToDigit_1.SpeedDigitOne;
  outC->_L9 = outC->Context_SpeedToDigit_1.SpeedDigitTwo;
  outC->_L10 = outC->Context_SpeedToDigit_1.SpeedDigitThree;
  outC->SpeedDigitOne = outC->_L8;
  outC->SpeedDigitTwo = outC->_L9;
  outC->SpeedDigitThree = outC->_L10;
  outC->TrainSpeed = outC->_L15;
}

#ifndef KCG_USER_DEFINED_INIT
void DigitSpeedManager_init_DMI_Control_Pkg_Sub_func_Speed(
  outC_DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed *outC)
{
  outC->_L19 = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(0);
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_float32(0.0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_float32(0.0);
  outC->_L9 = kcg_lit_float32(0.0);
  outC->_L8 = kcg_lit_float32(0.0);
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = kcg_lit_int32(0);
  outC->_L1.v_train = kcg_lit_int32(0);
  outC->_L1.location_front_train = kcg_lit_int32(0);
  outC->_L1.location_brake_target = kcg_lit_int32(0);
  outC->_L1.v_target = kcg_lit_int32(0);
  outC->_L1.v_permitted = kcg_lit_int32(0);
  outC->_L1.v_release = kcg_lit_int32(0);
  outC->_L1.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L1.v_intervention = kcg_lit_int32(0);
  outC->_L1.mode = M_MODE_Full_Supervision;
  outC->_L1.level.level = M_LEVEL_Level_0;
  outC->_L1.level.nid_stm = kcg_lit_int32(0);
  outC->_L1.nid_c = kcg_lit_int32(0);
  outC->_L1.nid_c_valid = kcg_true;
  outC->_L1.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L1.sup_status = CSM_DMI_Types_Pkg;
  outC->_L1.location_LOA = kcg_lit_int32(0);
  outC->_L1.v_LOA = kcg_lit_int32(0);
  outC->_L1.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->_L1.distance_KP_Balise = kcg_lit_int32(0);
  outC->_L1.distance_to_TSA = kcg_lit_int32(0);
  outC->_L1.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L1.distanceIndicationPoint = kcg_lit_int32(0);
  outC->TrainSpeed = kcg_lit_float32(0.0);
  outC->SpeedDigitThree = kcg_lit_float32(0.0);
  outC->SpeedDigitTwo = kcg_lit_float32(0.0);
  outC->SpeedDigitOne = kcg_lit_float32(0.0);
  /* _L8=(DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit#1)/ */
  SpeedToDigit_init_DMI_Control_Pkg_Sub_func_Speed(
    &outC->Context_SpeedToDigit_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DigitSpeedManager_reset_DMI_Control_Pkg_Sub_func_Speed(
  outC_DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed *outC)
{
  /* _L8=(DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit#1)/ */
  SpeedToDigit_reset_DMI_Control_Pkg_Sub_func_Speed(
    &outC->Context_SpeedToDigit_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

