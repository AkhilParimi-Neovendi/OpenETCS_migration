/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SetValidFlag_InformationFilter_Pkg_Common.h"

/* InformationFilter_Pkg::Common::SetValidFlag/ */
void SetValidFlag_InformationFilter_Pkg_Common(
  /* inValidFlag/ */
  kcg_bool inValidFlag,
  /* inPacket/ */
  MetadataElement_T_Common_Types_Pkg *inPacket,
  outC_SetValidFlag_InformationFilter_Pkg_Common *outC)
{
  outC->_L1 = inValidFlag;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L2, inPacket);
  outC->_L6 = outC->_L2.valid;
  outC->_L9 = outC->_L6 & outC->_L1;
  outC->_L4 = outC->_L2.nid_packet;
  outC->_L5 = outC->_L2.q_dir;
  outC->_L8 = outC->_L2.startAddress;
  outC->_L7 = outC->_L2.endAddress;
  outC->_L3.nid_packet = outC->_L4;
  outC->_L3.q_dir = outC->_L5;
  outC->_L3.valid = outC->_L9;
  outC->_L3.startAddress = outC->_L8;
  outC->_L3.endAddress = outC->_L7;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->outPacket, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void SetValidFlag_init_InformationFilter_Pkg_Common(
  outC_SetValidFlag_InformationFilter_Pkg_Common *outC)
{
  outC->_L9 = kcg_true;
  outC->_L7 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L6 = kcg_true;
  outC->_L5 = Q_DIR_Reverse;
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3.nid_packet = kcg_lit_int32(0);
  outC->_L3.q_dir = Q_DIR_Reverse;
  outC->_L3.valid = kcg_true;
  outC->_L3.startAddress = kcg_lit_int32(0);
  outC->_L3.endAddress = kcg_lit_int32(0);
  outC->_L1 = kcg_true;
  outC->_L2.nid_packet = kcg_lit_int32(0);
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.valid = kcg_true;
  outC->_L2.startAddress = kcg_lit_int32(0);
  outC->_L2.endAddress = kcg_lit_int32(0);
  outC->outPacket.nid_packet = kcg_lit_int32(0);
  outC->outPacket.q_dir = Q_DIR_Reverse;
  outC->outPacket.valid = kcg_true;
  outC->outPacket.startAddress = kcg_lit_int32(0);
  outC->outPacket.endAddress = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SetValidFlag_reset_InformationFilter_Pkg_Common(
  outC_SetValidFlag_InformationFilter_Pkg_Common *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SetValidFlag_InformationFilter_Pkg_Common.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

