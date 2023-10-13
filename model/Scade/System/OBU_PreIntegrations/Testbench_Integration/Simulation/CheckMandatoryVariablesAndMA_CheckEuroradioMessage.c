/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckMandatoryVariablesAndMA_CheckEuroradioMessage.h"

/* CheckEuroradioMessage::CheckMandatoryVariablesAndMA/ */
void CheckMandatoryVariablesAndMA_CheckEuroradioMessage(
  /* rtmMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  outC_CheckMandatoryVariablesAndMA_CheckEuroradioMessage *outC)
{
  /* valid/ */
  static kcg_bool valid_partial;
  /* valid/ */
  static kcg_bool _1_valid_partial;
  /* valid/ */
  static kcg_bool _2_valid_partial;
  /* valid/ */
  static kcg_bool _3_valid_partial;
  /* valid/ */
  static kcg_bool _4_valid_partial;
  /* valid/ */
  static kcg_bool _5_valid_partial;
  /* valid/ */
  static kcg_bool _6_valid_partial;
  /* valid/ */
  static kcg_bool _7_valid_partial;
  /* valid/ */
  static kcg_bool _8_valid_partial;
  /* valid/ */
  static kcg_bool _9_valid_partial;
  /* valid/ */
  static kcg_bool _10_valid_partial;
  /* valid/ */
  static kcg_bool _11_valid_partial;
  /* valid/ */
  static kcg_bool _12_valid_partial;
  /* valid/ */
  static kcg_bool _13_valid_partial;
  /* valid/ */
  static kcg_bool _14_valid_partial;
  /* valid/ */
  static kcg_bool _15_valid_partial;
  /* valid/ */
  static kcg_bool _16_valid_partial;
  /* valid/ */
  static kcg_bool _17_valid_partial;
  /* valid/ */
  static kcg_bool _18_valid_partial;
  /* valid/ */
  static kcg_bool _19_valid_partial;
  /* valid/ */
  static kcg_bool _20_valid_partial;
  /* valid/ */
  static kcg_bool _21_valid_partial;

  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, rtmMessage);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&outC->_L3, &outC->_L1.radioMetadata);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&outC->radioMetadata, &outC->_L3);
  outC->_L2 = outC->_L1.Radio_Common_Header.nid_message;
  outC->nid_message = outC->_L2;
  outC->IfBlock1_clock = outC->nid_message == kcg_lit_int64(3);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L16_then_IfBlock1,
      rtmMessage);
    /* IfBlock1:then:_L17=(CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent#1)/ */
    CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions(
      &outC->_L16_then_IfBlock1,
      &outC->Context_CheckIfPacket15IsPresent_1);
    outC->_L17_then_IfBlock1 = outC->Context_CheckIfPacket15IsPresent_1.result;
    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
      &outC->_L15_then_IfBlock1,
      &outC->radioMetadata);
    outC->_L6_then_IfBlock1 = outC->_L15_then_IfBlock1.m_version;
    outC->_L7_then_IfBlock1 = outC->_L15_then_IfBlock1.d_emergencystop;
    outC->_L8_then_IfBlock1 = outC->_L15_then_IfBlock1.q_dir;
    outC->_L9_then_IfBlock1 = outC->_L15_then_IfBlock1.d_ref;
    outC->_L10_then_IfBlock1 = outC->_L15_then_IfBlock1.t_sh_rqst;
    outC->_L11_then_IfBlock1 = outC->_L15_then_IfBlock1.d_sr;
    outC->_L12_then_IfBlock1 = outC->_L15_then_IfBlock1.q_scale;
    outC->_L13_then_IfBlock1 = outC->_L15_then_IfBlock1.nid_em;
    outC->_L14_then_IfBlock1 = outC->_L15_then_IfBlock1.t_train_reference;
    outC->_L2_then_IfBlock1 = outC->_L14_then_IfBlock1 |
      outC->_L13_then_IfBlock1 | outC->_L12_then_IfBlock1 |
      outC->_L11_then_IfBlock1 | outC->_L10_then_IfBlock1 |
      outC->_L9_then_IfBlock1 | outC->_L8_then_IfBlock1 |
      outC->_L7_then_IfBlock1 | outC->_L6_then_IfBlock1;
    outC->_L4_then_IfBlock1 = !outC->_L2_then_IfBlock1;
    outC->_L18_then_IfBlock1 = outC->_L4_then_IfBlock1 & outC->_L17_then_IfBlock1;
    valid_partial = outC->_L18_then_IfBlock1;
    outC->valid = valid_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->nid_message == kcg_lit_int64(8);
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
        &outC->_L13_then_else_IfBlock1,
        &outC->radioMetadata);
      outC->_L3_then_else_IfBlock1 = outC->_L13_then_else_IfBlock1.t_train_reference;
      outC->_L14_then_else_IfBlock1 = !outC->_L3_then_else_IfBlock1;
      outC->_L11_then_else_IfBlock1 = outC->_L13_then_else_IfBlock1.m_version;
      outC->_L10_then_else_IfBlock1 = outC->_L13_then_else_IfBlock1.d_emergencystop;
      outC->_L9_then_else_IfBlock1 = outC->_L13_then_else_IfBlock1.q_dir;
      outC->_L8_then_else_IfBlock1 = outC->_L13_then_else_IfBlock1.d_ref;
      outC->_L7_then_else_IfBlock1 = outC->_L13_then_else_IfBlock1.t_sh_rqst;
      outC->_L6_then_else_IfBlock1 = outC->_L13_then_else_IfBlock1.d_sr;
      outC->_L5_then_else_IfBlock1 = outC->_L13_then_else_IfBlock1.q_scale;
      outC->_L4_then_else_IfBlock1 = outC->_L13_then_else_IfBlock1.nid_em;
      outC->_L2_then_else_IfBlock1 = outC->_L14_then_else_IfBlock1 |
        outC->_L4_then_else_IfBlock1 | outC->_L5_then_else_IfBlock1 |
        outC->_L6_then_else_IfBlock1 | outC->_L7_then_else_IfBlock1 |
        outC->_L8_then_else_IfBlock1 | outC->_L9_then_else_IfBlock1 |
        outC->_L10_then_else_IfBlock1 | outC->_L11_then_else_IfBlock1;
      outC->_L12_then_else_IfBlock1 = !outC->_L2_then_else_IfBlock1;
      _21_valid_partial = outC->_L12_then_else_IfBlock1;
      _1_valid_partial = _21_valid_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->nid_message == kcg_lit_int64(9);
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &outC->_L19_then_else_else_IfBlock1,
          rtmMessage);
        /* IfBlock1:else:else:then:_L7=(CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent#3)/ */
        CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions(
          &outC->_L19_then_else_else_IfBlock1,
          &outC->Context_CheckIfPacket15IsPresent_3);
        outC->_L7_then_else_else_IfBlock1 =
          outC->Context_CheckIfPacket15IsPresent_3.result;
        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
          &outC->_L6_then_else_else_IfBlock1,
          &outC->radioMetadata);
        outC->_L16_then_else_else_IfBlock1 =
          outC->_L6_then_else_else_IfBlock1.m_version;
        outC->_L15_then_else_else_IfBlock1 =
          outC->_L6_then_else_else_IfBlock1.d_emergencystop;
        outC->_L14_then_else_else_IfBlock1 = outC->_L6_then_else_else_IfBlock1.q_dir;
        outC->_L13_then_else_else_IfBlock1 = outC->_L6_then_else_else_IfBlock1.d_ref;
        outC->_L12_then_else_else_IfBlock1 =
          outC->_L6_then_else_else_IfBlock1.t_sh_rqst;
        outC->_L11_then_else_else_IfBlock1 = outC->_L6_then_else_else_IfBlock1.d_sr;
        outC->_L10_then_else_else_IfBlock1 = outC->_L6_then_else_else_IfBlock1.q_scale;
        outC->_L9_then_else_else_IfBlock1 = outC->_L6_then_else_else_IfBlock1.nid_em;
        outC->_L8_then_else_else_IfBlock1 =
          outC->_L6_then_else_else_IfBlock1.t_train_reference;
        outC->_L20_then_else_else_IfBlock1 = outC->_L8_then_else_else_IfBlock1 |
          outC->_L9_then_else_else_IfBlock1 |
          outC->_L10_then_else_else_IfBlock1 |
          outC->_L11_then_else_else_IfBlock1 |
          outC->_L12_then_else_else_IfBlock1 |
          outC->_L13_then_else_else_IfBlock1 |
          outC->_L14_then_else_else_IfBlock1 |
          outC->_L15_then_else_else_IfBlock1 |
          outC->_L16_then_else_else_IfBlock1;
        outC->_L18_then_else_else_IfBlock1 = !outC->_L20_then_else_else_IfBlock1;
        outC->_L17_then_else_else_IfBlock1 =
          outC->_L18_then_else_else_IfBlock1 & outC->_L7_then_else_else_IfBlock1;
        _2_valid_partial = outC->_L17_then_else_else_IfBlock1;
        _20_valid_partial = _2_valid_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->nid_message == kcg_lit_int64(15);
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
            &outC->_L14_then_else_else_else_IfBlock1,
            &outC->radioMetadata);
          outC->_L10_then_else_else_else_IfBlock1 =
            outC->_L14_then_else_else_else_IfBlock1.d_emergencystop;
          outC->_L21_then_else_else_else_IfBlock1 =
            !outC->_L10_then_else_else_else_IfBlock1;
          outC->_L9_then_else_else_else_IfBlock1 =
            outC->_L14_then_else_else_else_IfBlock1.q_dir;
          outC->_L20_then_else_else_else_IfBlock1 =
            !outC->_L9_then_else_else_else_IfBlock1;
          outC->_L8_then_else_else_else_IfBlock1 =
            outC->_L14_then_else_else_else_IfBlock1.d_ref;
          outC->_L19_then_else_else_else_IfBlock1 =
            !outC->_L8_then_else_else_else_IfBlock1;
          outC->_L5_then_else_else_else_IfBlock1 =
            outC->_L14_then_else_else_else_IfBlock1.q_scale;
          outC->_L18_then_else_else_else_IfBlock1 =
            !outC->_L5_then_else_else_else_IfBlock1;
          outC->_L4_then_else_else_else_IfBlock1 =
            outC->_L14_then_else_else_else_IfBlock1.nid_em;
          outC->_L16_then_else_else_else_IfBlock1 =
            !outC->_L4_then_else_else_else_IfBlock1;
          outC->_L11_then_else_else_else_IfBlock1 =
            outC->_L14_then_else_else_else_IfBlock1.m_version;
          outC->_L7_then_else_else_else_IfBlock1 =
            outC->_L14_then_else_else_else_IfBlock1.t_sh_rqst;
          outC->_L6_then_else_else_else_IfBlock1 =
            outC->_L14_then_else_else_else_IfBlock1.d_sr;
          outC->_L3_then_else_else_else_IfBlock1 =
            outC->_L14_then_else_else_else_IfBlock1.t_train_reference;
          outC->_L13_then_else_else_else_IfBlock1 =
            outC->_L3_then_else_else_else_IfBlock1 |
            outC->_L16_then_else_else_else_IfBlock1 |
            outC->_L18_then_else_else_else_IfBlock1 |
            outC->_L6_then_else_else_else_IfBlock1 |
            outC->_L7_then_else_else_else_IfBlock1 |
            outC->_L19_then_else_else_else_IfBlock1 |
            outC->_L20_then_else_else_else_IfBlock1 |
            outC->_L21_then_else_else_else_IfBlock1 |
            outC->_L11_then_else_else_else_IfBlock1;
          outC->_L2_then_else_else_else_IfBlock1 =
            !outC->_L13_then_else_else_else_IfBlock1;
          _19_valid_partial = outC->_L2_then_else_else_else_IfBlock1;
          _3_valid_partial = _19_valid_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = outC->nid_message ==
            kcg_lit_int64(16);
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
              &outC->_L38_then_else_else_else_else_IfBlock1,
              &outC->radioMetadata);
            outC->_L43_then_else_else_else_else_IfBlock1 =
              outC->_L38_then_else_else_else_else_IfBlock1.nid_em;
            outC->_L52_then_else_else_else_else_IfBlock1 =
              !outC->_L43_then_else_else_else_else_IfBlock1;
            outC->_L42_then_else_else_else_else_IfBlock1 =
              outC->_L38_then_else_else_else_else_IfBlock1.t_train_reference;
            outC->_L44_then_else_else_else_else_IfBlock1 =
              outC->_L38_then_else_else_else_else_IfBlock1.q_scale;
            outC->_L45_then_else_else_else_else_IfBlock1 =
              outC->_L38_then_else_else_else_else_IfBlock1.d_sr;
            outC->_L46_then_else_else_else_else_IfBlock1 =
              outC->_L38_then_else_else_else_else_IfBlock1.t_sh_rqst;
            outC->_L47_then_else_else_else_else_IfBlock1 =
              outC->_L38_then_else_else_else_else_IfBlock1.d_ref;
            outC->_L48_then_else_else_else_else_IfBlock1 =
              outC->_L38_then_else_else_else_else_IfBlock1.q_dir;
            outC->_L49_then_else_else_else_else_IfBlock1 =
              outC->_L38_then_else_else_else_else_IfBlock1.d_emergencystop;
            outC->_L50_then_else_else_else_else_IfBlock1 =
              outC->_L38_then_else_else_else_else_IfBlock1.m_version;
            outC->_L41_then_else_else_else_else_IfBlock1 =
              outC->_L42_then_else_else_else_else_IfBlock1 |
              outC->_L52_then_else_else_else_else_IfBlock1 |
              outC->_L44_then_else_else_else_else_IfBlock1 |
              outC->_L45_then_else_else_else_else_IfBlock1 |
              outC->_L46_then_else_else_else_else_IfBlock1 |
              outC->_L47_then_else_else_else_else_IfBlock1 |
              outC->_L48_then_else_else_else_else_IfBlock1 |
              outC->_L49_then_else_else_else_else_IfBlock1 |
              outC->_L50_then_else_else_else_else_IfBlock1;
            outC->_L39_then_else_else_else_else_IfBlock1 =
              !outC->_L41_then_else_else_else_else_IfBlock1;
            _4_valid_partial = outC->_L39_then_else_else_else_else_IfBlock1;
            _18_valid_partial = _4_valid_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = outC->nid_message ==
              kcg_lit_int64(18);
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                &outC->_L14_then_else_else_else_else_else_IfBlock1,
                &outC->radioMetadata);
              outC->_L12_then_else_else_else_else_else_IfBlock1 =
                outC->_L14_then_else_else_else_else_else_IfBlock1.m_version;
              outC->_L11_then_else_else_else_else_else_IfBlock1 =
                outC->_L14_then_else_else_else_else_else_IfBlock1.d_emergencystop;
              outC->_L10_then_else_else_else_else_else_IfBlock1 =
                outC->_L14_then_else_else_else_else_else_IfBlock1.q_dir;
              outC->_L9_then_else_else_else_else_else_IfBlock1 =
                outC->_L14_then_else_else_else_else_else_IfBlock1.d_ref;
              outC->_L8_then_else_else_else_else_else_IfBlock1 =
                outC->_L14_then_else_else_else_else_else_IfBlock1.t_sh_rqst;
              outC->_L7_then_else_else_else_else_else_IfBlock1 =
                outC->_L14_then_else_else_else_else_else_IfBlock1.d_sr;
              outC->_L6_then_else_else_else_else_else_IfBlock1 =
                outC->_L14_then_else_else_else_else_else_IfBlock1.q_scale;
              outC->_L5_then_else_else_else_else_else_IfBlock1 =
                outC->_L14_then_else_else_else_else_else_IfBlock1.nid_em;
              outC->_L13_then_else_else_else_else_else_IfBlock1 =
                !outC->_L5_then_else_else_else_else_else_IfBlock1;
              outC->_L4_then_else_else_else_else_else_IfBlock1 =
                outC->_L14_then_else_else_else_else_else_IfBlock1.t_train_reference;
              outC->_L3_then_else_else_else_else_else_IfBlock1 =
                outC->_L4_then_else_else_else_else_else_IfBlock1 |
                outC->_L13_then_else_else_else_else_else_IfBlock1 |
                outC->_L6_then_else_else_else_else_else_IfBlock1 |
                outC->_L7_then_else_else_else_else_else_IfBlock1 |
                outC->_L8_then_else_else_else_else_else_IfBlock1 |
                outC->_L9_then_else_else_else_else_else_IfBlock1 |
                outC->_L10_then_else_else_else_else_else_IfBlock1 |
                outC->_L11_then_else_else_else_else_else_IfBlock1 |
                outC->_L12_then_else_else_else_else_else_IfBlock1;
              outC->_L2_then_else_else_else_else_else_IfBlock1 =
                !outC->_L3_then_else_else_else_else_else_IfBlock1;
              _17_valid_partial = outC->_L2_then_else_else_else_else_else_IfBlock1;
              _5_valid_partial = _17_valid_partial;
            }
            else {
              outC->else_clock_else_else_else_else_else_IfBlock1 =
                outC->nid_message == kcg_lit_int64(24);
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                  &outC->_L11_then_else_else_else_else_else_else_IfBlock1,
                  &outC->radioMetadata);
                outC->_L20_then_else_else_else_else_else_else_IfBlock1 =
                  outC->_L11_then_else_else_else_else_else_else_IfBlock1.m_version;
                outC->_L19_then_else_else_else_else_else_else_IfBlock1 =
                  outC->_L11_then_else_else_else_else_else_else_IfBlock1.d_emergencystop;
                outC->_L18_then_else_else_else_else_else_else_IfBlock1 =
                  outC->_L11_then_else_else_else_else_else_else_IfBlock1.q_dir;
                outC->_L17_then_else_else_else_else_else_else_IfBlock1 =
                  outC->_L11_then_else_else_else_else_else_else_IfBlock1.d_ref;
                outC->_L16_then_else_else_else_else_else_else_IfBlock1 =
                  outC->_L11_then_else_else_else_else_else_else_IfBlock1.t_sh_rqst;
                outC->_L15_then_else_else_else_else_else_else_IfBlock1 =
                  outC->_L11_then_else_else_else_else_else_else_IfBlock1.d_sr;
                outC->_L14_then_else_else_else_else_else_else_IfBlock1 =
                  outC->_L11_then_else_else_else_else_else_else_IfBlock1.q_scale;
                outC->_L13_then_else_else_else_else_else_else_IfBlock1 =
                  outC->_L11_then_else_else_else_else_else_else_IfBlock1.nid_em;
                outC->_L12_then_else_else_else_else_else_else_IfBlock1 =
                  outC->_L11_then_else_else_else_else_else_else_IfBlock1.t_train_reference;
                outC->_L21_then_else_else_else_else_else_else_IfBlock1 =
                  outC->_L12_then_else_else_else_else_else_else_IfBlock1 |
                  outC->_L13_then_else_else_else_else_else_else_IfBlock1 |
                  outC->_L14_then_else_else_else_else_else_else_IfBlock1 |
                  outC->_L15_then_else_else_else_else_else_else_IfBlock1 |
                  outC->_L16_then_else_else_else_else_else_else_IfBlock1 |
                  outC->_L17_then_else_else_else_else_else_else_IfBlock1 |
                  outC->_L18_then_else_else_else_else_else_else_IfBlock1 |
                  outC->_L19_then_else_else_else_else_else_else_IfBlock1 |
                  outC->_L20_then_else_else_else_else_else_else_IfBlock1;
                outC->_L22_then_else_else_else_else_else_else_IfBlock1 =
                  !outC->_L21_then_else_else_else_else_else_else_IfBlock1;
                _6_valid_partial = outC->_L22_then_else_else_else_else_else_else_IfBlock1;
                _16_valid_partial = _6_valid_partial;
              }
              else {
                outC->else_clock_else_else_else_else_else_else_IfBlock1 =
                  outC->nid_message == kcg_lit_int64(32);
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                    &outC->_L13_then_else_else_else_else_else_else_else_IfBlock1,
                    &outC->radioMetadata);
                  outC->_L12_then_else_else_else_else_else_else_else_IfBlock1 =
                    outC->_L13_then_else_else_else_else_else_else_else_IfBlock1.m_version;
                  outC->_L15_then_else_else_else_else_else_else_else_IfBlock1 =
                    !outC->_L12_then_else_else_else_else_else_else_else_IfBlock1;
                  outC->_L11_then_else_else_else_else_else_else_else_IfBlock1 =
                    outC->_L13_then_else_else_else_else_else_else_else_IfBlock1.d_emergencystop;
                  outC->_L10_then_else_else_else_else_else_else_else_IfBlock1 =
                    outC->_L13_then_else_else_else_else_else_else_else_IfBlock1.q_dir;
                  outC->_L9_then_else_else_else_else_else_else_else_IfBlock1 =
                    outC->_L13_then_else_else_else_else_else_else_else_IfBlock1.d_ref;
                  outC->_L8_then_else_else_else_else_else_else_else_IfBlock1 =
                    outC->_L13_then_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst;
                  outC->_L7_then_else_else_else_else_else_else_else_IfBlock1 =
                    outC->_L13_then_else_else_else_else_else_else_else_IfBlock1.d_sr;
                  outC->_L6_then_else_else_else_else_else_else_else_IfBlock1 =
                    outC->_L13_then_else_else_else_else_else_else_else_IfBlock1.q_scale;
                  outC->_L5_then_else_else_else_else_else_else_else_IfBlock1 =
                    outC->_L13_then_else_else_else_else_else_else_else_IfBlock1.nid_em;
                  outC->_L4_then_else_else_else_else_else_else_else_IfBlock1 =
                    outC->_L13_then_else_else_else_else_else_else_else_IfBlock1.t_train_reference;
                  outC->_L14_then_else_else_else_else_else_else_else_IfBlock1 =
                    outC->_L4_then_else_else_else_else_else_else_else_IfBlock1 |
                    outC->_L5_then_else_else_else_else_else_else_else_IfBlock1 |
                    outC->_L6_then_else_else_else_else_else_else_else_IfBlock1 |
                    outC->_L7_then_else_else_else_else_else_else_else_IfBlock1 |
                    outC->_L8_then_else_else_else_else_else_else_else_IfBlock1 |
                    outC->_L9_then_else_else_else_else_else_else_else_IfBlock1 |
                    outC->_L10_then_else_else_else_else_else_else_else_IfBlock1 |
                    outC->_L11_then_else_else_else_else_else_else_else_IfBlock1 |
                    outC->_L15_then_else_else_else_else_else_else_else_IfBlock1;
                  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1 =
                    !outC->_L14_then_else_else_else_else_else_else_else_IfBlock1;
                  _15_valid_partial = outC->_L2_then_else_else_else_else_else_else_else_IfBlock1;
                  _7_valid_partial = _15_valid_partial;
                }
                else {
                  outC->else_clock_else_else_else_else_else_else_else_IfBlock1 =
                    outC->nid_message == kcg_lit_int64(33);
                  /* IfBlock1:else:else:else:else:else:else:else:else: */
                  if (outC->else_clock_else_else_else_else_else_else_else_IfBlock1) {
                    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                      &outC->_L15_then_else_else_else_else_else_else_else_else_IfBlock1,
                      &outC->radioMetadata);
                    outC->_L7_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->_L15_then_else_else_else_else_else_else_else_else_IfBlock1.d_ref;
                    outC->_L20_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      !outC->_L7_then_else_else_else_else_else_else_else_else_IfBlock1;
                    outC->_L4_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->_L15_then_else_else_else_else_else_else_else_else_IfBlock1.q_scale;
                    outC->_L17_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      !outC->_L4_then_else_else_else_else_else_else_else_else_IfBlock1;
                    outC->_L10_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->_L15_then_else_else_else_else_else_else_else_else_IfBlock1.m_version;
                    outC->_L9_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->_L15_then_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop;
                    outC->_L8_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->_L15_then_else_else_else_else_else_else_else_else_IfBlock1.q_dir;
                    outC->_L6_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->_L15_then_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst;
                    outC->_L5_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->_L15_then_else_else_else_else_else_else_else_else_IfBlock1.d_sr;
                    outC->_L3_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->_L15_then_else_else_else_else_else_else_else_else_IfBlock1.nid_em;
                    outC->_L2_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->_L15_then_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference;
                    outC->_L16_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->_L2_then_else_else_else_else_else_else_else_else_IfBlock1 |
                      outC->_L3_then_else_else_else_else_else_else_else_else_IfBlock1 |
                      outC->_L17_then_else_else_else_else_else_else_else_else_IfBlock1 |
                      outC->_L5_then_else_else_else_else_else_else_else_else_IfBlock1 |
                      outC->_L6_then_else_else_else_else_else_else_else_else_IfBlock1 |
                      outC->_L20_then_else_else_else_else_else_else_else_else_IfBlock1 |
                      outC->_L8_then_else_else_else_else_else_else_else_else_IfBlock1 |
                      outC->_L9_then_else_else_else_else_else_else_else_else_IfBlock1 |
                      outC->_L10_then_else_else_else_else_else_else_else_else_IfBlock1;
                    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
                      &outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1,
                      rtmMessage);
                    /* IfBlock1:else:else:else:else:else:else:else:else:then:_L11=(CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent#5)/ */
                    CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions(
                      &outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1,
                      &outC->Context_CheckIfPacket15IsPresent_5);
                    outC->_L11_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->Context_CheckIfPacket15IsPresent_5.result;
                    outC->_L12_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      !outC->_L16_then_else_else_else_else_else_else_else_else_IfBlock1;
                    outC->_L13_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->_L12_then_else_else_else_else_else_else_else_else_IfBlock1 &
                      outC->_L11_then_else_else_else_else_else_else_else_else_IfBlock1;
                    _8_valid_partial =
                      outC->_L13_then_else_else_else_else_else_else_else_else_IfBlock1;
                    _14_valid_partial = _8_valid_partial;
                  }
                  else {
                    outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->nid_message == kcg_lit_int64(39);
                    /* IfBlock1:else:else:else:else:else:else:else:else:else: */
                    if (outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1) {
                      outC->_L5_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        M_ACK_No_acknowledgement_required;
                      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
                        &outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1,
                        rtmMessage);
                      outC->_L3_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.m_ack;
                      outC->_L4_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        outC->_L3_then_else_else_else_else_else_else_else_else_else_IfBlock1 ==
                        outC->_L5_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      _13_valid_partial =
                        outC->_L4_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      _9_valid_partial = _13_valid_partial;
                    }
                    else {
                      outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        outC->nid_message == kcg_lit_int64(41);
                      /* IfBlock1:else:else:else:else:else:else:else:else:else:else: */
                      if (outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1) {
                        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                          &outC->_L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1,
                          &outC->radioMetadata);
                        outC->_L9_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          outC->_L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference;
                        outC->_L10_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          outC->_L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em;
                        outC->_L11_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          outC->_L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale;
                        outC->_L12_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          outC->_L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr;
                        outC->_L13_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          outC->_L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst;
                        outC->_L14_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          outC->_L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref;
                        outC->_L15_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          outC->_L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir;
                        outC->_L16_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          outC->_L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop;
                        outC->_L17_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          outC->_L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version;
                        outC->_L7_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          outC->_L9_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 |
                          outC->_L10_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 |
                          outC->_L11_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 |
                          outC->_L12_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 |
                          outC->_L13_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 |
                          outC->_L14_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 |
                          outC->_L15_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 |
                          outC->_L16_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 |
                          outC->_L17_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        outC->_L8_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          !outC->_L7_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _10_valid_partial =
                          outC->_L8_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _12_valid_partial = _10_valid_partial;
                      }
                      else {
                        outC->_L1_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          kcg_false;
                        _11_valid_partial =
                          outC->_L1_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _12_valid_partial = _11_valid_partial;
                      }
                      _9_valid_partial = _12_valid_partial;
                    }
                    _14_valid_partial = _9_valid_partial;
                  }
                  _7_valid_partial = _14_valid_partial;
                }
                _16_valid_partial = _7_valid_partial;
              }
              _5_valid_partial = _16_valid_partial;
            }
            _18_valid_partial = _5_valid_partial;
          }
          _3_valid_partial = _18_valid_partial;
        }
        _20_valid_partial = _3_valid_partial;
      }
      _1_valid_partial = _20_valid_partial;
    }
    outC->valid = _1_valid_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CheckMandatoryVariablesAndMA_init_CheckEuroradioMessage(
  outC_CheckMandatoryVariablesAndMA_CheckEuroradioMessage *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;

  outC->_L3.t_train_reference = kcg_true;
  outC->_L3.nid_em = kcg_true;
  outC->_L3.q_scale = kcg_true;
  outC->_L3.d_sr = kcg_true;
  outC->_L3.t_sh_rqst = kcg_true;
  outC->_L3.d_ref = kcg_true;
  outC->_L3.q_dir = kcg_true;
  outC->_L3.d_emergencystop = kcg_true;
  outC->_L3.m_version = kcg_true;
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1.radioMetadata.t_train_reference = kcg_true;
  outC->_L1.radioMetadata.nid_em = kcg_true;
  outC->_L1.radioMetadata.q_scale = kcg_true;
  outC->_L1.radioMetadata.d_sr = kcg_true;
  outC->_L1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1.radioMetadata.d_ref = kcg_true;
  outC->_L1.radioMetadata.q_dir = kcg_true;
  outC->_L1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1.radioMetadata.m_version = kcg_true;
  outC->_L1.BG_Common_Header.valid = kcg_true;
  outC->_L1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L1.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L1.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->radioMetadata.t_train_reference = kcg_true;
  outC->radioMetadata.nid_em = kcg_true;
  outC->radioMetadata.q_scale = kcg_true;
  outC->radioMetadata.d_sr = kcg_true;
  outC->radioMetadata.t_sh_rqst = kcg_true;
  outC->radioMetadata.d_ref = kcg_true;
  outC->radioMetadata.q_dir = kcg_true;
  outC->radioMetadata.d_emergencystop = kcg_true;
  outC->radioMetadata.m_version = kcg_true;
  outC->nid_message = kcg_lit_int64(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L14_then_else_IfBlock1 = kcg_true;
  outC->_L13_then_else_IfBlock1.t_train_reference = kcg_true;
  outC->_L13_then_else_IfBlock1.nid_em = kcg_true;
  outC->_L13_then_else_IfBlock1.q_scale = kcg_true;
  outC->_L13_then_else_IfBlock1.d_sr = kcg_true;
  outC->_L13_then_else_IfBlock1.t_sh_rqst = kcg_true;
  outC->_L13_then_else_IfBlock1.d_ref = kcg_true;
  outC->_L13_then_else_IfBlock1.q_dir = kcg_true;
  outC->_L13_then_else_IfBlock1.d_emergencystop = kcg_true;
  outC->_L13_then_else_IfBlock1.m_version = kcg_true;
  outC->_L2_then_else_IfBlock1 = kcg_true;
  outC->_L11_then_else_IfBlock1 = kcg_true;
  outC->_L10_then_else_IfBlock1 = kcg_true;
  outC->_L9_then_else_IfBlock1 = kcg_true;
  outC->_L8_then_else_IfBlock1 = kcg_true;
  outC->_L7_then_else_IfBlock1 = kcg_true;
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->_L5_then_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_true;
  outC->_L12_then_else_IfBlock1 = kcg_true;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L21_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L20_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L19_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L18_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L16_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L11_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L10_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L9_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L8_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L7_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L6_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L5_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L13_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L14_then_else_else_else_IfBlock1.t_train_reference = kcg_true;
  outC->_L14_then_else_else_else_IfBlock1.nid_em = kcg_true;
  outC->_L14_then_else_else_else_IfBlock1.q_scale = kcg_true;
  outC->_L14_then_else_else_else_IfBlock1.d_sr = kcg_true;
  outC->_L14_then_else_else_else_IfBlock1.t_sh_rqst = kcg_true;
  outC->_L14_then_else_else_else_IfBlock1.d_ref = kcg_true;
  outC->_L14_then_else_else_else_IfBlock1.q_dir = kcg_true;
  outC->_L14_then_else_else_else_IfBlock1.d_emergencystop = kcg_true;
  outC->_L14_then_else_else_else_IfBlock1.m_version = kcg_true;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L12_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L11_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L10_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L9_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L8_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L7_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L6_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L5_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L13_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L14_then_else_else_else_else_else_IfBlock1.t_train_reference = kcg_true;
  outC->_L14_then_else_else_else_else_else_IfBlock1.nid_em = kcg_true;
  outC->_L14_then_else_else_else_else_else_IfBlock1.q_scale = kcg_true;
  outC->_L14_then_else_else_else_else_else_IfBlock1.d_sr = kcg_true;
  outC->_L14_then_else_else_else_else_else_IfBlock1.t_sh_rqst = kcg_true;
  outC->_L14_then_else_else_else_else_else_IfBlock1.d_ref = kcg_true;
  outC->_L14_then_else_else_else_else_else_IfBlock1.q_dir = kcg_true;
  outC->_L14_then_else_else_else_else_else_IfBlock1.d_emergencystop = kcg_true;
  outC->_L14_then_else_else_else_else_else_IfBlock1.m_version = kcg_true;
  outC->else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L15_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L12_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L11_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L10_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L9_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L8_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L7_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L6_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L5_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L13_then_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L13_then_else_else_else_else_else_else_else_IfBlock1.nid_em = kcg_true;
  outC->_L13_then_else_else_else_else_else_else_else_IfBlock1.q_scale = kcg_true;
  outC->_L13_then_else_else_else_else_else_else_else_IfBlock1.d_sr = kcg_true;
  outC->_L13_then_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_true;
  outC->_L13_then_else_else_else_else_else_else_else_IfBlock1.d_ref = kcg_true;
  outC->_L13_then_else_else_else_else_else_else_else_IfBlock1.q_dir = kcg_true;
  outC->_L13_then_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L13_then_else_else_else_else_else_else_else_IfBlock1.m_version =
    kcg_true;
  outC->_L14_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L5_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
    M_ACK_No_acknowledgement_required;
  outC->_L4_then_else_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
    M_ACK_No_acknowledgement_required;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.valid =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.packets.PacketHeaders[idx2].nid_packet =
      kcg_lit_int64(0);
    outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.packets.PacketHeaders[idx2].q_dir =
      Q_DIR_Reverse;
    outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.packets.PacketHeaders[idx2].valid =
      kcg_true;
    outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.packets.PacketHeaders[idx2].startAddress =
      kcg_lit_int64(0);
    outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.packets.PacketHeaders[idx2].endAddress =
      kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.packets.PacketData[idx3] =
      kcg_lit_int64(0);
  }
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int64(0);
  outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_true;
  outC->_L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
    kcg_true;
  outC->_L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_true;
  outC->_L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_true;
  outC->_L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_true;
  outC->_L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
    kcg_true;
  outC->_L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
    kcg_true;
  outC->_L9_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L10_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L11_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L12_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L13_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L14_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L15_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L16_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L17_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L8_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L7_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L16_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L15_then_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L15_then_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_true;
  outC->_L15_then_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
    kcg_true;
  outC->_L15_then_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_true;
  outC->_L15_then_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_true;
  outC->_L15_then_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_true;
  outC->_L15_then_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
    kcg_true;
  outC->_L15_then_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L15_then_else_else_else_else_else_else_else_else_IfBlock1.m_version =
    kcg_true;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.valid =
    kcg_true;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.packets.PacketHeaders[idx4].nid_packet =
      kcg_lit_int64(0);
    outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.packets.PacketHeaders[idx4].q_dir =
      Q_DIR_Reverse;
    outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.packets.PacketHeaders[idx4].valid =
      kcg_true;
    outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.packets.PacketHeaders[idx4].startAddress =
      kcg_lit_int64(0);
    outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.packets.PacketHeaders[idx4].endAddress =
      kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.packets.PacketData[idx5] =
      kcg_lit_int64(0);
  }
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int64(0);
  outC->_L14_then_else_else_else_else_else_else_else_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int64(0);
  outC->_L13_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L12_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L11_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L5_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L6_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L7_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L8_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L9_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L10_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L17_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L20_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L22_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L21_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L12_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L13_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L14_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L15_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L16_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L17_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L18_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L19_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L20_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L11_then_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L11_then_else_else_else_else_else_else_IfBlock1.nid_em = kcg_true;
  outC->_L11_then_else_else_else_else_else_else_IfBlock1.q_scale = kcg_true;
  outC->_L11_then_else_else_else_else_else_else_IfBlock1.d_sr = kcg_true;
  outC->_L11_then_else_else_else_else_else_else_IfBlock1.t_sh_rqst = kcg_true;
  outC->_L11_then_else_else_else_else_else_else_IfBlock1.d_ref = kcg_true;
  outC->_L11_then_else_else_else_else_else_else_IfBlock1.q_dir = kcg_true;
  outC->_L11_then_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L11_then_else_else_else_else_else_else_IfBlock1.m_version = kcg_true;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L42_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L43_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L44_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L45_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L46_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L47_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L48_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L49_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L50_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L41_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L39_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L38_then_else_else_else_else_IfBlock1.t_train_reference = kcg_true;
  outC->_L38_then_else_else_else_else_IfBlock1.nid_em = kcg_true;
  outC->_L38_then_else_else_else_else_IfBlock1.q_scale = kcg_true;
  outC->_L38_then_else_else_else_else_IfBlock1.d_sr = kcg_true;
  outC->_L38_then_else_else_else_else_IfBlock1.t_sh_rqst = kcg_true;
  outC->_L38_then_else_else_else_else_IfBlock1.d_ref = kcg_true;
  outC->_L38_then_else_else_else_else_IfBlock1.q_dir = kcg_true;
  outC->_L38_then_else_else_else_else_IfBlock1.d_emergencystop = kcg_true;
  outC->_L38_then_else_else_else_else_IfBlock1.m_version = kcg_true;
  outC->_L52_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L20_then_else_else_IfBlock1 = kcg_true;
  outC->_L19_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L19_then_else_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L19_then_else_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L19_then_else_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L19_then_else_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L19_then_else_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L19_then_else_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L19_then_else_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L19_then_else_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L19_then_else_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L19_then_else_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L19_then_else_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L19_then_else_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L19_then_else_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int64(
      0);
  outC->_L19_then_else_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L19_then_else_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L19_then_else_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L19_then_else_else_IfBlock1.packets.PacketHeaders[idx6].nid_packet =
      kcg_lit_int64(0);
    outC->_L19_then_else_else_IfBlock1.packets.PacketHeaders[idx6].q_dir =
      Q_DIR_Reverse;
    outC->_L19_then_else_else_IfBlock1.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L19_then_else_else_IfBlock1.packets.PacketHeaders[idx6].startAddress =
      kcg_lit_int64(0);
    outC->_L19_then_else_else_IfBlock1.packets.PacketHeaders[idx6].endAddress =
      kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L19_then_else_else_IfBlock1.packets.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->_L19_then_else_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L19_then_else_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L19_then_else_else_IfBlock1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L18_then_else_else_IfBlock1 = kcg_true;
  outC->_L17_then_else_else_IfBlock1 = kcg_true;
  outC->_L8_then_else_else_IfBlock1 = kcg_true;
  outC->_L9_then_else_else_IfBlock1 = kcg_true;
  outC->_L10_then_else_else_IfBlock1 = kcg_true;
  outC->_L11_then_else_else_IfBlock1 = kcg_true;
  outC->_L12_then_else_else_IfBlock1 = kcg_true;
  outC->_L13_then_else_else_IfBlock1 = kcg_true;
  outC->_L14_then_else_else_IfBlock1 = kcg_true;
  outC->_L15_then_else_else_IfBlock1 = kcg_true;
  outC->_L16_then_else_else_IfBlock1 = kcg_true;
  outC->_L7_then_else_else_IfBlock1 = kcg_true;
  outC->_L6_then_else_else_IfBlock1.t_train_reference = kcg_true;
  outC->_L6_then_else_else_IfBlock1.nid_em = kcg_true;
  outC->_L6_then_else_else_IfBlock1.q_scale = kcg_true;
  outC->_L6_then_else_else_IfBlock1.d_sr = kcg_true;
  outC->_L6_then_else_else_IfBlock1.t_sh_rqst = kcg_true;
  outC->_L6_then_else_else_IfBlock1.d_ref = kcg_true;
  outC->_L6_then_else_else_IfBlock1.q_dir = kcg_true;
  outC->_L6_then_else_else_IfBlock1.d_emergencystop = kcg_true;
  outC->_L6_then_else_else_IfBlock1.m_version = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 = kcg_true;
  outC->_L14_then_IfBlock1 = kcg_true;
  outC->_L13_then_IfBlock1 = kcg_true;
  outC->_L12_then_IfBlock1 = kcg_true;
  outC->_L11_then_IfBlock1 = kcg_true;
  outC->_L10_then_IfBlock1 = kcg_true;
  outC->_L9_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L6_then_IfBlock1 = kcg_true;
  outC->_L15_then_IfBlock1.t_train_reference = kcg_true;
  outC->_L15_then_IfBlock1.nid_em = kcg_true;
  outC->_L15_then_IfBlock1.q_scale = kcg_true;
  outC->_L15_then_IfBlock1.d_sr = kcg_true;
  outC->_L15_then_IfBlock1.t_sh_rqst = kcg_true;
  outC->_L15_then_IfBlock1.d_ref = kcg_true;
  outC->_L15_then_IfBlock1.q_dir = kcg_true;
  outC->_L15_then_IfBlock1.d_emergencystop = kcg_true;
  outC->_L15_then_IfBlock1.m_version = kcg_true;
  outC->_L16_then_IfBlock1.valid = kcg_true;
  outC->_L16_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L16_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L16_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L16_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L16_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L16_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L16_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L16_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L16_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L16_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L16_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L16_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L16_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L16_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx8].nid_packet =
      kcg_lit_int64(0);
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx8].startAddress =
      kcg_lit_int64(0);
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx8].endAddress =
      kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L16_then_IfBlock1.packets.PacketData[idx9] = kcg_lit_int64(0);
  }
  outC->_L16_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L16_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L17_then_IfBlock1 = kcg_true;
  outC->_L18_then_IfBlock1 = kcg_true;
  outC->valid = kcg_true;
  /* IfBlock1:then:_L17=(CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent#1)/ */
  CheckIfPacket15IsPresent_init_CheckEuroradioMessage_SubFunctions(
    &outC->Context_CheckIfPacket15IsPresent_1);
  /* IfBlock1:else:else:then:_L7=(CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent#3)/ */
  CheckIfPacket15IsPresent_init_CheckEuroradioMessage_SubFunctions(
    &outC->Context_CheckIfPacket15IsPresent_3);
  /* IfBlock1:else:else:else:else:else:else:else:else:then:_L11=(CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent#5)/ */
  CheckIfPacket15IsPresent_init_CheckEuroradioMessage_SubFunctions(
    &outC->Context_CheckIfPacket15IsPresent_5);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckMandatoryVariablesAndMA_reset_CheckEuroradioMessage(
  outC_CheckMandatoryVariablesAndMA_CheckEuroradioMessage *outC)
{
  /* IfBlock1:then:_L17=(CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent#1)/ */
  CheckIfPacket15IsPresent_reset_CheckEuroradioMessage_SubFunctions(
    &outC->Context_CheckIfPacket15IsPresent_1);
  /* IfBlock1:else:else:then:_L7=(CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent#3)/ */
  CheckIfPacket15IsPresent_reset_CheckEuroradioMessage_SubFunctions(
    &outC->Context_CheckIfPacket15IsPresent_3);
  /* IfBlock1:else:else:else:else:else:else:else:else:then:_L11=(CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent#5)/ */
  CheckIfPacket15IsPresent_reset_CheckEuroradioMessage_SubFunctions(
    &outC->Context_CheckIfPacket15IsPresent_5);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckMandatoryVariablesAndMA_CheckEuroradioMessage.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

