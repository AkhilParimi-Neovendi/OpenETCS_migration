/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeMLRequests_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::MergeMLRequests/ */
void MergeMLRequests_SDM_Commands_Pkg(
  /* revokedCmd/ */
  kcg_bool revokedCmd,
  /* req/ */
  kcg_bool req,
  /* triggeredCmd/ */
  kcg_bool triggeredCmd,
  outC_MergeMLRequests_SDM_Commands_Pkg *outC)
{
  /* triggered/ */
  static kcg_bool last_triggered;
  /* revoked/ */
  static kcg_bool last_revoked;
  /* req/ */
  static kcg_bool last_req;

  last_req = outC->mem_req;
  outC->mem_req = req;
  last_triggered = outC->triggered;
  last_revoked = outC->revoked;
  outC->_L77 = triggeredCmd;
  outC->_L76 = revokedCmd;
  outC->_L2 = req;
  outC->_L54 = outC->_L77 | outC->_L2;
  outC->triggered = outC->_L54;
  outC->_L62 = last_req;
  outC->_L61 = outC->_L2 ^ outC->_L62;
  outC->_L64 = outC->_L61 & outC->_L62;
  outC->_L57 = !outC->_L77;
  outC->_L58 = outC->_L57 & outC->_L64;
  outC->_L59 = outC->_L76 | outC->_L58;
  outC->revoked = outC->_L59;
}

#ifndef KCG_USER_DEFINED_INIT
void MergeMLRequests_init_SDM_Commands_Pkg(
  outC_MergeMLRequests_SDM_Commands_Pkg *outC)
{
  outC->_L77 = kcg_true;
  outC->_L76 = kcg_true;
  outC->_L64 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L59 = kcg_true;
  outC->_L58 = kcg_true;
  outC->_L57 = kcg_true;
  outC->_L54 = kcg_true;
  outC->_L2 = kcg_true;
  outC->revoked = kcg_false;
  outC->triggered = kcg_false;
  outC->mem_req = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MergeMLRequests_reset_SDM_Commands_Pkg(
  outC_MergeMLRequests_SDM_Commands_Pkg *outC)
{
  outC->revoked = kcg_false;
  outC->triggered = kcg_false;
  outC->mem_req = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MergeMLRequests_SDM_Commands_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

