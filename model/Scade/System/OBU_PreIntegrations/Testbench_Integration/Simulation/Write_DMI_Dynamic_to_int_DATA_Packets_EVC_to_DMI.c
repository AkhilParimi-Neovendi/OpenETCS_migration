/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Dynamic_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_DMI_Dynamic_to_int/ */
void Write_DMI_Dynamic_to_int_DATA_Packets_EVC_to_DMI(
  /* dmi_dynamic_ct/ */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_dynamic_ct,
  outC_Write_DMI_Dynamic_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  static DMI_Dynamic_int_array_T_DATA op_call;

  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L1, dmi_dynamic_ct);
  outC->_L39 = outC->_L1.valid;
  outC->every = outC->_L39;
  if (outC->every) {
    /* _L37=(DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int1#1)/ */
    CAST_DMI_Dynamic_to_int1_DATA_Packets_EVC_to_DMI(
      &outC->_L1,
      &outC->Context_CAST_DMI_Dynamic_to_int1_1);
    kcg_copy_DMI_Dynamic_int_array_T_DATA(
      &op_call,
      &outC->Context_CAST_DMI_Dynamic_to_int1_1.dmi_dynamic_int);
  }
  kcg_copy_DMI_Dynamic_int_array_T_DATA(
    &outC->_L38,
    (DMI_Dynamic_int_array_T_DATA *) &cDMI_Dynamic_int_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_Dynamic_int_array_T_DATA(&outC->_L37, &op_call);
  }
  else {
    kcg_copy_DMI_Dynamic_int_array_T_DATA(&outC->_L37, &outC->_L38);
  }
  kcg_copy_DMI_Dynamic_int_array_T_DATA(&outC->dmi_dynamic_int, &outC->_L37);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_Dynamic_to_int_init_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_Dynamic_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L39 = kcg_true;
  for (idx = 0; idx < 24; idx++) {
    outC->_L38[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 24; idx1++) {
    outC->_L37[idx1] = kcg_lit_int32(0);
  }
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
  outC->every = kcg_true;
  for (idx2 = 0; idx2 < 24; idx2++) {
    outC->dmi_dynamic_int[idx2] = kcg_lit_int32(0);
  }
  /* _L37=(DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int1#1)/ */
  CAST_DMI_Dynamic_to_int1_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_Dynamic_to_int1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_Dynamic_to_int_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_Dynamic_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L37=(DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int1#1)/ */
  CAST_DMI_Dynamic_to_int1_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_Dynamic_to_int1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_Dynamic_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

