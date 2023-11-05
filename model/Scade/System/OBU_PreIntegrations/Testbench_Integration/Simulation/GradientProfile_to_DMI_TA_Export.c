/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GradientProfile_to_DMI_TA_Export.h"

/* TA_Export::GradientProfile_to_DMI/ */
void GradientProfile_to_DMI_TA_Export(
  /* EoA/ */
  L_internal_Type_Obu_BasicTypes_Pkg EoA,
  /* Gradient_Profile_in/ */
  GradientProfile_t_TrackAtlasTypes *Gradient_Profile_in,
  outC_GradientProfile_to_DMI_TA_Export *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L3 = EoA;
  /* _L4/ */
  for (idx = 0; idx < 50; idx++) {
    outC->_L4[idx] = outC->_L3;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L1, Gradient_Profile_in);
  /* _L2= */
  for (idx1 = 0; idx1 < 50; idx1++) {
    /* _L2=(TA_Export::GradientProfile_to_DMI_loop#1)/ */
    GradientProfile_to_DMI_loop_TA_Export(
      &outC->_L1[idx1],
      outC->_L4[idx1],
      &outC->Context_GradientProfile_to_DMI_loop_1[idx1]);
    kcg_copy_GradientProfile_for_DMI_section_t_TrackAtlasTypes(
      &outC->_L2[idx1],
      &outC->Context_GradientProfile_to_DMI_loop_1[idx1].Gradiient_section_for_DMI_out);
  }
  kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes(
    &outC->Gradient_Profile_for_DMI_out,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void GradientProfile_to_DMI_init_TA_Export(
  outC_GradientProfile_to_DMI_TA_Export *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L4[idx1] = kcg_lit_int32(0);
  }
  outC->_L3 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L2[idx2].valid = kcg_true;
    outC->_L2[idx2].begin_section = kcg_lit_int32(0);
    outC->_L2[idx2].end_section = kcg_lit_int32(0);
    outC->_L2[idx2].gradient = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L1[idx3].valid = kcg_true;
    outC->_L1[idx3].Loc_Absolute = kcg_lit_int32(0);
    outC->_L1[idx3].Loc_LRBG = kcg_lit_int32(0);
    outC->_L1[idx3].Gradient = kcg_lit_int32(0);
    outC->_L1[idx3].L_Gradient = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->Gradient_Profile_for_DMI_out[idx4].valid = kcg_true;
    outC->Gradient_Profile_for_DMI_out[idx4].begin_section = kcg_lit_int32(0);
    outC->Gradient_Profile_for_DMI_out[idx4].end_section = kcg_lit_int32(0);
    outC->Gradient_Profile_for_DMI_out[idx4].gradient = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 50; idx++) {
    /* _L2=(TA_Export::GradientProfile_to_DMI_loop#1)/ */
    GradientProfile_to_DMI_loop_init_TA_Export(
      &outC->Context_GradientProfile_to_DMI_loop_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GradientProfile_to_DMI_reset_TA_Export(
  outC_GradientProfile_to_DMI_TA_Export *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 50; idx++) {
    /* _L2=(TA_Export::GradientProfile_to_DMI_loop#1)/ */
    GradientProfile_to_DMI_loop_reset_TA_Export(
      &outC->Context_GradientProfile_to_DMI_loop_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GradientProfile_to_DMI_TA_Export.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

