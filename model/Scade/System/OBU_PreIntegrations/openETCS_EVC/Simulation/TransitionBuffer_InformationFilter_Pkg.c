/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransitionBuffer_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::TransitionBuffer/ */
void TransitionBuffer_InformationFilter_Pkg(
  /* In/ */
  ReceivedMessage_T_Common_Types_Pkg *In,
  /* Write/ */
  kcg_bool Write,
  /* Reset/ */
  kcg_bool Reset,
  outC_TransitionBuffer_InformationFilter_Pkg *outC)
{
  /* Out/ */
  ReceivedMessage_T_Common_Types_Pkg Out_partial;
  /* stacksize/ */
  kcg_int32 stacksize_partial;
  /* buffer/ */
  TransitionBuffer_T_InformationFilter_Pkg buffer_partial;
  /* Out/ */
  ReceivedMessage_T_Common_Types_Pkg _1_Out_partial;
  /* stacksize/ */
  kcg_int32 _2_stacksize_partial;
  /* buffer/ */
  TransitionBuffer_T_InformationFilter_Pkg _3_buffer_partial;
  /* Out/ */
  ReceivedMessage_T_Common_Types_Pkg _4_Out_partial;
  /* stacksize/ */
  kcg_int32 _5_stacksize_partial;
  /* buffer/ */
  TransitionBuffer_T_InformationFilter_Pkg _6_buffer_partial;
  /* Out/ */
  ReceivedMessage_T_Common_Types_Pkg _7_Out_partial;
  /* stacksize/ */
  kcg_int32 _8_stacksize_partial;
  /* buffer/ */
  TransitionBuffer_T_InformationFilter_Pkg _9_buffer_partial;
  /* buffer/ */
  TransitionBuffer_T_InformationFilter_Pkg _10_buffer_partial;
  /* stacksize/ */
  kcg_int32 _11_stacksize_partial;
  /* Out/ */
  ReceivedMessage_T_Common_Types_Pkg _12_Out_partial;
  /* buffer/ */
  TransitionBuffer_T_InformationFilter_Pkg _13_buffer_partial;
  /* stacksize/ */
  kcg_int32 _14_stacksize_partial;
  /* Out/ */
  ReceivedMessage_T_Common_Types_Pkg _15_Out_partial;
  /* buffer/ */
  TransitionBuffer_T_InformationFilter_Pkg last_buffer;
  /* stacksize/ */
  kcg_int32 last_stacksize;

  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&last_buffer, &outC->buffer);
  last_stacksize = outC->stacksize;
  outC->_L1 = Write;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L4, In);
  outC->_L6 = outC->_L4.valid;
  outC->_L8 = !outC->_L6;
  outC->_L7 = outC->_L8 & outC->_L1;
  outC->c_r = outC->_L7;
  outC->IfBlock1_clock = outC->c_r == kcg_true;
  outC->_L5 = outC->_L6 & outC->_L1;
  outC->c_rw = outC->_L5;
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->else_clock_IfBlock1 = outC->c_rw == kcg_true;
  }
  outC->_L3 = !outC->_L1;
  outC->_L2 = outC->_L3 & outC->_L6;
  outC->c_w = outC->_L2;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
      &outC->_L2_then_IfBlock1,
      &last_buffer);
    outC->_L4_then_IfBlock1 = last_stacksize;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L5_then_IfBlock1, In);
    outC->_L15_then_IfBlock1 = Reset;
    /* IfBlock1:then:_L14=(InformationFilter_Pkg::TransitionBuffer_read_only#2)/ */
    TransitionBuffer_read_only_InformationFilter_Pkg(
      &outC->_L2_then_IfBlock1,
      outC->_L4_then_IfBlock1,
      &outC->_L5_then_IfBlock1,
      outC->_L15_then_IfBlock1,
      &outC->Context_TransitionBuffer_read_only_2);
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
      &outC->_L14_then_IfBlock1,
      &outC->Context_TransitionBuffer_read_only_2.Buffer_Out);
    outC->_L13_then_IfBlock1 =
      outC->Context_TransitionBuffer_read_only_2.Stacksize_new;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L12_then_IfBlock1,
      &outC->Context_TransitionBuffer_read_only_2.Message_out);
    stacksize_partial = outC->_L13_then_IfBlock1;
    outC->stacksize = stacksize_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
        &outC->_L1_then_else_IfBlock1,
        &last_buffer);
      outC->_L3_then_else_IfBlock1 = last_stacksize;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L4_then_else_IfBlock1, In);
      outC->_L11_then_else_IfBlock1 = Reset;
      /* IfBlock1:else:then:_L10=(InformationFilter_Pkg::TransitionBuffer_read_write#1)/ */
      TransitionBuffer_read_write_InformationFilter_Pkg(
        &outC->_L1_then_else_IfBlock1,
        outC->_L3_then_else_IfBlock1,
        &outC->_L4_then_else_IfBlock1,
        outC->_L11_then_else_IfBlock1,
        &outC->Context_TransitionBuffer_read_write_1);
      kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
        &outC->_L10_then_else_IfBlock1,
        &outC->Context_TransitionBuffer_read_write_1.Buffer_Out);
      outC->_L9_then_else_IfBlock1 =
        outC->Context_TransitionBuffer_read_write_1.Stacksize_new;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L8_then_else_IfBlock1,
        &outC->Context_TransitionBuffer_read_write_1.Message_out);
      _14_stacksize_partial = outC->_L9_then_else_IfBlock1;
      _2_stacksize_partial = _14_stacksize_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->c_w == kcg_true;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
          &outC->_L1_then_else_else_IfBlock1,
          &last_buffer);
        outC->_L3_then_else_else_IfBlock1 = last_stacksize;
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &outC->_L4_then_else_else_IfBlock1,
          In);
        outC->_L11_then_else_else_IfBlock1 = Reset;
        /* IfBlock1:else:else:then:_L10=(InformationFilter_Pkg::TransitionBuffer_write_only#1)/ */
        TransitionBuffer_write_only_InformationFilter_Pkg(
          &outC->_L1_then_else_else_IfBlock1,
          outC->_L3_then_else_else_IfBlock1,
          &outC->_L4_then_else_else_IfBlock1,
          outC->_L11_then_else_else_IfBlock1,
          &outC->Context_TransitionBuffer_write_only_1);
        kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
          &outC->_L10_then_else_else_IfBlock1,
          &outC->Context_TransitionBuffer_write_only_1.Buffer_Out);
        outC->_L9_then_else_else_IfBlock1 =
          outC->Context_TransitionBuffer_write_only_1.Stacksize_new;
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &outC->_L8_then_else_else_IfBlock1,
          &outC->Context_TransitionBuffer_write_only_1.Message_out);
        _5_stacksize_partial = outC->_L9_then_else_else_IfBlock1;
        _11_stacksize_partial = _5_stacksize_partial;
      }
      else {
        outC->_L4_else_else_else_IfBlock1 = last_stacksize;
        outC->_L11_else_else_else_IfBlock1 = kcg_lit_int32(0);
        outC->_L6_else_else_else_IfBlock1 = Reset;
        /* IfBlock1:else:else:else:_L10= */
        if (outC->_L6_else_else_else_IfBlock1) {
          outC->_L10_else_else_else_IfBlock1 = outC->_L11_else_else_else_IfBlock1;
        }
        else {
          outC->_L10_else_else_else_IfBlock1 = outC->_L4_else_else_else_IfBlock1;
        }
        _8_stacksize_partial = outC->_L10_else_else_else_IfBlock1;
        _11_stacksize_partial = _8_stacksize_partial;
      }
      _2_stacksize_partial = _11_stacksize_partial;
    }
    outC->stacksize = _2_stacksize_partial;
  }
  outC->_L9 = outC->stacksize;
  outC->outStacksize = outC->_L9;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &Out_partial,
      &outC->_L12_then_IfBlock1);
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
      &buffer_partial,
      &outC->_L14_then_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->Out, &Out_partial);
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
      &outC->buffer,
      &buffer_partial);
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_15_Out_partial,
        &outC->_L8_then_else_IfBlock1);
      kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
        &_13_buffer_partial,
        &outC->_L10_then_else_IfBlock1);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_1_Out_partial, &_15_Out_partial);
      kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
        &_3_buffer_partial,
        &_13_buffer_partial);
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_4_Out_partial,
          &outC->_L8_then_else_else_IfBlock1);
        kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
          &_6_buffer_partial,
          &outC->_L10_then_else_else_IfBlock1);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_12_Out_partial, &_4_Out_partial);
        kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
          &_10_buffer_partial,
          &_6_buffer_partial);
      }
      else {
        kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
          &outC->_L9_else_else_else_IfBlock1,
          (TransitionBuffer_T_InformationFilter_Pkg *)
            &DEFAULT_TransitionBuffer_t_InformationFilter_Pkg);
        kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
          &outC->_L1_else_else_else_IfBlock1,
          &last_buffer);
        /* IfBlock1:else:else:else:_L7= */
        if (outC->_L6_else_else_else_IfBlock1) {
          kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
            &outC->_L7_else_else_else_IfBlock1,
            &outC->_L9_else_else_else_IfBlock1);
        }
        else {
          kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
            &outC->_L7_else_else_else_IfBlock1,
            &outC->_L1_else_else_else_IfBlock1);
        }
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &outC->_L5_else_else_else_IfBlock1,
          In);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_7_Out_partial,
          &outC->_L5_else_else_else_IfBlock1);
        kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
          &_9_buffer_partial,
          &outC->_L7_else_else_else_IfBlock1);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_12_Out_partial, &_7_Out_partial);
        kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
          &_10_buffer_partial,
          &_9_buffer_partial);
      }
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_1_Out_partial, &_12_Out_partial);
      kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
        &_3_buffer_partial,
        &_10_buffer_partial);
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->Out, &_1_Out_partial);
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
      &outC->buffer,
      &_3_buffer_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void TransitionBuffer_init_InformationFilter_Pkg(
  outC_TransitionBuffer_InformationFilter_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;
  kcg_size idx17;
  kcg_size idx18;
  kcg_size idx19;
  kcg_size idx20;
  kcg_size idx21;
  kcg_size idx22;
  kcg_size idx23;
  kcg_size idx24;
  kcg_size idx25;
  kcg_size idx26;
  kcg_size idx27;
  kcg_size idx28;
  kcg_size idx29;
  kcg_size idx30;
  kcg_size idx31;
  kcg_size idx32;
  kcg_size idx33;
  kcg_size idx34;
  kcg_size idx35;
  kcg_size idx36;
  kcg_size idx37;
  kcg_size idx38;
  kcg_size idx39;
  kcg_size idx40;
  kcg_size idx41;
  kcg_size idx42;
  kcg_size idx43;
  kcg_size idx44;

  outC->_L9 = kcg_lit_int32(0);
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4.valid = kcg_true;
  outC->_L4.source = msrc_undefined_Common_Types_Pkg;
  outC->_L4.radioMetadata.t_train_reference = kcg_true;
  outC->_L4.radioMetadata.nid_em = kcg_true;
  outC->_L4.radioMetadata.q_scale = kcg_true;
  outC->_L4.radioMetadata.d_sr = kcg_true;
  outC->_L4.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L4.radioMetadata.d_ref = kcg_true;
  outC->_L4.radioMetadata.q_dir = kcg_true;
  outC->_L4.radioMetadata.d_emergencystop = kcg_true;
  outC->_L4.radioMetadata.m_version = kcg_true;
  outC->_L4.BG_Common_Header.valid = kcg_true;
  outC->_L4.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L4.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L4.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L4.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L4.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L4.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L4.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L4.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L4.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L4.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L4.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L4.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L4.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L4.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L4.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L4.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L4.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L4.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L4.sendingRBC.valid = kcg_true;
  outC->_L4.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L4.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L4.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L8 = kcg_true;
  outC->c_r = kcg_true;
  outC->c_rw = kcg_true;
  outC->c_w = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L11_then_else_IfBlock1 = kcg_true;
  outC->_L8_then_else_IfBlock1.valid = kcg_true;
  outC->_L8_then_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L8_then_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L8_then_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L8_then_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L8_then_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L8_then_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L8_then_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L8_then_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L8_then_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L8_then_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L8_then_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L8_then_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L8_then_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8_then_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L8_then_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L8_then_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L8_then_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L8_then_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8_then_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8_then_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L8_then_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L8_then_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L8_then_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8_then_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L8_then_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L8_then_else_IfBlock1.packets.PacketHeaders[idx2].nid_packet =
      kcg_lit_int32(0);
    outC->_L8_then_else_IfBlock1.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L8_then_else_IfBlock1.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L8_then_else_IfBlock1.packets.PacketHeaders[idx2].startAddress =
      kcg_lit_int32(0);
    outC->_L8_then_else_IfBlock1.packets.PacketHeaders[idx2].endAddress =
      kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L8_then_else_IfBlock1.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L8_then_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L8_then_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L9_then_else_IfBlock1 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 3; idx6++) {
    outC->_L10_then_else_IfBlock1[idx6].valid = kcg_true;
    outC->_L10_then_else_IfBlock1[idx6].source = msrc_undefined_Common_Types_Pkg;
    outC->_L10_then_else_IfBlock1[idx6].radioMetadata.t_train_reference = kcg_true;
    outC->_L10_then_else_IfBlock1[idx6].radioMetadata.nid_em = kcg_true;
    outC->_L10_then_else_IfBlock1[idx6].radioMetadata.q_scale = kcg_true;
    outC->_L10_then_else_IfBlock1[idx6].radioMetadata.d_sr = kcg_true;
    outC->_L10_then_else_IfBlock1[idx6].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L10_then_else_IfBlock1[idx6].radioMetadata.d_ref = kcg_true;
    outC->_L10_then_else_IfBlock1[idx6].radioMetadata.q_dir = kcg_true;
    outC->_L10_then_else_IfBlock1[idx6].radioMetadata.d_emergencystop = kcg_true;
    outC->_L10_then_else_IfBlock1[idx6].radioMetadata.m_version = kcg_true;
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.valid = kcg_true;
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.nid_c = kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.nid_bg = kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.bgPosition.valid =
      kcg_true;
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L10_then_else_IfBlock1[idx6].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L10_then_else_IfBlock1[idx6].Radio_Common_Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].Radio_Common_Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].Radio_Common_Header.nid_message =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].Radio_Common_Header.t_train =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->_L10_then_else_IfBlock1[idx6].Radio_Common_Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].Radio_Common_Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].Radio_Common_Header.nid_em =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].Radio_Common_Header.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L10_then_else_IfBlock1[idx6].Radio_Common_Header.d_sr = kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].Radio_Common_Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].Radio_Common_Header.d_ref =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->_L10_then_else_IfBlock1[idx6].Radio_Common_Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx4 = 0; idx4 < 30; idx4++) {
      outC->_L10_then_else_IfBlock1[idx6].packets.PacketHeaders[idx4].nid_packet =
        kcg_lit_int32(0);
      outC->_L10_then_else_IfBlock1[idx6].packets.PacketHeaders[idx4].q_dir =
        Q_DIR_Reverse;
      outC->_L10_then_else_IfBlock1[idx6].packets.PacketHeaders[idx4].valid =
        kcg_true;
      outC->_L10_then_else_IfBlock1[idx6].packets.PacketHeaders[idx4].startAddress =
        kcg_lit_int32(0);
      outC->_L10_then_else_IfBlock1[idx6].packets.PacketHeaders[idx4].endAddress =
        kcg_lit_int32(0);
    }
    for (idx5 = 0; idx5 < 500; idx5++) {
      outC->_L10_then_else_IfBlock1[idx6].packets.PacketData[idx5] = kcg_lit_int32(0);
    }
    outC->_L10_then_else_IfBlock1[idx6].sendingRBC.valid = kcg_true;
    outC->_L10_then_else_IfBlock1[idx6].sendingRBC.nid_c = kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].sendingRBC.rbc_id = kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1[idx6].sendingRBC.device_id = kcg_lit_int32(0);
  }
  outC->_L4_then_else_IfBlock1.valid = kcg_true;
  outC->_L4_then_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L4_then_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L4_then_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L4_then_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L4_then_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L4_then_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L4_then_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L4_then_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L4_then_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L4_then_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L4_then_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L4_then_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L4_then_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_then_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L4_then_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L4_then_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L4_then_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L4_then_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4_then_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L4_then_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L4_then_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L4_then_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L4_then_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4_then_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L4_then_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->_L4_then_else_IfBlock1.packets.PacketHeaders[idx7].nid_packet =
      kcg_lit_int32(0);
    outC->_L4_then_else_IfBlock1.packets.PacketHeaders[idx7].q_dir = Q_DIR_Reverse;
    outC->_L4_then_else_IfBlock1.packets.PacketHeaders[idx7].valid = kcg_true;
    outC->_L4_then_else_IfBlock1.packets.PacketHeaders[idx7].startAddress =
      kcg_lit_int32(0);
    outC->_L4_then_else_IfBlock1.packets.PacketHeaders[idx7].endAddress =
      kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 500; idx8++) {
    outC->_L4_then_else_IfBlock1.packets.PacketData[idx8] = kcg_lit_int32(0);
  }
  outC->_L4_then_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L4_then_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock1 = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 3; idx11++) {
    outC->_L1_then_else_IfBlock1[idx11].valid = kcg_true;
    outC->_L1_then_else_IfBlock1[idx11].source = msrc_undefined_Common_Types_Pkg;
    outC->_L1_then_else_IfBlock1[idx11].radioMetadata.t_train_reference = kcg_true;
    outC->_L1_then_else_IfBlock1[idx11].radioMetadata.nid_em = kcg_true;
    outC->_L1_then_else_IfBlock1[idx11].radioMetadata.q_scale = kcg_true;
    outC->_L1_then_else_IfBlock1[idx11].radioMetadata.d_sr = kcg_true;
    outC->_L1_then_else_IfBlock1[idx11].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L1_then_else_IfBlock1[idx11].radioMetadata.d_ref = kcg_true;
    outC->_L1_then_else_IfBlock1[idx11].radioMetadata.q_dir = kcg_true;
    outC->_L1_then_else_IfBlock1[idx11].radioMetadata.d_emergencystop = kcg_true;
    outC->_L1_then_else_IfBlock1[idx11].radioMetadata.m_version = kcg_true;
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.valid = kcg_true;
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.nid_c = kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.nid_bg = kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.bgPosition.valid =
      kcg_true;
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L1_then_else_IfBlock1[idx11].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L1_then_else_IfBlock1[idx11].Radio_Common_Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].Radio_Common_Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].Radio_Common_Header.nid_message =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].Radio_Common_Header.t_train =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->_L1_then_else_IfBlock1[idx11].Radio_Common_Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].Radio_Common_Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].Radio_Common_Header.nid_em =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].Radio_Common_Header.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1_then_else_IfBlock1[idx11].Radio_Common_Header.d_sr = kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].Radio_Common_Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].Radio_Common_Header.d_ref =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->_L1_then_else_IfBlock1[idx11].Radio_Common_Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx9 = 0; idx9 < 30; idx9++) {
      outC->_L1_then_else_IfBlock1[idx11].packets.PacketHeaders[idx9].nid_packet =
        kcg_lit_int32(0);
      outC->_L1_then_else_IfBlock1[idx11].packets.PacketHeaders[idx9].q_dir =
        Q_DIR_Reverse;
      outC->_L1_then_else_IfBlock1[idx11].packets.PacketHeaders[idx9].valid =
        kcg_true;
      outC->_L1_then_else_IfBlock1[idx11].packets.PacketHeaders[idx9].startAddress =
        kcg_lit_int32(0);
      outC->_L1_then_else_IfBlock1[idx11].packets.PacketHeaders[idx9].endAddress =
        kcg_lit_int32(0);
    }
    for (idx10 = 0; idx10 < 500; idx10++) {
      outC->_L1_then_else_IfBlock1[idx11].packets.PacketData[idx10] =
        kcg_lit_int32(0);
    }
    outC->_L1_then_else_IfBlock1[idx11].sendingRBC.valid = kcg_true;
    outC->_L1_then_else_IfBlock1[idx11].sendingRBC.nid_c = kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].sendingRBC.rbc_id = kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1[idx11].sendingRBC.device_id = kcg_lit_int32(0);
  }
  outC->else_clock_else_IfBlock1 = kcg_true;
  for (idx14 = 0; idx14 < 3; idx14++) {
    outC->_L1_else_else_else_IfBlock1[idx14].valid = kcg_true;
    outC->_L1_else_else_else_IfBlock1[idx14].source =
      msrc_undefined_Common_Types_Pkg;
    outC->_L1_else_else_else_IfBlock1[idx14].radioMetadata.t_train_reference =
      kcg_true;
    outC->_L1_else_else_else_IfBlock1[idx14].radioMetadata.nid_em = kcg_true;
    outC->_L1_else_else_else_IfBlock1[idx14].radioMetadata.q_scale = kcg_true;
    outC->_L1_else_else_else_IfBlock1[idx14].radioMetadata.d_sr = kcg_true;
    outC->_L1_else_else_else_IfBlock1[idx14].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L1_else_else_else_IfBlock1[idx14].radioMetadata.d_ref = kcg_true;
    outC->_L1_else_else_else_IfBlock1[idx14].radioMetadata.q_dir = kcg_true;
    outC->_L1_else_else_else_IfBlock1[idx14].radioMetadata.d_emergencystop =
      kcg_true;
    outC->_L1_else_else_else_IfBlock1[idx14].radioMetadata.m_version = kcg_true;
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.valid = kcg_true;
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.bgPosition.valid =
      kcg_true;
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L1_else_else_else_IfBlock1[idx14].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L1_else_else_else_IfBlock1[idx14].Radio_Common_Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].Radio_Common_Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].Radio_Common_Header.nid_message =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].Radio_Common_Header.t_train =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->_L1_else_else_else_IfBlock1[idx14].Radio_Common_Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].Radio_Common_Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].Radio_Common_Header.nid_em =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].Radio_Common_Header.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1_else_else_else_IfBlock1[idx14].Radio_Common_Header.d_sr =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].Radio_Common_Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].Radio_Common_Header.d_ref =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].Radio_Common_Header.q_dir =
      Q_DIR_Reverse;
    outC->_L1_else_else_else_IfBlock1[idx14].Radio_Common_Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx12 = 0; idx12 < 30; idx12++) {
      outC->_L1_else_else_else_IfBlock1[idx14].packets.PacketHeaders[idx12].nid_packet =
        kcg_lit_int32(0);
      outC->_L1_else_else_else_IfBlock1[idx14].packets.PacketHeaders[idx12].q_dir =
        Q_DIR_Reverse;
      outC->_L1_else_else_else_IfBlock1[idx14].packets.PacketHeaders[idx12].valid =
        kcg_true;
      outC->_L1_else_else_else_IfBlock1[idx14].packets.PacketHeaders[idx12].startAddress =
        kcg_lit_int32(0);
      outC->_L1_else_else_else_IfBlock1[idx14].packets.PacketHeaders[idx12].endAddress =
        kcg_lit_int32(0);
    }
    for (idx13 = 0; idx13 < 500; idx13++) {
      outC->_L1_else_else_else_IfBlock1[idx14].packets.PacketData[idx13] =
        kcg_lit_int32(0);
    }
    outC->_L1_else_else_else_IfBlock1[idx14].sendingRBC.valid = kcg_true;
    outC->_L1_else_else_else_IfBlock1[idx14].sendingRBC.nid_c = kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].sendingRBC.rbc_id = kcg_lit_int32(0);
    outC->_L1_else_else_else_IfBlock1[idx14].sendingRBC.device_id =
      kcg_lit_int32(0);
  }
  outC->_L4_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L5_else_else_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L5_else_else_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L5_else_else_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L5_else_else_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L5_else_else_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L5_else_else_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L5_else_else_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L5_else_else_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L5_else_else_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L5_else_else_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(
      0);
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L5_else_else_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L5_else_else_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(
      0);
  outC->_L5_else_else_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L5_else_else_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L5_else_else_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L5_else_else_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx15 = 0; idx15 < 30; idx15++) {
    outC->_L5_else_else_else_IfBlock1.packets.PacketHeaders[idx15].nid_packet =
      kcg_lit_int32(0);
    outC->_L5_else_else_else_IfBlock1.packets.PacketHeaders[idx15].q_dir =
      Q_DIR_Reverse;
    outC->_L5_else_else_else_IfBlock1.packets.PacketHeaders[idx15].valid = kcg_true;
    outC->_L5_else_else_else_IfBlock1.packets.PacketHeaders[idx15].startAddress =
      kcg_lit_int32(0);
    outC->_L5_else_else_else_IfBlock1.packets.PacketHeaders[idx15].endAddress =
      kcg_lit_int32(0);
  }
  for (idx16 = 0; idx16 < 500; idx16++) {
    outC->_L5_else_else_else_IfBlock1.packets.PacketData[idx16] = kcg_lit_int32(0);
  }
  outC->_L5_else_else_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L5_else_else_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L5_else_else_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L6_else_else_else_IfBlock1 = kcg_true;
  for (idx19 = 0; idx19 < 3; idx19++) {
    outC->_L7_else_else_else_IfBlock1[idx19].valid = kcg_true;
    outC->_L7_else_else_else_IfBlock1[idx19].source =
      msrc_undefined_Common_Types_Pkg;
    outC->_L7_else_else_else_IfBlock1[idx19].radioMetadata.t_train_reference =
      kcg_true;
    outC->_L7_else_else_else_IfBlock1[idx19].radioMetadata.nid_em = kcg_true;
    outC->_L7_else_else_else_IfBlock1[idx19].radioMetadata.q_scale = kcg_true;
    outC->_L7_else_else_else_IfBlock1[idx19].radioMetadata.d_sr = kcg_true;
    outC->_L7_else_else_else_IfBlock1[idx19].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L7_else_else_else_IfBlock1[idx19].radioMetadata.d_ref = kcg_true;
    outC->_L7_else_else_else_IfBlock1[idx19].radioMetadata.q_dir = kcg_true;
    outC->_L7_else_else_else_IfBlock1[idx19].radioMetadata.d_emergencystop =
      kcg_true;
    outC->_L7_else_else_else_IfBlock1[idx19].radioMetadata.m_version = kcg_true;
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.valid = kcg_true;
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.bgPosition.valid =
      kcg_true;
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L7_else_else_else_IfBlock1[idx19].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L7_else_else_else_IfBlock1[idx19].Radio_Common_Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].Radio_Common_Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].Radio_Common_Header.nid_message =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].Radio_Common_Header.t_train =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->_L7_else_else_else_IfBlock1[idx19].Radio_Common_Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].Radio_Common_Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].Radio_Common_Header.nid_em =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].Radio_Common_Header.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L7_else_else_else_IfBlock1[idx19].Radio_Common_Header.d_sr =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].Radio_Common_Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].Radio_Common_Header.d_ref =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].Radio_Common_Header.q_dir =
      Q_DIR_Reverse;
    outC->_L7_else_else_else_IfBlock1[idx19].Radio_Common_Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx17 = 0; idx17 < 30; idx17++) {
      outC->_L7_else_else_else_IfBlock1[idx19].packets.PacketHeaders[idx17].nid_packet =
        kcg_lit_int32(0);
      outC->_L7_else_else_else_IfBlock1[idx19].packets.PacketHeaders[idx17].q_dir =
        Q_DIR_Reverse;
      outC->_L7_else_else_else_IfBlock1[idx19].packets.PacketHeaders[idx17].valid =
        kcg_true;
      outC->_L7_else_else_else_IfBlock1[idx19].packets.PacketHeaders[idx17].startAddress =
        kcg_lit_int32(0);
      outC->_L7_else_else_else_IfBlock1[idx19].packets.PacketHeaders[idx17].endAddress =
        kcg_lit_int32(0);
    }
    for (idx18 = 0; idx18 < 500; idx18++) {
      outC->_L7_else_else_else_IfBlock1[idx19].packets.PacketData[idx18] =
        kcg_lit_int32(0);
    }
    outC->_L7_else_else_else_IfBlock1[idx19].sendingRBC.valid = kcg_true;
    outC->_L7_else_else_else_IfBlock1[idx19].sendingRBC.nid_c = kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].sendingRBC.rbc_id = kcg_lit_int32(0);
    outC->_L7_else_else_else_IfBlock1[idx19].sendingRBC.device_id =
      kcg_lit_int32(0);
  }
  for (idx22 = 0; idx22 < 3; idx22++) {
    outC->_L9_else_else_else_IfBlock1[idx22].valid = kcg_true;
    outC->_L9_else_else_else_IfBlock1[idx22].source =
      msrc_undefined_Common_Types_Pkg;
    outC->_L9_else_else_else_IfBlock1[idx22].radioMetadata.t_train_reference =
      kcg_true;
    outC->_L9_else_else_else_IfBlock1[idx22].radioMetadata.nid_em = kcg_true;
    outC->_L9_else_else_else_IfBlock1[idx22].radioMetadata.q_scale = kcg_true;
    outC->_L9_else_else_else_IfBlock1[idx22].radioMetadata.d_sr = kcg_true;
    outC->_L9_else_else_else_IfBlock1[idx22].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L9_else_else_else_IfBlock1[idx22].radioMetadata.d_ref = kcg_true;
    outC->_L9_else_else_else_IfBlock1[idx22].radioMetadata.q_dir = kcg_true;
    outC->_L9_else_else_else_IfBlock1[idx22].radioMetadata.d_emergencystop =
      kcg_true;
    outC->_L9_else_else_else_IfBlock1[idx22].radioMetadata.m_version = kcg_true;
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.valid = kcg_true;
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.bgPosition.valid =
      kcg_true;
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L9_else_else_else_IfBlock1[idx22].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L9_else_else_else_IfBlock1[idx22].Radio_Common_Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].Radio_Common_Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].Radio_Common_Header.nid_message =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].Radio_Common_Header.t_train =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->_L9_else_else_else_IfBlock1[idx22].Radio_Common_Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].Radio_Common_Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].Radio_Common_Header.nid_em =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].Radio_Common_Header.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L9_else_else_else_IfBlock1[idx22].Radio_Common_Header.d_sr =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].Radio_Common_Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].Radio_Common_Header.d_ref =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].Radio_Common_Header.q_dir =
      Q_DIR_Reverse;
    outC->_L9_else_else_else_IfBlock1[idx22].Radio_Common_Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx20 = 0; idx20 < 30; idx20++) {
      outC->_L9_else_else_else_IfBlock1[idx22].packets.PacketHeaders[idx20].nid_packet =
        kcg_lit_int32(0);
      outC->_L9_else_else_else_IfBlock1[idx22].packets.PacketHeaders[idx20].q_dir =
        Q_DIR_Reverse;
      outC->_L9_else_else_else_IfBlock1[idx22].packets.PacketHeaders[idx20].valid =
        kcg_true;
      outC->_L9_else_else_else_IfBlock1[idx22].packets.PacketHeaders[idx20].startAddress =
        kcg_lit_int32(0);
      outC->_L9_else_else_else_IfBlock1[idx22].packets.PacketHeaders[idx20].endAddress =
        kcg_lit_int32(0);
    }
    for (idx21 = 0; idx21 < 500; idx21++) {
      outC->_L9_else_else_else_IfBlock1[idx22].packets.PacketData[idx21] =
        kcg_lit_int32(0);
    }
    outC->_L9_else_else_else_IfBlock1[idx22].sendingRBC.valid = kcg_true;
    outC->_L9_else_else_else_IfBlock1[idx22].sendingRBC.nid_c = kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].sendingRBC.rbc_id = kcg_lit_int32(0);
    outC->_L9_else_else_else_IfBlock1[idx22].sendingRBC.device_id =
      kcg_lit_int32(0);
  }
  outC->_L10_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L11_else_else_else_IfBlock1 = kcg_lit_int32(0);
  for (idx25 = 0; idx25 < 3; idx25++) {
    outC->_L1_then_else_else_IfBlock1[idx25].valid = kcg_true;
    outC->_L1_then_else_else_IfBlock1[idx25].source =
      msrc_undefined_Common_Types_Pkg;
    outC->_L1_then_else_else_IfBlock1[idx25].radioMetadata.t_train_reference =
      kcg_true;
    outC->_L1_then_else_else_IfBlock1[idx25].radioMetadata.nid_em = kcg_true;
    outC->_L1_then_else_else_IfBlock1[idx25].radioMetadata.q_scale = kcg_true;
    outC->_L1_then_else_else_IfBlock1[idx25].radioMetadata.d_sr = kcg_true;
    outC->_L1_then_else_else_IfBlock1[idx25].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L1_then_else_else_IfBlock1[idx25].radioMetadata.d_ref = kcg_true;
    outC->_L1_then_else_else_IfBlock1[idx25].radioMetadata.q_dir = kcg_true;
    outC->_L1_then_else_else_IfBlock1[idx25].radioMetadata.d_emergencystop =
      kcg_true;
    outC->_L1_then_else_else_IfBlock1[idx25].radioMetadata.m_version = kcg_true;
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.valid = kcg_true;
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.bgPosition.valid =
      kcg_true;
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L1_then_else_else_IfBlock1[idx25].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L1_then_else_else_IfBlock1[idx25].Radio_Common_Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].Radio_Common_Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].Radio_Common_Header.nid_message =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].Radio_Common_Header.t_train =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->_L1_then_else_else_IfBlock1[idx25].Radio_Common_Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].Radio_Common_Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].Radio_Common_Header.nid_em =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].Radio_Common_Header.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1_then_else_else_IfBlock1[idx25].Radio_Common_Header.d_sr =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].Radio_Common_Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].Radio_Common_Header.d_ref =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].Radio_Common_Header.q_dir =
      Q_DIR_Reverse;
    outC->_L1_then_else_else_IfBlock1[idx25].Radio_Common_Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx23 = 0; idx23 < 30; idx23++) {
      outC->_L1_then_else_else_IfBlock1[idx25].packets.PacketHeaders[idx23].nid_packet =
        kcg_lit_int32(0);
      outC->_L1_then_else_else_IfBlock1[idx25].packets.PacketHeaders[idx23].q_dir =
        Q_DIR_Reverse;
      outC->_L1_then_else_else_IfBlock1[idx25].packets.PacketHeaders[idx23].valid =
        kcg_true;
      outC->_L1_then_else_else_IfBlock1[idx25].packets.PacketHeaders[idx23].startAddress =
        kcg_lit_int32(0);
      outC->_L1_then_else_else_IfBlock1[idx25].packets.PacketHeaders[idx23].endAddress =
        kcg_lit_int32(0);
    }
    for (idx24 = 0; idx24 < 500; idx24++) {
      outC->_L1_then_else_else_IfBlock1[idx25].packets.PacketData[idx24] =
        kcg_lit_int32(0);
    }
    outC->_L1_then_else_else_IfBlock1[idx25].sendingRBC.valid = kcg_true;
    outC->_L1_then_else_else_IfBlock1[idx25].sendingRBC.nid_c = kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].sendingRBC.rbc_id = kcg_lit_int32(0);
    outC->_L1_then_else_else_IfBlock1[idx25].sendingRBC.device_id =
      kcg_lit_int32(0);
  }
  outC->_L3_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L4_then_else_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L4_then_else_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L4_then_else_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L4_then_else_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L4_then_else_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L4_then_else_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L4_then_else_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L4_then_else_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L4_then_else_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L4_then_else_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(
      0);
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L4_then_else_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L4_then_else_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(
      0);
  outC->_L4_then_else_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L4_then_else_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_then_else_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L4_then_else_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L4_then_else_else_IfBlock1.packets.PacketHeaders[idx26].nid_packet =
      kcg_lit_int32(0);
    outC->_L4_then_else_else_IfBlock1.packets.PacketHeaders[idx26].q_dir =
      Q_DIR_Reverse;
    outC->_L4_then_else_else_IfBlock1.packets.PacketHeaders[idx26].valid = kcg_true;
    outC->_L4_then_else_else_IfBlock1.packets.PacketHeaders[idx26].startAddress =
      kcg_lit_int32(0);
    outC->_L4_then_else_else_IfBlock1.packets.PacketHeaders[idx26].endAddress =
      kcg_lit_int32(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->_L4_then_else_else_IfBlock1.packets.PacketData[idx27] = kcg_lit_int32(0);
  }
  outC->_L4_then_else_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L4_then_else_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  for (idx30 = 0; idx30 < 3; idx30++) {
    outC->_L10_then_else_else_IfBlock1[idx30].valid = kcg_true;
    outC->_L10_then_else_else_IfBlock1[idx30].source =
      msrc_undefined_Common_Types_Pkg;
    outC->_L10_then_else_else_IfBlock1[idx30].radioMetadata.t_train_reference =
      kcg_true;
    outC->_L10_then_else_else_IfBlock1[idx30].radioMetadata.nid_em = kcg_true;
    outC->_L10_then_else_else_IfBlock1[idx30].radioMetadata.q_scale = kcg_true;
    outC->_L10_then_else_else_IfBlock1[idx30].radioMetadata.d_sr = kcg_true;
    outC->_L10_then_else_else_IfBlock1[idx30].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L10_then_else_else_IfBlock1[idx30].radioMetadata.d_ref = kcg_true;
    outC->_L10_then_else_else_IfBlock1[idx30].radioMetadata.q_dir = kcg_true;
    outC->_L10_then_else_else_IfBlock1[idx30].radioMetadata.d_emergencystop =
      kcg_true;
    outC->_L10_then_else_else_IfBlock1[idx30].radioMetadata.m_version = kcg_true;
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.valid = kcg_true;
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.bgPosition.valid =
      kcg_true;
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L10_then_else_else_IfBlock1[idx30].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L10_then_else_else_IfBlock1[idx30].Radio_Common_Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].Radio_Common_Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].Radio_Common_Header.nid_message =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].Radio_Common_Header.t_train =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->_L10_then_else_else_IfBlock1[idx30].Radio_Common_Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].Radio_Common_Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].Radio_Common_Header.nid_em =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].Radio_Common_Header.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L10_then_else_else_IfBlock1[idx30].Radio_Common_Header.d_sr =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].Radio_Common_Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].Radio_Common_Header.d_ref =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].Radio_Common_Header.q_dir =
      Q_DIR_Reverse;
    outC->_L10_then_else_else_IfBlock1[idx30].Radio_Common_Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx28 = 0; idx28 < 30; idx28++) {
      outC->_L10_then_else_else_IfBlock1[idx30].packets.PacketHeaders[idx28].nid_packet =
        kcg_lit_int32(0);
      outC->_L10_then_else_else_IfBlock1[idx30].packets.PacketHeaders[idx28].q_dir =
        Q_DIR_Reverse;
      outC->_L10_then_else_else_IfBlock1[idx30].packets.PacketHeaders[idx28].valid =
        kcg_true;
      outC->_L10_then_else_else_IfBlock1[idx30].packets.PacketHeaders[idx28].startAddress =
        kcg_lit_int32(0);
      outC->_L10_then_else_else_IfBlock1[idx30].packets.PacketHeaders[idx28].endAddress =
        kcg_lit_int32(0);
    }
    for (idx29 = 0; idx29 < 500; idx29++) {
      outC->_L10_then_else_else_IfBlock1[idx30].packets.PacketData[idx29] =
        kcg_lit_int32(0);
    }
    outC->_L10_then_else_else_IfBlock1[idx30].sendingRBC.valid = kcg_true;
    outC->_L10_then_else_else_IfBlock1[idx30].sendingRBC.nid_c = kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].sendingRBC.rbc_id = kcg_lit_int32(0);
    outC->_L10_then_else_else_IfBlock1[idx30].sendingRBC.device_id =
      kcg_lit_int32(0);
  }
  outC->_L9_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L8_then_else_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L8_then_else_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L8_then_else_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L8_then_else_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L8_then_else_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L8_then_else_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L8_then_else_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L8_then_else_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L8_then_else_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L8_then_else_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(
      0);
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L8_then_else_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L8_then_else_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(
      0);
  outC->_L8_then_else_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L8_then_else_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L8_then_else_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L8_then_else_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx31 = 0; idx31 < 30; idx31++) {
    outC->_L8_then_else_else_IfBlock1.packets.PacketHeaders[idx31].nid_packet =
      kcg_lit_int32(0);
    outC->_L8_then_else_else_IfBlock1.packets.PacketHeaders[idx31].q_dir =
      Q_DIR_Reverse;
    outC->_L8_then_else_else_IfBlock1.packets.PacketHeaders[idx31].valid = kcg_true;
    outC->_L8_then_else_else_IfBlock1.packets.PacketHeaders[idx31].startAddress =
      kcg_lit_int32(0);
    outC->_L8_then_else_else_IfBlock1.packets.PacketHeaders[idx31].endAddress =
      kcg_lit_int32(0);
  }
  for (idx32 = 0; idx32 < 500; idx32++) {
    outC->_L8_then_else_else_IfBlock1.packets.PacketData[idx32] = kcg_lit_int32(0);
  }
  outC->_L8_then_else_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L8_then_else_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L11_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  for (idx35 = 0; idx35 < 3; idx35++) {
    outC->_L2_then_IfBlock1[idx35].valid = kcg_true;
    outC->_L2_then_IfBlock1[idx35].source = msrc_undefined_Common_Types_Pkg;
    outC->_L2_then_IfBlock1[idx35].radioMetadata.t_train_reference = kcg_true;
    outC->_L2_then_IfBlock1[idx35].radioMetadata.nid_em = kcg_true;
    outC->_L2_then_IfBlock1[idx35].radioMetadata.q_scale = kcg_true;
    outC->_L2_then_IfBlock1[idx35].radioMetadata.d_sr = kcg_true;
    outC->_L2_then_IfBlock1[idx35].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L2_then_IfBlock1[idx35].radioMetadata.d_ref = kcg_true;
    outC->_L2_then_IfBlock1[idx35].radioMetadata.q_dir = kcg_true;
    outC->_L2_then_IfBlock1[idx35].radioMetadata.d_emergencystop = kcg_true;
    outC->_L2_then_IfBlock1[idx35].radioMetadata.m_version = kcg_true;
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.valid = kcg_true;
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.m_mcount = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.nid_c = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.nid_bg = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.bgPosition.valid = kcg_true;
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L2_then_IfBlock1[idx35].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L2_then_IfBlock1[idx35].Radio_Common_Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].Radio_Common_Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].Radio_Common_Header.nid_message =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].Radio_Common_Header.t_train = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->_L2_then_IfBlock1[idx35].Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].Radio_Common_Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].Radio_Common_Header.nid_em = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].Radio_Common_Header.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L2_then_IfBlock1[idx35].Radio_Common_Header.d_sr = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].Radio_Common_Header.d_ref = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->_L2_then_IfBlock1[idx35].Radio_Common_Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx33 = 0; idx33 < 30; idx33++) {
      outC->_L2_then_IfBlock1[idx35].packets.PacketHeaders[idx33].nid_packet =
        kcg_lit_int32(0);
      outC->_L2_then_IfBlock1[idx35].packets.PacketHeaders[idx33].q_dir =
        Q_DIR_Reverse;
      outC->_L2_then_IfBlock1[idx35].packets.PacketHeaders[idx33].valid = kcg_true;
      outC->_L2_then_IfBlock1[idx35].packets.PacketHeaders[idx33].startAddress =
        kcg_lit_int32(0);
      outC->_L2_then_IfBlock1[idx35].packets.PacketHeaders[idx33].endAddress =
        kcg_lit_int32(0);
    }
    for (idx34 = 0; idx34 < 500; idx34++) {
      outC->_L2_then_IfBlock1[idx35].packets.PacketData[idx34] = kcg_lit_int32(0);
    }
    outC->_L2_then_IfBlock1[idx35].sendingRBC.valid = kcg_true;
    outC->_L2_then_IfBlock1[idx35].sendingRBC.nid_c = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].sendingRBC.rbc_id = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx35].sendingRBC.device_id = kcg_lit_int32(0);
  }
  outC->_L4_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.valid = kcg_true;
  outC->_L5_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L5_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L5_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L5_then_IfBlock1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L5_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L5_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L5_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L5_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.t_train_reference = kcg_lit_int32(
      0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L5_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx36 = 0; idx36 < 30; idx36++) {
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx36].nid_packet =
      kcg_lit_int32(0);
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx36].q_dir = Q_DIR_Reverse;
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx36].valid = kcg_true;
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx36].startAddress =
      kcg_lit_int32(0);
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx36].endAddress =
      kcg_lit_int32(0);
  }
  for (idx37 = 0; idx37 < 500; idx37++) {
    outC->_L5_then_IfBlock1.packets.PacketData[idx37] = kcg_lit_int32(0);
  }
  outC->_L5_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L5_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  for (idx40 = 0; idx40 < 3; idx40++) {
    outC->_L14_then_IfBlock1[idx40].valid = kcg_true;
    outC->_L14_then_IfBlock1[idx40].source = msrc_undefined_Common_Types_Pkg;
    outC->_L14_then_IfBlock1[idx40].radioMetadata.t_train_reference = kcg_true;
    outC->_L14_then_IfBlock1[idx40].radioMetadata.nid_em = kcg_true;
    outC->_L14_then_IfBlock1[idx40].radioMetadata.q_scale = kcg_true;
    outC->_L14_then_IfBlock1[idx40].radioMetadata.d_sr = kcg_true;
    outC->_L14_then_IfBlock1[idx40].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L14_then_IfBlock1[idx40].radioMetadata.d_ref = kcg_true;
    outC->_L14_then_IfBlock1[idx40].radioMetadata.q_dir = kcg_true;
    outC->_L14_then_IfBlock1[idx40].radioMetadata.d_emergencystop = kcg_true;
    outC->_L14_then_IfBlock1[idx40].radioMetadata.m_version = kcg_true;
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.valid = kcg_true;
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.m_mcount = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.nid_c = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.nid_bg = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.bgPosition.valid = kcg_true;
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L14_then_IfBlock1[idx40].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L14_then_IfBlock1[idx40].Radio_Common_Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].Radio_Common_Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].Radio_Common_Header.nid_message =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].Radio_Common_Header.t_train = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->_L14_then_IfBlock1[idx40].Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].Radio_Common_Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].Radio_Common_Header.nid_em = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].Radio_Common_Header.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L14_then_IfBlock1[idx40].Radio_Common_Header.d_sr = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].Radio_Common_Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].Radio_Common_Header.d_ref = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->_L14_then_IfBlock1[idx40].Radio_Common_Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx38 = 0; idx38 < 30; idx38++) {
      outC->_L14_then_IfBlock1[idx40].packets.PacketHeaders[idx38].nid_packet =
        kcg_lit_int32(0);
      outC->_L14_then_IfBlock1[idx40].packets.PacketHeaders[idx38].q_dir =
        Q_DIR_Reverse;
      outC->_L14_then_IfBlock1[idx40].packets.PacketHeaders[idx38].valid = kcg_true;
      outC->_L14_then_IfBlock1[idx40].packets.PacketHeaders[idx38].startAddress =
        kcg_lit_int32(0);
      outC->_L14_then_IfBlock1[idx40].packets.PacketHeaders[idx38].endAddress =
        kcg_lit_int32(0);
    }
    for (idx39 = 0; idx39 < 500; idx39++) {
      outC->_L14_then_IfBlock1[idx40].packets.PacketData[idx39] = kcg_lit_int32(0);
    }
    outC->_L14_then_IfBlock1[idx40].sendingRBC.valid = kcg_true;
    outC->_L14_then_IfBlock1[idx40].sendingRBC.nid_c = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].sendingRBC.rbc_id = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1[idx40].sendingRBC.device_id = kcg_lit_int32(0);
  }
  outC->_L13_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.valid = kcg_true;
  outC->_L12_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L12_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L12_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L12_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L12_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L12_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L12_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L12_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L12_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L12_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L12_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L12_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L12_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L12_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L12_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L12_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L12_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L12_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L12_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L12_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L12_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx41 = 0; idx41 < 30; idx41++) {
    outC->_L12_then_IfBlock1.packets.PacketHeaders[idx41].nid_packet =
      kcg_lit_int32(0);
    outC->_L12_then_IfBlock1.packets.PacketHeaders[idx41].q_dir = Q_DIR_Reverse;
    outC->_L12_then_IfBlock1.packets.PacketHeaders[idx41].valid = kcg_true;
    outC->_L12_then_IfBlock1.packets.PacketHeaders[idx41].startAddress =
      kcg_lit_int32(0);
    outC->_L12_then_IfBlock1.packets.PacketHeaders[idx41].endAddress =
      kcg_lit_int32(0);
  }
  for (idx42 = 0; idx42 < 500; idx42++) {
    outC->_L12_then_IfBlock1.packets.PacketData[idx42] = kcg_lit_int32(0);
  }
  outC->_L12_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L12_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1 = kcg_true;
  outC->outStacksize = kcg_lit_int32(0);
  outC->Out.valid = kcg_true;
  outC->Out.source = msrc_undefined_Common_Types_Pkg;
  outC->Out.radioMetadata.t_train_reference = kcg_true;
  outC->Out.radioMetadata.nid_em = kcg_true;
  outC->Out.radioMetadata.q_scale = kcg_true;
  outC->Out.radioMetadata.d_sr = kcg_true;
  outC->Out.radioMetadata.t_sh_rqst = kcg_true;
  outC->Out.radioMetadata.d_ref = kcg_true;
  outC->Out.radioMetadata.q_dir = kcg_true;
  outC->Out.radioMetadata.d_emergencystop = kcg_true;
  outC->Out.radioMetadata.m_version = kcg_true;
  outC->Out.BG_Common_Header.valid = kcg_true;
  outC->Out.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->Out.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Out.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->Out.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->Out.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->Out.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->Out.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->Out.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->Out.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->Out.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->Out.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->Out.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->Out.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->Out.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->Out.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->Out.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->Out.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->Out.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->Out.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->Out.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->Out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->Out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->Out.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->Out.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->Out.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->Out.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->Out.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->Out.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->Out.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->Out.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->Out.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->Out.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->Out.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->Out.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->Out.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->Out.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->Out.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->Out.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->Out.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->Out.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->Out.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx43 = 0; idx43 < 30; idx43++) {
    outC->Out.packets.PacketHeaders[idx43].nid_packet = kcg_lit_int32(0);
    outC->Out.packets.PacketHeaders[idx43].q_dir = Q_DIR_Reverse;
    outC->Out.packets.PacketHeaders[idx43].valid = kcg_true;
    outC->Out.packets.PacketHeaders[idx43].startAddress = kcg_lit_int32(0);
    outC->Out.packets.PacketHeaders[idx43].endAddress = kcg_lit_int32(0);
  }
  for (idx44 = 0; idx44 < 500; idx44++) {
    outC->Out.packets.PacketData[idx44] = kcg_lit_int32(0);
  }
  outC->Out.sendingRBC.valid = kcg_true;
  outC->Out.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->Out.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->Out.sendingRBC.device_id = kcg_lit_int32(0);
  /* IfBlock1:then:_L14=(InformationFilter_Pkg::TransitionBuffer_read_only#2)/ */
  TransitionBuffer_read_only_init_InformationFilter_Pkg(
    &outC->Context_TransitionBuffer_read_only_2);
  /* IfBlock1:else:then:_L10=(InformationFilter_Pkg::TransitionBuffer_read_write#1)/ */
  TransitionBuffer_read_write_init_InformationFilter_Pkg(
    &outC->Context_TransitionBuffer_read_write_1);
  /* IfBlock1:else:else:then:_L10=(InformationFilter_Pkg::TransitionBuffer_write_only#1)/ */
  TransitionBuffer_write_only_init_InformationFilter_Pkg(
    &outC->Context_TransitionBuffer_write_only_1);
  outC->stacksize = kcg_lit_int32(0);
  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
    &outC->buffer,
    (TransitionBuffer_T_InformationFilter_Pkg *)
      &DEFAULT_TransitionBuffer_t_InformationFilter_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TransitionBuffer_reset_InformationFilter_Pkg(
  outC_TransitionBuffer_InformationFilter_Pkg *outC)
{
  /* IfBlock1:then:_L14=(InformationFilter_Pkg::TransitionBuffer_read_only#2)/ */
  TransitionBuffer_read_only_reset_InformationFilter_Pkg(
    &outC->Context_TransitionBuffer_read_only_2);
  /* IfBlock1:else:then:_L10=(InformationFilter_Pkg::TransitionBuffer_read_write#1)/ */
  TransitionBuffer_read_write_reset_InformationFilter_Pkg(
    &outC->Context_TransitionBuffer_read_write_1);
  /* IfBlock1:else:else:then:_L10=(InformationFilter_Pkg::TransitionBuffer_write_only#1)/ */
  TransitionBuffer_write_only_reset_InformationFilter_Pkg(
    &outC->Context_TransitionBuffer_write_only_1);
  outC->stacksize = kcg_lit_int32(0);
  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
    &outC->buffer,
    (TransitionBuffer_T_InformationFilter_Pkg *)
      &DEFAULT_TransitionBuffer_t_InformationFilter_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TransitionBuffer_InformationFilter_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

