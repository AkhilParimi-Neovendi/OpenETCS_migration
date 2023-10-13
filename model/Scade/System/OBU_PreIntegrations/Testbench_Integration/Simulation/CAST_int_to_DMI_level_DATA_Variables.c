/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_level_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_level/ */
void CAST_int_to_DMI_level_DATA_Variables(
  /* level_int/ */
  kcg_int64 level_int,
  /* nid_stm_int/ */
  kcg_int64 nid_stm_int,
  outC_CAST_int_to_DMI_level_DATA_Variables *outC)
{
  outC->_L18 = level_int;
  /* _L20=(TM_conversions::CAST_Int_to_M_LEVEL#1)/ */
  CAST_Int_to_M_LEVEL_TM_conversions(
    outC->_L18,
    &outC->Context_CAST_Int_to_M_LEVEL_1);
  outC->_L20 = outC->Context_CAST_Int_to_M_LEVEL_1.m_level;
  outC->_L17 = nid_stm_int;
  outC->_L19.level = outC->_L20;
  outC->_L19.nid_stm = outC->_L17;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->dmi_level_ct, &outC->_L19);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_level_init_DATA_Variables(
  outC_CAST_int_to_DMI_level_DATA_Variables *outC)
{
  outC->_L20 = M_LEVEL_Level_0;
  outC->_L19.level = M_LEVEL_Level_0;
  outC->_L19.nid_stm = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L17 = kcg_lit_int64(0);
  outC->dmi_level_ct.level = M_LEVEL_Level_0;
  outC->dmi_level_ct.nid_stm = kcg_lit_int64(0);
  /* _L20=(TM_conversions::CAST_Int_to_M_LEVEL#1)/ */
  CAST_Int_to_M_LEVEL_init_TM_conversions(&outC->Context_CAST_Int_to_M_LEVEL_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_level_reset_DATA_Variables(
  outC_CAST_int_to_DMI_level_DATA_Variables *outC)
{
  /* _L20=(TM_conversions::CAST_Int_to_M_LEVEL#1)/ */
  CAST_Int_to_M_LEVEL_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_LEVEL_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_level_DATA_Variables.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

