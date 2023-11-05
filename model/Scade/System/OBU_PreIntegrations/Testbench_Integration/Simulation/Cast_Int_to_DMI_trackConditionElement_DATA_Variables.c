/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Cast_Int_to_DMI_trackConditionElement_DATA_Variables.h"

/* DATA::Variables::Cast_Int_to_DMI_trackConditionElement/ */
void Cast_Int_to_DMI_trackConditionElement_DATA_Variables(
  /* d_trackcond_int/ */
  kcg_int32 d_trackcond_int,
  /* m_trackcond_int/ */
  kcg_int32 m_trackcond_int,
  outC_Cast_Int_to_DMI_trackConditionElement_DATA_Variables *outC)
{
  outC->_L12 = m_trackcond_int;
  outC->_L11 = d_trackcond_int;
  /* _L10=(TM_conversions::CAST_Int_to_M_TRACKCOND#1)/ */
  CAST_Int_to_M_TRACKCOND_TM_conversions(
    outC->_L12,
    &outC->Context_CAST_Int_to_M_TRACKCOND_1);
  outC->_L10 = outC->Context_CAST_Int_to_M_TRACKCOND_1.m_trackcond;
  /* _L9=(TM_conversions::CAST_Int_to_D_TRACKCOND#1)/ */
  CAST_Int_to_D_TRACKCOND_TM_conversions(
    outC->_L11,
    &outC->Context_CAST_Int_to_D_TRACKCOND_1);
  outC->_L9 = outC->Context_CAST_Int_to_D_TRACKCOND_1.d_trackcond;
  outC->_L8.d_trackcond = outC->_L9;
  outC->_L8.m_trackcond = outC->_L10;
  kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg(
    &outC->dmi_trackConditionElemen_ct,
    &outC->_L8);
}

#ifndef KCG_USER_DEFINED_INIT
void Cast_Int_to_DMI_trackConditionElement_init_DATA_Variables(
  outC_Cast_Int_to_DMI_trackConditionElement_DATA_Variables *outC)
{
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8.d_trackcond = kcg_lit_int32(0);
  outC->_L8.m_trackcond =
    M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  outC->dmi_trackConditionElemen_ct.d_trackcond = kcg_lit_int32(0);
  outC->dmi_trackConditionElemen_ct.m_trackcond =
    M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  /* _L9=(TM_conversions::CAST_Int_to_D_TRACKCOND#1)/ */
  CAST_Int_to_D_TRACKCOND_init_TM_conversions(
    &outC->Context_CAST_Int_to_D_TRACKCOND_1);
  /* _L10=(TM_conversions::CAST_Int_to_M_TRACKCOND#1)/ */
  CAST_Int_to_M_TRACKCOND_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_TRACKCOND_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Cast_Int_to_DMI_trackConditionElement_reset_DATA_Variables(
  outC_Cast_Int_to_DMI_trackConditionElement_DATA_Variables *outC)
{
  /* _L9=(TM_conversions::CAST_Int_to_D_TRACKCOND#1)/ */
  CAST_Int_to_D_TRACKCOND_reset_TM_conversions(
    &outC->Context_CAST_Int_to_D_TRACKCOND_1);
  /* _L10=(TM_conversions::CAST_Int_to_M_TRACKCOND#1)/ */
  CAST_Int_to_M_TRACKCOND_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_TRACKCOND_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Cast_Int_to_DMI_trackConditionElement_DATA_Variables.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

