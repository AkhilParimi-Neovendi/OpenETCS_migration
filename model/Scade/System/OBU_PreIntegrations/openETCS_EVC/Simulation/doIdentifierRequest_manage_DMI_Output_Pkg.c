/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "doIdentifierRequest_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::doIdentifierRequest/ */
void doIdentifierRequest_manage_DMI_Output_Pkg(
  /* TIU_TrainStatus/ */
  TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* ownVersion/ */
  M_VERSION ownVersion,
  outC_doIdentifierRequest_manage_DMI_Output_Pkg *outC)
{
  /* identifierRequest/ */
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg identifierRequest_partial;
  /* identifierRequest/ */
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _1_identifierRequest_partial;

  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L3, TIU_TrainStatus);
  outC->_L2 = outC->_L3.deskOpen;
  outC->isStarted = outC->_L2;
  outC->IfBlock1_clock = outC->isStarted;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L7_then_IfBlock1,
      (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cEmptyIdentifierRequest_manage_DMI_Output_Pkg);
    outC->_L8_then_IfBlock1 = ownVersion;
    outC->_L6_then_IfBlock1 = ownVersion;
    outC->_L3_then_IfBlock1 = inSystemTime;
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L1_then_IfBlock1,
      (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cEVCIdentifierRequest_manage_DMI_Output_Pkg);
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L2_then_IfBlock1,
      &outC->_L1_then_IfBlock1);
    if (kcg_true) {
      outC->_L2_then_IfBlock1.system_clock = outC->_L3_then_IfBlock1;
    }
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L4_then_IfBlock1,
      &outC->_L2_then_IfBlock1);
    if (kcg_true) {
      outC->_L4_then_IfBlock1.ERTMS_Version = outC->_L6_then_IfBlock1;
    }
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L5_then_IfBlock1,
      &outC->_L4_then_IfBlock1);
    if (kcg_true) {
      outC->_L5_then_IfBlock1.EVC_Version = outC->_L8_then_IfBlock1;
    }
    /* IfBlock1:then:_L9= */
    if (outC->init) {
      kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L9_then_IfBlock1,
        &outC->_L5_then_IfBlock1);
    }
    else {
      kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L9_then_IfBlock1,
        &outC->_L7_then_IfBlock1);
    }
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &identifierRequest_partial,
      &outC->_L9_then_IfBlock1);
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->identifierRequest,
      &identifierRequest_partial);
    outC->init = kcg_false;
  }
  else {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L1_else_IfBlock1,
      (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cEmptyIdentifierRequest_manage_DMI_Output_Pkg);
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_1_identifierRequest_partial,
      &outC->_L1_else_IfBlock1);
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->identifierRequest,
      &_1_identifierRequest_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void doIdentifierRequest_init_manage_DMI_Output_Pkg(
  outC_doIdentifierRequest_manage_DMI_Output_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;

  outC->_L3.valid = kcg_true;
  outC->_L3.deskOpen = kcg_true;
  outC->_L3.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L3.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L2 = kcg_true;
  outC->isStarted = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1.valid = kcg_true;
  outC->_L1_else_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_else_IfBlock1.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_else_IfBlock1.l_name = kcg_lit_int32(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L1_else_IfBlock1.x_name[idx] = ' ';
  }
  outC->_L1_else_IfBlock1.l_extra = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_then_IfBlock1.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_then_IfBlock1.l_name = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 255; idx1++) {
    outC->_L1_then_IfBlock1.x_name[idx1] = ' ';
  }
  outC->_L1_then_IfBlock1.l_extra = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.valid = kcg_true;
  outC->_L2_then_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_then_IfBlock1.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_then_IfBlock1.l_name = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 255; idx2++) {
    outC->_L2_then_IfBlock1.x_name[idx2] = ' ';
  }
  outC->_L2_then_IfBlock1.l_extra = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.valid = kcg_true;
  outC->_L4_then_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_then_IfBlock1.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_then_IfBlock1.l_name = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 255; idx3++) {
    outC->_L4_then_IfBlock1.x_name[idx3] = ' ';
  }
  outC->_L4_then_IfBlock1.l_extra = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.valid = kcg_true;
  outC->_L5_then_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5_then_IfBlock1.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5_then_IfBlock1.l_name = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 255; idx4++) {
    outC->_L5_then_IfBlock1.x_name[idx4] = ' ';
  }
  outC->_L5_then_IfBlock1.l_extra = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7_then_IfBlock1.valid = kcg_true;
  outC->_L7_then_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L7_then_IfBlock1.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7_then_IfBlock1.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7_then_IfBlock1.l_name = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 255; idx5++) {
    outC->_L7_then_IfBlock1.x_name[idx5] = ' ';
  }
  outC->_L7_then_IfBlock1.l_extra = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9_then_IfBlock1.valid = kcg_true;
  outC->_L9_then_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9_then_IfBlock1.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9_then_IfBlock1.l_name = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 255; idx6++) {
    outC->_L9_then_IfBlock1.x_name[idx6] = ' ';
  }
  outC->_L9_then_IfBlock1.l_extra = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->identifierRequest.valid = kcg_true;
  outC->identifierRequest.system_clock = kcg_lit_int32(0);
  outC->identifierRequest.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->identifierRequest.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->identifierRequest.l_name = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 255; idx7++) {
    outC->identifierRequest.x_name[idx7] = ' ';
  }
  outC->identifierRequest.l_extra = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void doIdentifierRequest_reset_manage_DMI_Output_Pkg(
  outC_doIdentifierRequest_manage_DMI_Output_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** doIdentifierRequest_manage_DMI_Output_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

