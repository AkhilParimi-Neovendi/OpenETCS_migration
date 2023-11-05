/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_136_Msg155ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader/ */
void _136_Msg155ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* inRadioTrainTrackHeader/ */
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *inRadioTrainTrackHeader,
  outC__136_Msg155ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  outC->_L5 = Q_MARQSTREASON_DEFAULT;
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L2,
    inRadioTrainTrackHeader);
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_MARQSTREASON#1)/ */
  _133_RadioTrainTrackHeade_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L2,
    &outC->_1_Context_RadioTrainTrackHeader__Get_Q_MARQSTREASON_1);
  outC->_L4 =
    outC->_1_Context_RadioTrainTrackHeader__Get_Q_MARQSTREASON_1.out_Q_MARQSTREASON;
  outC->_L1 = outC->_L4 == outC->_L5;
  outC->_L7 = T_TRAIN_MIN;
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#1)/ */
  _56_RadioTrainTrackHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L2,
    &outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_1);
  outC->_L3 =
    outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_1.out_T_TRAIN_Ref;
  outC->_L6 = outC->_L3 == outC->_L7;
  outC->_L8 = outC->_L6 & outC->_L1;
  outC->outIsConsistent = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void _136_Msg155ConsistencyChe_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC__136_Msg155ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  outC->_L1 = kcg_true;
  outC->_L2.present = kcg_true;
  outC->_L2.nid_message = kcg_lit_int32(0);
  outC->_L2.t_train = kcg_lit_int32(0);
  outC->_L2.nid_engine = kcg_lit_int32(0);
  outC->_L2.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L2.xT_TRAIN = kcg_lit_int32(0);
  outC->_L2.xNID_EM = kcg_lit_int32(0);
  outC->_L2.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L2.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L5 = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L6 = kcg_true;
  outC->_L7 = kcg_lit_int32(0);
  outC->_L8 = kcg_true;
  outC->outIsConsistent = kcg_true;
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#1)/ */
  _56_RadioTrainTrackHeader__Ge_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_1);
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_MARQSTREASON#1)/ */
  _133_RadioTrainTrackHeade_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_1_Context_RadioTrainTrackHeader__Get_Q_MARQSTREASON_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void _136_Msg155ConsistencyChe_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC__136_Msg155ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#1)/ */
  _56_RadioTrainTrackHeader__Ge_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_1);
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_MARQSTREASON#1)/ */
  _133_RadioTrainTrackHeade_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_1_Context_RadioTrainTrackHeader__Get_Q_MARQSTREASON_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _136_Msg155ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

