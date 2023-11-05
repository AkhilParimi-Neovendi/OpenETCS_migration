/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_trackConditionElement_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_trackConditionElement_to_int/ */
void CAST_DMI_trackConditionElement_to_int_DATA_Variables(
  /* dmi_trackConditionElement/ */
  DMI_trackConditionElement_T_DMI_Types_Pkg *dmi_trackConditionElement,
  outC_CAST_DMI_trackConditionElement_to_int_DATA_Variables *outC)
{
  kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg(
    &outC->_L1,
    dmi_trackConditionElement);
  outC->_L2 = outC->_L1.m_trackcond;
  /* _L5=(TM_conversions::CAST_M_TRACKCOND_to_int#1)/ */
  CAST_M_TRACKCOND_to_int_TM_conversions(
    outC->_L2,
    &outC->Context_CAST_M_TRACKCOND_to_int_1);
  outC->_L5 = outC->Context_CAST_M_TRACKCOND_to_int_1.m_trackcond_int;
  outC->m_trackcond_int = outC->_L5;
  outC->_L3 = outC->_L1.d_trackcond;
  /* _L4=(TM_conversions::CAST_D_TRACKCOND_to_int#1)/ */
  CAST_D_TRACKCOND_to_int_TM_conversions(
    outC->_L3,
    &outC->Context_CAST_D_TRACKCOND_to_int_1);
  outC->_L4 = outC->Context_CAST_D_TRACKCOND_to_int_1.d_trackcond_int;
  outC->d_trackcond_int = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_trackConditionElement_to_int_init_DATA_Variables(
  outC_CAST_DMI_trackConditionElement_to_int_DATA_Variables *outC)
{
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L2 = M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L1.d_trackcond = kcg_lit_int32(0);
  outC->_L1.m_trackcond =
    M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  outC->m_trackcond_int = kcg_lit_int32(0);
  outC->d_trackcond_int = kcg_lit_int32(0);
  /* _L4=(TM_conversions::CAST_D_TRACKCOND_to_int#1)/ */
  CAST_D_TRACKCOND_to_int_init_TM_conversions(
    &outC->Context_CAST_D_TRACKCOND_to_int_1);
  /* _L5=(TM_conversions::CAST_M_TRACKCOND_to_int#1)/ */
  CAST_M_TRACKCOND_to_int_init_TM_conversions(
    &outC->Context_CAST_M_TRACKCOND_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_trackConditionElement_to_int_reset_DATA_Variables(
  outC_CAST_DMI_trackConditionElement_to_int_DATA_Variables *outC)
{
  /* _L4=(TM_conversions::CAST_D_TRACKCOND_to_int#1)/ */
  CAST_D_TRACKCOND_to_int_reset_TM_conversions(
    &outC->Context_CAST_D_TRACKCOND_to_int_1);
  /* _L5=(TM_conversions::CAST_M_TRACKCOND_to_int#1)/ */
  CAST_M_TRACKCOND_to_int_reset_TM_conversions(
    &outC->Context_CAST_M_TRACKCOND_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_trackConditionElement_to_int_DATA_Variables.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

