/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "internalCycle_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::internalCycle/ */
void internalCycle_SDM_GradientAcceleration_Pkg(
  /* index/ */
  kcg_int64 index,
  /* Accu/ */
  ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* SvLPosition/ */
  L_internal_real_Type_SDM_Types_Pkg SvLPosition,
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  outC_internalCycle_SDM_GradientAcceleration_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static Gradient_real_t_SDM_GradientAcceleration_types acc;
  static kcg_size idx3;
  static kcg_int64 noname;

  outC->_L117 = kcg_lit_int64(0);
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->_L92,
    GradientProfile);
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&outC->_L104, Accu);
  outC->_L105 = outC->_L104.rearIndex;
  /* _L116=(SDM_GradientAcceleration_Pkg::selectGradientOffset#1)/ */
  selectGradientOffset_SDM_GradientAcceleration_Pkg(
    &outC->_L92,
    outC->_L105,
    outC->_L117,
    &outC->Context_selectGradientOffset_1);
  kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
    &outC->_L116,
    &outC->Context_selectGradientOffset_1.GradientSect);
  outC->_L94 = outC->_L116.gradient;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->_L49,
    GradientProfile);
  /* _L50/ */
  for (idx = 0; idx < 50; idx++) {
    kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
      &outC->_L50[idx],
      &outC->_L49);
  }
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&outC->_L109, Accu);
  outC->_L108 = outC->_L109.rearIndex;
  /* _L51/ */
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L51[idx1] = outC->_L108;
  }
  outC->_L112 = outC->_L109.frontIndex;
  /* _L52/ */
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L52[idx2] = outC->_L112;
  }
  outC->_L48 = kcg_true;
  outC->_L45 = outC->_L94;
  /* _L46= */
  if (outC->_L48) {
    /* _L46= */
    for (idx3 = 0; idx3 < 50; idx3++) {
      acc = outC->_L45;
      /* _L46=(SDM_GradientAcceleration_Pkg::lowestGradient#1)/ */
      lowestGradient_SDM_GradientAcceleration_Pkg(
        /* _L46= */(kcg_int64) idx3,
        acc,
        &outC->_L50[idx3],
        outC->_L51[idx3],
        outC->_L52[idx3],
        &outC->Context_lowestGradient_1[idx3]);
      outC->_L45 = outC->Context_lowestGradient_1[idx3].lowestGradientOut;
      outC->_L46 = /* _L46= */(kcg_int64) (idx3 + 1);
      /* _L46= */
      if (!outC->Context_lowestGradient_1[idx3].cond) {
        break;
      }
    }
  }
  else {
    outC->_L46 = kcg_lit_int64(0);
  }
  outC->_L83 = index;
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&outC->_L80, Accu);
  /* _L115=(SDM_GradientAcceleration_Pkg::addNewSection)/ */
  addNewSection_SDM_GradientAcceleration_Pkg(
    outC->_L45,
    outC->_L83,
    &outC->_L80,
    &outC->Context_addNewSection);
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    &outC->_L115,
    &outC->Context_addNewSection.modifiedProfile);
  outC->_L9 = SvLPosition;
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&outC->_L26, Accu);
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->_L13,
    GradientProfile);
  /* _L75=(SDM_GradientAcceleration_Pkg::CalcNearestDistance)/ */
  CalcNearestDistance_SDM_GradientAcceleration_Pkg(
    &outC->_L26,
    &outC->_L13,
    &outC->Context_CalcNearestDistance);
  outC->_L75 = outC->Context_CalcNearestDistance.oneValid;
  outC->_L76 = outC->Context_CalcNearestDistance.NearestDistance;
  outC->_L77 = outC->Context_CalcNearestDistance.nearestDistanceIsFrontend;
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&outC->_L41, Accu);
  /* _L78=(SDM_GradientAcceleration_Pkg::MoveTrainPosition)/ */
  MoveTrainPosition_SDM_GradientAcceleration_Pkg(
    outC->_L76,
    &outC->_L41,
    &outC->Context_MoveTrainPosition);
  outC->_L78 = outC->Context_MoveTrainPosition.newFront;
  outC->_L79 = outC->Context_MoveTrainPosition.newRear;
  outC->_L88 = outC->_L78 < outC->_L9;
  outC->_L99 = outC->_L75 & outC->_L88;
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&outC->_L60, Accu);
  /* _L73=(SDM_GradientAcceleration_Pkg::DetermineNewIndices)/ */
  DetermineNewIndices_SDM_GradientAcceleration_Pkg(
    &outC->_L60,
    outC->_L77,
    &outC->Context_DetermineNewIndices);
  outC->_L73 = outC->Context_DetermineNewIndices.frontIndex;
  outC->_L74 = outC->Context_DetermineNewIndices.rearIndex;
  noname = outC->_L46;
  outC->_L53.frontPos = outC->_L78;
  outC->_L53.frontIndex = outC->_L73;
  outC->_L53.rearPos = outC->_L79;
  outC->_L53.rearIndex = outC->_L74;
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    &outC->_L53.compensatedGradientProfile,
    &outC->_L115);
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&outC->AccuOut, &outC->_L53);
  outC->condition = outC->_L99;
}

#ifndef KCG_USER_DEFINED_INIT
void internalCycle_init_SDM_GradientAcceleration_Pkg(
  outC_internalCycle_SDM_GradientAcceleration_Pkg *outC)
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

  outC->_L117 = kcg_lit_int64(0);
  outC->_L116.location = kcg_lit_float64(0.0);
  outC->_L116.gradient = kcg_lit_float64(0.0);
  outC->_L116.valid = kcg_true;
  for (idx1 = 0; idx1 < 100; idx1++) {
    outC->_L115[idx1].location = kcg_lit_float64(0.0);
    outC->_L115[idx1].gradient = kcg_lit_float64(0.0);
    outC->_L115[idx1].valid = kcg_true;
  }
  outC->_L112 = kcg_lit_int64(0);
  outC->_L108 = kcg_lit_int64(0);
  outC->_L109.frontPos = kcg_lit_float64(0.0);
  outC->_L109.frontIndex = kcg_lit_int64(0);
  outC->_L109.rearPos = kcg_lit_float64(0.0);
  outC->_L109.rearIndex = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 100; idx2++) {
    outC->_L109.compensatedGradientProfile[idx2].location = kcg_lit_float64(0.0);
    outC->_L109.compensatedGradientProfile[idx2].gradient = kcg_lit_float64(0.0);
    outC->_L109.compensatedGradientProfile[idx2].valid = kcg_true;
  }
  outC->_L105 = kcg_lit_int64(0);
  outC->_L104.frontPos = kcg_lit_float64(0.0);
  outC->_L104.frontIndex = kcg_lit_int64(0);
  outC->_L104.rearPos = kcg_lit_float64(0.0);
  outC->_L104.rearIndex = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 100; idx3++) {
    outC->_L104.compensatedGradientProfile[idx3].location = kcg_lit_float64(0.0);
    outC->_L104.compensatedGradientProfile[idx3].gradient = kcg_lit_float64(0.0);
    outC->_L104.compensatedGradientProfile[idx3].valid = kcg_true;
  }
  outC->_L99 = kcg_true;
  outC->_L94 = kcg_lit_float64(0.0);
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->_L92[idx4].location = kcg_lit_float64(0.0);
    outC->_L92[idx4].gradient = kcg_lit_float64(0.0);
    outC->_L92[idx4].valid = kcg_true;
  }
  outC->_L88 = kcg_true;
  outC->_L83 = kcg_lit_int64(0);
  outC->_L80.frontPos = kcg_lit_float64(0.0);
  outC->_L80.frontIndex = kcg_lit_int64(0);
  outC->_L80.rearPos = kcg_lit_float64(0.0);
  outC->_L80.rearIndex = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 100; idx5++) {
    outC->_L80.compensatedGradientProfile[idx5].location = kcg_lit_float64(0.0);
    outC->_L80.compensatedGradientProfile[idx5].gradient = kcg_lit_float64(0.0);
    outC->_L80.compensatedGradientProfile[idx5].valid = kcg_true;
  }
  outC->_L78 = kcg_lit_float64(0.0);
  outC->_L79 = kcg_lit_float64(0.0);
  outC->_L75 = kcg_true;
  outC->_L76 = kcg_lit_float64(0.0);
  outC->_L77 = kcg_true;
  outC->_L73 = kcg_lit_int64(0);
  outC->_L74 = kcg_lit_int64(0);
  outC->_L60.frontPos = kcg_lit_float64(0.0);
  outC->_L60.frontIndex = kcg_lit_int64(0);
  outC->_L60.rearPos = kcg_lit_float64(0.0);
  outC->_L60.rearIndex = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 100; idx6++) {
    outC->_L60.compensatedGradientProfile[idx6].location = kcg_lit_float64(0.0);
    outC->_L60.compensatedGradientProfile[idx6].gradient = kcg_lit_float64(0.0);
    outC->_L60.compensatedGradientProfile[idx6].valid = kcg_true;
  }
  outC->_L53.frontPos = kcg_lit_float64(0.0);
  outC->_L53.frontIndex = kcg_lit_int64(0);
  outC->_L53.rearPos = kcg_lit_float64(0.0);
  outC->_L53.rearIndex = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 100; idx7++) {
    outC->_L53.compensatedGradientProfile[idx7].location = kcg_lit_float64(0.0);
    outC->_L53.compensatedGradientProfile[idx7].gradient = kcg_lit_float64(0.0);
    outC->_L53.compensatedGradientProfile[idx7].valid = kcg_true;
  }
  for (idx8 = 0; idx8 < 50; idx8++) {
    outC->_L52[idx8] = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 50; idx9++) {
    outC->_L51[idx9] = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 50; idx11++) {
    for (idx10 = 0; idx10 < 50; idx10++) {
      outC->_L50[idx11][idx10].location = kcg_lit_float64(0.0);
      outC->_L50[idx11][idx10].gradient = kcg_lit_float64(0.0);
      outC->_L50[idx11][idx10].valid = kcg_true;
    }
  }
  for (idx12 = 0; idx12 < 50; idx12++) {
    outC->_L49[idx12].location = kcg_lit_float64(0.0);
    outC->_L49[idx12].gradient = kcg_lit_float64(0.0);
    outC->_L49[idx12].valid = kcg_true;
  }
  outC->_L48 = kcg_true;
  outC->_L46 = kcg_lit_int64(0);
  outC->_L45 = kcg_lit_float64(0.0);
  outC->_L41.frontPos = kcg_lit_float64(0.0);
  outC->_L41.frontIndex = kcg_lit_int64(0);
  outC->_L41.rearPos = kcg_lit_float64(0.0);
  outC->_L41.rearIndex = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 100; idx13++) {
    outC->_L41.compensatedGradientProfile[idx13].location = kcg_lit_float64(0.0);
    outC->_L41.compensatedGradientProfile[idx13].gradient = kcg_lit_float64(0.0);
    outC->_L41.compensatedGradientProfile[idx13].valid = kcg_true;
  }
  outC->_L26.frontPos = kcg_lit_float64(0.0);
  outC->_L26.frontIndex = kcg_lit_int64(0);
  outC->_L26.rearPos = kcg_lit_float64(0.0);
  outC->_L26.rearIndex = kcg_lit_int64(0);
  for (idx14 = 0; idx14 < 100; idx14++) {
    outC->_L26.compensatedGradientProfile[idx14].location = kcg_lit_float64(0.0);
    outC->_L26.compensatedGradientProfile[idx14].gradient = kcg_lit_float64(0.0);
    outC->_L26.compensatedGradientProfile[idx14].valid = kcg_true;
  }
  for (idx15 = 0; idx15 < 50; idx15++) {
    outC->_L13[idx15].location = kcg_lit_float64(0.0);
    outC->_L13[idx15].gradient = kcg_lit_float64(0.0);
    outC->_L13[idx15].valid = kcg_true;
  }
  outC->_L9 = kcg_lit_float64(0.0);
  outC->AccuOut.frontPos = kcg_lit_float64(0.0);
  outC->AccuOut.frontIndex = kcg_lit_int64(0);
  outC->AccuOut.rearPos = kcg_lit_float64(0.0);
  outC->AccuOut.rearIndex = kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 100; idx16++) {
    outC->AccuOut.compensatedGradientProfile[idx16].location = kcg_lit_float64(0.0);
    outC->AccuOut.compensatedGradientProfile[idx16].gradient = kcg_lit_float64(0.0);
    outC->AccuOut.compensatedGradientProfile[idx16].valid = kcg_true;
  }
  outC->condition = kcg_true;
  /* _L73=(SDM_GradientAcceleration_Pkg::DetermineNewIndices)/ */
  DetermineNewIndices_init_SDM_GradientAcceleration_Pkg(
    &outC->Context_DetermineNewIndices);
  /* _L78=(SDM_GradientAcceleration_Pkg::MoveTrainPosition)/ */
  MoveTrainPosition_init_SDM_GradientAcceleration_Pkg(
    &outC->Context_MoveTrainPosition);
  /* _L75=(SDM_GradientAcceleration_Pkg::CalcNearestDistance)/ */
  CalcNearestDistance_init_SDM_GradientAcceleration_Pkg(
    &outC->Context_CalcNearestDistance);
  /* _L115=(SDM_GradientAcceleration_Pkg::addNewSection)/ */
  addNewSection_init_SDM_GradientAcceleration_Pkg(&outC->Context_addNewSection);
  for (idx = 0; idx < 50; idx++) {
    /* _L46=(SDM_GradientAcceleration_Pkg::lowestGradient#1)/ */
    lowestGradient_init_SDM_GradientAcceleration_Pkg(
      &outC->Context_lowestGradient_1[idx]);
  }
  /* _L116=(SDM_GradientAcceleration_Pkg::selectGradientOffset#1)/ */
  selectGradientOffset_init_SDM_GradientAcceleration_Pkg(
    &outC->Context_selectGradientOffset_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void internalCycle_reset_SDM_GradientAcceleration_Pkg(
  outC_internalCycle_SDM_GradientAcceleration_Pkg *outC)
{
  static kcg_size idx;

  /* _L73=(SDM_GradientAcceleration_Pkg::DetermineNewIndices)/ */
  DetermineNewIndices_reset_SDM_GradientAcceleration_Pkg(
    &outC->Context_DetermineNewIndices);
  /* _L78=(SDM_GradientAcceleration_Pkg::MoveTrainPosition)/ */
  MoveTrainPosition_reset_SDM_GradientAcceleration_Pkg(
    &outC->Context_MoveTrainPosition);
  /* _L75=(SDM_GradientAcceleration_Pkg::CalcNearestDistance)/ */
  CalcNearestDistance_reset_SDM_GradientAcceleration_Pkg(
    &outC->Context_CalcNearestDistance);
  /* _L115=(SDM_GradientAcceleration_Pkg::addNewSection)/ */
  addNewSection_reset_SDM_GradientAcceleration_Pkg(
    &outC->Context_addNewSection);
  for (idx = 0; idx < 50; idx++) {
    /* _L46=(SDM_GradientAcceleration_Pkg::lowestGradient#1)/ */
    lowestGradient_reset_SDM_GradientAcceleration_Pkg(
      &outC->Context_lowestGradient_1[idx]);
  }
  /* _L116=(SDM_GradientAcceleration_Pkg::selectGradientOffset#1)/ */
  selectGradientOffset_reset_SDM_GradientAcceleration_Pkg(
    &outC->Context_selectGradientOffset_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** internalCycle_SDM_GradientAcceleration_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

