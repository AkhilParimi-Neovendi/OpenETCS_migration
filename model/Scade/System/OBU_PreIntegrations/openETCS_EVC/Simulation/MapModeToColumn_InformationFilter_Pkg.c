/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MapModeToColumn_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::MapModeToColumn/ */
void MapModeToColumn_InformationFilter_Pkg(
  /* inMode/ */
  M_MODE inMode,
  outC_MapModeToColumn_InformationFilter_Pkg *outC)
{
  outC->_L28 = kcg_lit_int32(16);
  outC->_L25 = kcg_lit_int32(15);
  outC->_L24 = kcg_lit_int32(14);
  outC->_L23 = kcg_lit_int32(13);
  outC->_L22 = kcg_lit_int32(12);
  outC->_L21 = kcg_lit_int32(11);
  outC->_L20 = kcg_lit_int32(10);
  outC->_L19 = kcg_lit_int32(9);
  outC->_L18 = kcg_lit_int32(8);
  outC->_L17 = kcg_lit_int32(7);
  outC->_L16 = kcg_lit_int32(6);
  outC->_L15 = kcg_lit_int32(5);
  outC->_L14 = kcg_lit_int32(4);
  outC->_L13 = kcg_lit_int32(3);
  outC->_L12 = kcg_lit_int32(2);
  outC->_L11 = kcg_lit_int32(1);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L1 = inMode;
  /* _L2= */
  switch (outC->_L1) {
    case M_MODE_No_Power :
      outC->_L2 = outC->_L10;
      break;
    case M_MODE_Stand_By :
      outC->_L2 = outC->_L11;
      break;
    case M_MODE_Passive_Shunting :
      outC->_L2 = outC->_L12;
      break;
    case M_MODE_Shunting :
      outC->_L2 = outC->_L13;
      break;
    case M_MODE_Full_Supervision :
      outC->_L2 = outC->_L14;
      break;
    case M_MODE_Limited_Supervision :
      outC->_L2 = outC->_L15;
      break;
    case M_MODE_Staff_Responsible :
      outC->_L2 = outC->_L16;
      break;
    case M_MODE_On_Sight :
      outC->_L2 = outC->_L17;
      break;
    case M_MODE_Sleeping :
      outC->_L2 = outC->_L18;
      break;
    case M_MODE_Non_Leading :
      outC->_L2 = outC->_L19;
      break;
    case M_MODE_Unfitted :
      outC->_L2 = outC->_L20;
      break;
    case M_MODE_Trip :
      outC->_L2 = outC->_L21;
      break;
    case M_MODE_Post_Trip :
      outC->_L2 = outC->_L22;
      break;
    case M_MODE_System_Failure :
      outC->_L2 = outC->_L23;
      break;
    case M_MODE_Isolation :
      outC->_L2 = outC->_L24;
      break;
    case M_MODE_National_System :
      outC->_L2 = outC->_L25;
      break;
    case M_MODE_Reversing :
      outC->_L2 = outC->_L28;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->outColumn = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void MapModeToColumn_init_InformationFilter_Pkg(
  outC_MapModeToColumn_InformationFilter_Pkg *outC)
{
  outC->_L28 = kcg_lit_int32(0);
  outC->_L25 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L23 = kcg_lit_int32(0);
  outC->_L22 = kcg_lit_int32(0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  outC->_L19 = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = M_MODE_Full_Supervision;
  outC->outColumn = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MapModeToColumn_reset_InformationFilter_Pkg(
  outC_MapModeToColumn_InformationFilter_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MapModeToColumn_InformationFilter_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

