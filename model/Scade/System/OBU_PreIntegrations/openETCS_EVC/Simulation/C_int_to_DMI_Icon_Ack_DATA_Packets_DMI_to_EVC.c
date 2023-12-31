/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Icon_Ack/ */
void C_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC(
  /* dmi_icon_ack_int/ */
  DMI_Icon_Ack_int_array_T_DATA *dmi_icon_ack_int,
  outC_C_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC *outC)
{
  kcg_copy_DMI_Icon_Ack_int_array_T_DATA(&outC->_L12, dmi_icon_ack_int);
  outC->_L5 = outC->_L12[0];
  /* _L13=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L5, &outC->Context_Int_to_Bool_1);
  outC->_L13 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L4 = outC->_L12[1];
  outC->_L10 = outC->_L12[2];
  outC->_L2.valid = outC->_L13;
  outC->_L2.systemTime = outC->_L4;
  outC->_L2.DMI_nid_icon_identifier = outC->_L10;
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->dmi_icon_ack_ct,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_int_to_DMI_Icon_Ack_init_DATA_Packets_DMI_to_EVC(
  outC_C_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC *outC)
{
  kcg_size idx;

  outC->_L13 = kcg_true;
  for (idx = 0; idx < 3; idx++) {
    outC->_L12[idx] = kcg_lit_int32(0);
  }
  outC->_L10 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.systemTime = kcg_lit_int32(0);
  outC->_L2.DMI_nid_icon_identifier = kcg_lit_int32(0);
  outC->dmi_icon_ack_ct.valid = kcg_true;
  outC->dmi_icon_ack_ct.systemTime = kcg_lit_int32(0);
  outC->dmi_icon_ack_ct.DMI_nid_icon_identifier = kcg_lit_int32(0);
  /* _L13=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_int_to_DMI_Icon_Ack_reset_DATA_Packets_DMI_to_EVC(
  outC_C_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L13=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

