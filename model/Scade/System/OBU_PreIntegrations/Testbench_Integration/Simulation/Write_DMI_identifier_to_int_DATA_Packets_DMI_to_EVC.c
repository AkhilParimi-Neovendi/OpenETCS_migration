/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_DMI_identifier_to_int/ */
void Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC(
  /* dmi_identifier_ct/ */
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_identifier_ct,
  outC_Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  static DMI_Identifier_int_array_T_DATA op_call;

  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L25,
    dmi_identifier_ct);
  outC->_L38 = outC->_L25.valid;
  outC->every = outC->_L38;
  if (outC->every) {
    /* _L37=(DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int#1)/ */
    C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC(
      &outC->_L25,
      &outC->Context_C_DMI_identifier_to_int_1);
    kcg_copy_DMI_Identifier_int_array_T_DATA(
      &op_call,
      &outC->Context_C_DMI_identifier_to_int_1.dmi_identifier_int);
  }
  kcg_copy_DMI_Identifier_int_array_T_DATA(
    &outC->_L39,
    (DMI_Identifier_int_array_T_DATA *)
      &cDMI_Identifier_int_array_DATA_Packets_DMI_to_EVC);
  if (outC->every) {
    kcg_copy_DMI_Identifier_int_array_T_DATA(&outC->_L37, &op_call);
  }
  else {
    kcg_copy_DMI_Identifier_int_array_T_DATA(&outC->_L37, &outC->_L39);
  }
  kcg_copy_DMI_Identifier_int_array_T_DATA(
    &outC->dmi_identifier_int,
    &outC->_L37);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_identifier_to_int_init_DATA_Packets_DMI_to_EVC(
  outC_Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  for (idx = 0; idx < 261; idx++) {
    outC->_L39[idx] = kcg_lit_int32(0);
  }
  outC->_L38 = kcg_true;
  for (idx1 = 0; idx1 < 261; idx1++) {
    outC->_L37[idx1] = kcg_lit_int32(0);
  }
  outC->_L25.valid = kcg_true;
  outC->_L25.systemTime = kcg_lit_int32(0);
  outC->_L25.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L25.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L25.l_name = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 255; idx2++) {
    outC->_L25.DMI_name[idx2] = ' ';
  }
  outC->_L25.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->every = kcg_true;
  for (idx3 = 0; idx3 < 261; idx3++) {
    outC->dmi_identifier_int[idx3] = kcg_lit_int32(0);
  }
  /* _L37=(DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int#1)/ */
  C_DMI_identifier_to_int_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_DMI_identifier_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_identifier_to_int_reset_DATA_Packets_DMI_to_EVC(
  outC_Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L37=(DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int#1)/ */
  C_DMI_identifier_to_int_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_DMI_identifier_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

