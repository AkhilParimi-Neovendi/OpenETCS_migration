/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Find_First_Gsection_Af_TA_Gradient_new.h"

/* TA_Gradient_new::GP_Find_First_Gsection_After_BG_loop/ */
void GP_Find_First_Gsection_Af_TA_Gradient_new(
  /* i/ */
  kcg_int32 i,
  /* Acc/ */
  kcg_int32 Acc,
  /* Profile_in/ */
  GradientProfile_t_TrackAtlasTypes *Profile_in,
  outC_GP_Find_First_Gsection_Af_TA_Gradient_new *outC)
{
  kcg_int32 noname;

  outC->_L14 = kcg_lit_int32(1);
  outC->_L5 = i;
  outC->_L13 = outC->_L5 - outC->_L14;
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = outC->_L13 < outC->_L16;
  /* _L17= */
  if (outC->_L15) {
    outC->_L17 = outC->_L16;
  }
  else {
    outC->_L17 = outC->_L13;
  }
  outC->_L12 = kcg_lit_int32(0);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L7, Profile_in);
  if ((kcg_lit_int32(0) <= outC->_L5) & (outC->_L5 < kcg_lit_int32(50))) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L9, &outC->_L7[outC->_L5]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L9,
      (Gradient_section_t_TrackAtlasTypes *) &DEFAULT_GP_Section_TA_Gradient_new);
  }
  outC->_L10 = outC->_L9.Loc_LRBG;
  outC->_L11 = outC->_L10 < outC->_L12;
  outC->_L6 = Acc;
  noname = outC->_L6;
  outC->Pointer = outC->_L17;
  outC->cont = outC->_L11;
}

#ifndef KCG_USER_DEFINED_INIT
void GP_Find_First_Gsection_Af_init_TA_Gradient_new(
  outC_GP_Find_First_Gsection_Af_TA_Gradient_new *outC)
{
  kcg_size idx;

  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.Loc_Absolute = kcg_lit_int32(0);
  outC->_L9.Loc_LRBG = kcg_lit_int32(0);
  outC->_L9.Gradient = kcg_lit_int32(0);
  outC->_L9.L_Gradient = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L7[idx].valid = kcg_true;
    outC->_L7[idx].Loc_Absolute = kcg_lit_int32(0);
    outC->_L7[idx].Loc_LRBG = kcg_lit_int32(0);
    outC->_L7[idx].Gradient = kcg_lit_int32(0);
    outC->_L7[idx].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->Pointer = kcg_lit_int32(0);
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GP_Find_First_Gsection_Af_reset_TA_Gradient_new(
  outC_GP_Find_First_Gsection_Af_TA_Gradient_new *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Find_First_Gsection_Af_TA_Gradient_new.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

