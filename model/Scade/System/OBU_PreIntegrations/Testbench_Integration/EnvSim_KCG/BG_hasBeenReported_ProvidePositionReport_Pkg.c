/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BG_hasBeenReported_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::BG_hasBeenReported/ */
void BG_hasBeenReported_ProvidePositionReport_Pkg(
  /* reportedBGs/ */
  ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* nidBg/ */
  NID_BG nidBg,
  /* location/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *location,
  outC_BG_hasBeenReported_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_bool acc;
  static kcg_size idx2;

  outC->_L21 = kcg_false;
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(&outC->_L9, reportedBGs);
  outC->_L1 = nidBg;
  /* _L2/ */
  for (idx = 0; idx < 8; idx++) {
    outC->_L2[idx] = outC->_L1;
  }
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L16, location);
  /* _L18/ */
  for (idx1 = 0; idx1 < 8; idx1++) {
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L18[idx1], &outC->_L16);
  }
  outC->_L22 = outC->_L21;
  /* _L22= */
  for (idx2 = 0; idx2 < 8; idx2++) {
    acc = outC->_L22;
    /* _L22=(ProvidePositionReport_Pkg::UpdateReportedBG#3)/ */
    UpdateReportedBG_ProvidePositionReport_Pkg(
      acc,
      &outC->_L9[idx2],
      outC->_L2[idx2],
      &outC->_L18[idx2],
      &outC->Context_UpdateReportedBG_3[idx2]);
    outC->_L22 = outC->Context_UpdateReportedBG_3[idx2].found;
    kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(
      &outC->_L23[idx2],
      &outC->Context_UpdateReportedBG_3[idx2].out_reportedBG);
  }
  outC->found = outC->_L22;
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->updatedBGs,
    &outC->_L23);
}

#ifndef KCG_USER_DEFINED_INIT
void BG_hasBeenReported_init_ProvidePositionReport_Pkg(
  outC_BG_hasBeenReported_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L22 = kcg_true;
  for (idx1 = 0; idx1 < 8; idx1++) {
    outC->_L23[idx1].valid = kcg_true;
    outC->_L23[idx1].nidBG = kcg_lit_int32(0);
    outC->_L23[idx1].location.nominal = kcg_lit_int32(0);
    outC->_L23[idx1].location.d_min = kcg_lit_int32(0);
    outC->_L23[idx1].location.d_max = kcg_lit_int32(0);
  }
  outC->_L21 = kcg_true;
  for (idx2 = 0; idx2 < 8; idx2++) {
    outC->_L18[idx2].o_nominal = kcg_lit_int32(0);
    outC->_L18[idx2].o_min = kcg_lit_int32(0);
    outC->_L18[idx2].o_max = kcg_lit_int32(0);
  }
  outC->_L16.o_nominal = kcg_lit_int32(0);
  outC->_L16.o_min = kcg_lit_int32(0);
  outC->_L16.o_max = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 8; idx3++) {
    outC->_L2[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 8; idx4++) {
    outC->_L9[idx4].valid = kcg_true;
    outC->_L9[idx4].nidBG = kcg_lit_int32(0);
    outC->_L9[idx4].location.nominal = kcg_lit_int32(0);
    outC->_L9[idx4].location.d_min = kcg_lit_int32(0);
    outC->_L9[idx4].location.d_max = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 8; idx5++) {
    outC->updatedBGs[idx5].valid = kcg_true;
    outC->updatedBGs[idx5].nidBG = kcg_lit_int32(0);
    outC->updatedBGs[idx5].location.nominal = kcg_lit_int32(0);
    outC->updatedBGs[idx5].location.d_min = kcg_lit_int32(0);
    outC->updatedBGs[idx5].location.d_max = kcg_lit_int32(0);
  }
  outC->found = kcg_true;
  for (idx = 0; idx < 8; idx++) {
    /* _L22=(ProvidePositionReport_Pkg::UpdateReportedBG#3)/ */
    UpdateReportedBG_init_ProvidePositionReport_Pkg(
      &outC->Context_UpdateReportedBG_3[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BG_hasBeenReported_reset_ProvidePositionReport_Pkg(
  outC_BG_hasBeenReported_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 8; idx++) {
    /* _L22=(ProvidePositionReport_Pkg::UpdateReportedBG#3)/ */
    UpdateReportedBG_reset_ProvidePositionReport_Pkg(
      &outC->Context_UpdateReportedBG_3[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BG_hasBeenReported_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

