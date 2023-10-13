/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_trackCondition_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_trackCondition/ */
void CAST_int_to_DMI_trackCondition_DATA_Variables(
  /* dmi_trackCondition_int/ */
  DMI_trackCondition_int_array_T *dmi_trackCondition_int,
  outC_CAST_int_to_DMI_trackCondition_DATA_Variables *outC)
{
  static kcg_size idx;

  kcg_copy_DMI_trackCondition_int_array_T(&outC->_L11, dmi_trackCondition_int);
  kcg_copy_array_int64_32(&outC->_L16, (array_int64_32 *) &outC->_L11[33]);
  kcg_copy_array_int64_32(&outC->_L15, (array_int64_32 *) &outC->_L11[1]);
  /* _L14= */
  for (idx = 0; idx < 32; idx++) {
    /* _L14=(DATA::Variables::Cast_Int_to_DMI_trackConditionElement#1)/ */
    Cast_Int_to_DMI_trackConditionElement_DATA_Variables(
      outC->_L15[idx],
      outC->_L16[idx],
      &outC->Context_Cast_Int_to_DMI_trackConditionElement_1[idx]);
    kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg(
      &outC->_L14[idx],
      &outC->Context_Cast_Int_to_DMI_trackConditionElement_1[idx].dmi_trackConditionElemen_ct);
  }
  outC->_L13 = outC->_L11[0];
  outC->_L12.nIter = outC->_L13;
  kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg(
    &outC->_L12.trackCondition,
    &outC->_L14);
  kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg(
    &outC->dmi_trackCondition_ct,
    &outC->_L12);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_trackCondition_init_DATA_Variables(
  outC_CAST_int_to_DMI_trackCondition_DATA_Variables *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L16[idx1] = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L15[idx2] = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L14[idx3].d_trackcond = kcg_lit_int64(0);
    outC->_L14[idx3].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->_L13 = kcg_lit_int64(0);
  outC->_L12.nIter = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L12.trackCondition[idx4].d_trackcond = kcg_lit_int64(0);
    outC->_L12.trackCondition[idx4].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  for (idx5 = 0; idx5 < 65; idx5++) {
    outC->_L11[idx5] = kcg_lit_int64(0);
  }
  outC->dmi_trackCondition_ct.nIter = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->dmi_trackCondition_ct.trackCondition[idx6].d_trackcond = kcg_lit_int64(0);
    outC->dmi_trackCondition_ct.trackCondition[idx6].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  for (idx = 0; idx < 32; idx++) {
    /* _L14=(DATA::Variables::Cast_Int_to_DMI_trackConditionElement#1)/ */
    Cast_Int_to_DMI_trackConditionElement_init_DATA_Variables(
      &outC->Context_Cast_Int_to_DMI_trackConditionElement_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_trackCondition_reset_DATA_Variables(
  outC_CAST_int_to_DMI_trackCondition_DATA_Variables *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 32; idx++) {
    /* _L14=(DATA::Variables::Cast_Int_to_DMI_trackConditionElement#1)/ */
    Cast_Int_to_DMI_trackConditionElement_reset_DATA_Variables(
      &outC->Context_Cast_Int_to_DMI_trackConditionElement_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_trackCondition_DATA_Variables.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

