/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "maintainingSession_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2/ */
void maintainingSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* prevSessionStatus/ */
  sessionStatus_T_RCM_Session_Types_Pkg *prevSessionStatus,
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&outC->_L131, prevSessionStatus);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->Init_MemoryBasic_1_struct,
    &outC->_L131);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L7_MemoryBasic_1_struct,
    &outC->Init_MemoryBasic_1_struct);
  /* @1/_L6= */
  if (outC->init) {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &outC->_L6_MemoryBasic_1_struct,
      &outC->_L7_MemoryBasic_1_struct);
  }
  else {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &outC->_L6_MemoryBasic_1_struct,
      &outC->_L4_MemoryBasic_1_struct);
  }
  outC->_L134 = outC->_L131.valid;
  outC->Write_MemoryBasic_1_struct = outC->_L134;
  outC->_L5_MemoryBasic_1_struct = outC->Write_MemoryBasic_1_struct;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->BM_Input_MemoryBasic_1_struct,
    &outC->_L131);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L2_MemoryBasic_1_struct,
    &outC->BM_Input_MemoryBasic_1_struct);
  /* @1/_L4= */
  if (outC->_L5_MemoryBasic_1_struct) {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &outC->_L4_MemoryBasic_1_struct,
      &outC->_L2_MemoryBasic_1_struct);
  }
  else {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &outC->_L4_MemoryBasic_1_struct,
      &outC->_L6_MemoryBasic_1_struct);
  }
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->Memorized_MemoryBasic_1_struct,
    &outC->_L4_MemoryBasic_1_struct);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L133,
    &outC->Memorized_MemoryBasic_1_struct);
  outC->_L137 = outC->_L133.nid_radio;
  outC->_L136 = outC->_L133.nid_rbc;
  outC->_L135 = outC->_L133.nid_c;
  outC->_L130 = sp_maintaining_RCM_Session_Types_Pkg;
  outC->_L129 = kcg_true;
  outC->_L128.valid = outC->_L129;
  outC->_L128.phase = outC->_L130;
  outC->_L128.nid_c = outC->_L135;
  outC->_L128.nid_rbc = outC->_L136;
  outC->_L128.nid_radio = outC->_L137;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->sessionStatus,
    &outC->_L128);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void maintainingSession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->_L137 = kcg_lit_int64(0);
  outC->_L136 = kcg_lit_int32(0);
  outC->_L135 = kcg_lit_int32(0);
  outC->_L134 = kcg_true;
  outC->_L133.valid = kcg_true;
  outC->_L133.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L133.nid_c = kcg_lit_int32(0);
  outC->_L133.nid_rbc = kcg_lit_int32(0);
  outC->_L133.nid_radio = kcg_lit_int64(0);
  outC->_L131.valid = kcg_true;
  outC->_L131.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L131.nid_c = kcg_lit_int32(0);
  outC->_L131.nid_rbc = kcg_lit_int32(0);
  outC->_L131.nid_radio = kcg_lit_int64(0);
  outC->_L130 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L129 = kcg_true;
  outC->_L128.valid = kcg_true;
  outC->_L128.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L128.nid_c = kcg_lit_int32(0);
  outC->_L128.nid_rbc = kcg_lit_int32(0);
  outC->_L128.nid_radio = kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L2_MemoryBasic_1_struct.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L2_MemoryBasic_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L2_MemoryBasic_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L2_MemoryBasic_1_struct.nid_radio = kcg_lit_int64(0);
  outC->_L5_MemoryBasic_1_struct = kcg_true;
  outC->_L6_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L6_MemoryBasic_1_struct.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L6_MemoryBasic_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L6_MemoryBasic_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L6_MemoryBasic_1_struct.nid_radio = kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L7_MemoryBasic_1_struct.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L7_MemoryBasic_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L7_MemoryBasic_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L7_MemoryBasic_1_struct.nid_radio = kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.valid = kcg_true;
  outC->BM_Input_MemoryBasic_1_struct.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->BM_Input_MemoryBasic_1_struct.nid_c = kcg_lit_int32(0);
  outC->BM_Input_MemoryBasic_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->BM_Input_MemoryBasic_1_struct.nid_radio = kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.valid = kcg_true;
  outC->Init_MemoryBasic_1_struct.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->Init_MemoryBasic_1_struct.nid_c = kcg_lit_int32(0);
  outC->Init_MemoryBasic_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->Init_MemoryBasic_1_struct.nid_radio = kcg_lit_int64(0);
  outC->Write_MemoryBasic_1_struct = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.valid = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->Memorized_MemoryBasic_1_struct.nid_c = kcg_lit_int32(0);
  outC->Memorized_MemoryBasic_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->Memorized_MemoryBasic_1_struct.nid_radio = kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L4_MemoryBasic_1_struct.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L4_MemoryBasic_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L4_MemoryBasic_1_struct.nid_rbc = kcg_lit_int32(0);
  outC->_L4_MemoryBasic_1_struct.nid_radio = kcg_lit_int64(0);
  outC->init = kcg_true;
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->sessionStatus.nid_c = kcg_lit_int32(0);
  outC->sessionStatus.nid_rbc = kcg_lit_int32(0);
  outC->sessionStatus.nid_radio = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void maintainingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
}


void kcg_save_SV_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg(
  SV_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *SV,
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &SV->Context__L4_MemoryBasic_1,
    &outC->_L4_MemoryBasic_1_struct);
  SV->Context_init = outC->init;
}

void kcg_load_SV_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg(
  outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *outC,
  SV_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg *SV)
{
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L4_MemoryBasic_1_struct,
    &SV->Context__L4_MemoryBasic_1);
  outC->init = SV->Context_init;
}

/*
  Expanded instances for: MoRC_Pck::Subfunc_Pkg::maintainingSession_v2/
  @1: (linear::MemoryBasic#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** maintainingSession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

