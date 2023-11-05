/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DetermineValidFlags_InformationFilter_Pkg_SecondFilter.h"

/* InformationFilter_Pkg::SecondFilter::DetermineValidFlags/ */
void DetermineValidFlags_InformationFilter_Pkg_SecondFilter(
  /* filterPacket/ */
  MetadataElement_T_Common_Types_Pkg *filterPacket,
  /* bufferPacket/ */
  MetadataElement_T_Common_Types_Pkg *bufferPacket,
  outC_DetermineValidFlags_InformationFilter_Pkg_SecondFilter *outC)
{
  static NID_PACKET noname;
  static kcg_int32 _1_noname;
  static kcg_int32 _2_noname;
  static Q_DIR _3_noname;

  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L1, bufferPacket);
  outC->_L5 = outC->_L1.valid;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L2, filterPacket);
  outC->_L10 = outC->_L2.valid;
  outC->_L14 = outC->_L10 | outC->_L5;
  outC->_L8 = outC->_L2.nid_packet;
  outC->_L9 = outC->_L2.q_dir;
  outC->_L11 = outC->_L2.startAddress;
  outC->_L12 = outC->_L2.endAddress;
  outC->_L13.nid_packet = outC->_L8;
  outC->_L13.q_dir = outC->_L9;
  outC->_L13.valid = outC->_L14;
  outC->_L13.startAddress = outC->_L11;
  outC->_L13.endAddress = outC->_L12;
  outC->_L4 = outC->_L1.q_dir;
  _3_noname = outC->_L4;
  outC->_L7 = outC->_L1.endAddress;
  _2_noname = outC->_L7;
  outC->_L6 = outC->_L1.startAddress;
  _1_noname = outC->_L6;
  outC->_L3 = outC->_L1.nid_packet;
  noname = outC->_L3;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->packet, &outC->_L13);
}

#ifndef KCG_USER_DEFINED_INIT
void DetermineValidFlags_init_InformationFilter_Pkg_SecondFilter(
  outC_DetermineValidFlags_InformationFilter_Pkg_SecondFilter *outC)
{
  outC->_L14 = kcg_true;
  outC->_L13.nid_packet = kcg_lit_int32(0);
  outC->_L13.q_dir = Q_DIR_Reverse;
  outC->_L13.valid = kcg_true;
  outC->_L13.startAddress = kcg_lit_int32(0);
  outC->_L13.endAddress = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_true;
  outC->_L9 = Q_DIR_Reverse;
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_true;
  outC->_L4 = Q_DIR_Reverse;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L1.nid_packet = kcg_lit_int32(0);
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.valid = kcg_true;
  outC->_L1.startAddress = kcg_lit_int32(0);
  outC->_L1.endAddress = kcg_lit_int32(0);
  outC->_L2.nid_packet = kcg_lit_int32(0);
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.valid = kcg_true;
  outC->_L2.startAddress = kcg_lit_int32(0);
  outC->_L2.endAddress = kcg_lit_int32(0);
  outC->packet.nid_packet = kcg_lit_int32(0);
  outC->packet.q_dir = Q_DIR_Reverse;
  outC->packet.valid = kcg_true;
  outC->packet.startAddress = kcg_lit_int32(0);
  outC->packet.endAddress = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DetermineValidFlags_reset_InformationFilter_Pkg_SecondFilter(
  outC_DetermineValidFlags_InformationFilter_Pkg_SecondFilter *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DetermineValidFlags_InformationFilter_Pkg_SecondFilter.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

