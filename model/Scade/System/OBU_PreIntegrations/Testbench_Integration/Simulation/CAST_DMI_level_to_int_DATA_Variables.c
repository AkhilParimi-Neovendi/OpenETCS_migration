/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_level_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_level_to_int/ */
void CAST_DMI_level_to_int_DATA_Variables(
  /* dmi_level_ct/ */
  DMI_level_T_DMI_Types_Pkg *dmi_level_ct,
  outC_CAST_DMI_level_to_int_DATA_Variables *outC)
{
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->_L14, dmi_level_ct);
  outC->_L6 = outC->_L14.nid_stm;
  outC->nid_stm_int = outC->_L6;
  outC->_L7 = outC->_L14.level;
  /* _L8=(TM_conversions::CAST_M_LEVEL_to_int#1)/ */
  CAST_M_LEVEL_to_int_TM_conversions(
    outC->_L7,
    &outC->Context_CAST_M_LEVEL_to_int_1);
  outC->_L8 = outC->Context_CAST_M_LEVEL_to_int_1.m_level_int;
  outC->level_int = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_level_to_int_init_DATA_Variables(
  outC_CAST_DMI_level_to_int_DATA_Variables *outC)
{
  outC->_L14.level = M_LEVEL_Level_0;
  outC->_L14.nid_stm = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L7 = M_LEVEL_Level_0;
  outC->nid_stm_int = kcg_lit_int64(0);
  outC->level_int = kcg_lit_int64(0);
  /* _L8=(TM_conversions::CAST_M_LEVEL_to_int#1)/ */
  CAST_M_LEVEL_to_int_init_TM_conversions(&outC->Context_CAST_M_LEVEL_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_level_to_int_reset_DATA_Variables(
  outC_CAST_DMI_level_to_int_DATA_Variables *outC)
{
  /* _L8=(TM_conversions::CAST_M_LEVEL_to_int#1)/ */
  CAST_M_LEVEL_to_int_reset_TM_conversions(
    &outC->Context_CAST_M_LEVEL_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_level_to_int_DATA_Variables.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

