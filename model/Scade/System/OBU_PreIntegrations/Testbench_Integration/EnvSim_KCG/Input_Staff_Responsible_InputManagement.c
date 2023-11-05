/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Staff_Responsible_InputManagement.h"

/* InputManagement::Input_Staff_Responsible/ */
void Input_Staff_Responsible_InputManagement(
  /* P_63/ */
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg *P_63,
  /* P_137/ */
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg *P_137,
  outC_Input_Staff_Responsible_InputManagement *outC)
{
  static Q_NEWCOUNTRY noname;
  static Q_DIR _1_noname;
  static NID_BG _2_noname;
  static NID_C _3_noname;
  static Q_DIR _4_noname;

  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(&outC->_L11, P_137);
  outC->_L2 = outC->_L11.q_dir;
  _4_noname = outC->_L2;
  kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(&outC->_L12, P_63);
  kcg_copy_P63_BaliseInSRAuthority_T_Packet_Types_Pkg(
    &outC->_L16,
    &outC->_L12[1]);
  outC->_L8 = outC->_L16.nid_c;
  _3_noname = outC->_L8;
  outC->_L5 = outC->_L16.valid;
  outC->_L15 = !outC->_L5;
  outC->_L14 = kcg_false;
  outC->_L4 = kcg_true;
  outC->_L3 = outC->_L11.q_srstop;
  /* _L10= */
  switch (outC->_L3) {
    case Q_SRSTOP_Stop_if_in_SR_mode :
      outC->_L10 = outC->_L4;
      break;
    case Q_SRSTOP_Go_if_in_SR_mode :
      outC->_L10 = outC->_L14;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L1 = outC->_L11.valid;
  outC->_L13 = outC->_L1 & outC->_L10;
  outC->_L9 = outC->_L16.nid_bg;
  _2_noname = outC->_L9;
  outC->_L6 = outC->_L16.q_dir;
  _1_noname = outC->_L6;
  outC->Stop_if_In_SR = outC->_L13;
  outC->_L7 = outC->_L16.q_newcountry;
  noname = outC->_L7;
  outC->List_BG_Related_SR_Empty = outC->_L15;
}

#ifndef KCG_USER_DEFINED_INIT
void Input_Staff_Responsible_init_InputManagement(
  outC_Input_Staff_Responsible_InputManagement *outC)
{
  static kcg_size idx;

  outC->_L3 = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L2 = Q_DIR_Reverse;
  outC->_L1 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L6 = Q_DIR_Reverse;
  outC->_L5 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L11.valid = kcg_true;
  outC->_L11.q_dir = Q_DIR_Reverse;
  outC->_L11.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  for (idx = 0; idx < 7; idx++) {
    outC->_L12[idx].valid = kcg_true;
    outC->_L12[idx].q_dir = Q_DIR_Reverse;
    outC->_L12[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L12[idx].nid_c = kcg_lit_int32(0);
    outC->_L12[idx].nid_bg = kcg_lit_int32(0);
  }
  outC->_L13 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L16.valid = kcg_true;
  outC->_L16.q_dir = Q_DIR_Reverse;
  outC->_L16.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L16.nid_c = kcg_lit_int32(0);
  outC->_L16.nid_bg = kcg_lit_int32(0);
  outC->Stop_if_In_SR = kcg_true;
  outC->List_BG_Related_SR_Empty = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Input_Staff_Responsible_reset_InputManagement(
  outC_Input_Staff_Responsible_InputManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Input_Staff_Responsible_InputManagement.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

