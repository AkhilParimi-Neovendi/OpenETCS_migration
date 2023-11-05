/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Packets_BG402_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises.h"

/* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402/ */
void Packets_BG402_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
  /* Header/ */
  BaliseTelegramHeader_int_T_TM *Header,
  /* Balise_data_in/ */
  B_data_internal_T_InfraLib *Balise_data_in,
  outC_Packets_BG402_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises *outC)
{
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L26, Balise_data_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L25, &outC->_L26.packets);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_in, &outC->_L25);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L22, &outC->B_data_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_10,
    &outC->_L22);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_10,
    &outC->B_data_in_No_Packet_10);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_10,
    &outC->_L1_No_Packet_10);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L11,
    &outC->B_data_out_No_Packet_10);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_1,
    &outC->_L11);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_1,
    &outC->B_data_in_No_Packet_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_1,
    &outC->_L1_No_Packet_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L2,
    &outC->B_data_out_No_Packet_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_2,
    &outC->_L2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_2,
    &outC->B_data_in_No_Packet_2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_2,
    &outC->_L1_No_Packet_2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L3,
    &outC->B_data_out_No_Packet_2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_3,
    &outC->_L3);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_3,
    &outC->B_data_in_No_Packet_3);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_3,
    &outC->_L1_No_Packet_3);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L4,
    &outC->B_data_out_No_Packet_3);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_4,
    &outC->_L4);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_4,
    &outC->B_data_in_No_Packet_4);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_4,
    &outC->_L1_No_Packet_4);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L5,
    &outC->B_data_out_No_Packet_4);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_5,
    &outC->_L5);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_5,
    &outC->B_data_in_No_Packet_5);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_5,
    &outC->_L1_No_Packet_5);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L6,
    &outC->B_data_out_No_Packet_5);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_6,
    &outC->_L6);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_6,
    &outC->B_data_in_No_Packet_6);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_6,
    &outC->_L1_No_Packet_6);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L7,
    &outC->B_data_out_No_Packet_6);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_7,
    &outC->_L7);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_7,
    &outC->B_data_in_No_Packet_7);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_7,
    &outC->_L1_No_Packet_7);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L8,
    &outC->B_data_out_No_Packet_7);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_8,
    &outC->_L8);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_8,
    &outC->B_data_in_No_Packet_8);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_8,
    &outC->_L1_No_Packet_8);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L9,
    &outC->B_data_out_No_Packet_8);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_9,
    &outC->_L9);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_9,
    &outC->B_data_in_No_Packet_9);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_9,
    &outC->_L1_No_Packet_9);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L10,
    &outC->B_data_out_No_Packet_9);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_link, &outC->_L10);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L24, &outC->B_data_link);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_15,
    &outC->_L24);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_15,
    &outC->B_data_in_No_Packet_15);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_15,
    &outC->_L1_No_Packet_15);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L16,
    &outC->B_data_out_No_Packet_15);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_20,
    &outC->_L16);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_20,
    &outC->B_data_in_No_Packet_20);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_20,
    &outC->_L1_No_Packet_20);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L21,
    &outC->B_data_out_No_Packet_20);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_14,
    &outC->_L21);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_14,
    &outC->B_data_in_No_Packet_14);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_14,
    &outC->_L1_No_Packet_14);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L15,
    &outC->B_data_out_No_Packet_14);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_18,
    &outC->_L15);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_18,
    &outC->B_data_in_No_Packet_18);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_18,
    &outC->_L1_No_Packet_18);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L19,
    &outC->B_data_out_No_Packet_18);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_12,
    &outC->_L19);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_12,
    &outC->B_data_in_No_Packet_12);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_12,
    &outC->_L1_No_Packet_12);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L13,
    &outC->B_data_out_No_Packet_12);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_16,
    &outC->_L13);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_16,
    &outC->B_data_in_No_Packet_16);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_16,
    &outC->_L1_No_Packet_16);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L17,
    &outC->B_data_out_No_Packet_16);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_19,
    &outC->_L17);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_19,
    &outC->B_data_in_No_Packet_19);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_19,
    &outC->_L1_No_Packet_19);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L20,
    &outC->B_data_out_No_Packet_19);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_13,
    &outC->_L20);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_13,
    &outC->B_data_in_No_Packet_13);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_13,
    &outC->_L1_No_Packet_13);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L14,
    &outC->B_data_out_No_Packet_13);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_17,
    &outC->_L14);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_17,
    &outC->B_data_in_No_Packet_17);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_17,
    &outC->_L1_No_Packet_17);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L18,
    &outC->B_data_out_No_Packet_17);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_in_No_Packet_11,
    &outC->_L18);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L1_No_Packet_11,
    &outC->B_data_in_No_Packet_11);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->B_data_out_No_Packet_11,
    &outC->_L1_No_Packet_11);
  outC->_L33 = kcg_true;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L12,
    &outC->B_data_out_No_Packet_11);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_out, &outC->_L12);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L30, &outC->B_data_out);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L28, Header);
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L29, &outC->_L26);
  if (kcg_true) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L29.header, &outC->_L28);
  }
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L31, &outC->_L29);
  if (kcg_true) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L31.packets, &outC->_L30);
  }
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L32, &outC->_L31);
  if (kcg_true) {
    outC->_L32.balise_passed = outC->_L33;
  }
  kcg_copy_B_data_internal_T_InfraLib(&outC->Balise_data_out, &outC->_L32);
}

#ifndef KCG_USER_DEFINED_INIT
void Packets_BG402_init_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
  outC_Packets_BG402_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises *outC)
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
  kcg_size idx45;
  kcg_size idx46;
  kcg_size idx47;
  kcg_size idx48;
  kcg_size idx49;
  kcg_size idx50;
  kcg_size idx51;
  kcg_size idx52;
  kcg_size idx53;
  kcg_size idx54;
  kcg_size idx55;
  kcg_size idx56;
  kcg_size idx57;
  kcg_size idx58;
  kcg_size idx59;
  kcg_size idx60;
  kcg_size idx61;
  kcg_size idx62;
  kcg_size idx63;
  kcg_size idx64;
  kcg_size idx65;
  kcg_size idx66;
  kcg_size idx67;
  kcg_size idx68;
  kcg_size idx69;
  kcg_size idx70;
  kcg_size idx71;
  kcg_size idx72;
  kcg_size idx73;
  kcg_size idx74;
  kcg_size idx75;
  kcg_size idx76;
  kcg_size idx77;
  kcg_size idx78;
  kcg_size idx79;
  kcg_size idx80;
  kcg_size idx81;
  kcg_size idx82;
  kcg_size idx83;
  kcg_size idx84;
  kcg_size idx85;
  kcg_size idx86;
  kcg_size idx87;
  kcg_size idx88;
  kcg_size idx89;
  kcg_size idx90;
  kcg_size idx91;
  kcg_size idx92;
  kcg_size idx93;
  kcg_size idx94;
  kcg_size idx95;
  kcg_size idx96;
  kcg_size idx97;
  kcg_size idx98;
  kcg_size idx99;
  kcg_size idx100;
  kcg_size idx101;
  kcg_size idx102;
  kcg_size idx103;
  kcg_size idx104;
  kcg_size idx105;
  kcg_size idx106;
  kcg_size idx107;
  kcg_size idx108;
  kcg_size idx109;
  kcg_size idx110;
  kcg_size idx111;
  kcg_size idx112;
  kcg_size idx113;
  kcg_size idx114;
  kcg_size idx115;
  kcg_size idx116;
  kcg_size idx117;
  kcg_size idx118;
  kcg_size idx119;
  kcg_size idx120;
  kcg_size idx121;
  kcg_size idx122;
  kcg_size idx123;
  kcg_size idx124;
  kcg_size idx125;
  kcg_size idx126;
  kcg_size idx127;
  kcg_size idx128;
  kcg_size idx129;
  kcg_size idx130;
  kcg_size idx131;
  kcg_size idx132;
  kcg_size idx133;
  kcg_size idx134;
  kcg_size idx135;
  kcg_size idx136;
  kcg_size idx137;
  kcg_size idx138;
  kcg_size idx139;
  kcg_size idx140;
  kcg_size idx141;
  kcg_size idx142;
  kcg_size idx143;
  kcg_size idx144;
  kcg_size idx145;
  kcg_size idx146;
  kcg_size idx147;
  kcg_size idx148;
  kcg_size idx149;
  kcg_size idx150;
  kcg_size idx151;
  kcg_size idx152;
  kcg_size idx153;
  kcg_size idx154;
  kcg_size idx155;
  kcg_size idx156;
  kcg_size idx157;
  kcg_size idx158;
  kcg_size idx159;
  kcg_size idx160;
  kcg_size idx161;
  kcg_size idx162;
  kcg_size idx163;
  kcg_size idx164;
  kcg_size idx165;
  kcg_size idx166;
  kcg_size idx167;
  kcg_size idx168;
  kcg_size idx169;
  kcg_size idx170;
  kcg_size idx171;
  kcg_size idx172;
  kcg_size idx173;
  kcg_size idx174;
  kcg_size idx175;
  kcg_size idx176;
  kcg_size idx177;
  kcg_size idx178;
  kcg_size idx179;
  kcg_size idx180;
  kcg_size idx181;
  kcg_size idx182;
  kcg_size idx183;

  outC->_L33 = kcg_true;
  outC->_L32.header.q_updown = kcg_lit_int32(0);
  outC->_L32.header.m_version = kcg_lit_int32(0);
  outC->_L32.header.q_media = kcg_lit_int32(0);
  outC->_L32.header.n_pig = kcg_lit_int32(0);
  outC->_L32.header.n_total = kcg_lit_int32(0);
  outC->_L32.header.m_dup = kcg_lit_int32(0);
  outC->_L32.header.m_mcount = kcg_lit_int32(0);
  outC->_L32.header.nid_c = kcg_lit_int32(0);
  outC->_L32.header.nid_bg = kcg_lit_int32(0);
  outC->_L32.header.q_link = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L32.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L32.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L32.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L32.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L32.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L32.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L32.engineering_BG_location = kcg_lit_int32(0);
  outC->_L32.TrainPos = kcg_lit_float32(0.0);
  outC->_L32.pig_nom_0 = kcg_lit_int32(0);
  outC->_L32.balise_passed = kcg_true;
  outC->_L31.header.q_updown = kcg_lit_int32(0);
  outC->_L31.header.m_version = kcg_lit_int32(0);
  outC->_L31.header.q_media = kcg_lit_int32(0);
  outC->_L31.header.n_pig = kcg_lit_int32(0);
  outC->_L31.header.n_total = kcg_lit_int32(0);
  outC->_L31.header.m_dup = kcg_lit_int32(0);
  outC->_L31.header.m_mcount = kcg_lit_int32(0);
  outC->_L31.header.nid_c = kcg_lit_int32(0);
  outC->_L31.header.nid_bg = kcg_lit_int32(0);
  outC->_L31.header.q_link = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L31.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L31.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L31.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L31.packets.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L31.packets.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L31.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L31.engineering_BG_location = kcg_lit_int32(0);
  outC->_L31.TrainPos = kcg_lit_float32(0.0);
  outC->_L31.pig_nom_0 = kcg_lit_int32(0);
  outC->_L31.balise_passed = kcg_true;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L30.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L30.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L30.PacketHeaders[idx4].valid = kcg_true;
    outC->_L30.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L30.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L30.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L29.header.q_updown = kcg_lit_int32(0);
  outC->_L29.header.m_version = kcg_lit_int32(0);
  outC->_L29.header.q_media = kcg_lit_int32(0);
  outC->_L29.header.n_pig = kcg_lit_int32(0);
  outC->_L29.header.n_total = kcg_lit_int32(0);
  outC->_L29.header.m_dup = kcg_lit_int32(0);
  outC->_L29.header.m_mcount = kcg_lit_int32(0);
  outC->_L29.header.nid_c = kcg_lit_int32(0);
  outC->_L29.header.nid_bg = kcg_lit_int32(0);
  outC->_L29.header.q_link = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L29.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L29.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L29.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L29.packets.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L29.packets.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L29.packets.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->_L29.engineering_BG_location = kcg_lit_int32(0);
  outC->_L29.TrainPos = kcg_lit_float32(0.0);
  outC->_L29.pig_nom_0 = kcg_lit_int32(0);
  outC->_L29.balise_passed = kcg_true;
  outC->_L28.q_updown = kcg_lit_int32(0);
  outC->_L28.m_version = kcg_lit_int32(0);
  outC->_L28.q_media = kcg_lit_int32(0);
  outC->_L28.n_pig = kcg_lit_int32(0);
  outC->_L28.n_total = kcg_lit_int32(0);
  outC->_L28.m_dup = kcg_lit_int32(0);
  outC->_L28.m_mcount = kcg_lit_int32(0);
  outC->_L28.nid_c = kcg_lit_int32(0);
  outC->_L28.nid_bg = kcg_lit_int32(0);
  outC->_L28.q_link = kcg_lit_int32(0);
  outC->_L26.header.q_updown = kcg_lit_int32(0);
  outC->_L26.header.m_version = kcg_lit_int32(0);
  outC->_L26.header.q_media = kcg_lit_int32(0);
  outC->_L26.header.n_pig = kcg_lit_int32(0);
  outC->_L26.header.n_total = kcg_lit_int32(0);
  outC->_L26.header.m_dup = kcg_lit_int32(0);
  outC->_L26.header.m_mcount = kcg_lit_int32(0);
  outC->_L26.header.nid_c = kcg_lit_int32(0);
  outC->_L26.header.nid_bg = kcg_lit_int32(0);
  outC->_L26.header.q_link = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L26.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L26.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L26.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L26.packets.PacketHeaders[idx8].startAddress = kcg_lit_int32(0);
    outC->_L26.packets.PacketHeaders[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L26.packets.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->_L26.engineering_BG_location = kcg_lit_int32(0);
  outC->_L26.TrainPos = kcg_lit_float32(0.0);
  outC->_L26.pig_nom_0 = kcg_lit_int32(0);
  outC->_L26.balise_passed = kcg_true;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L25.PacketHeaders[idx10].nid_packet = kcg_lit_int32(0);
    outC->_L25.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L25.PacketHeaders[idx10].valid = kcg_true;
    outC->_L25.PacketHeaders[idx10].startAddress = kcg_lit_int32(0);
    outC->_L25.PacketHeaders[idx10].endAddress = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L25.PacketData[idx11] = kcg_lit_int32(0);
  }
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L24.PacketHeaders[idx12].nid_packet = kcg_lit_int32(0);
    outC->_L24.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L24.PacketHeaders[idx12].valid = kcg_true;
    outC->_L24.PacketHeaders[idx12].startAddress = kcg_lit_int32(0);
    outC->_L24.PacketHeaders[idx12].endAddress = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L24.PacketData[idx13] = kcg_lit_int32(0);
  }
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L22.PacketHeaders[idx14].nid_packet = kcg_lit_int32(0);
    outC->_L22.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L22.PacketHeaders[idx14].valid = kcg_true;
    outC->_L22.PacketHeaders[idx14].startAddress = kcg_lit_int32(0);
    outC->_L22.PacketHeaders[idx14].endAddress = kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L22.PacketData[idx15] = kcg_lit_int32(0);
  }
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L12.PacketHeaders[idx16].nid_packet = kcg_lit_int32(0);
    outC->_L12.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->_L12.PacketHeaders[idx16].valid = kcg_true;
    outC->_L12.PacketHeaders[idx16].startAddress = kcg_lit_int32(0);
    outC->_L12.PacketHeaders[idx16].endAddress = kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L12.PacketData[idx17] = kcg_lit_int32(0);
  }
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->_L13.PacketHeaders[idx18].nid_packet = kcg_lit_int32(0);
    outC->_L13.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->_L13.PacketHeaders[idx18].valid = kcg_true;
    outC->_L13.PacketHeaders[idx18].startAddress = kcg_lit_int32(0);
    outC->_L13.PacketHeaders[idx18].endAddress = kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->_L13.PacketData[idx19] = kcg_lit_int32(0);
  }
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L14.PacketHeaders[idx20].nid_packet = kcg_lit_int32(0);
    outC->_L14.PacketHeaders[idx20].q_dir = Q_DIR_Reverse;
    outC->_L14.PacketHeaders[idx20].valid = kcg_true;
    outC->_L14.PacketHeaders[idx20].startAddress = kcg_lit_int32(0);
    outC->_L14.PacketHeaders[idx20].endAddress = kcg_lit_int32(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->_L14.PacketData[idx21] = kcg_lit_int32(0);
  }
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->_L15.PacketHeaders[idx22].nid_packet = kcg_lit_int32(0);
    outC->_L15.PacketHeaders[idx22].q_dir = Q_DIR_Reverse;
    outC->_L15.PacketHeaders[idx22].valid = kcg_true;
    outC->_L15.PacketHeaders[idx22].startAddress = kcg_lit_int32(0);
    outC->_L15.PacketHeaders[idx22].endAddress = kcg_lit_int32(0);
  }
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->_L15.PacketData[idx23] = kcg_lit_int32(0);
  }
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L16.PacketHeaders[idx24].nid_packet = kcg_lit_int32(0);
    outC->_L16.PacketHeaders[idx24].q_dir = Q_DIR_Reverse;
    outC->_L16.PacketHeaders[idx24].valid = kcg_true;
    outC->_L16.PacketHeaders[idx24].startAddress = kcg_lit_int32(0);
    outC->_L16.PacketHeaders[idx24].endAddress = kcg_lit_int32(0);
  }
  for (idx25 = 0; idx25 < 500; idx25++) {
    outC->_L16.PacketData[idx25] = kcg_lit_int32(0);
  }
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L17.PacketHeaders[idx26].nid_packet = kcg_lit_int32(0);
    outC->_L17.PacketHeaders[idx26].q_dir = Q_DIR_Reverse;
    outC->_L17.PacketHeaders[idx26].valid = kcg_true;
    outC->_L17.PacketHeaders[idx26].startAddress = kcg_lit_int32(0);
    outC->_L17.PacketHeaders[idx26].endAddress = kcg_lit_int32(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->_L17.PacketData[idx27] = kcg_lit_int32(0);
  }
  for (idx28 = 0; idx28 < 30; idx28++) {
    outC->_L18.PacketHeaders[idx28].nid_packet = kcg_lit_int32(0);
    outC->_L18.PacketHeaders[idx28].q_dir = Q_DIR_Reverse;
    outC->_L18.PacketHeaders[idx28].valid = kcg_true;
    outC->_L18.PacketHeaders[idx28].startAddress = kcg_lit_int32(0);
    outC->_L18.PacketHeaders[idx28].endAddress = kcg_lit_int32(0);
  }
  for (idx29 = 0; idx29 < 500; idx29++) {
    outC->_L18.PacketData[idx29] = kcg_lit_int32(0);
  }
  for (idx30 = 0; idx30 < 30; idx30++) {
    outC->_L19.PacketHeaders[idx30].nid_packet = kcg_lit_int32(0);
    outC->_L19.PacketHeaders[idx30].q_dir = Q_DIR_Reverse;
    outC->_L19.PacketHeaders[idx30].valid = kcg_true;
    outC->_L19.PacketHeaders[idx30].startAddress = kcg_lit_int32(0);
    outC->_L19.PacketHeaders[idx30].endAddress = kcg_lit_int32(0);
  }
  for (idx31 = 0; idx31 < 500; idx31++) {
    outC->_L19.PacketData[idx31] = kcg_lit_int32(0);
  }
  for (idx32 = 0; idx32 < 30; idx32++) {
    outC->_L20.PacketHeaders[idx32].nid_packet = kcg_lit_int32(0);
    outC->_L20.PacketHeaders[idx32].q_dir = Q_DIR_Reverse;
    outC->_L20.PacketHeaders[idx32].valid = kcg_true;
    outC->_L20.PacketHeaders[idx32].startAddress = kcg_lit_int32(0);
    outC->_L20.PacketHeaders[idx32].endAddress = kcg_lit_int32(0);
  }
  for (idx33 = 0; idx33 < 500; idx33++) {
    outC->_L20.PacketData[idx33] = kcg_lit_int32(0);
  }
  for (idx34 = 0; idx34 < 30; idx34++) {
    outC->_L21.PacketHeaders[idx34].nid_packet = kcg_lit_int32(0);
    outC->_L21.PacketHeaders[idx34].q_dir = Q_DIR_Reverse;
    outC->_L21.PacketHeaders[idx34].valid = kcg_true;
    outC->_L21.PacketHeaders[idx34].startAddress = kcg_lit_int32(0);
    outC->_L21.PacketHeaders[idx34].endAddress = kcg_lit_int32(0);
  }
  for (idx35 = 0; idx35 < 500; idx35++) {
    outC->_L21.PacketData[idx35] = kcg_lit_int32(0);
  }
  for (idx36 = 0; idx36 < 30; idx36++) {
    outC->_L11.PacketHeaders[idx36].nid_packet = kcg_lit_int32(0);
    outC->_L11.PacketHeaders[idx36].q_dir = Q_DIR_Reverse;
    outC->_L11.PacketHeaders[idx36].valid = kcg_true;
    outC->_L11.PacketHeaders[idx36].startAddress = kcg_lit_int32(0);
    outC->_L11.PacketHeaders[idx36].endAddress = kcg_lit_int32(0);
  }
  for (idx37 = 0; idx37 < 500; idx37++) {
    outC->_L11.PacketData[idx37] = kcg_lit_int32(0);
  }
  for (idx38 = 0; idx38 < 30; idx38++) {
    outC->_L10.PacketHeaders[idx38].nid_packet = kcg_lit_int32(0);
    outC->_L10.PacketHeaders[idx38].q_dir = Q_DIR_Reverse;
    outC->_L10.PacketHeaders[idx38].valid = kcg_true;
    outC->_L10.PacketHeaders[idx38].startAddress = kcg_lit_int32(0);
    outC->_L10.PacketHeaders[idx38].endAddress = kcg_lit_int32(0);
  }
  for (idx39 = 0; idx39 < 500; idx39++) {
    outC->_L10.PacketData[idx39] = kcg_lit_int32(0);
  }
  for (idx40 = 0; idx40 < 30; idx40++) {
    outC->_L9.PacketHeaders[idx40].nid_packet = kcg_lit_int32(0);
    outC->_L9.PacketHeaders[idx40].q_dir = Q_DIR_Reverse;
    outC->_L9.PacketHeaders[idx40].valid = kcg_true;
    outC->_L9.PacketHeaders[idx40].startAddress = kcg_lit_int32(0);
    outC->_L9.PacketHeaders[idx40].endAddress = kcg_lit_int32(0);
  }
  for (idx41 = 0; idx41 < 500; idx41++) {
    outC->_L9.PacketData[idx41] = kcg_lit_int32(0);
  }
  for (idx42 = 0; idx42 < 30; idx42++) {
    outC->_L8.PacketHeaders[idx42].nid_packet = kcg_lit_int32(0);
    outC->_L8.PacketHeaders[idx42].q_dir = Q_DIR_Reverse;
    outC->_L8.PacketHeaders[idx42].valid = kcg_true;
    outC->_L8.PacketHeaders[idx42].startAddress = kcg_lit_int32(0);
    outC->_L8.PacketHeaders[idx42].endAddress = kcg_lit_int32(0);
  }
  for (idx43 = 0; idx43 < 500; idx43++) {
    outC->_L8.PacketData[idx43] = kcg_lit_int32(0);
  }
  for (idx44 = 0; idx44 < 30; idx44++) {
    outC->_L7.PacketHeaders[idx44].nid_packet = kcg_lit_int32(0);
    outC->_L7.PacketHeaders[idx44].q_dir = Q_DIR_Reverse;
    outC->_L7.PacketHeaders[idx44].valid = kcg_true;
    outC->_L7.PacketHeaders[idx44].startAddress = kcg_lit_int32(0);
    outC->_L7.PacketHeaders[idx44].endAddress = kcg_lit_int32(0);
  }
  for (idx45 = 0; idx45 < 500; idx45++) {
    outC->_L7.PacketData[idx45] = kcg_lit_int32(0);
  }
  for (idx46 = 0; idx46 < 30; idx46++) {
    outC->_L6.PacketHeaders[idx46].nid_packet = kcg_lit_int32(0);
    outC->_L6.PacketHeaders[idx46].q_dir = Q_DIR_Reverse;
    outC->_L6.PacketHeaders[idx46].valid = kcg_true;
    outC->_L6.PacketHeaders[idx46].startAddress = kcg_lit_int32(0);
    outC->_L6.PacketHeaders[idx46].endAddress = kcg_lit_int32(0);
  }
  for (idx47 = 0; idx47 < 500; idx47++) {
    outC->_L6.PacketData[idx47] = kcg_lit_int32(0);
  }
  for (idx48 = 0; idx48 < 30; idx48++) {
    outC->_L5.PacketHeaders[idx48].nid_packet = kcg_lit_int32(0);
    outC->_L5.PacketHeaders[idx48].q_dir = Q_DIR_Reverse;
    outC->_L5.PacketHeaders[idx48].valid = kcg_true;
    outC->_L5.PacketHeaders[idx48].startAddress = kcg_lit_int32(0);
    outC->_L5.PacketHeaders[idx48].endAddress = kcg_lit_int32(0);
  }
  for (idx49 = 0; idx49 < 500; idx49++) {
    outC->_L5.PacketData[idx49] = kcg_lit_int32(0);
  }
  for (idx50 = 0; idx50 < 30; idx50++) {
    outC->_L4.PacketHeaders[idx50].nid_packet = kcg_lit_int32(0);
    outC->_L4.PacketHeaders[idx50].q_dir = Q_DIR_Reverse;
    outC->_L4.PacketHeaders[idx50].valid = kcg_true;
    outC->_L4.PacketHeaders[idx50].startAddress = kcg_lit_int32(0);
    outC->_L4.PacketHeaders[idx50].endAddress = kcg_lit_int32(0);
  }
  for (idx51 = 0; idx51 < 500; idx51++) {
    outC->_L4.PacketData[idx51] = kcg_lit_int32(0);
  }
  for (idx52 = 0; idx52 < 30; idx52++) {
    outC->_L3.PacketHeaders[idx52].nid_packet = kcg_lit_int32(0);
    outC->_L3.PacketHeaders[idx52].q_dir = Q_DIR_Reverse;
    outC->_L3.PacketHeaders[idx52].valid = kcg_true;
    outC->_L3.PacketHeaders[idx52].startAddress = kcg_lit_int32(0);
    outC->_L3.PacketHeaders[idx52].endAddress = kcg_lit_int32(0);
  }
  for (idx53 = 0; idx53 < 500; idx53++) {
    outC->_L3.PacketData[idx53] = kcg_lit_int32(0);
  }
  for (idx54 = 0; idx54 < 30; idx54++) {
    outC->_L2.PacketHeaders[idx54].nid_packet = kcg_lit_int32(0);
    outC->_L2.PacketHeaders[idx54].q_dir = Q_DIR_Reverse;
    outC->_L2.PacketHeaders[idx54].valid = kcg_true;
    outC->_L2.PacketHeaders[idx54].startAddress = kcg_lit_int32(0);
    outC->_L2.PacketHeaders[idx54].endAddress = kcg_lit_int32(0);
  }
  for (idx55 = 0; idx55 < 500; idx55++) {
    outC->_L2.PacketData[idx55] = kcg_lit_int32(0);
  }
  for (idx56 = 0; idx56 < 30; idx56++) {
    outC->B_data_link.PacketHeaders[idx56].nid_packet = kcg_lit_int32(0);
    outC->B_data_link.PacketHeaders[idx56].q_dir = Q_DIR_Reverse;
    outC->B_data_link.PacketHeaders[idx56].valid = kcg_true;
    outC->B_data_link.PacketHeaders[idx56].startAddress = kcg_lit_int32(0);
    outC->B_data_link.PacketHeaders[idx56].endAddress = kcg_lit_int32(0);
  }
  for (idx57 = 0; idx57 < 500; idx57++) {
    outC->B_data_link.PacketData[idx57] = kcg_lit_int32(0);
  }
  for (idx58 = 0; idx58 < 30; idx58++) {
    outC->B_data_out.PacketHeaders[idx58].nid_packet = kcg_lit_int32(0);
    outC->B_data_out.PacketHeaders[idx58].q_dir = Q_DIR_Reverse;
    outC->B_data_out.PacketHeaders[idx58].valid = kcg_true;
    outC->B_data_out.PacketHeaders[idx58].startAddress = kcg_lit_int32(0);
    outC->B_data_out.PacketHeaders[idx58].endAddress = kcg_lit_int32(0);
  }
  for (idx59 = 0; idx59 < 500; idx59++) {
    outC->B_data_out.PacketData[idx59] = kcg_lit_int32(0);
  }
  for (idx60 = 0; idx60 < 30; idx60++) {
    outC->B_data_in.PacketHeaders[idx60].nid_packet = kcg_lit_int32(0);
    outC->B_data_in.PacketHeaders[idx60].q_dir = Q_DIR_Reverse;
    outC->B_data_in.PacketHeaders[idx60].valid = kcg_true;
    outC->B_data_in.PacketHeaders[idx60].startAddress = kcg_lit_int32(0);
    outC->B_data_in.PacketHeaders[idx60].endAddress = kcg_lit_int32(0);
  }
  for (idx61 = 0; idx61 < 500; idx61++) {
    outC->B_data_in.PacketData[idx61] = kcg_lit_int32(0);
  }
  for (idx62 = 0; idx62 < 30; idx62++) {
    outC->_L1_No_Packet_20.PacketHeaders[idx62].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_20.PacketHeaders[idx62].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_20.PacketHeaders[idx62].valid = kcg_true;
    outC->_L1_No_Packet_20.PacketHeaders[idx62].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_20.PacketHeaders[idx62].endAddress = kcg_lit_int32(0);
  }
  for (idx63 = 0; idx63 < 500; idx63++) {
    outC->_L1_No_Packet_20.PacketData[idx63] = kcg_lit_int32(0);
  }
  for (idx64 = 0; idx64 < 30; idx64++) {
    outC->B_data_in_No_Packet_20.PacketHeaders[idx64].nid_packet = kcg_lit_int32(0);
    outC->B_data_in_No_Packet_20.PacketHeaders[idx64].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_20.PacketHeaders[idx64].valid = kcg_true;
    outC->B_data_in_No_Packet_20.PacketHeaders[idx64].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_20.PacketHeaders[idx64].endAddress = kcg_lit_int32(0);
  }
  for (idx65 = 0; idx65 < 500; idx65++) {
    outC->B_data_in_No_Packet_20.PacketData[idx65] = kcg_lit_int32(0);
  }
  for (idx66 = 0; idx66 < 30; idx66++) {
    outC->B_data_out_No_Packet_20.PacketHeaders[idx66].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_20.PacketHeaders[idx66].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_20.PacketHeaders[idx66].valid = kcg_true;
    outC->B_data_out_No_Packet_20.PacketHeaders[idx66].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_20.PacketHeaders[idx66].endAddress =
      kcg_lit_int32(0);
  }
  for (idx67 = 0; idx67 < 500; idx67++) {
    outC->B_data_out_No_Packet_20.PacketData[idx67] = kcg_lit_int32(0);
  }
  for (idx68 = 0; idx68 < 30; idx68++) {
    outC->_L1_No_Packet_19.PacketHeaders[idx68].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_19.PacketHeaders[idx68].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_19.PacketHeaders[idx68].valid = kcg_true;
    outC->_L1_No_Packet_19.PacketHeaders[idx68].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_19.PacketHeaders[idx68].endAddress = kcg_lit_int32(0);
  }
  for (idx69 = 0; idx69 < 500; idx69++) {
    outC->_L1_No_Packet_19.PacketData[idx69] = kcg_lit_int32(0);
  }
  for (idx70 = 0; idx70 < 30; idx70++) {
    outC->B_data_in_No_Packet_19.PacketHeaders[idx70].nid_packet = kcg_lit_int32(0);
    outC->B_data_in_No_Packet_19.PacketHeaders[idx70].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_19.PacketHeaders[idx70].valid = kcg_true;
    outC->B_data_in_No_Packet_19.PacketHeaders[idx70].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_19.PacketHeaders[idx70].endAddress = kcg_lit_int32(0);
  }
  for (idx71 = 0; idx71 < 500; idx71++) {
    outC->B_data_in_No_Packet_19.PacketData[idx71] = kcg_lit_int32(0);
  }
  for (idx72 = 0; idx72 < 30; idx72++) {
    outC->B_data_out_No_Packet_19.PacketHeaders[idx72].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_19.PacketHeaders[idx72].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_19.PacketHeaders[idx72].valid = kcg_true;
    outC->B_data_out_No_Packet_19.PacketHeaders[idx72].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_19.PacketHeaders[idx72].endAddress =
      kcg_lit_int32(0);
  }
  for (idx73 = 0; idx73 < 500; idx73++) {
    outC->B_data_out_No_Packet_19.PacketData[idx73] = kcg_lit_int32(0);
  }
  for (idx74 = 0; idx74 < 30; idx74++) {
    outC->_L1_No_Packet_18.PacketHeaders[idx74].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_18.PacketHeaders[idx74].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_18.PacketHeaders[idx74].valid = kcg_true;
    outC->_L1_No_Packet_18.PacketHeaders[idx74].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_18.PacketHeaders[idx74].endAddress = kcg_lit_int32(0);
  }
  for (idx75 = 0; idx75 < 500; idx75++) {
    outC->_L1_No_Packet_18.PacketData[idx75] = kcg_lit_int32(0);
  }
  for (idx76 = 0; idx76 < 30; idx76++) {
    outC->B_data_in_No_Packet_18.PacketHeaders[idx76].nid_packet = kcg_lit_int32(0);
    outC->B_data_in_No_Packet_18.PacketHeaders[idx76].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_18.PacketHeaders[idx76].valid = kcg_true;
    outC->B_data_in_No_Packet_18.PacketHeaders[idx76].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_18.PacketHeaders[idx76].endAddress = kcg_lit_int32(0);
  }
  for (idx77 = 0; idx77 < 500; idx77++) {
    outC->B_data_in_No_Packet_18.PacketData[idx77] = kcg_lit_int32(0);
  }
  for (idx78 = 0; idx78 < 30; idx78++) {
    outC->B_data_out_No_Packet_18.PacketHeaders[idx78].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_18.PacketHeaders[idx78].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_18.PacketHeaders[idx78].valid = kcg_true;
    outC->B_data_out_No_Packet_18.PacketHeaders[idx78].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_18.PacketHeaders[idx78].endAddress =
      kcg_lit_int32(0);
  }
  for (idx79 = 0; idx79 < 500; idx79++) {
    outC->B_data_out_No_Packet_18.PacketData[idx79] = kcg_lit_int32(0);
  }
  for (idx80 = 0; idx80 < 30; idx80++) {
    outC->_L1_No_Packet_17.PacketHeaders[idx80].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_17.PacketHeaders[idx80].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_17.PacketHeaders[idx80].valid = kcg_true;
    outC->_L1_No_Packet_17.PacketHeaders[idx80].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_17.PacketHeaders[idx80].endAddress = kcg_lit_int32(0);
  }
  for (idx81 = 0; idx81 < 500; idx81++) {
    outC->_L1_No_Packet_17.PacketData[idx81] = kcg_lit_int32(0);
  }
  for (idx82 = 0; idx82 < 30; idx82++) {
    outC->B_data_in_No_Packet_17.PacketHeaders[idx82].nid_packet = kcg_lit_int32(0);
    outC->B_data_in_No_Packet_17.PacketHeaders[idx82].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_17.PacketHeaders[idx82].valid = kcg_true;
    outC->B_data_in_No_Packet_17.PacketHeaders[idx82].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_17.PacketHeaders[idx82].endAddress = kcg_lit_int32(0);
  }
  for (idx83 = 0; idx83 < 500; idx83++) {
    outC->B_data_in_No_Packet_17.PacketData[idx83] = kcg_lit_int32(0);
  }
  for (idx84 = 0; idx84 < 30; idx84++) {
    outC->B_data_out_No_Packet_17.PacketHeaders[idx84].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_17.PacketHeaders[idx84].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_17.PacketHeaders[idx84].valid = kcg_true;
    outC->B_data_out_No_Packet_17.PacketHeaders[idx84].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_17.PacketHeaders[idx84].endAddress =
      kcg_lit_int32(0);
  }
  for (idx85 = 0; idx85 < 500; idx85++) {
    outC->B_data_out_No_Packet_17.PacketData[idx85] = kcg_lit_int32(0);
  }
  for (idx86 = 0; idx86 < 30; idx86++) {
    outC->_L1_No_Packet_16.PacketHeaders[idx86].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_16.PacketHeaders[idx86].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_16.PacketHeaders[idx86].valid = kcg_true;
    outC->_L1_No_Packet_16.PacketHeaders[idx86].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_16.PacketHeaders[idx86].endAddress = kcg_lit_int32(0);
  }
  for (idx87 = 0; idx87 < 500; idx87++) {
    outC->_L1_No_Packet_16.PacketData[idx87] = kcg_lit_int32(0);
  }
  for (idx88 = 0; idx88 < 30; idx88++) {
    outC->B_data_in_No_Packet_16.PacketHeaders[idx88].nid_packet = kcg_lit_int32(0);
    outC->B_data_in_No_Packet_16.PacketHeaders[idx88].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_16.PacketHeaders[idx88].valid = kcg_true;
    outC->B_data_in_No_Packet_16.PacketHeaders[idx88].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_16.PacketHeaders[idx88].endAddress = kcg_lit_int32(0);
  }
  for (idx89 = 0; idx89 < 500; idx89++) {
    outC->B_data_in_No_Packet_16.PacketData[idx89] = kcg_lit_int32(0);
  }
  for (idx90 = 0; idx90 < 30; idx90++) {
    outC->B_data_out_No_Packet_16.PacketHeaders[idx90].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_16.PacketHeaders[idx90].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_16.PacketHeaders[idx90].valid = kcg_true;
    outC->B_data_out_No_Packet_16.PacketHeaders[idx90].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_16.PacketHeaders[idx90].endAddress =
      kcg_lit_int32(0);
  }
  for (idx91 = 0; idx91 < 500; idx91++) {
    outC->B_data_out_No_Packet_16.PacketData[idx91] = kcg_lit_int32(0);
  }
  for (idx92 = 0; idx92 < 30; idx92++) {
    outC->_L1_No_Packet_15.PacketHeaders[idx92].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_15.PacketHeaders[idx92].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_15.PacketHeaders[idx92].valid = kcg_true;
    outC->_L1_No_Packet_15.PacketHeaders[idx92].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_15.PacketHeaders[idx92].endAddress = kcg_lit_int32(0);
  }
  for (idx93 = 0; idx93 < 500; idx93++) {
    outC->_L1_No_Packet_15.PacketData[idx93] = kcg_lit_int32(0);
  }
  for (idx94 = 0; idx94 < 30; idx94++) {
    outC->B_data_in_No_Packet_15.PacketHeaders[idx94].nid_packet = kcg_lit_int32(0);
    outC->B_data_in_No_Packet_15.PacketHeaders[idx94].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_15.PacketHeaders[idx94].valid = kcg_true;
    outC->B_data_in_No_Packet_15.PacketHeaders[idx94].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_15.PacketHeaders[idx94].endAddress = kcg_lit_int32(0);
  }
  for (idx95 = 0; idx95 < 500; idx95++) {
    outC->B_data_in_No_Packet_15.PacketData[idx95] = kcg_lit_int32(0);
  }
  for (idx96 = 0; idx96 < 30; idx96++) {
    outC->B_data_out_No_Packet_15.PacketHeaders[idx96].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_15.PacketHeaders[idx96].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_15.PacketHeaders[idx96].valid = kcg_true;
    outC->B_data_out_No_Packet_15.PacketHeaders[idx96].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_15.PacketHeaders[idx96].endAddress =
      kcg_lit_int32(0);
  }
  for (idx97 = 0; idx97 < 500; idx97++) {
    outC->B_data_out_No_Packet_15.PacketData[idx97] = kcg_lit_int32(0);
  }
  for (idx98 = 0; idx98 < 30; idx98++) {
    outC->_L1_No_Packet_14.PacketHeaders[idx98].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_14.PacketHeaders[idx98].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_14.PacketHeaders[idx98].valid = kcg_true;
    outC->_L1_No_Packet_14.PacketHeaders[idx98].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_14.PacketHeaders[idx98].endAddress = kcg_lit_int32(0);
  }
  for (idx99 = 0; idx99 < 500; idx99++) {
    outC->_L1_No_Packet_14.PacketData[idx99] = kcg_lit_int32(0);
  }
  for (idx100 = 0; idx100 < 30; idx100++) {
    outC->B_data_in_No_Packet_14.PacketHeaders[idx100].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_14.PacketHeaders[idx100].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_14.PacketHeaders[idx100].valid = kcg_true;
    outC->B_data_in_No_Packet_14.PacketHeaders[idx100].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_14.PacketHeaders[idx100].endAddress =
      kcg_lit_int32(0);
  }
  for (idx101 = 0; idx101 < 500; idx101++) {
    outC->B_data_in_No_Packet_14.PacketData[idx101] = kcg_lit_int32(0);
  }
  for (idx102 = 0; idx102 < 30; idx102++) {
    outC->B_data_out_No_Packet_14.PacketHeaders[idx102].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_14.PacketHeaders[idx102].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_14.PacketHeaders[idx102].valid = kcg_true;
    outC->B_data_out_No_Packet_14.PacketHeaders[idx102].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_14.PacketHeaders[idx102].endAddress =
      kcg_lit_int32(0);
  }
  for (idx103 = 0; idx103 < 500; idx103++) {
    outC->B_data_out_No_Packet_14.PacketData[idx103] = kcg_lit_int32(0);
  }
  for (idx104 = 0; idx104 < 30; idx104++) {
    outC->_L1_No_Packet_13.PacketHeaders[idx104].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_13.PacketHeaders[idx104].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_13.PacketHeaders[idx104].valid = kcg_true;
    outC->_L1_No_Packet_13.PacketHeaders[idx104].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_13.PacketHeaders[idx104].endAddress = kcg_lit_int32(0);
  }
  for (idx105 = 0; idx105 < 500; idx105++) {
    outC->_L1_No_Packet_13.PacketData[idx105] = kcg_lit_int32(0);
  }
  for (idx106 = 0; idx106 < 30; idx106++) {
    outC->B_data_in_No_Packet_13.PacketHeaders[idx106].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_13.PacketHeaders[idx106].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_13.PacketHeaders[idx106].valid = kcg_true;
    outC->B_data_in_No_Packet_13.PacketHeaders[idx106].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_13.PacketHeaders[idx106].endAddress =
      kcg_lit_int32(0);
  }
  for (idx107 = 0; idx107 < 500; idx107++) {
    outC->B_data_in_No_Packet_13.PacketData[idx107] = kcg_lit_int32(0);
  }
  for (idx108 = 0; idx108 < 30; idx108++) {
    outC->B_data_out_No_Packet_13.PacketHeaders[idx108].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_13.PacketHeaders[idx108].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_13.PacketHeaders[idx108].valid = kcg_true;
    outC->B_data_out_No_Packet_13.PacketHeaders[idx108].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_13.PacketHeaders[idx108].endAddress =
      kcg_lit_int32(0);
  }
  for (idx109 = 0; idx109 < 500; idx109++) {
    outC->B_data_out_No_Packet_13.PacketData[idx109] = kcg_lit_int32(0);
  }
  for (idx110 = 0; idx110 < 30; idx110++) {
    outC->_L1_No_Packet_12.PacketHeaders[idx110].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_12.PacketHeaders[idx110].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_12.PacketHeaders[idx110].valid = kcg_true;
    outC->_L1_No_Packet_12.PacketHeaders[idx110].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_12.PacketHeaders[idx110].endAddress = kcg_lit_int32(0);
  }
  for (idx111 = 0; idx111 < 500; idx111++) {
    outC->_L1_No_Packet_12.PacketData[idx111] = kcg_lit_int32(0);
  }
  for (idx112 = 0; idx112 < 30; idx112++) {
    outC->B_data_in_No_Packet_12.PacketHeaders[idx112].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_12.PacketHeaders[idx112].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_12.PacketHeaders[idx112].valid = kcg_true;
    outC->B_data_in_No_Packet_12.PacketHeaders[idx112].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_12.PacketHeaders[idx112].endAddress =
      kcg_lit_int32(0);
  }
  for (idx113 = 0; idx113 < 500; idx113++) {
    outC->B_data_in_No_Packet_12.PacketData[idx113] = kcg_lit_int32(0);
  }
  for (idx114 = 0; idx114 < 30; idx114++) {
    outC->B_data_out_No_Packet_12.PacketHeaders[idx114].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_12.PacketHeaders[idx114].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_12.PacketHeaders[idx114].valid = kcg_true;
    outC->B_data_out_No_Packet_12.PacketHeaders[idx114].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_12.PacketHeaders[idx114].endAddress =
      kcg_lit_int32(0);
  }
  for (idx115 = 0; idx115 < 500; idx115++) {
    outC->B_data_out_No_Packet_12.PacketData[idx115] = kcg_lit_int32(0);
  }
  for (idx116 = 0; idx116 < 30; idx116++) {
    outC->_L1_No_Packet_11.PacketHeaders[idx116].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_11.PacketHeaders[idx116].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_11.PacketHeaders[idx116].valid = kcg_true;
    outC->_L1_No_Packet_11.PacketHeaders[idx116].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_11.PacketHeaders[idx116].endAddress = kcg_lit_int32(0);
  }
  for (idx117 = 0; idx117 < 500; idx117++) {
    outC->_L1_No_Packet_11.PacketData[idx117] = kcg_lit_int32(0);
  }
  for (idx118 = 0; idx118 < 30; idx118++) {
    outC->B_data_in_No_Packet_11.PacketHeaders[idx118].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_11.PacketHeaders[idx118].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_11.PacketHeaders[idx118].valid = kcg_true;
    outC->B_data_in_No_Packet_11.PacketHeaders[idx118].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_11.PacketHeaders[idx118].endAddress =
      kcg_lit_int32(0);
  }
  for (idx119 = 0; idx119 < 500; idx119++) {
    outC->B_data_in_No_Packet_11.PacketData[idx119] = kcg_lit_int32(0);
  }
  for (idx120 = 0; idx120 < 30; idx120++) {
    outC->B_data_out_No_Packet_11.PacketHeaders[idx120].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_11.PacketHeaders[idx120].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_11.PacketHeaders[idx120].valid = kcg_true;
    outC->B_data_out_No_Packet_11.PacketHeaders[idx120].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_11.PacketHeaders[idx120].endAddress =
      kcg_lit_int32(0);
  }
  for (idx121 = 0; idx121 < 500; idx121++) {
    outC->B_data_out_No_Packet_11.PacketData[idx121] = kcg_lit_int32(0);
  }
  for (idx122 = 0; idx122 < 30; idx122++) {
    outC->_L1_No_Packet_10.PacketHeaders[idx122].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_10.PacketHeaders[idx122].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_10.PacketHeaders[idx122].valid = kcg_true;
    outC->_L1_No_Packet_10.PacketHeaders[idx122].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_10.PacketHeaders[idx122].endAddress = kcg_lit_int32(0);
  }
  for (idx123 = 0; idx123 < 500; idx123++) {
    outC->_L1_No_Packet_10.PacketData[idx123] = kcg_lit_int32(0);
  }
  for (idx124 = 0; idx124 < 30; idx124++) {
    outC->B_data_in_No_Packet_10.PacketHeaders[idx124].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_10.PacketHeaders[idx124].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_10.PacketHeaders[idx124].valid = kcg_true;
    outC->B_data_in_No_Packet_10.PacketHeaders[idx124].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_10.PacketHeaders[idx124].endAddress =
      kcg_lit_int32(0);
  }
  for (idx125 = 0; idx125 < 500; idx125++) {
    outC->B_data_in_No_Packet_10.PacketData[idx125] = kcg_lit_int32(0);
  }
  for (idx126 = 0; idx126 < 30; idx126++) {
    outC->B_data_out_No_Packet_10.PacketHeaders[idx126].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_10.PacketHeaders[idx126].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_10.PacketHeaders[idx126].valid = kcg_true;
    outC->B_data_out_No_Packet_10.PacketHeaders[idx126].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_10.PacketHeaders[idx126].endAddress =
      kcg_lit_int32(0);
  }
  for (idx127 = 0; idx127 < 500; idx127++) {
    outC->B_data_out_No_Packet_10.PacketData[idx127] = kcg_lit_int32(0);
  }
  for (idx128 = 0; idx128 < 30; idx128++) {
    outC->_L1_No_Packet_9.PacketHeaders[idx128].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_9.PacketHeaders[idx128].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_9.PacketHeaders[idx128].valid = kcg_true;
    outC->_L1_No_Packet_9.PacketHeaders[idx128].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_9.PacketHeaders[idx128].endAddress = kcg_lit_int32(0);
  }
  for (idx129 = 0; idx129 < 500; idx129++) {
    outC->_L1_No_Packet_9.PacketData[idx129] = kcg_lit_int32(0);
  }
  for (idx130 = 0; idx130 < 30; idx130++) {
    outC->B_data_in_No_Packet_9.PacketHeaders[idx130].nid_packet = kcg_lit_int32(0);
    outC->B_data_in_No_Packet_9.PacketHeaders[idx130].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_9.PacketHeaders[idx130].valid = kcg_true;
    outC->B_data_in_No_Packet_9.PacketHeaders[idx130].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_9.PacketHeaders[idx130].endAddress = kcg_lit_int32(0);
  }
  for (idx131 = 0; idx131 < 500; idx131++) {
    outC->B_data_in_No_Packet_9.PacketData[idx131] = kcg_lit_int32(0);
  }
  for (idx132 = 0; idx132 < 30; idx132++) {
    outC->B_data_out_No_Packet_9.PacketHeaders[idx132].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_9.PacketHeaders[idx132].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_9.PacketHeaders[idx132].valid = kcg_true;
    outC->B_data_out_No_Packet_9.PacketHeaders[idx132].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_9.PacketHeaders[idx132].endAddress =
      kcg_lit_int32(0);
  }
  for (idx133 = 0; idx133 < 500; idx133++) {
    outC->B_data_out_No_Packet_9.PacketData[idx133] = kcg_lit_int32(0);
  }
  for (idx134 = 0; idx134 < 30; idx134++) {
    outC->_L1_No_Packet_8.PacketHeaders[idx134].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_8.PacketHeaders[idx134].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_8.PacketHeaders[idx134].valid = kcg_true;
    outC->_L1_No_Packet_8.PacketHeaders[idx134].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_8.PacketHeaders[idx134].endAddress = kcg_lit_int32(0);
  }
  for (idx135 = 0; idx135 < 500; idx135++) {
    outC->_L1_No_Packet_8.PacketData[idx135] = kcg_lit_int32(0);
  }
  for (idx136 = 0; idx136 < 30; idx136++) {
    outC->B_data_in_No_Packet_8.PacketHeaders[idx136].nid_packet = kcg_lit_int32(0);
    outC->B_data_in_No_Packet_8.PacketHeaders[idx136].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_8.PacketHeaders[idx136].valid = kcg_true;
    outC->B_data_in_No_Packet_8.PacketHeaders[idx136].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_8.PacketHeaders[idx136].endAddress = kcg_lit_int32(0);
  }
  for (idx137 = 0; idx137 < 500; idx137++) {
    outC->B_data_in_No_Packet_8.PacketData[idx137] = kcg_lit_int32(0);
  }
  for (idx138 = 0; idx138 < 30; idx138++) {
    outC->B_data_out_No_Packet_8.PacketHeaders[idx138].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_8.PacketHeaders[idx138].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_8.PacketHeaders[idx138].valid = kcg_true;
    outC->B_data_out_No_Packet_8.PacketHeaders[idx138].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_8.PacketHeaders[idx138].endAddress =
      kcg_lit_int32(0);
  }
  for (idx139 = 0; idx139 < 500; idx139++) {
    outC->B_data_out_No_Packet_8.PacketData[idx139] = kcg_lit_int32(0);
  }
  for (idx140 = 0; idx140 < 30; idx140++) {
    outC->_L1_No_Packet_7.PacketHeaders[idx140].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_7.PacketHeaders[idx140].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_7.PacketHeaders[idx140].valid = kcg_true;
    outC->_L1_No_Packet_7.PacketHeaders[idx140].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_7.PacketHeaders[idx140].endAddress = kcg_lit_int32(0);
  }
  for (idx141 = 0; idx141 < 500; idx141++) {
    outC->_L1_No_Packet_7.PacketData[idx141] = kcg_lit_int32(0);
  }
  for (idx142 = 0; idx142 < 30; idx142++) {
    outC->B_data_in_No_Packet_7.PacketHeaders[idx142].nid_packet = kcg_lit_int32(0);
    outC->B_data_in_No_Packet_7.PacketHeaders[idx142].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_7.PacketHeaders[idx142].valid = kcg_true;
    outC->B_data_in_No_Packet_7.PacketHeaders[idx142].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_7.PacketHeaders[idx142].endAddress = kcg_lit_int32(0);
  }
  for (idx143 = 0; idx143 < 500; idx143++) {
    outC->B_data_in_No_Packet_7.PacketData[idx143] = kcg_lit_int32(0);
  }
  for (idx144 = 0; idx144 < 30; idx144++) {
    outC->B_data_out_No_Packet_7.PacketHeaders[idx144].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_7.PacketHeaders[idx144].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_7.PacketHeaders[idx144].valid = kcg_true;
    outC->B_data_out_No_Packet_7.PacketHeaders[idx144].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_7.PacketHeaders[idx144].endAddress =
      kcg_lit_int32(0);
  }
  for (idx145 = 0; idx145 < 500; idx145++) {
    outC->B_data_out_No_Packet_7.PacketData[idx145] = kcg_lit_int32(0);
  }
  for (idx146 = 0; idx146 < 30; idx146++) {
    outC->_L1_No_Packet_6.PacketHeaders[idx146].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_6.PacketHeaders[idx146].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_6.PacketHeaders[idx146].valid = kcg_true;
    outC->_L1_No_Packet_6.PacketHeaders[idx146].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_6.PacketHeaders[idx146].endAddress = kcg_lit_int32(0);
  }
  for (idx147 = 0; idx147 < 500; idx147++) {
    outC->_L1_No_Packet_6.PacketData[idx147] = kcg_lit_int32(0);
  }
  for (idx148 = 0; idx148 < 30; idx148++) {
    outC->B_data_in_No_Packet_6.PacketHeaders[idx148].nid_packet = kcg_lit_int32(0);
    outC->B_data_in_No_Packet_6.PacketHeaders[idx148].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_6.PacketHeaders[idx148].valid = kcg_true;
    outC->B_data_in_No_Packet_6.PacketHeaders[idx148].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_6.PacketHeaders[idx148].endAddress = kcg_lit_int32(0);
  }
  for (idx149 = 0; idx149 < 500; idx149++) {
    outC->B_data_in_No_Packet_6.PacketData[idx149] = kcg_lit_int32(0);
  }
  for (idx150 = 0; idx150 < 30; idx150++) {
    outC->B_data_out_No_Packet_6.PacketHeaders[idx150].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_6.PacketHeaders[idx150].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_6.PacketHeaders[idx150].valid = kcg_true;
    outC->B_data_out_No_Packet_6.PacketHeaders[idx150].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_6.PacketHeaders[idx150].endAddress =
      kcg_lit_int32(0);
  }
  for (idx151 = 0; idx151 < 500; idx151++) {
    outC->B_data_out_No_Packet_6.PacketData[idx151] = kcg_lit_int32(0);
  }
  for (idx152 = 0; idx152 < 30; idx152++) {
    outC->_L1_No_Packet_5.PacketHeaders[idx152].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_5.PacketHeaders[idx152].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_5.PacketHeaders[idx152].valid = kcg_true;
    outC->_L1_No_Packet_5.PacketHeaders[idx152].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_5.PacketHeaders[idx152].endAddress = kcg_lit_int32(0);
  }
  for (idx153 = 0; idx153 < 500; idx153++) {
    outC->_L1_No_Packet_5.PacketData[idx153] = kcg_lit_int32(0);
  }
  for (idx154 = 0; idx154 < 30; idx154++) {
    outC->B_data_in_No_Packet_5.PacketHeaders[idx154].nid_packet = kcg_lit_int32(0);
    outC->B_data_in_No_Packet_5.PacketHeaders[idx154].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_5.PacketHeaders[idx154].valid = kcg_true;
    outC->B_data_in_No_Packet_5.PacketHeaders[idx154].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_5.PacketHeaders[idx154].endAddress = kcg_lit_int32(0);
  }
  for (idx155 = 0; idx155 < 500; idx155++) {
    outC->B_data_in_No_Packet_5.PacketData[idx155] = kcg_lit_int32(0);
  }
  for (idx156 = 0; idx156 < 30; idx156++) {
    outC->B_data_out_No_Packet_5.PacketHeaders[idx156].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_5.PacketHeaders[idx156].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_5.PacketHeaders[idx156].valid = kcg_true;
    outC->B_data_out_No_Packet_5.PacketHeaders[idx156].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_5.PacketHeaders[idx156].endAddress =
      kcg_lit_int32(0);
  }
  for (idx157 = 0; idx157 < 500; idx157++) {
    outC->B_data_out_No_Packet_5.PacketData[idx157] = kcg_lit_int32(0);
  }
  for (idx158 = 0; idx158 < 30; idx158++) {
    outC->_L1_No_Packet_4.PacketHeaders[idx158].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_4.PacketHeaders[idx158].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_4.PacketHeaders[idx158].valid = kcg_true;
    outC->_L1_No_Packet_4.PacketHeaders[idx158].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_4.PacketHeaders[idx158].endAddress = kcg_lit_int32(0);
  }
  for (idx159 = 0; idx159 < 500; idx159++) {
    outC->_L1_No_Packet_4.PacketData[idx159] = kcg_lit_int32(0);
  }
  for (idx160 = 0; idx160 < 30; idx160++) {
    outC->B_data_in_No_Packet_4.PacketHeaders[idx160].nid_packet = kcg_lit_int32(0);
    outC->B_data_in_No_Packet_4.PacketHeaders[idx160].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_4.PacketHeaders[idx160].valid = kcg_true;
    outC->B_data_in_No_Packet_4.PacketHeaders[idx160].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_4.PacketHeaders[idx160].endAddress = kcg_lit_int32(0);
  }
  for (idx161 = 0; idx161 < 500; idx161++) {
    outC->B_data_in_No_Packet_4.PacketData[idx161] = kcg_lit_int32(0);
  }
  for (idx162 = 0; idx162 < 30; idx162++) {
    outC->B_data_out_No_Packet_4.PacketHeaders[idx162].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_4.PacketHeaders[idx162].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_4.PacketHeaders[idx162].valid = kcg_true;
    outC->B_data_out_No_Packet_4.PacketHeaders[idx162].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_4.PacketHeaders[idx162].endAddress =
      kcg_lit_int32(0);
  }
  for (idx163 = 0; idx163 < 500; idx163++) {
    outC->B_data_out_No_Packet_4.PacketData[idx163] = kcg_lit_int32(0);
  }
  for (idx164 = 0; idx164 < 30; idx164++) {
    outC->_L1_No_Packet_3.PacketHeaders[idx164].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_3.PacketHeaders[idx164].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_3.PacketHeaders[idx164].valid = kcg_true;
    outC->_L1_No_Packet_3.PacketHeaders[idx164].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_3.PacketHeaders[idx164].endAddress = kcg_lit_int32(0);
  }
  for (idx165 = 0; idx165 < 500; idx165++) {
    outC->_L1_No_Packet_3.PacketData[idx165] = kcg_lit_int32(0);
  }
  for (idx166 = 0; idx166 < 30; idx166++) {
    outC->B_data_in_No_Packet_3.PacketHeaders[idx166].nid_packet = kcg_lit_int32(0);
    outC->B_data_in_No_Packet_3.PacketHeaders[idx166].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_3.PacketHeaders[idx166].valid = kcg_true;
    outC->B_data_in_No_Packet_3.PacketHeaders[idx166].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_3.PacketHeaders[idx166].endAddress = kcg_lit_int32(0);
  }
  for (idx167 = 0; idx167 < 500; idx167++) {
    outC->B_data_in_No_Packet_3.PacketData[idx167] = kcg_lit_int32(0);
  }
  for (idx168 = 0; idx168 < 30; idx168++) {
    outC->B_data_out_No_Packet_3.PacketHeaders[idx168].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_3.PacketHeaders[idx168].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_3.PacketHeaders[idx168].valid = kcg_true;
    outC->B_data_out_No_Packet_3.PacketHeaders[idx168].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_3.PacketHeaders[idx168].endAddress =
      kcg_lit_int32(0);
  }
  for (idx169 = 0; idx169 < 500; idx169++) {
    outC->B_data_out_No_Packet_3.PacketData[idx169] = kcg_lit_int32(0);
  }
  for (idx170 = 0; idx170 < 30; idx170++) {
    outC->_L1_No_Packet_2.PacketHeaders[idx170].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_2.PacketHeaders[idx170].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_2.PacketHeaders[idx170].valid = kcg_true;
    outC->_L1_No_Packet_2.PacketHeaders[idx170].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_2.PacketHeaders[idx170].endAddress = kcg_lit_int32(0);
  }
  for (idx171 = 0; idx171 < 500; idx171++) {
    outC->_L1_No_Packet_2.PacketData[idx171] = kcg_lit_int32(0);
  }
  for (idx172 = 0; idx172 < 30; idx172++) {
    outC->B_data_in_No_Packet_2.PacketHeaders[idx172].nid_packet = kcg_lit_int32(0);
    outC->B_data_in_No_Packet_2.PacketHeaders[idx172].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_2.PacketHeaders[idx172].valid = kcg_true;
    outC->B_data_in_No_Packet_2.PacketHeaders[idx172].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_2.PacketHeaders[idx172].endAddress = kcg_lit_int32(0);
  }
  for (idx173 = 0; idx173 < 500; idx173++) {
    outC->B_data_in_No_Packet_2.PacketData[idx173] = kcg_lit_int32(0);
  }
  for (idx174 = 0; idx174 < 30; idx174++) {
    outC->B_data_out_No_Packet_2.PacketHeaders[idx174].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_2.PacketHeaders[idx174].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_2.PacketHeaders[idx174].valid = kcg_true;
    outC->B_data_out_No_Packet_2.PacketHeaders[idx174].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_2.PacketHeaders[idx174].endAddress =
      kcg_lit_int32(0);
  }
  for (idx175 = 0; idx175 < 500; idx175++) {
    outC->B_data_out_No_Packet_2.PacketData[idx175] = kcg_lit_int32(0);
  }
  for (idx176 = 0; idx176 < 30; idx176++) {
    outC->_L1_No_Packet_1.PacketHeaders[idx176].nid_packet = kcg_lit_int32(0);
    outC->_L1_No_Packet_1.PacketHeaders[idx176].q_dir = Q_DIR_Reverse;
    outC->_L1_No_Packet_1.PacketHeaders[idx176].valid = kcg_true;
    outC->_L1_No_Packet_1.PacketHeaders[idx176].startAddress = kcg_lit_int32(0);
    outC->_L1_No_Packet_1.PacketHeaders[idx176].endAddress = kcg_lit_int32(0);
  }
  for (idx177 = 0; idx177 < 500; idx177++) {
    outC->_L1_No_Packet_1.PacketData[idx177] = kcg_lit_int32(0);
  }
  for (idx178 = 0; idx178 < 30; idx178++) {
    outC->B_data_in_No_Packet_1.PacketHeaders[idx178].nid_packet = kcg_lit_int32(0);
    outC->B_data_in_No_Packet_1.PacketHeaders[idx178].q_dir = Q_DIR_Reverse;
    outC->B_data_in_No_Packet_1.PacketHeaders[idx178].valid = kcg_true;
    outC->B_data_in_No_Packet_1.PacketHeaders[idx178].startAddress =
      kcg_lit_int32(0);
    outC->B_data_in_No_Packet_1.PacketHeaders[idx178].endAddress = kcg_lit_int32(0);
  }
  for (idx179 = 0; idx179 < 500; idx179++) {
    outC->B_data_in_No_Packet_1.PacketData[idx179] = kcg_lit_int32(0);
  }
  for (idx180 = 0; idx180 < 30; idx180++) {
    outC->B_data_out_No_Packet_1.PacketHeaders[idx180].nid_packet =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_1.PacketHeaders[idx180].q_dir = Q_DIR_Reverse;
    outC->B_data_out_No_Packet_1.PacketHeaders[idx180].valid = kcg_true;
    outC->B_data_out_No_Packet_1.PacketHeaders[idx180].startAddress =
      kcg_lit_int32(0);
    outC->B_data_out_No_Packet_1.PacketHeaders[idx180].endAddress =
      kcg_lit_int32(0);
  }
  for (idx181 = 0; idx181 < 500; idx181++) {
    outC->B_data_out_No_Packet_1.PacketData[idx181] = kcg_lit_int32(0);
  }
  outC->Balise_data_out.header.q_updown = kcg_lit_int32(0);
  outC->Balise_data_out.header.m_version = kcg_lit_int32(0);
  outC->Balise_data_out.header.q_media = kcg_lit_int32(0);
  outC->Balise_data_out.header.n_pig = kcg_lit_int32(0);
  outC->Balise_data_out.header.n_total = kcg_lit_int32(0);
  outC->Balise_data_out.header.m_dup = kcg_lit_int32(0);
  outC->Balise_data_out.header.m_mcount = kcg_lit_int32(0);
  outC->Balise_data_out.header.nid_c = kcg_lit_int32(0);
  outC->Balise_data_out.header.nid_bg = kcg_lit_int32(0);
  outC->Balise_data_out.header.q_link = kcg_lit_int32(0);
  for (idx182 = 0; idx182 < 30; idx182++) {
    outC->Balise_data_out.packets.PacketHeaders[idx182].nid_packet =
      kcg_lit_int32(0);
    outC->Balise_data_out.packets.PacketHeaders[idx182].q_dir = Q_DIR_Reverse;
    outC->Balise_data_out.packets.PacketHeaders[idx182].valid = kcg_true;
    outC->Balise_data_out.packets.PacketHeaders[idx182].startAddress =
      kcg_lit_int32(0);
    outC->Balise_data_out.packets.PacketHeaders[idx182].endAddress =
      kcg_lit_int32(0);
  }
  for (idx183 = 0; idx183 < 500; idx183++) {
    outC->Balise_data_out.packets.PacketData[idx183] = kcg_lit_int32(0);
  }
  outC->Balise_data_out.engineering_BG_location = kcg_lit_int32(0);
  outC->Balise_data_out.TrainPos = kcg_lit_float32(0.0);
  outC->Balise_data_out.pig_nom_0 = kcg_lit_int32(0);
  outC->Balise_data_out.balise_passed = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Packets_BG402_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
  outC_Packets_BG402_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Packets_BG402_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises.c
** Generation date: 2023-09-12T13:45:52
*************************************************************$ */

