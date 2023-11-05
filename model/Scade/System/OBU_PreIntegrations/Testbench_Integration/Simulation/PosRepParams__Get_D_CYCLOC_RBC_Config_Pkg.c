/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__Get_D_CYCLOC_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::PosRepParams__Get_D_CYCLOC/ */
void PosRepParams__Get_D_CYCLOC_RBC_Config_Pkg(
  /* inPosRepParams/ */
  PosRepParams_T *inPosRepParams,
  outC_PosRepParams__Get_D_CYCLOC_RBC_Config_Pkg *outC)
{
  kcg_copy_PosRepParams_T(&outC->_L1, inPosRepParams);
  outC->_L2 = outC->_L1.d_cycloc;
  outC->out_D_CYCLOC = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void PosRepParams__Get_D_CYCLOC_init_RBC_Config_Pkg(
  outC_PosRepParams__Get_D_CYCLOC_RBC_Config_Pkg *outC)
{
  static kcg_size idx;

  outC->_L2 = kcg_lit_int32(0);
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.t_cycloc = kcg_lit_int32(0);
  outC->_L1.d_cycloc = kcg_lit_int32(0);
  outC->_L1.m_loc = M_LOC_Now;
  outC->_L1.m_NumberOfIncrementalDistancesAndQualifiers = kcg_lit_int32(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L1.m_IncrementalDistancesAndQualifiers[idx].d_loc = kcg_lit_int32(0);
    outC->_L1.m_IncrementalDistancesAndQualifiers[idx].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  outC->out_D_CYCLOC = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PosRepParams__Get_D_CYCLOC_reset_RBC_Config_Pkg(
  outC_PosRepParams__Get_D_CYCLOC_RBC_Config_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PosRepParams__Get_D_CYCLOC_RBC_Config_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

