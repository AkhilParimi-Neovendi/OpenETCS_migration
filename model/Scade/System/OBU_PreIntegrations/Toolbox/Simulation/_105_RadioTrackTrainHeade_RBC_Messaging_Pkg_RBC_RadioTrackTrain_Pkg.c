/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_105_RadioTrackTrainHeade_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_M_ACK/ */
void _105_RadioTrackTrainHeade_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* inRadioTrackTrainHeader/ */
  Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader,
  outC__105_RadioTrackTrainHeade_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->_L1, inRadioTrackTrainHeader);
  outC->_L2 = outC->_L1.m_ack;
  /* _L3=(TM_conversions::CAST_Int_to_M_ACK#1)/ */
  CAST_Int_to_M_ACK_TM_conversions(
    outC->_L2,
    &outC->Context_CAST_Int_to_M_ACK_1);
  outC->_L3 = outC->Context_CAST_Int_to_M_ACK_1.m_ack;
  outC->out_M_ACK = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void _105_RadioTrackTrainHeade_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC__105_RadioTrackTrainHeade_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
  outC->_L3 = M_ACK_No_acknowledgement_required;
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1.radioDevice = kcg_lit_int32(0);
  outC->_L1.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1.nid_message = kcg_lit_int32(0);
  outC->_L1.t_train = kcg_lit_int32(0);
  outC->_L1.m_ack = kcg_lit_int32(0);
  outC->_L1.nid_lrbg = kcg_lit_int32(0);
  outC->_L1.t_train_reference = kcg_lit_int32(0);
  outC->_L1.nid_em = kcg_lit_int32(0);
  outC->_L1.q_scale = kcg_lit_int32(0);
  outC->_L1.d_sr = kcg_lit_int32(0);
  outC->_L1.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1.d_ref = kcg_lit_int32(0);
  outC->_L1.q_dir = kcg_lit_int32(0);
  outC->_L1.d_emergencystop = kcg_lit_int32(0);
  outC->_L1.m_version = kcg_lit_int32(0);
  outC->out_M_ACK = M_ACK_No_acknowledgement_required;
  /* _L3=(TM_conversions::CAST_Int_to_M_ACK#1)/ */
  CAST_Int_to_M_ACK_init_TM_conversions(&outC->Context_CAST_Int_to_M_ACK_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void _105_RadioTrackTrainHeade_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC__105_RadioTrackTrainHeade_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
  /* _L3=(TM_conversions::CAST_Int_to_M_ACK#1)/ */
  CAST_Int_to_M_ACK_reset_TM_conversions(&outC->Context_CAST_Int_to_M_ACK_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _105_RadioTrackTrainHeade_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

