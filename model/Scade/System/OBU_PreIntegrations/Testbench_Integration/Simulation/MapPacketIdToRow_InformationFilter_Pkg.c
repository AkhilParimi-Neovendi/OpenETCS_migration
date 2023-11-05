/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MapPacketIdToRow_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::MapPacketIdToRow/ */
void MapPacketIdToRow_InformationFilter_Pkg(
  /* inPacketId/ */
  kcg_int32 inPacketId,
  outC_MapPacketIdToRow_InformationFilter_Pkg *outC)
{
  outC->_L1 = inPacketId;
  outC->outRow = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void MapPacketIdToRow_init_InformationFilter_Pkg(
  outC_MapPacketIdToRow_InformationFilter_Pkg *outC)
{
  outC->_L1 = kcg_lit_int32(0);
  outC->outRow = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MapPacketIdToRow_reset_InformationFilter_Pkg(
  outC_MapPacketIdToRow_InformationFilter_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MapPacketIdToRow_InformationFilter_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

