/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Header_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_Header/ */
void Build_Header_ProvidePositionReport_Pkg(
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* t_train/ */
  T_TRAIN t_train,
  outC_Build_Header_ProvidePositionReport_Pkg *outC)
{
  outC->_L12 = t_train;
  outC->_L11 = cxQ_EMERGENCYSTOP_ProvidePositionReport_Pkg;
  outC->_L10 = cxNID_TEXTMESSAGE_ProvidePositionReport_Pkg;
  outC->_L9 = cxNID_EM_ProvidePositionReport_Pkg;
  outC->_L1 = kcg_true;
  outC->_L3 = kcg_lit_int32(136);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L5, trainProps);
  outC->_L2 = outC->_L5.nid_engine;
  outC->_L7 = cxQ_MARQSTREASON_ProvidePositionReport_Pkg;
  outC->_L4 = cxT_TRAIN_ProvidePositionReport_Pkg;
  outC->_L8.present = outC->_L1;
  outC->_L8.nid_message = outC->_L3;
  outC->_L8.t_train = outC->_L12;
  outC->_L8.nid_engine = outC->_L2;
  outC->_L8.xQ_MARQSTREASON = outC->_L7;
  outC->_L8.xT_TRAIN = outC->_L4;
  outC->_L8.xNID_EM = outC->_L9;
  outC->_L8.xQ_EMERGENCYSTOP = outC->_L11;
  outC->_L8.xNID_TEXTMESSAGE = outC->_L10;
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->posRepHeader,
    &outC->_L8);
}

#ifndef KCG_USER_DEFINED_INIT
void Build_Header_init_ProvidePositionReport_Pkg(
  outC_Build_Header_ProvidePositionReport_Pkg *outC)
{
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5.nid_engine = kcg_lit_int32(0);
  outC->_L5.nid_operational = kcg_lit_int32(0);
  outC->_L5.l_train = kcg_lit_int32(0);
  outC->_L5.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L5.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L5.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L5.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L5.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L5.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L5.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L5.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L5.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L5.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L5.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L5.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L7 = Q_MARQSTREASON_Start_selected_by_driver;
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
  outC->posRepHeader.present = kcg_true;
  outC->posRepHeader.nid_message = kcg_lit_int32(0);
  outC->posRepHeader.t_train = kcg_lit_int32(0);
  outC->posRepHeader.nid_engine = kcg_lit_int32(0);
  outC->posRepHeader.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->posRepHeader.xT_TRAIN = kcg_lit_int32(0);
  outC->posRepHeader.xNID_EM = kcg_lit_int32(0);
  outC->posRepHeader.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->posRepHeader.xNID_TEXTMESSAGE = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_Header_reset_ProvidePositionReport_Pkg(
  outC_Build_Header_ProvidePositionReport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_Header_ProvidePositionReport_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

