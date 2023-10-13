/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_Icon_Ack_to_int/ */
void C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC(
  /* dmi_icon_ack_ct/ */
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_icon_ack_ct,
  outC_C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  static kcg_bool noname;

  outC->_L25 = kcg_lit_int64(1);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L17,
    dmi_icon_ack_ct);
  outC->_L5 = outC->_L17.valid;
  noname = outC->_L5;
  outC->_L4 = outC->_L17.systemTime;
  outC->_L10 = outC->_L17.DMI_nid_icon_identifier;
  outC->_L2[0] = outC->_L25;
  outC->_L2[1] = outC->_L4;
  outC->_L2[2] = outC->_L10;
  kcg_copy_DMI_Icon_Ack_int_array_T_DATA(&outC->dmi_icon_ack_int, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_DMI_Icon_Ack_to_int_init_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L25 = kcg_lit_int64(0);
  outC->_L17.valid = kcg_true;
  outC->_L17.systemTime = kcg_lit_int64(0);
  outC->_L17.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  for (idx = 0; idx < 3; idx++) {
    outC->_L2[idx] = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->dmi_icon_ack_int[idx1] = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_DMI_Icon_Ack_to_int_reset_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

