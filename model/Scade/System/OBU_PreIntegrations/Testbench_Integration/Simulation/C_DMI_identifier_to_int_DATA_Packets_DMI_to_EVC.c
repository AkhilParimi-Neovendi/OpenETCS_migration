/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int/ */
void C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC(
  /* dmi_identifier_ct/ */
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_identifier_ct,
  outC_C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  static array_int32_260 tmp;

  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L40,
    dmi_identifier_ct);
  outC->_L3 = outC->_L40.m_version;
  /* _L13=(TM_conversions::CAST_M_VERSION_to_int#1)/ */
  CAST_M_VERSION_to_int_TM_conversions(
    outC->_L3,
    &outC->Context_CAST_M_VERSION_to_int_1);
  outC->_L13 = outC->Context_CAST_M_VERSION_to_int_1.m_version_int;
  outC->_L28[0] = outC->_L13;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L4, &outC->_L40.DMI_name);
  /* _L23=(DATA::Variables::CAST_DMI_TEXT_to_int#1)/ */
  CAST_DMI_TEXT_to_int_DATA_Variables(
    &outC->_L4,
    &outC->Context_CAST_DMI_TEXT_to_int_1);
  kcg_copy_DMI_TEXT_INT_Array_T_DATA(
    &outC->_L23,
    &outC->Context_CAST_DMI_TEXT_to_int_1.dmi_text_int_array_out);
  outC->_L9 = outC->_L40.valid;
  /* _L36=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L9, &outC->Context_Bool_to_Int_1);
  outC->_L36 = outC->Context_Bool_to_Int_1.int_out;
  outC->_L8 = outC->_L40.systemTime;
  outC->_L7 = outC->_L40.DMI_Identifier;
  /* _L22=(DATA::Variables::CAST_DMI_DMI_identifier_to_int#1)/ */
  CAST_DMI_DMI_identifier_to_int_DATA_Variables(
    outC->_L7,
    &outC->Context_CAST_DMI_DMI_identifier_to_int_1);
  outC->_L22 =
    outC->Context_CAST_DMI_DMI_identifier_to_int_1.dmi_dmi_identifier_int;
  outC->_L6 = outC->_L40.Cabin_Identifier;
  /* _L24=(DATA::Variables::CAST_DMI_Cabin_identifier_to_int#1)/ */
  CAST_DMI_Cabin_identifier_to_int_DATA_Variables(
    outC->_L6,
    &outC->Context_CAST_DMI_Cabin_identifier_to_int_1);
  outC->_L24 =
    outC->Context_CAST_DMI_Cabin_identifier_to_int_1.dmi_cabin_identifier_int;
  outC->_L5 = outC->_L40.l_name;
  outC->_L32[0] = outC->_L36;
  outC->_L32[1] = outC->_L8;
  outC->_L32[2] = outC->_L22;
  outC->_L32[3] = outC->_L24;
  outC->_L32[4] = outC->_L5;
  kcg_copy_array_int32_5(&tmp[0], &outC->_L32);
  kcg_copy_DMI_TEXT_INT_Array_T_DATA(&tmp[5], &outC->_L23);
  kcg_copy_array_int32_260(&outC->_L39[0], &tmp);
  outC->_L39[260] = outC->_L28[0];
  kcg_copy_DMI_Identifier_int_array_T_DATA(
    &outC->dmi_identifier_int,
    &outC->_L39);
}

#ifndef KCG_USER_DEFINED_INIT
void C_DMI_identifier_to_int_init_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  outC->_L40.valid = kcg_true;
  outC->_L40.systemTime = kcg_lit_int32(0);
  outC->_L40.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L40.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L40.l_name = kcg_lit_int32(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L40.DMI_name[idx] = ' ';
  }
  outC->_L40.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx1 = 0; idx1 < 261; idx1++) {
    outC->_L39[idx1] = kcg_lit_int32(0);
  }
  outC->_L36 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L32[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 1; idx3++) {
    outC->_L28[idx3] = kcg_lit_int32(0);
  }
  outC->_L24 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 255; idx4++) {
    outC->_L23[idx4] = kcg_lit_int32(0);
  }
  outC->_L22 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L3 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx5 = 0; idx5 < 255; idx5++) {
    outC->_L4[idx5] = ' ';
  }
  outC->_L5 = kcg_lit_int32(0);
  outC->_L6 = cabin_A_DMI_Types_Pkg;
  outC->_L7 = DMI_1_DMI_Types_Pkg;
  outC->_L8 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  for (idx6 = 0; idx6 < 261; idx6++) {
    outC->dmi_identifier_int[idx6] = kcg_lit_int32(0);
  }
  /* _L24=(DATA::Variables::CAST_DMI_Cabin_identifier_to_int#1)/ */
  CAST_DMI_Cabin_identifier_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_Cabin_identifier_to_int_1);
  /* _L22=(DATA::Variables::CAST_DMI_DMI_identifier_to_int#1)/ */
  CAST_DMI_DMI_identifier_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_DMI_identifier_to_int_1);
  /* _L36=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
  /* _L23=(DATA::Variables::CAST_DMI_TEXT_to_int#1)/ */
  CAST_DMI_TEXT_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_TEXT_to_int_1);
  /* _L13=(TM_conversions::CAST_M_VERSION_to_int#1)/ */
  CAST_M_VERSION_to_int_init_TM_conversions(
    &outC->Context_CAST_M_VERSION_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_DMI_identifier_to_int_reset_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L24=(DATA::Variables::CAST_DMI_Cabin_identifier_to_int#1)/ */
  CAST_DMI_Cabin_identifier_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_Cabin_identifier_to_int_1);
  /* _L22=(DATA::Variables::CAST_DMI_DMI_identifier_to_int#1)/ */
  CAST_DMI_DMI_identifier_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_DMI_identifier_to_int_1);
  /* _L36=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
  /* _L23=(DATA::Variables::CAST_DMI_TEXT_to_int#1)/ */
  CAST_DMI_TEXT_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_TEXT_to_int_1);
  /* _L13=(TM_conversions::CAST_M_VERSION_to_int#1)/ */
  CAST_M_VERSION_to_int_reset_TM_conversions(
    &outC->Context_CAST_M_VERSION_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

