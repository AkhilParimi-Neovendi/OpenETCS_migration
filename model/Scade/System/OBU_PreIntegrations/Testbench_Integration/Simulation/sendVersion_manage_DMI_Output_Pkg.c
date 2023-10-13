/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendVersion_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::sendVersion/ */
void sendVersion_manage_DMI_Output_Pkg(
  /* ownVersion/ */
  M_VERSION ownVersion,
  /* dmiStatus/ */
  DMI_EVC_status_T_DMI_Types_Pkg *dmiStatus,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  outC_sendVersion_manage_DMI_Output_Pkg *outC)
{
  /* versionSent/ */
  static kcg_bool last_versionSent;

  last_versionSent = outC->versionSent;
  outC->_L7 = last_versionSent;
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&outC->_L2, dmiStatus);
  outC->_L5 = outC->_L2.DMI_Active;
  outC->_L8 = outC->_L5 & outC->_L7;
  outC->sendPkg = outC->_L8;
  outC->_L16 = outC->sendPkg;
  outC->_L15 = outC->sendPkg;
  outC->_L14 = last_versionSent;
  outC->_L13 = outC->_L15 | outC->_L14;
  outC->versionSent = outC->_L13;
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L11,
    (DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyVersion_manage_DMI_Output_Pkg);
  outC->_L9 = kcg_true;
  outC->_L3 = inSystemTime;
  outC->_L1 = ownVersion;
  outC->_L4.valid = outC->_L9;
  outC->_L4.system_clock = outC->_L3;
  outC->_L4.system_version = outC->_L1;
  /* _L10= */
  if (outC->_L16) {
    kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L10,
      &outC->_L4);
  }
  else {
    kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L10,
      &outC->_L11);
  }
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->VersionPkg,
    &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void sendVersion_init_manage_DMI_Output_Pkg(
  outC_sendVersion_manage_DMI_Output_Pkg *outC)
{
  static kcg_size idx;

  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L11.valid = kcg_true;
  outC->_L11.system_clock = kcg_lit_int64(0);
  outC->_L11.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L10.valid = kcg_true;
  outC->_L10.system_clock = kcg_lit_int64(0);
  outC->_L10.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4.valid = kcg_true;
  outC->_L4.system_clock = kcg_lit_int64(0);
  outC->_L4.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2.DMI_Active = kcg_true;
  outC->_L2.DMI_Error = kcg_true;
  outC->_L2.DMI_DriverIdValidated = kcg_true;
  outC->_L2.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L2.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L2.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L2.DMI_TrainDataValidated = kcg_true;
  outC->_L2.DMI_StartReceived = kcg_true;
  outC->_L2.DMI_Identifier.valid = kcg_true;
  outC->_L2.DMI_Identifier.systemTime = kcg_lit_int64(0);
  outC->_L2.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L2.DMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L2.DMI_Identifier.l_name = kcg_lit_int64(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L2.DMI_Identifier.DMI_name[idx] = ' ';
  }
  outC->_L2.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->sendPkg = kcg_true;
  outC->VersionPkg.valid = kcg_true;
  outC->VersionPkg.system_clock = kcg_lit_int64(0);
  outC->VersionPkg.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->versionSent = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sendVersion_reset_manage_DMI_Output_Pkg(
  outC_sendVersion_manage_DMI_Output_Pkg *outC)
{
  outC->versionSent = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_sendVersion_manage_DMI_Output_Pkg(
  SV_sendVersion_manage_DMI_Output_Pkg *SV,
  outC_sendVersion_manage_DMI_Output_Pkg *outC)
{
  SV->Context_versionSent = outC->versionSent;
}

void kcg_load_SV_sendVersion_manage_DMI_Output_Pkg(
  outC_sendVersion_manage_DMI_Output_Pkg *outC,
  SV_sendVersion_manage_DMI_Output_Pkg *SV)
{
  outC->versionSent = SV->Context_versionSent;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sendVersion_manage_DMI_Output_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

