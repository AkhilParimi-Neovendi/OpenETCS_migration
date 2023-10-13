/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Get_EOA_loop_TA_MA_new.h"

/* TA_MA_new::Get_EOA_loop/ */
void Get_EOA_loop_TA_MA_new(
  /* i/ */
  kcg_int64 i,
  /* acc/ */
  L_internal_Type_Obu_BasicTypes_Pkg acc,
  /* MA_sections/ */
  MovementAuthoritySectionlist_t_TrackAtlasTypes *MA_sections,
  outC_Get_EOA_loop_TA_MA_new *outC)
{
  static L_internal_Type_Obu_BasicTypes_Pkg noname;

  outC->_L42 = DEFAULT_loc_TA_MA_new;
  outC->_L1 = i;
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->_L3,
    MA_sections);
  if ((kcg_lit_int64(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int64(10))) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &outC->_L34,
      &outC->_L3[outC->_L1]);
  }
  else {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &outC->_L34,
      (MovementAuthoritySection_t_TrackAtlasTypes *) &DefaultMA_section_TA_MA_new);
  }
  outC->_L38 = outC->_L34.l_section;
  outC->_L37 = outC->_L34.q_endsection;
  outC->_L35 = outC->_L34.valid;
  outC->_L40 = outC->_L35 & outC->_L37;
  /* _L41= */
  if (outC->_L40) {
    outC->_L41 = outC->_L38;
  }
  else {
    outC->_L41 = outC->_L42;
  }
  outC->_L39 = !outC->_L40;
  outC->_L2 = acc;
  noname = outC->_L2;
  outC->currentEOA = outC->_L41;
  outC->cont = outC->_L39;
}

#ifndef KCG_USER_DEFINED_INIT
void Get_EOA_loop_init_TA_MA_new(outC_Get_EOA_loop_TA_MA_new *outC)
{
  static kcg_size idx;

  outC->_L42 = kcg_lit_int64(0);
  outC->_L41 = kcg_lit_int64(0);
  outC->_L40 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L38 = kcg_lit_int64(0);
  outC->_L37 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L34.valid = kcg_true;
  outC->_L34.q_endsection = kcg_true;
  outC->_L34.l_section = kcg_lit_int64(0);
  outC->_L34.q_sectiontimer = kcg_true;
  outC->_L34.t_sectiontimer = kcg_lit_int64(0);
  outC->_L34.d_sectiontimerstoploc = kcg_lit_int64(0);
  for (idx = 0; idx < 10; idx++) {
    outC->_L3[idx].valid = kcg_true;
    outC->_L3[idx].q_endsection = kcg_true;
    outC->_L3[idx].l_section = kcg_lit_int64(0);
    outC->_L3[idx].q_sectiontimer = kcg_true;
    outC->_L3[idx].t_sectiontimer = kcg_lit_int64(0);
    outC->_L3[idx].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->currentEOA = kcg_lit_int64(0);
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Get_EOA_loop_reset_TA_MA_new(outC_Get_EOA_loop_TA_MA_new *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Get_EOA_loop_TA_MA_new.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

