/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_Q_DLRBG_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Set_Q_DLRBG/ */
void PosData__Set_Q_DLRBG_RBC_Session_Pkg(
  /* inPosData/ */
  PosData_T *inPosData,
  /* in_Q_DLRBG/ */
  Q_DLRBG in_Q_DLRBG,
  outC_PosData__Set_Q_DLRBG_RBC_Session_Pkg *outC)
{
  outC->_L3 = in_Q_DLRBG;
  kcg_copy_PosData_T(&outC->_L1, inPosData);
  kcg_copy_PosData_T(&outC->_L2, &outC->_L1);
  if (kcg_true) {
    outC->_L2.q_dlrbg = outC->_L3;
  }
  kcg_copy_PosData_T(&outC->outPosData, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void PosData__Set_Q_DLRBG_init_RBC_Session_Pkg(
  outC_PosData__Set_Q_DLRBG_RBC_Session_Pkg *outC)
{
  outC->_L3 = Q_DLRBG_Reverse;
  outC->_L2.nid_lrbg = kcg_lit_int64(0);
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.d_lrbg = kcg_lit_int64(0);
  outC->_L2.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L2.l_doubtover = kcg_lit_int64(0);
  outC->_L2.l_doubtunder = kcg_lit_int64(0);
  outC->_L2.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L2.l_trainint = kcg_lit_int64(0);
  outC->_L2.v_train = kcg_lit_int64(0);
  outC->_L2.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2.m_mode = M_MODE_Full_Supervision;
  outC->_L2.m_level = M_LEVEL_Level_0;
  outC->_L2.nid_ntc = kcg_lit_int64(0);
  outC->_L2.nid_prvlrbg = kcg_lit_int64(0);
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
  outC->outPosData.nid_lrbg = kcg_lit_int64(0);
  outC->outPosData.q_scale = Q_SCALE_10_cm_scale;
  outC->outPosData.d_lrbg = kcg_lit_int64(0);
  outC->outPosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->outPosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->outPosData.l_doubtover = kcg_lit_int64(0);
  outC->outPosData.l_doubtunder = kcg_lit_int64(0);
  outC->outPosData.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->outPosData.l_trainint = kcg_lit_int64(0);
  outC->outPosData.v_train = kcg_lit_int64(0);
  outC->outPosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->outPosData.m_mode = M_MODE_Full_Supervision;
  outC->outPosData.m_level = M_LEVEL_Level_0;
  outC->outPosData.nid_ntc = kcg_lit_int64(0);
  outC->outPosData.nid_prvlrbg = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void PosData__Set_Q_DLRBG_reset_RBC_Session_Pkg(
  outC_PosData__Set_Q_DLRBG_RBC_Session_Pkg *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PosData__Set_Q_DLRBG_RBC_Session_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

