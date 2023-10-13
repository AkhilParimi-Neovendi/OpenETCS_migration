/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "headerMsg129_ng_trainData_pkg.h"

/* trainData_pkg::headerMsg129_ng/ */
void headerMsg129_ng_trainData_pkg(
  /* nidEngine/ */
  NID_ENGINE nidEngine,
  /* t_train/ */
  T_TRAIN t_train,
  outC_headerMsg129_ng_trainData_pkg *outC)
{
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 = co129_Validated_Train_Data_Id_Pkg;
  outC->_L18 = kcg_true;
  outC->_L16 = t_train;
  outC->_L11 = nidEngine;
  outC->_L17.valid = outC->_L18;
  outC->_L17.nid_message = outC->_L19;
  outC->_L17.l_message = outC->_L20;
  outC->_L17.t_train = outC->_L16;
  outC->_L17.nid_engine = outC->_L11;
  kcg_copy_M_129_T_TM_radio_messages(&outC->header, &outC->_L17);
}

#ifndef KCG_USER_DEFINED_INIT
void headerMsg129_ng_init_trainData_pkg(
  outC_headerMsg129_ng_trainData_pkg *outC)
{
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_true;
  outC->_L17.valid = kcg_true;
  outC->_L17.nid_message = kcg_lit_int64(0);
  outC->_L17.l_message = kcg_lit_int64(0);
  outC->_L17.t_train = kcg_lit_int64(0);
  outC->_L17.nid_engine = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->header.valid = kcg_true;
  outC->header.nid_message = kcg_lit_int64(0);
  outC->header.l_message = kcg_lit_int64(0);
  outC->header.t_train = kcg_lit_int64(0);
  outC->header.nid_engine = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void headerMsg129_ng_reset_trainData_pkg(
  outC_headerMsg129_ng_trainData_pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** headerMsg129_ng_trainData_pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

