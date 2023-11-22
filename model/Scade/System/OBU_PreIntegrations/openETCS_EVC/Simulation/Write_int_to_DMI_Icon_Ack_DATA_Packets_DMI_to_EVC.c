/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack/ */
void Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC(
  /* dmi_icon_ack_int/ */
  DMI_Icon_Ack_int_array_T_DATA *dmi_icon_ack_int,
  outC_Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC *outC)
{
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg op_call;

  kcg_copy_DMI_Icon_Ack_int_array_T_DATA(&outC->_L12, dmi_icon_ack_int);
  outC->_L17 = outC->_L12[0];
  outC->_L18 = kcg_lit_int32(1);
  outC->_L16 = outC->_L18 == outC->_L17;
  outC->every = outC->_L16;
  if (outC->every) {
    /* _L14=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Icon_Ack#1)/ */
    C_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC(
      &outC->_L12,
      &outC->Context_C_int_to_DMI_Icon_Ack_1);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &op_call,
      &outC->Context_C_int_to_DMI_Icon_Ack_1.dmi_icon_ack_ct);
  }
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L19,
    (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
      &cDMI_Icon_Ack_DATA_Packets_DMI_to_EVC);
  if (outC->every) {
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(&outC->_L14, &op_call);
  }
  else {
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(&outC->_L14, &outC->_L19);
  }
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->dmi_icon_ack_ct,
    &outC->_L14);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_Icon_Ack_init_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC *outC)
{
  kcg_size idx;

  outC->_L19.valid = kcg_true;
  outC->_L19.systemTime = kcg_lit_int32(0);
  outC->_L19.DMI_nid_icon_identifier = kcg_lit_int32(0);
  outC->_L16 = kcg_true;
  outC->_L17 = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(0);
  outC->_L14.valid = kcg_true;
  outC->_L14.systemTime = kcg_lit_int32(0);
  outC->_L14.DMI_nid_icon_identifier = kcg_lit_int32(0);
  for (idx = 0; idx < 3; idx++) {
    outC->_L12[idx] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  outC->dmi_icon_ack_ct.valid = kcg_true;
  outC->dmi_icon_ack_ct.systemTime = kcg_lit_int32(0);
  outC->dmi_icon_ack_ct.DMI_nid_icon_identifier = kcg_lit_int32(0);
  /* _L14=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Icon_Ack#1)/ */
  C_int_to_DMI_Icon_Ack_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_int_to_DMI_Icon_Ack_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_Icon_Ack_reset_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L14=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Icon_Ack#1)/ */
  C_int_to_DMI_Icon_Ack_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_int_to_DMI_Icon_Ack_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

