/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CompareSectionTimer_TA_MA_Request.h"

/* TA_MA_Request::CompareSectionTimer/ */
void CompareSectionTimer_TA_MA_Request(
  /* timer/ */
  T_internal_Type_Obu_BasicTypes_Pkg timer,
  /* ma_section/ */
  MovementAuthoritySection_t_TrackAtlasTypes *ma_section,
  outC_CompareSectionTimer_TA_MA_Request *outC)
{
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&outC->_L2, ma_section);
  outC->_L10 = outC->_L2.q_sectiontimer;
  outC->_L9 = outC->_L2.valid;
  outC->_L12 = outC->_L9 & outC->_L10;
  outC->_L11 = !outC->_L12;
  outC->_L3 = outC->_L2.t_sectiontimer;
  outC->_L1 = timer;
  outC->_L7 = outC->_L1 <= outC->_L3;
  outC->_L8 = outC->_L11 | outC->_L7;
  /* _L5= */
  if (outC->_L8) {
    outC->_L5 = outC->_L1;
  }
  else {
    outC->_L5 = outC->_L3;
  }
  outC->smallestTimer = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void CompareSectionTimer_init_TA_MA_Request(
  outC_CompareSectionTimer_TA_MA_Request *outC)
{
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.q_endsection = kcg_true;
  outC->_L2.l_section = kcg_lit_int32(0);
  outC->_L2.q_sectiontimer = kcg_true;
  outC->_L2.t_sectiontimer = kcg_lit_int32(0);
  outC->_L2.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->smallestTimer = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CompareSectionTimer_reset_TA_MA_Request(
  outC_CompareSectionTimer_TA_MA_Request *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CompareSectionTimer_TA_MA_Request.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

