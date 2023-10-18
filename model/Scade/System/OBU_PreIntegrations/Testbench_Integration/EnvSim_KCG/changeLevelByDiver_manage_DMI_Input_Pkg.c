/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "changeLevelByDiver_manage_DMI_Input_Pkg.h"

/* manage_DMI_Input_Pkg::changeLevelByDiver/ */
void changeLevelByDiver_manage_DMI_Input_Pkg(
  /* levelData/ */
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *levelData,
  /* lasttNTC/ */
  NID_STM_DMI_Types_Pkg lasttNTC,
  outC_changeLevelByDiver_manage_DMI_Input_Pkg *outC)
{
  outC->_L49 = kcg_lit_int64(0);
  outC->_L43 = kcg_lit_int64(0);
  outC->_L42 = kcg_true;
  outC->_L41 = kcg_lit_int64(0);
  outC->_L29 = lasttNTC;
  outC->_L28 = cNo_STM_manage_DMI_Input_Pkg;
  outC->_L21 = M_LEVEL_Level_NTC_specified_by_NID_NTC;
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(&outC->_L23, levelData);
  outC->_L22 = outC->_L23.level.level;
  outC->_L24 = outC->_L22 != outC->_L21;
  outC->_L20 = outC->_L23.valid;
  outC->_L25 = outC->_L20 & outC->_L24;
  /* _L26= */
  if (outC->_L25) {
    outC->_L26 = outC->_L28;
  }
  else {
    outC->_L26 = outC->_L29;
  }
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(&outC->_L17, levelData);
  outC->_L18 = outC->_L17.level.nid_stm;
  outC->_L14 = M_LEVEL_Level_NTC_specified_by_NID_NTC;
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(&outC->_L10, levelData);
  outC->_L12 = outC->_L10.level.level;
  outC->_L13 = outC->_L12 == outC->_L14;
  outC->_L11 = outC->_L10.valid;
  outC->_L15 = outC->_L11 & outC->_L13;
  /* _L16= */
  if (outC->_L15) {
    outC->_L16 = outC->_L18;
  }
  else {
    outC->_L16 = outC->_L26;
  }
  outC->updatedNTC = outC->_L16;
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &outC->_L9,
    (T_LevelTansitionInfo_Level_And_Mode_Types_Pkg *)
      &cNoLevelTransitionInfo_manage_DMI_Input_Pkg);
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(&outC->_L1, levelData);
  outC->_L5 = outC->_L1.level.level;
  outC->_L6 = kcg_lit_int64(0);
  outC->_L7 = M_TransitionType_DriverInit_Level_And_Mode_Types_Pkg;
  outC->_L4.level = outC->_L5;
  outC->_L4.position = outC->_L6;
  outC->_L4.transitionType = outC->_L7;
  outC->_L4.immediateAck = outC->_L42;
  outC->_L4.AckLength = outC->_L49;
  outC->_L2 = outC->_L1.valid;
  /* _L8= */
  if (outC->_L2) {
    kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(&outC->_L8, &outC->_L4);
  }
  else {
    kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(&outC->_L8, &outC->_L9);
  }
  outC->_L3.is_set = outC->_L2;
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &outC->_L3.transition,
    &outC->_L8);
  outC->_L3.LRBG = outC->_L41;
  outC->_L3.referenceLocation = outC->_L43;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->ML_levelTransition,
    &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void changeLevelByDiver_init_manage_DMI_Input_Pkg(
  outC_changeLevelByDiver_manage_DMI_Input_Pkg *outC)
{
  outC->_L49 = kcg_lit_int64(0);
  outC->_L43 = kcg_lit_int64(0);
  outC->_L42 = kcg_true;
  outC->_L41 = kcg_lit_int64(0);
  outC->_L29 = kcg_lit_int64(0);
  outC->_L28 = kcg_lit_int64(0);
  outC->_L26 = kcg_lit_int64(0);
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L21 = M_LEVEL_Level_0;
  outC->_L22 = M_LEVEL_Level_0;
  outC->_L23.valid = kcg_true;
  outC->_L23.systemTime = kcg_lit_int64(0);
  outC->_L23.level.level = M_LEVEL_Level_0;
  outC->_L23.level.nid_stm = kcg_lit_int64(0);
  outC->_L17.valid = kcg_true;
  outC->_L17.systemTime = kcg_lit_int64(0);
  outC->_L17.level.level = M_LEVEL_Level_0;
  outC->_L17.level.nid_stm = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_true;
  outC->_L14 = M_LEVEL_Level_0;
  outC->_L13 = kcg_true;
  outC->_L10.valid = kcg_true;
  outC->_L10.systemTime = kcg_lit_int64(0);
  outC->_L10.level.level = M_LEVEL_Level_0;
  outC->_L10.level.nid_stm = kcg_lit_int64(0);
  outC->_L11 = kcg_true;
  outC->_L12 = M_LEVEL_Level_0;
  outC->_L9.level = M_LEVEL_Level_0;
  outC->_L9.position = kcg_lit_int64(0);
  outC->_L9.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L9.immediateAck = kcg_true;
  outC->_L9.AckLength = kcg_lit_int64(0);
  outC->_L8.level = M_LEVEL_Level_0;
  outC->_L8.position = kcg_lit_int64(0);
  outC->_L8.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L8.immediateAck = kcg_true;
  outC->_L8.AckLength = kcg_lit_int64(0);
  outC->_L7 = M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = M_LEVEL_Level_0;
  outC->_L4.level = M_LEVEL_Level_0;
  outC->_L4.position = kcg_lit_int64(0);
  outC->_L4.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L4.immediateAck = kcg_true;
  outC->_L4.AckLength = kcg_lit_int64(0);
  outC->_L3.is_set = kcg_true;
  outC->_L3.transition.level = M_LEVEL_Level_0;
  outC->_L3.transition.position = kcg_lit_int64(0);
  outC->_L3.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L3.transition.immediateAck = kcg_true;
  outC->_L3.transition.AckLength = kcg_lit_int64(0);
  outC->_L3.LRBG = kcg_lit_int64(0);
  outC->_L3.referenceLocation = kcg_lit_int64(0);
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.systemTime = kcg_lit_int64(0);
  outC->_L1.level.level = M_LEVEL_Level_0;
  outC->_L1.level.nid_stm = kcg_lit_int64(0);
  outC->updatedNTC = kcg_lit_int64(0);
  outC->ML_levelTransition.is_set = kcg_true;
  outC->ML_levelTransition.transition.level = M_LEVEL_Level_0;
  outC->ML_levelTransition.transition.position = kcg_lit_int64(0);
  outC->ML_levelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->ML_levelTransition.transition.immediateAck = kcg_true;
  outC->ML_levelTransition.transition.AckLength = kcg_lit_int64(0);
  outC->ML_levelTransition.LRBG = kcg_lit_int64(0);
  outC->ML_levelTransition.referenceLocation = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void changeLevelByDiver_reset_manage_DMI_Input_Pkg(
  outC_changeLevelByDiver_manage_DMI_Input_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** changeLevelByDiver_manage_DMI_Input_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

