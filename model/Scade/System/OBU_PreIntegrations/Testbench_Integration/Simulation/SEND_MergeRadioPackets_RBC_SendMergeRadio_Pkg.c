/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg.h"

/* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets/ */
void SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg(
  /* Header/ */
  Radio_TrackTrain_Header_T_TM *Header,
  /* M03/ */
  P003V1_trackside_int_T_TM_baseline2 *M03,
  /* M05/ */
  P005_trackside_int_T_TM *M05,
  /* M15/ */
  P015_trackside_int_T_TM *M15,
  /* M21/ */
  P021_trackside_int_T_TM *M21,
  /* M27/ */
  P027V1_trackside_int_T_TM_baseline2 *M27,
  /* M42/ */
  P042_trackside_int_T_TM *M42,
  /* M57/ */
  P057_trackside_int_T_TM *M57,
  /* M58/ */
  P058_trackside_int_T_TM *M58,
  outC_SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg *outC)
{
  static CompressedPackets_T_Common_Types_Pkg op_call;
  static kcg_bool _1_op_call;
  static CompressedPackets_T_Common_Types_Pkg _2_op_call;
  static kcg_bool _3_op_call;
  static CompressedPackets_T_Common_Types_Pkg _4_op_call;
  static kcg_bool _5_op_call;
  static CompressedPackets_T_Common_Types_Pkg _6_op_call;
  static kcg_bool _7_op_call;
  static CompressedPackets_T_Common_Types_Pkg _8_op_call;
  static kcg_bool _9_op_call;
  static CompressedPackets_T_Common_Types_Pkg _10_op_call;
  static kcg_bool _11_op_call;
  static CompressedPackets_T_Common_Types_Pkg _12_op_call;
  static kcg_bool _13_op_call;
  static CompressedPackets_T_Common_Types_Pkg _14_op_call;
  static kcg_bool _15_op_call;
  static CompressedPackets_T_Common_Types_Pkg _16_op_call;
  static kcg_bool _17_op_call;
  static kcg_bool noname;
  static kcg_bool _18_noname;
  static kcg_bool _19_noname;
  static kcg_bool _20_noname;
  static kcg_bool _21_noname;
  static kcg_bool _22_noname;
  static kcg_bool _23_noname;
  static kcg_bool _24_noname;
  static kcg_bool _25_noname;
  static kcg_bool _26_noname;

  kcg_copy_P003V1_trackside_int_T_TM_baseline2(&outC->_L1, M03);
  outC->_L6 = outC->_L1.valid;
  outC->every8 = outC->_L6;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L35,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  if (outC->every8) {
    /* _L8=(TM_trackside_baseline2::Write_P003V1#1)/ */
    Write_P003V1_TM_trackside_baseline2(
      &outC->_L1,
      &outC->_L35,
      &outC->Context_Write_P003V1_1);
    _1_op_call = outC->Context_Write_P003V1_1.Error;
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &op_call,
      &outC->Context_Write_P003V1_1.RadioPacketsOut);
  }
  kcg_copy_P005_trackside_int_T_TM(&outC->_L2, M05);
  outC->_L15 = outC->_L2.valid;
  outC->every7 = outC->_L15;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L34,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  if (outC->every8) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L7, &op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L7, &outC->_L34);
  }
  if (outC->every7) {
    /* _L12=(TM_trackside::Write_P005#1)/ */
    Write_P005_TM_trackside(
      &outC->_L2,
      &outC->_L7,
      &outC->Context_Write_P005_1);
    _3_op_call = outC->Context_Write_P005_1.Error;
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_2_op_call,
      &outC->Context_Write_P005_1.RadioPacketsOut);
  }
  kcg_copy_P015_trackside_int_T_TM(&outC->_L3, M15);
  outC->_L18 = outC->_L3.valid;
  outC->every6 = outC->_L18;
  if (outC->every7) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L11, &_2_op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L11, &outC->_L7);
  }
  if (outC->every6) {
    /* _L17=(TM_trackside::Write_P015#1)/ */
    Write_P015_TM_trackside(
      &outC->_L3,
      &outC->_L11,
      &outC->Context_Write_P015_1);
    _5_op_call = outC->Context_Write_P015_1.Error;
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_4_op_call,
      &outC->Context_Write_P015_1.RadioPacketsOut);
  }
  kcg_copy_P021_trackside_int_T_TM(&outC->_L21, M21);
  outC->_L26 = outC->_L21.valid;
  outC->every5 = outC->_L26;
  if (outC->every6) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L16, &_4_op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L16, &outC->_L11);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->RadioMessagePackets_1_2,
    &outC->_L16);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L23,
    &outC->RadioMessagePackets_1_2);
  if (outC->every5) {
    /* _L25=(TM_trackside::Write_P021#1)/ */
    Write_P021_TM_trackside(
      &outC->_L21,
      &outC->_L23,
      &outC->Context_Write_P021_1);
    _7_op_call = outC->Context_Write_P021_1.Error;
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_6_op_call,
      &outC->Context_Write_P021_1.RadioPacketsOut);
  }
  kcg_copy_P027V1_trackside_int_T_TM_baseline2(&outC->_L22, M27);
  outC->_L28 = outC->_L22.valid;
  outC->every4 = outC->_L28;
  if (outC->every5) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L24, &_6_op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L24, &outC->_L23);
  }
  if (outC->every4) {
    /* _L30=(TM_trackside_baseline2::Write_P027V1#1)/ */
    Write_P027V1_TM_trackside_baseline2(
      &outC->_L22,
      &outC->_L24,
      &outC->Context_Write_P027V1_1);
    _9_op_call = outC->Context_Write_P027V1_1.Error;
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_8_op_call,
      &outC->Context_Write_P027V1_1.PacketsOut);
  }
  kcg_copy_P057_trackside_int_T_TM(&outC->_L52, M57);
  outC->_L44 = outC->_L52.valid;
  outC->every3 = outC->_L44;
  outC->_L69 = kcg_false;
  outC->every2 = outC->_L69;
  kcg_copy_P042_trackside_int_T_TM(&outC->_L51, M42);
  if (outC->every4) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L29, &_8_op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L29, &outC->_L24);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->RadioMessagePackets_2_3,
    &outC->_L29);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L50,
    &outC->RadioMessagePackets_2_3);
  if (outC->every2) {
    /* _L46=(TM_trackside::Write_P042#2)/ */
    Write_P042_TM_trackside(
      &outC->_L51,
      &outC->_L50,
      &outC->Context_Write_P042_2);
    _13_op_call = outC->Context_Write_P042_2.Error;
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_12_op_call,
      &outC->Context_Write_P042_2.RadioPacketsOut);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L47, &_12_op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L47, &outC->_L50);
  }
  if (outC->every3) {
    /* _L41=(TM_trackside::Write_P057#1)/ */
    Write_P057_TM_trackside(
      &outC->_L52,
      &outC->_L47,
      &outC->Context_Write_P057_1);
    _11_op_call = outC->Context_Write_P057_1.Error;
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_10_op_call,
      &outC->Context_Write_P057_1.RadioPacketsOut);
  }
  kcg_copy_P042_trackside_int_T_TM(&outC->_L64, M42);
  outC->_L62 = outC->_L64.valid;
  outC->every1 = outC->_L62;
  if (outC->every3) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L42, &_10_op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L42, &outC->_L47);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->RadioMessagePackets_3_4,
    &outC->_L42);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L66,
    &outC->RadioMessagePackets_3_4);
  if (outC->every1) {
    /* _L60=(TM_trackside::Write_P042#1)/ */
    Write_P042_TM_trackside(
      &outC->_L64,
      &outC->_L66,
      &outC->Context_Write_P042_1);
    _15_op_call = outC->Context_Write_P042_1.Error;
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_14_op_call,
      &outC->Context_Write_P042_1.RadioPacketsOut);
  }
  kcg_copy_P058_trackside_int_T_TM(&outC->_L68, M58);
  outC->_L58 = outC->_L68.valid;
  outC->every = outC->_L58;
  if (outC->every1) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L61, &_14_op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L61, &outC->_L66);
  }
  if (outC->every) {
    /* _L57=(TM_trackside::Write_P058#1)/ */
    Write_P058_TM_trackside(
      &outC->_L68,
      &outC->_L61,
      &outC->Context_Write_P058_1);
    _17_op_call = outC->Context_Write_P058_1.Error;
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_16_op_call,
      &outC->Context_Write_P058_1.RadioPacketsOut);
  }
  outC->_L48 = outC->_L51.valid;
  _26_noname = outC->_L48;
  outC->_L53 = kcg_false;
  outC->_L55 = kcg_false;
  if (outC->every1) {
    outC->_L60 = _15_op_call;
  }
  else {
    outC->_L60 = outC->_L55;
  }
  _25_noname = outC->_L60;
  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->_L59, Header);
  if (outC->every) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L56, &_16_op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L56, &outC->_L61);
  }
  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->_L54.Header, &outC->_L59);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L54.Messages,
    &outC->_L56);
  kcg_copy_CompressedRadioMessage_TM(&outC->MessageOUT, &outC->_L54);
  if (outC->every) {
    outC->_L57 = _17_op_call;
  }
  else {
    outC->_L57 = outC->_L53;
  }
  _24_noname = outC->_L57;
  outC->_L40 = kcg_false;
  if (outC->every2) {
    outC->_L46 = _13_op_call;
  }
  else {
    outC->_L46 = outC->_L40;
  }
  outC->_L36 = kcg_false;
  if (outC->every3) {
    outC->_L41 = _11_op_call;
  }
  else {
    outC->_L41 = outC->_L36;
  }
  _23_noname = outC->_L41;
  _22_noname = outC->_L46;
  outC->_L31 = kcg_false;
  if (outC->every4) {
    outC->_L30 = _9_op_call;
  }
  else {
    outC->_L30 = outC->_L31;
  }
  _21_noname = outC->_L30;
  outC->_L27 = kcg_false;
  if (outC->every5) {
    outC->_L25 = _7_op_call;
  }
  else {
    outC->_L25 = outC->_L27;
  }
  _20_noname = outC->_L25;
  outC->_L19 = kcg_false;
  if (outC->every6) {
    outC->_L17 = _5_op_call;
  }
  else {
    outC->_L17 = outC->_L19;
  }
  _19_noname = outC->_L17;
  outC->_L13 = kcg_false;
  if (outC->every7) {
    outC->_L12 = _3_op_call;
  }
  else {
    outC->_L12 = outC->_L13;
  }
  _18_noname = outC->_L12;
  outC->_L10 = kcg_false;
  if (outC->every8) {
    outC->_L8 = _1_op_call;
  }
  else {
    outC->_L8 = outC->_L10;
  }
  noname = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void SEND_MergeRadioPackets_init_RBC_SendMergeRadio_Pkg(
  outC_SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg *outC)
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
  static kcg_size idx39;
  static kcg_size idx40;
  static kcg_size idx41;
  static kcg_size idx42;
  static kcg_size idx43;
  static kcg_size idx44;
  static kcg_size idx45;

  outC->_L69 = kcg_true;
  outC->_L68.valid = kcg_true;
  outC->_L68.NID_PACKET = kcg_lit_int32(0);
  outC->_L68.Q_DIR = kcg_lit_int32(0);
  outC->_L68.L_PACKET = kcg_lit_int32(0);
  outC->_L68.Q_SCALE = kcg_lit_int32(0);
  outC->_L68.T_CYCLOC = kcg_lit_int32(0);
  outC->_L68.D_CYCLOC = kcg_lit_int32(0);
  outC->_L68.M_LOC = kcg_lit_int32(0);
  outC->_L68.N_ITER = kcg_lit_int32(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L68.SECTIONS[idx].D_LOC = kcg_lit_int32(0);
    outC->_L68.SECTIONS[idx].Q_LGTLOC = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L66.PacketHeaders[idx1].nid_packet = kcg_lit_int32(0);
    outC->_L66.PacketHeaders[idx1].q_dir = Q_DIR_Reverse;
    outC->_L66.PacketHeaders[idx1].valid = kcg_true;
    outC->_L66.PacketHeaders[idx1].startAddress = kcg_lit_int32(0);
    outC->_L66.PacketHeaders[idx1].endAddress = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L66.PacketData[idx2] = kcg_lit_int32(0);
  }
  outC->_L53 = kcg_true;
  outC->_L54.Header.radioDevice = kcg_lit_int32(0);
  outC->_L54.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L54.Header.nid_message = kcg_lit_int32(0);
  outC->_L54.Header.t_train = kcg_lit_int32(0);
  outC->_L54.Header.m_ack = kcg_lit_int32(0);
  outC->_L54.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L54.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L54.Header.nid_em = kcg_lit_int32(0);
  outC->_L54.Header.q_scale = kcg_lit_int32(0);
  outC->_L54.Header.d_sr = kcg_lit_int32(0);
  outC->_L54.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L54.Header.d_ref = kcg_lit_int32(0);
  outC->_L54.Header.q_dir = kcg_lit_int32(0);
  outC->_L54.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L54.Header.m_version = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L54.Messages.PacketHeaders[idx3].nid_packet = kcg_lit_int32(0);
    outC->_L54.Messages.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L54.Messages.PacketHeaders[idx3].valid = kcg_true;
    outC->_L54.Messages.PacketHeaders[idx3].startAddress = kcg_lit_int32(0);
    outC->_L54.Messages.PacketHeaders[idx3].endAddress = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L54.Messages.PacketData[idx4] = kcg_lit_int32(0);
  }
  outC->_L55 = kcg_true;
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L56.PacketHeaders[idx5].nid_packet = kcg_lit_int32(0);
    outC->_L56.PacketHeaders[idx5].q_dir = Q_DIR_Reverse;
    outC->_L56.PacketHeaders[idx5].valid = kcg_true;
    outC->_L56.PacketHeaders[idx5].startAddress = kcg_lit_int32(0);
    outC->_L56.PacketHeaders[idx5].endAddress = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->_L56.PacketData[idx6] = kcg_lit_int32(0);
  }
  outC->_L57 = kcg_true;
  outC->_L58 = kcg_true;
  outC->_L59.radioDevice = kcg_lit_int32(0);
  outC->_L59.receivedSystemTime = kcg_lit_int32(0);
  outC->_L59.nid_message = kcg_lit_int32(0);
  outC->_L59.t_train = kcg_lit_int32(0);
  outC->_L59.m_ack = kcg_lit_int32(0);
  outC->_L59.nid_lrbg = kcg_lit_int32(0);
  outC->_L59.t_train_reference = kcg_lit_int32(0);
  outC->_L59.nid_em = kcg_lit_int32(0);
  outC->_L59.q_scale = kcg_lit_int32(0);
  outC->_L59.d_sr = kcg_lit_int32(0);
  outC->_L59.t_sh_rqst = kcg_lit_int32(0);
  outC->_L59.d_ref = kcg_lit_int32(0);
  outC->_L59.q_dir = kcg_lit_int32(0);
  outC->_L59.d_emergencystop = kcg_lit_int32(0);
  outC->_L59.m_version = kcg_lit_int32(0);
  outC->_L60 = kcg_true;
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->_L61.PacketHeaders[idx7].nid_packet = kcg_lit_int32(0);
    outC->_L61.PacketHeaders[idx7].q_dir = Q_DIR_Reverse;
    outC->_L61.PacketHeaders[idx7].valid = kcg_true;
    outC->_L61.PacketHeaders[idx7].startAddress = kcg_lit_int32(0);
    outC->_L61.PacketHeaders[idx7].endAddress = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 500; idx8++) {
    outC->_L61.PacketData[idx8] = kcg_lit_int32(0);
  }
  outC->_L62 = kcg_true;
  outC->_L64.valid = kcg_true;
  outC->_L64.NID_PACKET = kcg_lit_int32(0);
  outC->_L64.Q_DIR = kcg_lit_int32(0);
  outC->_L64.L_PACKET = kcg_lit_int32(0);
  outC->_L64.Q_RBC = kcg_lit_int32(0);
  outC->_L64.NID_C = kcg_lit_int32(0);
  outC->_L64.NID_RBC = kcg_lit_int32(0);
  outC->_L64.NID_RADIO = kcg_lit_int32(0);
  outC->_L64.Q_SLEEPSESSION = kcg_lit_int32(0);
  outC->_L52.valid = kcg_true;
  outC->_L52.NID_PACKET = kcg_lit_int32(0);
  outC->_L52.Q_DIR = kcg_lit_int32(0);
  outC->_L52.L_PACKET = kcg_lit_int32(0);
  outC->_L52.T_MAR = kcg_lit_int32(0);
  outC->_L52.T_TIMEOUTRQST = kcg_lit_int32(0);
  outC->_L52.T_CYCRQST = kcg_lit_int32(0);
  outC->_L51.valid = kcg_true;
  outC->_L51.NID_PACKET = kcg_lit_int32(0);
  outC->_L51.Q_DIR = kcg_lit_int32(0);
  outC->_L51.L_PACKET = kcg_lit_int32(0);
  outC->_L51.Q_RBC = kcg_lit_int32(0);
  outC->_L51.NID_C = kcg_lit_int32(0);
  outC->_L51.NID_RBC = kcg_lit_int32(0);
  outC->_L51.NID_RADIO = kcg_lit_int32(0);
  outC->_L51.Q_SLEEPSESSION = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->_L50.PacketHeaders[idx9].nid_packet = kcg_lit_int32(0);
    outC->_L50.PacketHeaders[idx9].q_dir = Q_DIR_Reverse;
    outC->_L50.PacketHeaders[idx9].valid = kcg_true;
    outC->_L50.PacketHeaders[idx9].startAddress = kcg_lit_int32(0);
    outC->_L50.PacketHeaders[idx9].endAddress = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 500; idx10++) {
    outC->_L50.PacketData[idx10] = kcg_lit_int32(0);
  }
  outC->_L36 = kcg_true;
  outC->_L40 = kcg_true;
  for (idx11 = 0; idx11 < 30; idx11++) {
    outC->_L42.PacketHeaders[idx11].nid_packet = kcg_lit_int32(0);
    outC->_L42.PacketHeaders[idx11].q_dir = Q_DIR_Reverse;
    outC->_L42.PacketHeaders[idx11].valid = kcg_true;
    outC->_L42.PacketHeaders[idx11].startAddress = kcg_lit_int32(0);
    outC->_L42.PacketHeaders[idx11].endAddress = kcg_lit_int32(0);
  }
  for (idx12 = 0; idx12 < 500; idx12++) {
    outC->_L42.PacketData[idx12] = kcg_lit_int32(0);
  }
  outC->_L41 = kcg_true;
  outC->_L44 = kcg_true;
  for (idx13 = 0; idx13 < 30; idx13++) {
    outC->_L47.PacketHeaders[idx13].nid_packet = kcg_lit_int32(0);
    outC->_L47.PacketHeaders[idx13].q_dir = Q_DIR_Reverse;
    outC->_L47.PacketHeaders[idx13].valid = kcg_true;
    outC->_L47.PacketHeaders[idx13].startAddress = kcg_lit_int32(0);
    outC->_L47.PacketHeaders[idx13].endAddress = kcg_lit_int32(0);
  }
  for (idx14 = 0; idx14 < 500; idx14++) {
    outC->_L47.PacketData[idx14] = kcg_lit_int32(0);
  }
  outC->_L46 = kcg_true;
  outC->_L48 = kcg_true;
  for (idx15 = 0; idx15 < 30; idx15++) {
    outC->_L35.PacketHeaders[idx15].nid_packet = kcg_lit_int32(0);
    outC->_L35.PacketHeaders[idx15].q_dir = Q_DIR_Reverse;
    outC->_L35.PacketHeaders[idx15].valid = kcg_true;
    outC->_L35.PacketHeaders[idx15].startAddress = kcg_lit_int32(0);
    outC->_L35.PacketHeaders[idx15].endAddress = kcg_lit_int32(0);
  }
  for (idx16 = 0; idx16 < 500; idx16++) {
    outC->_L35.PacketData[idx16] = kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 30; idx17++) {
    outC->_L34.PacketHeaders[idx17].nid_packet = kcg_lit_int32(0);
    outC->_L34.PacketHeaders[idx17].q_dir = Q_DIR_Reverse;
    outC->_L34.PacketHeaders[idx17].valid = kcg_true;
    outC->_L34.PacketHeaders[idx17].startAddress = kcg_lit_int32(0);
    outC->_L34.PacketHeaders[idx17].endAddress = kcg_lit_int32(0);
  }
  for (idx18 = 0; idx18 < 500; idx18++) {
    outC->_L34.PacketData[idx18] = kcg_lit_int32(0);
  }
  outC->_L31 = kcg_true;
  for (idx19 = 0; idx19 < 30; idx19++) {
    outC->_L29.PacketHeaders[idx19].nid_packet = kcg_lit_int32(0);
    outC->_L29.PacketHeaders[idx19].q_dir = Q_DIR_Reverse;
    outC->_L29.PacketHeaders[idx19].valid = kcg_true;
    outC->_L29.PacketHeaders[idx19].startAddress = kcg_lit_int32(0);
    outC->_L29.PacketHeaders[idx19].endAddress = kcg_lit_int32(0);
  }
  for (idx20 = 0; idx20 < 500; idx20++) {
    outC->_L29.PacketData[idx20] = kcg_lit_int32(0);
  }
  outC->_L30 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_true;
  for (idx21 = 0; idx21 < 30; idx21++) {
    outC->_L24.PacketHeaders[idx21].nid_packet = kcg_lit_int32(0);
    outC->_L24.PacketHeaders[idx21].q_dir = Q_DIR_Reverse;
    outC->_L24.PacketHeaders[idx21].valid = kcg_true;
    outC->_L24.PacketHeaders[idx21].startAddress = kcg_lit_int32(0);
    outC->_L24.PacketHeaders[idx21].endAddress = kcg_lit_int32(0);
  }
  for (idx22 = 0; idx22 < 500; idx22++) {
    outC->_L24.PacketData[idx22] = kcg_lit_int32(0);
  }
  outC->_L25 = kcg_true;
  for (idx23 = 0; idx23 < 30; idx23++) {
    outC->_L23.PacketHeaders[idx23].nid_packet = kcg_lit_int32(0);
    outC->_L23.PacketHeaders[idx23].q_dir = Q_DIR_Reverse;
    outC->_L23.PacketHeaders[idx23].valid = kcg_true;
    outC->_L23.PacketHeaders[idx23].startAddress = kcg_lit_int32(0);
    outC->_L23.PacketHeaders[idx23].endAddress = kcg_lit_int32(0);
  }
  for (idx24 = 0; idx24 < 500; idx24++) {
    outC->_L23.PacketData[idx24] = kcg_lit_int32(0);
  }
  outC->_L21.valid = kcg_true;
  outC->_L21.NID_PACKET = kcg_lit_int32(0);
  outC->_L21.Q_DIR = kcg_lit_int32(0);
  outC->_L21.L_PACKET = kcg_lit_int32(0);
  outC->_L21.Q_SCALE = kcg_lit_int32(0);
  outC->_L21.D_GRADIENT = kcg_lit_int32(0);
  outC->_L21.Q_GDIR = kcg_lit_int32(0);
  outC->_L21.G_A = kcg_lit_int32(0);
  outC->_L21.N_ITER = kcg_lit_int32(0);
  for (idx25 = 0; idx25 < 32; idx25++) {
    outC->_L21.SECTIONS[idx25].D_GRADIENT = kcg_lit_int32(0);
    outC->_L21.SECTIONS[idx25].Q_GDIR = kcg_lit_int32(0);
    outC->_L21.SECTIONS[idx25].G_A = kcg_lit_int32(0);
  }
  outC->_L22.valid = kcg_true;
  outC->_L22.NID_PACKET = kcg_lit_int32(0);
  outC->_L22.Q_DIR = kcg_lit_int32(0);
  outC->_L22.L_PACKET = kcg_lit_int32(0);
  outC->_L22.Q_SCALE = kcg_lit_int32(0);
  outC->_L22.D_STATIC = kcg_lit_int32(0);
  outC->_L22.V_STATIC = kcg_lit_int32(0);
  outC->_L22.Q_FRONT = kcg_lit_int32(0);
  outC->_L22.N_ITER_n = kcg_lit_int32(0);
  for (idx26 = 0; idx26 < 32; idx26++) {
    outC->_L22.SECTIONS_q_diff[idx26].NC_DIFF = kcg_lit_int32(0);
    outC->_L22.SECTIONS_q_diff[idx26].V_DIFF = kcg_lit_int32(0);
  }
  outC->_L22.N_ITER_k = kcg_lit_int32(0);
  for (idx28 = 0; idx28 < 32; idx28++) {
    outC->_L22.SECTIONS_SSP[idx28].D_STATIC = kcg_lit_int32(0);
    outC->_L22.SECTIONS_SSP[idx28].V_STATIC = kcg_lit_int32(0);
    outC->_L22.SECTIONS_SSP[idx28].Q_FRONT = kcg_lit_int32(0);
    outC->_L22.SECTIONS_SSP[idx28].N_ITER = kcg_lit_int32(0);
    for (idx27 = 0; idx27 < 32; idx27++) {
      outC->_L22.SECTIONS_SSP[idx28].SECTIONS_q_diff[idx27].NC_DIFF =
        kcg_lit_int32(0);
      outC->_L22.SECTIONS_SSP[idx28].SECTIONS_q_diff[idx27].V_DIFF = kcg_lit_int32(0);
    }
  }
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  for (idx29 = 0; idx29 < 30; idx29++) {
    outC->_L16.PacketHeaders[idx29].nid_packet = kcg_lit_int32(0);
    outC->_L16.PacketHeaders[idx29].q_dir = Q_DIR_Reverse;
    outC->_L16.PacketHeaders[idx29].valid = kcg_true;
    outC->_L16.PacketHeaders[idx29].startAddress = kcg_lit_int32(0);
    outC->_L16.PacketHeaders[idx29].endAddress = kcg_lit_int32(0);
  }
  for (idx30 = 0; idx30 < 500; idx30++) {
    outC->_L16.PacketData[idx30] = kcg_lit_int32(0);
  }
  outC->_L17 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L13 = kcg_true;
  for (idx31 = 0; idx31 < 30; idx31++) {
    outC->_L11.PacketHeaders[idx31].nid_packet = kcg_lit_int32(0);
    outC->_L11.PacketHeaders[idx31].q_dir = Q_DIR_Reverse;
    outC->_L11.PacketHeaders[idx31].valid = kcg_true;
    outC->_L11.PacketHeaders[idx31].startAddress = kcg_lit_int32(0);
    outC->_L11.PacketHeaders[idx31].endAddress = kcg_lit_int32(0);
  }
  for (idx32 = 0; idx32 < 500; idx32++) {
    outC->_L11.PacketData[idx32] = kcg_lit_int32(0);
  }
  outC->_L12 = kcg_true;
  outC->_L10 = kcg_true;
  for (idx33 = 0; idx33 < 30; idx33++) {
    outC->_L7.PacketHeaders[idx33].nid_packet = kcg_lit_int32(0);
    outC->_L7.PacketHeaders[idx33].q_dir = Q_DIR_Reverse;
    outC->_L7.PacketHeaders[idx33].valid = kcg_true;
    outC->_L7.PacketHeaders[idx33].startAddress = kcg_lit_int32(0);
    outC->_L7.PacketHeaders[idx33].endAddress = kcg_lit_int32(0);
  }
  for (idx34 = 0; idx34 < 500; idx34++) {
    outC->_L7.PacketData[idx34] = kcg_lit_int32(0);
  }
  outC->_L8 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L3.valid = kcg_true;
  outC->_L3.NID_PACKET = kcg_lit_int32(0);
  outC->_L3.Q_DIR = kcg_lit_int32(0);
  outC->_L3.L_PACKET = kcg_lit_int32(0);
  outC->_L3.Q_SCALE = kcg_lit_int32(0);
  outC->_L3.V_LOA = kcg_lit_int32(0);
  outC->_L3.T_LOA = kcg_lit_int32(0);
  outC->_L3.N_ITER = kcg_lit_int32(0);
  for (idx35 = 0; idx35 < 32; idx35++) {
    outC->_L3.SECTIONS[idx35].L_SECTION = kcg_lit_int32(0);
    outC->_L3.SECTIONS[idx35].Q_SECTIONTIMER = kcg_lit_int32(0);
    outC->_L3.SECTIONS[idx35].T_SECTIONTIMER = kcg_lit_int32(0);
    outC->_L3.SECTIONS[idx35].D_SECTIONTIMERSTOPLOC = kcg_lit_int32(0);
  }
  outC->_L3.L_ENDSECTION = kcg_lit_int32(0);
  outC->_L3.Q_SECTIONTIMER = kcg_lit_int32(0);
  outC->_L3.T_SECTIONTIMER = kcg_lit_int32(0);
  outC->_L3.D_SECTIONTIMERSTOPLOC = kcg_lit_int32(0);
  outC->_L3.Q_ENDTIMER = kcg_lit_int32(0);
  outC->_L3.T_ENDTIMER = kcg_lit_int32(0);
  outC->_L3.D_ENDTIMERSTARTLOC = kcg_lit_int32(0);
  outC->_L3.Q_DANGERPOINT = kcg_lit_int32(0);
  outC->_L3.D_DP = kcg_lit_int32(0);
  outC->_L3.V_RELEASEDP = kcg_lit_int32(0);
  outC->_L3.Q_OVERLAP = kcg_lit_int32(0);
  outC->_L3.D_STARTOL = kcg_lit_int32(0);
  outC->_L3.T_OL = kcg_lit_int32(0);
  outC->_L3.D_OL = kcg_lit_int32(0);
  outC->_L3.V_RELEASEOL = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.NID_PACKET = kcg_lit_int32(0);
  outC->_L2.Q_DIR = kcg_lit_int32(0);
  outC->_L2.L_PACKET = kcg_lit_int32(0);
  outC->_L2.Q_SCALE = kcg_lit_int32(0);
  outC->_L2.D_LINK = kcg_lit_int32(0);
  outC->_L2.Q_NEWCOUNTRY = kcg_lit_int32(0);
  outC->_L2.NID_C = kcg_lit_int32(0);
  outC->_L2.NID_BG = kcg_lit_int32(0);
  outC->_L2.Q_LINKORIENTATION = kcg_lit_int32(0);
  outC->_L2.Q_LINKREACTION = kcg_lit_int32(0);
  outC->_L2.Q_LOCACC = kcg_lit_int32(0);
  outC->_L2.N_ITER = kcg_lit_int32(0);
  for (idx36 = 0; idx36 < 32; idx36++) {
    outC->_L2.SECTIONS[idx36].D_LINK = kcg_lit_int32(0);
    outC->_L2.SECTIONS[idx36].Q_NEWCOUNTRY = kcg_lit_int32(0);
    outC->_L2.SECTIONS[idx36].NID_C = kcg_lit_int32(0);
    outC->_L2.SECTIONS[idx36].NID_BG = kcg_lit_int32(0);
    outC->_L2.SECTIONS[idx36].Q_LINKORIENTATION = kcg_lit_int32(0);
    outC->_L2.SECTIONS[idx36].Q_LINKREACTION = kcg_lit_int32(0);
    outC->_L2.SECTIONS[idx36].Q_LOCACC = kcg_lit_int32(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.NID_PACKET = kcg_lit_int32(0);
  outC->_L1.Q_DIR = kcg_lit_int32(0);
  outC->_L1.L_PACKET = kcg_lit_int32(0);
  outC->_L1.Q_SCALE = kcg_lit_int32(0);
  outC->_L1.D_VALIDNV = kcg_lit_int32(0);
  outC->_L1.N_ITER = kcg_lit_int32(0);
  for (idx37 = 0; idx37 < 32; idx37++) {
    outC->_L1.SECTIONS[idx37] = kcg_lit_int32(0);
  }
  outC->_L1.V_NVSHUNT = kcg_lit_int32(0);
  outC->_L1.V_NVSTFF = kcg_lit_int32(0);
  outC->_L1.V_NVONSIGHT = kcg_lit_int32(0);
  outC->_L1.V_NVUNFIT = kcg_lit_int32(0);
  outC->_L1.V_NVREL = kcg_lit_int32(0);
  outC->_L1.D_NVROLL = kcg_lit_int32(0);
  outC->_L1.Q_NVSRBKTRG = kcg_lit_int32(0);
  outC->_L1.Q_NVEMRRLS = kcg_lit_int32(0);
  outC->_L1.V_NVALLOWOVTRP = kcg_lit_int32(0);
  outC->_L1.V_NVSUPOVTRP = kcg_lit_int32(0);
  outC->_L1.D_NVOVTRP = kcg_lit_int32(0);
  outC->_L1.T_NVOVTRP = kcg_lit_int32(0);
  outC->_L1.D_NVPOTRP = kcg_lit_int32(0);
  outC->_L1.M_NVCONTACT = kcg_lit_int32(0);
  outC->_L1.T_NVCONTACT = kcg_lit_int32(0);
  outC->_L1.M_NVDERUN = kcg_lit_int32(0);
  outC->_L1.D_NVSTFF = kcg_lit_int32(0);
  outC->_L1.Q_NVDRIVER_ADHES = kcg_lit_int32(0);
  for (idx38 = 0; idx38 < 30; idx38++) {
    outC->RadioMessagePackets_3_4.PacketHeaders[idx38].nid_packet =
      kcg_lit_int32(0);
    outC->RadioMessagePackets_3_4.PacketHeaders[idx38].q_dir = Q_DIR_Reverse;
    outC->RadioMessagePackets_3_4.PacketHeaders[idx38].valid = kcg_true;
    outC->RadioMessagePackets_3_4.PacketHeaders[idx38].startAddress =
      kcg_lit_int32(0);
    outC->RadioMessagePackets_3_4.PacketHeaders[idx38].endAddress =
      kcg_lit_int32(0);
  }
  for (idx39 = 0; idx39 < 500; idx39++) {
    outC->RadioMessagePackets_3_4.PacketData[idx39] = kcg_lit_int32(0);
  }
  for (idx40 = 0; idx40 < 30; idx40++) {
    outC->RadioMessagePackets_2_3.PacketHeaders[idx40].nid_packet =
      kcg_lit_int32(0);
    outC->RadioMessagePackets_2_3.PacketHeaders[idx40].q_dir = Q_DIR_Reverse;
    outC->RadioMessagePackets_2_3.PacketHeaders[idx40].valid = kcg_true;
    outC->RadioMessagePackets_2_3.PacketHeaders[idx40].startAddress =
      kcg_lit_int32(0);
    outC->RadioMessagePackets_2_3.PacketHeaders[idx40].endAddress =
      kcg_lit_int32(0);
  }
  for (idx41 = 0; idx41 < 500; idx41++) {
    outC->RadioMessagePackets_2_3.PacketData[idx41] = kcg_lit_int32(0);
  }
  for (idx42 = 0; idx42 < 30; idx42++) {
    outC->RadioMessagePackets_1_2.PacketHeaders[idx42].nid_packet =
      kcg_lit_int32(0);
    outC->RadioMessagePackets_1_2.PacketHeaders[idx42].q_dir = Q_DIR_Reverse;
    outC->RadioMessagePackets_1_2.PacketHeaders[idx42].valid = kcg_true;
    outC->RadioMessagePackets_1_2.PacketHeaders[idx42].startAddress =
      kcg_lit_int32(0);
    outC->RadioMessagePackets_1_2.PacketHeaders[idx42].endAddress =
      kcg_lit_int32(0);
  }
  for (idx43 = 0; idx43 < 500; idx43++) {
    outC->RadioMessagePackets_1_2.PacketData[idx43] = kcg_lit_int32(0);
  }
  outC->every8 = kcg_true;
  outC->every7 = kcg_true;
  outC->every6 = kcg_true;
  outC->every5 = kcg_true;
  outC->every4 = kcg_true;
  outC->every3 = kcg_true;
  outC->every2 = kcg_true;
  outC->every1 = kcg_true;
  outC->every = kcg_true;
  outC->MessageOUT.Header.radioDevice = kcg_lit_int32(0);
  outC->MessageOUT.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->MessageOUT.Header.nid_message = kcg_lit_int32(0);
  outC->MessageOUT.Header.t_train = kcg_lit_int32(0);
  outC->MessageOUT.Header.m_ack = kcg_lit_int32(0);
  outC->MessageOUT.Header.nid_lrbg = kcg_lit_int32(0);
  outC->MessageOUT.Header.t_train_reference = kcg_lit_int32(0);
  outC->MessageOUT.Header.nid_em = kcg_lit_int32(0);
  outC->MessageOUT.Header.q_scale = kcg_lit_int32(0);
  outC->MessageOUT.Header.d_sr = kcg_lit_int32(0);
  outC->MessageOUT.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->MessageOUT.Header.d_ref = kcg_lit_int32(0);
  outC->MessageOUT.Header.q_dir = kcg_lit_int32(0);
  outC->MessageOUT.Header.d_emergencystop = kcg_lit_int32(0);
  outC->MessageOUT.Header.m_version = kcg_lit_int32(0);
  for (idx44 = 0; idx44 < 30; idx44++) {
    outC->MessageOUT.Messages.PacketHeaders[idx44].nid_packet = kcg_lit_int32(0);
    outC->MessageOUT.Messages.PacketHeaders[idx44].q_dir = Q_DIR_Reverse;
    outC->MessageOUT.Messages.PacketHeaders[idx44].valid = kcg_true;
    outC->MessageOUT.Messages.PacketHeaders[idx44].startAddress = kcg_lit_int32(0);
    outC->MessageOUT.Messages.PacketHeaders[idx44].endAddress = kcg_lit_int32(0);
  }
  for (idx45 = 0; idx45 < 500; idx45++) {
    outC->MessageOUT.Messages.PacketData[idx45] = kcg_lit_int32(0);
  }
  /* _L57=(TM_trackside::Write_P058#1)/ */
  Write_P058_init_TM_trackside(&outC->Context_Write_P058_1);
  /* _L60=(TM_trackside::Write_P042#1)/ */
  Write_P042_init_TM_trackside(&outC->Context_Write_P042_1);
  /* _L41=(TM_trackside::Write_P057#1)/ */
  Write_P057_init_TM_trackside(&outC->Context_Write_P057_1);
  /* _L46=(TM_trackside::Write_P042#2)/ */
  Write_P042_init_TM_trackside(&outC->Context_Write_P042_2);
  /* _L30=(TM_trackside_baseline2::Write_P027V1#1)/ */
  Write_P027V1_init_TM_trackside_baseline2(&outC->Context_Write_P027V1_1);
  /* _L25=(TM_trackside::Write_P021#1)/ */
  Write_P021_init_TM_trackside(&outC->Context_Write_P021_1);
  /* _L17=(TM_trackside::Write_P015#1)/ */
  Write_P015_init_TM_trackside(&outC->Context_Write_P015_1);
  /* _L12=(TM_trackside::Write_P005#1)/ */
  Write_P005_init_TM_trackside(&outC->Context_Write_P005_1);
  /* _L8=(TM_trackside_baseline2::Write_P003V1#1)/ */
  Write_P003V1_init_TM_trackside_baseline2(&outC->Context_Write_P003V1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void SEND_MergeRadioPackets_reset_RBC_SendMergeRadio_Pkg(
  outC_SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg *outC)
{
  /* _L57=(TM_trackside::Write_P058#1)/ */
  Write_P058_reset_TM_trackside(&outC->Context_Write_P058_1);
  /* _L60=(TM_trackside::Write_P042#1)/ */
  Write_P042_reset_TM_trackside(&outC->Context_Write_P042_1);
  /* _L41=(TM_trackside::Write_P057#1)/ */
  Write_P057_reset_TM_trackside(&outC->Context_Write_P057_1);
  /* _L46=(TM_trackside::Write_P042#2)/ */
  Write_P042_reset_TM_trackside(&outC->Context_Write_P042_2);
  /* _L30=(TM_trackside_baseline2::Write_P027V1#1)/ */
  Write_P027V1_reset_TM_trackside_baseline2(&outC->Context_Write_P027V1_1);
  /* _L25=(TM_trackside::Write_P021#1)/ */
  Write_P021_reset_TM_trackside(&outC->Context_Write_P021_1);
  /* _L17=(TM_trackside::Write_P015#1)/ */
  Write_P015_reset_TM_trackside(&outC->Context_Write_P015_1);
  /* _L12=(TM_trackside::Write_P005#1)/ */
  Write_P005_reset_TM_trackside(&outC->Context_Write_P005_1);
  /* _L8=(TM_trackside_baseline2::Write_P003V1#1)/ */
  Write_P003V1_reset_TM_trackside_baseline2(&outC->Context_Write_P003V1_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

