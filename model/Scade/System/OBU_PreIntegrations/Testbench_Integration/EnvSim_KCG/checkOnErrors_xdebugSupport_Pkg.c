/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkOnErrors_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::checkOnErrors/ */
void checkOnErrors_xdebugSupport_Pkg(
  /* errors/ */
  MSG_Errors_T_Common_Types_Pkg *errors,
  outC_checkOnErrors_xdebugSupport_Pkg *outC)
{
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->_L12, errors);
  outC->_L11 = outC->_L12.unlinkedBGError;
  outC->_L8 = outC->_L12.linkedBGError;
  outC->_L7 = outC->_L12.BG_versionIncompatible;
  outC->_L9 = outC->_L7 | outC->_L8 | outC->_L11;
  outC->baliseError = outC->_L9;
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->_L1, errors);
  outC->_L6 = outC->_L1.radioSequenceError;
  outC->_L5 = outC->_L1.tNvContactError;
  outC->_L4 = outC->_L1.radioMessageConsistencyError;
  outC->_L3 = outC->_L1.otherTimingError;
  outC->_L2 = outC->_L3 | outC->_L4 | outC->_L5 | outC->_L6;
  outC->radioMsgError = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void checkOnErrors_init_xdebugSupport_Pkg(
  outC_checkOnErrors_xdebugSupport_Pkg *outC)
{
  outC->_L7 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L12.linkedBGError = kcg_true;
  outC->_L12.unlinkedBGError = kcg_true;
  outC->_L12.BG_versionIncompatible = kcg_true;
  outC->_L12.radioSequenceError = kcg_true;
  outC->_L12.tNvContactError = kcg_true;
  outC->_L12.otherTimingError = kcg_true;
  outC->_L12.radioMessageConsistencyError = kcg_true;
  outC->_L12.nid_c = kcg_lit_int32(0);
  outC->_L12.nid_errorbg = kcg_lit_int32(0);
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1.linkedBGError = kcg_true;
  outC->_L1.unlinkedBGError = kcg_true;
  outC->_L1.BG_versionIncompatible = kcg_true;
  outC->_L1.radioSequenceError = kcg_true;
  outC->_L1.tNvContactError = kcg_true;
  outC->_L1.otherTimingError = kcg_true;
  outC->_L1.radioMessageConsistencyError = kcg_true;
  outC->_L1.nid_c = kcg_lit_int32(0);
  outC->_L1.nid_errorbg = kcg_lit_int32(0);
  outC->baliseError = kcg_true;
  outC->radioMsgError = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void checkOnErrors_reset_xdebugSupport_Pkg(
  outC_checkOnErrors_xdebugSupport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** checkOnErrors_xdebugSupport_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

