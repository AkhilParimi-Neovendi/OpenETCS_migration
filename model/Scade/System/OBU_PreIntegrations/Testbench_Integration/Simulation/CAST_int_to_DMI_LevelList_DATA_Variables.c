/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_LevelList_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_LevelList/ */
void CAST_int_to_DMI_LevelList_DATA_Variables(
  /* dmi_LevelList_int/ */
  DMI_LevelList_int_array_T_DATA *dmi_LevelList_int,
  outC_CAST_int_to_DMI_LevelList_DATA_Variables *outC)
{
  static kcg_size idx;

  kcg_copy_DMI_LevelList_int_array_T_DATA(&outC->_L10, dmi_LevelList_int);
  kcg_copy_array_int32_32(&outC->_L14, (array_int32_32 *) &outC->_L10[33]);
  kcg_copy_array_int32_32(&outC->_L13, (array_int32_32 *) &outC->_L10[1]);
  /* _L12= */
  for (idx = 0; idx < 32; idx++) {
    /* _L12=(DATA::Variables::CAST_int_to_DMI_level#1)/ */
    CAST_int_to_DMI_level_DATA_Variables(
      outC->_L13[idx],
      outC->_L14[idx],
      &outC->Context_CAST_int_to_DMI_level_1[idx]);
    kcg_copy_DMI_level_T_DMI_Types_Pkg(
      &outC->_L12[idx],
      &outC->Context_CAST_int_to_DMI_level_1[idx].dmi_level_ct);
  }
  outC->_L11 = outC->_L10[0];
  outC->_L4.number = outC->_L11;
  kcg_copy_DMI_level_array_T_DMI_Types_Pkg(&outC->_L4.levelList, &outC->_L12);
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(&outC->dmi_LevelList_ct, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_LevelList_init_DATA_Variables(
  outC_CAST_int_to_DMI_LevelList_DATA_Variables *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L14[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L13[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L12[idx3].level = M_LEVEL_Level_0;
    outC->_L12[idx3].nid_stm = kcg_lit_int32(0);
  }
  outC->_L11 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 65; idx4++) {
    outC->_L10[idx4] = kcg_lit_int32(0);
  }
  outC->_L4.number = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L4.levelList[idx5].level = M_LEVEL_Level_0;
    outC->_L4.levelList[idx5].nid_stm = kcg_lit_int32(0);
  }
  outC->dmi_LevelList_ct.number = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->dmi_LevelList_ct.levelList[idx6].level = M_LEVEL_Level_0;
    outC->dmi_LevelList_ct.levelList[idx6].nid_stm = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 32; idx++) {
    /* _L12=(DATA::Variables::CAST_int_to_DMI_level#1)/ */
    CAST_int_to_DMI_level_init_DATA_Variables(
      &outC->Context_CAST_int_to_DMI_level_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_LevelList_reset_DATA_Variables(
  outC_CAST_int_to_DMI_LevelList_DATA_Variables *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 32; idx++) {
    /* _L12=(DATA::Variables::CAST_int_to_DMI_level#1)/ */
    CAST_int_to_DMI_level_reset_DATA_Variables(
      &outC->Context_CAST_int_to_DMI_level_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_LevelList_DATA_Variables.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

