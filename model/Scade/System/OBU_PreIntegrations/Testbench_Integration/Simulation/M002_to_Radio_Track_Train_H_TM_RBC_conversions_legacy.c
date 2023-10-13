/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"

/* TM_RBC_conversions_legacy::M002_to_Radio_Track_Train_H/ */
void M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
  /* M002_in/ */
  M_002_T_TM_radio_messages *M002_in,
  outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy *outC)
{
  static kcg_bool noname;
  static L_MESSAGE _1_noname;

  outC->_L25 = default_receivedSystemTime_TM_RBC_conversions_legacy;
  outC->_L24 = default_radioDevice_TM_RBC_conversions_legacy;
  outC->_L23 = default_m_version_TM_RBC_conversions_legacy;
  outC->_L22 = default_d_emergencystop_TM_RBC_conversions_legacy;
  outC->_L21 = default_q_dir_TM_RBC_conversions_legacy;
  outC->_L20 = default_d_ref_TM_RBC_conversions_legacy;
  outC->_L19 = default_t_sh_rqst_TM_RBC_conversions_legacy;
  outC->_L16 = default_nid_em_TM_RBC_conversions_legacy;
  outC->_L15 = default_t_train_reference_TM_RBC_conversions_legacy;
  kcg_copy_M_002_T_TM_radio_messages(&outC->_L1, M002_in);
  outC->_L4 = outC->_L1.l_message;
  _1_noname = outC->_L4;
  outC->_L2 = outC->_L1.valid;
  noname = outC->_L2;
  outC->_L3 = outC->_L1.nid_message;
  outC->_L5 = outC->_L1.t_train;
  outC->_L6 = outC->_L1.m_ack;
  outC->_L7 = outC->_L1.nid_lrbg;
  outC->_L27 = outC->_L1.q_scale;
  outC->_L26 = outC->_L1.d_sr;
  outC->_L14.radioDevice = outC->_L24;
  outC->_L14.receivedSystemTime = outC->_L25;
  outC->_L14.nid_message = outC->_L3;
  outC->_L14.t_train = outC->_L5;
  outC->_L14.m_ack = outC->_L6;
  outC->_L14.nid_lrbg = outC->_L7;
  outC->_L14.t_train_reference = outC->_L15;
  outC->_L14.nid_em = outC->_L16;
  outC->_L14.q_scale = outC->_L27;
  outC->_L14.d_sr = outC->_L26;
  outC->_L14.t_sh_rqst = outC->_L19;
  outC->_L14.d_ref = outC->_L20;
  outC->_L14.q_dir = outC->_L21;
  outC->_L14.d_emergencystop = outC->_L22;
  outC->_L14.m_version = outC->_L23;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->Radio_Track_Train_Hd_out,
    &outC->_L14);
}

#ifndef KCG_USER_DEFINED_INIT
void M002_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
  outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy *outC)
{
  outC->_L26 = kcg_lit_int64(0);
  outC->_L27 = Q_SCALE_10_cm_scale;
  outC->_L24 = kcg_lit_int64(0);
  outC->_L25 = kcg_lit_int64(0);
  outC->_L23 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L22 = kcg_lit_int64(0);
  outC->_L21 = Q_DIR_Reverse;
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L14.radioDevice = kcg_lit_int64(0);
  outC->_L14.receivedSystemTime = kcg_lit_int64(0);
  outC->_L14.nid_message = kcg_lit_int64(0);
  outC->_L14.t_train = kcg_lit_int64(0);
  outC->_L14.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L14.nid_lrbg = kcg_lit_int64(0);
  outC->_L14.t_train_reference = kcg_lit_int64(0);
  outC->_L14.nid_em = kcg_lit_int64(0);
  outC->_L14.q_scale = Q_SCALE_10_cm_scale;
  outC->_L14.d_sr = kcg_lit_int64(0);
  outC->_L14.t_sh_rqst = kcg_lit_int64(0);
  outC->_L14.d_ref = kcg_lit_int64(0);
  outC->_L14.q_dir = Q_DIR_Reverse;
  outC->_L14.d_emergencystop = kcg_lit_int64(0);
  outC->_L14.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L6 = M_ACK_No_acknowledgement_required;
  outC->_L7 = kcg_lit_int64(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_message = kcg_lit_int64(0);
  outC->_L1.l_message = kcg_lit_int64(0);
  outC->_L1.t_train = kcg_lit_int64(0);
  outC->_L1.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.nid_lrbg = kcg_lit_int64(0);
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.d_sr = kcg_lit_int64(0);
  outC->Radio_Track_Train_Hd_out.radioDevice = kcg_lit_int64(0);
  outC->Radio_Track_Train_Hd_out.receivedSystemTime = kcg_lit_int64(0);
  outC->Radio_Track_Train_Hd_out.nid_message = kcg_lit_int64(0);
  outC->Radio_Track_Train_Hd_out.t_train = kcg_lit_int64(0);
  outC->Radio_Track_Train_Hd_out.m_ack = M_ACK_No_acknowledgement_required;
  outC->Radio_Track_Train_Hd_out.nid_lrbg = kcg_lit_int64(0);
  outC->Radio_Track_Train_Hd_out.t_train_reference = kcg_lit_int64(0);
  outC->Radio_Track_Train_Hd_out.nid_em = kcg_lit_int64(0);
  outC->Radio_Track_Train_Hd_out.q_scale = Q_SCALE_10_cm_scale;
  outC->Radio_Track_Train_Hd_out.d_sr = kcg_lit_int64(0);
  outC->Radio_Track_Train_Hd_out.t_sh_rqst = kcg_lit_int64(0);
  outC->Radio_Track_Train_Hd_out.d_ref = kcg_lit_int64(0);
  outC->Radio_Track_Train_Hd_out.q_dir = Q_DIR_Reverse;
  outC->Radio_Track_Train_Hd_out.d_emergencystop = kcg_lit_int64(0);
  outC->Radio_Track_Train_Hd_out.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void M002_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
  outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

