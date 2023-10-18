/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP/ */
void RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  /* inRadioTrainTrackHeader/ */
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *inRadioTrainTrackHeader,
  outC_RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg *outC)
{
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L1,
    inRadioTrainTrackHeader);
  outC->_L2 = outC->_L1.xQ_EMERGENCYSTOP;
  outC->out_Q_EMERGENCYSTOP = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  outC_RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg *outC)
{
  outC->_L2 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L1.present = kcg_true;
  outC->_L1.nid_message = kcg_lit_int64(0);
  outC->_L1.t_train = kcg_lit_int64(0);
  outC->_L1.nid_engine = kcg_lit_int64(0);
  outC->_L1.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L1.xT_TRAIN = kcg_lit_int64(0);
  outC->_L1.xNID_EM = kcg_lit_int64(0);
  outC->_L1.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L1.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->out_Q_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
}
#endif /* KCG_USER_DEFINED_INIT */


void RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  outC_RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

