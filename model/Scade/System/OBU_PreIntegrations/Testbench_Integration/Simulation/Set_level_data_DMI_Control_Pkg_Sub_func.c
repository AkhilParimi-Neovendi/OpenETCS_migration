/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Set_level_data_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Set_level_data/ */
void Set_level_data_DMI_Control_Pkg_Sub_func(
  /* LevelDataAck/ */
  kcg_bool LevelDataAck,
  /* SystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* level/ */
  DMI_level_T_DMI_Types_Pkg *level,
  outC_Set_level_data_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L1 = LevelDataAck;
  outC->_L2 = SystemTime;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->_L9, level);
  outC->_L11.valid = outC->_L1;
  outC->_L11.systemTime = outC->_L2;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->_L11.level, &outC->_L9);
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->dmi_level_data,
    &outC->_L11);
}

#ifndef KCG_USER_DEFINED_INIT
void Set_level_data_init_DMI_Control_Pkg_Sub_func(
  outC_Set_level_data_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L11.valid = kcg_true;
  outC->_L11.systemTime = kcg_lit_int32(0);
  outC->_L11.level.level = M_LEVEL_Level_0;
  outC->_L11.level.nid_stm = kcg_lit_int32(0);
  outC->_L9.level = M_LEVEL_Level_0;
  outC->_L9.nid_stm = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_true;
  outC->dmi_level_data.valid = kcg_true;
  outC->dmi_level_data.systemTime = kcg_lit_int32(0);
  outC->dmi_level_data.level.level = M_LEVEL_Level_0;
  outC->dmi_level_data.level.nid_stm = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Set_level_data_reset_DMI_Control_Pkg_Sub_func(
  outC_Set_level_data_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Set_level_data_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

