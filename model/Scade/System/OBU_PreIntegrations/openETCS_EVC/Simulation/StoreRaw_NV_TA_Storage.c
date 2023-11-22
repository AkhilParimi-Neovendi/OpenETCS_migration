/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "StoreRaw_NV_TA_Storage.h"

/* TA_Storage::StoreRaw_NV/ */
void StoreRaw_NV_TA_Storage(
  /* mesaage_in/ */
  ReceivedMessage_T_Common_Types_Pkg *mesaage_in,
  outC_StoreRaw_NV_TA_Storage *outC)
{
  P003V1_OBU_T_TM_baseline2 tmp;
  kcg_bool tmp1;
  P003V1_OBU_T_TM_baseline2 op_call;
  kcg_bool _2_op_call;

  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L25, mesaage_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L26, &outC->_L25.packets);
  /* _L21=(TM_baseline2::Read_P003V1#3)/ */
  Read_P003V1_TM_baseline2(&outC->_L26, &outC->Context_Read_P003V1_3);
  outC->_L21 = outC->Context_Read_P003V1_3.received;
  kcg_copy_P003V1_OBU_T_TM_baseline2(
    &outC->_L22,
    &outC->Context_Read_P003V1_3.P003V1_OBU_out);
  outC->every = outC->_L21;
  if (outC->every) {
    /* _L23=(TA_Storage::NV_storage#3)/ */
    NV_storage_TA_Storage(&outC->_L22, &outC->Context_NV_storage_3);
    _2_op_call = outC->Context_NV_storage_3.P3_received;
    kcg_copy_P003V1_OBU_T_TM_baseline2(
      &op_call,
      &outC->Context_NV_storage_3.Packet3_out);
  }
  outC->new_NV = outC->_L21;
  if (outC->every) {
    kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L24, &op_call);
  }
  else {
    /* _L23= */
    if (outC->init) {
      kcg_copy_P003V1_OBU_T_TM_baseline2(
        &tmp,
        (P003V1_OBU_T_TM_baseline2 *) &INIT_P3V1_TA_Storage);
    }
    else {
      kcg_copy_P003V1_OBU_T_TM_baseline2(&tmp, &outC->_L24);
    }
    kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L24, &tmp);
  }
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->NV_onboard_out, &outC->_L24);
  if (outC->every) {
    outC->_L23 = _2_op_call;
  }
  else {
    /* _L23= */
    if (outC->init) {
      tmp1 = kcg_false;
    }
    else {
      tmp1 = outC->_L23;
    }
    outC->_L23 = tmp1;
  }
  outC->vald_NV = outC->_L23;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void StoreRaw_NV_init_TA_Storage(outC_StoreRaw_NV_TA_Storage *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;

  for (idx = 0; idx < 30; idx++) {
    outC->_L26.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L26.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L26.PacketHeaders[idx].valid = kcg_true;
    outC->_L26.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L26.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L26.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L22.valid = kcg_true;
  outC->_L22.q_dir = Q_DIR_Reverse;
  outC->_L22.q_scale = Q_SCALE_10_cm_scale;
  outC->_L22.d_validnv = kcg_lit_int32(0);
  outC->_L22.n_iter = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L22.SECTIONS[idx2].valid = kcg_true;
    outC->_L22.SECTIONS[idx2].nid_c = kcg_lit_int32(0);
  }
  outC->_L22.v_nvshunt = kcg_lit_int32(0);
  outC->_L22.v_nvstff = kcg_lit_int32(0);
  outC->_L22.v_nvonsight = kcg_lit_int32(0);
  outC->_L22.v_nvunfit = kcg_lit_int32(0);
  outC->_L22.v_nvrel = kcg_lit_int32(0);
  outC->_L22.d_nvroll = kcg_lit_int32(0);
  outC->_L22.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L22.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L22.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L22.v_nvsopovtrp = kcg_lit_int32(0);
  outC->_L22.d_nvovtrp = kcg_lit_int32(0);
  outC->_L22.t_nvovtrp = kcg_lit_int32(0);
  outC->_L22.d_nvpotrp = kcg_lit_int32(0);
  outC->_L22.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L22.t_nvcontact = kcg_lit_int32(0);
  outC->_L22.m_nvderun = M_NVDERUN_No;
  outC->_L22.d_nvstff = kcg_lit_int32(0);
  outC->_L22.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L21 = kcg_true;
  outC->_L25.valid = kcg_true;
  outC->_L25.source = msrc_undefined_Common_Types_Pkg;
  outC->_L25.radioMetadata.t_train_reference = kcg_true;
  outC->_L25.radioMetadata.nid_em = kcg_true;
  outC->_L25.radioMetadata.q_scale = kcg_true;
  outC->_L25.radioMetadata.d_sr = kcg_true;
  outC->_L25.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L25.radioMetadata.d_ref = kcg_true;
  outC->_L25.radioMetadata.q_dir = kcg_true;
  outC->_L25.radioMetadata.d_emergencystop = kcg_true;
  outC->_L25.radioMetadata.m_version = kcg_true;
  outC->_L25.BG_Common_Header.valid = kcg_true;
  outC->_L25.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L25.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L25.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L25.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L25.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L25.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L25.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L25.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L25.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L25.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L25.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L25.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L25.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L25.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L25.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L25.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L25.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L25.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L25.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L25.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L25.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L25.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L25.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L25.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L25.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L25.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L25.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L25.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L25.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L25.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L25.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L25.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L25.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L25.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L25.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L25.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L25.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L25.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L25.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L25.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L25.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L25.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L25.packets.PacketHeaders[idx3].nid_packet = kcg_lit_int32(0);
    outC->_L25.packets.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L25.packets.PacketHeaders[idx3].valid = kcg_true;
    outC->_L25.packets.PacketHeaders[idx3].startAddress = kcg_lit_int32(0);
    outC->_L25.packets.PacketHeaders[idx3].endAddress = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L25.packets.PacketData[idx4] = kcg_lit_int32(0);
  }
  outC->_L25.sendingRBC.valid = kcg_true;
  outC->_L25.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L25.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L25.sendingRBC.device_id = kcg_lit_int32(0);
  outC->every = kcg_true;
  outC->_L24.valid = kcg_true;
  outC->_L24.q_dir = Q_DIR_Reverse;
  outC->_L24.q_scale = Q_SCALE_10_cm_scale;
  outC->_L24.d_validnv = kcg_lit_int32(0);
  outC->_L24.n_iter = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L24.SECTIONS[idx5].valid = kcg_true;
    outC->_L24.SECTIONS[idx5].nid_c = kcg_lit_int32(0);
  }
  outC->_L24.v_nvshunt = kcg_lit_int32(0);
  outC->_L24.v_nvstff = kcg_lit_int32(0);
  outC->_L24.v_nvonsight = kcg_lit_int32(0);
  outC->_L24.v_nvunfit = kcg_lit_int32(0);
  outC->_L24.v_nvrel = kcg_lit_int32(0);
  outC->_L24.d_nvroll = kcg_lit_int32(0);
  outC->_L24.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L24.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L24.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L24.v_nvsopovtrp = kcg_lit_int32(0);
  outC->_L24.d_nvovtrp = kcg_lit_int32(0);
  outC->_L24.t_nvovtrp = kcg_lit_int32(0);
  outC->_L24.d_nvpotrp = kcg_lit_int32(0);
  outC->_L24.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L24.t_nvcontact = kcg_lit_int32(0);
  outC->_L24.m_nvderun = M_NVDERUN_No;
  outC->_L24.d_nvstff = kcg_lit_int32(0);
  outC->_L24.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L23 = kcg_true;
  outC->init = kcg_true;
  outC->NV_onboard_out.valid = kcg_true;
  outC->NV_onboard_out.q_dir = Q_DIR_Reverse;
  outC->NV_onboard_out.q_scale = Q_SCALE_10_cm_scale;
  outC->NV_onboard_out.d_validnv = kcg_lit_int32(0);
  outC->NV_onboard_out.n_iter = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->NV_onboard_out.SECTIONS[idx6].valid = kcg_true;
    outC->NV_onboard_out.SECTIONS[idx6].nid_c = kcg_lit_int32(0);
  }
  outC->NV_onboard_out.v_nvshunt = kcg_lit_int32(0);
  outC->NV_onboard_out.v_nvstff = kcg_lit_int32(0);
  outC->NV_onboard_out.v_nvonsight = kcg_lit_int32(0);
  outC->NV_onboard_out.v_nvunfit = kcg_lit_int32(0);
  outC->NV_onboard_out.v_nvrel = kcg_lit_int32(0);
  outC->NV_onboard_out.d_nvroll = kcg_lit_int32(0);
  outC->NV_onboard_out.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->NV_onboard_out.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->NV_onboard_out.v_nvallowovtrp = kcg_lit_int32(0);
  outC->NV_onboard_out.v_nvsopovtrp = kcg_lit_int32(0);
  outC->NV_onboard_out.d_nvovtrp = kcg_lit_int32(0);
  outC->NV_onboard_out.t_nvovtrp = kcg_lit_int32(0);
  outC->NV_onboard_out.d_nvpotrp = kcg_lit_int32(0);
  outC->NV_onboard_out.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->NV_onboard_out.t_nvcontact = kcg_lit_int32(0);
  outC->NV_onboard_out.m_nvderun = M_NVDERUN_No;
  outC->NV_onboard_out.d_nvstff = kcg_lit_int32(0);
  outC->NV_onboard_out.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->new_NV = kcg_true;
  outC->vald_NV = kcg_true;
  /* _L23=(TA_Storage::NV_storage#3)/ */
  NV_storage_init_TA_Storage(&outC->Context_NV_storage_3);
  /* _L21=(TM_baseline2::Read_P003V1#3)/ */
  Read_P003V1_init_TM_baseline2(&outC->Context_Read_P003V1_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void StoreRaw_NV_reset_TA_Storage(outC_StoreRaw_NV_TA_Storage *outC)
{
  outC->init = kcg_true;
  /* _L23=(TA_Storage::NV_storage#3)/ */
  NV_storage_reset_TA_Storage(&outC->Context_NV_storage_3);
  /* _L21=(TM_baseline2::Read_P003V1#3)/ */
  Read_P003V1_reset_TM_baseline2(&outC->Context_Read_P003V1_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** StoreRaw_NV_TA_Storage.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

