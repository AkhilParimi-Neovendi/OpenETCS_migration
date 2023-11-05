/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2/ */
void validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg(
  /* p42_SessionManagement/ */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement,
  /* mode/ */
  M_MODE mode,
  outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->_L9 = M_MODE_Sleeping;
  outC->_L2 = mode;
  outC->_L10 = outC->_L2 == outC->_L9;
  outC->_L6 = !outC->_L10;
  outC->_L4 = Q_SLEEPSESSION_Execute_session_establishment_order;
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->_L1,
    p42_SessionManagement);
  outC->_L3 = outC->_L1.q_sleepsession;
  outC->_L5 = outC->_L3 == outC->_L4;
  outC->_L8 = outC->_L5 & outC->_L10;
  outC->_L7 = outC->_L8 | outC->_L6;
  outC->_L11 = outC->_L1.valid;
  outC->_L12 = outC->_L11 & outC->_L7;
  outC->execute = outC->_L12;
}

#ifndef KCG_USER_DEFINED_INIT
void validate_q_sleepsession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = M_MODE_Full_Supervision;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L3 = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L1.valid = kcg_true;
  outC->_L1.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L1.nid_c = kcg_lit_int32(0);
  outC->_L1.nid_RBC = kcg_lit_int32(0);
  outC->_L1.nid_radio = kcg_lit_int32(0);
  outC->_L1.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L1.origin.valid = kcg_true;
  outC->_L1.origin.nid_c = kcg_lit_int32(0);
  outC->_L1.origin.rbc_id = kcg_lit_int32(0);
  outC->_L1.origin.device_id = kcg_lit_int32(0);
  outC->_L2 = M_MODE_Full_Supervision;
  outC->execute = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void validate_q_sleepsession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

