/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "synchWithDMI_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::synchWithDMI/ */
void synchWithDMI_manage_DMI_Output_Pkg(
  /* dmi_identifierRequest/ */
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_identifierRequest,
  /* TIU_TrainStatus/ */
  TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* outputStatus/ */
  dmiOutputs_T_manage_DMI_Output_Pkg *outputStatus,
  /* systemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_synchWithDMI_manage_DMI_Output_Pkg *outC)
{
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L22,
    (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cSendInitRequest_manage_DMI_Output_Pkg);
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L21,
    (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyInitRequest_manage_DMI_Output_Pkg);
  kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg(&outC->_L6, outputStatus);
  outC->_L10 = outC->_L6.NO_initrequestSent;
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L3, TIU_TrainStatus);
  outC->_L8 = outC->_L3.deskOpen;
  outC->_L7 = outC->_L3.valid;
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L2,
    dmi_identifierRequest);
  outC->_L4 = outC->_L2.valid;
  outC->_L12 = !outC->_L4;
  outC->_L9 = outC->_L12 & outC->_L7 & outC->_L8 & outC->_L10;
  outC->doSend = outC->_L9;
  outC->_L20 = outC->doSend;
  outC->_L19 = outC->doSend;
  kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg(&outC->_L18, &outC->_L6);
  if (kcg_true) {
    outC->_L18.NO_initrequestSent = outC->_L19;
  }
  outC->_L16 = systemTime;
  /* _L11= */
  if (outC->_L20) {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L11,
      &outC->_L22);
  }
  else {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L11,
      &outC->_L21);
  }
  /* _L5= */
  if (outC->_L4) {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L5,
      &outC->_L2);
  }
  else {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L5,
      &outC->_L11);
  }
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L15,
    &outC->_L5);
  if (kcg_true) {
    outC->_L15.system_clock = outC->_L16;
  }
  kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg(
    &outC->updatedOutputStatus,
    &outC->_L18);
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->send_dmi_identifierRequest,
    &outC->_L15);
}

#ifndef KCG_USER_DEFINED_INIT
void synchWithDMI_init_manage_DMI_Output_Pkg(
  outC_synchWithDMI_manage_DMI_Output_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  outC->_L22.valid = kcg_true;
  outC->_L22.system_clock = kcg_lit_int64(0);
  outC->_L22.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L22.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L22.l_name = kcg_lit_int64(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L22.x_name[idx] = ' ';
  }
  outC->_L22.l_extra = kcg_lit_int64(0);
  outC->_L21.valid = kcg_true;
  outC->_L21.system_clock = kcg_lit_int64(0);
  outC->_L21.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L21.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L21.l_name = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 255; idx1++) {
    outC->_L21.x_name[idx1] = ' ';
  }
  outC->_L21.l_extra = kcg_lit_int64(0);
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18.NO_initrequestSent = kcg_true;
  outC->_L18.secondValidationRequested = kcg_true;
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15.valid = kcg_true;
  outC->_L15.system_clock = kcg_lit_int64(0);
  outC->_L15.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L15.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L15.l_name = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 255; idx2++) {
    outC->_L15.x_name[idx2] = ' ';
  }
  outC->_L15.l_extra = kcg_lit_int64(0);
  outC->_L12 = kcg_true;
  outC->_L11.valid = kcg_true;
  outC->_L11.system_clock = kcg_lit_int64(0);
  outC->_L11.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11.l_name = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 255; idx3++) {
    outC->_L11.x_name[idx3] = ' ';
  }
  outC->_L11.l_extra = kcg_lit_int64(0);
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6.NO_initrequestSent = kcg_true;
  outC->_L6.secondValidationRequested = kcg_true;
  outC->_L5.valid = kcg_true;
  outC->_L5.system_clock = kcg_lit_int64(0);
  outC->_L5.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.l_name = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 255; idx4++) {
    outC->_L5.x_name[idx4] = ' ';
  }
  outC->_L5.l_extra = kcg_lit_int64(0);
  outC->_L4 = kcg_true;
  outC->_L3.valid = kcg_true;
  outC->_L3.deskOpen = kcg_true;
  outC->_L3.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L3.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L2.valid = kcg_true;
  outC->_L2.system_clock = kcg_lit_int64(0);
  outC->_L2.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.l_name = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 255; idx5++) {
    outC->_L2.x_name[idx5] = ' ';
  }
  outC->_L2.l_extra = kcg_lit_int64(0);
  outC->doSend = kcg_true;
  outC->updatedOutputStatus.NO_initrequestSent = kcg_true;
  outC->updatedOutputStatus.secondValidationRequested = kcg_true;
  outC->send_dmi_identifierRequest.valid = kcg_true;
  outC->send_dmi_identifierRequest.system_clock = kcg_lit_int64(0);
  outC->send_dmi_identifierRequest.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->send_dmi_identifierRequest.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->send_dmi_identifierRequest.l_name = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 255; idx6++) {
    outC->send_dmi_identifierRequest.x_name[idx6] = ' ';
  }
  outC->send_dmi_identifierRequest.l_extra = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void synchWithDMI_reset_manage_DMI_Output_Pkg(
  outC_synchWithDMI_manage_DMI_Output_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** synchWithDMI_manage_DMI_Output_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

