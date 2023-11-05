/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveGPSectionsAbsolute_new_TA_Lib_internal.h"

/* TA_Lib_internal::MoveGPSectionsAbsolute_new/ */
void MoveGPSectionsAbsolute_new_TA_Lib_internal(
  /* ProfileIn/ */
  GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_MoveGPSectionsAbsolute_new_TA_Lib_internal *outC)
{
  static kcg_size idx;
  static GradientProfile_t_TrackAtlasTypes acc;
  static kcg_size idx1;

  outC->_L37 = pos_LRBG;
  /* _L40/ */
  for (idx = 0; idx < 50; idx++) {
    outC->_L40[idx] = outC->_L37;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L2, ProfileIn);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L4, &outC->_L2);
  /* _L4= */
  for (idx1 = 0; idx1 < 50; idx1++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&acc, &outC->_L4);
    /* _L4=(TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new#1)/ */
    MoveGPSectionsAbsolute_Loop_new_TA_Lib_internal(
      /* _L4= */(kcg_int32) idx1,
      &acc,
      outC->_L40[idx1],
      &outC->Context_MoveGPSectionsAbsolute_Loop_new_1[idx1]);
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &outC->_L4,
      &outC->Context_MoveGPSectionsAbsolute_Loop_new_1[idx1].ProfileOut);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->ProfileOut, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void MoveGPSectionsAbsolute_new_init_TA_Lib_internal(
  outC_MoveGPSectionsAbsolute_new_TA_Lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L40[idx1] = kcg_lit_int32(0);
  }
  outC->_L37 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L4[idx2].valid = kcg_true;
    outC->_L4[idx2].Loc_Absolute = kcg_lit_int32(0);
    outC->_L4[idx2].Loc_LRBG = kcg_lit_int32(0);
    outC->_L4[idx2].Gradient = kcg_lit_int32(0);
    outC->_L4[idx2].L_Gradient = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L2[idx3].valid = kcg_true;
    outC->_L2[idx3].Loc_Absolute = kcg_lit_int32(0);
    outC->_L2[idx3].Loc_LRBG = kcg_lit_int32(0);
    outC->_L2[idx3].Gradient = kcg_lit_int32(0);
    outC->_L2[idx3].L_Gradient = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->ProfileOut[idx4].valid = kcg_true;
    outC->ProfileOut[idx4].Loc_Absolute = kcg_lit_int32(0);
    outC->ProfileOut[idx4].Loc_LRBG = kcg_lit_int32(0);
    outC->ProfileOut[idx4].Gradient = kcg_lit_int32(0);
    outC->ProfileOut[idx4].L_Gradient = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 50; idx++) {
    /* _L4=(TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new#1)/ */
    MoveGPSectionsAbsolute_Loop_new_init_TA_Lib_internal(
      &outC->Context_MoveGPSectionsAbsolute_Loop_new_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MoveGPSectionsAbsolute_new_reset_TA_Lib_internal(
  outC_MoveGPSectionsAbsolute_new_TA_Lib_internal *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 50; idx++) {
    /* _L4=(TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new#1)/ */
    MoveGPSectionsAbsolute_Loop_new_reset_TA_Lib_internal(
      &outC->Context_MoveGPSectionsAbsolute_Loop_new_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MoveGPSectionsAbsolute_new_TA_Lib_internal.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

