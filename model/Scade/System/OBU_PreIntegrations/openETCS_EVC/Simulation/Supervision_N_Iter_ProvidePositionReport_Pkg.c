/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_N_Iter_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Supervision_N_Iter/ */
void Supervision_N_Iter_ProvidePositionReport_Pkg(
  /* niter/ */
  N_ITER niter,
  /* iterpacket/ */
  IterPacket58List_T_Packet_Types_Pkg *iterpacket,
  outC_Supervision_N_Iter_ProvidePositionReport_Pkg *outC)
{
  N_ITER noname;
  IterPacket58List_T_Packet_Types_Pkg _1_noname;

  kcg_copy_IterPacket58List_T_Packet_Types_Pkg(&outC->_L3, iterpacket);
  kcg_copy_IterPacket58List_T_Packet_Types_Pkg(&_1_noname, &outC->_L3);
  outC->_L2 = niter;
  noname = outC->_L2;
  outC->_L1 = kcg_false;
  outC->trigger = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void Supervision_N_Iter_init_ProvidePositionReport_Pkg(
  outC_Supervision_N_Iter_ProvidePositionReport_Pkg *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 2; idx++) {
    outC->_L3[idx].d_loc = kcg_lit_int32(0);
    outC->_L3[idx].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_true;
  outC->trigger = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Supervision_N_Iter_reset_ProvidePositionReport_Pkg(
  outC_Supervision_N_Iter_ProvidePositionReport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Supervision_N_Iter_ProvidePositionReport_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

