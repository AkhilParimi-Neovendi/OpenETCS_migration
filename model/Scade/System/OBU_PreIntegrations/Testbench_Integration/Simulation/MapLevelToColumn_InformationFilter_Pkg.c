/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MapLevelToColumn_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::MapLevelToColumn/ */
void MapLevelToColumn_InformationFilter_Pkg(
  /* inLevel/ */
  M_LEVEL inLevel,
  outC_MapLevelToColumn_InformationFilter_Pkg *outC)
{
  outC->_L7 = kcg_lit_int32(4);
  outC->_L6 = kcg_lit_int32(3);
  outC->_L5 = kcg_lit_int32(2);
  outC->_L4 = kcg_lit_int32(1);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L1 = inLevel;
  /* _L2= */
  switch (outC->_L1) {
    case M_LEVEL_Level_0 :
      outC->_L2 = outC->_L3;
      break;
    case M_LEVEL_Level_NTC_specified_by_NID_NTC :
      outC->_L2 = outC->_L4;
      break;
    case M_LEVEL_Level_1 :
      outC->_L2 = outC->_L5;
      break;
    case M_LEVEL_Level_2 :
      outC->_L2 = outC->_L6;
      break;
    case M_LEVEL_Level_3 :
      outC->_L2 = outC->_L7;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->outColumn = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void MapLevelToColumn_init_InformationFilter_Pkg(
  outC_MapLevelToColumn_InformationFilter_Pkg *outC)
{
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = M_LEVEL_Level_0;
  outC->outColumn = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MapLevelToColumn_reset_InformationFilter_Pkg(
  outC_MapLevelToColumn_InformationFilter_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MapLevelToColumn_InformationFilter_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

