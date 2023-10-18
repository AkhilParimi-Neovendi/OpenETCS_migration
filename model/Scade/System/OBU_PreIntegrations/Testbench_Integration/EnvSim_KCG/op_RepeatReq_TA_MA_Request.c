/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_RepeatReq_TA_MA_Request.h"

/* TA_MA_Request::op_RepeatReq/ */
void op_RepeatReq_TA_MA_Request(
  /* tcycreq/ */
  T_CYCLOC tcycreq,
  /* setRepeater/ */
  kcg_bool setRepeater,
  /* systemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_op_RepeatReq_TA_MA_Request *outC)
{
  /* lastSystemTime/ */
  static T_internal_Type_Obu_BasicTypes_Pkg last_lastSystemTime;
  /* setRepeater/ */
  static kcg_bool last_setRepeater;

  last_setRepeater = outC->mem_setRepeater;
  outC->mem_setRepeater = setRepeater;
  last_lastSystemTime = outC->lastSystemTime;
  outC->_L28 = tcycreq;
  outC->_L27 = cCycleTime_TA_MA_Request;
  outC->_L29 = outC->_L27 * outC->_L28;
  outC->_L16 = last_lastSystemTime;
  outC->_L22 = systemTime;
  outC->_L21 = last_lastSystemTime;
  outC->_L7 = setRepeater;
  outC->_L9 = systemTime;
  outC->_L5 = outC->_L9 - outC->_L16;
  outC->_L17 = outC->_L5 >= outC->_L29;
  outC->_L19 = outC->_L17 | outC->_L7;
  /* _L20= */
  if (outC->_L19) {
    outC->_L20 = outC->_L22;
  }
  else {
    outC->_L20 = outC->_L21;
  }
  outC->lastSystemTime = outC->_L20;
  outC->_L18 = kcg_false;
  outC->exception = outC->_L18;
  outC->trigger = outC->_L17;
}

#ifndef KCG_USER_DEFINED_INIT
void op_RepeatReq_init_TA_MA_Request(outC_op_RepeatReq_TA_MA_Request *outC)
{
  outC->_L29 = kcg_lit_int64(0);
  outC->_L28 = kcg_lit_int64(0);
  outC->_L27 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L22 = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L5 = kcg_lit_int64(0);
  outC->_L7 = kcg_true;
  outC->_L9 = kcg_lit_int64(0);
  outC->exception = kcg_true;
  outC->trigger = kcg_true;
  outC->lastSystemTime = kcg_lit_int64(0);
  outC->mem_setRepeater = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_RepeatReq_reset_TA_MA_Request(outC_op_RepeatReq_TA_MA_Request *outC)
{
  outC->lastSystemTime = kcg_lit_int64(0);
  outC->mem_setRepeater = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_RepeatReq_TA_MA_Request.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

