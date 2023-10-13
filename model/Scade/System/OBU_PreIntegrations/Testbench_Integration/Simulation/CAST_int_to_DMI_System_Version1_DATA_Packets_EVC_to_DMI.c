/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_System_Version1_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_System_Version1/ */
void CAST_int_to_DMI_System_Version1_DATA_Packets_EVC_to_DMI(
  /* dmi_system_version_int/ */
  DMI_System_Version_int_array_T_DATA *dmi_system_version_int,
  outC_CAST_int_to_DMI_System_Version1_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_copy_DMI_System_Version_int_array_T_DATA(
    &outC->_L9,
    dmi_system_version_int);
  outC->_L3 = outC->_L9[2];
  /* _L7=(TM_conversions::CAST_Int_to_M_VERSION#1)/ */
  CAST_Int_to_M_VERSION_TM_conversions(
    outC->_L3,
    &outC->Context_CAST_Int_to_M_VERSION_1);
  outC->_L7 = outC->Context_CAST_Int_to_M_VERSION_1.m_version;
  outC->_L5 = outC->_L9[0];
  /* _L6=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L5, &outC->Context_Int_to_Bool_1);
  outC->_L6 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L4 = outC->_L9[1];
  outC->_L2.valid = outC->_L6;
  outC->_L2.system_clock = outC->_L4;
  outC->_L2.system_version = outC->_L7;
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_system_version_ct,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_System_Version1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_System_Version1_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 3; idx++) {
    outC->_L9[idx] = kcg_lit_int64(0);
  }
  outC->_L7 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6 = kcg_true;
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.system_clock = kcg_lit_int64(0);
  outC->_L2.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->dmi_system_version_ct.valid = kcg_true;
  outC->dmi_system_version_ct.system_clock = kcg_lit_int64(0);
  outC->dmi_system_version_ct.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  /* _L6=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L7=(TM_conversions::CAST_Int_to_M_VERSION#1)/ */
  CAST_Int_to_M_VERSION_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_VERSION_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_System_Version1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_System_Version1_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L6=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L7=(TM_conversions::CAST_Int_to_M_VERSION#1)/ */
  CAST_Int_to_M_VERSION_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_VERSION_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_System_Version1_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

