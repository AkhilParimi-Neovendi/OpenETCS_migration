/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "D_behavior.h"

/* D_behavior/ */
void D_behavior(
  /* MousePressed/ */
  kcg_bool MousePressed,
  /* OverD9/ */
  kcg_bool OverD9,
  /* OverD12/ */
  kcg_bool OverD12,
  /* TrainPosition/ */
  kcg_float32 TrainPosition,
  /* GradientsStart/ */
  array_float32_32 *GradientsStart,
  /* GradientsEnd/ */
  array_float32_32 *GradientsEnd,
  /* PASP_SpeedPoints/ */
  tSpeedPoints *PASP_SpeedPoints,
  /* CPS/ */
  kcg_float32 CPS,
  /* Indicationlocation/ */
  kcg_int32 Indicationlocation,
  /* sup_status/ */
  M_SUPERVISION_STATUS_DMI_Types_Pkg sup_status,
  /* isValid/ */
  kcg_bool isValid,
  outC_D_behavior *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_float32 acc;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  /* toDisplay/ */
  static array_float32_1 toDisplay_partial;
  /* toDisplay/ */
  static array_float32_1 _24_toDisplay_partial;
  /* toDisplay/ */
  static array_float32_1 _25_toDisplay_partial;
  /* toDisplay/ */
  static array_float32_1 _26_toDisplay_partial;
  /* toDisplay/ */
  static array_float32_1 _27_toDisplay_partial;
  /* toDisplay/ */
  static array_float32_1 _28_toDisplay_partial;
  static kcg_float32 noname;
  static array_float32_10 _29_noname;
  /* toDisplay/ */
  static array_float32_1 last_toDisplay;

  kcg_copy_array_float32_1(&last_toDisplay, &outC->toDisplay);
  outC->_L224 = cPIM;
  outC->_L222 = sup_status;
  outC->_L223 = outC->_L222 == outC->_L224;
  outC->isPIM = outC->_L223;
  outC->_L219 = TrainPosition;
  /* _L220/ */
  for (idx = 0; idx < 10; idx++) {
    outC->_L220[idx] = outC->_L219;
  }
  kcg_copy_tSpeedPoints(&outC->_L172, PASP_SpeedPoints);
  kcg_copy_array_float32_10(&outC->_L186, &outC->_L172[0]);
  /* _L218= */
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L218[idx1] = outC->_L186[idx1] - outC->_L220[idx1];
  }
  outC->_L1 = MousePressed;
  outC->_L3 = OverD9;
  outC->_L4 = outC->_L3 & outC->_L1;
  outC->ZoomIn = outC->_L4;
  outC->_L9 = outC->ZoomIn;
  outC->_L6 = MousePressed;
  outC->_L7 = OverD12;
  outC->_L5 = outC->_L7 & outC->_L6;
  outC->ZoomOut = outC->_L5;
  outC->_L10 = outC->ZoomOut;
  /* _L2=(ZoomLevel#1)/ */
  ZoomLevel(outC->_L9, outC->_L10, &outC->Context_ZoomLevel_1);
  kcg_copy_tScale(&outC->_L2, &outC->Context_ZoomLevel_1.Scale);
  outC->_L33 = outC->Context_ZoomLevel_1.zoomlevel;
  outC->zoomlevel = outC->_L33;
  kcg_copy_array_float32_9_6(&outC->_L36, (array_float32_9_6 *) &Scales);
  if ((kcg_lit_int32(0) <= outC->zoomlevel) & (outC->zoomlevel < kcg_lit_int32(
        6))) {
    kcg_copy_tScale(&outC->_L35, &outC->_L36[outC->zoomlevel]);
  }
  else {
    kcg_copy_tScale(&outC->_L35, (tScale *) &illegalScalesIndex);
  }
  outC->endOfLogPart2 = outC->_L35[8];
  outC->maxLogDistance = outC->endOfLogPart2;
  outC->endOfLinearPart = outC->_L35[5];
  outC->maxLinearDistance = outC->endOfLinearPart;
  outC->_L213 = kcg_lit_int32(100);
  outC->_L215 = Indicationlocation;
  outC->_L217 = outC->_L215 / outC->_L213;
  outC->_L212 = /* _L212= */(kcg_float32) outC->_L217;
  outC->localdinstance = outC->_L212;
  outC->IfBlock1_clock = (outC->localdinstance <= outC->maxLinearDistance) &
    (outC->localdinstance > kcg_lit_float32(0.0)) & (!outC->isPIM) & isValid;
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->else_clock_IfBlock1 = !isValid;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_array_float32_1(&outC->_L5_then_else_IfBlock1, &last_toDisplay);
      kcg_copy_array_float32_1(&_28_toDisplay_partial, &outC->_L5_then_else_IfBlock1);
      kcg_copy_array_float32_1(&_24_toDisplay_partial, &_28_toDisplay_partial);
    }
    else {
      outC->else_clock_else_IfBlock1 = (outC->localdinstance < kcg_lit_float32(
            0.0)) | (outC->localdinstance > outC->maxLogDistance) | outC->isPIM;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = kcg_lit_float32(-500.0);
        /* IfBlock1:else:else:then:_L2/ */
        for (idx3 = 0; idx3 < 1; idx3++) {
          outC->_L2_then_else_else_IfBlock1[idx3] = outC->_L1_then_else_else_IfBlock1;
        }
        kcg_copy_array_float32_1(
          &_25_toDisplay_partial,
          &outC->_L2_then_else_else_IfBlock1);
        kcg_copy_array_float32_1(&_27_toDisplay_partial, &_25_toDisplay_partial);
      }
      else {
        outC->_L6_else_else_else_IfBlock1 = ScaleLine5;
        outC->_L5_else_else_else_IfBlock1 = outC->maxLinearDistance;
        outC->_L8_else_else_else_IfBlock1 =
          /* IfBlock1:else:else:else:_L8=(mathext::LogR#3)/ */
          LogR32_mathext_mathextimpl(outC->_L5_else_else_else_IfBlock1);
        outC->_L7_else_else_else_IfBlock1 = outC->localdinstance;
        outC->_L3_else_else_else_IfBlock1 =
          /* IfBlock1:else:else:else:_L3=(mathext::LogR#4)/ */
          LogR32_mathext_mathextimpl(outC->_L7_else_else_else_IfBlock1);
        outC->_L2_else_else_else_IfBlock1 = outC->_L3_else_else_else_IfBlock1 -
          outC->_L8_else_else_else_IfBlock1;
        outC->_L9_else_else_else_IfBlock1 = logScaleFactor;
        outC->_L1_else_else_else_IfBlock1 = outC->_L9_else_else_else_IfBlock1 *
          outC->_L2_else_else_else_IfBlock1;
        outC->_L10_else_else_else_IfBlock1 = outC->_L1_else_else_else_IfBlock1 +
          outC->_L6_else_else_else_IfBlock1;
        /* IfBlock1:else:else:else:_L4/ */
        for (idx2 = 0; idx2 < 1; idx2++) {
          outC->_L4_else_else_else_IfBlock1[idx2] = outC->_L10_else_else_else_IfBlock1;
        }
        kcg_copy_array_float32_1(
          &_26_toDisplay_partial,
          &outC->_L4_else_else_else_IfBlock1);
        kcg_copy_array_float32_1(&_27_toDisplay_partial, &_26_toDisplay_partial);
      }
      kcg_copy_array_float32_1(&_24_toDisplay_partial, &_27_toDisplay_partial);
    }
  }
  outC->_L216 = outC->zoomlevel;
  kcg_copy_array_float32_6(&outC->_L214, (array_float32_6 *) &LinearScaleFactors);
  if ((kcg_lit_int32(0) <= outC->_L216) & (outC->_L216 < kcg_lit_int32(6))) {
    outC->_L211 = outC->_L214[outC->_L216];
  }
  else {
    outC->_L211 = kcg_lit_float32(-1.0);
  }
  outC->linearScaleFactor = outC->_L211;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L4_then_IfBlock1 = outC->linearScaleFactor;
    outC->_L5_then_IfBlock1 = outC->localdinstance;
    outC->_L2_then_IfBlock1 = outC->_L5_then_IfBlock1 / outC->_L4_then_IfBlock1;
    /* IfBlock1:then:_L6/ */
    for (idx4 = 0; idx4 < 1; idx4++) {
      outC->_L6_then_IfBlock1[idx4] = outC->_L2_then_IfBlock1;
    }
    kcg_copy_array_float32_1(&toDisplay_partial, &outC->_L6_then_IfBlock1);
    kcg_copy_array_float32_1(&outC->toDisplay, &toDisplay_partial);
  }
  else {
    kcg_copy_array_float32_1(&outC->toDisplay, &_24_toDisplay_partial);
  }
  /* _L209/ */
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L209[idx5] = kcg_true;
  }
  outC->_L203 = outC->endOfLogPart2;
  /* _L206/ */
  for (idx6 = 0; idx6 < 10; idx6++) {
    outC->_L206[idx6] = outC->_L203;
  }
  outC->_L201 = CPS;
  kcg_copy_array_float32_10(&outC->_L187, &outC->_L172[1]);
  outC->_L202 = outC->_L201;
  /* _L202= */
  for (idx7 = 0; idx7 < 10; idx7++) {
    acc = outC->_L202;
    /* _L202=(SPDI::SPDI_ComputeSpeedChangeIndex#1)/ */
    SPDI_ComputeSpeedChangeIndex_SPDI(
      acc,
      outC->_L206[idx7],
      outC->_L218[idx7],
      outC->_L187[idx7],
      &outC->Context_SPDI_ComputeSpeedChangeIndex_1[idx7]);
    outC->_L202 = outC->Context_SPDI_ComputeSpeedChangeIndex_1[idx7].Acc_Speed_Out;
    outC->_L204[idx7] =
      outC->Context_SPDI_ComputeSpeedChangeIndex_1[idx7].Acc_EndOfLogPart_Out;
    outC->_L189[idx7] =
      outC->Context_SPDI_ComputeSpeedChangeIndex_1[idx7].SpeedChangeIndex;
    outC->_L205[idx7] =
      outC->Context_SPDI_ComputeSpeedChangeIndex_1[idx7].SpeedChangeSymbolVisible;
  }
  kcg_copy_array_bool_10(&outC->SPDI_SpeedChangeSymbolsVisible, &outC->_L205);
  kcg_copy_array_float32_10(&_29_noname, &outC->_L204);
  kcg_copy_array_int32_10(&outC->SPDI_SpeedChangeIndex, &outC->_L189);
  outC->_L190 = outC->endOfLinearPart;
  /* _L194/ */
  for (idx8 = 0; idx8 < 10; idx8++) {
    outC->_L194[idx8] = outC->_L190;
  }
  outC->_L191 = outC->endOfLogPart2;
  /* _L195/ */
  for (idx9 = 0; idx9 < 10; idx9++) {
    outC->_L195[idx9] = outC->_L191;
  }
  outC->_L193 = TrainPosition;
  /* _L196/ */
  for (idx10 = 0; idx10 < 10; idx10++) {
    outC->_L196[idx10] = outC->_L193;
  }
  outC->_L192 = outC->zoomlevel;
  /* _L197/ */
  for (idx11 = 0; idx11 < 10; idx11++) {
    outC->_L197[idx11] = outC->_L192;
  }
  /* _L188= */
  for (idx12 = 0; idx12 < 10; idx12++) {
    /* _L188=(ComputeDistDisplay#4)/ */
    ComputeDistDisplay(
      outC->_L194[idx12],
      outC->_L195[idx12],
      outC->_L186[idx12],
      outC->_L196[idx12],
      outC->_L197[idx12],
      &outC->Context_ComputeDistDisplay_4[idx12]);
    outC->_L188[idx12] =
      outC->Context_ComputeDistDisplay_4[idx12].ObjectScreenYPosition;
  }
  kcg_copy_array_float32_10(&outC->SPDI_SpeedChangePosition, &outC->_L188);
  noname = outC->_L202;
  outC->_L163 = outC->endOfLinearPart;
  /* _L167/ */
  for (idx13 = 0; idx13 < 4; idx13++) {
    outC->_L167[idx13] = outC->_L163;
  }
  outC->_L169 = outC->endOfLogPart2;
  /* _L157/ */
  for (idx14 = 0; idx14 < 4; idx14++) {
    outC->_L157[idx14] = outC->_L169;
  }
  outC->_L160 = CPS;
  kcg_copy_tSpeedPoints(&outC->_L162, PASP_SpeedPoints);
  kcg_copy_array_float32_10(&outC->_L165, &outC->_L162[0]);
  kcg_copy_array_float32_10(&outC->_L166, &outC->_L162[1]);
  /* _L158=(PASP::impPASPgetRelavantBreakingValues#1)/ */
  impPASPgetRelavantBreakingValues_PASP(
    outC->_L160,
    &outC->_L165,
    &outC->_L166,
    &outC->_L158,
    &outC->_L159);
  outC->_L155 = TrainPosition;
  /* _L161/ */
  for (idx15 = 0; idx15 < 4; idx15++) {
    outC->_L161[idx15] = outC->_L155;
  }
  outC->_L156 = outC->zoomlevel;
  /* _L168/ */
  for (idx16 = 0; idx16 < 4; idx16++) {
    outC->_L168[idx16] = outC->_L156;
  }
  /* _L170= */
  for (idx17 = 0; idx17 < 4; idx17++) {
    /* _L170=(ComputeDistDisplay#3)/ */
    ComputeDistDisplay(
      outC->_L167[idx17],
      outC->_L157[idx17],
      outC->_L158[idx17],
      outC->_L161[idx17],
      outC->_L168[idx17],
      &outC->Context_ComputeDistDisplay_3[idx17]);
    outC->_L170[idx17] =
      outC->Context_ComputeDistDisplay_3[idx17].ObjectScreenYPosition;
  }
  kcg_copy_tPASPOutput_Array(&outC->PASP_Speeds, &outC->_L159);
  kcg_copy_tPASPOutput_Array(&outC->PASP_Distances, &outC->_L170);
  kcg_copy_array_float32_32(&outC->_L137, GradientsEnd);
  kcg_copy_array_float32_32(&outC->_L136, GradientsStart);
  kcg_copy_array_bool_32(&outC->GradientVisible, &outC->_L209);
  /* _L43/ */
  for (idx18 = 0; idx18 < 32; idx18++) {
    outC->_L43[idx18] = outC->endOfLinearPart;
  }
  kcg_copy_array_float32_32(&outC->endOfLinearPartArray, &outC->_L43);
  kcg_copy_array_float32_32(&outC->_L126, &outC->endOfLinearPartArray);
  /* _L45/ */
  for (idx19 = 0; idx19 < 32; idx19++) {
    outC->_L45[idx19] = outC->endOfLogPart2;
  }
  kcg_copy_array_float32_32(&outC->endOfLogPartArray, &outC->_L45);
  kcg_copy_array_float32_32(&outC->_L130, &outC->endOfLogPartArray);
  outC->_L51 = TrainPosition;
  /* _L52/ */
  for (idx20 = 0; idx20 < 32; idx20++) {
    outC->_L52[idx20] = outC->_L51;
  }
  kcg_copy_array_float32_32(&outC->trainPositionArray, &outC->_L52);
  kcg_copy_array_float32_32(&outC->_L134, &outC->trainPositionArray);
  outC->_L54 = outC->zoomlevel;
  /* _L53/ */
  for (idx21 = 0; idx21 < 32; idx21++) {
    outC->_L53[idx21] = outC->_L54;
  }
  kcg_copy_array_int32_32(&outC->zoomlevelArray, &outC->_L53);
  kcg_copy_array_int32_32(&outC->_L128, &outC->zoomlevelArray);
  /* _L135= */
  for (idx22 = 0; idx22 < 32; idx22++) {
    /* _L135=(ComputeDistDisplay#2)/ */
    ComputeDistDisplay(
      outC->_L126[idx22],
      outC->_L130[idx22],
      outC->_L137[idx22],
      outC->_L134[idx22],
      outC->_L128[idx22],
      &outC->Context_ComputeDistDisplay_2[idx22]);
    outC->_L135[idx22] =
      outC->Context_ComputeDistDisplay_2[idx22].ObjectScreenYPosition;
  }
  kcg_copy_array_float32_32(&outC->_L129, &outC->endOfLinearPartArray);
  kcg_copy_array_float32_32(&outC->_L131, &outC->endOfLogPartArray);
  kcg_copy_array_float32_32(&outC->_L127, &outC->trainPositionArray);
  kcg_copy_array_int32_32(&outC->_L125, &outC->zoomlevelArray);
  /* _L133= */
  for (idx23 = 0; idx23 < 32; idx23++) {
    /* _L133=(ComputeDistDisplay#1)/ */
    ComputeDistDisplay(
      outC->_L129[idx23],
      outC->_L131[idx23],
      outC->_L136[idx23],
      outC->_L127[idx23],
      outC->_L125[idx23],
      &outC->Context_ComputeDistDisplay_1[idx23]);
    outC->_L133[idx23] =
      outC->Context_ComputeDistDisplay_1[idx23].ObjectScreenYPosition;
  }
  kcg_copy_array_float32_32(&outC->GradientEndInterpolated, &outC->_L135);
  kcg_copy_array_float32_32(&outC->GradientStartInterpolated, &outC->_L133);
  kcg_copy_tScale(&outC->Scale, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void D_behavior_init(outC_D_behavior *outC)
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
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;
  static kcg_size idx36;
  static kcg_size idx37;
  static kcg_size idx38;
  static kcg_size idx39;
  static kcg_size idx40;
  static kcg_size idx41;
  static kcg_size idx42;
  static kcg_size idx43;
  static kcg_size idx44;
  static kcg_size idx45;
  static kcg_size idx46;
  static kcg_size idx47;
  static kcg_size idx48;
  static kcg_size idx49;
  static kcg_size idx50;
  static kcg_size idx51;
  static kcg_size idx52;
  static kcg_size idx53;
  static kcg_size idx54;
  static kcg_size idx55;
  static kcg_size idx56;
  static kcg_size idx57;
  static kcg_size idx58;
  static kcg_size idx59;
  static kcg_size idx60;
  static kcg_size idx61;
  static kcg_size idx62;
  static kcg_size idx63;
  static kcg_size idx64;
  static kcg_size idx65;
  static kcg_size idx66;
  static kcg_size idx67;
  static kcg_size idx68;
  static kcg_size idx69;

  outC->_L224 = CSM_DMI_Types_Pkg;
  outC->_L223 = kcg_true;
  outC->_L222 = CSM_DMI_Types_Pkg;
  for (idx5 = 0; idx5 < 10; idx5++) {
    outC->_L220[idx5] = kcg_lit_float32(0.0);
  }
  outC->_L219 = kcg_lit_float32(0.0);
  for (idx6 = 0; idx6 < 10; idx6++) {
    outC->_L218[idx6] = kcg_lit_float32(0.0);
  }
  outC->_L211 = kcg_lit_float32(0.0);
  outC->_L212 = kcg_lit_float32(0.0);
  outC->_L213 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 6; idx7++) {
    outC->_L214[idx7] = kcg_lit_float32(0.0);
  }
  outC->_L215 = kcg_lit_int32(0);
  outC->_L216 = kcg_lit_int32(0);
  outC->_L217 = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->_L209[idx8] = kcg_true;
  }
  for (idx9 = 0; idx9 < 10; idx9++) {
    outC->_L206[idx9] = kcg_lit_float32(0.0);
  }
  for (idx10 = 0; idx10 < 10; idx10++) {
    outC->_L205[idx10] = kcg_true;
  }
  for (idx11 = 0; idx11 < 10; idx11++) {
    outC->_L204[idx11] = kcg_lit_float32(0.0);
  }
  outC->_L203 = kcg_lit_float32(0.0);
  outC->_L202 = kcg_lit_float32(0.0);
  outC->_L201 = kcg_lit_float32(0.0);
  for (idx12 = 0; idx12 < 10; idx12++) {
    outC->_L196[idx12] = kcg_lit_float32(0.0);
  }
  for (idx13 = 0; idx13 < 10; idx13++) {
    outC->_L197[idx13] = kcg_lit_int32(0);
  }
  for (idx14 = 0; idx14 < 10; idx14++) {
    outC->_L195[idx14] = kcg_lit_float32(0.0);
  }
  for (idx15 = 0; idx15 < 10; idx15++) {
    outC->_L194[idx15] = kcg_lit_float32(0.0);
  }
  outC->_L193 = kcg_lit_float32(0.0);
  outC->_L192 = kcg_lit_int32(0);
  outC->_L191 = kcg_lit_float32(0.0);
  outC->_L190 = kcg_lit_float32(0.0);
  for (idx16 = 0; idx16 < 10; idx16++) {
    outC->_L189[idx16] = kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 10; idx17++) {
    outC->_L188[idx17] = kcg_lit_float32(0.0);
  }
  for (idx18 = 0; idx18 < 10; idx18++) {
    outC->_L186[idx18] = kcg_lit_float32(0.0);
  }
  for (idx19 = 0; idx19 < 10; idx19++) {
    outC->_L187[idx19] = kcg_lit_float32(0.0);
  }
  for (idx21 = 0; idx21 < 2; idx21++) {
    for (idx20 = 0; idx20 < 10; idx20++) {
      outC->_L172[idx21][idx20] = kcg_lit_float32(0.0);
    }
  }
  outC->_L155 = kcg_lit_float32(0.0);
  outC->_L156 = kcg_lit_int32(0);
  for (idx22 = 0; idx22 < 4; idx22++) {
    outC->_L157[idx22] = kcg_lit_float32(0.0);
  }
  for (idx23 = 0; idx23 < 4; idx23++) {
    outC->_L159[idx23] = kcg_lit_float32(0.0);
  }
  for (idx24 = 0; idx24 < 4; idx24++) {
    outC->_L158[idx24] = kcg_lit_float32(0.0);
  }
  outC->_L160 = kcg_lit_float32(0.0);
  for (idx25 = 0; idx25 < 4; idx25++) {
    outC->_L161[idx25] = kcg_lit_float32(0.0);
  }
  for (idx27 = 0; idx27 < 2; idx27++) {
    for (idx26 = 0; idx26 < 10; idx26++) {
      outC->_L162[idx27][idx26] = kcg_lit_float32(0.0);
    }
  }
  outC->_L163 = kcg_lit_float32(0.0);
  for (idx28 = 0; idx28 < 10; idx28++) {
    outC->_L166[idx28] = kcg_lit_float32(0.0);
  }
  for (idx29 = 0; idx29 < 10; idx29++) {
    outC->_L165[idx29] = kcg_lit_float32(0.0);
  }
  for (idx30 = 0; idx30 < 4; idx30++) {
    outC->_L167[idx30] = kcg_lit_float32(0.0);
  }
  for (idx31 = 0; idx31 < 4; idx31++) {
    outC->_L168[idx31] = kcg_lit_int32(0);
  }
  outC->_L169 = kcg_lit_float32(0.0);
  for (idx32 = 0; idx32 < 4; idx32++) {
    outC->_L170[idx32] = kcg_lit_float32(0.0);
  }
  for (idx33 = 0; idx33 < 32; idx33++) {
    outC->_L125[idx33] = kcg_lit_int32(0);
  }
  for (idx34 = 0; idx34 < 32; idx34++) {
    outC->_L126[idx34] = kcg_lit_float32(0.0);
  }
  for (idx35 = 0; idx35 < 32; idx35++) {
    outC->_L127[idx35] = kcg_lit_float32(0.0);
  }
  for (idx36 = 0; idx36 < 32; idx36++) {
    outC->_L128[idx36] = kcg_lit_int32(0);
  }
  for (idx37 = 0; idx37 < 32; idx37++) {
    outC->_L129[idx37] = kcg_lit_float32(0.0);
  }
  for (idx38 = 0; idx38 < 32; idx38++) {
    outC->_L130[idx38] = kcg_lit_float32(0.0);
  }
  for (idx39 = 0; idx39 < 32; idx39++) {
    outC->_L131[idx39] = kcg_lit_float32(0.0);
  }
  for (idx40 = 0; idx40 < 32; idx40++) {
    outC->_L133[idx40] = kcg_lit_float32(0.0);
  }
  for (idx41 = 0; idx41 < 32; idx41++) {
    outC->_L134[idx41] = kcg_lit_float32(0.0);
  }
  for (idx42 = 0; idx42 < 32; idx42++) {
    outC->_L135[idx42] = kcg_lit_float32(0.0);
  }
  for (idx43 = 0; idx43 < 32; idx43++) {
    outC->_L136[idx43] = kcg_lit_float32(0.0);
  }
  for (idx44 = 0; idx44 < 32; idx44++) {
    outC->_L137[idx44] = kcg_lit_float32(0.0);
  }
  for (idx45 = 0; idx45 < 32; idx45++) {
    outC->_L53[idx45] = kcg_lit_int32(0);
  }
  outC->_L54 = kcg_lit_int32(0);
  outC->_L51 = kcg_lit_float32(0.0);
  for (idx46 = 0; idx46 < 32; idx46++) {
    outC->_L52[idx46] = kcg_lit_float32(0.0);
  }
  for (idx47 = 0; idx47 < 32; idx47++) {
    outC->_L45[idx47] = kcg_lit_float32(0.0);
  }
  for (idx48 = 0; idx48 < 32; idx48++) {
    outC->_L43[idx48] = kcg_lit_float32(0.0);
  }
  for (idx50 = 0; idx50 < 6; idx50++) {
    for (idx49 = 0; idx49 < 9; idx49++) {
      outC->_L36[idx50][idx49] = kcg_lit_float32(0.0);
    }
  }
  for (idx51 = 0; idx51 < 9; idx51++) {
    outC->_L35[idx51] = kcg_lit_float32(0.0);
  }
  outC->_L33 = kcg_lit_int32(0);
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  for (idx52 = 0; idx52 < 9; idx52++) {
    outC->_L2[idx52] = kcg_lit_float32(0.0);
  }
  outC->_L1 = kcg_true;
  outC->isPIM = kcg_true;
  outC->linearScaleFactor = kcg_lit_float32(0.0);
  outC->localdinstance = kcg_lit_float32(0.0);
  outC->maxLinearDistance = kcg_lit_float32(0.0);
  outC->maxLogDistance = kcg_lit_float32(0.0);
  outC->endOfLogPart2 = kcg_lit_float32(0.0);
  outC->endOfLinearPart = kcg_lit_float32(0.0);
  for (idx53 = 0; idx53 < 32; idx53++) {
    outC->zoomlevelArray[idx53] = kcg_lit_int32(0);
  }
  for (idx54 = 0; idx54 < 32; idx54++) {
    outC->trainPositionArray[idx54] = kcg_lit_float32(0.0);
  }
  for (idx55 = 0; idx55 < 32; idx55++) {
    outC->endOfLogPartArray[idx55] = kcg_lit_float32(0.0);
  }
  for (idx56 = 0; idx56 < 32; idx56++) {
    outC->endOfLinearPartArray[idx56] = kcg_lit_float32(0.0);
  }
  outC->zoomlevel = kcg_lit_int32(0);
  outC->ZoomOut = kcg_true;
  outC->ZoomIn = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  for (idx57 = 0; idx57 < 1; idx57++) {
    outC->_L5_then_else_IfBlock1[idx57] = kcg_lit_float32(0.0);
  }
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L10_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L9_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L8_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L7_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L6_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L5_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  for (idx58 = 0; idx58 < 1; idx58++) {
    outC->_L4_else_else_else_IfBlock1[idx58] = kcg_lit_float32(0.0);
  }
  outC->_L3_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L2_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L1_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L1_then_else_else_IfBlock1 = kcg_lit_float32(0.0);
  for (idx59 = 0; idx59 < 1; idx59++) {
    outC->_L2_then_else_else_IfBlock1[idx59] = kcg_lit_float32(0.0);
  }
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L4_then_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L5_then_IfBlock1 = kcg_lit_float32(0.0);
  for (idx60 = 0; idx60 < 1; idx60++) {
    outC->_L6_then_IfBlock1[idx60] = kcg_lit_float32(0.0);
  }
  for (idx61 = 0; idx61 < 10; idx61++) {
    outC->SPDI_SpeedChangeSymbolsVisible[idx61] = kcg_true;
  }
  for (idx62 = 0; idx62 < 10; idx62++) {
    outC->SPDI_SpeedChangeIndex[idx62] = kcg_lit_int32(0);
  }
  for (idx63 = 0; idx63 < 10; idx63++) {
    outC->SPDI_SpeedChangePosition[idx63] = kcg_lit_float32(0.0);
  }
  for (idx64 = 0; idx64 < 4; idx64++) {
    outC->PASP_Speeds[idx64] = kcg_lit_float32(0.0);
  }
  for (idx65 = 0; idx65 < 4; idx65++) {
    outC->PASP_Distances[idx65] = kcg_lit_float32(0.0);
  }
  for (idx66 = 0; idx66 < 32; idx66++) {
    outC->GradientVisible[idx66] = kcg_true;
  }
  for (idx67 = 0; idx67 < 32; idx67++) {
    outC->GradientEndInterpolated[idx67] = kcg_lit_float32(0.0);
  }
  for (idx68 = 0; idx68 < 32; idx68++) {
    outC->GradientStartInterpolated[idx68] = kcg_lit_float32(0.0);
  }
  for (idx69 = 0; idx69 < 9; idx69++) {
    outC->Scale[idx69] = kcg_lit_float32(0.0);
  }
  for (idx4 = 0; idx4 < 32; idx4++) {
    /* _L133=(ComputeDistDisplay#1)/ */
    ComputeDistDisplay_init(&outC->Context_ComputeDistDisplay_1[idx4]);
  }
  for (idx3 = 0; idx3 < 32; idx3++) {
    /* _L135=(ComputeDistDisplay#2)/ */
    ComputeDistDisplay_init(&outC->Context_ComputeDistDisplay_2[idx3]);
  }
  for (idx2 = 0; idx2 < 4; idx2++) {
    /* _L170=(ComputeDistDisplay#3)/ */
    ComputeDistDisplay_init(&outC->Context_ComputeDistDisplay_3[idx2]);
  }
  for (idx1 = 0; idx1 < 10; idx1++) {
    /* _L188=(ComputeDistDisplay#4)/ */
    ComputeDistDisplay_init(&outC->Context_ComputeDistDisplay_4[idx1]);
  }
  for (idx = 0; idx < 10; idx++) {
    /* _L202=(SPDI::SPDI_ComputeSpeedChangeIndex#1)/ */
    SPDI_ComputeSpeedChangeIndex_init_SPDI(
      &outC->Context_SPDI_ComputeSpeedChangeIndex_1[idx]);
  }
  /* _L2=(ZoomLevel#1)/ */ ZoomLevel_init(&outC->Context_ZoomLevel_1);
  outC->toDisplay[0] = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


void D_behavior_reset(outC_D_behavior *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  for (idx4 = 0; idx4 < 32; idx4++) {
    /* _L133=(ComputeDistDisplay#1)/ */
    ComputeDistDisplay_reset(&outC->Context_ComputeDistDisplay_1[idx4]);
  }
  for (idx3 = 0; idx3 < 32; idx3++) {
    /* _L135=(ComputeDistDisplay#2)/ */
    ComputeDistDisplay_reset(&outC->Context_ComputeDistDisplay_2[idx3]);
  }
  for (idx2 = 0; idx2 < 4; idx2++) {
    /* _L170=(ComputeDistDisplay#3)/ */
    ComputeDistDisplay_reset(&outC->Context_ComputeDistDisplay_3[idx2]);
  }
  for (idx1 = 0; idx1 < 10; idx1++) {
    /* _L188=(ComputeDistDisplay#4)/ */
    ComputeDistDisplay_reset(&outC->Context_ComputeDistDisplay_4[idx1]);
  }
  for (idx = 0; idx < 10; idx++) {
    /* _L202=(SPDI::SPDI_ComputeSpeedChangeIndex#1)/ */
    SPDI_ComputeSpeedChangeIndex_reset_SPDI(
      &outC->Context_SPDI_ComputeSpeedChangeIndex_1[idx]);
  }
  /* _L2=(ZoomLevel#1)/ */ ZoomLevel_reset(&outC->Context_ZoomLevel_1);
  outC->toDisplay[0] = kcg_lit_float32(0.0);
}


void kcg_save_SV_D_behavior(SV_D_behavior *SV, outC_D_behavior *outC)
{
  kcg_save_SV_ZoomLevel(&SV->Context_ZoomLevel_1, &outC->Context_ZoomLevel_1);
  kcg_copy_array_float32_1(&SV->Context_toDisplay, &outC->toDisplay);
}

void kcg_load_SV_D_behavior(outC_D_behavior *outC, SV_D_behavior *SV)
{
  kcg_load_SV_ZoomLevel(&outC->Context_ZoomLevel_1, &SV->Context_ZoomLevel_1);
  kcg_copy_array_float32_1(&outC->toDisplay, &SV->Context_toDisplay);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** D_behavior.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

