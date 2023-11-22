/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P005_TM.h"

/* TM::Read_P005/ */
void Read_P005_TM(
  /* Message_IN/ */
  CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P005_TM *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L6, Message_IN);
  /* _L5=(TM_lib_internal::RECV_ReadPackets#1)/ */
  RECV_ReadPackets_TM_lib_internal(
    &outC->_L6,
    kcg_lit_int32(5032000),
    kcg_true,
    kcg_false,
    &outC->Context_RECV_ReadPackets_1);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L5,
    &outC->Context_RECV_ReadPackets_1.Data);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L30,
    &outC->Context_RECV_ReadPackets_1.Metadata);
  outC->_L167 = outC->Context_RECV_ReadPackets_1.received;
  outC->received = outC->_L167;
  /* _L166=(TM_conversions::C_P005_compr_onboard#3)/ */
  C_P005_compr_onboard_TM_conversions(
    &outC->_L5,
    &outC->_L30,
    &outC->Context_C_P005_compr_onboard_3);
  kcg_copy_P005_OBU_T_TM(
    &outC->_L166,
    &outC->Context_C_P005_compr_onboard_3.P005_onboard);
  kcg_copy_P005_OBU_T_TM(&outC->P005_OBU_out, &outC->_L166);
}

#ifndef KCG_USER_DEFINED_INIT
void Read_P005_init_TM(outC_Read_P005_TM *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;

  outC->_L167 = kcg_true;
  outC->_L166.valid = kcg_true;
  outC->_L166.q_dir = Q_DIR_Reverse;
  outC->_L166.l_packet = kcg_lit_int32(0);
  outC->_L166.q_scale = Q_SCALE_10_cm_scale;
  outC->_L166.n_iter = kcg_lit_int32(0);
  for (idx = 0; idx < 33; idx++) {
    outC->_L166.sections[idx].valid = kcg_true;
    outC->_L166.sections[idx].d_link = kcg_lit_int32(0);
    outC->_L166.sections[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L166.sections[idx].nid_c = kcg_lit_int32(0);
    outC->_L166.sections[idx].nid_bg = kcg_lit_int32(0);
    outC->_L166.sections[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L166.sections[idx].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L166.sections[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L30.nid_packet = kcg_lit_int32(0);
  outC->_L30.q_dir = Q_DIR_Reverse;
  outC->_L30.valid = kcg_true;
  outC->_L30.startAddress = kcg_lit_int32(0);
  outC->_L30.endAddress = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L6.PacketHeaders[idx1].nid_packet = kcg_lit_int32(0);
    outC->_L6.PacketHeaders[idx1].q_dir = Q_DIR_Reverse;
    outC->_L6.PacketHeaders[idx1].valid = kcg_true;
    outC->_L6.PacketHeaders[idx1].startAddress = kcg_lit_int32(0);
    outC->_L6.PacketHeaders[idx1].endAddress = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L6.PacketData[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L5[idx3] = kcg_lit_int32(0);
  }
  outC->P005_OBU_out.valid = kcg_true;
  outC->P005_OBU_out.q_dir = Q_DIR_Reverse;
  outC->P005_OBU_out.l_packet = kcg_lit_int32(0);
  outC->P005_OBU_out.q_scale = Q_SCALE_10_cm_scale;
  outC->P005_OBU_out.n_iter = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->P005_OBU_out.sections[idx4].valid = kcg_true;
    outC->P005_OBU_out.sections[idx4].d_link = kcg_lit_int32(0);
    outC->P005_OBU_out.sections[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->P005_OBU_out.sections[idx4].nid_c = kcg_lit_int32(0);
    outC->P005_OBU_out.sections[idx4].nid_bg = kcg_lit_int32(0);
    outC->P005_OBU_out.sections[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->P005_OBU_out.sections[idx4].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->P005_OBU_out.sections[idx4].q_locacc = kcg_lit_int32(0);
  }
  outC->received = kcg_true;
  /* _L166=(TM_conversions::C_P005_compr_onboard#3)/ */
  C_P005_compr_onboard_init_TM_conversions(
    &outC->Context_C_P005_compr_onboard_3);
  /* _L5=(TM_lib_internal::RECV_ReadPackets#1)/ */
  RECV_ReadPackets_init_TM_lib_internal(&outC->Context_RECV_ReadPackets_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Read_P005_reset_TM(outC_Read_P005_TM *outC)
{
  /* _L166=(TM_conversions::C_P005_compr_onboard#3)/ */
  C_P005_compr_onboard_reset_TM_conversions(
    &outC->Context_C_P005_compr_onboard_3);
  /* _L5=(TM_lib_internal::RECV_ReadPackets#1)/ */
  RECV_ReadPackets_reset_TM_lib_internal(&outC->Context_RECV_ReadPackets_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Read_P005_TM.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

