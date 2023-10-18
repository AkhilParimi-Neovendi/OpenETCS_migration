/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UpdateReportedBG_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::UpdateReportedBG/ */
void UpdateReportedBG_ProvidePositionReport_Pkg(
  /* foldedFound/ */
  kcg_bool foldedFound,
  /* reportedBG/ */
  ReportedBG_T_ProvidePositionReport_Pkg *reportedBG,
  /* BG_IDToCheck/ */
  NID_BG BG_IDToCheck,
  /* location/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *location,
  outC_UpdateReportedBG_ProvidePositionReport_Pkg *outC)
{
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L9, location);
  outC->_L37 = outC->_L9.o_nominal;
  outC->_L38 = outC->_L9.o_min;
  outC->_L39 = outC->_L9.o_max;
  outC->_L52.nominal = outC->_L37;
  outC->_L52.d_min = outC->_L38;
  outC->_L52.d_max = outC->_L39;
  outC->_L3 = BG_IDToCheck;
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&outC->_L1, reportedBG);
  outC->_L5 = outC->_L1.nidBG;
  outC->_L10 = outC->_L5 == outC->_L3;
  outC->_L26 = foldedFound;
  outC->_L27 = outC->_L26 | outC->_L10;
  outC->found = outC->_L27;
  outC->_L25 = kcg_true;
  outC->_L24.valid = outC->_L25;
  outC->_L24.nidBG = outC->_L3;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L24.location, &outC->_L52);
  /* _L11= */
  if (outC->_L10) {
    kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&outC->_L11, &outC->_L24);
  }
  else {
    kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&outC->_L11, &outC->_L1);
  }
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(
    &outC->out_reportedBG,
    &outC->_L11);
}

#ifndef KCG_USER_DEFINED_INIT
void UpdateReportedBG_init_ProvidePositionReport_Pkg(
  outC_UpdateReportedBG_ProvidePositionReport_Pkg *outC)
{
  outC->_L52.nominal = kcg_lit_int64(0);
  outC->_L52.d_min = kcg_lit_int64(0);
  outC->_L52.d_max = kcg_lit_int64(0);
  outC->_L37 = kcg_lit_int64(0);
  outC->_L38 = kcg_lit_int64(0);
  outC->_L39 = kcg_lit_int64(0);
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24.valid = kcg_true;
  outC->_L24.nidBG = kcg_lit_int64(0);
  outC->_L24.location.nominal = kcg_lit_int64(0);
  outC->_L24.location.d_min = kcg_lit_int64(0);
  outC->_L24.location.d_max = kcg_lit_int64(0);
  outC->_L11.valid = kcg_true;
  outC->_L11.nidBG = kcg_lit_int64(0);
  outC->_L11.location.nominal = kcg_lit_int64(0);
  outC->_L11.location.d_min = kcg_lit_int64(0);
  outC->_L11.location.d_max = kcg_lit_int64(0);
  outC->_L10 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.nidBG = kcg_lit_int64(0);
  outC->_L1.location.nominal = kcg_lit_int64(0);
  outC->_L1.location.d_min = kcg_lit_int64(0);
  outC->_L1.location.d_max = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L9.o_nominal = kcg_lit_int64(0);
  outC->_L9.o_min = kcg_lit_int64(0);
  outC->_L9.o_max = kcg_lit_int64(0);
  outC->out_reportedBG.valid = kcg_true;
  outC->out_reportedBG.nidBG = kcg_lit_int64(0);
  outC->out_reportedBG.location.nominal = kcg_lit_int64(0);
  outC->out_reportedBG.location.d_min = kcg_lit_int64(0);
  outC->out_reportedBG.location.d_max = kcg_lit_int64(0);
  outC->found = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void UpdateReportedBG_reset_ProvidePositionReport_Pkg(
  outC_UpdateReportedBG_ProvidePositionReport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** UpdateReportedBG_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

