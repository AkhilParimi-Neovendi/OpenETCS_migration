/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets/ */
void ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* nid_message/ */
  kcg_int64 nid_message,
  /* newPackets/ */
  M_TrainTrack_compressed_packets_T_TM_radio_messages *newPackets,
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  /* P003/ */
  static P003_TM_TrainToTrack P003_partial;
  /* P003/ */
  static P003_TM_TrainToTrack _1_P003_partial;
  /* P005/ */
  static P005_TM_TrainToTrack P005_partial;
  /* P005/ */
  static P005_TM_TrainToTrack _2_P005_partial;
  /* P004/ */
  static P004_TM_TrainToTrack P004_partial;
  /* P004/ */
  static P004_TM_TrainToTrack _3_P004_partial;
  /* P009/ */
  static P009_TM_TrainToTrack P009_partial;
  /* P009/ */
  static P009_TM_TrainToTrack _4_P009_partial;
  /* P011/ */
  static P011_TM_TrainToTrack P011_partial;
  /* P011/ */
  static P011_TM_TrainToTrack _5_P011_partial;
  /* P000/ */
  static P000_TM_TrainToTrack P000_partial;
  /* P001/ */
  static P001_TM_TrainToTrack P001_partial;
  /* P000/ */
  static P000_TM_TrainToTrack _6_P000_partial;
  /* P001/ */
  static P001_TM_TrainToTrack _7_P001_partial;
  /* P001/ */
  static P001_TM_TrainToTrack _8_P001_partial;
  /* P000/ */
  static P000_TM_TrainToTrack _9_P000_partial;
  /* P001/ */
  static P001_TM_TrainToTrack _10_P001_partial;
  /* P000/ */
  static P000_TM_TrainToTrack _11_P000_partial;

  outC->_L45 = !((nid_message == kcg_lit_int64(146)) | (nid_message ==
        kcg_lit_int64(154)) | (nid_message == kcg_lit_int64(155)) |
      (nid_message == kcg_lit_int64(156)) | (nid_message == kcg_lit_int64(
          159)));
  outC->hasPosReport = outC->_L45;
  outC->Det_if_P011_clock = nid_message == kcg_lit_int64(129);
  /* Det_if_P011: */
  if (outC->Det_if_P011_clock) {
    kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
      &outC->_L3_then_Det_if_P011,
      newPackets);
    kcg_copy_array_int64_25(
      &outC->_L1_then_Det_if_P011,
      (array_int64_25 *) &outC->_L3_then_Det_if_P011[17]);
    /* Det_if_P011:then:_L2=(TM_TrainToTrack::C_compr_P011#4)/ */
    C_compr_P011_TM_TrainToTrack(
      &outC->_L1_then_Det_if_P011,
      &outC->Context_C_compr_P011_4);
    kcg_copy_P011_TM_TrainToTrack(
      &outC->_L2_then_Det_if_P011,
      &outC->Context_C_compr_P011_4.P011_out);
    kcg_copy_P011_TM_TrainToTrack(&P011_partial, &outC->_L2_then_Det_if_P011);
    kcg_copy_P011_TM_TrainToTrack(&outC->P011, &P011_partial);
  }
  else {
    kcg_copy_P011_TM_TrainToTrack(
      &outC->_L1_else_Det_if_P011,
      (P011_TM_TrainToTrack *) &DEFAULT_P011_RBC_Model_Pkg_TrainTrackMsgConversion);
    kcg_copy_P011_TM_TrainToTrack(&_5_P011_partial, &outC->_L1_else_Det_if_P011);
    kcg_copy_P011_TM_TrainToTrack(&outC->P011, &_5_P011_partial);
  }
  kcg_copy_P011_TM_TrainToTrack(&outC->_L13, &outC->P011);
  /* _L44=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011#1)/ */
  ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->_L13,
    &outC->Context_ConvertP011_1);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->_L44,
    &outC->Context_ConvertP011_1.oldP011);
  outC->Det_if_P009_clock = nid_message == kcg_lit_int64(132);
  /* Det_if_P009: */
  if (outC->Det_if_P009_clock) {
    kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
      &outC->_L3_then_Det_if_P009,
      newPackets);
    kcg_copy_array_int64_3(
      &outC->_L1_then_Det_if_P009,
      (array_int64_3 *) &outC->_L3_then_Det_if_P009[17]);
    /* Det_if_P009:then:_L2=(TM_TrainToTrack::C_compr_P009#2)/ */
    C_compr_P009_TM_TrainToTrack(
      &outC->_L1_then_Det_if_P009,
      &outC->Context_C_compr_P009_2);
    kcg_copy_P009_TM_TrainToTrack(
      &outC->_L2_then_Det_if_P009,
      &outC->Context_C_compr_P009_2.P009_out);
    kcg_copy_P009_TM_TrainToTrack(&P009_partial, &outC->_L2_then_Det_if_P009);
    kcg_copy_P009_TM_TrainToTrack(&outC->P009, &P009_partial);
  }
  else {
    kcg_copy_P009_TM_TrainToTrack(
      &outC->_L1_else_Det_if_P009,
      (P009_TM_TrainToTrack *) &DEFAULT_P009_RBC_Model_Pkg_TrainTrackMsgConversion);
    kcg_copy_P009_TM_TrainToTrack(&_4_P009_partial, &outC->_L1_else_Det_if_P009);
    kcg_copy_P009_TM_TrainToTrack(&outC->P009, &_4_P009_partial);
  }
  kcg_copy_P009_TM_TrainToTrack(&outC->_L31, &outC->P009);
  /* _L43=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009#1)/ */
  ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->_L31,
    &outC->Context_ConvertP009_1);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &outC->_L43,
    &outC->Context_ConvertP009_1.oldP009);
  outC->Det_if_P005_clock = (nid_message == kcg_lit_int64(136)) |
    (nid_message == kcg_lit_int64(157));
  /* Det_if_P005: */
  if (outC->Det_if_P005_clock) {
    kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
      &outC->_L3_then_Det_if_P005,
      newPackets);
    kcg_copy_array_int64_3(
      &outC->_L1_then_Det_if_P005,
      (array_int64_3 *) &outC->_L3_then_Det_if_P005[20]);
    /* Det_if_P005:then:_L2=(TM_TrainToTrack::C_compr_P005#2)/ */
    C_compr_P005_TM_TrainToTrack(
      &outC->_L1_then_Det_if_P005,
      &outC->Context_C_compr_P005_2);
    kcg_copy_P005_TM_TrainToTrack(
      &outC->_L2_then_Det_if_P005,
      &outC->Context_C_compr_P005_2.P005_out);
    kcg_copy_P005_TM_TrainToTrack(&P005_partial, &outC->_L2_then_Det_if_P005);
    kcg_copy_P005_TM_TrainToTrack(&outC->P005, &P005_partial);
  }
  else {
    kcg_copy_P005_TM_TrainToTrack(
      &outC->_L1_else_Det_if_P005,
      (P005_TM_TrainToTrack *) &DEFAULT_P005_RBC_Model_Pkg_TrainTrackMsgConversion);
    kcg_copy_P005_TM_TrainToTrack(&_2_P005_partial, &outC->_L1_else_Det_if_P005);
    kcg_copy_P005_TM_TrainToTrack(&outC->P005, &_2_P005_partial);
  }
  kcg_copy_P005_TM_TrainToTrack(&outC->_L34, &outC->P005);
  /* _L42=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005#1)/ */
  ConvertP005_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->_L34,
    &outC->Context_ConvertP005_1);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->_L42,
    &outC->Context_ConvertP005_1.oldP005);
  outC->Det_if_P004_clock = (nid_message == kcg_lit_int64(136)) |
    (nid_message == kcg_lit_int64(157));
  /* Det_if_P004: */
  if (outC->Det_if_P004_clock) {
    kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
      &outC->_L3_then_Det_if_P004,
      newPackets);
    kcg_copy_array_int64_3(
      &outC->_L1_then_Det_if_P004,
      (array_int64_3 *) &outC->_L3_then_Det_if_P004[17]);
    /* Det_if_P004:then:_L2=(TM_TrainToTrack::C_compr_P004#2)/ */
    C_compr_P004_TM_TrainToTrack(
      &outC->_L1_then_Det_if_P004,
      &outC->Context_C_compr_P004_2);
    kcg_copy_P004_TM_TrainToTrack(
      &outC->_L2_then_Det_if_P004,
      &outC->Context_C_compr_P004_2.P004_out);
    kcg_copy_P004_TM_TrainToTrack(&P004_partial, &outC->_L2_then_Det_if_P004);
    kcg_copy_P004_TM_TrainToTrack(&outC->P004, &P004_partial);
  }
  else {
    kcg_copy_P004_TM_TrainToTrack(
      &outC->_L1_else_Det_if_P004,
      (P004_TM_TrainToTrack *) &DEFAULT_P004_RBC_Model_Pkg_TrainTrackMsgConversion);
    kcg_copy_P004_TM_TrainToTrack(&_3_P004_partial, &outC->_L1_else_Det_if_P004);
    kcg_copy_P004_TM_TrainToTrack(&outC->P004, &_3_P004_partial);
  }
  kcg_copy_P004_TM_TrainToTrack(&outC->_L30, &outC->P004);
  /* _L41=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004#1)/ */
  ConvertP004_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->_L30,
    &outC->Context_ConvertP004_1);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &outC->_L41,
    &outC->Context_ConvertP004_1.oldP004);
  outC->Det_if_P003_clock = nid_message == kcg_lit_int64(159);
  /* Det_if_P003: */
  if (outC->Det_if_P003_clock) {
    kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
      &outC->_L3_then_Det_if_P003,
      newPackets);
    kcg_copy_array_int64_8(
      &outC->_L1_then_Det_if_P003,
      (array_int64_8 *) &outC->_L3_then_Det_if_P003[0]);
    /* Det_if_P003:then:_L2=(TM_TrainToTrack::C_compr_P003#2)/ */
    C_compr_P003_TM_TrainToTrack(
      &outC->_L1_then_Det_if_P003,
      &outC->Context_C_compr_P003_2);
    kcg_copy_P003_TM_TrainToTrack(
      &outC->_L2_then_Det_if_P003,
      &outC->Context_C_compr_P003_2.P003_out);
    kcg_copy_P003_TM_TrainToTrack(&P003_partial, &outC->_L2_then_Det_if_P003);
    kcg_copy_P003_TM_TrainToTrack(&outC->P003, &P003_partial);
  }
  else {
    kcg_copy_P003_TM_TrainToTrack(
      &outC->_L1_else_Det_if_P003,
      (P003_TM_TrainToTrack *) &DEFAULT_P003_RBC_Model_Pkg_TrainTrackMsgConversion);
    kcg_copy_P003_TM_TrainToTrack(&_1_P003_partial, &outC->_L1_else_Det_if_P003);
    kcg_copy_P003_TM_TrainToTrack(&outC->P003, &_1_P003_partial);
  }
  kcg_copy_P003_TM_TrainToTrack(&outC->_L37, &outC->P003);
  /* _L40=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003#1)/ */
  ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->_L37,
    &outC->Context_ConvertP003_1);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &outC->_L40,
    &outC->Context_ConvertP003_1.oldP003);
  kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
    &outC->_L1,
    newPackets);
  kcg_copy_array_int64_17(&outC->_L4, (array_int64_17 *) &outC->_L1[0]);
  outC->_L3 = outC->_L4[1];
  outC->nid_packet = outC->_L3;
  outC->Det_if_P0_or_P1_clock = outC->hasPosReport & (outC->nid_packet ==
      kcg_lit_int64(0));
  if (outC->Det_if_P0_or_P1_clock) {
  }
  else {
    outC->else_clock_Det_if_P0_or_P1 = outC->hasPosReport & (outC->nid_packet ==
        kcg_lit_int64(1));
    if (outC->else_clock_Det_if_P0_or_P1) {
    }
    else {
      kcg_copy_P001_TM_TrainToTrack(
        &outC->_L2_else_else_Det_if_P0_or_P1,
        (P001_TM_TrainToTrack *) &DEFAULT_P001_RBC_Model_Pkg_TrainTrackMsgConversion);
      kcg_copy_P001_TM_TrainToTrack(
        &_8_P001_partial,
        &outC->_L2_else_else_Det_if_P0_or_P1);
    }
  }
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->P0_or_P1, &outC->_L4);
  /* Det_if_P0_or_P1: */
  if (outC->Det_if_P0_or_P1_clock) {
    kcg_copy_P001_TM_TrainToTrack(
      &outC->_L1_then_Det_if_P0_or_P1,
      (P001_TM_TrainToTrack *) &DEFAULT_P001_RBC_Model_Pkg_TrainTrackMsgConversion);
    kcg_copy_P001_TM_TrainToTrack(&P001_partial, &outC->_L1_then_Det_if_P0_or_P1);
    kcg_copy_P001_TM_TrainToTrack(&outC->P001, &P001_partial);
  }
  else {
    /* Det_if_P0_or_P1:else: */
    if (outC->else_clock_Det_if_P0_or_P1) {
      kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(
        &outC->_L2_then_else_Det_if_P0_or_P1,
        &outC->P0_or_P1);
      /* Det_if_P0_or_P1:else:then:_L3=(TM_TrainToTrack::C_compr_P001#1)/ */
      C_compr_P001_TM_TrainToTrack(
        &outC->_L2_then_else_Det_if_P0_or_P1,
        &outC->Context_C_compr_P001_1);
      kcg_copy_P001_TM_TrainToTrack(
        &outC->_L3_then_else_Det_if_P0_or_P1,
        &outC->Context_C_compr_P001_1.P001_out);
      kcg_copy_P001_TM_TrainToTrack(
        &_10_P001_partial,
        &outC->_L3_then_else_Det_if_P0_or_P1);
      kcg_copy_P001_TM_TrainToTrack(&_7_P001_partial, &_10_P001_partial);
    }
    else {
      kcg_copy_P001_TM_TrainToTrack(&_7_P001_partial, &_8_P001_partial);
    }
    kcg_copy_P001_TM_TrainToTrack(&outC->P001, &_7_P001_partial);
  }
  kcg_copy_P001_TM_TrainToTrack(&outC->_L8, &outC->P001);
  /* _L39=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP001#1)/ */
  ConvertP001_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->_L8,
    &outC->Context_ConvertP001_1);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L39,
    &outC->Context_ConvertP001_1.oldP001);
  /* Det_if_P0_or_P1: */
  if (outC->Det_if_P0_or_P1_clock) {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(
      &outC->_L2_then_Det_if_P0_or_P1,
      &outC->P0_or_P1);
    /* Det_if_P0_or_P1:then:_L3=(TM_TrainToTrack::C_compr_P000#1)/ */
    C_compr_P000_TM_TrainToTrack(
      &outC->_L2_then_Det_if_P0_or_P1,
      &outC->Context_C_compr_P000_1);
    kcg_copy_P000_TM_TrainToTrack(
      &outC->_L3_then_Det_if_P0_or_P1,
      &outC->Context_C_compr_P000_1.P000_out);
    kcg_copy_P000_TM_TrainToTrack(&P000_partial, &outC->_L3_then_Det_if_P0_or_P1);
    kcg_copy_P000_TM_TrainToTrack(&outC->P000, &P000_partial);
  }
  else {
    /* Det_if_P0_or_P1:else: */
    if (outC->else_clock_Det_if_P0_or_P1) {
      kcg_copy_P000_TM_TrainToTrack(
        &outC->_L5_then_else_Det_if_P0_or_P1,
        (P000_TM_TrainToTrack *) &DEFAULT_P000_RBC_Model_Pkg_TrainTrackMsgConversion);
      kcg_copy_P000_TM_TrainToTrack(
        &_11_P000_partial,
        &outC->_L5_then_else_Det_if_P0_or_P1);
      kcg_copy_P000_TM_TrainToTrack(&_6_P000_partial, &_11_P000_partial);
    }
    else {
      kcg_copy_P000_TM_TrainToTrack(
        &outC->_L3_else_else_Det_if_P0_or_P1,
        (P000_TM_TrainToTrack *) &DEFAULT_P000_RBC_Model_Pkg_TrainTrackMsgConversion);
      kcg_copy_P000_TM_TrainToTrack(
        &_9_P000_partial,
        &outC->_L3_else_else_Det_if_P0_or_P1);
      kcg_copy_P000_TM_TrainToTrack(&_6_P000_partial, &_9_P000_partial);
    }
    kcg_copy_P000_TM_TrainToTrack(&outC->P000, &_6_P000_partial);
  }
  kcg_copy_P000_TM_TrainToTrack(&outC->_L7, &outC->P000);
  /* _L38=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000#1)/ */
  ConvertP000_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->_L7,
    &outC->Context_ConvertP000_1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L38,
    &outC->Context_ConvertP000_1.oldP000);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L18.p0,
    &outC->_L38);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L18.p1,
    &outC->_L39);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &outC->_L18.p3,
    &outC->_L40);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &outC->_L18.p4,
    &outC->_L41);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->_L18.p5,
    &outC->_L42);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &outC->_L18.p9,
    &outC->_L43);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->_L18.p11,
    &outC->_L44);
  kcg_copy_outPackets_T_Common_Types_Pkg(&outC->oldPackets, &outC->_L18);
}

#ifndef KCG_USER_DEFINED_INIT
void ConvertPackets_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
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
  static kcg_size idx36;
  static kcg_size idx37;
  static kcg_size idx38;

  outC->_L45 = kcg_true;
  outC->_L44.valid = kcg_true;
  outC->_L44.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L44.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L44.l_train = kcg_lit_int64(0);
  outC->_L44.v_maxtrain = kcg_lit_int64(0);
  outC->_L44.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L44.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L44.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L44.n_axle = kcg_lit_int64(0);
  outC->_L44.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx = 0; idx < 4; idx++) {
    outC->_L44.tractionIdentity[idx].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L44.tractionIdentity[idx].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L44.nIter_ntc = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L44.nid_ntc[idx1] = kcg_lit_int64(0);
  }
  outC->_L43.valid = kcg_true;
  outC->_L43.transitionInformation = kcg_lit_int64(0);
  outC->_L42.valid = kcg_true;
  outC->_L42.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L41.valid = kcg_true;
  outC->_L41.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L40.valid = kcg_true;
  outC->_L40.number = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 1; idx3++) {
    outC->_L40.aNID_RADIO[idx3].valid = kcg_true;
    for (idx2 = 0; idx2 < 15; idx2++) {
      outC->_L40.aNID_RADIO[idx3].telephoneNumber[idx2] = kcg_lit_int64(0);
    }
  }
  outC->_L39.valid = kcg_true;
  outC->_L39.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L39.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L39.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L39.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L39.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L39.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L39.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L39.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L39.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L39.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L39.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L39.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L39.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L39.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L39.packet1.mode = M_MODE_Full_Supervision;
  outC->_L39.packet1.level = M_LEVEL_Level_0;
  outC->_L39.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L38.valid = kcg_true;
  outC->_L38.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L38.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L38.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L38.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L38.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L38.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L38.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L38.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L38.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L38.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L38.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L38.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L38.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L38.packet0.mode = M_MODE_Full_Supervision;
  outC->_L38.packet0.level = M_LEVEL_Level_0;
  outC->_L38.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L37.valid = kcg_true;
  outC->_L37.nid_packet = kcg_lit_int64(0);
  outC->_L37.l_packet = kcg_lit_int64(0);
  outC->_L37.n_iter = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L37.nid_radio[idx4] = kcg_lit_int64(0);
  }
  outC->_L34.valid = kcg_true;
  outC->_L34.nid_packet = kcg_lit_int64(0);
  outC->_L34.l_packet = kcg_lit_int64(0);
  outC->_L34.nid_opeartional = kcg_lit_int64(0);
  outC->_L31.valid = kcg_true;
  outC->_L31.nid_packet = kcg_lit_int64(0);
  outC->_L31.l_packet = kcg_lit_int64(0);
  outC->_L31.nid_ltrbg = kcg_lit_int64(0);
  outC->_L30.valid = kcg_true;
  outC->_L30.nid_packet = kcg_lit_int64(0);
  outC->_L30.l_packet = kcg_lit_int64(0);
  outC->_L30.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L18.p0.valid = kcg_true;
  outC->_L18.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L18.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L18.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L18.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L18.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L18.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L18.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L18.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L18.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L18.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L18.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L18.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L18.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L18.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L18.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L18.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L18.p1.valid = kcg_true;
  outC->_L18.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L18.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L18.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L18.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L18.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L18.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L18.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L18.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L18.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L18.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L18.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L18.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L18.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L18.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L18.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L18.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L18.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L18.p3.valid = kcg_true;
  outC->_L18.p3.number = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 1; idx6++) {
    outC->_L18.p3.aNID_RADIO[idx6].valid = kcg_true;
    for (idx5 = 0; idx5 < 15; idx5++) {
      outC->_L18.p3.aNID_RADIO[idx6].telephoneNumber[idx5] = kcg_lit_int64(0);
    }
  }
  outC->_L18.p4.valid = kcg_true;
  outC->_L18.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L18.p5.valid = kcg_true;
  outC->_L18.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L18.p9.valid = kcg_true;
  outC->_L18.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L18.p11.valid = kcg_true;
  outC->_L18.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L18.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L18.p11.l_train = kcg_lit_int64(0);
  outC->_L18.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L18.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L18.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L18.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L18.p11.n_axle = kcg_lit_int64(0);
  outC->_L18.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 4; idx7++) {
    outC->_L18.p11.tractionIdentity[idx7].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L18.p11.tractionIdentity[idx7].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L18.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->_L18.p11.nid_ntc[idx8] = kcg_lit_int64(0);
  }
  outC->_L13.valid = kcg_true;
  outC->_L13.nid_packet = kcg_lit_int64(0);
  outC->_L13.l_packet = kcg_lit_int64(0);
  outC->_L13.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L13.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L13.l_train = kcg_lit_int64(0);
  outC->_L13.v_maxtrain = kcg_lit_int64(0);
  outC->_L13.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L13.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L13.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L13.n_axle = kcg_lit_int64(0);
  outC->_L13.n_iter_voltage = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 4; idx9++) {
    outC->_L13.voltage_list[idx9].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L13.voltage_list[idx9].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L13.n_iter_nid_ntc = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 5; idx10++) {
    outC->_L13.nid_ntc_list[idx10] = kcg_lit_int64(0);
  }
  outC->_L8.valid = kcg_true;
  outC->_L8.nid_packet = kcg_lit_int64(0);
  outC->_L8.l_packet = kcg_lit_int64(0);
  outC->_L8.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.nid_lrbg = kcg_lit_int64(0);
  outC->_L8.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L8.d_lrbg = kcg_lit_int64(0);
  outC->_L8.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L8.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L8.l_doubtover = kcg_lit_int64(0);
  outC->_L8.l_doubtunder = kcg_lit_int64(0);
  outC->_L8.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L8.l_trainint = kcg_lit_int64(0);
  outC->_L8.v_train = kcg_lit_int64(0);
  outC->_L8.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L8.m_mode = M_MODE_Full_Supervision;
  outC->_L8.m_level = M_LEVEL_Level_0;
  outC->_L8.nid_ntc = kcg_lit_int64(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.nid_packet = kcg_lit_int64(0);
  outC->_L7.l_packet = kcg_lit_int64(0);
  outC->_L7.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.nid_lrbg = kcg_lit_int64(0);
  outC->_L7.d_lrbg = kcg_lit_int64(0);
  outC->_L7.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L7.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L7.l_doubtover = kcg_lit_int64(0);
  outC->_L7.l_doubtunder = kcg_lit_int64(0);
  outC->_L7.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L7.l_trainint = kcg_lit_int64(0);
  outC->_L7.v_train = kcg_lit_int64(0);
  outC->_L7.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L7.m_mode = M_MODE_Full_Supervision;
  outC->_L7.m_level = M_LEVEL_Level_0;
  outC->_L7.nid_ntc = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 17; idx11++) {
    outC->_L4[idx11] = kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 50; idx12++) {
    outC->_L1[idx12] = kcg_lit_int64(0);
  }
  outC->hasPosReport = kcg_true;
  outC->P003.valid = kcg_true;
  outC->P003.nid_packet = kcg_lit_int64(0);
  outC->P003.l_packet = kcg_lit_int64(0);
  outC->P003.n_iter = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 5; idx13++) {
    outC->P003.nid_radio[idx13] = kcg_lit_int64(0);
  }
  outC->P005.valid = kcg_true;
  outC->P005.nid_packet = kcg_lit_int64(0);
  outC->P005.l_packet = kcg_lit_int64(0);
  outC->P005.nid_opeartional = kcg_lit_int64(0);
  outC->P004.valid = kcg_true;
  outC->P004.nid_packet = kcg_lit_int64(0);
  outC->P004.l_packet = kcg_lit_int64(0);
  outC->P004.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->P009.valid = kcg_true;
  outC->P009.nid_packet = kcg_lit_int64(0);
  outC->P009.l_packet = kcg_lit_int64(0);
  outC->P009.nid_ltrbg = kcg_lit_int64(0);
  outC->P011.valid = kcg_true;
  outC->P011.nid_packet = kcg_lit_int64(0);
  outC->P011.l_packet = kcg_lit_int64(0);
  outC->P011.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->P011.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->P011.l_train = kcg_lit_int64(0);
  outC->P011.v_maxtrain = kcg_lit_int64(0);
  outC->P011.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->P011.m_axleloadcat = M_AXLELOADCAT_A;
  outC->P011.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->P011.n_axle = kcg_lit_int64(0);
  outC->P011.n_iter_voltage = kcg_lit_int64(0);
  for (idx14 = 0; idx14 < 4; idx14++) {
    outC->P011.voltage_list[idx14].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->P011.voltage_list[idx14].nid_ctraction = kcg_lit_int64(0);
  }
  outC->P011.n_iter_nid_ntc = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 5; idx15++) {
    outC->P011.nid_ntc_list[idx15] = kcg_lit_int64(0);
  }
  outC->P001.valid = kcg_true;
  outC->P001.nid_packet = kcg_lit_int64(0);
  outC->P001.l_packet = kcg_lit_int64(0);
  outC->P001.q_scale = Q_SCALE_10_cm_scale;
  outC->P001.nid_lrbg = kcg_lit_int64(0);
  outC->P001.nid_prvlrbg = kcg_lit_int64(0);
  outC->P001.d_lrbg = kcg_lit_int64(0);
  outC->P001.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->P001.q_dlrbg = Q_DLRBG_Reverse;
  outC->P001.l_doubtover = kcg_lit_int64(0);
  outC->P001.l_doubtunder = kcg_lit_int64(0);
  outC->P001.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->P001.l_trainint = kcg_lit_int64(0);
  outC->P001.v_train = kcg_lit_int64(0);
  outC->P001.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->P001.m_mode = M_MODE_Full_Supervision;
  outC->P001.m_level = M_LEVEL_Level_0;
  outC->P001.nid_ntc = kcg_lit_int64(0);
  outC->P000.valid = kcg_true;
  outC->P000.nid_packet = kcg_lit_int64(0);
  outC->P000.l_packet = kcg_lit_int64(0);
  outC->P000.q_scale = Q_SCALE_10_cm_scale;
  outC->P000.nid_lrbg = kcg_lit_int64(0);
  outC->P000.d_lrbg = kcg_lit_int64(0);
  outC->P000.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->P000.q_dlrbg = Q_DLRBG_Reverse;
  outC->P000.l_doubtover = kcg_lit_int64(0);
  outC->P000.l_doubtunder = kcg_lit_int64(0);
  outC->P000.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->P000.l_trainint = kcg_lit_int64(0);
  outC->P000.v_train = kcg_lit_int64(0);
  outC->P000.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->P000.m_mode = M_MODE_Full_Supervision;
  outC->P000.m_level = M_LEVEL_Level_0;
  outC->P000.nid_ntc = kcg_lit_int64(0);
  outC->nid_packet = kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 17; idx16++) {
    outC->P0_or_P1[idx16] = kcg_lit_int64(0);
  }
  outC->Det_if_P0_or_P1_clock = kcg_true;
  outC->Det_if_P011_clock = kcg_true;
  outC->Det_if_P009_clock = kcg_true;
  outC->Det_if_P004_clock = kcg_true;
  outC->Det_if_P005_clock = kcg_true;
  outC->Det_if_P003_clock = kcg_true;
  outC->_L5_then_else_Det_if_P0_or_P1.valid = kcg_true;
  outC->_L5_then_else_Det_if_P0_or_P1.nid_packet = kcg_lit_int64(0);
  outC->_L5_then_else_Det_if_P0_or_P1.l_packet = kcg_lit_int64(0);
  outC->_L5_then_else_Det_if_P0_or_P1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5_then_else_Det_if_P0_or_P1.nid_lrbg = kcg_lit_int64(0);
  outC->_L5_then_else_Det_if_P0_or_P1.d_lrbg = kcg_lit_int64(0);
  outC->_L5_then_else_Det_if_P0_or_P1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L5_then_else_Det_if_P0_or_P1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L5_then_else_Det_if_P0_or_P1.l_doubtover = kcg_lit_int64(0);
  outC->_L5_then_else_Det_if_P0_or_P1.l_doubtunder = kcg_lit_int64(0);
  outC->_L5_then_else_Det_if_P0_or_P1.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L5_then_else_Det_if_P0_or_P1.l_trainint = kcg_lit_int64(0);
  outC->_L5_then_else_Det_if_P0_or_P1.v_train = kcg_lit_int64(0);
  outC->_L5_then_else_Det_if_P0_or_P1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L5_then_else_Det_if_P0_or_P1.m_mode = M_MODE_Full_Supervision;
  outC->_L5_then_else_Det_if_P0_or_P1.m_level = M_LEVEL_Level_0;
  outC->_L5_then_else_Det_if_P0_or_P1.nid_ntc = kcg_lit_int64(0);
  outC->_L3_then_else_Det_if_P0_or_P1.valid = kcg_true;
  outC->_L3_then_else_Det_if_P0_or_P1.nid_packet = kcg_lit_int64(0);
  outC->_L3_then_else_Det_if_P0_or_P1.l_packet = kcg_lit_int64(0);
  outC->_L3_then_else_Det_if_P0_or_P1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3_then_else_Det_if_P0_or_P1.nid_lrbg = kcg_lit_int64(0);
  outC->_L3_then_else_Det_if_P0_or_P1.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L3_then_else_Det_if_P0_or_P1.d_lrbg = kcg_lit_int64(0);
  outC->_L3_then_else_Det_if_P0_or_P1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L3_then_else_Det_if_P0_or_P1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L3_then_else_Det_if_P0_or_P1.l_doubtover = kcg_lit_int64(0);
  outC->_L3_then_else_Det_if_P0_or_P1.l_doubtunder = kcg_lit_int64(0);
  outC->_L3_then_else_Det_if_P0_or_P1.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_then_else_Det_if_P0_or_P1.l_trainint = kcg_lit_int64(0);
  outC->_L3_then_else_Det_if_P0_or_P1.v_train = kcg_lit_int64(0);
  outC->_L3_then_else_Det_if_P0_or_P1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L3_then_else_Det_if_P0_or_P1.m_mode = M_MODE_Full_Supervision;
  outC->_L3_then_else_Det_if_P0_or_P1.m_level = M_LEVEL_Level_0;
  outC->_L3_then_else_Det_if_P0_or_P1.nid_ntc = kcg_lit_int64(0);
  for (idx17 = 0; idx17 < 17; idx17++) {
    outC->_L2_then_else_Det_if_P0_or_P1[idx17] = kcg_lit_int64(0);
  }
  outC->_L3_else_else_Det_if_P0_or_P1.valid = kcg_true;
  outC->_L3_else_else_Det_if_P0_or_P1.nid_packet = kcg_lit_int64(0);
  outC->_L3_else_else_Det_if_P0_or_P1.l_packet = kcg_lit_int64(0);
  outC->_L3_else_else_Det_if_P0_or_P1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3_else_else_Det_if_P0_or_P1.nid_lrbg = kcg_lit_int64(0);
  outC->_L3_else_else_Det_if_P0_or_P1.d_lrbg = kcg_lit_int64(0);
  outC->_L3_else_else_Det_if_P0_or_P1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L3_else_else_Det_if_P0_or_P1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L3_else_else_Det_if_P0_or_P1.l_doubtover = kcg_lit_int64(0);
  outC->_L3_else_else_Det_if_P0_or_P1.l_doubtunder = kcg_lit_int64(0);
  outC->_L3_else_else_Det_if_P0_or_P1.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_else_else_Det_if_P0_or_P1.l_trainint = kcg_lit_int64(0);
  outC->_L3_else_else_Det_if_P0_or_P1.v_train = kcg_lit_int64(0);
  outC->_L3_else_else_Det_if_P0_or_P1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L3_else_else_Det_if_P0_or_P1.m_mode = M_MODE_Full_Supervision;
  outC->_L3_else_else_Det_if_P0_or_P1.m_level = M_LEVEL_Level_0;
  outC->_L3_else_else_Det_if_P0_or_P1.nid_ntc = kcg_lit_int64(0);
  outC->_L2_else_else_Det_if_P0_or_P1.valid = kcg_true;
  outC->_L2_else_else_Det_if_P0_or_P1.nid_packet = kcg_lit_int64(0);
  outC->_L2_else_else_Det_if_P0_or_P1.l_packet = kcg_lit_int64(0);
  outC->_L2_else_else_Det_if_P0_or_P1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2_else_else_Det_if_P0_or_P1.nid_lrbg = kcg_lit_int64(0);
  outC->_L2_else_else_Det_if_P0_or_P1.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L2_else_else_Det_if_P0_or_P1.d_lrbg = kcg_lit_int64(0);
  outC->_L2_else_else_Det_if_P0_or_P1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2_else_else_Det_if_P0_or_P1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L2_else_else_Det_if_P0_or_P1.l_doubtover = kcg_lit_int64(0);
  outC->_L2_else_else_Det_if_P0_or_P1.l_doubtunder = kcg_lit_int64(0);
  outC->_L2_else_else_Det_if_P0_or_P1.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_else_else_Det_if_P0_or_P1.l_trainint = kcg_lit_int64(0);
  outC->_L2_else_else_Det_if_P0_or_P1.v_train = kcg_lit_int64(0);
  outC->_L2_else_else_Det_if_P0_or_P1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2_else_else_Det_if_P0_or_P1.m_mode = M_MODE_Full_Supervision;
  outC->_L2_else_else_Det_if_P0_or_P1.m_level = M_LEVEL_Level_0;
  outC->_L2_else_else_Det_if_P0_or_P1.nid_ntc = kcg_lit_int64(0);
  outC->else_clock_Det_if_P0_or_P1 = kcg_true;
  outC->_L1_then_Det_if_P0_or_P1.valid = kcg_true;
  outC->_L1_then_Det_if_P0_or_P1.nid_packet = kcg_lit_int64(0);
  outC->_L1_then_Det_if_P0_or_P1.l_packet = kcg_lit_int64(0);
  outC->_L1_then_Det_if_P0_or_P1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1_then_Det_if_P0_or_P1.nid_lrbg = kcg_lit_int64(0);
  outC->_L1_then_Det_if_P0_or_P1.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L1_then_Det_if_P0_or_P1.d_lrbg = kcg_lit_int64(0);
  outC->_L1_then_Det_if_P0_or_P1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1_then_Det_if_P0_or_P1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L1_then_Det_if_P0_or_P1.l_doubtover = kcg_lit_int64(0);
  outC->_L1_then_Det_if_P0_or_P1.l_doubtunder = kcg_lit_int64(0);
  outC->_L1_then_Det_if_P0_or_P1.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1_then_Det_if_P0_or_P1.l_trainint = kcg_lit_int64(0);
  outC->_L1_then_Det_if_P0_or_P1.v_train = kcg_lit_int64(0);
  outC->_L1_then_Det_if_P0_or_P1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1_then_Det_if_P0_or_P1.m_mode = M_MODE_Full_Supervision;
  outC->_L1_then_Det_if_P0_or_P1.m_level = M_LEVEL_Level_0;
  outC->_L1_then_Det_if_P0_or_P1.nid_ntc = kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 17; idx18++) {
    outC->_L2_then_Det_if_P0_or_P1[idx18] = kcg_lit_int64(0);
  }
  outC->_L3_then_Det_if_P0_or_P1.valid = kcg_true;
  outC->_L3_then_Det_if_P0_or_P1.nid_packet = kcg_lit_int64(0);
  outC->_L3_then_Det_if_P0_or_P1.l_packet = kcg_lit_int64(0);
  outC->_L3_then_Det_if_P0_or_P1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3_then_Det_if_P0_or_P1.nid_lrbg = kcg_lit_int64(0);
  outC->_L3_then_Det_if_P0_or_P1.d_lrbg = kcg_lit_int64(0);
  outC->_L3_then_Det_if_P0_or_P1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L3_then_Det_if_P0_or_P1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L3_then_Det_if_P0_or_P1.l_doubtover = kcg_lit_int64(0);
  outC->_L3_then_Det_if_P0_or_P1.l_doubtunder = kcg_lit_int64(0);
  outC->_L3_then_Det_if_P0_or_P1.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_then_Det_if_P0_or_P1.l_trainint = kcg_lit_int64(0);
  outC->_L3_then_Det_if_P0_or_P1.v_train = kcg_lit_int64(0);
  outC->_L3_then_Det_if_P0_or_P1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L3_then_Det_if_P0_or_P1.m_mode = M_MODE_Full_Supervision;
  outC->_L3_then_Det_if_P0_or_P1.m_level = M_LEVEL_Level_0;
  outC->_L3_then_Det_if_P0_or_P1.nid_ntc = kcg_lit_int64(0);
  outC->_L1_else_Det_if_P011.valid = kcg_true;
  outC->_L1_else_Det_if_P011.nid_packet = kcg_lit_int64(0);
  outC->_L1_else_Det_if_P011.l_packet = kcg_lit_int64(0);
  outC->_L1_else_Det_if_P011.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1_else_Det_if_P011.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1_else_Det_if_P011.l_train = kcg_lit_int64(0);
  outC->_L1_else_Det_if_P011.v_maxtrain = kcg_lit_int64(0);
  outC->_L1_else_Det_if_P011.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1_else_Det_if_P011.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L1_else_Det_if_P011.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L1_else_Det_if_P011.n_axle = kcg_lit_int64(0);
  outC->_L1_else_Det_if_P011.n_iter_voltage = kcg_lit_int64(0);
  for (idx19 = 0; idx19 < 4; idx19++) {
    outC->_L1_else_Det_if_P011.voltage_list[idx19].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1_else_Det_if_P011.voltage_list[idx19].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L1_else_Det_if_P011.n_iter_nid_ntc = kcg_lit_int64(0);
  for (idx20 = 0; idx20 < 5; idx20++) {
    outC->_L1_else_Det_if_P011.nid_ntc_list[idx20] = kcg_lit_int64(0);
  }
  for (idx21 = 0; idx21 < 25; idx21++) {
    outC->_L1_then_Det_if_P011[idx21] = kcg_lit_int64(0);
  }
  outC->_L2_then_Det_if_P011.valid = kcg_true;
  outC->_L2_then_Det_if_P011.nid_packet = kcg_lit_int64(0);
  outC->_L2_then_Det_if_P011.l_packet = kcg_lit_int64(0);
  outC->_L2_then_Det_if_P011.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2_then_Det_if_P011.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2_then_Det_if_P011.l_train = kcg_lit_int64(0);
  outC->_L2_then_Det_if_P011.v_maxtrain = kcg_lit_int64(0);
  outC->_L2_then_Det_if_P011.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2_then_Det_if_P011.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L2_then_Det_if_P011.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L2_then_Det_if_P011.n_axle = kcg_lit_int64(0);
  outC->_L2_then_Det_if_P011.n_iter_voltage = kcg_lit_int64(0);
  for (idx22 = 0; idx22 < 4; idx22++) {
    outC->_L2_then_Det_if_P011.voltage_list[idx22].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2_then_Det_if_P011.voltage_list[idx22].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L2_then_Det_if_P011.n_iter_nid_ntc = kcg_lit_int64(0);
  for (idx23 = 0; idx23 < 5; idx23++) {
    outC->_L2_then_Det_if_P011.nid_ntc_list[idx23] = kcg_lit_int64(0);
  }
  for (idx24 = 0; idx24 < 50; idx24++) {
    outC->_L3_then_Det_if_P011[idx24] = kcg_lit_int64(0);
  }
  outC->_L1_else_Det_if_P009.valid = kcg_true;
  outC->_L1_else_Det_if_P009.nid_packet = kcg_lit_int64(0);
  outC->_L1_else_Det_if_P009.l_packet = kcg_lit_int64(0);
  outC->_L1_else_Det_if_P009.nid_ltrbg = kcg_lit_int64(0);
  for (idx25 = 0; idx25 < 3; idx25++) {
    outC->_L1_then_Det_if_P009[idx25] = kcg_lit_int64(0);
  }
  outC->_L2_then_Det_if_P009.valid = kcg_true;
  outC->_L2_then_Det_if_P009.nid_packet = kcg_lit_int64(0);
  outC->_L2_then_Det_if_P009.l_packet = kcg_lit_int64(0);
  outC->_L2_then_Det_if_P009.nid_ltrbg = kcg_lit_int64(0);
  for (idx26 = 0; idx26 < 50; idx26++) {
    outC->_L3_then_Det_if_P009[idx26] = kcg_lit_int64(0);
  }
  outC->_L1_else_Det_if_P004.valid = kcg_true;
  outC->_L1_else_Det_if_P004.nid_packet = kcg_lit_int64(0);
  outC->_L1_else_Det_if_P004.l_packet = kcg_lit_int64(0);
  outC->_L1_else_Det_if_P004.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  for (idx27 = 0; idx27 < 3; idx27++) {
    outC->_L1_then_Det_if_P004[idx27] = kcg_lit_int64(0);
  }
  outC->_L2_then_Det_if_P004.valid = kcg_true;
  outC->_L2_then_Det_if_P004.nid_packet = kcg_lit_int64(0);
  outC->_L2_then_Det_if_P004.l_packet = kcg_lit_int64(0);
  outC->_L2_then_Det_if_P004.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  for (idx28 = 0; idx28 < 50; idx28++) {
    outC->_L3_then_Det_if_P004[idx28] = kcg_lit_int64(0);
  }
  outC->_L1_else_Det_if_P005.valid = kcg_true;
  outC->_L1_else_Det_if_P005.nid_packet = kcg_lit_int64(0);
  outC->_L1_else_Det_if_P005.l_packet = kcg_lit_int64(0);
  outC->_L1_else_Det_if_P005.nid_opeartional = kcg_lit_int64(0);
  for (idx29 = 0; idx29 < 3; idx29++) {
    outC->_L1_then_Det_if_P005[idx29] = kcg_lit_int64(0);
  }
  outC->_L2_then_Det_if_P005.valid = kcg_true;
  outC->_L2_then_Det_if_P005.nid_packet = kcg_lit_int64(0);
  outC->_L2_then_Det_if_P005.l_packet = kcg_lit_int64(0);
  outC->_L2_then_Det_if_P005.nid_opeartional = kcg_lit_int64(0);
  for (idx30 = 0; idx30 < 50; idx30++) {
    outC->_L3_then_Det_if_P005[idx30] = kcg_lit_int64(0);
  }
  outC->_L1_else_Det_if_P003.valid = kcg_true;
  outC->_L1_else_Det_if_P003.nid_packet = kcg_lit_int64(0);
  outC->_L1_else_Det_if_P003.l_packet = kcg_lit_int64(0);
  outC->_L1_else_Det_if_P003.n_iter = kcg_lit_int64(0);
  for (idx31 = 0; idx31 < 5; idx31++) {
    outC->_L1_else_Det_if_P003.nid_radio[idx31] = kcg_lit_int64(0);
  }
  for (idx32 = 0; idx32 < 8; idx32++) {
    outC->_L1_then_Det_if_P003[idx32] = kcg_lit_int64(0);
  }
  outC->_L2_then_Det_if_P003.valid = kcg_true;
  outC->_L2_then_Det_if_P003.nid_packet = kcg_lit_int64(0);
  outC->_L2_then_Det_if_P003.l_packet = kcg_lit_int64(0);
  outC->_L2_then_Det_if_P003.n_iter = kcg_lit_int64(0);
  for (idx33 = 0; idx33 < 5; idx33++) {
    outC->_L2_then_Det_if_P003.nid_radio[idx33] = kcg_lit_int64(0);
  }
  for (idx34 = 0; idx34 < 50; idx34++) {
    outC->_L3_then_Det_if_P003[idx34] = kcg_lit_int64(0);
  }
  outC->oldPackets.p0.valid = kcg_true;
  outC->oldPackets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->oldPackets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->oldPackets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->oldPackets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->oldPackets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->oldPackets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->oldPackets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->oldPackets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->oldPackets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->oldPackets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->oldPackets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->oldPackets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->oldPackets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->oldPackets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->oldPackets.p0.packet0.level = M_LEVEL_Level_0;
  outC->oldPackets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->oldPackets.p1.valid = kcg_true;
  outC->oldPackets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->oldPackets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->oldPackets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->oldPackets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->oldPackets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->oldPackets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->oldPackets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->oldPackets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->oldPackets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->oldPackets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->oldPackets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->oldPackets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->oldPackets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->oldPackets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->oldPackets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->oldPackets.p1.packet1.level = M_LEVEL_Level_0;
  outC->oldPackets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->oldPackets.p3.valid = kcg_true;
  outC->oldPackets.p3.number = kcg_lit_int64(0);
  for (idx36 = 0; idx36 < 1; idx36++) {
    outC->oldPackets.p3.aNID_RADIO[idx36].valid = kcg_true;
    for (idx35 = 0; idx35 < 15; idx35++) {
      outC->oldPackets.p3.aNID_RADIO[idx36].telephoneNumber[idx35] = kcg_lit_int64(0);
    }
  }
  outC->oldPackets.p4.valid = kcg_true;
  outC->oldPackets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->oldPackets.p5.valid = kcg_true;
  outC->oldPackets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->oldPackets.p9.valid = kcg_true;
  outC->oldPackets.p9.transitionInformation = kcg_lit_int64(0);
  outC->oldPackets.p11.valid = kcg_true;
  outC->oldPackets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->oldPackets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->oldPackets.p11.l_train = kcg_lit_int64(0);
  outC->oldPackets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->oldPackets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->oldPackets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->oldPackets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->oldPackets.p11.n_axle = kcg_lit_int64(0);
  outC->oldPackets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx37 = 0; idx37 < 4; idx37++) {
    outC->oldPackets.p11.tractionIdentity[idx37].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->oldPackets.p11.tractionIdentity[idx37].nid_ctraction = kcg_lit_int64(0);
  }
  outC->oldPackets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx38 = 0; idx38 < 5; idx38++) {
    outC->oldPackets.p11.nid_ntc[idx38] = kcg_lit_int64(0);
  }
  /* _L38=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000#1)/ */
  ConvertP000_init_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ConvertP000_1);
  /* Det_if_P0_or_P1:then:_L3=(TM_TrainToTrack::C_compr_P000#1)/ */
  C_compr_P000_init_TM_TrainToTrack(&outC->Context_C_compr_P000_1);
  /* _L39=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP001#1)/ */
  ConvertP001_init_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ConvertP001_1);
  /* Det_if_P0_or_P1:else:then:_L3=(TM_TrainToTrack::C_compr_P001#1)/ */
  C_compr_P001_init_TM_TrainToTrack(&outC->Context_C_compr_P001_1);
  /* _L40=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003#1)/ */
  ConvertP003_init_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ConvertP003_1);
  /* Det_if_P003:then:_L2=(TM_TrainToTrack::C_compr_P003#2)/ */
  C_compr_P003_init_TM_TrainToTrack(&outC->Context_C_compr_P003_2);
  /* _L41=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004#1)/ */
  ConvertP004_init_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ConvertP004_1);
  /* Det_if_P004:then:_L2=(TM_TrainToTrack::C_compr_P004#2)/ */
  C_compr_P004_init_TM_TrainToTrack(&outC->Context_C_compr_P004_2);
  /* _L42=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005#1)/ */
  ConvertP005_init_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ConvertP005_1);
  /* Det_if_P005:then:_L2=(TM_TrainToTrack::C_compr_P005#2)/ */
  C_compr_P005_init_TM_TrainToTrack(&outC->Context_C_compr_P005_2);
  /* _L43=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009#1)/ */
  ConvertP009_init_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ConvertP009_1);
  /* Det_if_P009:then:_L2=(TM_TrainToTrack::C_compr_P009#2)/ */
  C_compr_P009_init_TM_TrainToTrack(&outC->Context_C_compr_P009_2);
  /* _L44=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011#1)/ */
  ConvertP011_init_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ConvertP011_1);
  /* Det_if_P011:then:_L2=(TM_TrainToTrack::C_compr_P011#4)/ */
  C_compr_P011_init_TM_TrainToTrack(&outC->Context_C_compr_P011_4);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ConvertPackets_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  /* _L38=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000#1)/ */
  ConvertP000_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ConvertP000_1);
  /* Det_if_P0_or_P1:then:_L3=(TM_TrainToTrack::C_compr_P000#1)/ */
  C_compr_P000_reset_TM_TrainToTrack(&outC->Context_C_compr_P000_1);
  /* _L39=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP001#1)/ */
  ConvertP001_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ConvertP001_1);
  /* Det_if_P0_or_P1:else:then:_L3=(TM_TrainToTrack::C_compr_P001#1)/ */
  C_compr_P001_reset_TM_TrainToTrack(&outC->Context_C_compr_P001_1);
  /* _L40=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003#1)/ */
  ConvertP003_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ConvertP003_1);
  /* Det_if_P003:then:_L2=(TM_TrainToTrack::C_compr_P003#2)/ */
  C_compr_P003_reset_TM_TrainToTrack(&outC->Context_C_compr_P003_2);
  /* _L41=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004#1)/ */
  ConvertP004_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ConvertP004_1);
  /* Det_if_P004:then:_L2=(TM_TrainToTrack::C_compr_P004#2)/ */
  C_compr_P004_reset_TM_TrainToTrack(&outC->Context_C_compr_P004_2);
  /* _L42=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005#1)/ */
  ConvertP005_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ConvertP005_1);
  /* Det_if_P005:then:_L2=(TM_TrainToTrack::C_compr_P005#2)/ */
  C_compr_P005_reset_TM_TrainToTrack(&outC->Context_C_compr_P005_2);
  /* _L43=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009#1)/ */
  ConvertP009_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ConvertP009_1);
  /* Det_if_P009:then:_L2=(TM_TrainToTrack::C_compr_P009#2)/ */
  C_compr_P009_reset_TM_TrainToTrack(&outC->Context_C_compr_P009_2);
  /* _L44=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011#1)/ */
  ConvertP011_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ConvertP011_1);
  /* Det_if_P011:then:_L2=(TM_TrainToTrack::C_compr_P011#4)/ */
  C_compr_P011_reset_TM_TrainToTrack(&outC->Context_C_compr_P011_4);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion(
  SV_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *SV,
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  kcg_save_SV_C_compr_P003_TM_TrainToTrack(
    &SV->Context_C_compr_P003_2,
    &outC->Context_C_compr_P003_2);
}

void kcg_load_SV_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *outC,
  SV_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *SV)
{
  kcg_load_SV_C_compr_P003_TM_TrainToTrack(
    &outC->Context_C_compr_P003_2,
    &SV->Context_C_compr_P003_2);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

