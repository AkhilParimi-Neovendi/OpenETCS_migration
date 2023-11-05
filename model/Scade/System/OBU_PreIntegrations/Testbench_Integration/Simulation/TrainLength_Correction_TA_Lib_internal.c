/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainLength_Correction_TA_Lib_internal.h"

/* TA_Lib_internal::TrainLength_Correction/ */
void TrainLength_Correction_TA_Lib_internal(
  /* Static_Speed_Profile/ */
  StaticSpeedProfile_t_TrackAtlasTypes *Static_Speed_Profile,
  /* train_length/ */
  L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* i/ */
  kcg_int32 i,
  /* v_static/ */
  V_internal_Type_Obu_BasicTypes_Pkg v_static,
  /* distance/ */
  L_internal_Type_Obu_BasicTypes_Pkg distance,
  outC_TrainLength_Correction_TA_Lib_internal *outC)
{
  outC->_L10 = v_static;
  outC->_L14 = kcg_lit_int32(635);
  outC->_L16 = outC->_L14 != outC->_L10;
  outC->_L7 = kcg_lit_int32(1);
  outC->_L3 = i;
  outC->_L6 = outC->_L3 - outC->_L7;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L1, Static_Speed_Profile);
  if ((kcg_lit_int32(0) <= outC->_L6) & (outC->_L6 < kcg_lit_int32(50))) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L5,
      &outC->_L1[outC->_L6]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L5,
      (StaticSpeedSection_t_TrackAtlasTypes *) &DEFAULT_SSP_section_TA_SSP);
  }
  outC->_L9 = outC->_L5.v_static;
  outC->_L11 = outC->_L10 > outC->_L9;
  outC->_L15 = outC->_L16 & outC->_L11;
  outC->_L4 = distance;
  outC->_L2 = train_length;
  outC->_L13 = outC->_L2 + outC->_L4;
  /* _L12= */
  if (outC->_L15) {
    outC->_L12 = outC->_L13;
  }
  else {
    outC->_L12 = outC->_L4;
  }
  outC->corrected_distance = outC->_L12;
}

#ifndef KCG_USER_DEFINED_INIT
void TrainLength_Correction_init_TA_Lib_internal(
  outC_TrainLength_Correction_TA_Lib_internal *outC)
{
  static kcg_size idx;

  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5.valid = kcg_true;
  outC->_L5.d_static_abs = kcg_lit_int32(0);
  outC->_L5.d_static_LRBG = kcg_lit_int32(0);
  outC->_L5.q_train_length_corr = kcg_true;
  outC->_L5.v_static = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L1[idx].valid = kcg_true;
    outC->_L1[idx].d_static_abs = kcg_lit_int32(0);
    outC->_L1[idx].d_static_LRBG = kcg_lit_int32(0);
    outC->_L1[idx].q_train_length_corr = kcg_true;
    outC->_L1[idx].v_static = kcg_lit_int32(0);
  }
  outC->corrected_distance = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrainLength_Correction_reset_TA_Lib_internal(
  outC_TrainLength_Correction_TA_Lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrainLength_Correction_TA_Lib_internal.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

