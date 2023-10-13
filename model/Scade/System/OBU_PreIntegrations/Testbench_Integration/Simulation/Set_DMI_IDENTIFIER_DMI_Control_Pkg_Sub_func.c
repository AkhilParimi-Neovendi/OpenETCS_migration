/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Set_DMI_IDENTIFIER/ */
void Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func(
  /* DMI_name/ */
  array_char_12 *DMI_name,
  /* SystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* valid/ */
  kcg_bool valid,
  outC_Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_size idx;
  static T_internal_Type_Obu_BasicTypes_Pkg noname;
  static L_TEXT _1_noname;
  static DMI_TEXT_DMI_Types_Pkg _2_noname;
  static kcg_bool _3_noname;

  outC->_L42 = valid;
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L25,
    (DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *)
      &DMI_identifier_const_DMI_Control_Pkg);
  outC->_L34 = outC->_L25.valid;
  _3_noname = outC->_L34;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L39, &outC->_L25.DMI_name);
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&_2_noname, &outC->_L39);
  outC->_L38 = outC->_L25.l_name;
  _1_noname = outC->_L38;
  outC->_L35 = outC->_L25.systemTime;
  noname = outC->_L35;
  outC->_L24 = SystemTime;
  outC->_L36 = outC->_L25.DMI_Identifier;
  outC->_L37 = outC->_L25.Cabin_Identifier;
  outC->_L41 = Dim_DMI_name_DMI_Control_Pkg;
  outC->_L6 = ' ';
  /* _L5/ */
  for (idx = 0; idx < 243; idx++) {
    outC->_L5[idx] = outC->_L6;
  }
  kcg_copy_array_char_12(&outC->_L7, DMI_name);
  kcg_copy_array_char_12(&outC->_L4[0], &outC->_L7);
  kcg_copy_array_char_243(&outC->_L4[12], &outC->_L5);
  outC->_L40 = outC->_L25.m_version;
  outC->_L23.valid = outC->_L42;
  outC->_L23.systemTime = outC->_L24;
  outC->_L23.DMI_Identifier = outC->_L36;
  outC->_L23.Cabin_Identifier = outC->_L37;
  outC->_L23.l_name = outC->_L41;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L23.DMI_name, &outC->_L4);
  outC->_L23.m_version = outC->_L40;
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->dmi_identifier_packet,
    &outC->_L23);
}

#ifndef KCG_USER_DEFINED_INIT
void Set_DMI_IDENTIFIER_init_DMI_Control_Pkg_Sub_func(
  outC_Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  outC->_L42 = kcg_true;
  outC->_L41 = kcg_lit_int64(0);
  outC->_L34 = kcg_true;
  outC->_L35 = kcg_lit_int64(0);
  outC->_L36 = DMI_1_DMI_Types_Pkg;
  outC->_L37 = cabin_A_DMI_Types_Pkg;
  outC->_L38 = kcg_lit_int64(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L39[idx] = ' ';
  }
  outC->_L40 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L25.valid = kcg_true;
  outC->_L25.systemTime = kcg_lit_int64(0);
  outC->_L25.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L25.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L25.l_name = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 255; idx1++) {
    outC->_L25.DMI_name[idx1] = ' ';
  }
  outC->_L25.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L24 = kcg_lit_int64(0);
  outC->_L23.valid = kcg_true;
  outC->_L23.systemTime = kcg_lit_int64(0);
  outC->_L23.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L23.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L23.l_name = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 255; idx2++) {
    outC->_L23.DMI_name[idx2] = ' ';
  }
  outC->_L23.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx3 = 0; idx3 < 12; idx3++) {
    outC->_L7[idx3] = ' ';
  }
  outC->_L6 = ' ';
  for (idx4 = 0; idx4 < 243; idx4++) {
    outC->_L5[idx4] = ' ';
  }
  for (idx5 = 0; idx5 < 255; idx5++) {
    outC->_L4[idx5] = ' ';
  }
  outC->dmi_identifier_packet.valid = kcg_true;
  outC->dmi_identifier_packet.systemTime = kcg_lit_int64(0);
  outC->dmi_identifier_packet.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->dmi_identifier_packet.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->dmi_identifier_packet.l_name = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 255; idx6++) {
    outC->dmi_identifier_packet.DMI_name[idx6] = ' ';
  }
  outC->dmi_identifier_packet.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Set_DMI_IDENTIFIER_reset_DMI_Control_Pkg_Sub_func(
  outC_Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

