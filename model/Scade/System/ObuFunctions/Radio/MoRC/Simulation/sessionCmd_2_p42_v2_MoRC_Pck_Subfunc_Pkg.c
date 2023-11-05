/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/ObuFunctions/Radio/MoRC/Simulation/config.txt
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2/ */
void sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg(
  /* sessionCmd/ */
  sessionCmd_T_RCM_Session_Types_Pkg *sessionCmd,
  outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  static m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg noname;
  static kcg_bool _1_noname;
  static kcg_bool _2_noname;

  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(&outC->_L1, sessionCmd);
  outC->_L2 = outC->_L1.valid;
  outC->valid = outC->_L2;
  outC->_L4 = outC->_L1.initiatedByRBC;
  _2_noname = outC->_L4;
  outC->_L3 = outC->_L1.initiatedByOBU;
  _1_noname = outC->_L3;
  outC->_L33 = Q_DIR_Both_directions;
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&outC->_L11, &outC->_L1.p42);
  outC->_L30 = outC->_L11.q_dir;
  outC->_L24 = outC->_L11.valid;
  /* _L32= */
  if (outC->_L24) {
    outC->_L32 = outC->_L30;
  }
  else {
    outC->_L32 = outC->_L33;
  }
  outC->_L29 = msrc_OBU_Common_Types_Pkg;
  outC->_L28 = outC->_L11.msgSrc;
  /* _L27= */
  if (outC->_L24) {
    outC->_L27 = outC->_L28;
  }
  else {
    outC->_L27 = outC->_L29;
  }
  outC->_L26 = Q_SLEEPSESSION_Execute_session_establishment_order;
  outC->_L23 = outC->_L11.q_sleepsession;
  /* _L25= */
  if (outC->_L24) {
    outC->_L25 = outC->_L23;
  }
  else {
    outC->_L25 = outC->_L26;
  }
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->_L10,
    &outC->_L1.m38);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &noname,
    &outC->_L10);
  outC->_L5 = outC->_L1.q_rbc;
  outC->_L6 = outC->_L1.nid_c;
  outC->_L7 = outC->_L1.nid_rbc;
  outC->_L8 = outC->_L1.nid_radio;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L9, &outC->_L1.origin);
  outC->_L22.valid = outC->_L2;
  outC->_L22.msgSrc = outC->_L27;
  outC->_L22.q_dir = outC->_L32;
  outC->_L22.q_rbc = outC->_L5;
  outC->_L22.nid_c = outC->_L6;
  outC->_L22.nid_RBC = outC->_L7;
  outC->_L22.nid_radio = outC->_L8;
  outC->_L22.q_sleepsession = outC->_L25;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L22.origin, &outC->_L9);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->p42_SessionManagement,
    &outC->_L22);
}

#ifndef KCG_USER_DEFINED_INIT
void sessionCmd_2_p42_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->_L33 = Q_DIR_Reverse;
  outC->_L32 = Q_DIR_Reverse;
  outC->_L30 = Q_DIR_Reverse;
  outC->_L29 = msrc_undefined_Common_Types_Pkg;
  outC->_L28 = msrc_undefined_Common_Types_Pkg;
  outC->_L27 = msrc_undefined_Common_Types_Pkg;
  outC->_L26 = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L25 = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L24 = kcg_true;
  outC->_L23 = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L22.valid = kcg_true;
  outC->_L22.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L22.q_dir = Q_DIR_Reverse;
  outC->_L22.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L22.nid_c = kcg_lit_int32(0);
  outC->_L22.nid_RBC = kcg_lit_int32(0);
  outC->_L22.nid_radio = kcg_lit_int32(0);
  outC->_L22.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L22.origin.valid = kcg_true;
  outC->_L22.origin.nid_c = kcg_lit_int32(0);
  outC->_L22.origin.rbc_id = kcg_lit_int32(0);
  outC->_L22.origin.device_id = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L5 = Q_RBC_Terminate_communication_session;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.nid_c = kcg_lit_int32(0);
  outC->_L9.rbc_id = kcg_lit_int32(0);
  outC->_L9.device_id = kcg_lit_int32(0);
  outC->_L10.valid = kcg_true;
  outC->_L10.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L10.origin.valid = kcg_true;
  outC->_L10.origin.nid_c = kcg_lit_int32(0);
  outC->_L10.origin.rbc_id = kcg_lit_int32(0);
  outC->_L10.origin.device_id = kcg_lit_int32(0);
  outC->_L11.valid = kcg_true;
  outC->_L11.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L11.q_dir = Q_DIR_Reverse;
  outC->_L11.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L11.nid_c = kcg_lit_int32(0);
  outC->_L11.nid_RBC = kcg_lit_int32(0);
  outC->_L11.nid_radio = kcg_lit_int32(0);
  outC->_L11.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L11.origin.valid = kcg_true;
  outC->_L11.origin.nid_c = kcg_lit_int32(0);
  outC->_L11.origin.rbc_id = kcg_lit_int32(0);
  outC->_L11.origin.device_id = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.initiatedByOBU = kcg_true;
  outC->_L1.initiatedByRBC = kcg_true;
  outC->_L1.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L1.nid_c = kcg_lit_int32(0);
  outC->_L1.nid_rbc = kcg_lit_int32(0);
  outC->_L1.nid_radio = kcg_lit_int32(0);
  outC->_L1.origin.valid = kcg_true;
  outC->_L1.origin.nid_c = kcg_lit_int32(0);
  outC->_L1.origin.rbc_id = kcg_lit_int32(0);
  outC->_L1.origin.device_id = kcg_lit_int32(0);
  outC->_L1.m38.valid = kcg_true;
  outC->_L1.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L1.m38.origin.valid = kcg_true;
  outC->_L1.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L1.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L1.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L1.p42.valid = kcg_true;
  outC->_L1.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L1.p42.q_dir = Q_DIR_Reverse;
  outC->_L1.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L1.p42.nid_c = kcg_lit_int32(0);
  outC->_L1.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L1.p42.nid_radio = kcg_lit_int32(0);
  outC->_L1.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L1.p42.origin.valid = kcg_true;
  outC->_L1.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L1.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L1.p42.origin.device_id = kcg_lit_int32(0);
  outC->p42_SessionManagement.valid = kcg_true;
  outC->p42_SessionManagement.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->p42_SessionManagement.q_dir = Q_DIR_Reverse;
  outC->p42_SessionManagement.q_rbc = Q_RBC_Terminate_communication_session;
  outC->p42_SessionManagement.nid_c = kcg_lit_int32(0);
  outC->p42_SessionManagement.nid_RBC = kcg_lit_int32(0);
  outC->p42_SessionManagement.nid_radio = kcg_lit_int32(0);
  outC->p42_SessionManagement.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->p42_SessionManagement.origin.valid = kcg_true;
  outC->p42_SessionManagement.origin.nid_c = kcg_lit_int32(0);
  outC->p42_SessionManagement.origin.rbc_id = kcg_lit_int32(0);
  outC->p42_SessionManagement.origin.device_id = kcg_lit_int32(0);
  outC->valid = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void sessionCmd_2_p42_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

