/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_LevelList_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_LevelList_to_int/ */
void CAST_DMI_LevelList_to_int_DATA_Variables(
  /* dmi_LevelList/ */
  DMI_LevelList_T_DMI_Types_Pkg *dmi_LevelList,
  outC_CAST_DMI_LevelList_to_int_DATA_Variables *outC)
{
  static kcg_size idx;
  static array_int32_33 tmp;

  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(&outC->_L5, dmi_LevelList);
  outC->_L3 = outC->_L5.number;
  outC->_L7[0] = outC->_L3;
  kcg_copy_DMI_level_array_T_DMI_Types_Pkg(&outC->_L2, &outC->_L5.levelList);
  /* _L6= */
  for (idx = 0; idx < 32; idx++) {
    /* _L6=(DATA::Variables::CAST_DMI_level_to_int#1)/ */
    CAST_DMI_level_to_int_DATA_Variables(
      &outC->_L2[idx],
      &outC->Context_CAST_DMI_level_to_int_1[idx]);
    outC->_L6[idx] = outC->Context_CAST_DMI_level_to_int_1[idx].level_int;
    outC->_L8[idx] = outC->Context_CAST_DMI_level_to_int_1[idx].nid_stm_int;
  }
  tmp[0] = outC->_L7[0];
  kcg_copy_array_int32_32(&tmp[1], &outC->_L6);
  kcg_copy_array_int32_33(&outC->_L4[0], &tmp);
  kcg_copy_array_int32_32(&outC->_L4[33], &outC->_L8);
  kcg_copy_DMI_LevelList_int_array_T_DATA(&outC->dmi_LevelList_int, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_LevelList_to_int_init_DATA_Variables(
  outC_CAST_DMI_LevelList_to_int_DATA_Variables *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L8[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 1; idx2++) {
    outC->_L7[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L6[idx3] = kcg_lit_int32(0);
  }
  outC->_L5.number = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L5.levelList[idx4].level = M_LEVEL_Level_0;
    outC->_L5.levelList[idx4].nid_stm = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 65; idx5++) {
    outC->_L4[idx5] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L2[idx6].level = M_LEVEL_Level_0;
    outC->_L2[idx6].nid_stm = kcg_lit_int32(0);
  }
  outC->_L3 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 65; idx7++) {
    outC->dmi_LevelList_int[idx7] = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 32; idx++) {
    /* _L6=(DATA::Variables::CAST_DMI_level_to_int#1)/ */
    CAST_DMI_level_to_int_init_DATA_Variables(
      &outC->Context_CAST_DMI_level_to_int_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_LevelList_to_int_reset_DATA_Variables(
  outC_CAST_DMI_LevelList_to_int_DATA_Variables *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 32; idx++) {
    /* _L6=(DATA::Variables::CAST_DMI_level_to_int#1)/ */
    CAST_DMI_level_to_int_reset_DATA_Variables(
      &outC->Context_CAST_DMI_level_to_int_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_LevelList_to_int_DATA_Variables.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

