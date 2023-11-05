/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_System_Version_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_System_Version/ */
void Write_int_to_DMI_System_Version_DATA_Packets_EVC_to_DMI(
  /* dmi_system_version_int/ */
  DMI_System_Version_int_array_T_DATA *dmi_system_version_int,
  outC_Write_int_to_DMI_System_Version_DATA_Packets_EVC_to_DMI *outC)
{
  static DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg op_call;

  kcg_copy_DMI_System_Version_int_array_T_DATA(
    &outC->_L9,
    dmi_system_version_int);
  outC->_L14 = outC->_L9[0];
  outC->_L12 = kcg_lit_int32(1);
  outC->_L13 = outC->_L12 == outC->_L14;
  outC->every = outC->_L13;
  if (outC->every) {
    /* _L10=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_System_Version1#1)/ */
    CAST_int_to_DMI_System_Version1_DATA_Packets_EVC_to_DMI(
      &outC->_L9,
      &outC->Context_CAST_int_to_DMI_System_Version1_1);
    kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
      &op_call,
      &outC->Context_CAST_int_to_DMI_System_Version1_1.dmi_system_version_ct);
  }
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L11,
    (DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cDMI_System_Version_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L10,
      &op_call);
  }
  else {
    kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L10,
      &outC->_L11);
  }
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_system_version_ct,
    &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_System_Version_init_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_System_Version_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;

  outC->_L12 = kcg_lit_int32(0);
  outC->_L13 = kcg_true;
  outC->_L14 = kcg_lit_int32(0);
  outC->_L11.valid = kcg_true;
  outC->_L11.system_clock = kcg_lit_int32(0);
  outC->_L11.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L10.valid = kcg_true;
  outC->_L10.system_clock = kcg_lit_int32(0);
  outC->_L10.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 3; idx++) {
    outC->_L9[idx] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  outC->dmi_system_version_ct.valid = kcg_true;
  outC->dmi_system_version_ct.system_clock = kcg_lit_int32(0);
  outC->dmi_system_version_ct.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  /* _L10=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_System_Version1#1)/ */
  CAST_int_to_DMI_System_Version1_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_System_Version1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_System_Version_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_System_Version_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L10=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_System_Version1#1)/ */
  CAST_int_to_DMI_System_Version1_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_System_Version1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_System_Version_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

