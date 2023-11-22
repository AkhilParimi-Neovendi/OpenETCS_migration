/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier/ */
void C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC(
  /* dmi_identifier_int_in/ */
  DMI_Identifier_int_array_T_DATA *dmi_identifier_int_in,
  outC_C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC *outC)
{
  kcg_copy_DMI_Identifier_int_array_T_DATA(&outC->_L1, dmi_identifier_int_in);
  outC->_L276 = outC->_L1[4];
  outC->_L275 = outC->_L1[3];
  outC->_L274 = outC->_L1[2];
  outC->_L273 = outC->_L1[1];
  outC->_L272 = outC->_L1[0];
  outC->_L271 = outC->_L1[260];
  kcg_copy_DMI_TEXT_INT_Array_T_DATA(
    &outC->_L270,
    (DMI_TEXT_INT_Array_T_DATA *) &outC->_L1[5]);
  /* _L14=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L272, &outC->Context_Int_to_Bool_1);
  outC->_L14 = outC->Context_Int_to_Bool_1.bool_out;
  /* _L13=(TM_conversions::CAST_Int_to_M_VERSION#1)/ */
  CAST_Int_to_M_VERSION_TM_conversions(
    outC->_L271,
    &outC->Context_CAST_Int_to_M_VERSION_1);
  outC->_L13 = outC->Context_CAST_Int_to_M_VERSION_1.m_version;
  /* _L12=(DATA::Variables::CAST_int_to_DMI_TEXT#1)/ */
  CAST_int_to_DMI_TEXT_DATA_Variables(
    &outC->_L270,
    &outC->Context_CAST_int_to_DMI_TEXT_1);
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(
    &outC->_L12,
    &outC->Context_CAST_int_to_DMI_TEXT_1.dmi_text_string_out);
  /* _L11=(DATA::Variables::CAST_int_to_DMI_Cabin_identifier#1)/ */
  CAST_int_to_DMI_Cabin_ide_DATA_Variables(
    outC->_L275,
    &outC->Context_CAST_int_to_DMI_Cabin_identifier_1);
  outC->_L11 =
    outC->Context_CAST_int_to_DMI_Cabin_identifier_1.dmi_cabin_identifier_ct;
  /* _L10=(DATA::Variables::CAST_int_to_DMI_DMI_identifier#1)/ */
  CAST_int_to_DMI_DMI_ident_DATA_Variables(
    outC->_L274,
    &outC->Context_CAST_int_to_DMI_DMI_identifier_1);
  outC->_L10 =
    outC->Context_CAST_int_to_DMI_DMI_identifier_1.dmi_dmi_identifier_ct;
  outC->_L2.valid = outC->_L14;
  outC->_L2.systemTime = outC->_L273;
  outC->_L2.DMI_Identifier = outC->_L10;
  outC->_L2.Cabin_Identifier = outC->_L11;
  outC->_L2.l_name = outC->_L276;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L2.DMI_name, &outC->_L12);
  outC->_L2.m_version = outC->_L13;
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->dmi_identifier_ct_out,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_int_to_DMI_identifier_init_DATA_Packets_DMI_to_EVC(
  outC_C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;

  outC->_L276 = kcg_lit_int32(0);
  outC->_L275 = kcg_lit_int32(0);
  outC->_L274 = kcg_lit_int32(0);
  outC->_L273 = kcg_lit_int32(0);
  outC->_L272 = kcg_lit_int32(0);
  outC->_L271 = kcg_lit_int32(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L270[idx] = kcg_lit_int32(0);
  }
  outC->_L14 = kcg_true;
  outC->_L13 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx1 = 0; idx1 < 255; idx1++) {
    outC->_L12[idx1] = ' ';
  }
  outC->_L11 = cabin_A_DMI_Types_Pkg;
  outC->_L10 = DMI_1_DMI_Types_Pkg;
  outC->_L2.valid = kcg_true;
  outC->_L2.systemTime = kcg_lit_int32(0);
  outC->_L2.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L2.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L2.l_name = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 255; idx2++) {
    outC->_L2.DMI_name[idx2] = ' ';
  }
  outC->_L2.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx3 = 0; idx3 < 261; idx3++) {
    outC->_L1[idx3] = kcg_lit_int32(0);
  }
  outC->dmi_identifier_ct_out.valid = kcg_true;
  outC->dmi_identifier_ct_out.systemTime = kcg_lit_int32(0);
  outC->dmi_identifier_ct_out.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->dmi_identifier_ct_out.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->dmi_identifier_ct_out.l_name = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 255; idx4++) {
    outC->dmi_identifier_ct_out.DMI_name[idx4] = ' ';
  }
  outC->dmi_identifier_ct_out.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  /* _L10=(DATA::Variables::CAST_int_to_DMI_DMI_identifier#1)/ */
  CAST_int_to_DMI_DMI_ident_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_DMI_identifier_1);
  /* _L11=(DATA::Variables::CAST_int_to_DMI_Cabin_identifier#1)/ */
  CAST_int_to_DMI_Cabin_ide_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_Cabin_identifier_1);
  /* _L12=(DATA::Variables::CAST_int_to_DMI_TEXT#1)/ */
  CAST_int_to_DMI_TEXT_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_TEXT_1);
  /* _L13=(TM_conversions::CAST_Int_to_M_VERSION#1)/ */
  CAST_Int_to_M_VERSION_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_VERSION_1);
  /* _L14=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_int_to_DMI_identifier_reset_DATA_Packets_DMI_to_EVC(
  outC_C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L10=(DATA::Variables::CAST_int_to_DMI_DMI_identifier#1)/ */
  CAST_int_to_DMI_DMI_ident_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_DMI_identifier_1);
  /* _L11=(DATA::Variables::CAST_int_to_DMI_Cabin_identifier#1)/ */
  CAST_int_to_DMI_Cabin_ide_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_Cabin_identifier_1);
  /* _L12=(DATA::Variables::CAST_int_to_DMI_TEXT#1)/ */
  CAST_int_to_DMI_TEXT_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_TEXT_1);
  /* _L13=(TM_conversions::CAST_Int_to_M_VERSION#1)/ */
  CAST_Int_to_M_VERSION_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_VERSION_1);
  /* _L14=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

