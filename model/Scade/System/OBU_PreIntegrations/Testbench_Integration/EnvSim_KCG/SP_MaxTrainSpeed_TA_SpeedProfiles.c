/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_MaxTrainSpeed_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_MaxTrainSpeed/ */
void SP_MaxTrainSpeed_TA_SpeedProfiles(
  /* reset/ */
  kcg_bool reset,
  /* TrainDataIn/ */
  kcg_int32 TrainDataIn,
  outC_SP_MaxTrainSpeed_TA_SpeedProfiles *outC)
{
  static kcg_int32 noname;
  static kcg_bool _1_noname;

  outC->_L3 = reset;
  _1_noname = outC->_L3;
  kcg_copy_SSP_cat_t_TA_MRSP(
    &outC->_L2,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
  outC->_L1 = TrainDataIn;
  noname = outC->_L1;
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->MaxTrainSpeed, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void SP_MaxTrainSpeed_init_TA_SpeedProfiles(
  outC_SP_MaxTrainSpeed_TA_SpeedProfiles *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L3 = kcg_true;
  for (idx = 0; idx < 50; idx++) {
    outC->_L2[idx].target = kcg_lit_int32(0);
    outC->_L2[idx].speed = kcg_lit_int32(0);
  }
  outC->_L1 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->MaxTrainSpeed[idx1].target = kcg_lit_int32(0);
    outC->MaxTrainSpeed[idx1].speed = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SP_MaxTrainSpeed_reset_TA_SpeedProfiles(
  outC_SP_MaxTrainSpeed_TA_SpeedProfiles *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SP_MaxTrainSpeed_TA_SpeedProfiles.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

