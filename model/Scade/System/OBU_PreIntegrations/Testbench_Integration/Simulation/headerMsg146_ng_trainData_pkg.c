/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "headerMsg146_ng_trainData_pkg.h"

/* trainData_pkg::headerMsg146_ng/ */
void headerMsg146_ng_trainData_pkg(
  /* nidEngine/ */
  NID_ENGINE nidEngine,
  /* t_train/ */
  T_TRAIN t_train,
  /* RBC_timeStamp/ */
  T_TRAIN RBC_timeStamp,
  outC_headerMsg146_ng_trainData_pkg *outC)
{
  outC->_L22 = kcg_lit_int64(0);
  outC->_L21 = co146_Acknowledgement_Id_Pkg;
  outC->_L20 = kcg_true;
  outC->_L18 = t_train;
  outC->_L11 = nidEngine;
  outC->_L16 = RBC_timeStamp;
  outC->_L19.valid = outC->_L20;
  outC->_L19.nid_message = outC->_L21;
  outC->_L19.l_message = outC->_L22;
  outC->_L19.t_train = outC->_L18;
  outC->_L19.nid_engine = outC->_L11;
  outC->_L19.t_train_req = outC->_L16;
  kcg_copy_M_146_T_TM_radio_messages(&outC->header, &outC->_L19);
}

#ifndef KCG_USER_DEFINED_INIT
void headerMsg146_ng_init_trainData_pkg(
  outC_headerMsg146_ng_trainData_pkg *outC)
{
  outC->_L22 = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L20 = kcg_true;
  outC->_L19.valid = kcg_true;
  outC->_L19.nid_message = kcg_lit_int64(0);
  outC->_L19.l_message = kcg_lit_int64(0);
  outC->_L19.t_train = kcg_lit_int64(0);
  outC->_L19.nid_engine = kcg_lit_int64(0);
  outC->_L19.t_train_req = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->header.valid = kcg_true;
  outC->header.nid_message = kcg_lit_int64(0);
  outC->header.l_message = kcg_lit_int64(0);
  outC->header.t_train = kcg_lit_int64(0);
  outC->header.nid_engine = kcg_lit_int64(0);
  outC->header.t_train_req = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void headerMsg146_ng_reset_trainData_pkg(
  outC_headerMsg146_ng_trainData_pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** headerMsg146_ng_trainData_pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

