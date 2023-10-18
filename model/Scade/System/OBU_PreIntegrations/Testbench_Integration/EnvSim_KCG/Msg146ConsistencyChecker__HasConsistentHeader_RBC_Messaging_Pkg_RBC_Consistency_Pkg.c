/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg146ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg146ConsistencyChecker__HasConsistentHeader/ */
void Msg146ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* inRadioTrainTrackHeader/ */
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *inRadioTrainTrackHeader,
  outC_Msg146ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  outC->_L4 = Q_MARQSTREASON_DEFAULT;
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L5,
    inRadioTrainTrackHeader);
  /* _L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_MARQSTREASON#1)/ */
  RadioTrainTrackHeader__Get_Q_MARQSTREASON_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L5,
    &outC->Context_RadioTrainTrackHeader__Get_Q_MARQSTREASON_1);
  outC->_L1 =
    outC->Context_RadioTrainTrackHeader__Get_Q_MARQSTREASON_1.out_Q_MARQSTREASON;
  outC->_L6 = outC->_L1 == outC->_L4;
  outC->outIsConsistent = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void Msg146ConsistencyChecker__HasConsistentHeader_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_Msg146ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  outC->_L1 = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L4 = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L5.present = kcg_true;
  outC->_L5.nid_message = kcg_lit_int64(0);
  outC->_L5.t_train = kcg_lit_int64(0);
  outC->_L5.nid_engine = kcg_lit_int64(0);
  outC->_L5.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L5.xT_TRAIN = kcg_lit_int64(0);
  outC->_L5.xNID_EM = kcg_lit_int64(0);
  outC->_L5.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L5.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L6 = kcg_true;
  outC->outIsConsistent = kcg_true;
  /* _L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_MARQSTREASON#1)/ */
  RadioTrainTrackHeader__Get_Q_MARQSTREASON_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_Q_MARQSTREASON_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Msg146ConsistencyChecker__HasConsistentHeader_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_Msg146ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  /* _L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_MARQSTREASON#1)/ */
  RadioTrainTrackHeader__Get_Q_MARQSTREASON_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_Q_MARQSTREASON_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Msg146ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

