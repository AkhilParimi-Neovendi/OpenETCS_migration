/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isSendingNeeded_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::isSendingNeeded/ */
void isSendingNeeded_manage_DMI_Output_Pkg(
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* incurrentDMIStatus/ */
  DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  outC_isSendingNeeded_manage_DMI_Output_Pkg *outC)
{
  /* lastDMI_Update/ */
  static T_internal_Type_Obu_BasicTypes_Pkg last_lastDMI_Update;

  last_lastDMI_Update = outC->lastDMI_Update;
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&outC->_L14, incurrentDMIStatus);
  outC->_L15 = outC->_L14.DMI_Active;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L1 = last_lastDMI_Update;
  outC->_L4 = outC->_L1 == outC->_L5;
  outC->_L8 = ctimeInterval_manage_DMI_Output_Pkg;
  outC->_L7 = outC->_L8 + outC->_L1;
  outC->_L2 = inSystemTime;
  outC->_L9 = outC->_L2 >= outC->_L7;
  outC->_L6 = outC->_L9 | outC->_L4;
  outC->_L13 = outC->_L6 & outC->_L15;
  outC->_L12 = inSystemTime;
  outC->_L11 = last_lastDMI_Update;
  /* _L10= */
  if (outC->_L13) {
    outC->_L10 = outC->_L12;
  }
  else {
    outC->_L10 = outC->_L11;
  }
  outC->lastDMI_Update = outC->_L10;
  outC->sendingNeeded = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void isSendingNeeded_init_manage_DMI_Output_Pkg(
  outC_isSendingNeeded_manage_DMI_Output_Pkg *outC)
{
  static kcg_size idx;

  outC->_L15 = kcg_true;
  outC->_L14.DMI_Active = kcg_true;
  outC->_L14.DMI_Error = kcg_true;
  outC->_L14.DMI_DriverIdValidated = kcg_true;
  outC->_L14.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L14.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L14.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L14.DMI_TrainDataValidated = kcg_true;
  outC->_L14.DMI_StartReceived = kcg_true;
  outC->_L14.DMI_Identifier.valid = kcg_true;
  outC->_L14.DMI_Identifier.systemTime = kcg_lit_int32(0);
  outC->_L14.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L14.DMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L14.DMI_Identifier.l_name = kcg_lit_int32(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L14.DMI_Identifier.DMI_name[idx] = ' ';
  }
  outC->_L14.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->sendingNeeded = kcg_true;
  outC->lastDMI_Update = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void isSendingNeeded_reset_manage_DMI_Output_Pkg(
  outC_isSendingNeeded_manage_DMI_Output_Pkg *outC)
{
  outC->lastDMI_Update = kcg_lit_int32(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** isSendingNeeded_manage_DMI_Output_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

