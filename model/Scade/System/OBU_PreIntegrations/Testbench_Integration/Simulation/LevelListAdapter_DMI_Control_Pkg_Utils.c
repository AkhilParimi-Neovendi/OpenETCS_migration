/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelListAdapter_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::LevelListAdapter/ */
void LevelListAdapter_DMI_Control_Pkg_Utils(
  /* DMI_evc_level_data/ */
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_evc_level_data,
  outC_LevelListAdapter_DMI_Control_Pkg_Utils *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_int64 noname;

  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    DMI_evc_level_data);
  outC->_L25 = outC->_L1.levelList.number;
  /* _L24/ */
  for (idx = 0; idx < 32; idx++) {
    outC->_L24[idx] = outC->_L25;
  }
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(&outC->_L7, &outC->_L1.levelList);
  kcg_copy_DMI_level_array_T_DMI_Types_Pkg(&outC->_L15, &outC->_L7.levelList);
  outC->_L4 = outC->_L1.valid;
  outC->_L18 = kcg_lit_int64(0);
  outC->_L16 = outC->_L1.levelList.number;
  outC->_L17 = outC->_L16 != outC->_L18;
  outC->_L19 = outC->_L17 & outC->_L4;
  /* _L8= */
  if (outC->_L19) {
    /* _L8= */
    for (idx1 = 0; idx1 < 32; idx1++) {
      /* _L8=(DMI_Control_Pkg::Sub_func::LevelList_Iterator#1)/ */
      LevelList_Iterator_DMI_Control_Pkg_Sub_func(
        /* _L8= */(kcg_int64) idx1,
        &outC->_L15[idx1],
        outC->_L24[idx1],
        &outC->Context_LevelList_Iterator_1[idx1]);
      outC->_L9[idx1] = outC->Context_LevelList_Iterator_1[idx1].IndexLevel;
      outC->_L8 = /* _L8= */(kcg_int64) (idx1 + 1);
      /* _L8= */
      if (!outC->Context_LevelList_Iterator_1[idx1].condition) {
        break;
      }
    }
  }
  else {
    outC->_L8 = kcg_lit_int64(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L8= */
  for (idx1 = /* _L8= */(kcg_size) outC->_L8; idx1 < 32; idx1++) {
    outC->_L9[idx1] = kcg_lit_int64(0);
  }
#endif /* KCG_MAPW_CPY */

  kcg_copy_array_int64_12(&outC->_L21, (array_int64_12 *) &outC->_L9[0]);
  noname = outC->_L8;
  kcg_copy_array_int64_12(&outC->ArrayLevelIndex_toDisplay, &outC->_L21);
}

#ifndef KCG_USER_DEFINED_INIT
void LevelListAdapter_init_DMI_Control_Pkg_Utils(
  outC_LevelListAdapter_DMI_Control_Pkg_Utils *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L25 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L24[idx1] = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 12; idx2++) {
    outC->_L21[idx2] = kcg_lit_int64(0);
  }
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_lit_int64(0);
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L15[idx3].level = M_LEVEL_Level_0;
    outC->_L15[idx3].nid_stm = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L9[idx4] = kcg_lit_int64(0);
  }
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7.number = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L7.levelList[idx5].level = M_LEVEL_Level_0;
    outC->_L7.levelList[idx5].nid_stm = kcg_lit_int64(0);
  }
  outC->_L4 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = kcg_lit_int64(0);
  outC->_L1.levelList.number = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L1.levelList.levelList[idx6].level = M_LEVEL_Level_0;
    outC->_L1.levelList.levelList[idx6].nid_stm = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 12; idx7++) {
    outC->ArrayLevelIndex_toDisplay[idx7] = kcg_lit_int64(0);
  }
  for (idx = 0; idx < 32; idx++) {
    /* _L8=(DMI_Control_Pkg::Sub_func::LevelList_Iterator#1)/ */
    LevelList_Iterator_init_DMI_Control_Pkg_Sub_func(
      &outC->Context_LevelList_Iterator_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LevelListAdapter_reset_DMI_Control_Pkg_Utils(
  outC_LevelListAdapter_DMI_Control_Pkg_Utils *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 32; idx++) {
    /* _L8=(DMI_Control_Pkg::Sub_func::LevelList_Iterator#1)/ */
    LevelList_Iterator_reset_DMI_Control_Pkg_Sub_func(
      &outC->Context_LevelList_Iterator_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LevelListAdapter_DMI_Control_Pkg_Utils.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

