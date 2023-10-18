/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "copyGradientElement_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::copyGradientElement/ */
void copyGradientElement_manage_DMI_Output_Pkg(
  /* index/ */
  kcg_int64 index,
  /* fromTrackAtlas/ */
  GradientProfile_for_DMI_section_t_TrackAtlasTypes *fromTrackAtlas,
  outC_copyGradientElement_manage_DMI_Output_Pkg *outC)
{
  static kcg_int64 noname;

  outC->_L7 = index;
  noname = outC->_L7;
  kcg_copy_GradientProfile_for_DMI_section_t_TrackAtlasTypes(
    &outC->_L1,
    fromTrackAtlas);
  outC->_L6 = outC->_L1.valid;
  outC->_1_continue = outC->_L6;
  outC->_L5 = outC->_L1.begin_section;
  outC->_L4 = outC->_L1.end_section;
  outC->_L3 = outC->_L1.gradient;
  outC->_L2.valid = outC->_L6;
  outC->_L2.begin_section = outC->_L5;
  outC->_L2.end_section = outC->_L4;
  outC->_L2.gradient = outC->_L3;
  kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg(&outC->toDMI, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void copyGradientElement_init_manage_DMI_Output_Pkg(
  outC_copyGradientElement_manage_DMI_Output_Pkg *outC)
{
  outC->_L7 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L6 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.begin_section = kcg_lit_int64(0);
  outC->_L2.end_section = kcg_lit_int64(0);
  outC->_L2.gradient = kcg_lit_int64(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.begin_section = kcg_lit_int64(0);
  outC->_L1.end_section = kcg_lit_int64(0);
  outC->_L1.gradient = kcg_lit_int64(0);
  outC->toDMI.valid = kcg_true;
  outC->toDMI.begin_section = kcg_lit_int64(0);
  outC->toDMI.end_section = kcg_lit_int64(0);
  outC->toDMI.gradient = kcg_lit_int64(0);
  outC->_1_continue = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void copyGradientElement_reset_manage_DMI_Output_Pkg(
  outC_copyGradientElement_manage_DMI_Output_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** copyGradientElement_manage_DMI_Output_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

