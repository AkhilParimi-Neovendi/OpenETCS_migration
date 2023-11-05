/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg147ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg147ConsistencyChecker__HasConsistentHeader/ */
void Msg147ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* inRadioTrainTrackHeader/ */
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *inRadioTrainTrackHeader,
  outC_Msg147ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg noname;

  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L8,
    inRadioTrainTrackHeader);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&noname, &outC->_L8);
  outC->_L7 = kcg_true;
  outC->outIsConsistent = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void Msg147ConsistencyChecker__HasConsistentHeader_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_Msg147ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  outC->_L8.present = kcg_true;
  outC->_L8.nid_message = kcg_lit_int32(0);
  outC->_L8.t_train = kcg_lit_int32(0);
  outC->_L8.nid_engine = kcg_lit_int32(0);
  outC->_L8.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L8.xT_TRAIN = kcg_lit_int32(0);
  outC->_L8.xNID_EM = kcg_lit_int32(0);
  outC->_L8.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L8.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L7 = kcg_true;
  outC->outIsConsistent = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Msg147ConsistencyChecker__HasConsistentHeader_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_Msg147ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Msg147ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

