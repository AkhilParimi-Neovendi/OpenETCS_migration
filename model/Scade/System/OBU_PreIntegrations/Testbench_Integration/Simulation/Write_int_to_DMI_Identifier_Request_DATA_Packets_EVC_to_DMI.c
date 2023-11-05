/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Identifier_Request/ */
void Write_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI(
  /* dmi_id_int/ */
  DMI_Identifier_Request_int_array_T_DATA *dmi_id_int,
  outC_Write_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI *outC)
{
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg op_call;

  kcg_copy_DMI_Identifier_Request_int_array_T_DATA(&outC->_L20, dmi_id_int);
  outC->_L38 = outC->_L20[0];
  outC->_L36 = kcg_lit_int32(1);
  outC->_L37 = outC->_L36 == outC->_L38;
  outC->every = outC->_L37;
  if (outC->every) {
    /* _L35=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request1#1)/ */
    CAST_int_to_DMI_Identifier_Request1_DATA_Packets_EVC_to_DMI(
      &outC->_L20,
      &outC->Context_CAST_int_to_DMI_Identifier_Request1_1);
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &op_call,
      &outC->Context_CAST_int_to_DMI_Identifier_Request1_1.dmi_id_ct);
  }
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L39,
    (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cDMI_Identifier_Request_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L35,
      &op_call);
  }
  else {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L35,
      &outC->_L39);
  }
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_id_ct,
    &outC->_L35);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_Identifier_Request_init_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L39.valid = kcg_true;
  outC->_L39.system_clock = kcg_lit_int32(0);
  outC->_L39.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L39.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L39.l_name = kcg_lit_int32(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L39.x_name[idx] = ' ';
  }
  outC->_L39.l_extra = kcg_lit_int32(0);
  outC->_L36 = kcg_lit_int32(0);
  outC->_L37 = kcg_true;
  outC->_L38 = kcg_lit_int32(0);
  outC->_L35.valid = kcg_true;
  outC->_L35.system_clock = kcg_lit_int32(0);
  outC->_L35.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L35.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L35.l_name = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 255; idx1++) {
    outC->_L35.x_name[idx1] = ' ';
  }
  outC->_L35.l_extra = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 261; idx2++) {
    outC->_L20[idx2] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  outC->dmi_id_ct.valid = kcg_true;
  outC->dmi_id_ct.system_clock = kcg_lit_int32(0);
  outC->dmi_id_ct.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->dmi_id_ct.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->dmi_id_ct.l_name = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 255; idx3++) {
    outC->dmi_id_ct.x_name[idx3] = ' ';
  }
  outC->dmi_id_ct.l_extra = kcg_lit_int32(0);
  /* _L35=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request1#1)/ */
  CAST_int_to_DMI_Identifier_Request1_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_Identifier_Request1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_Identifier_Request_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L35=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request1#1)/ */
  CAST_int_to_DMI_Identifier_Request1_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_Identifier_Request1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

