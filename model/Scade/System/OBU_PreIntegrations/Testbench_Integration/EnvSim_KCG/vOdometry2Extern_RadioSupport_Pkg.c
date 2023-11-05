/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "vOdometry2Extern_RadioSupport_Pkg.h"

/* RadioSupport_Pkg::vOdometry2Extern/ */
void vOdometry2Extern_RadioSupport_Pkg(
  /* v_odometry/ */
  V_internal_Type_Obu_BasicTypes_Pkg v_odometry,
  outC_vOdometry2Extern_RadioSupport_Pkg *outC)
{
  outC->_L5 = kcg_lit_int32(1000);
  outC->_L3 = kcg_lit_int32(36);
  outC->_L1 = v_odometry;
  outC->_L2 = outC->_L1 * outC->_L3;
  outC->_L4 = outC->_L2 / outC->_L5;
  outC->v_SRS = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void vOdometry2Extern_init_RadioSupport_Pkg(
  outC_vOdometry2Extern_RadioSupport_Pkg *outC)
{
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->v_SRS = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void vOdometry2Extern_reset_RadioSupport_Pkg(
  outC_vOdometry2Extern_RadioSupport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** vOdometry2Extern_RadioSupport_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

