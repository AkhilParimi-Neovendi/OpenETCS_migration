/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Set_DriverID_packet_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Set_DriverID_packet/ */
void Set_DriverID_packet_DMI_Control_Pkg_Sub_func(
  /* DriverID/ */
  array_int64_9 *DriverID,
  /* valid/ */
  kcg_bool valid,
  /* CurrentSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg CurrentSystemTime,
  outC_Set_DriverID_packet_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_size idx;

  outC->_L2 = valid;
  outC->_L3 = CurrentSystemTime;
  kcg_copy_array_int64_9(&outC->_L1, DriverID);
  /* _L4= */
  for (idx = 0; idx < 9; idx++) {
    /* _L4=(DMI_Control_Pkg::Utils::ASCII_to_Char_iterator#1)/ */
    ASCII_to_Char_iterator_DMI_Control_Pkg_Utils(
      outC->_L1[idx],
      &outC->Context_ASCII_to_Char_iterator_1[idx]);
    outC->_L4[idx] = outC->Context_ASCII_to_Char_iterator_1[idx].outChar;
  }
  outC->_L5.valid = outC->_L2;
  outC->_L5.systemTime = outC->_L3;
  kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L5.driverIdentifier,
    &outC->_L4);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->DMI_DriverID_packet,
    &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void Set_DriverID_packet_init_DMI_Control_Pkg_Sub_func(
  outC_Set_DriverID_packet_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L5.valid = kcg_true;
  outC->_L5.systemTime = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->_L5.driverIdentifier[idx1] = ' ';
  }
  for (idx2 = 0; idx2 < 9; idx2++) {
    outC->_L4[idx2] = ' ';
  }
  for (idx3 = 0; idx3 < 9; idx3++) {
    outC->_L1[idx3] = kcg_lit_int64(0);
  }
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_lit_int64(0);
  outC->DMI_DriverID_packet.valid = kcg_true;
  outC->DMI_DriverID_packet.systemTime = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 9; idx4++) {
    outC->DMI_DriverID_packet.driverIdentifier[idx4] = ' ';
  }
  for (idx = 0; idx < 9; idx++) {
    /* _L4=(DMI_Control_Pkg::Utils::ASCII_to_Char_iterator#1)/ */
    ASCII_to_Char_iterator_init_DMI_Control_Pkg_Utils(
      &outC->Context_ASCII_to_Char_iterator_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Set_DriverID_packet_reset_DMI_Control_Pkg_Sub_func(
  outC_Set_DriverID_packet_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 9; idx++) {
    /* _L4=(DMI_Control_Pkg::Utils::ASCII_to_Char_iterator#1)/ */
    ASCII_to_Char_iterator_reset_DMI_Control_Pkg_Utils(
      &outC->Context_ASCII_to_Char_iterator_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Set_DriverID_packet_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

