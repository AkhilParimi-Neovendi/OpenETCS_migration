/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveGPSectionsAbsolute_Loop_new_TA_Lib_internal.h"

/* TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new/ */
void MoveGPSectionsAbsolute_Loop_new_TA_Lib_internal(
  /* i/ */
  kcg_int64 i,
  /* ProfileIn/ */
  GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_MoveGPSectionsAbsolute_Loop_new_TA_Lib_internal *outC)
{
  outC->_L259 = pos_LRBG;
  outC->_L257 = kcg_lit_int64(0);
  outC->_L1 = i;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L2, ProfileIn);
  if ((kcg_lit_int64(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int64(50))) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L6, &outC->_L2[outC->_L1]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L6,
      (Gradient_section_t_TrackAtlasTypes *)
        &DEFAULT_GradientSection_TrackAtlasTypes);
  }
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L256, &outC->_L6);
  if (kcg_true) {
    outC->_L256.Loc_LRBG = outC->_L257;
  }
  outC->_L255 = kcg_lit_int64(0);
  outC->_L143 = outC->_L6.valid;
  /* _L254= */
  if (outC->_L143) {
    outC->_L254 = outC->_L259;
  }
  else {
    outC->_L254 = outC->_L255;
  }
  outC->_L130 = outC->_L6.Loc_Absolute;
  outC->_L10 = outC->_L130 + outC->_L254;
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L9, &outC->_L256);
  if (kcg_true) {
    outC->_L9.Loc_Absolute = outC->_L10;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L7, &outC->_L2);
  if ((kcg_lit_int64(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int64(50))) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L7[outC->_L1], &outC->_L9);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->ProfileOut, &outC->_L7);
}

#ifndef KCG_USER_DEFINED_INIT
void MoveGPSectionsAbsolute_Loop_new_init_TA_Lib_internal(
  outC_MoveGPSectionsAbsolute_Loop_new_TA_Lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L259 = kcg_lit_int64(0);
  outC->_L257 = kcg_lit_int64(0);
  outC->_L256.valid = kcg_true;
  outC->_L256.Loc_Absolute = kcg_lit_int64(0);
  outC->_L256.Loc_LRBG = kcg_lit_int64(0);
  outC->_L256.Gradient = kcg_lit_int64(0);
  outC->_L256.L_Gradient = kcg_lit_int64(0);
  outC->_L255 = kcg_lit_int64(0);
  outC->_L254 = kcg_lit_int64(0);
  outC->_L143 = kcg_true;
  outC->_L130 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.Loc_Absolute = kcg_lit_int64(0);
  outC->_L9.Loc_LRBG = kcg_lit_int64(0);
  outC->_L9.Gradient = kcg_lit_int64(0);
  outC->_L9.L_Gradient = kcg_lit_int64(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L7[idx].valid = kcg_true;
    outC->_L7[idx].Loc_Absolute = kcg_lit_int64(0);
    outC->_L7[idx].Loc_LRBG = kcg_lit_int64(0);
    outC->_L7[idx].Gradient = kcg_lit_int64(0);
    outC->_L7[idx].L_Gradient = kcg_lit_int64(0);
  }
  outC->_L6.valid = kcg_true;
  outC->_L6.Loc_Absolute = kcg_lit_int64(0);
  outC->_L6.Loc_LRBG = kcg_lit_int64(0);
  outC->_L6.Gradient = kcg_lit_int64(0);
  outC->_L6.L_Gradient = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L2[idx1].valid = kcg_true;
    outC->_L2[idx1].Loc_Absolute = kcg_lit_int64(0);
    outC->_L2[idx1].Loc_LRBG = kcg_lit_int64(0);
    outC->_L2[idx1].Gradient = kcg_lit_int64(0);
    outC->_L2[idx1].L_Gradient = kcg_lit_int64(0);
  }
  outC->_L1 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->ProfileOut[idx2].valid = kcg_true;
    outC->ProfileOut[idx2].Loc_Absolute = kcg_lit_int64(0);
    outC->ProfileOut[idx2].Loc_LRBG = kcg_lit_int64(0);
    outC->ProfileOut[idx2].Gradient = kcg_lit_int64(0);
    outC->ProfileOut[idx2].L_Gradient = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MoveGPSectionsAbsolute_Loop_new_reset_TA_Lib_internal(
  outC_MoveGPSectionsAbsolute_Loop_new_TA_Lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MoveGPSectionsAbsolute_Loop_new_TA_Lib_internal.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

