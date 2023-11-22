/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_D_Cycloc_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Supervision_D_Cycloc/ */
void Supervision_D_Cycloc_ProvidePositionReport_Pkg(
  /* dcycloc/ */
  D_CYCLOC dcycloc,
  outC_Supervision_D_Cycloc_ProvidePositionReport_Pkg *outC)
{
  D_CYCLOC noname;

  outC->_L2 = dcycloc;
  noname = outC->_L2;
  outC->_L1 = kcg_false;
  outC->trigger = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void Supervision_D_Cycloc_init_ProvidePositionReport_Pkg(
  outC_Supervision_D_Cycloc_ProvidePositionReport_Pkg *outC)
{
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_true;
  outC->trigger = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Supervision_D_Cycloc_reset_ProvidePositionReport_Pkg(
  outC_Supervision_D_Cycloc_ProvidePositionReport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Supervision_D_Cycloc_ProvidePositionReport_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

