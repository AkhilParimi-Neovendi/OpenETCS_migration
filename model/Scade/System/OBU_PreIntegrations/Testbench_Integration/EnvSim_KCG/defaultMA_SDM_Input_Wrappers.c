/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "defaultMA_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::defaultMA/ */
void defaultMA_SDM_Input_Wrappers(outC_defaultMA_SDM_Input_Wrappers *outC)
{
  outC->_L197 = MA_L23_TrackAtlasTypes;
  outC->_L196 = kcg_lit_float64(0.0);
  outC->_L195 = kcg_false;
  outC->_L39.Location = outC->_L196;
  outC->_L39.TargetSpeed = outC->_L196;
  outC->_L114.valid = outC->_L195;
  outC->_L114.v_main = outC->_L196;
  kcg_copy_EOA_real_T_TargetManagement_types(&outC->_L114.EOA, &outC->_L39);
  outC->_L114.DP_valid = outC->_L195;
  outC->_L114.DangerPoint = outC->_L196;
  outC->_L114.OL_valid = outC->_L195;
  outC->_L114.Overlap = outC->_L196;
  outC->_L114.q_calculate_release = outC->_L195;
  outC->_L114.ReleaseSpeed = outC->_L196;
  outC->_L114.level = outC->_L197;
  kcg_copy_MA_section_real_T_TargetManagement_types(&outC->Ma_out, &outC->_L114);
}

#ifndef KCG_USER_DEFINED_INIT
void defaultMA_init_SDM_Input_Wrappers(outC_defaultMA_SDM_Input_Wrappers *outC)
{
  outC->_L197 = MA_L1_TrackAtlasTypes;
  outC->_L196 = kcg_lit_float64(0.0);
  outC->_L195 = kcg_true;
  outC->_L114.valid = kcg_true;
  outC->_L114.v_main = kcg_lit_float64(0.0);
  outC->_L114.EOA.Location = kcg_lit_float64(0.0);
  outC->_L114.EOA.TargetSpeed = kcg_lit_float64(0.0);
  outC->_L114.DP_valid = kcg_true;
  outC->_L114.DangerPoint = kcg_lit_float64(0.0);
  outC->_L114.OL_valid = kcg_true;
  outC->_L114.Overlap = kcg_lit_float64(0.0);
  outC->_L114.q_calculate_release = kcg_true;
  outC->_L114.ReleaseSpeed = kcg_lit_float64(0.0);
  outC->_L114.level = MA_L1_TrackAtlasTypes;
  outC->_L39.Location = kcg_lit_float64(0.0);
  outC->_L39.TargetSpeed = kcg_lit_float64(0.0);
  outC->Ma_out.valid = kcg_true;
  outC->Ma_out.v_main = kcg_lit_float64(0.0);
  outC->Ma_out.EOA.Location = kcg_lit_float64(0.0);
  outC->Ma_out.EOA.TargetSpeed = kcg_lit_float64(0.0);
  outC->Ma_out.DP_valid = kcg_true;
  outC->Ma_out.DangerPoint = kcg_lit_float64(0.0);
  outC->Ma_out.OL_valid = kcg_true;
  outC->Ma_out.Overlap = kcg_lit_float64(0.0);
  outC->Ma_out.q_calculate_release = kcg_true;
  outC->Ma_out.ReleaseSpeed = kcg_lit_float64(0.0);
  outC->Ma_out.level = MA_L1_TrackAtlasTypes;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void defaultMA_reset_SDM_Input_Wrappers(outC_defaultMA_SDM_Input_Wrappers *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** defaultMA_SDM_Input_Wrappers.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

