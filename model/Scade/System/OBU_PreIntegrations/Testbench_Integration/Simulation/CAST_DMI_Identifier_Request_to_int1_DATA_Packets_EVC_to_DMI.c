/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Identifier_Request_to_int1_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int1/ */
void CAST_DMI_Identifier_Request_to_int1_DATA_Packets_EVC_to_DMI(
  /* dmi_id_ct/ */
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_id_ct,
  outC_CAST_DMI_Identifier_Request_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  static array_int64_260 tmp;

  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    dmi_id_ct);
  outC->_L2 = outC->_L1.l_extra;
  /* _L14=(TM_conversions::CAST_L_TEXT_to_int#2)/ */
  CAST_L_TEXT_to_int_TM_conversions(
    outC->_L2,
    &outC->Context_CAST_L_TEXT_to_int_2);
  outC->_L14 = outC->Context_CAST_L_TEXT_to_int_2.l_text_int;
  outC->_L16[0] = outC->_L14;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L3, &outC->_L1.x_name);
  /* _L15=(DATA::Variables::CAST_DMI_TEXT_to_int#1)/ */
  CAST_DMI_TEXT_to_int_DATA_Variables(
    &outC->_L3,
    &outC->Context_CAST_DMI_TEXT_to_int_1);
  kcg_copy_DMI_TEXT_INT_Array_T_DATA(
    &outC->_L15,
    &outC->Context_CAST_DMI_TEXT_to_int_1.dmi_text_int_array_out);
  outC->_L8 = outC->_L1.valid;
  /* _L10=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L8, &outC->Context_Bool_to_Int_1);
  outC->_L10 = outC->Context_Bool_to_Int_1.int_out;
  outC->_L7 = outC->_L1.system_clock;
  outC->_L6 = outC->_L1.ERTMS_Version;
  /* _L11=(TM_conversions::CAST_M_VERSION_to_int#1)/ */
  CAST_M_VERSION_to_int_TM_conversions(
    outC->_L6,
    &outC->Context_CAST_M_VERSION_to_int_1);
  outC->_L11 = outC->Context_CAST_M_VERSION_to_int_1.m_version_int;
  outC->_L5 = outC->_L1.EVC_Version;
  /* _L12=(TM_conversions::CAST_M_VERSION_to_int#2)/ */
  CAST_M_VERSION_to_int_TM_conversions(
    outC->_L5,
    &outC->Context_CAST_M_VERSION_to_int_2);
  outC->_L12 = outC->Context_CAST_M_VERSION_to_int_2.m_version_int;
  outC->_L4 = outC->_L1.l_name;
  /* _L13=(TM_conversions::CAST_L_TEXT_to_int#1)/ */
  CAST_L_TEXT_to_int_TM_conversions(
    outC->_L4,
    &outC->Context_CAST_L_TEXT_to_int_1);
  outC->_L13 = outC->Context_CAST_L_TEXT_to_int_1.l_text_int;
  outC->_L9[0] = outC->_L10;
  outC->_L9[1] = outC->_L7;
  outC->_L9[2] = outC->_L11;
  outC->_L9[3] = outC->_L12;
  outC->_L9[4] = outC->_L13;
  kcg_copy_array_int64_5(&tmp[0], &outC->_L9);
  kcg_copy_DMI_TEXT_INT_Array_T_DATA(&tmp[5], &outC->_L15);
  kcg_copy_array_int64_260(&outC->_L17[0], &tmp);
  outC->_L17[260] = outC->_L16[0];
  kcg_copy_DMI_Identifier_Request_int_array_T_DATA(
    &outC->dmi_id_int,
    &outC->_L17);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_Identifier_Request_to_int1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Identifier_Request_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  for (idx = 0; idx < 261; idx++) {
    outC->_L17[idx] = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L16[idx1] = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 255; idx2++) {
    outC->_L15[idx2] = kcg_lit_int64(0);
  }
  outC->_L14 = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L9[idx3] = kcg_lit_int64(0);
  }
  outC->_L2 = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 255; idx4++) {
    outC->_L3[idx4] = ' ';
  }
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7 = kcg_lit_int64(0);
  outC->_L8 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = kcg_lit_int64(0);
  outC->_L1.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.l_name = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 255; idx5++) {
    outC->_L1.x_name[idx5] = ' ';
  }
  outC->_L1.l_extra = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 261; idx6++) {
    outC->dmi_id_int[idx6] = kcg_lit_int64(0);
  }
  /* _L13=(TM_conversions::CAST_L_TEXT_to_int#1)/ */
  CAST_L_TEXT_to_int_init_TM_conversions(&outC->Context_CAST_L_TEXT_to_int_1);
  /* _L12=(TM_conversions::CAST_M_VERSION_to_int#2)/ */
  CAST_M_VERSION_to_int_init_TM_conversions(
    &outC->Context_CAST_M_VERSION_to_int_2);
  /* _L11=(TM_conversions::CAST_M_VERSION_to_int#1)/ */
  CAST_M_VERSION_to_int_init_TM_conversions(
    &outC->Context_CAST_M_VERSION_to_int_1);
  /* _L10=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
  /* _L15=(DATA::Variables::CAST_DMI_TEXT_to_int#1)/ */
  CAST_DMI_TEXT_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_TEXT_to_int_1);
  /* _L14=(TM_conversions::CAST_L_TEXT_to_int#2)/ */
  CAST_L_TEXT_to_int_init_TM_conversions(&outC->Context_CAST_L_TEXT_to_int_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_Identifier_Request_to_int1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Identifier_Request_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L13=(TM_conversions::CAST_L_TEXT_to_int#1)/ */
  CAST_L_TEXT_to_int_reset_TM_conversions(&outC->Context_CAST_L_TEXT_to_int_1);
  /* _L12=(TM_conversions::CAST_M_VERSION_to_int#2)/ */
  CAST_M_VERSION_to_int_reset_TM_conversions(
    &outC->Context_CAST_M_VERSION_to_int_2);
  /* _L11=(TM_conversions::CAST_M_VERSION_to_int#1)/ */
  CAST_M_VERSION_to_int_reset_TM_conversions(
    &outC->Context_CAST_M_VERSION_to_int_1);
  /* _L10=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
  /* _L15=(DATA::Variables::CAST_DMI_TEXT_to_int#1)/ */
  CAST_DMI_TEXT_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_TEXT_to_int_1);
  /* _L14=(TM_conversions::CAST_L_TEXT_to_int#2)/ */
  CAST_L_TEXT_to_int_reset_TM_conversions(&outC->Context_CAST_L_TEXT_to_int_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_Identifier_Request_to_int1_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

