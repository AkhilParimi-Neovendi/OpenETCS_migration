/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelList_Iterator_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::LevelList_Iterator/ */
void LevelList_Iterator_DMI_Control_Pkg_Sub_func(
  /* index/ */
  kcg_int64 index,
  /* level/ */
  DMI_level_T_DMI_Types_Pkg *level,
  /* N_level/ */
  kcg_int64 N_level,
  outC_LevelList_Iterator_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L81 = kcg_lit_int64(1);
  outC->_L4 = N_level;
  outC->_L80 = outC->_L4 - outC->_L81;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->_L77, level);
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->_L2, level);
  outC->_L58 = outC->_L2.level;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->_L56, level);
  outC->_L57 = outC->_L56.level;
  outC->_L38 = outC->_L77.nid_stm;
  outC->_L23 = cLevel_3_Index_DMI_Control_Pkg;
  outC->_L22 = cLevel_2_Index_DMI_Control_Pkg;
  outC->_L21 = cLevel_1_Index_DMI_Control_Pkg;
  outC->_L20 = cLevel_0_Index_DMI_Control_Pkg;
  /* _L19= */
  switch (outC->_L57) {
    case M_LEVEL_Level_0 :
      outC->_L19 = outC->_L20;
      break;
    case M_LEVEL_Level_1 :
      outC->_L19 = outC->_L21;
      break;
    case M_LEVEL_Level_3 :
      outC->_L19 = outC->_L23;
      break;
    default :
      outC->_L19 = outC->_L22;
      break;
  }
  outC->_L16 = cLevel_ATB_Index_DMI_Control_Pkg;
  outC->_L15 = kcg_lit_int64(8);
  outC->_L14 = kcg_lit_int64(7);
  outC->_L10 = M_LEVEL_Level_NTC_specified_by_NID_NTC;
  outC->_L8 = outC->_L58 == outC->_L10;
  /* _L6= */
  switch (outC->_L38) {
    case kcg_lit_int64(1) :
      outC->_L6 = outC->_L16;
      break;
    case kcg_lit_int64(2) :
      outC->_L6 = outC->_L14;
      break;
    default :
      outC->_L6 = outC->_L15;
      break;
  }
  /* _L7= */
  if (outC->_L8) {
    outC->_L7 = outC->_L6;
  }
  else {
    outC->_L7 = outC->_L19;
  }
  outC->_L1 = index;
  outC->_L5 = outC->_L1 < outC->_L80;
  outC->condition = outC->_L5;
  outC->IndexLevel = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void LevelList_Iterator_init_DMI_Control_Pkg_Sub_func(
  outC_LevelList_Iterator_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L81 = kcg_lit_int64(0);
  outC->_L80 = kcg_lit_int64(0);
  outC->_L77.level = M_LEVEL_Level_0;
  outC->_L77.nid_stm = kcg_lit_int64(0);
  outC->_L58 = M_LEVEL_Level_0;
  outC->_L56.level = M_LEVEL_Level_0;
  outC->_L56.nid_stm = kcg_lit_int64(0);
  outC->_L57 = M_LEVEL_Level_0;
  outC->_L2.level = M_LEVEL_Level_0;
  outC->_L2.nid_stm = kcg_lit_int64(0);
  outC->_L38 = kcg_lit_int64(0);
  outC->_L23 = kcg_lit_int64(0);
  outC->_L22 = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L10 = M_LEVEL_Level_0;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->IndexLevel = kcg_lit_int64(0);
  outC->condition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LevelList_Iterator_reset_DMI_Control_Pkg_Sub_func(
  outC_LevelList_Iterator_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LevelList_Iterator_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

