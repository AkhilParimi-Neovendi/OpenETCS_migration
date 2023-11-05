/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Identifier_Request1_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request1/ */
void CAST_int_to_DMI_Identifier_Request1_DATA_Packets_EVC_to_DMI(
  /* dmi_id_int/ */
  DMI_Identifier_Request_int_array_T_DATA *dmi_id_int,
  outC_CAST_int_to_DMI_Identifier_Request1_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_copy_DMI_Identifier_Request_int_array_T_DATA(&outC->_L20, dmi_id_int);
  outC->_L34 = outC->_L20[260];
  kcg_copy_DMI_TEXT_INT_Array_T_DATA(
    &outC->_L32,
    (DMI_TEXT_INT_Array_T_DATA *) &outC->_L20[5]);
  /* _L33=(DATA::Variables::CAST_int_to_DMI_TEXT#1)/ */
  CAST_int_to_DMI_TEXT_DATA_Variables(
    &outC->_L32,
    &outC->Context_CAST_int_to_DMI_TEXT_1);
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(
    &outC->_L33,
    &outC->Context_CAST_int_to_DMI_TEXT_1.dmi_text_string_out);
  kcg_copy_array_int32_5(&outC->_L21, (array_int32_5 *) &outC->_L20[0]);
  outC->_L24 = outC->_L21[4];
  /* _L31=(TM_conversions::CAST_Int_to_L_TEXT#1)/ */
  CAST_Int_to_L_TEXT_TM_conversions(
    outC->_L24,
    &outC->Context_CAST_Int_to_L_TEXT_1);
  outC->_L31 = outC->Context_CAST_Int_to_L_TEXT_1.l_text;
  outC->_L25 = outC->_L21[3];
  /* _L30=(TM_conversions::CAST_Int_to_M_VERSION#2)/ */
  CAST_Int_to_M_VERSION_TM_conversions(
    outC->_L25,
    &outC->Context_CAST_Int_to_M_VERSION_2);
  outC->_L30 = outC->Context_CAST_Int_to_M_VERSION_2.m_version;
  outC->_L26 = outC->_L21[2];
  /* _L29=(TM_conversions::CAST_Int_to_M_VERSION#1)/ */
  CAST_Int_to_M_VERSION_TM_conversions(
    outC->_L26,
    &outC->Context_CAST_Int_to_M_VERSION_1);
  outC->_L29 = outC->Context_CAST_Int_to_M_VERSION_1.m_version;
  outC->_L28 = outC->_L21[0];
  outC->_L27 = outC->_L21[1];
  /* _L22=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L28, &outC->Context_Int_to_Bool_1);
  outC->_L22 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L19.valid = outC->_L22;
  outC->_L19.system_clock = outC->_L27;
  outC->_L19.ERTMS_Version = outC->_L29;
  outC->_L19.EVC_Version = outC->_L30;
  outC->_L19.l_name = outC->_L31;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L19.x_name, &outC->_L33);
  outC->_L19.l_extra = outC->_L34;
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_id_ct,
    &outC->_L19);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_Identifier_Request1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Identifier_Request1_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L34 = kcg_lit_int32(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L33[idx] = ' ';
  }
  for (idx1 = 0; idx1 < 255; idx1++) {
    outC->_L32[idx1] = kcg_lit_int32(0);
  }
  outC->_L31 = kcg_lit_int32(0);
  outC->_L30 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L24 = kcg_lit_int32(0);
  outC->_L25 = kcg_lit_int32(0);
  outC->_L26 = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  outC->_L28 = kcg_lit_int32(0);
  outC->_L22 = kcg_true;
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L21[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 261; idx3++) {
    outC->_L20[idx3] = kcg_lit_int32(0);
  }
  outC->_L19.valid = kcg_true;
  outC->_L19.system_clock = kcg_lit_int32(0);
  outC->_L19.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19.l_name = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 255; idx4++) {
    outC->_L19.x_name[idx4] = ' ';
  }
  outC->_L19.l_extra = kcg_lit_int32(0);
  outC->dmi_id_ct.valid = kcg_true;
  outC->dmi_id_ct.system_clock = kcg_lit_int32(0);
  outC->dmi_id_ct.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->dmi_id_ct.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->dmi_id_ct.l_name = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 255; idx5++) {
    outC->dmi_id_ct.x_name[idx5] = ' ';
  }
  outC->dmi_id_ct.l_extra = kcg_lit_int32(0);
  /* _L22=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L29=(TM_conversions::CAST_Int_to_M_VERSION#1)/ */
  CAST_Int_to_M_VERSION_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_VERSION_1);
  /* _L30=(TM_conversions::CAST_Int_to_M_VERSION#2)/ */
  CAST_Int_to_M_VERSION_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_VERSION_2);
  /* _L31=(TM_conversions::CAST_Int_to_L_TEXT#1)/ */
  CAST_Int_to_L_TEXT_init_TM_conversions(&outC->Context_CAST_Int_to_L_TEXT_1);
  /* _L33=(DATA::Variables::CAST_int_to_DMI_TEXT#1)/ */
  CAST_int_to_DMI_TEXT_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_TEXT_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_Identifier_Request1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Identifier_Request1_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L22=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L29=(TM_conversions::CAST_Int_to_M_VERSION#1)/ */
  CAST_Int_to_M_VERSION_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_VERSION_1);
  /* _L30=(TM_conversions::CAST_Int_to_M_VERSION#2)/ */
  CAST_Int_to_M_VERSION_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_VERSION_2);
  /* _L31=(TM_conversions::CAST_Int_to_L_TEXT#1)/ */
  CAST_Int_to_L_TEXT_reset_TM_conversions(&outC->Context_CAST_Int_to_L_TEXT_1);
  /* _L33=(DATA::Variables::CAST_int_to_DMI_TEXT#1)/ */
  CAST_int_to_DMI_TEXT_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_TEXT_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_Identifier_Request1_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

