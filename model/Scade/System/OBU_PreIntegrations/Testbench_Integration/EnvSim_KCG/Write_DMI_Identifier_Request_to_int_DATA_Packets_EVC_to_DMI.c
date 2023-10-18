/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Identifier_Request_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_DMI_Identifier_Request_to_int/ */
void Write_DMI_Identifier_Request_to_int_DATA_Packets_EVC_to_DMI(
  /* dmi_id_ct/ */
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_id_ct,
  outC_Write_DMI_Identifier_Request_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  static DMI_Identifier_Request_int_array_T_DATA op_call;

  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    dmi_id_ct);
  outC->_L20 = outC->_L1.valid;
  outC->every = outC->_L20;
  if (outC->every) {
    /* _L18=(DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int1#1)/ */
    CAST_DMI_Identifier_Request_to_int1_DATA_Packets_EVC_to_DMI(
      &outC->_L1,
      &outC->Context_CAST_DMI_Identifier_Request_to_int1_1);
    kcg_copy_DMI_Identifier_Request_int_array_T_DATA(
      &op_call,
      &outC->Context_CAST_DMI_Identifier_Request_to_int1_1.dmi_id_int);
  }
  kcg_copy_DMI_Identifier_Request_int_array_T_DATA(
    &outC->_L19,
    (DMI_Identifier_Request_int_array_T_DATA *)
      &cDMI_Identifier_Request_int_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_Identifier_Request_int_array_T_DATA(&outC->_L18, &op_call);
  }
  else {
    kcg_copy_DMI_Identifier_Request_int_array_T_DATA(&outC->_L18, &outC->_L19);
  }
  kcg_copy_DMI_Identifier_Request_int_array_T_DATA(
    &outC->dmi_id_int,
    &outC->_L18);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_Identifier_Request_to_int_init_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_Identifier_Request_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L20 = kcg_true;
  for (idx = 0; idx < 261; idx++) {
    outC->_L19[idx] = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 261; idx1++) {
    outC->_L18[idx1] = kcg_lit_int64(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = kcg_lit_int64(0);
  outC->_L1.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.l_name = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 255; idx2++) {
    outC->_L1.x_name[idx2] = ' ';
  }
  outC->_L1.l_extra = kcg_lit_int64(0);
  outC->every = kcg_true;
  for (idx3 = 0; idx3 < 261; idx3++) {
    outC->dmi_id_int[idx3] = kcg_lit_int64(0);
  }
  /* _L18=(DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int1#1)/ */
  CAST_DMI_Identifier_Request_to_int1_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_Identifier_Request_to_int1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_Identifier_Request_to_int_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_Identifier_Request_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L18=(DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int1#1)/ */
  CAST_DMI_Identifier_Request_to_int1_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_Identifier_Request_to_int1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_Identifier_Request_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

