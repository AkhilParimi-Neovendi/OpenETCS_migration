/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_TrackTrainMessage_to_Int_TM_conversions.h"

/* TM_conversions::C_TrackTrainMessage_to_Int/ */
void C_TrackTrainMessage_to_Int_TM_conversions(
  /* Message_In/ */
  Radio_TrackTrain_Header_T_TM_transitional *Message_In,
  outC_C_TrackTrainMessage_to_Int_TM_conversions *outC)
{
  kcg_copy_Radio_TrackTrain_Header_T_TM_transitional(&outC->_L1, Message_In);
  outC->_L15 = outC->_L1.d_emergencystop;
  /* _L45=(TM_conversions::CAST_D_EMERGENCYSTOP_to_int#1)/ */
  CAST_D_EMERGENCYSTOP_to_int_TM_conversions(
    outC->_L15,
    &outC->Context_CAST_D_EMERGENCYSTOP_to_int_1);
  outC->_L45 = outC->Context_CAST_D_EMERGENCYSTOP_to_int_1.d_emergencystop_int;
  outC->_L16 = outC->_L1.m_version;
  /* _L44=(TM_conversions::CAST_M_VERSION_to_int#1)/ */
  CAST_M_VERSION_to_int_TM_conversions(
    outC->_L16,
    &outC->Context_CAST_M_VERSION_to_int_1);
  outC->_L44 = outC->Context_CAST_M_VERSION_to_int_1.m_version_int;
  outC->_L14 = outC->_L1.q_dir;
  /* _L43=(TM_conversions::CAST_Q_DIR_to_int#1)/ */
  CAST_Q_DIR_to_int_TM_conversions(
    outC->_L14,
    &outC->Context_CAST_Q_DIR_to_int_1);
  outC->_L43 = outC->Context_CAST_Q_DIR_to_int_1.q_dir_int;
  outC->_L13 = outC->_L1.d_ref;
  /* _L42=(TM_conversions::CAST_D_REF_to_int#1)/ */
  CAST_D_REF_to_int_TM_conversions(
    outC->_L13,
    &outC->Context_CAST_D_REF_to_int_1);
  outC->_L42 = outC->Context_CAST_D_REF_to_int_1.d_ref_int;
  outC->_L12 = outC->_L1.t_sh_rqst;
  /* _L41=(TM_conversions::CAST_T_TRAIN_to_int#3)/ */
  CAST_T_TRAIN_to_int_TM_conversions(
    outC->_L12,
    &outC->Context_CAST_T_TRAIN_to_int_3);
  outC->_L41 = outC->Context_CAST_T_TRAIN_to_int_3.t_train_int;
  outC->_L11 = outC->_L1.d_sr;
  /* _L40=(TM_conversions::CAST_D_SR_to_int#1)/ */
  CAST_D_SR_to_int_TM_conversions(
    outC->_L11,
    &outC->Context_CAST_D_SR_to_int_1);
  outC->_L40 = outC->Context_CAST_D_SR_to_int_1.d_sr_int;
  outC->_L10 = outC->_L1.q_scale;
  /* _L39=(TM_conversions::CAST_Q_SCALE_to_int#1)/ */
  CAST_Q_SCALE_to_int_TM_conversions(
    outC->_L10,
    &outC->Context_CAST_Q_SCALE_to_int_1);
  outC->_L39 = outC->Context_CAST_Q_SCALE_to_int_1.d;
  outC->_L9 = outC->_L1.nid_em;
  /* _L38=(TM_conversions::CAST_NID_EM_to_int#1)/ */
  CAST_NID_EM_to_int_TM_conversions(
    outC->_L9,
    &outC->Context_CAST_NID_EM_to_int_1);
  outC->_L38 = outC->Context_CAST_NID_EM_to_int_1.nid_em_int;
  outC->_L8 = outC->_L1.t_train_reference;
  /* _L37=(TM_conversions::CAST_T_TRAIN_to_int#2)/ */
  CAST_T_TRAIN_to_int_TM_conversions(
    outC->_L8,
    &outC->Context_CAST_T_TRAIN_to_int_2);
  outC->_L37 = outC->Context_CAST_T_TRAIN_to_int_2.t_train_int;
  outC->_L7 = outC->_L1.nid_lrbg;
  /* _L36=(TM_conversions::CAST_NID_LRBG_to_int#1)/ */
  CAST_NID_LRBG_to_int_TM_conversions(
    outC->_L7,
    &outC->Context_CAST_NID_LRBG_to_int_1);
  outC->_L36 = outC->Context_CAST_NID_LRBG_to_int_1.nid_lrbg_int;
  outC->_L6 = outC->_L1.m_ack;
  /* _L35=(TM_conversions::CAST_M_ACK_to_int#1)/ */
  CAST_M_ACK_to_int_TM_conversions(
    outC->_L6,
    &outC->Context_CAST_M_ACK_to_int_1);
  outC->_L35 = outC->Context_CAST_M_ACK_to_int_1.m_ack_int;
  outC->_L5 = outC->_L1.t_train;
  /* _L34=(TM_conversions::CAST_T_TRAIN_to_int#1)/ */
  CAST_T_TRAIN_to_int_TM_conversions(
    outC->_L5,
    &outC->Context_CAST_T_TRAIN_to_int_1);
  outC->_L34 = outC->Context_CAST_T_TRAIN_to_int_1.t_train_int;
  outC->_L4 = outC->_L1.nid_message;
  /* _L33=(TM_conversions::CAST_NID_MESSAGE_to_int#1)/ */
  CAST_NID_MESSAGE_to_int_TM_conversions(
    outC->_L4,
    &outC->Context_CAST_NID_MESSAGE_to_int_1);
  outC->_L33 = outC->Context_CAST_NID_MESSAGE_to_int_1.nid_message_int;
  outC->_L2 = outC->_L1.radioDevice;
  outC->_L3 = outC->_L1.receivedSystemTime;
  outC->_L32.radioDevice = outC->_L2;
  outC->_L32.receivedSystemTime = outC->_L3;
  outC->_L32.nid_message = outC->_L33;
  outC->_L32.t_train = outC->_L34;
  outC->_L32.m_ack = outC->_L35;
  outC->_L32.nid_lrbg = outC->_L36;
  outC->_L32.t_train_reference = outC->_L37;
  outC->_L32.nid_em = outC->_L38;
  outC->_L32.q_scale = outC->_L39;
  outC->_L32.d_sr = outC->_L40;
  outC->_L32.t_sh_rqst = outC->_L41;
  outC->_L32.d_ref = outC->_L42;
  outC->_L32.q_dir = outC->_L43;
  outC->_L32.d_emergencystop = outC->_L45;
  outC->_L32.m_version = outC->_L44;
  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->Message_Out, &outC->_L32);
}

#ifndef KCG_USER_DEFINED_INIT
void C_TrackTrainMessage_to_Int_init_TM_conversions(
  outC_C_TrackTrainMessage_to_Int_TM_conversions *outC)
{
  outC->_L45 = kcg_lit_int32(0);
  outC->_L44 = kcg_lit_int32(0);
  outC->_L43 = kcg_lit_int32(0);
  outC->_L42 = kcg_lit_int32(0);
  outC->_L41 = kcg_lit_int32(0);
  outC->_L40 = kcg_lit_int32(0);
  outC->_L39 = kcg_lit_int32(0);
  outC->_L38 = kcg_lit_int32(0);
  outC->_L37 = kcg_lit_int32(0);
  outC->_L36 = kcg_lit_int32(0);
  outC->_L35 = kcg_lit_int32(0);
  outC->_L34 = kcg_lit_int32(0);
  outC->_L33 = kcg_lit_int32(0);
  outC->_L32.radioDevice = kcg_lit_int32(0);
  outC->_L32.receivedSystemTime = kcg_lit_int32(0);
  outC->_L32.nid_message = kcg_lit_int32(0);
  outC->_L32.t_train = kcg_lit_int32(0);
  outC->_L32.m_ack = kcg_lit_int32(0);
  outC->_L32.nid_lrbg = kcg_lit_int32(0);
  outC->_L32.t_train_reference = kcg_lit_int32(0);
  outC->_L32.nid_em = kcg_lit_int32(0);
  outC->_L32.q_scale = kcg_lit_int32(0);
  outC->_L32.d_sr = kcg_lit_int32(0);
  outC->_L32.t_sh_rqst = kcg_lit_int32(0);
  outC->_L32.d_ref = kcg_lit_int32(0);
  outC->_L32.q_dir = kcg_lit_int32(0);
  outC->_L32.d_emergencystop = kcg_lit_int32(0);
  outC->_L32.m_version = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L6 = M_ACK_No_acknowledgement_required;
  outC->_L7 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L10 = Q_SCALE_10_cm_scale;
  outC->_L11 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L14 = Q_DIR_Reverse;
  outC->_L15 = kcg_lit_int32(0);
  outC->_L16 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.radioDevice = kcg_lit_int32(0);
  outC->_L1.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1.nid_message = kcg_lit_int32(0);
  outC->_L1.t_train = kcg_lit_int32(0);
  outC->_L1.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.nid_lrbg = kcg_lit_int32(0);
  outC->_L1.t_train_reference = kcg_lit_int32(0);
  outC->_L1.nid_em = kcg_lit_int32(0);
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.d_sr = kcg_lit_int32(0);
  outC->_L1.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1.d_ref = kcg_lit_int32(0);
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.d_emergencystop = kcg_lit_int32(0);
  outC->_L1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Message_Out.radioDevice = kcg_lit_int32(0);
  outC->Message_Out.receivedSystemTime = kcg_lit_int32(0);
  outC->Message_Out.nid_message = kcg_lit_int32(0);
  outC->Message_Out.t_train = kcg_lit_int32(0);
  outC->Message_Out.m_ack = kcg_lit_int32(0);
  outC->Message_Out.nid_lrbg = kcg_lit_int32(0);
  outC->Message_Out.t_train_reference = kcg_lit_int32(0);
  outC->Message_Out.nid_em = kcg_lit_int32(0);
  outC->Message_Out.q_scale = kcg_lit_int32(0);
  outC->Message_Out.d_sr = kcg_lit_int32(0);
  outC->Message_Out.t_sh_rqst = kcg_lit_int32(0);
  outC->Message_Out.d_ref = kcg_lit_int32(0);
  outC->Message_Out.q_dir = kcg_lit_int32(0);
  outC->Message_Out.d_emergencystop = kcg_lit_int32(0);
  outC->Message_Out.m_version = kcg_lit_int32(0);
  /* _L33=(TM_conversions::CAST_NID_MESSAGE_to_int#1)/ */
  CAST_NID_MESSAGE_to_int_init_TM_conversions(
    &outC->Context_CAST_NID_MESSAGE_to_int_1);
  /* _L34=(TM_conversions::CAST_T_TRAIN_to_int#1)/ */
  CAST_T_TRAIN_to_int_init_TM_conversions(&outC->Context_CAST_T_TRAIN_to_int_1);
  /* _L35=(TM_conversions::CAST_M_ACK_to_int#1)/ */
  CAST_M_ACK_to_int_init_TM_conversions(&outC->Context_CAST_M_ACK_to_int_1);
  /* _L36=(TM_conversions::CAST_NID_LRBG_to_int#1)/ */
  CAST_NID_LRBG_to_int_init_TM_conversions(
    &outC->Context_CAST_NID_LRBG_to_int_1);
  /* _L37=(TM_conversions::CAST_T_TRAIN_to_int#2)/ */
  CAST_T_TRAIN_to_int_init_TM_conversions(&outC->Context_CAST_T_TRAIN_to_int_2);
  /* _L38=(TM_conversions::CAST_NID_EM_to_int#1)/ */
  CAST_NID_EM_to_int_init_TM_conversions(&outC->Context_CAST_NID_EM_to_int_1);
  /* _L39=(TM_conversions::CAST_Q_SCALE_to_int#1)/ */
  CAST_Q_SCALE_to_int_init_TM_conversions(&outC->Context_CAST_Q_SCALE_to_int_1);
  /* _L40=(TM_conversions::CAST_D_SR_to_int#1)/ */
  CAST_D_SR_to_int_init_TM_conversions(&outC->Context_CAST_D_SR_to_int_1);
  /* _L41=(TM_conversions::CAST_T_TRAIN_to_int#3)/ */
  CAST_T_TRAIN_to_int_init_TM_conversions(&outC->Context_CAST_T_TRAIN_to_int_3);
  /* _L42=(TM_conversions::CAST_D_REF_to_int#1)/ */
  CAST_D_REF_to_int_init_TM_conversions(&outC->Context_CAST_D_REF_to_int_1);
  /* _L43=(TM_conversions::CAST_Q_DIR_to_int#1)/ */
  CAST_Q_DIR_to_int_init_TM_conversions(&outC->Context_CAST_Q_DIR_to_int_1);
  /* _L44=(TM_conversions::CAST_M_VERSION_to_int#1)/ */
  CAST_M_VERSION_to_int_init_TM_conversions(
    &outC->Context_CAST_M_VERSION_to_int_1);
  /* _L45=(TM_conversions::CAST_D_EMERGENCYSTOP_to_int#1)/ */
  CAST_D_EMERGENCYSTOP_to_int_init_TM_conversions(
    &outC->Context_CAST_D_EMERGENCYSTOP_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_TrackTrainMessage_to_Int_reset_TM_conversions(
  outC_C_TrackTrainMessage_to_Int_TM_conversions *outC)
{
  /* _L33=(TM_conversions::CAST_NID_MESSAGE_to_int#1)/ */
  CAST_NID_MESSAGE_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_MESSAGE_to_int_1);
  /* _L34=(TM_conversions::CAST_T_TRAIN_to_int#1)/ */
  CAST_T_TRAIN_to_int_reset_TM_conversions(
    &outC->Context_CAST_T_TRAIN_to_int_1);
  /* _L35=(TM_conversions::CAST_M_ACK_to_int#1)/ */
  CAST_M_ACK_to_int_reset_TM_conversions(&outC->Context_CAST_M_ACK_to_int_1);
  /* _L36=(TM_conversions::CAST_NID_LRBG_to_int#1)/ */
  CAST_NID_LRBG_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_LRBG_to_int_1);
  /* _L37=(TM_conversions::CAST_T_TRAIN_to_int#2)/ */
  CAST_T_TRAIN_to_int_reset_TM_conversions(
    &outC->Context_CAST_T_TRAIN_to_int_2);
  /* _L38=(TM_conversions::CAST_NID_EM_to_int#1)/ */
  CAST_NID_EM_to_int_reset_TM_conversions(&outC->Context_CAST_NID_EM_to_int_1);
  /* _L39=(TM_conversions::CAST_Q_SCALE_to_int#1)/ */
  CAST_Q_SCALE_to_int_reset_TM_conversions(
    &outC->Context_CAST_Q_SCALE_to_int_1);
  /* _L40=(TM_conversions::CAST_D_SR_to_int#1)/ */
  CAST_D_SR_to_int_reset_TM_conversions(&outC->Context_CAST_D_SR_to_int_1);
  /* _L41=(TM_conversions::CAST_T_TRAIN_to_int#3)/ */
  CAST_T_TRAIN_to_int_reset_TM_conversions(
    &outC->Context_CAST_T_TRAIN_to_int_3);
  /* _L42=(TM_conversions::CAST_D_REF_to_int#1)/ */
  CAST_D_REF_to_int_reset_TM_conversions(&outC->Context_CAST_D_REF_to_int_1);
  /* _L43=(TM_conversions::CAST_Q_DIR_to_int#1)/ */
  CAST_Q_DIR_to_int_reset_TM_conversions(&outC->Context_CAST_Q_DIR_to_int_1);
  /* _L44=(TM_conversions::CAST_M_VERSION_to_int#1)/ */
  CAST_M_VERSION_to_int_reset_TM_conversions(
    &outC->Context_CAST_M_VERSION_to_int_1);
  /* _L45=(TM_conversions::CAST_D_EMERGENCYSTOP_to_int#1)/ */
  CAST_D_EMERGENCYSTOP_to_int_reset_TM_conversions(
    &outC->Context_CAST_D_EMERGENCYSTOP_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_TrackTrainMessage_to_Int_TM_conversions.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

