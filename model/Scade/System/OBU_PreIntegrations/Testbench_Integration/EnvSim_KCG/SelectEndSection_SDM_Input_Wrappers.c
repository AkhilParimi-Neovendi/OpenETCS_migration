/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectEndSection_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::SelectEndSection/ */
void SelectEndSection_SDM_Input_Wrappers(
  /* I/ */
  L_internal_Type_Obu_BasicTypes_Pkg I,
  /* section/ */
  MovementAuthoritySection_t_TrackAtlasTypes *section,
  outC_SelectEndSection_SDM_Input_Wrappers *outC)
{
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&outC->_L2, section);
  outC->_L10 = outC->_L2.q_endsection;
  outC->_L4 = outC->_L2.valid;
  outC->_L11 = outC->_L4 & outC->_L10;
  outC->_L12 = !outC->_L11;
  outC->_L8 = I;
  outC->_L5 = outC->_L2.l_section;
  /* _L6= */
  if (outC->_L11) {
    outC->_L6 = outC->_L5;
  }
  else {
    outC->_L6 = outC->_L8;
  }
  outC->go_on = outC->_L12;
  outC->eoa = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void SelectEndSection_init_SDM_Input_Wrappers(
  outC_SelectEndSection_SDM_Input_Wrappers *outC)
{
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L8 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.q_endsection = kcg_true;
  outC->_L2.l_section = kcg_lit_int32(0);
  outC->_L2.q_sectiontimer = kcg_true;
  outC->_L2.t_sectiontimer = kcg_lit_int32(0);
  outC->_L2.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->eoa = kcg_lit_int32(0);
  outC->go_on = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SelectEndSection_reset_SDM_Input_Wrappers(
  outC_SelectEndSection_SDM_Input_Wrappers *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SelectEndSection_SDM_Input_Wrappers.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

