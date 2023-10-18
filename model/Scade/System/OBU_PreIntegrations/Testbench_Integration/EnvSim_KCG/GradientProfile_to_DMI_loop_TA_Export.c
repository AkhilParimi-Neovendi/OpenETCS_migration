/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GradientProfile_to_DMI_loop_TA_Export.h"

/* TA_Export::GradientProfile_to_DMI_loop/ */
void GradientProfile_to_DMI_loop_TA_Export(
  /* Gradient_section_in/ */
  Gradient_section_t_TrackAtlasTypes *Gradient_section_in,
  /* EoA/ */
  L_internal_Type_Obu_BasicTypes_Pkg EoA,
  outC_GradientProfile_to_DMI_loop_TA_Export *outC)
{
  static L_internal_Type_Obu_BasicTypes_Pkg noname;

  outC->_L60 = ZERO_TA_Export;
  outC->_L59 = ZERO_TA_Export;
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L20, Gradient_section_in);
  outC->_L45 = outC->_L20.Gradient;
  outC->_L27 = kcg_lit_int64(0);
  outC->_L25 = kcg_lit_int64(255);
  outC->_L24 = outC->_L45 == outC->_L25;
  /* _L26= */
  if (outC->_L24) {
    outC->_L26 = outC->_L27;
  }
  else {
    outC->_L26 = outC->_L45;
  }
  outC->_L42 = outC->_L20.valid;
  outC->_L43 = outC->_L20.Loc_Absolute;
  outC->_L47 = EoA;
  outC->_L48 = outC->_L47 > outC->_L43;
  outC->_L50 = outC->_L48 & outC->_L42;
  /* _L58= */
  if (outC->_L50) {
    outC->_L58 = outC->_L26;
  }
  else {
    outC->_L58 = outC->_L60;
  }
  outC->_L46 = outC->_L20.L_Gradient;
  outC->_L28 = outC->_L43 + outC->_L46;
  outC->_L51 = EoA;
  outC->_L52 = outC->_L28 > outC->_L51;
  /* _L53= */
  if (outC->_L52) {
    outC->_L53 = outC->_L51;
  }
  else {
    outC->_L53 = outC->_L28;
  }
  /* _L56= */
  if (outC->_L50) {
    outC->_L56 = outC->_L53;
  }
  else {
    outC->_L56 = outC->_L59;
  }
  outC->_L55 = ZERO_TA_Export;
  /* _L54= */
  if (outC->_L50) {
    outC->_L54 = outC->_L43;
  }
  else {
    outC->_L54 = outC->_L55;
  }
  outC->_L44 = outC->_L20.Loc_LRBG;
  noname = outC->_L44;
  outC->_L40.valid = outC->_L50;
  outC->_L40.begin_section = outC->_L54;
  outC->_L40.end_section = outC->_L56;
  outC->_L40.gradient = outC->_L58;
  kcg_copy_GradientProfile_for_DMI_section_t_TrackAtlasTypes(
    &outC->Gradiient_section_for_DMI_out,
    &outC->_L40);
}

#ifndef KCG_USER_DEFINED_INIT
void GradientProfile_to_DMI_loop_init_TA_Export(
  outC_GradientProfile_to_DMI_loop_TA_Export *outC)
{
  outC->_L60 = kcg_lit_int64(0);
  outC->_L59 = kcg_lit_int64(0);
  outC->_L58 = kcg_lit_int64(0);
  outC->_L56 = kcg_lit_int64(0);
  outC->_L55 = kcg_lit_int64(0);
  outC->_L54 = kcg_lit_int64(0);
  outC->_L53 = kcg_lit_int64(0);
  outC->_L52 = kcg_true;
  outC->_L51 = kcg_lit_int64(0);
  outC->_L50 = kcg_true;
  outC->_L48 = kcg_true;
  outC->_L47 = kcg_lit_int64(0);
  outC->_L42 = kcg_true;
  outC->_L43 = kcg_lit_int64(0);
  outC->_L44 = kcg_lit_int64(0);
  outC->_L45 = kcg_lit_int64(0);
  outC->_L46 = kcg_lit_int64(0);
  outC->_L40.valid = kcg_true;
  outC->_L40.begin_section = kcg_lit_int64(0);
  outC->_L40.end_section = kcg_lit_int64(0);
  outC->_L40.gradient = kcg_lit_int64(0);
  outC->_L28 = kcg_lit_int64(0);
  outC->_L27 = kcg_lit_int64(0);
  outC->_L26 = kcg_lit_int64(0);
  outC->_L24 = kcg_true;
  outC->_L25 = kcg_lit_int64(0);
  outC->_L20.valid = kcg_true;
  outC->_L20.Loc_Absolute = kcg_lit_int64(0);
  outC->_L20.Loc_LRBG = kcg_lit_int64(0);
  outC->_L20.Gradient = kcg_lit_int64(0);
  outC->_L20.L_Gradient = kcg_lit_int64(0);
  outC->Gradiient_section_for_DMI_out.valid = kcg_true;
  outC->Gradiient_section_for_DMI_out.begin_section = kcg_lit_int64(0);
  outC->Gradiient_section_for_DMI_out.end_section = kcg_lit_int64(0);
  outC->Gradiient_section_for_DMI_out.gradient = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GradientProfile_to_DMI_loop_reset_TA_Export(
  outC_GradientProfile_to_DMI_loop_TA_Export *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GradientProfile_to_DMI_loop_TA_Export.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

