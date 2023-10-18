/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Get_Q_SCALE_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Get_Q_SCALE/ */
void PosData__Get_Q_SCALE_RBC_Session_Pkg(
  /* inPosData/ */
  PosData_T *inPosData,
  outC_PosData__Get_Q_SCALE_RBC_Session_Pkg *outC)
{
  kcg_copy_PosData_T(&outC->_L1, inPosData);
  outC->_L2 = outC->_L1.q_scale;
  outC->out_Q_SCALE = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void PosData__Get_Q_SCALE_init_RBC_Session_Pkg(
  outC_PosData__Get_Q_SCALE_RBC_Session_Pkg *outC)
{
  outC->_L2 = Q_SCALE_10_cm_scale;
  outC->_L1.nid_lrbg = kcg_lit_int64(0);
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.d_lrbg = kcg_lit_int64(0);
  outC->_L1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L1.l_doubtover = kcg_lit_int64(0);
  outC->_L1.l_doubtunder = kcg_lit_int64(0);
  outC->_L1.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.l_trainint = kcg_lit_int64(0);
  outC->_L1.v_train = kcg_lit_int64(0);
  outC->_L1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.m_mode = M_MODE_Full_Supervision;
  outC->_L1.m_level = M_LEVEL_Level_0;
  outC->_L1.nid_ntc = kcg_lit_int64(0);
  outC->_L1.nid_prvlrbg = kcg_lit_int64(0);
  outC->out_Q_SCALE = Q_SCALE_10_cm_scale;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PosData__Get_Q_SCALE_reset_RBC_Session_Pkg(
  outC_PosData__Get_Q_SCALE_RBC_Session_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PosData__Get_Q_SCALE_RBC_Session_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

