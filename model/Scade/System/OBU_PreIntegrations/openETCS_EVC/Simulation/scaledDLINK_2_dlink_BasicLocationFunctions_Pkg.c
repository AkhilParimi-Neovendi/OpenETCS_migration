/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink/ */
void scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
  /* q_scale/ */
  Q_SCALE q_scale,
  /* d_link/ */
  D_LINK d_link,
  /* q_locacc/ */
  Q_LOCACC q_locacc,
  outC_scaledDLINK_2_dlink_BasicLocationFunctions_Pkg *outC)
{
  outC->_L11 = cQLOCACC_resolution_TrainPosition_Types_Pck;
  outC->_L3 = q_locacc;
  outC->_L15 = outC->_L3 * outC->_L11;
  outC->_L25 = - outC->_L15;
  outC->_L8 = cQ_SCALE_10_cm_resolution_TrainPosition_Types_Pck;
  outC->_L2 = d_link;
  outC->_L12 = outC->_L2 * outC->_L8;
  outC->_L10 = cQ_SCALE_1_m_resolution_TrainPosition_Types_Pck;
  outC->_L13 = outC->_L2 * outC->_L10;
  outC->_L9 = cQ_SCALE_10_m_resolution_TrainPosition_Types_Pck;
  outC->_L14 = outC->_L2 * outC->_L9;
  outC->_L1 = q_scale;
  /* _L7= */
  switch (outC->_L1) {
    case Q_SCALE_10_cm_scale :
      outC->_L7 = outC->_L12;
      break;
    case Q_SCALE_1_m_scale :
      outC->_L7 = outC->_L13;
      break;
    case Q_SCALE_10_m_scale :
      outC->_L7 = outC->_L14;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L22.nominal = outC->_L7;
  outC->_L22.d_min = outC->_L25;
  outC->_L22.d_max = outC->_L15;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->distance, &outC->_L22);
}

#ifndef KCG_USER_DEFINED_INIT
void scaledDLINK_2_dlink_init_BasicLocationFunctions_Pkg(
  outC_scaledDLINK_2_dlink_BasicLocationFunctions_Pkg *outC)
{
  outC->_L25 = kcg_lit_int32(0);
  outC->_L22.nominal = kcg_lit_int32(0);
  outC->_L22.d_min = kcg_lit_int32(0);
  outC->_L22.d_max = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = Q_SCALE_10_cm_scale;
  outC->distance.nominal = kcg_lit_int32(0);
  outC->distance.d_min = kcg_lit_int32(0);
  outC->distance.d_max = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void scaledDLINK_2_dlink_reset_BasicLocationFunctions_Pkg(
  outC_scaledDLINK_2_dlink_BasicLocationFunctions_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

