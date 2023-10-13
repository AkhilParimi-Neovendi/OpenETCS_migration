/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveSSPSectionsAbsolute_new_TA_Lib_internal.h"

/* TA_Lib_internal::MoveSSPSectionsAbsolute_new/ */
void MoveSSPSectionsAbsolute_new_TA_Lib_internal(
  /* ProfileIn/ */
  StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_MoveSSPSectionsAbsolute_new_TA_Lib_internal *outC)
{
  static kcg_size idx;
  static StaticSpeedProfile_t_TrackAtlasTypes acc;
  static kcg_size idx1;

  outC->_L37 = pos_LRBG;
  /* _L40/ */
  for (idx = 0; idx < 50; idx++) {
    outC->_L40[idx] = outC->_L37;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L2, ProfileIn);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L4, &outC->_L2);
  /* _L4= */
  for (idx1 = 0; idx1 < 50; idx1++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&acc, &outC->_L4);
    /* _L4=(TA_Lib_internal::MoveSSPSectionsAbsolute_Loop_new#1)/ */
    MoveSSPSectionsAbsolute_Loop_new_TA_Lib_internal(
      /* _L4= */(kcg_int64) idx1,
      &acc,
      outC->_L40[idx1],
      &outC->Context_MoveSSPSectionsAbsolute_Loop_new_1[idx1]);
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &outC->_L4,
      &outC->Context_MoveSSPSectionsAbsolute_Loop_new_1[idx1].ProfileOut);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->ProfileOut, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void MoveSSPSectionsAbsolute_new_init_TA_Lib_internal(
  outC_MoveSSPSectionsAbsolute_new_TA_Lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L40[idx1] = kcg_lit_int64(0);
  }
  outC->_L37 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L4[idx2].valid = kcg_true;
    outC->_L4[idx2].d_static_abs = kcg_lit_int64(0);
    outC->_L4[idx2].d_static_LRBG = kcg_lit_int64(0);
    outC->_L4[idx2].q_train_length_corr = kcg_true;
    outC->_L4[idx2].v_static = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L2[idx3].valid = kcg_true;
    outC->_L2[idx3].d_static_abs = kcg_lit_int64(0);
    outC->_L2[idx3].d_static_LRBG = kcg_lit_int64(0);
    outC->_L2[idx3].q_train_length_corr = kcg_true;
    outC->_L2[idx3].v_static = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->ProfileOut[idx4].valid = kcg_true;
    outC->ProfileOut[idx4].d_static_abs = kcg_lit_int64(0);
    outC->ProfileOut[idx4].d_static_LRBG = kcg_lit_int64(0);
    outC->ProfileOut[idx4].q_train_length_corr = kcg_true;
    outC->ProfileOut[idx4].v_static = kcg_lit_int64(0);
  }
  for (idx = 0; idx < 50; idx++) {
    /* _L4=(TA_Lib_internal::MoveSSPSectionsAbsolute_Loop_new#1)/ */
    MoveSSPSectionsAbsolute_Loop_new_init_TA_Lib_internal(
      &outC->Context_MoveSSPSectionsAbsolute_Loop_new_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MoveSSPSectionsAbsolute_new_reset_TA_Lib_internal(
  outC_MoveSSPSectionsAbsolute_new_TA_Lib_internal *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 50; idx++) {
    /* _L4=(TA_Lib_internal::MoveSSPSectionsAbsolute_Loop_new#1)/ */
    MoveSSPSectionsAbsolute_Loop_new_reset_TA_Lib_internal(
      &outC->Context_MoveSSPSectionsAbsolute_Loop_new_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MoveSSPSectionsAbsolute_new_TA_Lib_internal.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

