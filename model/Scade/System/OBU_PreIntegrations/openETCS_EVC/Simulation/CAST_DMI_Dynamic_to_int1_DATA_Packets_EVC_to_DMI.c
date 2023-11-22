/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Dynamic_to_int1_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int1/ */
void CAST_DMI_Dynamic_to_int1_DATA_Packets_EVC_to_DMI(
  /* dmi_dynamic_ct/ */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_dynamic_ct,
  outC_CAST_DMI_Dynamic_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L1, dmi_dynamic_ct);
  outC->_L24 = outC->_L1.valid;
  /* _L25=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L24, &outC->Context_Bool_to_Int_1);
  outC->_L25 = outC->Context_Bool_to_Int_1.int_out;
  outC->_L23 = outC->_L1.system_clock;
  outC->_L22 = outC->_L1.v_train;
  outC->_L21 = outC->_L1.location_front_train;
  outC->_L20 = outC->_L1.location_brake_target;
  outC->_L19 = outC->_L1.v_target;
  outC->_L18 = outC->_L1.v_permitted;
  outC->_L17 = outC->_L1.v_release;
  outC->_L16 = outC->_L1.location_brake_curve_starting_point;
  outC->_L15 = outC->_L1.v_intervention;
  outC->_L14 = outC->_L1.mode;
  /* _L26=(TM_conversions::CAST_M_MODE_to_int#1)/ */
  CAST_M_MODE_to_int_TM_conversions(
    outC->_L14,
    &outC->Context_CAST_M_MODE_to_int_1);
  outC->_L26 = outC->Context_CAST_M_MODE_to_int_1.m_mode_int;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->_L13, &outC->_L1.level);
  /* _L27=(DATA::Variables::CAST_DMI_level_to_int#1)/ */
  CAST_DMI_level_to_int_DATA_Variables(
    &outC->_L13,
    &outC->Context_CAST_DMI_level_to_int_1);
  outC->_L27 = outC->Context_CAST_DMI_level_to_int_1.level_int;
  outC->_L36 = outC->Context_CAST_DMI_level_to_int_1.nid_stm_int;
  outC->_L12 = outC->_L1.nid_c;
  /* _L28=(TM_conversions::CAST_NID_C_to_int#1)/ */
  CAST_NID_C_to_int_TM_conversions(
    outC->_L12,
    &outC->Context_CAST_NID_C_to_int_1);
  outC->_L28 = outC->Context_CAST_NID_C_to_int_1.nid_c_int;
  outC->_L11 = outC->_L1.nid_c_valid;
  /* _L30=(Utilities::Bool_to_Int#2)/ */
  Bool_to_Int_Utilities(outC->_L11, &outC->Context_Bool_to_Int_2);
  outC->_L30 = outC->Context_Bool_to_Int_2.int_out;
  outC->_L10 = outC->_L1.m_warning;
  /* _L29=(DATA::Variables::CAST_M_SupervisionDisplay_to_int#1)/ */
  CAST_M_SupervisionDisplay_DATA_Variables(
    outC->_L10,
    &outC->Context_CAST_M_SupervisionDisplay_to_int_1);
  outC->_L29 =
    outC->Context_CAST_M_SupervisionDisplay_to_int_1.m_supervisiondisplay_int;
  outC->_L9 = outC->_L1.sup_status;
  /* _L31=(DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int#1)/ */
  CAST_M_SUPERVISION_STATUS_DATA_Variables(
    outC->_L9,
    &outC->Context_CAST_M_SUPERVISION_STATUS_to_int_1);
  outC->_L31 =
    outC->Context_CAST_M_SUPERVISION_STATUS_to_int_1.m_supervision_status_int;
  outC->_L8 = outC->_L1.location_LOA;
  outC->_L7 = outC->_L1.v_LOA;
  outC->_L6 = outC->_L1.location_KP_Balise_Track;
  outC->_L5 = outC->_L1.distance_KP_Balise;
  outC->_L4 = outC->_L1.distance_to_TSA;
  outC->_L3 = outC->_L1.radioConnectionStatus;
  /* _L32=(DATA::Variables::CAST_connectionStatusRadioUnit_to_int#1)/ */
  CAST_connectionStatusRadi_DATA_Variables(
    outC->_L3,
    &outC->Context_CAST_connectionStatusRadioUnit_to_int_1);
  outC->_L32 =
    outC->Context_CAST_connectionStatusRadioUnit_to_int_1.connectionStatusRadioUnit_int;
  outC->_L2 = outC->_L1.distanceIndicationPoint;
  outC->_L33[0] = outC->_L25;
  outC->_L33[1] = outC->_L23;
  outC->_L33[2] = outC->_L22;
  outC->_L33[3] = outC->_L21;
  outC->_L33[4] = outC->_L20;
  outC->_L33[5] = outC->_L19;
  outC->_L33[6] = outC->_L18;
  outC->_L33[7] = outC->_L17;
  outC->_L33[8] = outC->_L16;
  outC->_L33[9] = outC->_L15;
  outC->_L33[10] = outC->_L26;
  outC->_L33[11] = outC->_L27;
  outC->_L33[12] = outC->_L36;
  outC->_L33[13] = outC->_L28;
  outC->_L33[14] = outC->_L30;
  outC->_L33[15] = outC->_L29;
  outC->_L33[16] = outC->_L31;
  outC->_L33[17] = outC->_L8;
  outC->_L33[18] = outC->_L7;
  outC->_L33[19] = outC->_L6;
  outC->_L33[20] = outC->_L5;
  outC->_L33[21] = outC->_L4;
  outC->_L33[22] = outC->_L32;
  outC->_L33[23] = outC->_L2;
  kcg_copy_DMI_Dynamic_int_array_T_DATA(&outC->dmi_dynamic_int, &outC->_L33);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_Dynamic_to_int1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Dynamic_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L36 = kcg_lit_int32(0);
  for (idx = 0; idx < 24; idx++) {
    outC->_L33[idx] = kcg_lit_int32(0);
  }
  outC->_L32 = kcg_lit_int32(0);
  outC->_L31 = kcg_lit_int32(0);
  outC->_L30 = kcg_lit_int32(0);
  outC->_L29 = kcg_lit_int32(0);
  outC->_L28 = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  outC->_L26 = kcg_lit_int32(0);
  outC->_L25 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L9 = CSM_DMI_Types_Pkg;
  outC->_L10 = supDis_normal_DMI_Types_Pkg;
  outC->_L11 = kcg_true;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L13.level = M_LEVEL_Level_0;
  outC->_L13.nid_stm = kcg_lit_int32(0);
  outC->_L14 = M_MODE_Full_Supervision;
  outC->_L15 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(0);
  outC->_L19 = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L22 = kcg_lit_int32(0);
  outC->_L23 = kcg_lit_int32(0);
  outC->_L24 = kcg_true;
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
  for (idx1 = 0; idx1 < 24; idx1++) {
    outC->dmi_dynamic_int[idx1] = kcg_lit_int32(0);
  }
  /* _L32=(DATA::Variables::CAST_connectionStatusRadioUnit_to_int#1)/ */
  CAST_connectionStatusRadi_init_DATA_Variables(
    &outC->Context_CAST_connectionStatusRadioUnit_to_int_1);
  /* _L31=(DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int#1)/ */
  CAST_M_SUPERVISION_STATUS_init_DATA_Variables(
    &outC->Context_CAST_M_SUPERVISION_STATUS_to_int_1);
  /* _L29=(DATA::Variables::CAST_M_SupervisionDisplay_to_int#1)/ */
  CAST_M_SupervisionDisplay_init_DATA_Variables(
    &outC->Context_CAST_M_SupervisionDisplay_to_int_1);
  /* _L30=(Utilities::Bool_to_Int#2)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_2);
  /* _L28=(TM_conversions::CAST_NID_C_to_int#1)/ */
  CAST_NID_C_to_int_init_TM_conversions(&outC->Context_CAST_NID_C_to_int_1);
  /* _L27=(DATA::Variables::CAST_DMI_level_to_int#1)/ */
  CAST_DMI_level_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_level_to_int_1);
  /* _L26=(TM_conversions::CAST_M_MODE_to_int#1)/ */
  CAST_M_MODE_to_int_init_TM_conversions(&outC->Context_CAST_M_MODE_to_int_1);
  /* _L25=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_Dynamic_to_int1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Dynamic_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L32=(DATA::Variables::CAST_connectionStatusRadioUnit_to_int#1)/ */
  CAST_connectionStatusRadi_reset_DATA_Variables(
    &outC->Context_CAST_connectionStatusRadioUnit_to_int_1);
  /* _L31=(DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int#1)/ */
  CAST_M_SUPERVISION_STATUS_reset_DATA_Variables(
    &outC->Context_CAST_M_SUPERVISION_STATUS_to_int_1);
  /* _L29=(DATA::Variables::CAST_M_SupervisionDisplay_to_int#1)/ */
  CAST_M_SupervisionDisplay_reset_DATA_Variables(
    &outC->Context_CAST_M_SupervisionDisplay_to_int_1);
  /* _L30=(Utilities::Bool_to_Int#2)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_2);
  /* _L28=(TM_conversions::CAST_NID_C_to_int#1)/ */
  CAST_NID_C_to_int_reset_TM_conversions(&outC->Context_CAST_NID_C_to_int_1);
  /* _L27=(DATA::Variables::CAST_DMI_level_to_int#1)/ */
  CAST_DMI_level_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_level_to_int_1);
  /* _L26=(TM_conversions::CAST_M_MODE_to_int#1)/ */
  CAST_M_MODE_to_int_reset_TM_conversions(&outC->Context_CAST_M_MODE_to_int_1);
  /* _L25=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_Dynamic_to_int1_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

