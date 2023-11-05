/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Dynamic1_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic1/ */
void CAST_int_to_DMI_Dynamic1_DATA_Packets_EVC_to_DMI(
  /* dmi_dynamic_int/ */
  DMI_Dynamic_int_array_T_DATA *dmi_dynamic_int,
  outC_CAST_int_to_DMI_Dynamic1_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_copy_DMI_Dynamic_int_array_T_DATA(&outC->_L38, dmi_dynamic_int);
  outC->_L13 = outC->_L38[11];
  outC->_L12 = outC->_L38[12];
  /* _L43=(DATA::Variables::CAST_int_to_DMI_level#1)/ */
  CAST_int_to_DMI_level_DATA_Variables(
    outC->_L13,
    outC->_L12,
    &outC->Context_CAST_int_to_DMI_level_1);
  kcg_copy_DMI_level_T_DMI_Types_Pkg(
    &outC->_L43,
    &outC->Context_CAST_int_to_DMI_level_1.dmi_level_ct);
  outC->_L24 = outC->_L38[0];
  /* _L25=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L24, &outC->Context_Int_to_Bool_1);
  outC->_L25 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L23 = outC->_L38[1];
  outC->_L22 = outC->_L38[2];
  outC->_L21 = outC->_L38[3];
  outC->_L20 = outC->_L38[4];
  outC->_L19 = outC->_L38[5];
  outC->_L18 = outC->_L38[6];
  outC->_L17 = outC->_L38[7];
  outC->_L16 = outC->_L38[8];
  outC->_L15 = outC->_L38[9];
  outC->_L14 = outC->_L38[10];
  /* _L26=(TM_conversions::CAST_Int_to_M_MODE#1)/ */
  CAST_Int_to_M_MODE_TM_conversions(
    outC->_L14,
    &outC->Context_CAST_Int_to_M_MODE_1);
  outC->_L26 = outC->Context_CAST_Int_to_M_MODE_1.m_mode;
  outC->_L11 = outC->_L38[13];
  /* _L28=(TM_conversions::CAST_Int_to_NID_C#1)/ */
  CAST_Int_to_NID_C_TM_conversions(
    outC->_L11,
    &outC->Context_CAST_Int_to_NID_C_1);
  outC->_L28 = outC->Context_CAST_Int_to_NID_C_1.nid_c;
  outC->_L10 = outC->_L38[14];
  /* _L30=(Utilities::Int_to_Bool#2)/ */
  Int_to_Bool_Utilities(outC->_L10, &outC->Context_Int_to_Bool_2);
  outC->_L30 = outC->Context_Int_to_Bool_2.bool_out;
  outC->_L9 = outC->_L38[15];
  /* _L29=(DATA::Variables::CAST_int_to_M_SupervisionDisplay#1)/ */
  CAST_int_to_M_SupervisionDisplay_DATA_Variables(
    outC->_L9,
    &outC->Context_CAST_int_to_M_SupervisionDisplay_1);
  outC->_L29 =
    outC->Context_CAST_int_to_M_SupervisionDisplay_1.m_supervisiondisplay_ct;
  outC->_L8 = outC->_L38[16];
  /* _L31=(DATA::Variables::CAST_int_to_M_SUPERVISION_STATUS#1)/ */
  CAST_int_to_M_SUPERVISION_STATUS_DATA_Variables(
    outC->_L8,
    &outC->Context_CAST_int_to_M_SUPERVISION_STATUS_1);
  outC->_L31 =
    outC->Context_CAST_int_to_M_SUPERVISION_STATUS_1.m_supervision_status_ct;
  outC->_L7 = outC->_L38[17];
  outC->_L6 = outC->_L38[18];
  outC->_L5 = outC->_L38[19];
  outC->_L4 = outC->_L38[20];
  outC->_L3 = outC->_L38[21];
  outC->_L2 = outC->_L38[22];
  /* _L41=(DATA::Variables::CAST_int_to_connectionStatusRadioUnit#1)/ */
  CAST_int_to_connectionStatusRadioUnit_DATA_Variables(
    outC->_L2,
    &outC->Context_CAST_int_to_connectionStatusRadioUnit_1);
  outC->_L41 =
    outC->Context_CAST_int_to_connectionStatusRadioUnit_1.connectionStatusRadioUnit_ct;
  outC->_L39 = outC->_L38[23];
  outC->_L33.valid = outC->_L25;
  outC->_L33.system_clock = outC->_L23;
  outC->_L33.v_train = outC->_L22;
  outC->_L33.location_front_train = outC->_L21;
  outC->_L33.location_brake_target = outC->_L20;
  outC->_L33.v_target = outC->_L19;
  outC->_L33.v_permitted = outC->_L18;
  outC->_L33.v_release = outC->_L17;
  outC->_L33.location_brake_curve_starting_point = outC->_L16;
  outC->_L33.v_intervention = outC->_L15;
  outC->_L33.mode = outC->_L26;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->_L33.level, &outC->_L43);
  outC->_L33.nid_c = outC->_L28;
  outC->_L33.nid_c_valid = outC->_L30;
  outC->_L33.m_warning = outC->_L29;
  outC->_L33.sup_status = outC->_L31;
  outC->_L33.location_LOA = outC->_L7;
  outC->_L33.v_LOA = outC->_L6;
  outC->_L33.location_KP_Balise_Track = outC->_L5;
  outC->_L33.distance_KP_Balise = outC->_L4;
  outC->_L33.distance_to_TSA = outC->_L3;
  outC->_L33.radioConnectionStatus = outC->_L41;
  outC->_L33.distanceIndicationPoint = outC->_L39;
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_dynamic_ct,
    &outC->_L33);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_Dynamic1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Dynamic1_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;

  outC->_L43.level = M_LEVEL_Level_0;
  outC->_L43.nid_stm = kcg_lit_int32(0);
  outC->_L41 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L39 = kcg_lit_int32(0);
  for (idx = 0; idx < 24; idx++) {
    outC->_L38[idx] = kcg_lit_int32(0);
  }
  outC->_L33.valid = kcg_true;
  outC->_L33.system_clock = kcg_lit_int32(0);
  outC->_L33.v_train = kcg_lit_int32(0);
  outC->_L33.location_front_train = kcg_lit_int32(0);
  outC->_L33.location_brake_target = kcg_lit_int32(0);
  outC->_L33.v_target = kcg_lit_int32(0);
  outC->_L33.v_permitted = kcg_lit_int32(0);
  outC->_L33.v_release = kcg_lit_int32(0);
  outC->_L33.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L33.v_intervention = kcg_lit_int32(0);
  outC->_L33.mode = M_MODE_Full_Supervision;
  outC->_L33.level.level = M_LEVEL_Level_0;
  outC->_L33.level.nid_stm = kcg_lit_int32(0);
  outC->_L33.nid_c = kcg_lit_int32(0);
  outC->_L33.nid_c_valid = kcg_true;
  outC->_L33.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L33.sup_status = CSM_DMI_Types_Pkg;
  outC->_L33.location_LOA = kcg_lit_int32(0);
  outC->_L33.v_LOA = kcg_lit_int32(0);
  outC->_L33.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->_L33.distance_KP_Balise = kcg_lit_int32(0);
  outC->_L33.distance_to_TSA = kcg_lit_int32(0);
  outC->_L33.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L33.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L31 = CSM_DMI_Types_Pkg;
  outC->_L30 = kcg_true;
  outC->_L29 = supDis_normal_DMI_Types_Pkg;
  outC->_L28 = kcg_lit_int32(0);
  outC->_L26 = M_MODE_Full_Supervision;
  outC->_L25 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(0);
  outC->_L19 = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L22 = kcg_lit_int32(0);
  outC->_L23 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->dmi_dynamic_ct.valid = kcg_true;
  outC->dmi_dynamic_ct.system_clock = kcg_lit_int32(0);
  outC->dmi_dynamic_ct.v_train = kcg_lit_int32(0);
  outC->dmi_dynamic_ct.location_front_train = kcg_lit_int32(0);
  outC->dmi_dynamic_ct.location_brake_target = kcg_lit_int32(0);
  outC->dmi_dynamic_ct.v_target = kcg_lit_int32(0);
  outC->dmi_dynamic_ct.v_permitted = kcg_lit_int32(0);
  outC->dmi_dynamic_ct.v_release = kcg_lit_int32(0);
  outC->dmi_dynamic_ct.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->dmi_dynamic_ct.v_intervention = kcg_lit_int32(0);
  outC->dmi_dynamic_ct.mode = M_MODE_Full_Supervision;
  outC->dmi_dynamic_ct.level.level = M_LEVEL_Level_0;
  outC->dmi_dynamic_ct.level.nid_stm = kcg_lit_int32(0);
  outC->dmi_dynamic_ct.nid_c = kcg_lit_int32(0);
  outC->dmi_dynamic_ct.nid_c_valid = kcg_true;
  outC->dmi_dynamic_ct.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->dmi_dynamic_ct.sup_status = CSM_DMI_Types_Pkg;
  outC->dmi_dynamic_ct.location_LOA = kcg_lit_int32(0);
  outC->dmi_dynamic_ct.v_LOA = kcg_lit_int32(0);
  outC->dmi_dynamic_ct.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->dmi_dynamic_ct.distance_KP_Balise = kcg_lit_int32(0);
  outC->dmi_dynamic_ct.distance_to_TSA = kcg_lit_int32(0);
  outC->dmi_dynamic_ct.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->dmi_dynamic_ct.distanceIndicationPoint = kcg_lit_int32(0);
  /* _L41=(DATA::Variables::CAST_int_to_connectionStatusRadioUnit#1)/ */
  CAST_int_to_connectionStatusRadioUnit_init_DATA_Variables(
    &outC->Context_CAST_int_to_connectionStatusRadioUnit_1);
  /* _L31=(DATA::Variables::CAST_int_to_M_SUPERVISION_STATUS#1)/ */
  CAST_int_to_M_SUPERVISION_STATUS_init_DATA_Variables(
    &outC->Context_CAST_int_to_M_SUPERVISION_STATUS_1);
  /* _L29=(DATA::Variables::CAST_int_to_M_SupervisionDisplay#1)/ */
  CAST_int_to_M_SupervisionDisplay_init_DATA_Variables(
    &outC->Context_CAST_int_to_M_SupervisionDisplay_1);
  /* _L30=(Utilities::Int_to_Bool#2)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_2);
  /* _L28=(TM_conversions::CAST_Int_to_NID_C#1)/ */
  CAST_Int_to_NID_C_init_TM_conversions(&outC->Context_CAST_Int_to_NID_C_1);
  /* _L26=(TM_conversions::CAST_Int_to_M_MODE#1)/ */
  CAST_Int_to_M_MODE_init_TM_conversions(&outC->Context_CAST_Int_to_M_MODE_1);
  /* _L25=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L43=(DATA::Variables::CAST_int_to_DMI_level#1)/ */
  CAST_int_to_DMI_level_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_level_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_Dynamic1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Dynamic1_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L41=(DATA::Variables::CAST_int_to_connectionStatusRadioUnit#1)/ */
  CAST_int_to_connectionStatusRadioUnit_reset_DATA_Variables(
    &outC->Context_CAST_int_to_connectionStatusRadioUnit_1);
  /* _L31=(DATA::Variables::CAST_int_to_M_SUPERVISION_STATUS#1)/ */
  CAST_int_to_M_SUPERVISION_STATUS_reset_DATA_Variables(
    &outC->Context_CAST_int_to_M_SUPERVISION_STATUS_1);
  /* _L29=(DATA::Variables::CAST_int_to_M_SupervisionDisplay#1)/ */
  CAST_int_to_M_SupervisionDisplay_reset_DATA_Variables(
    &outC->Context_CAST_int_to_M_SupervisionDisplay_1);
  /* _L30=(Utilities::Int_to_Bool#2)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_2);
  /* _L28=(TM_conversions::CAST_Int_to_NID_C#1)/ */
  CAST_Int_to_NID_C_reset_TM_conversions(&outC->Context_CAST_Int_to_NID_C_1);
  /* _L26=(TM_conversions::CAST_Int_to_M_MODE#1)/ */
  CAST_Int_to_M_MODE_reset_TM_conversions(&outC->Context_CAST_Int_to_M_MODE_1);
  /* _L25=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L43=(DATA::Variables::CAST_int_to_DMI_level#1)/ */
  CAST_int_to_DMI_level_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_level_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_Dynamic1_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

