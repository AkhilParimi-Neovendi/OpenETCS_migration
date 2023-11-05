/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakePercentLookUp_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::brakePercentLookUp/ */
void brakePercentLookUp_SDMConversionModelPkg(
  /* lambda0/ */
  kcg_int32 lambda0,
  outC_brakePercentLookUp_SDMConversionModelPkg *outC)
{
  outC->_L114 = kcg_lit_int32(0);
  kcg_copy_array_int32_6_221(
    &outC->_L67,
    (array_int32_6_221 *) &cBrakePercentALookup_SDMConversionModelPkg);
  kcg_copy_array_int32_6(&outC->_L74, &outC->_L67[0]);
  outC->_L77 = cBrakePercentStepsMin_SDMConversionModelPkg;
  outC->_L1 = lambda0;
  outC->_L76 = outC->_L1 - outC->_L77;
  if ((kcg_lit_int32(0) <= outC->_L76) & (outC->_L76 < kcg_lit_int32(221))) {
    kcg_copy_array_int32_6(&outC->_L68, &outC->_L67[outC->_L76]);
  }
  else {
    kcg_copy_array_int32_6(&outC->_L68, &outC->_L74);
  }
  outC->_L116 = kcg_lit_int32(0);
  kcg_copy_array_int32_221(
    &outC->_L79,
    (array_int32_221 *) &cBrakePercentSpeedLookup_SDMConversionModelPkg);
  outC->_L81 = outC->_L79[0];
  if ((kcg_lit_int32(0) <= outC->_L76) & (outC->_L76 < kcg_lit_int32(221))) {
    outC->_L80 = outC->_L79[outC->_L76];
  }
  else {
    outC->_L80 = outC->_L81;
  }
  outC->V_lim = outC->_L80;
  outC->_L117 = outC->V_lim;
  kcg_copy_array_int32_4(
    &outC->_L78,
    (array_int32_4 *) &cBrakePercentV_lim_SDMConversionModelPkg);
  outC->_L100 = outC->_L78[3];
  outC->_L89 = outC->V_lim;
  outC->_L113 = outC->_L89 <= outC->_L100;
  /* _L109= */
  if (outC->_L113) {
    outC->_L109 = outC->_L100;
  }
  else {
    outC->_L109 = outC->_L114;
  }
  outC->_L99 = outC->_L78[2];
  outC->_L102 = outC->_L89 <= outC->_L99;
  /* _L105= */
  if (outC->_L102) {
    outC->_L105 = outC->_L99;
  }
  else {
    outC->_L105 = outC->_L109;
  }
  outC->_L98 = outC->_L78[1];
  outC->_L101 = outC->_L89 <= outC->_L98;
  /* _L104= */
  if (outC->_L101) {
    outC->_L104 = outC->_L98;
  }
  else {
    outC->_L104 = outC->_L105;
  }
  outC->_L91 = outC->_L78[0];
  outC->_L96 = outC->_L89 <= outC->_L91;
  /* _L97= */
  if (outC->_L96) {
    outC->_L97 = outC->_L91;
  }
  else {
    outC->_L97 = outC->_L104;
  }
  /* _L110= */
  if (outC->_L102) {
    outC->_L110 = outC->_L100;
  }
  else {
    outC->_L110 = outC->_L114;
  }
  /* _L107= */
  if (outC->_L101) {
    outC->_L107 = outC->_L99;
  }
  else {
    outC->_L107 = outC->_L110;
  }
  /* _L106= */
  if (outC->_L96) {
    outC->_L106 = outC->_L98;
  }
  else {
    outC->_L106 = outC->_L107;
  }
  /* _L111= */
  if (outC->_L101) {
    outC->_L111 = outC->_L100;
  }
  else {
    outC->_L111 = outC->_L114;
  }
  /* _L108= */
  if (outC->_L96) {
    outC->_L108 = outC->_L99;
  }
  else {
    outC->_L108 = outC->_L111;
  }
  /* _L112= */
  if (outC->_L96) {
    outC->_L112 = outC->_L100;
  }
  else {
    outC->_L112 = outC->_L114;
  }
  outC->_L127[0] = outC->_L116;
  outC->_L127[1] = outC->_L117;
  outC->_L127[2] = outC->_L97;
  outC->_L127[3] = outC->_L106;
  outC->_L127[4] = outC->_L108;
  outC->_L127[5] = outC->_L112;
  kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg(&outC->_L120.a, &outC->_L68);
  kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg(&outC->_L120.v, &outC->_L127);
  kcg_copy_av_Map_t_SDMConversionModelPkg(&outC->av, &outC->_L120);
}

#ifndef KCG_USER_DEFINED_INIT
void brakePercentLookUp_init_SDMConversionModelPkg(
  outC_brakePercentLookUp_SDMConversionModelPkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;

  outC->_L114 = kcg_lit_int32(0);
  for (idx = 0; idx < 6; idx++) {
    outC->_L127[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 6; idx1++) {
    outC->_L120.a[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 6; idx2++) {
    outC->_L120.v[idx2] = kcg_lit_int32(0);
  }
  outC->_L117 = kcg_lit_int32(0);
  outC->_L116 = kcg_lit_int32(0);
  outC->_L113 = kcg_true;
  outC->_L112 = kcg_lit_int32(0);
  outC->_L111 = kcg_lit_int32(0);
  outC->_L110 = kcg_lit_int32(0);
  outC->_L109 = kcg_lit_int32(0);
  outC->_L108 = kcg_lit_int32(0);
  outC->_L107 = kcg_lit_int32(0);
  outC->_L106 = kcg_lit_int32(0);
  outC->_L105 = kcg_lit_int32(0);
  outC->_L104 = kcg_lit_int32(0);
  outC->_L102 = kcg_true;
  outC->_L101 = kcg_true;
  outC->_L100 = kcg_lit_int32(0);
  outC->_L99 = kcg_lit_int32(0);
  outC->_L98 = kcg_lit_int32(0);
  outC->_L97 = kcg_lit_int32(0);
  outC->_L96 = kcg_true;
  outC->_L91 = kcg_lit_int32(0);
  outC->_L89 = kcg_lit_int32(0);
  outC->_L81 = kcg_lit_int32(0);
  outC->_L80 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 221; idx3++) {
    outC->_L79[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 4; idx4++) {
    outC->_L78[idx4] = kcg_lit_int32(0);
  }
  outC->_L77 = kcg_lit_int32(0);
  outC->_L76 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 6; idx5++) {
    outC->_L74[idx5] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 6; idx6++) {
    outC->_L68[idx6] = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 221; idx8++) {
    for (idx7 = 0; idx7 < 6; idx7++) {
      outC->_L67[idx8][idx7] = kcg_lit_int32(0);
    }
  }
  outC->_L1 = kcg_lit_int32(0);
  outC->V_lim = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 6; idx9++) {
    outC->av.a[idx9] = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 6; idx10++) {
    outC->av.v[idx10] = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void brakePercentLookUp_reset_SDMConversionModelPkg(
  outC_brakePercentLookUp_SDMConversionModelPkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** brakePercentLookUp_SDMConversionModelPkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

