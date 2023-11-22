/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P044_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P044_train_compr/ */
void C_P044_train_compr_TM_TrainToTrack(
  /* P044_in/ */
  P044_TM_TrainToTrack *P044_in,
  outC_C_P044_train_compr_TM_TrainToTrack *outC)
{
  P044_TM_TrainToTrack noname;

  kcg_copy_P044_TrainTrack_int_TM_TrainToTrack(
    &outC->_L116,
    (P044_TrainTrack_int_TM_TrainToTrack *) &DEFAULT_P044_int_TM_TrainToTrack);
  kcg_copy_P044_TM_TrainToTrack(&outC->_L1, P044_in);
  kcg_copy_P044_TM_TrainToTrack(&noname, &outC->_L1);
  kcg_copy_P044_TrainTrack_int_TM_TrainToTrack(&outC->P044_int, &outC->_L116);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P044_train_compr_init_TM_TrainToTrack(
  outC_C_P044_train_compr_TM_TrainToTrack *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;

  for (idx = 0; idx < 25; idx++) {
    outC->_L116[idx] = kcg_lit_int32(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_packet = kcg_lit_int32(0);
  outC->_L1.l_packet = kcg_lit_int32(0);
  outC->_L1.nid_xuser = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L1.external_data[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 25; idx2++) {
    outC->P044_int[idx2] = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P044_train_compr_reset_TM_TrainToTrack(
  outC_C_P044_train_compr_TM_TrainToTrack *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P044_train_compr_TM_TrainToTrack.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

