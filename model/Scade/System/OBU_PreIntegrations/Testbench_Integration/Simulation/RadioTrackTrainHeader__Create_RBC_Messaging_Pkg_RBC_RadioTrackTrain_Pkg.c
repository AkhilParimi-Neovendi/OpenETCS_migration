/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create/ */
void RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* in_NID_MESSAGE/ */
  NID_MESSAGE in_NID_MESSAGE,
  /* in_T_TRAIN/ */
  T_TRAIN in_T_TRAIN,
  /* in_M_ACK/ */
  M_ACK in_M_ACK,
  /* in_NID_LRBG/ */
  NID_LRBG in_NID_LRBG,
  /* in_T_TRAIN_Ref/ */
  T_TRAIN in_T_TRAIN_Ref,
  /* in_NID_EM/ */
  NID_EM in_NID_EM,
  /* in_Q_SCALE/ */
  Q_SCALE in_Q_SCALE,
  /* in_T_TRAIN_Sh/ */
  T_TRAIN in_T_TRAIN_Sh,
  /* in_D_REF/ */
  D_REF in_D_REF,
  /* in_Q_DIR/ */
  Q_DIR in_Q_DIR,
  /* in_D_EMERGENCYSTOP/ */
  D_EMERGENCYSTOP in_D_EMERGENCYSTOP,
  /* in_M_VERSION/ */
  M_VERSION in_M_VERSION,
  outC_RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L41,
    (Radio_TrackTrain_Header_T_TM *) &RADIO_TRACK_TRAIN_HEADER_DEFAULT);
  outC->_L1 = in_NID_MESSAGE;
  /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_NID_MESSAGE#1)/ */
  RadioTrackTrainHeader__Set_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L41,
    outC->_L1,
    &outC->Context_RadioTrackTrainHeader__Set_NID_MESSAGE_1);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L14,
    &outC->Context_RadioTrackTrainHeader__Set_NID_MESSAGE_1.outRadioTrackTrainHeader);
  outC->_L2 = in_T_TRAIN;
  /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN#1)/ */
  RadioTrackTrainHeader__Set_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L14,
    outC->_L2,
    &outC->Context_RadioTrackTrainHeader__Set_T_TRAIN_1);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L15,
    &outC->Context_RadioTrackTrainHeader__Set_T_TRAIN_1.outRadioTrackTrainHeader);
  outC->_L3 = in_M_ACK;
  /* _L16=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_M_ACK#1)/ */
  RadioTrackTrainHeader__Set_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L15,
    outC->_L3,
    &outC->Context_RadioTrackTrainHeader__Set_M_ACK_1);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L16,
    &outC->Context_RadioTrackTrainHeader__Set_M_ACK_1.outRadioTrackTrainHeader);
  outC->_L4 = in_NID_LRBG;
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_NID_LRBG#1)/ */
  RadioTrackTrainHeader__Set_NID_LRBG_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L16,
    outC->_L4,
    &outC->Context_RadioTrackTrainHeader__Set_NID_LRBG_1);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L17,
    &outC->Context_RadioTrackTrainHeader__Set_NID_LRBG_1.outRadioTrackTrainHeader);
  outC->_L5 = in_T_TRAIN_Ref;
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN_Ref#1)/ */
  RadioTrackTrainHeader__Set_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L17,
    outC->_L5,
    &outC->Context_RadioTrackTrainHeader__Set_T_TRAIN_Ref_1);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L18,
    &outC->Context_RadioTrackTrainHeader__Set_T_TRAIN_Ref_1.outRadioTrackTrainHeader);
  outC->_L6 = in_NID_EM;
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_NID_EM#1)/ */
  RadioTrackTrainHeader__Set_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L18,
    outC->_L6,
    &outC->Context_RadioTrackTrainHeader__Set_NID_EM_1);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L19,
    &outC->Context_RadioTrackTrainHeader__Set_NID_EM_1.outRadioTrackTrainHeader);
  outC->_L7 = in_Q_SCALE;
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_SCALE#1)/ */
  RadioTrackTrainHeader__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L19,
    outC->_L7,
    &outC->Context_RadioTrackTrainHeader__Set_Q_SCALE_1);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L21,
    &outC->Context_RadioTrackTrainHeader__Set_Q_SCALE_1.outRadioTrackTrainHeader);
  outC->_L8 = in_T_TRAIN_Sh;
  /* _L22=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN_Sh_Req#1)/ */
  RadioTrackTrainHeader__Set_T_TRAIN_Sh_Req_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L21,
    outC->_L8,
    &outC->Context_RadioTrackTrainHeader__Set_T_TRAIN_Sh_Req_1);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L22,
    &outC->Context_RadioTrackTrainHeader__Set_T_TRAIN_Sh_Req_1.outRadioTrackTrainHeader);
  outC->_L9 = in_D_REF;
  /* _L23=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_D_REF#1)/ */
  RadioTrackTrainHeader__Set_D_REF_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L22,
    outC->_L9,
    &outC->Context_RadioTrackTrainHeader__Set_D_REF_1);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L23,
    &outC->Context_RadioTrackTrainHeader__Set_D_REF_1.outRadioTrackTrainHeader);
  outC->_L10 = in_Q_DIR;
  /* _L26=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_DIR#1)/ */
  RadioTrackTrainHeader__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L23,
    outC->_L10,
    &outC->Context_RadioTrackTrainHeader__Set_Q_DIR_1);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L26,
    &outC->Context_RadioTrackTrainHeader__Set_Q_DIR_1.outRadioTrackTrainHeader);
  outC->_L11 = in_D_EMERGENCYSTOP;
  /* _L29=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_D_EMERGENCYSTOP#1)/ */
  RadioTrackTrainHeader__Set_D_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L26,
    outC->_L11,
    &outC->Context_RadioTrackTrainHeader__Set_D_EMERGENCYSTOP_1);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L29,
    &outC->Context_RadioTrackTrainHeader__Set_D_EMERGENCYSTOP_1.outRadioTrackTrainHeader);
  outC->_L12 = in_M_VERSION;
  /* _L30=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_M_VERSION#1)/ */
  RadioTrackTrainHeader__Set_M_VERSION_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L29,
    outC->_L12,
    &outC->Context_RadioTrackTrainHeader__Set_M_VERSION_1);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L30,
    &outC->Context_RadioTrackTrainHeader__Set_M_VERSION_1.outRadioTrackTrainHeader);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->outRadioTrackTrainHeader,
    &outC->_L30);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainHeader__Create_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC_RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
  outC->_L41.radioDevice = kcg_lit_int32(0);
  outC->_L41.receivedSystemTime = kcg_lit_int32(0);
  outC->_L41.nid_message = kcg_lit_int32(0);
  outC->_L41.t_train = kcg_lit_int32(0);
  outC->_L41.m_ack = kcg_lit_int32(0);
  outC->_L41.nid_lrbg = kcg_lit_int32(0);
  outC->_L41.t_train_reference = kcg_lit_int32(0);
  outC->_L41.nid_em = kcg_lit_int32(0);
  outC->_L41.q_scale = kcg_lit_int32(0);
  outC->_L41.d_sr = kcg_lit_int32(0);
  outC->_L41.t_sh_rqst = kcg_lit_int32(0);
  outC->_L41.d_ref = kcg_lit_int32(0);
  outC->_L41.q_dir = kcg_lit_int32(0);
  outC->_L41.d_emergencystop = kcg_lit_int32(0);
  outC->_L41.m_version = kcg_lit_int32(0);
  outC->_L30.radioDevice = kcg_lit_int32(0);
  outC->_L30.receivedSystemTime = kcg_lit_int32(0);
  outC->_L30.nid_message = kcg_lit_int32(0);
  outC->_L30.t_train = kcg_lit_int32(0);
  outC->_L30.m_ack = kcg_lit_int32(0);
  outC->_L30.nid_lrbg = kcg_lit_int32(0);
  outC->_L30.t_train_reference = kcg_lit_int32(0);
  outC->_L30.nid_em = kcg_lit_int32(0);
  outC->_L30.q_scale = kcg_lit_int32(0);
  outC->_L30.d_sr = kcg_lit_int32(0);
  outC->_L30.t_sh_rqst = kcg_lit_int32(0);
  outC->_L30.d_ref = kcg_lit_int32(0);
  outC->_L30.q_dir = kcg_lit_int32(0);
  outC->_L30.d_emergencystop = kcg_lit_int32(0);
  outC->_L30.m_version = kcg_lit_int32(0);
  outC->_L29.radioDevice = kcg_lit_int32(0);
  outC->_L29.receivedSystemTime = kcg_lit_int32(0);
  outC->_L29.nid_message = kcg_lit_int32(0);
  outC->_L29.t_train = kcg_lit_int32(0);
  outC->_L29.m_ack = kcg_lit_int32(0);
  outC->_L29.nid_lrbg = kcg_lit_int32(0);
  outC->_L29.t_train_reference = kcg_lit_int32(0);
  outC->_L29.nid_em = kcg_lit_int32(0);
  outC->_L29.q_scale = kcg_lit_int32(0);
  outC->_L29.d_sr = kcg_lit_int32(0);
  outC->_L29.t_sh_rqst = kcg_lit_int32(0);
  outC->_L29.d_ref = kcg_lit_int32(0);
  outC->_L29.q_dir = kcg_lit_int32(0);
  outC->_L29.d_emergencystop = kcg_lit_int32(0);
  outC->_L29.m_version = kcg_lit_int32(0);
  outC->_L26.radioDevice = kcg_lit_int32(0);
  outC->_L26.receivedSystemTime = kcg_lit_int32(0);
  outC->_L26.nid_message = kcg_lit_int32(0);
  outC->_L26.t_train = kcg_lit_int32(0);
  outC->_L26.m_ack = kcg_lit_int32(0);
  outC->_L26.nid_lrbg = kcg_lit_int32(0);
  outC->_L26.t_train_reference = kcg_lit_int32(0);
  outC->_L26.nid_em = kcg_lit_int32(0);
  outC->_L26.q_scale = kcg_lit_int32(0);
  outC->_L26.d_sr = kcg_lit_int32(0);
  outC->_L26.t_sh_rqst = kcg_lit_int32(0);
  outC->_L26.d_ref = kcg_lit_int32(0);
  outC->_L26.q_dir = kcg_lit_int32(0);
  outC->_L26.d_emergencystop = kcg_lit_int32(0);
  outC->_L26.m_version = kcg_lit_int32(0);
  outC->_L23.radioDevice = kcg_lit_int32(0);
  outC->_L23.receivedSystemTime = kcg_lit_int32(0);
  outC->_L23.nid_message = kcg_lit_int32(0);
  outC->_L23.t_train = kcg_lit_int32(0);
  outC->_L23.m_ack = kcg_lit_int32(0);
  outC->_L23.nid_lrbg = kcg_lit_int32(0);
  outC->_L23.t_train_reference = kcg_lit_int32(0);
  outC->_L23.nid_em = kcg_lit_int32(0);
  outC->_L23.q_scale = kcg_lit_int32(0);
  outC->_L23.d_sr = kcg_lit_int32(0);
  outC->_L23.t_sh_rqst = kcg_lit_int32(0);
  outC->_L23.d_ref = kcg_lit_int32(0);
  outC->_L23.q_dir = kcg_lit_int32(0);
  outC->_L23.d_emergencystop = kcg_lit_int32(0);
  outC->_L23.m_version = kcg_lit_int32(0);
  outC->_L22.radioDevice = kcg_lit_int32(0);
  outC->_L22.receivedSystemTime = kcg_lit_int32(0);
  outC->_L22.nid_message = kcg_lit_int32(0);
  outC->_L22.t_train = kcg_lit_int32(0);
  outC->_L22.m_ack = kcg_lit_int32(0);
  outC->_L22.nid_lrbg = kcg_lit_int32(0);
  outC->_L22.t_train_reference = kcg_lit_int32(0);
  outC->_L22.nid_em = kcg_lit_int32(0);
  outC->_L22.q_scale = kcg_lit_int32(0);
  outC->_L22.d_sr = kcg_lit_int32(0);
  outC->_L22.t_sh_rqst = kcg_lit_int32(0);
  outC->_L22.d_ref = kcg_lit_int32(0);
  outC->_L22.q_dir = kcg_lit_int32(0);
  outC->_L22.d_emergencystop = kcg_lit_int32(0);
  outC->_L22.m_version = kcg_lit_int32(0);
  outC->_L21.radioDevice = kcg_lit_int32(0);
  outC->_L21.receivedSystemTime = kcg_lit_int32(0);
  outC->_L21.nid_message = kcg_lit_int32(0);
  outC->_L21.t_train = kcg_lit_int32(0);
  outC->_L21.m_ack = kcg_lit_int32(0);
  outC->_L21.nid_lrbg = kcg_lit_int32(0);
  outC->_L21.t_train_reference = kcg_lit_int32(0);
  outC->_L21.nid_em = kcg_lit_int32(0);
  outC->_L21.q_scale = kcg_lit_int32(0);
  outC->_L21.d_sr = kcg_lit_int32(0);
  outC->_L21.t_sh_rqst = kcg_lit_int32(0);
  outC->_L21.d_ref = kcg_lit_int32(0);
  outC->_L21.q_dir = kcg_lit_int32(0);
  outC->_L21.d_emergencystop = kcg_lit_int32(0);
  outC->_L21.m_version = kcg_lit_int32(0);
  outC->_L19.radioDevice = kcg_lit_int32(0);
  outC->_L19.receivedSystemTime = kcg_lit_int32(0);
  outC->_L19.nid_message = kcg_lit_int32(0);
  outC->_L19.t_train = kcg_lit_int32(0);
  outC->_L19.m_ack = kcg_lit_int32(0);
  outC->_L19.nid_lrbg = kcg_lit_int32(0);
  outC->_L19.t_train_reference = kcg_lit_int32(0);
  outC->_L19.nid_em = kcg_lit_int32(0);
  outC->_L19.q_scale = kcg_lit_int32(0);
  outC->_L19.d_sr = kcg_lit_int32(0);
  outC->_L19.t_sh_rqst = kcg_lit_int32(0);
  outC->_L19.d_ref = kcg_lit_int32(0);
  outC->_L19.q_dir = kcg_lit_int32(0);
  outC->_L19.d_emergencystop = kcg_lit_int32(0);
  outC->_L19.m_version = kcg_lit_int32(0);
  outC->_L18.radioDevice = kcg_lit_int32(0);
  outC->_L18.receivedSystemTime = kcg_lit_int32(0);
  outC->_L18.nid_message = kcg_lit_int32(0);
  outC->_L18.t_train = kcg_lit_int32(0);
  outC->_L18.m_ack = kcg_lit_int32(0);
  outC->_L18.nid_lrbg = kcg_lit_int32(0);
  outC->_L18.t_train_reference = kcg_lit_int32(0);
  outC->_L18.nid_em = kcg_lit_int32(0);
  outC->_L18.q_scale = kcg_lit_int32(0);
  outC->_L18.d_sr = kcg_lit_int32(0);
  outC->_L18.t_sh_rqst = kcg_lit_int32(0);
  outC->_L18.d_ref = kcg_lit_int32(0);
  outC->_L18.q_dir = kcg_lit_int32(0);
  outC->_L18.d_emergencystop = kcg_lit_int32(0);
  outC->_L18.m_version = kcg_lit_int32(0);
  outC->_L17.radioDevice = kcg_lit_int32(0);
  outC->_L17.receivedSystemTime = kcg_lit_int32(0);
  outC->_L17.nid_message = kcg_lit_int32(0);
  outC->_L17.t_train = kcg_lit_int32(0);
  outC->_L17.m_ack = kcg_lit_int32(0);
  outC->_L17.nid_lrbg = kcg_lit_int32(0);
  outC->_L17.t_train_reference = kcg_lit_int32(0);
  outC->_L17.nid_em = kcg_lit_int32(0);
  outC->_L17.q_scale = kcg_lit_int32(0);
  outC->_L17.d_sr = kcg_lit_int32(0);
  outC->_L17.t_sh_rqst = kcg_lit_int32(0);
  outC->_L17.d_ref = kcg_lit_int32(0);
  outC->_L17.q_dir = kcg_lit_int32(0);
  outC->_L17.d_emergencystop = kcg_lit_int32(0);
  outC->_L17.m_version = kcg_lit_int32(0);
  outC->_L16.radioDevice = kcg_lit_int32(0);
  outC->_L16.receivedSystemTime = kcg_lit_int32(0);
  outC->_L16.nid_message = kcg_lit_int32(0);
  outC->_L16.t_train = kcg_lit_int32(0);
  outC->_L16.m_ack = kcg_lit_int32(0);
  outC->_L16.nid_lrbg = kcg_lit_int32(0);
  outC->_L16.t_train_reference = kcg_lit_int32(0);
  outC->_L16.nid_em = kcg_lit_int32(0);
  outC->_L16.q_scale = kcg_lit_int32(0);
  outC->_L16.d_sr = kcg_lit_int32(0);
  outC->_L16.t_sh_rqst = kcg_lit_int32(0);
  outC->_L16.d_ref = kcg_lit_int32(0);
  outC->_L16.q_dir = kcg_lit_int32(0);
  outC->_L16.d_emergencystop = kcg_lit_int32(0);
  outC->_L16.m_version = kcg_lit_int32(0);
  outC->_L15.radioDevice = kcg_lit_int32(0);
  outC->_L15.receivedSystemTime = kcg_lit_int32(0);
  outC->_L15.nid_message = kcg_lit_int32(0);
  outC->_L15.t_train = kcg_lit_int32(0);
  outC->_L15.m_ack = kcg_lit_int32(0);
  outC->_L15.nid_lrbg = kcg_lit_int32(0);
  outC->_L15.t_train_reference = kcg_lit_int32(0);
  outC->_L15.nid_em = kcg_lit_int32(0);
  outC->_L15.q_scale = kcg_lit_int32(0);
  outC->_L15.d_sr = kcg_lit_int32(0);
  outC->_L15.t_sh_rqst = kcg_lit_int32(0);
  outC->_L15.d_ref = kcg_lit_int32(0);
  outC->_L15.q_dir = kcg_lit_int32(0);
  outC->_L15.d_emergencystop = kcg_lit_int32(0);
  outC->_L15.m_version = kcg_lit_int32(0);
  outC->_L14.radioDevice = kcg_lit_int32(0);
  outC->_L14.receivedSystemTime = kcg_lit_int32(0);
  outC->_L14.nid_message = kcg_lit_int32(0);
  outC->_L14.t_train = kcg_lit_int32(0);
  outC->_L14.m_ack = kcg_lit_int32(0);
  outC->_L14.nid_lrbg = kcg_lit_int32(0);
  outC->_L14.t_train_reference = kcg_lit_int32(0);
  outC->_L14.nid_em = kcg_lit_int32(0);
  outC->_L14.q_scale = kcg_lit_int32(0);
  outC->_L14.d_sr = kcg_lit_int32(0);
  outC->_L14.t_sh_rqst = kcg_lit_int32(0);
  outC->_L14.d_ref = kcg_lit_int32(0);
  outC->_L14.q_dir = kcg_lit_int32(0);
  outC->_L14.d_emergencystop = kcg_lit_int32(0);
  outC->_L14.m_version = kcg_lit_int32(0);
  outC->_L12 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = Q_DIR_Reverse;
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = Q_SCALE_10_cm_scale;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = M_ACK_No_acknowledgement_required;
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.radioDevice = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.receivedSystemTime = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.nid_message = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.t_train = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.m_ack = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.nid_lrbg = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.t_train_reference = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.nid_em = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.q_scale = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.d_sr = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.t_sh_rqst = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.d_ref = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.q_dir = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.d_emergencystop = kcg_lit_int32(0);
  outC->outRadioTrackTrainHeader.m_version = kcg_lit_int32(0);
  /* _L30=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_M_VERSION#1)/ */
  RadioTrackTrainHeader__Set_M_VERSION_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_M_VERSION_1);
  /* _L29=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_D_EMERGENCYSTOP#1)/ */
  RadioTrackTrainHeader__Set_D_EMERGENCYSTOP_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_D_EMERGENCYSTOP_1);
  /* _L26=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_DIR#1)/ */
  RadioTrackTrainHeader__Set_Q_DIR_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_Q_DIR_1);
  /* _L23=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_D_REF#1)/ */
  RadioTrackTrainHeader__Set_D_REF_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_D_REF_1);
  /* _L22=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN_Sh_Req#1)/ */
  RadioTrackTrainHeader__Set_T_TRAIN_Sh_Req_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_T_TRAIN_Sh_Req_1);
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_SCALE#1)/ */
  RadioTrackTrainHeader__Set_Q_SCALE_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_Q_SCALE_1);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_NID_EM#1)/ */
  RadioTrackTrainHeader__Set_NID_EM_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_NID_EM_1);
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN_Ref#1)/ */
  RadioTrackTrainHeader__Set_T_TRAIN_Ref_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_T_TRAIN_Ref_1);
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_NID_LRBG#1)/ */
  RadioTrackTrainHeader__Set_NID_LRBG_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_NID_LRBG_1);
  /* _L16=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_M_ACK#1)/ */
  RadioTrackTrainHeader__Set_M_ACK_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_M_ACK_1);
  /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN#1)/ */
  RadioTrackTrainHeader__Set_T_TRAIN_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_T_TRAIN_1);
  /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_NID_MESSAGE#1)/ */
  RadioTrackTrainHeader__Set_NID_MESSAGE_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_NID_MESSAGE_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void RadioTrackTrainHeader__Create_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC_RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
  /* _L30=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_M_VERSION#1)/ */
  RadioTrackTrainHeader__Set_M_VERSION_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_M_VERSION_1);
  /* _L29=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_D_EMERGENCYSTOP#1)/ */
  RadioTrackTrainHeader__Set_D_EMERGENCYSTOP_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_D_EMERGENCYSTOP_1);
  /* _L26=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_DIR#1)/ */
  RadioTrackTrainHeader__Set_Q_DIR_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_Q_DIR_1);
  /* _L23=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_D_REF#1)/ */
  RadioTrackTrainHeader__Set_D_REF_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_D_REF_1);
  /* _L22=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN_Sh_Req#1)/ */
  RadioTrackTrainHeader__Set_T_TRAIN_Sh_Req_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_T_TRAIN_Sh_Req_1);
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_SCALE#1)/ */
  RadioTrackTrainHeader__Set_Q_SCALE_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_Q_SCALE_1);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_NID_EM#1)/ */
  RadioTrackTrainHeader__Set_NID_EM_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_NID_EM_1);
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN_Ref#1)/ */
  RadioTrackTrainHeader__Set_T_TRAIN_Ref_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_T_TRAIN_Ref_1);
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_NID_LRBG#1)/ */
  RadioTrackTrainHeader__Set_NID_LRBG_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_NID_LRBG_1);
  /* _L16=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_M_ACK#1)/ */
  RadioTrackTrainHeader__Set_M_ACK_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_M_ACK_1);
  /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN#1)/ */
  RadioTrackTrainHeader__Set_T_TRAIN_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_T_TRAIN_1);
  /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_NID_MESSAGE#1)/ */
  RadioTrackTrainHeader__Set_NID_MESSAGE_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_NID_MESSAGE_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

