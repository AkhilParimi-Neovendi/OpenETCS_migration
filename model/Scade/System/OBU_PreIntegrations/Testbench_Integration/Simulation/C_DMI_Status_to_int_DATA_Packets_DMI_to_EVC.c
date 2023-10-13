/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_Status_to_int/ */
void C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC(
  /* dim_status_ct/ */
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *dim_status_ct,
  outC_C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(&outC->_L17, dim_status_ct);
  outC->_L6 = outC->_L17.valid;
  /* _L23=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L6, &outC->Context_Bool_to_Int_1);
  outC->_L23 = outC->Context_Bool_to_Int_1.int_out;
  outC->_L4 = outC->_L17.statusSet;
  /* _L19=(DATA::Variables::CAST_DMI_StatusSet_to_int#1)/ */
  CAST_DMI_StatusSet_to_int_DATA_Variables(
    outC->_L4,
    &outC->Context_CAST_DMI_StatusSet_to_int_1);
  outC->_L19 = outC->Context_CAST_DMI_StatusSet_to_int_1.dmi_statusSet_int;
  outC->_L5 = outC->_L17.systemTime;
  outC->_L3 = outC->_L17.nAlive;
  outC->_L1[0] = outC->_L23;
  outC->_L1[1] = outC->_L5;
  outC->_L1[2] = outC->_L19;
  outC->_L1[3] = outC->_L3;
  kcg_copy_DMI_Status_int_array_T_DATA(&outC->dmi_status_int, &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void C_DMI_Status_to_int_init_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L23 = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L17.valid = kcg_true;
  outC->_L17.systemTime = kcg_lit_int64(0);
  outC->_L17.statusSet = Running_state_DMI_Types_Pkg;
  outC->_L17.nAlive = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = Running_state_DMI_Types_Pkg;
  outC->_L5 = kcg_lit_int64(0);
  outC->_L6 = kcg_true;
  for (idx = 0; idx < 4; idx++) {
    outC->_L1[idx] = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->dmi_status_int[idx1] = kcg_lit_int64(0);
  }
  /* _L19=(DATA::Variables::CAST_DMI_StatusSet_to_int#1)/ */
  CAST_DMI_StatusSet_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_StatusSet_to_int_1);
  /* _L23=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_DMI_Status_to_int_reset_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L19=(DATA::Variables::CAST_DMI_StatusSet_to_int#1)/ */
  CAST_DMI_StatusSet_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_StatusSet_to_int_1);
  /* _L23=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

