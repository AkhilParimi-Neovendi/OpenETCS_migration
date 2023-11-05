/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Move_DP_or_OL_new_TA_Lib_internal.h"

/* TA_Lib_internal::Move_DP_or_OL_new/ */
void Move_DP_or_OL_new_TA_Lib_internal(
  /* DP_or_OL_in/ */
  DP_or_OL_t_TrackAtlasTypes *DP_or_OL_in,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_Move_DP_or_OL_new_TA_Lib_internal *outC)
{
  outC->_L142 = pos_LRBG;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L2, DP_or_OL_in);
  outC->_L130 = outC->_L2.d_DP_or_OL;
  outC->_L10 = outC->_L130 + outC->_L142;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L9, &outC->_L2);
  if (kcg_true) {
    outC->_L9.d_DP_or_OL = outC->_L10;
  }
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->DP_or_OL_out, &outC->_L9);
}

#ifndef KCG_USER_DEFINED_INIT
void Move_DP_or_OL_new_init_TA_Lib_internal(
  outC_Move_DP_or_OL_new_TA_Lib_internal *outC)
{
  outC->_L142 = kcg_lit_int32(0);
  outC->_L130 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L9.v_release = kcg_lit_int32(0);
  outC->_L9.calc_v_release_onboard = kcg_true;
  outC->_L2.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L2.v_release = kcg_lit_int32(0);
  outC->_L2.calc_v_release_onboard = kcg_true;
  outC->DP_or_OL_out.d_DP_or_OL = kcg_lit_int32(0);
  outC->DP_or_OL_out.v_release = kcg_lit_int32(0);
  outC->DP_or_OL_out.calc_v_release_onboard = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Move_DP_or_OL_new_reset_TA_Lib_internal(
  outC_Move_DP_or_OL_new_TA_Lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Move_DP_or_OL_new_TA_Lib_internal.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

