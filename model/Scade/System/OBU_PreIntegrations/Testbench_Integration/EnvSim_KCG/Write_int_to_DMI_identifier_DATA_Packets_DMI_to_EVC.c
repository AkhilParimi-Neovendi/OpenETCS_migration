/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier/ */
void Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC(
  /* dmi_identifier_int_in/ */
  DMI_Identifier_int_array_T_DATA *dmi_identifier_int_in,
  outC_Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC *outC)
{
  static DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg op_call;

  kcg_copy_DMI_Identifier_int_array_T_DATA(&outC->_L1, dmi_identifier_int_in);
  outC->_L279 = outC->_L1[0];
  outC->_L280 = kcg_lit_int32(1);
  outC->_L278 = outC->_L280 == outC->_L279;
  outC->every = outC->_L278;
  if (outC->every) {
    /* _L277=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier#1)/ */
    C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC(
      &outC->_L1,
      &outC->Context_C_int_to_DMI_identifier_1);
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &op_call,
      &outC->Context_C_int_to_DMI_identifier_1.dmi_identifier_ct_out);
  }
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L281,
    (DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *)
      &cDMI_Identifier_DATA_Packets_DMI_to_EVC);
  if (outC->every) {
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(&outC->_L277, &op_call);
  }
  else {
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L277,
      &outC->_L281);
  }
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->dmi_identifier_ct_out,
    &outC->_L277);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_identifier_init_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L281.valid = kcg_true;
  outC->_L281.systemTime = kcg_lit_int32(0);
  outC->_L281.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L281.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L281.l_name = kcg_lit_int32(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L281.DMI_name[idx] = ' ';
  }
  outC->_L281.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L278 = kcg_true;
  outC->_L279 = kcg_lit_int32(0);
  outC->_L280 = kcg_lit_int32(0);
  outC->_L277.valid = kcg_true;
  outC->_L277.systemTime = kcg_lit_int32(0);
  outC->_L277.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L277.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L277.l_name = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 255; idx1++) {
    outC->_L277.DMI_name[idx1] = ' ';
  }
  outC->_L277.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 261; idx2++) {
    outC->_L1[idx2] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  outC->dmi_identifier_ct_out.valid = kcg_true;
  outC->dmi_identifier_ct_out.systemTime = kcg_lit_int32(0);
  outC->dmi_identifier_ct_out.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->dmi_identifier_ct_out.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->dmi_identifier_ct_out.l_name = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 255; idx3++) {
    outC->dmi_identifier_ct_out.DMI_name[idx3] = ' ';
  }
  outC->dmi_identifier_ct_out.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  /* _L277=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier#1)/ */
  C_int_to_DMI_identifier_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_int_to_DMI_identifier_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_identifier_reset_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L277=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier#1)/ */
  C_int_to_DMI_identifier_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_int_to_DMI_identifier_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

