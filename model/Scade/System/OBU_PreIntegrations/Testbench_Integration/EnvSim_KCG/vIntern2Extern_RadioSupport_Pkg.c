/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "vIntern2Extern_RadioSupport_Pkg.h"

/* RadioSupport_Pkg::vIntern2Extern/ */
void vIntern2Extern_RadioSupport_Pkg(
  /* v_intern/ */
  V_internal_Type_Obu_BasicTypes_Pkg v_intern,
  outC_vIntern2Extern_RadioSupport_Pkg *outC)
{
  outC->_L5 = kcg_lit_int64(5000);
  outC->_L3 = kcg_lit_int64(36);
  outC->_L1 = v_intern;
  outC->_L2 = outC->_L1 * outC->_L3;
  outC->_L4 = outC->_L2 / outC->_L5;
  outC->v_SRS = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void vIntern2Extern_init_RadioSupport_Pkg(
  outC_vIntern2Extern_RadioSupport_Pkg *outC)
{
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->v_SRS = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void vIntern2Extern_reset_RadioSupport_Pkg(
  outC_vIntern2Extern_RadioSupport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** vIntern2Extern_RadioSupport_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

