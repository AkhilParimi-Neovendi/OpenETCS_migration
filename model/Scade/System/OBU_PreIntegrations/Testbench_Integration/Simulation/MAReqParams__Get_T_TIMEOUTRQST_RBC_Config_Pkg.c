/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::MAReqParams__Get_T_TIMEOUTRQST/ */
void MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg(
  /* inMAReqParams/ */
  MAReqParams_T *inMAReqParams,
  outC_MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg *outC)
{
  kcg_copy_MAReqParams_T(&outC->_L1, inMAReqParams);
  outC->_L2 = outC->_L1.t_timeoutrqst;
  outC->out_T_TIMEOUTRQST = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void MAReqParams__Get_T_TIMEOUTRQST_init_RBC_Config_Pkg(
  outC_MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg *outC)
{
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.t_mar = kcg_lit_int64(0);
  outC->_L1.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L1.t_cycrqst = kcg_lit_int64(0);
  outC->out_T_TIMEOUTRQST = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MAReqParams__Get_T_TIMEOUTRQST_reset_RBC_Config_Pkg(
  outC_MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

