/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket057__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create/ */
void RadioTrackTrainPacket057__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket(
  /* in_Q_DIR/ */
  Q_DIR in_Q_DIR,
  /* in_T_MAR/ */
  T_MAR in_T_MAR,
  /* in_T_TIMEOUTRQST/ */
  T_TIMEOUTRQST in_T_TIMEOUTRQST,
  /* in_T_CYCRQST/ */
  T_CYCRQST in_T_CYCRQST,
  outC_RadioTrackTrainPacket057__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainP *outC)
{
  outC->_L18 = P57_L_PACKET_RBC_Messaging_Pkg;
  kcg_copy_P057_trackside_int_T_TM(
    &outC->_L5,
    (P057_trackside_int_T_TM *) &P057_DEFAULT);
  outC->_L12 = kcg_true;
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__SetValid#1)/ */
  RadioTrackTrainPacket057__SetValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPack(
    &outC->_L5,
    outC->_L12,
    &outC->Context_RadioTrackTrainPacket057__SetValid_1);
  kcg_copy_P057_trackside_int_T_TM(
    &outC->_L6,
    &outC->Context_RadioTrackTrainPacket057__SetValid_1.outRadioTrackTrainPacket);
  outC->_L16 = kcg_lit_int64(57);
  /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_NID_PACKET#1)/ */
  RadioTrackTrainPacket057__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra(
    &outC->_L6,
    outC->_L16,
    &outC->Context_RadioTrackTrainPacket057__Set_NID_PACKET_1);
  kcg_copy_P057_trackside_int_T_TM(
    &outC->_L15,
    &outC->Context_RadioTrackTrainPacket057__Set_NID_PACKET_1.outRadioTrackTrainPacket);
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_L_PACKET#1)/ */
  RadioTrackTrainPacket057__Set_L_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain(
    &outC->_L15,
    outC->_L18,
    &outC->Context_RadioTrackTrainPacket057__Set_L_PACKET_1);
  kcg_copy_P057_trackside_int_T_TM(
    &outC->_L17,
    &outC->Context_RadioTrackTrainPacket057__Set_L_PACKET_1.outRadioTrackTrainPacket);
  outC->_L14 = in_Q_DIR;
  /* _L13=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_Q_DIR#1)/ */
  RadioTrackTrainPacket057__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac(
    &outC->_L17,
    outC->_L14,
    &outC->Context_RadioTrackTrainPacket057__Set_Q_DIR_1);
  kcg_copy_P057_trackside_int_T_TM(
    &outC->_L13,
    &outC->Context_RadioTrackTrainPacket057__Set_Q_DIR_1.outRadioTrackTrainPacket);
  outC->_L2 = in_T_MAR;
  /* _L7=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_MAR#1)/ */
  RadioTrackTrainPacket057__Set_T_MAR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac(
    &outC->_L13,
    outC->_L2,
    &outC->Context_RadioTrackTrainPacket057__Set_T_MAR_1);
  kcg_copy_P057_trackside_int_T_TM(
    &outC->_L7,
    &outC->Context_RadioTrackTrainPacket057__Set_T_MAR_1.outRadioTrackTrainPacket);
  outC->_L3 = in_T_TIMEOUTRQST;
  /* _L10=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_TIMEOUTRQST#1)/ */
  RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrack(
    &outC->_L7,
    outC->_L3,
    &outC->Context_RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_1);
  kcg_copy_P057_trackside_int_T_TM(
    &outC->_L10,
    &outC->Context_RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_1.outRadioTrackTrainPacket);
  outC->_L4 = in_T_CYCRQST;
  /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_CYCRQST#1)/ */
  RadioTrackTrainPacket057__Set_T_CYCRQST_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrai(
    &outC->_L10,
    outC->_L4,
    &outC->Context_RadioTrackTrainPacket057__Set_T_CYCRQST_1);
  kcg_copy_P057_trackside_int_T_TM(
    &outC->_L11,
    &outC->Context_RadioTrackTrainPacket057__Set_T_CYCRQST_1.outRadioTrackTrainPacket);
  kcg_copy_P057_trackside_int_T_TM(&outC->outRadioTrackTrainPacket, &outC->_L11);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainPacket057__Create_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainP(
  outC_RadioTrackTrainPacket057__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainP *outC)
{
  outC->_L18 = kcg_lit_int64(0);
  outC->_L17.valid = kcg_true;
  outC->_L17.NID_PACKET = kcg_lit_int64(0);
  outC->_L17.Q_DIR = kcg_lit_int64(0);
  outC->_L17.L_PACKET = kcg_lit_int64(0);
  outC->_L17.T_MAR = kcg_lit_int64(0);
  outC->_L17.T_TIMEOUTRQST = kcg_lit_int64(0);
  outC->_L17.T_CYCRQST = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15.valid = kcg_true;
  outC->_L15.NID_PACKET = kcg_lit_int64(0);
  outC->_L15.Q_DIR = kcg_lit_int64(0);
  outC->_L15.L_PACKET = kcg_lit_int64(0);
  outC->_L15.T_MAR = kcg_lit_int64(0);
  outC->_L15.T_TIMEOUTRQST = kcg_lit_int64(0);
  outC->_L15.T_CYCRQST = kcg_lit_int64(0);
  outC->_L14 = Q_DIR_Reverse;
  outC->_L13.valid = kcg_true;
  outC->_L13.NID_PACKET = kcg_lit_int64(0);
  outC->_L13.Q_DIR = kcg_lit_int64(0);
  outC->_L13.L_PACKET = kcg_lit_int64(0);
  outC->_L13.T_MAR = kcg_lit_int64(0);
  outC->_L13.T_TIMEOUTRQST = kcg_lit_int64(0);
  outC->_L13.T_CYCRQST = kcg_lit_int64(0);
  outC->_L12 = kcg_true;
  outC->_L11.valid = kcg_true;
  outC->_L11.NID_PACKET = kcg_lit_int64(0);
  outC->_L11.Q_DIR = kcg_lit_int64(0);
  outC->_L11.L_PACKET = kcg_lit_int64(0);
  outC->_L11.T_MAR = kcg_lit_int64(0);
  outC->_L11.T_TIMEOUTRQST = kcg_lit_int64(0);
  outC->_L11.T_CYCRQST = kcg_lit_int64(0);
  outC->_L10.valid = kcg_true;
  outC->_L10.NID_PACKET = kcg_lit_int64(0);
  outC->_L10.Q_DIR = kcg_lit_int64(0);
  outC->_L10.L_PACKET = kcg_lit_int64(0);
  outC->_L10.T_MAR = kcg_lit_int64(0);
  outC->_L10.T_TIMEOUTRQST = kcg_lit_int64(0);
  outC->_L10.T_CYCRQST = kcg_lit_int64(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.NID_PACKET = kcg_lit_int64(0);
  outC->_L7.Q_DIR = kcg_lit_int64(0);
  outC->_L7.L_PACKET = kcg_lit_int64(0);
  outC->_L7.T_MAR = kcg_lit_int64(0);
  outC->_L7.T_TIMEOUTRQST = kcg_lit_int64(0);
  outC->_L7.T_CYCRQST = kcg_lit_int64(0);
  outC->_L6.valid = kcg_true;
  outC->_L6.NID_PACKET = kcg_lit_int64(0);
  outC->_L6.Q_DIR = kcg_lit_int64(0);
  outC->_L6.L_PACKET = kcg_lit_int64(0);
  outC->_L6.T_MAR = kcg_lit_int64(0);
  outC->_L6.T_TIMEOUTRQST = kcg_lit_int64(0);
  outC->_L6.T_CYCRQST = kcg_lit_int64(0);
  outC->_L5.valid = kcg_true;
  outC->_L5.NID_PACKET = kcg_lit_int64(0);
  outC->_L5.Q_DIR = kcg_lit_int64(0);
  outC->_L5.L_PACKET = kcg_lit_int64(0);
  outC->_L5.T_MAR = kcg_lit_int64(0);
  outC->_L5.T_TIMEOUTRQST = kcg_lit_int64(0);
  outC->_L5.T_CYCRQST = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.valid = kcg_true;
  outC->outRadioTrackTrainPacket.NID_PACKET = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.Q_DIR = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.L_PACKET = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.T_MAR = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.T_TIMEOUTRQST = kcg_lit_int64(0);
  outC->outRadioTrackTrainPacket.T_CYCRQST = kcg_lit_int64(0);
  /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_CYCRQST#1)/ */
  RadioTrackTrainPacket057__Set_T_CYCRQST_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrac(
    &outC->Context_RadioTrackTrainPacket057__Set_T_CYCRQST_1);
  /* _L10=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_TIMEOUTRQST#1)/ */
  RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_Radio(
    &outC->Context_RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_1);
  /* _L7=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_MAR#1)/ */
  RadioTrackTrainPacket057__Set_T_MAR_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra(
    &outC->Context_RadioTrackTrainPacket057__Set_T_MAR_1);
  /* _L13=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_Q_DIR#1)/ */
  RadioTrackTrainPacket057__Set_Q_DIR_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra(
    &outC->Context_RadioTrackTrainPacket057__Set_Q_DIR_1);
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_L_PACKET#1)/ */
  RadioTrackTrainPacket057__Set_L_PACKET_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrack(
    &outC->Context_RadioTrackTrainPacket057__Set_L_PACKET_1);
  /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_NID_PACKET#1)/ */
  RadioTrackTrainPacket057__Set_NID_PACKET_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTra(
    &outC->Context_RadioTrackTrainPacket057__Set_NID_PACKET_1);
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__SetValid#1)/ */
  RadioTrackTrainPacket057__SetValid_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrai(
    &outC->Context_RadioTrackTrainPacket057__SetValid_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrackTrainPacket057__Create_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain(
  outC_RadioTrackTrainPacket057__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainP *outC)
{
  /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_CYCRQST#1)/ */
  RadioTrackTrainPacket057__Set_T_CYCRQST_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTra(
    &outC->Context_RadioTrackTrainPacket057__Set_T_CYCRQST_1);
  /* _L10=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_TIMEOUTRQST#1)/ */
  RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_Radi(
    &outC->Context_RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_1);
  /* _L7=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_MAR#1)/ */
  RadioTrackTrainPacket057__Set_T_MAR_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTr(
    &outC->Context_RadioTrackTrainPacket057__Set_T_MAR_1);
  /* _L13=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_Q_DIR#1)/ */
  RadioTrackTrainPacket057__Set_Q_DIR_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTr(
    &outC->Context_RadioTrackTrainPacket057__Set_Q_DIR_1);
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_L_PACKET#1)/ */
  RadioTrackTrainPacket057__Set_L_PACKET_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrac(
    &outC->Context_RadioTrackTrainPacket057__Set_L_PACKET_1);
  /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_NID_PACKET#1)/ */
  RadioTrackTrainPacket057__Set_NID_PACKET_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTr(
    &outC->Context_RadioTrackTrainPacket057__Set_NID_PACKET_1);
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__SetValid#1)/ */
  RadioTrackTrainPacket057__SetValid_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra(
    &outC->Context_RadioTrackTrainPacket057__SetValid_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainPacket057__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

