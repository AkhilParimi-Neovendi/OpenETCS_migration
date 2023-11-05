/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Dynamic/ */
void Write_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI(
  /* dmi_dynamic_int/ */
  DMI_Dynamic_int_array_T_DATA *dmi_dynamic_int,
  outC_Write_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI *outC)
{
  static DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg op_call;

  kcg_copy_DMI_Dynamic_int_array_T_DATA(&outC->_L38, dmi_dynamic_int);
  outC->_L46 = outC->_L38[0];
  outC->_L47 = kcg_lit_int32(1);
  outC->_L48 = outC->_L47 == outC->_L46;
  outC->every = outC->_L48;
  if (outC->every) {
    /* _L44=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic1#1)/ */
    CAST_int_to_DMI_Dynamic1_DATA_Packets_EVC_to_DMI(
      &outC->_L38,
      &outC->Context_CAST_int_to_DMI_Dynamic1_1);
    kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
      &op_call,
      &outC->Context_CAST_int_to_DMI_Dynamic1_1.dmi_dynamic_ct);
  }
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L45,
    (DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cDMI_Dynamic_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L44, &op_call);
  }
  else {
    kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L44, &outC->_L45);
  }
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_dynamic_ct,
    &outC->_L44);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_Dynamic_init_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;

  outC->_L46 = kcg_lit_int32(0);
  outC->_L47 = kcg_lit_int32(0);
  outC->_L48 = kcg_true;
  outC->_L45.valid = kcg_true;
  outC->_L45.system_clock = kcg_lit_int32(0);
  outC->_L45.v_train = kcg_lit_int32(0);
  outC->_L45.location_front_train = kcg_lit_int32(0);
  outC->_L45.location_brake_target = kcg_lit_int32(0);
  outC->_L45.v_target = kcg_lit_int32(0);
  outC->_L45.v_permitted = kcg_lit_int32(0);
  outC->_L45.v_release = kcg_lit_int32(0);
  outC->_L45.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L45.v_intervention = kcg_lit_int32(0);
  outC->_L45.mode = M_MODE_Full_Supervision;
  outC->_L45.level.level = M_LEVEL_Level_0;
  outC->_L45.level.nid_stm = kcg_lit_int32(0);
  outC->_L45.nid_c = kcg_lit_int32(0);
  outC->_L45.nid_c_valid = kcg_true;
  outC->_L45.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L45.sup_status = CSM_DMI_Types_Pkg;
  outC->_L45.location_LOA = kcg_lit_int32(0);
  outC->_L45.v_LOA = kcg_lit_int32(0);
  outC->_L45.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->_L45.distance_KP_Balise = kcg_lit_int32(0);
  outC->_L45.distance_to_TSA = kcg_lit_int32(0);
  outC->_L45.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L45.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L44.valid = kcg_true;
  outC->_L44.system_clock = kcg_lit_int32(0);
  outC->_L44.v_train = kcg_lit_int32(0);
  outC->_L44.location_front_train = kcg_lit_int32(0);
  outC->_L44.location_brake_target = kcg_lit_int32(0);
  outC->_L44.v_target = kcg_lit_int32(0);
  outC->_L44.v_permitted = kcg_lit_int32(0);
  outC->_L44.v_release = kcg_lit_int32(0);
  outC->_L44.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L44.v_intervention = kcg_lit_int32(0);
  outC->_L44.mode = M_MODE_Full_Supervision;
  outC->_L44.level.level = M_LEVEL_Level_0;
  outC->_L44.level.nid_stm = kcg_lit_int32(0);
  outC->_L44.nid_c = kcg_lit_int32(0);
  outC->_L44.nid_c_valid = kcg_true;
  outC->_L44.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L44.sup_status = CSM_DMI_Types_Pkg;
  outC->_L44.location_LOA = kcg_lit_int32(0);
  outC->_L44.v_LOA = kcg_lit_int32(0);
  outC->_L44.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->_L44.distance_KP_Balise = kcg_lit_int32(0);
  outC->_L44.distance_to_TSA = kcg_lit_int32(0);
  outC->_L44.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L44.distanceIndicationPoint = kcg_lit_int32(0);
  for (idx = 0; idx < 24; idx++) {
    outC->_L38[idx] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
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
  /* _L44=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic1#1)/ */
  CAST_int_to_DMI_Dynamic1_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_Dynamic1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_Dynamic_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L44=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic1#1)/ */
  CAST_int_to_DMI_Dynamic1_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_Dynamic1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

