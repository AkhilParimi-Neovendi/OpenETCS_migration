/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P042_onboard_legacy_to_int_TM_conversions.h"

/* TM_conversions::C_P042_onboard_legacy_to_int/ */
void C_P042_onboard_legacy_to_int_TM_conversions(
  /* PacketData/ */
  P42_SessionManagement_T_Packet_Types_Pkg *PacketData,
  outC_C_P042_onboard_legacy_to_int_TM_conversions *outC)
{
  outC->_L48 = kcg_lit_int64(0);
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(&outC->_L9, PacketData);
  outC->_L34 = outC->_L9.valid;
  outC->_L35 = outC->_L9.q_dir;
  outC->_L36 = outC->_L9.q_rbc;
  outC->_L37 = outC->_L9.nid_c;
  outC->_L38 = outC->_L9.nid_rbc;
  outC->_L39 = outC->_L9.nid_radio;
  outC->_L40 = outC->_L9.q_sleepsession;
  /* _L33=(TM_conversions::CAST_Q_SLEEPSESSION_to_int#1)/ */
  CAST_Q_SLEEPSESSION_to_int_TM_conversions(
    outC->_L40,
    &outC->Context_CAST_Q_SLEEPSESSION_to_int_1);
  outC->_L33 = outC->Context_CAST_Q_SLEEPSESSION_to_int_1.d;
  /* _L31=(TM_conversions::CAST_NID_RADIO_to_int#1)/ */
  CAST_NID_RADIO_to_int_TM_conversions(
    outC->_L39,
    &outC->Context_CAST_NID_RADIO_to_int_1);
  outC->_L31 = outC->Context_CAST_NID_RADIO_to_int_1.nid_radio_int;
  /* _L29=(TM_conversions::CAST_NID_RBC_to_int#1)/ */
  CAST_NID_RBC_to_int_TM_conversions(
    outC->_L38,
    &outC->Context_CAST_NID_RBC_to_int_1);
  outC->_L29 = outC->Context_CAST_NID_RBC_to_int_1.nid_rbc_int;
  /* _L27=(TM_conversions::CAST_NID_C_to_int#1)/ */
  CAST_NID_C_to_int_TM_conversions(
    outC->_L37,
    &outC->Context_CAST_NID_C_to_int_1);
  outC->_L27 = outC->Context_CAST_NID_C_to_int_1.nid_c_int;
  outC->_L21 = kcg_lit_int64(42);
  /* _L11=(TM_conversions::CAST_Q_DIR_to_int#1)/ */
  CAST_Q_DIR_to_int_TM_conversions(
    outC->_L35,
    &outC->Context_CAST_Q_DIR_to_int_1);
  outC->_L11 = outC->Context_CAST_Q_DIR_to_int_1.q_dir_int;
  /* _L4=(TM_conversions::CAST_Q_RBC_to_int#1)/ */
  CAST_Q_RBC_to_int_TM_conversions(
    outC->_L36,
    &outC->Context_CAST_Q_RBC_to_int_1);
  outC->_L4 = outC->Context_CAST_Q_RBC_to_int_1.q_rbc_int;
  outC->_L10.valid = outC->_L34;
  outC->_L10.NID_PACKET = outC->_L21;
  outC->_L10.Q_DIR = outC->_L11;
  outC->_L10.L_PACKET = outC->_L48;
  outC->_L10.Q_RBC = outC->_L4;
  outC->_L10.NID_C = outC->_L27;
  outC->_L10.NID_RBC = outC->_L29;
  outC->_L10.NID_RADIO = outC->_L31;
  outC->_L10.Q_SLEEPSESSION = outC->_L33;
  kcg_copy_P042_trackside_int_T_TM(&outC->P042_int, &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P042_onboard_legacy_to_int_init_TM_conversions(
  outC_C_P042_onboard_legacy_to_int_TM_conversions *outC)
{
  outC->_L48 = kcg_lit_int64(0);
  outC->_L34 = kcg_true;
  outC->_L35 = Q_DIR_Reverse;
  outC->_L36 = Q_RBC_Terminate_communication_session;
  outC->_L37 = kcg_lit_int64(0);
  outC->_L38 = kcg_lit_int64(0);
  outC->_L39 = kcg_lit_int64(0);
  outC->_L40 = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L33 = kcg_lit_int64(0);
  outC->_L31 = kcg_lit_int64(0);
  outC->_L29 = kcg_lit_int64(0);
  outC->_L27 = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.q_dir = Q_DIR_Reverse;
  outC->_L9.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L9.nid_c = kcg_lit_int64(0);
  outC->_L9.nid_rbc = kcg_lit_int64(0);
  outC->_L9.nid_radio = kcg_lit_int64(0);
  outC->_L9.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L10.valid = kcg_true;
  outC->_L10.NID_PACKET = kcg_lit_int64(0);
  outC->_L10.Q_DIR = kcg_lit_int64(0);
  outC->_L10.L_PACKET = kcg_lit_int64(0);
  outC->_L10.Q_RBC = kcg_lit_int64(0);
  outC->_L10.NID_C = kcg_lit_int64(0);
  outC->_L10.NID_RBC = kcg_lit_int64(0);
  outC->_L10.NID_RADIO = kcg_lit_int64(0);
  outC->_L10.Q_SLEEPSESSION = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->P042_int.valid = kcg_true;
  outC->P042_int.NID_PACKET = kcg_lit_int64(0);
  outC->P042_int.Q_DIR = kcg_lit_int64(0);
  outC->P042_int.L_PACKET = kcg_lit_int64(0);
  outC->P042_int.Q_RBC = kcg_lit_int64(0);
  outC->P042_int.NID_C = kcg_lit_int64(0);
  outC->P042_int.NID_RBC = kcg_lit_int64(0);
  outC->P042_int.NID_RADIO = kcg_lit_int64(0);
  outC->P042_int.Q_SLEEPSESSION = kcg_lit_int64(0);
  /* _L4=(TM_conversions::CAST_Q_RBC_to_int#1)/ */
  CAST_Q_RBC_to_int_init_TM_conversions(&outC->Context_CAST_Q_RBC_to_int_1);
  /* _L11=(TM_conversions::CAST_Q_DIR_to_int#1)/ */
  CAST_Q_DIR_to_int_init_TM_conversions(&outC->Context_CAST_Q_DIR_to_int_1);
  /* _L27=(TM_conversions::CAST_NID_C_to_int#1)/ */
  CAST_NID_C_to_int_init_TM_conversions(&outC->Context_CAST_NID_C_to_int_1);
  /* _L29=(TM_conversions::CAST_NID_RBC_to_int#1)/ */
  CAST_NID_RBC_to_int_init_TM_conversions(&outC->Context_CAST_NID_RBC_to_int_1);
  /* _L31=(TM_conversions::CAST_NID_RADIO_to_int#1)/ */
  CAST_NID_RADIO_to_int_init_TM_conversions(
    &outC->Context_CAST_NID_RADIO_to_int_1);
  /* _L33=(TM_conversions::CAST_Q_SLEEPSESSION_to_int#1)/ */
  CAST_Q_SLEEPSESSION_to_int_init_TM_conversions(
    &outC->Context_CAST_Q_SLEEPSESSION_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P042_onboard_legacy_to_int_reset_TM_conversions(
  outC_C_P042_onboard_legacy_to_int_TM_conversions *outC)
{
  /* _L4=(TM_conversions::CAST_Q_RBC_to_int#1)/ */
  CAST_Q_RBC_to_int_reset_TM_conversions(&outC->Context_CAST_Q_RBC_to_int_1);
  /* _L11=(TM_conversions::CAST_Q_DIR_to_int#1)/ */
  CAST_Q_DIR_to_int_reset_TM_conversions(&outC->Context_CAST_Q_DIR_to_int_1);
  /* _L27=(TM_conversions::CAST_NID_C_to_int#1)/ */
  CAST_NID_C_to_int_reset_TM_conversions(&outC->Context_CAST_NID_C_to_int_1);
  /* _L29=(TM_conversions::CAST_NID_RBC_to_int#1)/ */
  CAST_NID_RBC_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_RBC_to_int_1);
  /* _L31=(TM_conversions::CAST_NID_RADIO_to_int#1)/ */
  CAST_NID_RADIO_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_RADIO_to_int_1);
  /* _L33=(TM_conversions::CAST_Q_SLEEPSESSION_to_int#1)/ */
  CAST_Q_SLEEPSESSION_to_int_reset_TM_conversions(
    &outC->Context_CAST_Q_SLEEPSESSION_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P042_onboard_legacy_to_int_TM_conversions.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

