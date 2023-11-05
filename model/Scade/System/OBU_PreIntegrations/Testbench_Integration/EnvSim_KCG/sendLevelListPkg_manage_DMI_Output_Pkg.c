/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendLevelListPkg_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::sendLevelListPkg/ */
void sendLevelListPkg_manage_DMI_Output_Pkg(
  /* levelList/ */
  DMI_LevelList_T_DMI_Types_Pkg *levelList,
  /* UpdateLevelsRequested/ */
  kcg_bool UpdateLevelsRequested,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  outC_sendLevelListPkg_manage_DMI_Output_Pkg *outC)
{
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L17,
    (DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyLevelData_manage_DMI_Output_Pkg);
  outC->_L9 = kcg_true;
  outC->_L3 = inSystemTime;
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(&outC->_L1, levelList);
  outC->_L4.valid = outC->_L9;
  outC->_L4.system_clock = outC->_L3;
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(&outC->_L4.levelList, &outC->_L1);
  outC->_L2 = UpdateLevelsRequested;
  /* _L10= */
  if (outC->_L2) {
    kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L10,
      &outC->_L4);
  }
  else {
    kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L10,
      &outC->_L17);
  }
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->levelDataPkg,
    &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void sendLevelListPkg_init_manage_DMI_Output_Pkg(
  outC_sendLevelListPkg_manage_DMI_Output_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L17.valid = kcg_true;
  outC->_L17.system_clock = kcg_lit_int32(0);
  outC->_L17.levelList.number = kcg_lit_int32(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L17.levelList.levelList[idx].level = M_LEVEL_Level_0;
    outC->_L17.levelList.levelList[idx].nid_stm = kcg_lit_int32(0);
  }
  outC->_L10.valid = kcg_true;
  outC->_L10.system_clock = kcg_lit_int32(0);
  outC->_L10.levelList.number = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L10.levelList.levelList[idx1].level = M_LEVEL_Level_0;
    outC->_L10.levelList.levelList[idx1].nid_stm = kcg_lit_int32(0);
  }
  outC->_L9 = kcg_true;
  outC->_L4.valid = kcg_true;
  outC->_L4.system_clock = kcg_lit_int32(0);
  outC->_L4.levelList.number = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L4.levelList.levelList[idx2].level = M_LEVEL_Level_0;
    outC->_L4.levelList.levelList[idx2].nid_stm = kcg_lit_int32(0);
  }
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->_L1.number = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L1.levelList[idx3].level = M_LEVEL_Level_0;
    outC->_L1.levelList[idx3].nid_stm = kcg_lit_int32(0);
  }
  outC->levelDataPkg.valid = kcg_true;
  outC->levelDataPkg.system_clock = kcg_lit_int32(0);
  outC->levelDataPkg.levelList.number = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->levelDataPkg.levelList.levelList[idx4].level = M_LEVEL_Level_0;
    outC->levelDataPkg.levelList.levelList[idx4].nid_stm = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sendLevelListPkg_reset_manage_DMI_Output_Pkg(
  outC_sendLevelListPkg_manage_DMI_Output_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sendLevelListPkg_manage_DMI_Output_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

