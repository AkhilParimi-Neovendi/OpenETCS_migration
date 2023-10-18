/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status/ */
void C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC(
  /* dmi_status_int/ */
  DMI_Status_int_array_T_DATA *dmi_status_int,
  outC_C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC *outC)
{
  kcg_copy_DMI_Status_int_array_T_DATA(&outC->_L2, dmi_status_int);
  outC->_L18 = outC->_L2[0];
  /* _L13=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L18, &outC->Context_Int_to_Bool_1);
  outC->_L13 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L16 = outC->_L2[2];
  /* _L12=(DATA::Variables::CAST_int_to_DMI_StatusSet#1)/ */
  CAST_int_to_DMI_StatusSet_DATA_Variables(
    outC->_L16,
    &outC->Context_CAST_int_to_DMI_StatusSet_1);
  outC->_L12 = outC->Context_CAST_int_to_DMI_StatusSet_1.dmi_statusSet_ct;
  outC->_L17 = outC->_L2[1];
  outC->_L15 = outC->_L2[3];
  outC->_L1.valid = outC->_L13;
  outC->_L1.systemTime = outC->_L17;
  outC->_L1.statusSet = outC->_L12;
  outC->_L1.nAlive = outC->_L15;
  kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->dim_status_ct,
    &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void C_int_to_DMI_Status_init_DATA_Packets_DMI_to_EVC(
  outC_C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC *outC)
{
  static kcg_size idx;

  outC->_L15 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L17 = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L13 = kcg_true;
  outC->_L12 = Running_state_DMI_Types_Pkg;
  for (idx = 0; idx < 4; idx++) {
    outC->_L2[idx] = kcg_lit_int64(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.systemTime = kcg_lit_int64(0);
  outC->_L1.statusSet = Running_state_DMI_Types_Pkg;
  outC->_L1.nAlive = kcg_lit_int64(0);
  outC->dim_status_ct.valid = kcg_true;
  outC->dim_status_ct.systemTime = kcg_lit_int64(0);
  outC->dim_status_ct.statusSet = Running_state_DMI_Types_Pkg;
  outC->dim_status_ct.nAlive = kcg_lit_int64(0);
  /* _L12=(DATA::Variables::CAST_int_to_DMI_StatusSet#1)/ */
  CAST_int_to_DMI_StatusSet_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_StatusSet_1);
  /* _L13=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_int_to_DMI_Status_reset_DATA_Packets_DMI_to_EVC(
  outC_C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L12=(DATA::Variables::CAST_int_to_DMI_StatusSet#1)/ */
  CAST_int_to_DMI_StatusSet_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_StatusSet_1);
  /* _L13=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

