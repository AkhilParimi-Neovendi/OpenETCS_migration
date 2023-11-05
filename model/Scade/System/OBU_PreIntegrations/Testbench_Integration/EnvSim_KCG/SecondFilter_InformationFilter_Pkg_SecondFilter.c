/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SecondFilter_InformationFilter_Pkg_SecondFilter.h"

/* InformationFilter_Pkg::SecondFilter::SecondFilter/ */
void SecondFilter_InformationFilter_Pkg_SecondFilter(
  /* messageForFilter2/ */
  ReceivedMessage_T_Common_Types_Pkg *messageForFilter2,
  /* inMessageForBuffer/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessageForBuffer,
  /* inSupervisingDevice/ */
  kcg_int32 inSupervisingDevice,
  outC_SecondFilter_InformationFilter_Pkg_SecondFilter *outC)
{
  /* storeInBuffer2/ */
  static kcg_bool storeInBuffer2_partial;
  /* outMessageForBuffer/ */
  static ReceivedMessage_T_Common_Types_Pkg outMessageForBuffer_partial;
  /* messageForFilter3/ */
  static ReceivedMessage_T_Common_Types_Pkg messageForFilter3_partial;
  /* messageForFilter3/ */
  static ReceivedMessage_T_Common_Types_Pkg _1_messageForFilter3_partial;
  /* outMessageForBuffer/ */
  static ReceivedMessage_T_Common_Types_Pkg _2_outMessageForBuffer_partial;
  /* storeInBuffer2/ */
  static kcg_bool _3_storeInBuffer2_partial;
  /* storeInBuffer2/ */
  static kcg_bool _4_storeInBuffer2_partial;
  /* outMessageForBuffer/ */
  static ReceivedMessage_T_Common_Types_Pkg _5_outMessageForBuffer_partial;
  /* messageForFilter3/ */
  static ReceivedMessage_T_Common_Types_Pkg _6_messageForFilter3_partial;
  /* messageForFilter3/ */
  static ReceivedMessage_T_Common_Types_Pkg _7_messageForFilter3_partial;
  /* outMessageForBuffer/ */
  static ReceivedMessage_T_Common_Types_Pkg _8_outMessageForBuffer_partial;
  /* storeInBuffer2/ */
  static kcg_bool _9_storeInBuffer2_partial;
  static kcg_bool noname;
  /* messageForFilter3/ */
  static ReceivedMessage_T_Common_Types_Pkg _10_messageForFilter3_partial;
  /* outMessageForBuffer/ */
  static ReceivedMessage_T_Common_Types_Pkg _11_outMessageForBuffer_partial;
  /* storeInBuffer2/ */
  static kcg_bool _12_storeInBuffer2_partial;
  /* storeInBuffer2/ */
  static kcg_bool _13_storeInBuffer2_partial;
  /* outMessageForBuffer/ */
  static ReceivedMessage_T_Common_Types_Pkg _14_outMessageForBuffer_partial;
  /* messageForFilter3/ */
  static ReceivedMessage_T_Common_Types_Pkg _15_messageForFilter3_partial;
  static kcg_bool _16_noname;
  /* messageForFilter3/ */
  static ReceivedMessage_T_Common_Types_Pkg _17_messageForFilter3_partial;
  /* outMessageForBuffer/ */
  static ReceivedMessage_T_Common_Types_Pkg _18_outMessageForBuffer_partial;
  /* storeInBuffer2/ */
  static kcg_bool _19_storeInBuffer2_partial;
  /* storeInBuffer2/ */
  static kcg_bool _20_storeInBuffer2_partial;
  /* outMessageForBuffer/ */
  static ReceivedMessage_T_Common_Types_Pkg _21_outMessageForBuffer_partial;
  /* messageForFilter3/ */
  static ReceivedMessage_T_Common_Types_Pkg _22_messageForFilter3_partial;

  outC->_L37 = inSupervisingDevice;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L14, messageForFilter2);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L27,
    &outC->_L14.Radio_Common_Header);
  outC->_L28 = outC->_L27.radioDevice;
  outC->_L36 = outC->_L28 == outC->_L37;
  outC->isFromSupervisingRBC = outC->_L36;
  outC->_L29 = outC->_L27.nid_message;
  outC->messageId = outC->_L29;
  outC->_L26 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L24 = outC->_L14.source;
  outC->_L25 = outC->_L24 == outC->_L26;
  outC->isFromRBC = outC->_L25;
  outC->IfBlock1_clock = outC->isFromRBC;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->IfBlock2_clock_then_IfBlock1 = !outC->isFromSupervisingRBC;
    /* IfBlock1:then:IfBlock2: */
    if (outC->IfBlock2_clock_then_IfBlock1) {
      outC->_L7_then_IfBlock2_then_IfBlock1 = outC->messageId;
      outC->_L6_then_IfBlock2_then_IfBlock1 = kcg_false;
      outC->_L5_then_IfBlock2_then_IfBlock1 = kcg_true;
      /* IfBlock1:then:IfBlock2:then:_L4= */
      switch (outC->_L7_then_IfBlock2_then_IfBlock1) {
        case kcg_lit_int32(9) :
          outC->_L4_then_IfBlock2_then_IfBlock1 = outC->_L5_then_IfBlock2_then_IfBlock1;
          break;
        case kcg_lit_int32(18) :
          outC->_L4_then_IfBlock2_then_IfBlock1 = outC->_L5_then_IfBlock2_then_IfBlock1;
          break;
        default :
          outC->_L4_then_IfBlock2_then_IfBlock1 = outC->_L6_then_IfBlock2_then_IfBlock1;
          break;
      }
      outC->messagesToReject_then_IfBlock2_then_IfBlock1 =
        outC->_L4_then_IfBlock2_then_IfBlock1;
      outC->IfBlock3_clock_then_IfBlock2_then_IfBlock1 =
        !outC->messagesToReject_then_IfBlock2_then_IfBlock1;
      /* IfBlock1:then:IfBlock2:then:IfBlock3: */
      if (outC->IfBlock3_clock_then_IfBlock2_then_IfBlock1) {
        outC->_L12_then_IfBlock3_then_IfBlock2_then_IfBlock1 = outC->messageId;
        outC->_L7_then_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_true;
        outC->_L8_then_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_true;
        outC->_L9_then_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_true;
        outC->_L10_then_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_false;
        /* IfBlock1:then:IfBlock2:then:IfBlock3:then:_L5= */
        switch (outC->_L12_then_IfBlock3_then_IfBlock2_then_IfBlock1) {
          case kcg_lit_int32(8) :
            outC->_L5_then_IfBlock3_then_IfBlock2_then_IfBlock1 =
              outC->_L7_then_IfBlock3_then_IfBlock2_then_IfBlock1;
            break;
          case kcg_lit_int32(38) :
            outC->_L5_then_IfBlock3_then_IfBlock2_then_IfBlock1 =
              outC->_L8_then_IfBlock3_then_IfBlock2_then_IfBlock1;
            break;
          case kcg_lit_int32(39) :
            outC->_L5_then_IfBlock3_then_IfBlock2_then_IfBlock1 =
              outC->_L9_then_IfBlock3_then_IfBlock2_then_IfBlock1;
            break;
          default :
            outC->_L5_then_IfBlock3_then_IfBlock2_then_IfBlock1 =
              outC->_L10_then_IfBlock3_then_IfBlock2_then_IfBlock1;
            break;
        }
        outC->_L11_then_IfBlock3_then_IfBlock2_then_IfBlock1 =
          !outC->_L5_then_IfBlock3_then_IfBlock2_then_IfBlock1;
        outC->messagesForTransitionBuffer_then_IfBlock3_then_IfBlock2_then_IfBlock1 =
          outC->_L11_then_IfBlock3_then_IfBlock2_then_IfBlock1;
        outC->IfBlock4_clock_then_IfBlock3_then_IfBlock2_then_IfBlock1 =
          outC->messagesForTransitionBuffer_then_IfBlock3_then_IfBlock2_then_IfBlock1;
        /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4: */
        if (outC->IfBlock4_clock_then_IfBlock3_then_IfBlock2_then_IfBlock1) {
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1,
            messageForFilter2);
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1,
            inMessageForBuffer);
          /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4:then:_L17=(InformationFilter_Pkg::SecondFilter::DetermineBufferMessage#1)/ */
          DetermineBufferMessage_InformationFilter_Pkg_SecondFilter(
            &outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1,
            &outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1,
            &outC->Context_DetermineBufferMessage_1);
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1,
            &outC->Context_DetermineBufferMessage_1.outMessageForBuffer);
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_11_outMessageForBuffer_partial,
            &outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1);
          outC->_L6_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1 =
            outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.valid;
          noname = outC->_L6_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1;
          outC->_L15_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_false;
          outC->_L7_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1 =
            outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.source;
          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
            &outC->_L8_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1,
            &outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata);
          kcg_copy_BG_Header_T_BG_Types_Pkg(
            &outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1,
            &outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header);
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &outC->_L10_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1,
            &outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header);
          kcg_copy_CompressedPackets_T_Common_Types_Pkg(
            &outC->_L11_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1,
            &outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets);
          kcg_copy_RBC_Id_T_Common_Types_Pkg(
            &outC->_L12_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1,
            &outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC);
          outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.valid =
            outC->_L15_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1;
          outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.source =
            outC->_L7_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1;
          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
            &outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata,
            &outC->_L8_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1);
          kcg_copy_BG_Header_T_BG_Types_Pkg(
            &outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header,
            &outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1);
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header,
            &outC->_L10_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1);
          kcg_copy_CompressedPackets_T_Common_Types_Pkg(
            &outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets,
            &outC->_L11_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1);
          kcg_copy_RBC_Id_T_Common_Types_Pkg(
            &outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC,
            &outC->_L12_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1);
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_10_messageForFilter3_partial,
            &outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1);
          outC->_L1_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_true;
          _12_storeInBuffer2_partial =
            outC->_L1_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1;
          _4_storeInBuffer2_partial = _12_storeInBuffer2_partial;
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_5_outMessageForBuffer_partial,
            &_11_outMessageForBuffer_partial);
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_6_messageForFilter3_partial,
            &_10_messageForFilter3_partial);
        }
        else {
          _9_storeInBuffer2_partial = kcg_false;
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1,
            inMessageForBuffer);
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_8_outMessageForBuffer_partial,
            &outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1);
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1,
            messageForFilter2);
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_7_messageForFilter3_partial,
            &outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1);
          _4_storeInBuffer2_partial = _9_storeInBuffer2_partial;
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_5_outMessageForBuffer_partial,
            &_8_outMessageForBuffer_partial);
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_6_messageForFilter3_partial,
            &_7_messageForFilter3_partial);
        }
        _19_storeInBuffer2_partial = _4_storeInBuffer2_partial;
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_18_outMessageForBuffer_partial,
          &_5_outMessageForBuffer_partial);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_17_messageForFilter3_partial,
          &_6_messageForFilter3_partial);
      }
      else {
        _13_storeInBuffer2_partial = kcg_false;
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1,
          messageForFilter2);
        outC->_L6_else_IfBlock3_then_IfBlock2_then_IfBlock1 =
          outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.valid;
        _16_noname = outC->_L6_else_IfBlock3_then_IfBlock2_then_IfBlock1;
        outC->_L14_else_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_false;
        outC->_L7_else_IfBlock3_then_IfBlock2_then_IfBlock1 =
          outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.source;
        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
          &outC->_L8_else_IfBlock3_then_IfBlock2_then_IfBlock1,
          &outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata);
        kcg_copy_BG_Header_T_BG_Types_Pkg(
          &outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1,
          &outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header);
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &outC->_L10_else_IfBlock3_then_IfBlock2_then_IfBlock1,
          &outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header);
        kcg_copy_CompressedPackets_T_Common_Types_Pkg(
          &outC->_L11_else_IfBlock3_then_IfBlock2_then_IfBlock1,
          &outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets);
        kcg_copy_RBC_Id_T_Common_Types_Pkg(
          &outC->_L12_else_IfBlock3_then_IfBlock2_then_IfBlock1,
          &outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC);
        outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.valid =
          outC->_L14_else_IfBlock3_then_IfBlock2_then_IfBlock1;
        outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.source =
          outC->_L7_else_IfBlock3_then_IfBlock2_then_IfBlock1;
        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
          &outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata,
          &outC->_L8_else_IfBlock3_then_IfBlock2_then_IfBlock1);
        kcg_copy_BG_Header_T_BG_Types_Pkg(
          &outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header,
          &outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1);
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header,
          &outC->_L10_else_IfBlock3_then_IfBlock2_then_IfBlock1);
        kcg_copy_CompressedPackets_T_Common_Types_Pkg(
          &outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets,
          &outC->_L11_else_IfBlock3_then_IfBlock2_then_IfBlock1);
        kcg_copy_RBC_Id_T_Common_Types_Pkg(
          &outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC,
          &outC->_L12_else_IfBlock3_then_IfBlock2_then_IfBlock1);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1,
          inMessageForBuffer);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_14_outMessageForBuffer_partial,
          &outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_15_messageForFilter3_partial,
          &outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1);
        _19_storeInBuffer2_partial = _13_storeInBuffer2_partial;
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_18_outMessageForBuffer_partial,
          &_14_outMessageForBuffer_partial);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_17_messageForFilter3_partial,
          &_15_messageForFilter3_partial);
      }
      storeInBuffer2_partial = _19_storeInBuffer2_partial;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outMessageForBuffer_partial,
        &_18_outMessageForBuffer_partial);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &messageForFilter3_partial,
        &_17_messageForFilter3_partial);
    }
    else {
      _3_storeInBuffer2_partial = kcg_false;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L2_else_IfBlock2_then_IfBlock1,
        inMessageForBuffer);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L1_else_IfBlock2_then_IfBlock1,
        messageForFilter2);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_1_messageForFilter3_partial,
        &outC->_L1_else_IfBlock2_then_IfBlock1);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_2_outMessageForBuffer_partial,
        &outC->_L2_else_IfBlock2_then_IfBlock1);
      storeInBuffer2_partial = _3_storeInBuffer2_partial;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outMessageForBuffer_partial,
        &_2_outMessageForBuffer_partial);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &messageForFilter3_partial,
        &_1_messageForFilter3_partial);
    }
    outC->storeInBuffer2 = storeInBuffer2_partial;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outMessageForBuffer,
      &outMessageForBuffer_partial);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->messageForFilter3,
      &messageForFilter3_partial);
  }
  else {
    _20_storeInBuffer2_partial = kcg_false;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L2_else_IfBlock1,
      inMessageForBuffer);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L1_else_IfBlock1,
      messageForFilter2);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_22_messageForFilter3_partial,
      &outC->_L1_else_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_21_outMessageForBuffer_partial,
      &outC->_L2_else_IfBlock1);
    outC->storeInBuffer2 = _20_storeInBuffer2_partial;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outMessageForBuffer,
      &_21_outMessageForBuffer_partial);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->messageForFilter3,
      &_22_messageForFilter3_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void SecondFilter_init_InformationFilter_Pkg_SecondFilter(
  outC_SecondFilter_InformationFilter_Pkg_SecondFilter *outC)
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
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;

  outC->_L37 = kcg_lit_int32(0);
  outC->_L36 = kcg_true;
  outC->_L29 = kcg_lit_int32(0);
  outC->_L28 = kcg_lit_int32(0);
  outC->_L27.radioDevice = kcg_lit_int32(0);
  outC->_L27.receivedSystemTime = kcg_lit_int32(0);
  outC->_L27.nid_message = kcg_lit_int32(0);
  outC->_L27.t_train = kcg_lit_int32(0);
  outC->_L27.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L27.nid_lrbg = kcg_lit_int32(0);
  outC->_L27.t_train_reference = kcg_lit_int32(0);
  outC->_L27.nid_em = kcg_lit_int32(0);
  outC->_L27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L27.d_sr = kcg_lit_int32(0);
  outC->_L27.t_sh_rqst = kcg_lit_int32(0);
  outC->_L27.d_ref = kcg_lit_int32(0);
  outC->_L27.q_dir = Q_DIR_Reverse;
  outC->_L27.d_emergencystop = kcg_lit_int32(0);
  outC->_L27.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L26 = msrc_undefined_Common_Types_Pkg;
  outC->_L25 = kcg_true;
  outC->_L24 = msrc_undefined_Common_Types_Pkg;
  outC->_L14.valid = kcg_true;
  outC->_L14.source = msrc_undefined_Common_Types_Pkg;
  outC->_L14.radioMetadata.t_train_reference = kcg_true;
  outC->_L14.radioMetadata.nid_em = kcg_true;
  outC->_L14.radioMetadata.q_scale = kcg_true;
  outC->_L14.radioMetadata.d_sr = kcg_true;
  outC->_L14.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L14.radioMetadata.d_ref = kcg_true;
  outC->_L14.radioMetadata.q_dir = kcg_true;
  outC->_L14.radioMetadata.d_emergencystop = kcg_true;
  outC->_L14.radioMetadata.m_version = kcg_true;
  outC->_L14.BG_Common_Header.valid = kcg_true;
  outC->_L14.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L14.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L14.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L14.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L14.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L14.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L14.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L14.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L14.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L14.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L14.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L14.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L14.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L14.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L14.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L14.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L14.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L14.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L14.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L14.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L14.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L14.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L14.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L14.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L14.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L14.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L14.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L14.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L14.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L14.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L14.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L14.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L14.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L14.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L14.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L14.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L14.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L14.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L14.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L14.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L14.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L14.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L14.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L14.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L14.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L14.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L14.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L14.sendingRBC.valid = kcg_true;
  outC->_L14.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L14.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L14.sendingRBC.device_id = kcg_lit_int32(0);
  outC->isFromSupervisingRBC = kcg_true;
  outC->messageId = kcg_lit_int32(0);
  outC->isFromRBC = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1.valid = kcg_true;
  outC->_L1_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L1_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L1_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L1_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L1_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L1_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L1_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L1_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L1_else_IfBlock1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1_else_IfBlock1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L1_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L1_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L1_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L1_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.Radio_Common_Header.t_train_reference = kcg_lit_int32(
      0);
  outC->_L1_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L1_else_IfBlock1.packets.PacketHeaders[idx2].nid_packet =
      kcg_lit_int32(0);
    outC->_L1_else_IfBlock1.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L1_else_IfBlock1.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L1_else_IfBlock1.packets.PacketHeaders[idx2].startAddress =
      kcg_lit_int32(0);
    outC->_L1_else_IfBlock1.packets.PacketHeaders[idx2].endAddress =
      kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L1_else_IfBlock1.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L1_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L1_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.valid = kcg_true;
  outC->_L2_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L2_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L2_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L2_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L2_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L2_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L2_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L2_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L2_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L2_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L2_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L2_else_IfBlock1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L2_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L2_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.t_train_reference = kcg_lit_int32(
      0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L2_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L2_else_IfBlock1.packets.PacketHeaders[idx4].nid_packet =
      kcg_lit_int32(0);
    outC->_L2_else_IfBlock1.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L2_else_IfBlock1.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L2_else_IfBlock1.packets.PacketHeaders[idx4].startAddress =
      kcg_lit_int32(0);
    outC->_L2_else_IfBlock1.packets.PacketHeaders[idx4].endAddress =
      kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L2_else_IfBlock1.packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L2_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L2_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L7_then_IfBlock2_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L5_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->messagesToReject_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->IfBlock3_clock_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.valid = kcg_true;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx6].nid_packet =
      kcg_lit_int32(0);
    outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx6].q_dir =
      Q_DIR_Reverse;
    outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx6].valid =
      kcg_true;
    outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx6].startAddress =
      kcg_lit_int32(0);
    outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx6].endAddress =
      kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketData[idx7] =
      kcg_lit_int32(0);
  }
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.valid = kcg_true;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx8].nid_packet =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx8].q_dir =
      Q_DIR_Reverse;
    outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx8].valid =
      kcg_true;
    outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx8].startAddress =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx8].endAddress =
      kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketData[idx9] =
      kcg_lit_int32(0);
  }
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L12_else_IfBlock3_then_IfBlock2_then_IfBlock1.valid = kcg_true;
  outC->_L12_else_IfBlock3_then_IfBlock2_then_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L12_else_IfBlock3_then_IfBlock2_then_IfBlock1.rbc_id = kcg_lit_int32(0);
  outC->_L12_else_IfBlock3_then_IfBlock2_then_IfBlock1.device_id =
    kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L11_else_IfBlock3_then_IfBlock2_then_IfBlock1.PacketHeaders[idx10].nid_packet =
      kcg_lit_int32(0);
    outC->_L11_else_IfBlock3_then_IfBlock2_then_IfBlock1.PacketHeaders[idx10].q_dir =
      Q_DIR_Reverse;
    outC->_L11_else_IfBlock3_then_IfBlock2_then_IfBlock1.PacketHeaders[idx10].valid =
      kcg_true;
    outC->_L11_else_IfBlock3_then_IfBlock2_then_IfBlock1.PacketHeaders[idx10].startAddress =
      kcg_lit_int32(0);
    outC->_L11_else_IfBlock3_then_IfBlock2_then_IfBlock1.PacketHeaders[idx10].endAddress =
      kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L11_else_IfBlock3_then_IfBlock2_then_IfBlock1.PacketData[idx11] =
      kcg_lit_int32(0);
  }
  outC->_L10_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioDevice =
    kcg_lit_int32(0);
  outC->_L10_else_IfBlock3_then_IfBlock2_then_IfBlock1.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L10_else_IfBlock3_then_IfBlock2_then_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L10_else_IfBlock3_then_IfBlock2_then_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L10_else_IfBlock3_then_IfBlock2_then_IfBlock1.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L10_else_IfBlock3_then_IfBlock2_then_IfBlock1.nid_lrbg = kcg_lit_int32(
      0);
  outC->_L10_else_IfBlock3_then_IfBlock2_then_IfBlock1.t_train_reference =
    kcg_lit_int32(0);
  outC->_L10_else_IfBlock3_then_IfBlock2_then_IfBlock1.nid_em = kcg_lit_int32(0);
  outC->_L10_else_IfBlock3_then_IfBlock2_then_IfBlock1.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L10_else_IfBlock3_then_IfBlock2_then_IfBlock1.d_sr = kcg_lit_int32(0);
  outC->_L10_else_IfBlock3_then_IfBlock2_then_IfBlock1.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L10_else_IfBlock3_then_IfBlock2_then_IfBlock1.d_ref = kcg_lit_int32(0);
  outC->_L10_else_IfBlock3_then_IfBlock2_then_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L10_else_IfBlock3_then_IfBlock2_then_IfBlock1.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L10_else_IfBlock3_then_IfBlock2_then_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.valid = kcg_true;
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.q_media = Q_MEDIA_Balise;
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.m_mcount = kcg_lit_int32(0);
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.nid_bg = kcg_lit_int32(0);
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.q_link = Q_LINK_Unlinked;
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.valid = kcg_true;
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L9_else_IfBlock3_then_IfBlock2_then_IfBlock1.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L8_else_IfBlock3_then_IfBlock2_then_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L8_else_IfBlock3_then_IfBlock2_then_IfBlock1.nid_em = kcg_true;
  outC->_L8_else_IfBlock3_then_IfBlock2_then_IfBlock1.q_scale = kcg_true;
  outC->_L8_else_IfBlock3_then_IfBlock2_then_IfBlock1.d_sr = kcg_true;
  outC->_L8_else_IfBlock3_then_IfBlock2_then_IfBlock1.t_sh_rqst = kcg_true;
  outC->_L8_else_IfBlock3_then_IfBlock2_then_IfBlock1.d_ref = kcg_true;
  outC->_L8_else_IfBlock3_then_IfBlock2_then_IfBlock1.q_dir = kcg_true;
  outC->_L8_else_IfBlock3_then_IfBlock2_then_IfBlock1.d_emergencystop = kcg_true;
  outC->_L8_else_IfBlock3_then_IfBlock2_then_IfBlock1.m_version = kcg_true;
  outC->_L7_else_IfBlock3_then_IfBlock2_then_IfBlock1 =
    msrc_undefined_Common_Types_Pkg;
  outC->_L6_else_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.valid = kcg_true;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx12].nid_packet =
      kcg_lit_int32(0);
    outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx12].q_dir =
      Q_DIR_Reverse;
    outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx12].valid =
      kcg_true;
    outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx12].startAddress =
      kcg_lit_int32(0);
    outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx12].endAddress =
      kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketData[idx13] =
      kcg_lit_int32(0);
  }
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L13_else_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L14_else_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.valid =
    kcg_true;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx14].nid_packet =
      kcg_lit_int32(0);
    outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx14].q_dir =
      Q_DIR_Reverse;
    outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx14].valid =
      kcg_true;
    outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx14].startAddress =
      kcg_lit_int32(0);
    outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx14].endAddress =
      kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketData[idx15] =
      kcg_lit_int32(0);
  }
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.valid =
    kcg_true;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx16].nid_packet =
      kcg_lit_int32(0);
    outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx16].q_dir =
      Q_DIR_Reverse;
    outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx16].valid =
      kcg_true;
    outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx16].startAddress =
      kcg_lit_int32(0);
    outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx16].endAddress =
      kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketData[idx17] =
      kcg_lit_int32(0);
  }
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.valid =
    kcg_true;
  outC->_L12_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.nid_c =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.rbc_id =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.device_id =
    kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->_L11_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.PacketHeaders[idx18].nid_packet =
      kcg_lit_int32(0);
    outC->_L11_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.PacketHeaders[idx18].q_dir =
      Q_DIR_Reverse;
    outC->_L11_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.PacketHeaders[idx18].valid =
      kcg_true;
    outC->_L11_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.PacketHeaders[idx18].startAddress =
      kcg_lit_int32(0);
    outC->_L11_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.PacketHeaders[idx18].endAddress =
      kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->_L11_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.PacketData[idx19] =
      kcg_lit_int32(0);
  }
  outC->_L10_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioDevice =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.t_train =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L10_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.t_train_reference =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.nid_em =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L10_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.d_sr =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.d_ref =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.q_dir =
    Q_DIR_Reverse;
  outC->_L10_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.valid =
    kcg_true;
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.q_media =
    Q_MEDIA_Balise;
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.m_mcount =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.nid_c =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.nid_bg =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.q_link =
    Q_LINK_Unlinked;
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.valid =
    kcg_true;
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L8_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.t_train_reference =
    kcg_true;
  outC->_L8_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.nid_em =
    kcg_true;
  outC->_L8_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.q_scale =
    kcg_true;
  outC->_L8_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.d_sr =
    kcg_true;
  outC->_L8_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.t_sh_rqst =
    kcg_true;
  outC->_L8_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.d_ref =
    kcg_true;
  outC->_L8_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.q_dir =
    kcg_true;
  outC->_L8_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.d_emergencystop =
    kcg_true;
  outC->_L8_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.m_version =
    kcg_true;
  outC->_L7_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1 =
    msrc_undefined_Common_Types_Pkg;
  outC->_L6_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.valid =
    kcg_true;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx20].nid_packet =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx20].q_dir =
      Q_DIR_Reverse;
    outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx20].valid =
      kcg_true;
    outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx20].startAddress =
      kcg_lit_int32(0);
    outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx20].endAddress =
      kcg_lit_int32(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketData[idx21] =
      kcg_lit_int32(0);
  }
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.valid =
    kcg_true;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx22].nid_packet =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx22].q_dir =
      Q_DIR_Reverse;
    outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx22].valid =
      kcg_true;
    outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx22].startAddress =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx22].endAddress =
      kcg_lit_int32(0);
  }
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketData[idx23] =
      kcg_lit_int32(0);
  }
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L15_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.valid =
    kcg_true;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx24].nid_packet =
      kcg_lit_int32(0);
    outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx24].q_dir =
      Q_DIR_Reverse;
    outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx24].valid =
      kcg_true;
    outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx24].startAddress =
      kcg_lit_int32(0);
    outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx24].endAddress =
      kcg_lit_int32(0);
  }
  for (idx25 = 0; idx25 < 500; idx25++) {
    outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketData[idx25] =
      kcg_lit_int32(0);
  }
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.valid =
    kcg_true;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx26].nid_packet =
      kcg_lit_int32(0);
    outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx26].q_dir =
      Q_DIR_Reverse;
    outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx26].valid =
      kcg_true;
    outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx26].startAddress =
      kcg_lit_int32(0);
    outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx26].endAddress =
      kcg_lit_int32(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.packets.PacketData[idx27] =
      kcg_lit_int32(0);
  }
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->IfBlock4_clock_then_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->messagesForTransitionBuffer_then_IfBlock3_then_IfBlock2_then_IfBlock1 =
    kcg_true;
  outC->_L5_then_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L9_then_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L10_then_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L11_then_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L12_then_IfBlock3_then_IfBlock2_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.valid = kcg_true;
  outC->_L1_else_IfBlock2_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1_else_IfBlock2_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L1_else_IfBlock2_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L1_else_IfBlock2_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L1_else_IfBlock2_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L1_else_IfBlock2_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1_else_IfBlock2_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L1_else_IfBlock2_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L1_else_IfBlock2_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1_else_IfBlock2_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(
      0);
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1_else_IfBlock2_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L1_else_IfBlock2_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1_else_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1_else_IfBlock2_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1_else_IfBlock2_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx28 = 0; idx28 < 30; idx28++) {
    outC->_L1_else_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx28].nid_packet =
      kcg_lit_int32(0);
    outC->_L1_else_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx28].q_dir =
      Q_DIR_Reverse;
    outC->_L1_else_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx28].valid =
      kcg_true;
    outC->_L1_else_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx28].startAddress =
      kcg_lit_int32(0);
    outC->_L1_else_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx28].endAddress =
      kcg_lit_int32(0);
  }
  for (idx29 = 0; idx29 < 500; idx29++) {
    outC->_L1_else_IfBlock2_then_IfBlock1.packets.PacketData[idx29] =
      kcg_lit_int32(0);
  }
  outC->_L1_else_IfBlock2_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L1_else_IfBlock2_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1_else_IfBlock2_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.valid = kcg_true;
  outC->_L2_else_IfBlock2_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L2_else_IfBlock2_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L2_else_IfBlock2_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L2_else_IfBlock2_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L2_else_IfBlock2_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L2_else_IfBlock2_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L2_else_IfBlock2_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L2_else_IfBlock2_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L2_else_IfBlock2_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L2_else_IfBlock2_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(
      0);
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2_else_IfBlock2_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L2_else_IfBlock2_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2_else_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L2_else_IfBlock2_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L2_else_IfBlock2_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx30 = 0; idx30 < 30; idx30++) {
    outC->_L2_else_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx30].nid_packet =
      kcg_lit_int32(0);
    outC->_L2_else_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx30].q_dir =
      Q_DIR_Reverse;
    outC->_L2_else_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx30].valid =
      kcg_true;
    outC->_L2_else_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx30].startAddress =
      kcg_lit_int32(0);
    outC->_L2_else_IfBlock2_then_IfBlock1.packets.PacketHeaders[idx30].endAddress =
      kcg_lit_int32(0);
  }
  for (idx31 = 0; idx31 < 500; idx31++) {
    outC->_L2_else_IfBlock2_then_IfBlock1.packets.PacketData[idx31] =
      kcg_lit_int32(0);
  }
  outC->_L2_else_IfBlock2_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L2_else_IfBlock2_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L2_else_IfBlock2_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->IfBlock2_clock_then_IfBlock1 = kcg_true;
  outC->messageForFilter3.valid = kcg_true;
  outC->messageForFilter3.source = msrc_undefined_Common_Types_Pkg;
  outC->messageForFilter3.radioMetadata.t_train_reference = kcg_true;
  outC->messageForFilter3.radioMetadata.nid_em = kcg_true;
  outC->messageForFilter3.radioMetadata.q_scale = kcg_true;
  outC->messageForFilter3.radioMetadata.d_sr = kcg_true;
  outC->messageForFilter3.radioMetadata.t_sh_rqst = kcg_true;
  outC->messageForFilter3.radioMetadata.d_ref = kcg_true;
  outC->messageForFilter3.radioMetadata.q_dir = kcg_true;
  outC->messageForFilter3.radioMetadata.d_emergencystop = kcg_true;
  outC->messageForFilter3.radioMetadata.m_version = kcg_true;
  outC->messageForFilter3.BG_Common_Header.valid = kcg_true;
  outC->messageForFilter3.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->messageForFilter3.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->messageForFilter3.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->messageForFilter3.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->messageForFilter3.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->messageForFilter3.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->messageForFilter3.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->messageForFilter3.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->messageForFilter3.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->messageForFilter3.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->messageForFilter3.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->messageForFilter3.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->messageForFilter3.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->messageForFilter3.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->messageForFilter3.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->messageForFilter3.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->messageForFilter3.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->messageForFilter3.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->messageForFilter3.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->messageForFilter3.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->messageForFilter3.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->messageForFilter3.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->messageForFilter3.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->messageForFilter3.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->messageForFilter3.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->messageForFilter3.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->messageForFilter3.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->messageForFilter3.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->messageForFilter3.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->messageForFilter3.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->messageForFilter3.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->messageForFilter3.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->messageForFilter3.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->messageForFilter3.Radio_Common_Header.t_train_reference = kcg_lit_int32(
      0);
  outC->messageForFilter3.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->messageForFilter3.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->messageForFilter3.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->messageForFilter3.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->messageForFilter3.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->messageForFilter3.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->messageForFilter3.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->messageForFilter3.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx32 = 0; idx32 < 30; idx32++) {
    outC->messageForFilter3.packets.PacketHeaders[idx32].nid_packet =
      kcg_lit_int32(0);
    outC->messageForFilter3.packets.PacketHeaders[idx32].q_dir = Q_DIR_Reverse;
    outC->messageForFilter3.packets.PacketHeaders[idx32].valid = kcg_true;
    outC->messageForFilter3.packets.PacketHeaders[idx32].startAddress =
      kcg_lit_int32(0);
    outC->messageForFilter3.packets.PacketHeaders[idx32].endAddress =
      kcg_lit_int32(0);
  }
  for (idx33 = 0; idx33 < 500; idx33++) {
    outC->messageForFilter3.packets.PacketData[idx33] = kcg_lit_int32(0);
  }
  outC->messageForFilter3.sendingRBC.valid = kcg_true;
  outC->messageForFilter3.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->messageForFilter3.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->messageForFilter3.sendingRBC.device_id = kcg_lit_int32(0);
  outC->outMessageForBuffer.valid = kcg_true;
  outC->outMessageForBuffer.source = msrc_undefined_Common_Types_Pkg;
  outC->outMessageForBuffer.radioMetadata.t_train_reference = kcg_true;
  outC->outMessageForBuffer.radioMetadata.nid_em = kcg_true;
  outC->outMessageForBuffer.radioMetadata.q_scale = kcg_true;
  outC->outMessageForBuffer.radioMetadata.d_sr = kcg_true;
  outC->outMessageForBuffer.radioMetadata.t_sh_rqst = kcg_true;
  outC->outMessageForBuffer.radioMetadata.d_ref = kcg_true;
  outC->outMessageForBuffer.radioMetadata.q_dir = kcg_true;
  outC->outMessageForBuffer.radioMetadata.d_emergencystop = kcg_true;
  outC->outMessageForBuffer.radioMetadata.m_version = kcg_true;
  outC->outMessageForBuffer.BG_Common_Header.valid = kcg_true;
  outC->outMessageForBuffer.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->outMessageForBuffer.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outMessageForBuffer.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->outMessageForBuffer.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->outMessageForBuffer.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outMessageForBuffer.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->outMessageForBuffer.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->outMessageForBuffer.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->outMessageForBuffer.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outMessageForBuffer.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outMessageForBuffer.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outMessageForBuffer.Radio_Common_Header.d_emergencystop = kcg_lit_int32(
      0);
  outC->outMessageForBuffer.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx34 = 0; idx34 < 30; idx34++) {
    outC->outMessageForBuffer.packets.PacketHeaders[idx34].nid_packet =
      kcg_lit_int32(0);
    outC->outMessageForBuffer.packets.PacketHeaders[idx34].q_dir = Q_DIR_Reverse;
    outC->outMessageForBuffer.packets.PacketHeaders[idx34].valid = kcg_true;
    outC->outMessageForBuffer.packets.PacketHeaders[idx34].startAddress =
      kcg_lit_int32(0);
    outC->outMessageForBuffer.packets.PacketHeaders[idx34].endAddress =
      kcg_lit_int32(0);
  }
  for (idx35 = 0; idx35 < 500; idx35++) {
    outC->outMessageForBuffer.packets.PacketData[idx35] = kcg_lit_int32(0);
  }
  outC->outMessageForBuffer.sendingRBC.valid = kcg_true;
  outC->outMessageForBuffer.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->outMessageForBuffer.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->outMessageForBuffer.sendingRBC.device_id = kcg_lit_int32(0);
  outC->storeInBuffer2 = kcg_true;
  /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4:then:_L17=(InformationFilter_Pkg::SecondFilter::DetermineBufferMessage#1)/ */
  DetermineBufferMessage_init_InformationFilter_Pkg_SecondFilter(
    &outC->Context_DetermineBufferMessage_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SecondFilter_reset_InformationFilter_Pkg_SecondFilter(
  outC_SecondFilter_InformationFilter_Pkg_SecondFilter *outC)
{
  /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4:then:_L17=(InformationFilter_Pkg::SecondFilter::DetermineBufferMessage#1)/ */
  DetermineBufferMessage_reset_InformationFilter_Pkg_SecondFilter(
    &outC->Context_DetermineBufferMessage_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SecondFilter_InformationFilter_Pkg_SecondFilter.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

