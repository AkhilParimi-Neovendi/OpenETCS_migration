/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration/ */
void Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* metaData/ */
  Metadata_T_Common_Types_Pkg *metaData,
  /* telegram/ */
  Telegram_T_BG_Types_Pkg *telegram,
  outC_Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  static kcg_size idx;
  static Metadata_T_Common_Types_Pkg acc;
  static kcg_size idx1;

  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L18, telegram);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L19,
    &outC->_L18.packets.PacketHeaders);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L12, metaData);
  /* _L17/ */
  for (idx = 0; idx < 30; idx++) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L17[idx], &outC->_L19);
  }
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L11, &outC->_L12);
  /* _L11= */
  for (idx1 = 0; idx1 < 30; idx1++) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&acc, &outC->_L11);
    /* _L11=(CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData#1)/ */
    Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      /* _L11= */(kcg_int64) idx1,
      &acc,
      &outC->_L17[idx1],
      &outC->Context_Merg2MetaData_1[idx1]);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &outC->_L11,
      &outC->Context_Merg2MetaData_1[idx1].metadata_out);
  }
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->mergedMetaData, &outC->_L11);
}

#ifndef KCG_USER_DEFINED_INIT
void Merg2MetaDataIteration_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
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

  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L19[idx1].nid_packet = kcg_lit_int64(0);
    outC->_L19[idx1].q_dir = Q_DIR_Reverse;
    outC->_L19[idx1].valid = kcg_true;
    outC->_L19[idx1].startAddress = kcg_lit_int64(0);
    outC->_L19[idx1].endAddress = kcg_lit_int64(0);
  }
  outC->_L18.valid = kcg_true;
  outC->_L18.checkResult = kcg_true;
  outC->_L18.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L18.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L18.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L18.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L18.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L18.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L18.telegramheader.m_mcount = kcg_lit_int64(0);
  outC->_L18.telegramheader.nid_c = kcg_lit_int64(0);
  outC->_L18.telegramheader.nid_bg = kcg_lit_int64(0);
  outC->_L18.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L18.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L18.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L18.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L18.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L18.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L18.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 30; idx5++) {
    for (idx4 = 0; idx4 < 30; idx4++) {
      outC->_L17[idx5][idx4].nid_packet = kcg_lit_int64(0);
      outC->_L17[idx5][idx4].q_dir = Q_DIR_Reverse;
      outC->_L17[idx5][idx4].valid = kcg_true;
      outC->_L17[idx5][idx4].startAddress = kcg_lit_int64(0);
      outC->_L17[idx5][idx4].endAddress = kcg_lit_int64(0);
    }
  }
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L12[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L12[idx6].q_dir = Q_DIR_Reverse;
    outC->_L12[idx6].valid = kcg_true;
    outC->_L12[idx6].startAddress = kcg_lit_int64(0);
    outC->_L12[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->_L11[idx7].nid_packet = kcg_lit_int64(0);
    outC->_L11[idx7].q_dir = Q_DIR_Reverse;
    outC->_L11[idx7].valid = kcg_true;
    outC->_L11[idx7].startAddress = kcg_lit_int64(0);
    outC->_L11[idx7].endAddress = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->mergedMetaData[idx8].nid_packet = kcg_lit_int64(0);
    outC->mergedMetaData[idx8].q_dir = Q_DIR_Reverse;
    outC->mergedMetaData[idx8].valid = kcg_true;
    outC->mergedMetaData[idx8].startAddress = kcg_lit_int64(0);
    outC->mergedMetaData[idx8].endAddress = kcg_lit_int64(0);
  }
  for (idx = 0; idx < 30; idx++) {
    /* _L11=(CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData#1)/ */
    Merg2MetaData_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &outC->Context_Merg2MetaData_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Merg2MetaDataIteration_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 30; idx++) {
    /* _L11=(CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData#1)/ */
    Merg2MetaData_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &outC->Context_Merg2MetaData_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

