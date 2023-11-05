/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ZoomLevel.h"

/* ZoomLevel/ */
void ZoomLevel(
  /* ZoomIn/ */
  kcg_bool ZoomIn,
  /* ZoomOut/ */
  kcg_bool ZoomOut,
  outC_ZoomLevel *outC)
{
  /* Scale/ */
  static tScale Scale_partial;
  /* zoomlevel/ */
  static kcg_int32 zoomlevel_partial;
  /* SM1: */
  static SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  static SSM_TR_SM1 SM1_fired_partial;
  /* Scale/ */
  static tScale _1_Scale_partial;
  /* zoomlevel/ */
  static kcg_int32 _2_zoomlevel_partial;
  /* SM1: */
  static SSM_ST_SM1 _3_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _4_SM1_reset_nxt_partial;
  /* SM1: */
  static SSM_TR_SM1 _5_SM1_fired_partial;
  /* Scale/ */
  static tScale _6_Scale_partial;
  /* zoomlevel/ */
  static kcg_int32 _7_zoomlevel_partial;
  /* SM1: */
  static SSM_ST_SM1 _8_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _9_SM1_reset_nxt_partial;
  /* SM1: */
  static SSM_TR_SM1 _10_SM1_fired_partial;
  /* Scale/ */
  static tScale _11_Scale_partial;
  /* zoomlevel/ */
  static kcg_int32 _12_zoomlevel_partial;
  /* SM1: */
  static SSM_ST_SM1 _13_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _14_SM1_reset_nxt_partial;
  /* SM1: */
  static SSM_TR_SM1 _15_SM1_fired_partial;
  /* Scale/ */
  static tScale _16_Scale_partial;
  /* zoomlevel/ */
  static kcg_int32 _17_zoomlevel_partial;
  /* SM1: */
  static SSM_ST_SM1 _18_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _19_SM1_reset_nxt_partial;
  /* SM1: */
  static SSM_TR_SM1 _20_SM1_fired_partial;
  /* Scale/ */
  static tScale _21_Scale_partial;
  /* zoomlevel/ */
  static kcg_int32 _22_zoomlevel_partial;
  /* SM1: */
  static SSM_ST_SM1 _23_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _24_SM1_reset_nxt_partial;
  /* SM1: */
  static SSM_TR_SM1 _25_SM1_fired_partial;
  /* SM1: */
  static SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  static kcg_bool SM1_reset_act_partial;
  /* SM1: */
  static SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:Zoom1:<1> */
  static kcg_bool tr_1_guard_Zoom1_SM1;
  /* SM1: */
  static SSM_ST_SM1 _26_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _27_SM1_reset_act_partial;
  /* SM1: */
  static SSM_TR_SM1 _28_SM1_fired_strong_partial;
  /* SM1:Zoom2:<2> */
  static kcg_bool tr_2_guard_Zoom2_SM1;
  /* SM1:Zoom2:<1> */
  static kcg_bool tr_1_guard_Zoom2_SM1;
  /* SM1: */
  static SSM_ST_SM1 _29_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _30_SM1_reset_act_partial;
  /* SM1: */
  static SSM_TR_SM1 _31_SM1_fired_strong_partial;
  /* SM1:Zoom4:<2> */
  static kcg_bool tr_2_guard_Zoom4_SM1;
  /* SM1:Zoom4:<1> */
  static kcg_bool tr_1_guard_Zoom4_SM1;
  /* SM1: */
  static SSM_ST_SM1 _32_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _33_SM1_reset_act_partial;
  /* SM1: */
  static SSM_TR_SM1 _34_SM1_fired_strong_partial;
  /* SM1:Zoom3:<2> */
  static kcg_bool tr_2_guard_Zoom3_SM1;
  /* SM1:Zoom3:<1> */
  static kcg_bool tr_1_guard_Zoom3_SM1;
  /* SM1: */
  static SSM_ST_SM1 _35_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _36_SM1_reset_act_partial;
  /* SM1: */
  static SSM_TR_SM1 _37_SM1_fired_strong_partial;
  /* SM1:Zoom6:<1> */
  static kcg_bool tr_1_guard_Zoom6_SM1;
  /* SM1: */
  static SSM_ST_SM1 _38_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _39_SM1_reset_act_partial;
  /* SM1: */
  static SSM_TR_SM1 _40_SM1_fired_strong_partial;
  /* SM1:Zoom5:<2> */
  static kcg_bool tr_2_guard_Zoom5_SM1;
  /* SM1:Zoom5:<1> */
  static kcg_bool tr_1_guard_Zoom5_SM1;
  /* SM1: */
  static kcg_bool SM1_reset_sel;
  /* SM1: */
  static kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_Zoom5_SM1 :
      tr_2_guard_Zoom5_SM1 = ZoomOut;
      tr_1_guard_Zoom5_SM1 = ZoomIn;
      if (tr_1_guard_Zoom5_SM1) {
        _38_SM1_state_act_partial = SSM_st_Zoom6_SM1;
      }
      else if (tr_2_guard_Zoom5_SM1) {
        _38_SM1_state_act_partial = SSM_st_Zoom4_SM1;
      }
      else {
        _38_SM1_state_act_partial = SSM_st_Zoom5_SM1;
      }
      outC->SM1_state_act = _38_SM1_state_act_partial;
      if (tr_1_guard_Zoom5_SM1) {
        _40_SM1_fired_strong_partial = SSM_TR_Zoom5_Zoom6_1_Zoom5_SM1;
      }
      else if (tr_2_guard_Zoom5_SM1) {
        _40_SM1_fired_strong_partial = SSM_TR_Zoom5_Zoom4_2_Zoom5_SM1;
      }
      else {
        _40_SM1_fired_strong_partial = _172_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _40_SM1_fired_strong_partial;
      break;
    case SSM_st_Zoom6_SM1 :
      tr_1_guard_Zoom6_SM1 = ZoomOut;
      if (tr_1_guard_Zoom6_SM1) {
        _35_SM1_state_act_partial = SSM_st_Zoom5_SM1;
      }
      else {
        _35_SM1_state_act_partial = SSM_st_Zoom6_SM1;
      }
      outC->SM1_state_act = _35_SM1_state_act_partial;
      if (tr_1_guard_Zoom6_SM1) {
        _37_SM1_fired_strong_partial = SSM_TR_Zoom6_Zoom5_1_Zoom6_SM1;
      }
      else {
        _37_SM1_fired_strong_partial = _172_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _37_SM1_fired_strong_partial;
      break;
    case SSM_st_Zoom3_SM1 :
      tr_2_guard_Zoom3_SM1 = ZoomOut;
      tr_1_guard_Zoom3_SM1 = ZoomIn;
      if (tr_1_guard_Zoom3_SM1) {
        _32_SM1_state_act_partial = SSM_st_Zoom4_SM1;
      }
      else if (tr_2_guard_Zoom3_SM1) {
        _32_SM1_state_act_partial = SSM_st_Zoom2_SM1;
      }
      else {
        _32_SM1_state_act_partial = SSM_st_Zoom3_SM1;
      }
      outC->SM1_state_act = _32_SM1_state_act_partial;
      if (tr_1_guard_Zoom3_SM1) {
        _34_SM1_fired_strong_partial = SSM_TR_Zoom3_Zoom4_1_Zoom3_SM1;
      }
      else if (tr_2_guard_Zoom3_SM1) {
        _34_SM1_fired_strong_partial = SSM_TR_Zoom3_Zoom2_2_Zoom3_SM1;
      }
      else {
        _34_SM1_fired_strong_partial = _172_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _34_SM1_fired_strong_partial;
      break;
    case SSM_st_Zoom4_SM1 :
      tr_2_guard_Zoom4_SM1 = ZoomIn;
      tr_1_guard_Zoom4_SM1 = ZoomOut;
      if (tr_1_guard_Zoom4_SM1) {
        _29_SM1_state_act_partial = SSM_st_Zoom3_SM1;
      }
      else if (tr_2_guard_Zoom4_SM1) {
        _29_SM1_state_act_partial = SSM_st_Zoom5_SM1;
      }
      else {
        _29_SM1_state_act_partial = SSM_st_Zoom4_SM1;
      }
      outC->SM1_state_act = _29_SM1_state_act_partial;
      if (tr_1_guard_Zoom4_SM1) {
        _31_SM1_fired_strong_partial = SSM_TR_Zoom4_Zoom3_1_Zoom4_SM1;
      }
      else if (tr_2_guard_Zoom4_SM1) {
        _31_SM1_fired_strong_partial = SSM_TR_Zoom4_Zoom5_2_Zoom4_SM1;
      }
      else {
        _31_SM1_fired_strong_partial = _172_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _31_SM1_fired_strong_partial;
      break;
    case SSM_st_Zoom2_SM1 :
      tr_2_guard_Zoom2_SM1 = ZoomOut;
      tr_1_guard_Zoom2_SM1 = ZoomIn;
      if (tr_1_guard_Zoom2_SM1) {
        _26_SM1_state_act_partial = SSM_st_Zoom3_SM1;
      }
      else if (tr_2_guard_Zoom2_SM1) {
        _26_SM1_state_act_partial = SSM_st_Zoom1_SM1;
      }
      else {
        _26_SM1_state_act_partial = SSM_st_Zoom2_SM1;
      }
      outC->SM1_state_act = _26_SM1_state_act_partial;
      if (tr_1_guard_Zoom2_SM1) {
        _28_SM1_fired_strong_partial = SSM_TR_Zoom2_Zoom3_1_Zoom2_SM1;
      }
      else if (tr_2_guard_Zoom2_SM1) {
        _28_SM1_fired_strong_partial = SSM_TR_Zoom2_Zoom1_2_Zoom2_SM1;
      }
      else {
        _28_SM1_fired_strong_partial = _172_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _28_SM1_fired_strong_partial;
      break;
    case SSM_st_Zoom1_SM1 :
      tr_1_guard_Zoom1_SM1 = ZoomIn;
      if (tr_1_guard_Zoom1_SM1) {
        SM1_state_act_partial = SSM_st_Zoom2_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_Zoom1_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_Zoom1_SM1) {
        SM1_fired_strong_partial = SSM_TR_Zoom1_Zoom2_1_Zoom1_SM1;
      }
      else {
        SM1_fired_strong_partial = _172_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Zoom5_SM1 :
      _25_SM1_fired_partial = outC->SM1_fired_strong;
      _24_SM1_reset_nxt_partial = kcg_false;
      _23_SM1_state_nxt_partial = SSM_st_Zoom5_SM1;
      outC->_L2_Zoom5_SM1 = kcg_lit_int32(1);
      _22_zoomlevel_partial = outC->_L2_Zoom5_SM1;
      kcg_copy_tScale(&outC->_L1_Zoom5_SM1, (tScale *) &Scales[1]);
      kcg_copy_tScale(&_21_Scale_partial, &outC->_L1_Zoom5_SM1);
      kcg_copy_tScale(&outC->Scale, &_21_Scale_partial);
      outC->zoomlevel = _22_zoomlevel_partial;
      outC->SM1_state_nxt = _23_SM1_state_nxt_partial;
      break;
    case SSM_st_Zoom6_SM1 :
      _20_SM1_fired_partial = outC->SM1_fired_strong;
      _19_SM1_reset_nxt_partial = kcg_false;
      _18_SM1_state_nxt_partial = SSM_st_Zoom6_SM1;
      outC->_L2_Zoom6_SM1 = kcg_lit_int32(0);
      _17_zoomlevel_partial = outC->_L2_Zoom6_SM1;
      kcg_copy_tScale(&outC->_L1_Zoom6_SM1, (tScale *) &Scales[0]);
      kcg_copy_tScale(&_16_Scale_partial, &outC->_L1_Zoom6_SM1);
      kcg_copy_tScale(&outC->Scale, &_16_Scale_partial);
      outC->zoomlevel = _17_zoomlevel_partial;
      outC->SM1_state_nxt = _18_SM1_state_nxt_partial;
      break;
    case SSM_st_Zoom3_SM1 :
      _15_SM1_fired_partial = outC->SM1_fired_strong;
      _14_SM1_reset_nxt_partial = kcg_false;
      _13_SM1_state_nxt_partial = SSM_st_Zoom3_SM1;
      outC->_L2_Zoom3_SM1 = kcg_lit_int32(3);
      _12_zoomlevel_partial = outC->_L2_Zoom3_SM1;
      kcg_copy_tScale(&outC->_L1_Zoom3_SM1, (tScale *) &Scales[3]);
      kcg_copy_tScale(&_11_Scale_partial, &outC->_L1_Zoom3_SM1);
      kcg_copy_tScale(&outC->Scale, &_11_Scale_partial);
      outC->zoomlevel = _12_zoomlevel_partial;
      outC->SM1_state_nxt = _13_SM1_state_nxt_partial;
      break;
    case SSM_st_Zoom4_SM1 :
      _10_SM1_fired_partial = outC->SM1_fired_strong;
      _9_SM1_reset_nxt_partial = kcg_false;
      _8_SM1_state_nxt_partial = SSM_st_Zoom4_SM1;
      outC->_L2_Zoom4_SM1 = kcg_lit_int32(2);
      _7_zoomlevel_partial = outC->_L2_Zoom4_SM1;
      kcg_copy_tScale(&outC->_L1_Zoom4_SM1, (tScale *) &Scales[2]);
      kcg_copy_tScale(&_6_Scale_partial, &outC->_L1_Zoom4_SM1);
      kcg_copy_tScale(&outC->Scale, &_6_Scale_partial);
      outC->zoomlevel = _7_zoomlevel_partial;
      outC->SM1_state_nxt = _8_SM1_state_nxt_partial;
      break;
    case SSM_st_Zoom2_SM1 :
      _5_SM1_fired_partial = outC->SM1_fired_strong;
      _4_SM1_reset_nxt_partial = kcg_false;
      _3_SM1_state_nxt_partial = SSM_st_Zoom2_SM1;
      outC->_L2_Zoom2_SM1 = kcg_lit_int32(4);
      _2_zoomlevel_partial = outC->_L2_Zoom2_SM1;
      kcg_copy_tScale(&outC->_L1_Zoom2_SM1, (tScale *) &Scales[4]);
      kcg_copy_tScale(&_1_Scale_partial, &outC->_L1_Zoom2_SM1);
      kcg_copy_tScale(&outC->Scale, &_1_Scale_partial);
      outC->zoomlevel = _2_zoomlevel_partial;
      outC->SM1_state_nxt = _3_SM1_state_nxt_partial;
      break;
    case SSM_st_Zoom1_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_Zoom1_SM1;
      outC->_L2_Zoom1_SM1 = kcg_lit_int32(5);
      zoomlevel_partial = outC->_L2_Zoom1_SM1;
      kcg_copy_tScale(&outC->_L1_Zoom1_SM1, (tScale *) &Scales[5]);
      kcg_copy_tScale(&Scale_partial, &outC->_L1_Zoom1_SM1);
      kcg_copy_tScale(&outC->Scale, &Scale_partial);
      outC->zoomlevel = zoomlevel_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Zoom5_SM1 :
      outC->SM1_reset_nxt = _24_SM1_reset_nxt_partial;
      outC->SM1_fired = _25_SM1_fired_partial;
      break;
    case SSM_st_Zoom6_SM1 :
      outC->SM1_reset_nxt = _19_SM1_reset_nxt_partial;
      outC->SM1_fired = _20_SM1_fired_partial;
      break;
    case SSM_st_Zoom3_SM1 :
      outC->SM1_reset_nxt = _14_SM1_reset_nxt_partial;
      outC->SM1_fired = _15_SM1_fired_partial;
      break;
    case SSM_st_Zoom4_SM1 :
      outC->SM1_reset_nxt = _9_SM1_reset_nxt_partial;
      outC->SM1_fired = _10_SM1_fired_partial;
      break;
    case SSM_st_Zoom2_SM1 :
      outC->SM1_reset_nxt = _4_SM1_reset_nxt_partial;
      outC->SM1_fired = _5_SM1_fired_partial;
      break;
    case SSM_st_Zoom1_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_Zoom5_SM1 :
      if (tr_1_guard_Zoom5_SM1) {
        _39_SM1_reset_act_partial = kcg_true;
      }
      else {
        _39_SM1_reset_act_partial = tr_2_guard_Zoom5_SM1;
      }
      break;
    case SSM_st_Zoom6_SM1 :
      _36_SM1_reset_act_partial = tr_1_guard_Zoom6_SM1;
      break;
    case SSM_st_Zoom3_SM1 :
      if (tr_1_guard_Zoom3_SM1) {
        _33_SM1_reset_act_partial = kcg_true;
      }
      else {
        _33_SM1_reset_act_partial = tr_2_guard_Zoom3_SM1;
      }
      break;
    case SSM_st_Zoom4_SM1 :
      if (tr_1_guard_Zoom4_SM1) {
        _30_SM1_reset_act_partial = kcg_true;
      }
      else {
        _30_SM1_reset_act_partial = tr_2_guard_Zoom4_SM1;
      }
      break;
    case SSM_st_Zoom2_SM1 :
      if (tr_1_guard_Zoom2_SM1) {
        _27_SM1_reset_act_partial = kcg_true;
      }
      else {
        _27_SM1_reset_act_partial = tr_2_guard_Zoom2_SM1;
      }
      break;
    case SSM_st_Zoom1_SM1 :
      SM1_reset_act_partial = tr_1_guard_Zoom1_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_Zoom5_SM1 :
      outC->SM1_reset_act = _39_SM1_reset_act_partial;
      break;
    case SSM_st_Zoom6_SM1 :
      outC->SM1_reset_act = _36_SM1_reset_act_partial;
      break;
    case SSM_st_Zoom3_SM1 :
      outC->SM1_reset_act = _33_SM1_reset_act_partial;
      break;
    case SSM_st_Zoom4_SM1 :
      outC->SM1_reset_act = _30_SM1_reset_act_partial;
      break;
    case SSM_st_Zoom2_SM1 :
      outC->SM1_reset_act = _27_SM1_reset_act_partial;
      break;
    case SSM_st_Zoom1_SM1 :
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ZoomLevel_init(outC_ZoomLevel *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  outC->SM1_fired = _172_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _172_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_Zoom1_SM1;
  outC->SM1_state_sel = SSM_st_Zoom1_SM1;
  for (idx = 0; idx < 9; idx++) {
    outC->_L1_Zoom5_SM1[idx] = kcg_lit_float32(0.0);
  }
  outC->_L2_Zoom5_SM1 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->_L1_Zoom6_SM1[idx1] = kcg_lit_float32(0.0);
  }
  outC->_L2_Zoom6_SM1 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 9; idx2++) {
    outC->_L1_Zoom3_SM1[idx2] = kcg_lit_float32(0.0);
  }
  outC->_L2_Zoom3_SM1 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 9; idx3++) {
    outC->_L1_Zoom4_SM1[idx3] = kcg_lit_float32(0.0);
  }
  outC->_L2_Zoom4_SM1 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 9; idx4++) {
    outC->_L1_Zoom2_SM1[idx4] = kcg_lit_float32(0.0);
  }
  outC->_L2_Zoom2_SM1 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 9; idx5++) {
    outC->_L1_Zoom1_SM1[idx5] = kcg_lit_float32(0.0);
  }
  outC->_L2_Zoom1_SM1 = kcg_lit_int32(0);
  outC->zoomlevel = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 9; idx6++) {
    outC->Scale[idx6] = kcg_lit_float32(0.0);
  }
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_Zoom3_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


void ZoomLevel_reset(outC_ZoomLevel *outC)
{
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_Zoom3_SM1;
}


void kcg_save_SV_ZoomLevel(SV_ZoomLevel *SV, outC_ZoomLevel *outC)
{
  SV->Context_SM1_reset_nxt = outC->SM1_reset_nxt;
  SV->Context_SM1_reset_act = outC->SM1_reset_act;
  SV->Context_SM1_state_nxt = outC->SM1_state_nxt;
}

void kcg_load_SV_ZoomLevel(outC_ZoomLevel *outC, SV_ZoomLevel *SV)
{
  outC->SM1_reset_nxt = SV->Context_SM1_reset_nxt;
  outC->SM1_reset_act = SV->Context_SM1_reset_act;
  outC->SM1_state_nxt = SV->Context_SM1_state_nxt;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ZoomLevel.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

