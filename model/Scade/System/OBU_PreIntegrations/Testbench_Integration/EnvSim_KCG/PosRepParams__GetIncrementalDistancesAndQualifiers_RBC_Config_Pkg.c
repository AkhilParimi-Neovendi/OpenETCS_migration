/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::PosRepParams__GetIncrementalDistancesAndQualifiers/ */
void PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg(
  /* inPositionReportParameters/ */
  PosRepParams_T *inPositionReportParameters,
  outC_PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg *outC)
{
  kcg_copy_PosRepParams_T(&outC->_L1, inPositionReportParameters);
  kcg_copy__65_array(&outC->_L2, &outC->_L1.m_IncrementalDistancesAndQualifiers);
  kcg_copy__65_array(&outC->outIncrementalDistancesAndQualifiers, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void PosRepParams__GetIncrementalDistancesAndQualifiers_init_RBC_Config_Pkg(
  outC_PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  for (idx = 0; idx < 32; idx++) {
    outC->_L2[idx].d_loc = kcg_lit_int32(0);
    outC->_L2[idx].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.t_cycloc = kcg_lit_int32(0);
  outC->_L1.d_cycloc = kcg_lit_int32(0);
  outC->_L1.m_loc = M_LOC_Now;
  outC->_L1.m_NumberOfIncrementalDistancesAndQualifiers = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L1.m_IncrementalDistancesAndQualifiers[idx1].d_loc = kcg_lit_int32(0);
    outC->_L1.m_IncrementalDistancesAndQualifiers[idx1].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->outIncrementalDistancesAndQualifiers[idx2].d_loc = kcg_lit_int32(0);
    outC->outIncrementalDistancesAndQualifiers[idx2].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PosRepParams__GetIncrementalDistancesAndQualifiers_reset_RBC_Config_Pkg(
  outC_PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

