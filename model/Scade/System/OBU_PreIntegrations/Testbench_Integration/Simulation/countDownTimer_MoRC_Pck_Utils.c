/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

/* MoRC_Pck::Utils::countDownTimer/ */
void countDownTimer_MoRC_Pck_Utils(
  /* re_start/ */
  kcg_bool re_start,
  /* stop/ */
  kcg_bool stop,
  /* actualTime/ */
  time_Type_MoRC_Pck actualTime,
  /* autoretrigger/ */
  kcg_bool autoretrigger,
  /* interval/ */
  time_Type_MoRC_Pck interval,
  outC_countDownTimer_MoRC_Pck_Utils *outC)
{
  static kcg_bool tmp;
  static kcg_bool tmp1;
  /* expired/ */
  static kcg_bool expired_partial;
  /* expired_loc/ */
  static kcg_bool expired_loc_partial;
  /* TimerStatus_SM: */
  static SSM_ST_TimerStatus_SM TimerStatus_SM_state_nxt_partial;
  /* TimerStatus_SM: */
  static kcg_bool TimerStatus_SM_reset_nxt_partial;
  /* TimerStatus_SM: */
  static SSM_TR_TimerStatus_SM TimerStatus_SM_fired_partial;
  /* expired/ */
  static kcg_bool _2_expired_partial;
  /* expired_loc/ */
  static kcg_bool _3_expired_loc_partial;
  /* TimerStatus_SM: */
  static SSM_ST_TimerStatus_SM _4_TimerStatus_SM_state_nxt_partial;
  /* TimerStatus_SM: */
  static kcg_bool _5_TimerStatus_SM_reset_nxt_partial;
  /* TimerStatus_SM: */
  static SSM_TR_TimerStatus_SM _6_TimerStatus_SM_fired_partial;
  /* TimerStatus_SM:Counting:<2> */
  static kcg_bool tr_2_guard_Counting_TimerStatus_SM;
  /* TimerStatus_SM:Counting:<3> */
  static kcg_bool tr_3_guard_Counting_TimerStatus_SM;
  /* TimerStatus_SM:Counting:<4> */
  static kcg_bool tr_4_guard_Counting_TimerStatus_SM;
  /* TimerStatus_SM: */
  static SSM_TR_TimerStatus_SM _7_TimerStatus_SM_fired_partial;
  /* TimerStatus_SM: */
  static kcg_bool _8_TimerStatus_SM_reset_nxt_partial;
  /* TimerStatus_SM: */
  static SSM_ST_TimerStatus_SM _9_TimerStatus_SM_state_nxt_partial;
  /* TimerStatus_SM: */
  static SSM_TR_TimerStatus_SM _10_TimerStatus_SM_fired_partial;
  /* TimerStatus_SM: */
  static kcg_bool _11_TimerStatus_SM_reset_nxt_partial;
  /* TimerStatus_SM: */
  static SSM_ST_TimerStatus_SM _12_TimerStatus_SM_state_nxt_partial;
  /* expired/ */
  static kcg_bool _13_expired_partial;
  /* expired_loc/ */
  static kcg_bool _14_expired_loc_partial;
  /* TimerStatus_SM: */
  static SSM_ST_TimerStatus_SM _15_TimerStatus_SM_state_nxt_partial;
  /* TimerStatus_SM: */
  static kcg_bool _16_TimerStatus_SM_reset_nxt_partial;
  /* TimerStatus_SM: */
  static SSM_TR_TimerStatus_SM _17_TimerStatus_SM_fired_partial;
  /* TimerStatus_SM:Expired:<2> */
  static kcg_bool tr_2_guard_Expired_TimerStatus_SM;
  /* TimerStatus_SM: */
  static SSM_ST_TimerStatus_SM TimerStatus_SM_state_act_partial;
  /* TimerStatus_SM: */
  static kcg_bool TimerStatus_SM_reset_act_partial;
  /* TimerStatus_SM: */
  static SSM_TR_TimerStatus_SM TimerStatus_SM_fired_strong_partial;
  /* TimerStatus_SM:Stopped:<2> */
  static kcg_bool tr_2_guard_Stopped_TimerStatus_SM;
  /* TimerStatus_SM:Stopped:<1> */
  static kcg_bool tr_1_guard_Stopped_TimerStatus_SM;
  /* TimerStatus_SM: */
  static SSM_ST_TimerStatus_SM _18_TimerStatus_SM_state_act_partial;
  /* TimerStatus_SM: */
  static kcg_bool _19_TimerStatus_SM_reset_act_partial;
  /* TimerStatus_SM: */
  static SSM_TR_TimerStatus_SM _20_TimerStatus_SM_fired_strong_partial;
  /* TimerStatus_SM:Counting:<1> */
  static kcg_bool tr_1_guard_Counting_TimerStatus_SM;
  /* TimerStatus_SM: */
  static SSM_ST_TimerStatus_SM _21_TimerStatus_SM_state_act_partial;
  /* TimerStatus_SM: */
  static kcg_bool _22_TimerStatus_SM_reset_act_partial;
  /* TimerStatus_SM: */
  static SSM_TR_TimerStatus_SM _23_TimerStatus_SM_fired_strong_partial;
  /* TimerStatus_SM:Expired:<1> */
  static kcg_bool tr_1_guard_Expired_TimerStatus_SM;
  /* TimerStatus_SM: */
  static kcg_bool TimerStatus_SM_reset_sel;
  /* TimerStatus_SM: */
  static kcg_bool TimerStatus_SM_reset_prv;

  outC->TimerStatus_SM_state_sel = outC->TimerStatus_SM_state_nxt;
  /* TimerStatus_SM: */
  switch (outC->TimerStatus_SM_state_sel) {
    case SSM_st_Expired_TimerStatus_SM :
      tr_1_guard_Expired_TimerStatus_SM = stop;
      if (tr_1_guard_Expired_TimerStatus_SM) {
        _21_TimerStatus_SM_state_act_partial = SSM_st_Stopped_TimerStatus_SM;
      }
      else {
        _21_TimerStatus_SM_state_act_partial = SSM_st_Expired_TimerStatus_SM;
      }
      outC->TimerStatus_SM_state_act = _21_TimerStatus_SM_state_act_partial;
      break;
    case SSM_st_Counting_TimerStatus_SM :
      tr_1_guard_Counting_TimerStatus_SM = stop;
      if (tr_1_guard_Counting_TimerStatus_SM) {
        _18_TimerStatus_SM_state_act_partial = SSM_st_Stopped_TimerStatus_SM;
      }
      else {
        _18_TimerStatus_SM_state_act_partial = SSM_st_Counting_TimerStatus_SM;
      }
      outC->TimerStatus_SM_state_act = _18_TimerStatus_SM_state_act_partial;
      break;
    case SSM_st_Stopped_TimerStatus_SM :
      tr_2_guard_Stopped_TimerStatus_SM = re_start | autoretrigger;
      tr_1_guard_Stopped_TimerStatus_SM = stop;
      if (tr_1_guard_Stopped_TimerStatus_SM) {
        TimerStatus_SM_state_act_partial = SSM_st_Stopped_TimerStatus_SM;
      }
      else if (tr_2_guard_Stopped_TimerStatus_SM) {
        TimerStatus_SM_state_act_partial = SSM_st_Counting_TimerStatus_SM;
      }
      else {
        TimerStatus_SM_state_act_partial = SSM_st_Stopped_TimerStatus_SM;
      }
      outC->TimerStatus_SM_state_act = TimerStatus_SM_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->TimerStatus_SM_state_act) {
    case SSM_st_Counting_TimerStatus_SM :
      outC->_L1_Counting_TimerStatus_SM = actualTime;
      outC->Init_MemoryBasic_1_int64 = outC->_L1_Counting_TimerStatus_SM;
      outC->_L7_MemoryBasic_1_int64 = outC->Init_MemoryBasic_1_int64;
      break;
    default :
      /* this branch is empty */
      break;
  }
  TimerStatus_SM_reset_sel = outC->TimerStatus_SM_reset_nxt;
  switch (outC->TimerStatus_SM_state_sel) {
    case SSM_st_Counting_TimerStatus_SM :
      if (TimerStatus_SM_reset_sel) {
        outC->init = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  TimerStatus_SM_reset_prv = outC->TimerStatus_SM_reset_act;
  /* TimerStatus_SM: */
  switch (outC->TimerStatus_SM_state_sel) {
    case SSM_st_Expired_TimerStatus_SM :
      _22_TimerStatus_SM_reset_act_partial = tr_1_guard_Expired_TimerStatus_SM;
      outC->TimerStatus_SM_reset_act = _22_TimerStatus_SM_reset_act_partial;
      break;
    case SSM_st_Counting_TimerStatus_SM :
      _19_TimerStatus_SM_reset_act_partial = tr_1_guard_Counting_TimerStatus_SM;
      outC->TimerStatus_SM_reset_act = _19_TimerStatus_SM_reset_act_partial;
      break;
    case SSM_st_Stopped_TimerStatus_SM :
      if (tr_1_guard_Stopped_TimerStatus_SM) {
        TimerStatus_SM_reset_act_partial = kcg_true;
      }
      else {
        TimerStatus_SM_reset_act_partial = tr_2_guard_Stopped_TimerStatus_SM;
      }
      outC->TimerStatus_SM_reset_act = TimerStatus_SM_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->TimerStatus_SM_state_act) {
    case SSM_st_Counting_TimerStatus_SM :
      if (outC->TimerStatus_SM_reset_act) {
        outC->init = kcg_true;
      }
      /* @1/_L6= */
      if (outC->init) {
        outC->_L6_MemoryBasic_1_int64 = outC->_L7_MemoryBasic_1_int64;
      }
      else {
        outC->_L6_MemoryBasic_1_int64 = outC->_L4_MemoryBasic_1_int64;
      }
      outC->_L8_Counting_TimerStatus_SM = kcg_false;
      outC->Write_MemoryBasic_1_int64 = outC->_L8_Counting_TimerStatus_SM;
      outC->_L5_MemoryBasic_1_int64 = outC->Write_MemoryBasic_1_int64;
      outC->BM_Input_MemoryBasic_1_int64 = outC->_L1_Counting_TimerStatus_SM;
      outC->_L2_MemoryBasic_1_int64 = outC->BM_Input_MemoryBasic_1_int64;
      /* @1/_L4= */
      if (outC->_L5_MemoryBasic_1_int64) {
        outC->_L4_MemoryBasic_1_int64 = outC->_L2_MemoryBasic_1_int64;
      }
      else {
        outC->_L4_MemoryBasic_1_int64 = outC->_L6_MemoryBasic_1_int64;
      }
      outC->Memorized_MemoryBasic_1_int64 = outC->_L4_MemoryBasic_1_int64;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* TimerStatus_SM: */
  switch (outC->TimerStatus_SM_state_sel) {
    case SSM_st_Expired_TimerStatus_SM :
      if (tr_1_guard_Expired_TimerStatus_SM) {
        _23_TimerStatus_SM_fired_strong_partial =
          SSM_TR_Expired_Stopped_1_Expired_TimerStatus_SM;
      }
      else {
        _23_TimerStatus_SM_fired_strong_partial = SSM_TR_no_trans_TimerStatus_SM;
      }
      outC->TimerStatus_SM_fired_strong = _23_TimerStatus_SM_fired_strong_partial;
      break;
    case SSM_st_Counting_TimerStatus_SM :
      if (tr_1_guard_Counting_TimerStatus_SM) {
        _20_TimerStatus_SM_fired_strong_partial =
          SSM_TR_Counting_Stopped_1_Counting_TimerStatus_SM;
      }
      else {
        _20_TimerStatus_SM_fired_strong_partial = SSM_TR_no_trans_TimerStatus_SM;
      }
      outC->TimerStatus_SM_fired_strong = _20_TimerStatus_SM_fired_strong_partial;
      break;
    case SSM_st_Stopped_TimerStatus_SM :
      if (tr_1_guard_Stopped_TimerStatus_SM) {
        TimerStatus_SM_fired_strong_partial =
          SSM_TR_Stopped_Stopped_1_Stopped_TimerStatus_SM;
      }
      else if (tr_2_guard_Stopped_TimerStatus_SM) {
        TimerStatus_SM_fired_strong_partial =
          SSM_TR_Stopped_Counting_2_Stopped_TimerStatus_SM;
      }
      else {
        TimerStatus_SM_fired_strong_partial = SSM_TR_no_trans_TimerStatus_SM;
      }
      outC->TimerStatus_SM_fired_strong = TimerStatus_SM_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->TimerStatus_SM_state_act) {
    case SSM_st_Expired_TimerStatus_SM :
      tr_2_guard_Expired_TimerStatus_SM = re_start | autoretrigger;
      outC->tr_2_clock_Expired_TimerStatus_SM = tr_2_guard_Expired_TimerStatus_SM;
      break;
    case SSM_st_Counting_TimerStatus_SM :
      outC->Counting_weakb_clock_TimerStatus_SM =
        outC->TimerStatus_SM_fired_strong != SSM_TR_no_trans_TimerStatus_SM;
      if (outC->Counting_weakb_clock_TimerStatus_SM) {
      }
      else {
        tr_2_guard_Counting_TimerStatus_SM = re_start;
        outC->tr_2_clock_Counting_TimerStatus_SM = tr_2_guard_Counting_TimerStatus_SM;
      }
      outC->_L4_Counting_TimerStatus_SM = outC->Memorized_MemoryBasic_1_int64;
      outC->_L5_Counting_TimerStatus_SM = interval;
      outC->_L6_Counting_TimerStatus_SM = outC->_L1_Counting_TimerStatus_SM -
        outC->_L5_Counting_TimerStatus_SM;
      outC->_L7_Counting_TimerStatus_SM = outC->_L6_Counting_TimerStatus_SM >=
        outC->_L4_Counting_TimerStatus_SM;
      _3_expired_loc_partial = outC->_L7_Counting_TimerStatus_SM;
      if (outC->Counting_weakb_clock_TimerStatus_SM) {
      }
      else {
        tr_3_guard_Counting_TimerStatus_SM = _3_expired_loc_partial & autoretrigger;
        if (outC->tr_2_clock_Counting_TimerStatus_SM) {
        }
        else {
          outC->tr_3_clock_Counting_TimerStatus_SM = tr_3_guard_Counting_TimerStatus_SM;
        }
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* TimerStatus_SM: */
  switch (outC->TimerStatus_SM_state_sel) {
    case SSM_st_Expired_TimerStatus_SM :
      tmp = kcg_false;
      break;
    case SSM_st_Counting_TimerStatus_SM :
      tmp = kcg_false;
      break;
    case SSM_st_Stopped_TimerStatus_SM :
      outC->tr_1_clock_Stopped_TimerStatus_SM = tr_1_guard_Stopped_TimerStatus_SM;
      /* TimerStatus_SM:Stopped:<1> */
      if (outC->tr_1_clock_Stopped_TimerStatus_SM) {
        tmp = kcg_false;
      }
      else {
        outC->tr_2_clock_Stopped_TimerStatus_SM = tr_2_guard_Stopped_TimerStatus_SM;
        /* TimerStatus_SM:Stopped:<2> */
        if (outC->tr_2_clock_Stopped_TimerStatus_SM) {
          tmp = kcg_true;
        }
        else {
          tmp = kcg_false;
        }
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* TimerStatus_SM: */
  switch (outC->TimerStatus_SM_state_act) {
    case SSM_st_Expired_TimerStatus_SM :
      /* TimerStatus_SM:Expired:<2> */
      if (outC->tr_2_clock_Expired_TimerStatus_SM) {
        tmp1 = kcg_true;
      }
      else {
        tmp1 = kcg_false;
      }
      break;
    case SSM_st_Counting_TimerStatus_SM :
      /* TimerStatus_SM:Counting: */
      if (outC->Counting_weakb_clock_TimerStatus_SM) {
        tmp1 = kcg_false;
      }
      else /* TimerStatus_SM:Counting:<2> */
      if (outC->tr_2_clock_Counting_TimerStatus_SM) {
        tmp1 = kcg_true;
      }
      else /* TimerStatus_SM:Counting:<3> */
      if (outC->tr_3_clock_Counting_TimerStatus_SM) {
        tmp1 = kcg_true;
      }
      else {
        tmp1 = kcg_false;
      }
      break;
    case SSM_st_Stopped_TimerStatus_SM :
      tmp1 = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->sStart = tmp | tmp1;
  outC->_L1 = outC->sStart;
  outC->started = outC->_L1;
  /* TimerStatus_SM: */
  switch (outC->TimerStatus_SM_state_act) {
    case SSM_st_Expired_TimerStatus_SM :
      _14_expired_loc_partial = kcg_false;
      if (tr_2_guard_Expired_TimerStatus_SM) {
        _17_TimerStatus_SM_fired_partial =
          SSM_TR_Expired_Counting_2_Expired_TimerStatus_SM;
      }
      else {
        _17_TimerStatus_SM_fired_partial = SSM_TR_no_trans_TimerStatus_SM;
      }
      _16_TimerStatus_SM_reset_nxt_partial = tr_2_guard_Expired_TimerStatus_SM;
      if (tr_2_guard_Expired_TimerStatus_SM) {
        _15_TimerStatus_SM_state_nxt_partial = SSM_st_Counting_TimerStatus_SM;
      }
      else {
        _15_TimerStatus_SM_state_nxt_partial = SSM_st_Expired_TimerStatus_SM;
      }
      outC->_L1_Expired_TimerStatus_SM = kcg_true;
      _13_expired_partial = outC->_L1_Expired_TimerStatus_SM;
      outC->expired = _13_expired_partial;
      outC->expired_loc = _14_expired_loc_partial;
      outC->TimerStatus_SM_state_nxt = _15_TimerStatus_SM_state_nxt_partial;
      outC->TimerStatus_SM_reset_nxt = _16_TimerStatus_SM_reset_nxt_partial;
      outC->TimerStatus_SM_fired = _17_TimerStatus_SM_fired_partial;
      break;
    case SSM_st_Counting_TimerStatus_SM :
      /* TimerStatus_SM:Counting: */
      if (outC->Counting_weakb_clock_TimerStatus_SM) {
        _10_TimerStatus_SM_fired_partial = outC->TimerStatus_SM_fired_strong;
        _11_TimerStatus_SM_reset_nxt_partial = kcg_false;
        _12_TimerStatus_SM_state_nxt_partial = SSM_st_Counting_TimerStatus_SM;
        _4_TimerStatus_SM_state_nxt_partial = _12_TimerStatus_SM_state_nxt_partial;
        _5_TimerStatus_SM_reset_nxt_partial = _11_TimerStatus_SM_reset_nxt_partial;
        _6_TimerStatus_SM_fired_partial = _10_TimerStatus_SM_fired_partial;
      }
      else {
        tr_4_guard_Counting_TimerStatus_SM = _3_expired_loc_partial;
        if (tr_2_guard_Counting_TimerStatus_SM) {
          _7_TimerStatus_SM_fired_partial =
            SSM_TR_Counting_Counting_2_Counting_TimerStatus_SM;
        }
        else if (tr_3_guard_Counting_TimerStatus_SM) {
          _7_TimerStatus_SM_fired_partial =
            SSM_TR_Counting_Counting_3_Counting_TimerStatus_SM;
        }
        else if (tr_4_guard_Counting_TimerStatus_SM) {
          _7_TimerStatus_SM_fired_partial =
            SSM_TR_Counting_Expired_4_Counting_TimerStatus_SM;
        }
        else {
          _7_TimerStatus_SM_fired_partial = SSM_TR_no_trans_TimerStatus_SM;
        }
        if (tr_2_guard_Counting_TimerStatus_SM) {
          _8_TimerStatus_SM_reset_nxt_partial = kcg_true;
        }
        else if (tr_3_guard_Counting_TimerStatus_SM) {
          _8_TimerStatus_SM_reset_nxt_partial = kcg_true;
        }
        else {
          _8_TimerStatus_SM_reset_nxt_partial = tr_4_guard_Counting_TimerStatus_SM;
        }
        if (tr_2_guard_Counting_TimerStatus_SM) {
          _9_TimerStatus_SM_state_nxt_partial = SSM_st_Counting_TimerStatus_SM;
        }
        else if (tr_3_guard_Counting_TimerStatus_SM) {
          _9_TimerStatus_SM_state_nxt_partial = SSM_st_Counting_TimerStatus_SM;
        }
        else if (tr_4_guard_Counting_TimerStatus_SM) {
          _9_TimerStatus_SM_state_nxt_partial = SSM_st_Expired_TimerStatus_SM;
        }
        else {
          _9_TimerStatus_SM_state_nxt_partial = SSM_st_Counting_TimerStatus_SM;
        }
        _4_TimerStatus_SM_state_nxt_partial = _9_TimerStatus_SM_state_nxt_partial;
        _5_TimerStatus_SM_reset_nxt_partial = _8_TimerStatus_SM_reset_nxt_partial;
        _6_TimerStatus_SM_fired_partial = _7_TimerStatus_SM_fired_partial;
      }
      _2_expired_partial = outC->_L7_Counting_TimerStatus_SM;
      outC->expired = _2_expired_partial;
      outC->expired_loc = _3_expired_loc_partial;
      outC->TimerStatus_SM_state_nxt = _4_TimerStatus_SM_state_nxt_partial;
      outC->TimerStatus_SM_reset_nxt = _5_TimerStatus_SM_reset_nxt_partial;
      outC->TimerStatus_SM_fired = _6_TimerStatus_SM_fired_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_Stopped_TimerStatus_SM :
      expired_loc_partial = kcg_false;
      TimerStatus_SM_fired_partial = outC->TimerStatus_SM_fired_strong;
      TimerStatus_SM_reset_nxt_partial = kcg_false;
      TimerStatus_SM_state_nxt_partial = SSM_st_Stopped_TimerStatus_SM;
      outC->_L1_Stopped_TimerStatus_SM = kcg_false;
      expired_partial = outC->_L1_Stopped_TimerStatus_SM;
      outC->expired = expired_partial;
      outC->expired_loc = expired_loc_partial;
      outC->TimerStatus_SM_state_nxt = TimerStatus_SM_state_nxt_partial;
      outC->TimerStatus_SM_reset_nxt = TimerStatus_SM_reset_nxt_partial;
      outC->TimerStatus_SM_fired = TimerStatus_SM_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void countDownTimer_init_MoRC_Pck_Utils(
  outC_countDownTimer_MoRC_Pck_Utils *outC)
{
  outC->_L1 = kcg_true;
  outC->expired_loc = kcg_true;
  outC->TimerStatus_SM_fired = SSM_TR_no_trans_TimerStatus_SM;
  outC->TimerStatus_SM_fired_strong = SSM_TR_no_trans_TimerStatus_SM;
  outC->TimerStatus_SM_state_act = SSM_st_Stopped_TimerStatus_SM;
  outC->TimerStatus_SM_state_sel = SSM_st_Stopped_TimerStatus_SM;
  outC->sStart = kcg_true;
  outC->tr_2_clock_Stopped_TimerStatus_SM = kcg_true;
  outC->tr_1_clock_Stopped_TimerStatus_SM = kcg_true;
  outC->tr_2_clock_Expired_TimerStatus_SM = kcg_true;
  outC->_L1_Expired_TimerStatus_SM = kcg_true;
  outC->tr_2_clock_Counting_TimerStatus_SM = kcg_true;
  outC->tr_3_clock_Counting_TimerStatus_SM = kcg_true;
  outC->Counting_weakb_clock_TimerStatus_SM = kcg_true;
  outC->_L1_Counting_TimerStatus_SM = kcg_lit_int64(0);
  outC->_L4_Counting_TimerStatus_SM = kcg_lit_int64(0);
  outC->_L5_Counting_TimerStatus_SM = kcg_lit_int64(0);
  outC->_L6_Counting_TimerStatus_SM = kcg_lit_int64(0);
  outC->_L7_Counting_TimerStatus_SM = kcg_true;
  outC->_L8_Counting_TimerStatus_SM = kcg_true;
  outC->_L1_Stopped_TimerStatus_SM = kcg_true;
  outC->_L2_MemoryBasic_1_int64 = kcg_lit_int64(0);
  outC->_L5_MemoryBasic_1_int64 = kcg_true;
  outC->_L6_MemoryBasic_1_int64 = kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_int64 = kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_int64 = kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_int64 = kcg_lit_int64(0);
  outC->Write_MemoryBasic_1_int64 = kcg_true;
  outC->Memorized_MemoryBasic_1_int64 = kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_int64 = kcg_lit_int64(0);
  outC->init = kcg_true;
  outC->started = kcg_true;
  outC->expired = kcg_true;
  outC->TimerStatus_SM_reset_act = kcg_false;
  outC->TimerStatus_SM_reset_nxt = kcg_false;
  outC->TimerStatus_SM_state_nxt = SSM_st_Stopped_TimerStatus_SM;
}
#endif /* KCG_USER_DEFINED_INIT */


void countDownTimer_reset_MoRC_Pck_Utils(
  outC_countDownTimer_MoRC_Pck_Utils *outC)
{
  outC->init = kcg_true;
  outC->TimerStatus_SM_reset_act = kcg_false;
  outC->TimerStatus_SM_reset_nxt = kcg_false;
  outC->TimerStatus_SM_state_nxt = SSM_st_Stopped_TimerStatus_SM;
}


void kcg_save_SV_countDownTimer_MoRC_Pck_Utils(
  SV_countDownTimer_MoRC_Pck_Utils *SV,
  outC_countDownTimer_MoRC_Pck_Utils *outC)
{
  SV->Context_TimerStatus_SM_reset_nxt = outC->TimerStatus_SM_reset_nxt;
  SV->Context_TimerStatus_SM_reset_act = outC->TimerStatus_SM_reset_act;
  SV->Context_TimerStatus_SM_state_nxt = outC->TimerStatus_SM_state_nxt;
  SV->Context__L4_MemoryBasic_1 = outC->_L4_MemoryBasic_1_int64;
  SV->Context_init = outC->init;
}

void kcg_load_SV_countDownTimer_MoRC_Pck_Utils(
  outC_countDownTimer_MoRC_Pck_Utils *outC,
  SV_countDownTimer_MoRC_Pck_Utils *SV)
{
  outC->TimerStatus_SM_reset_nxt = SV->Context_TimerStatus_SM_reset_nxt;
  outC->TimerStatus_SM_reset_act = SV->Context_TimerStatus_SM_reset_act;
  outC->TimerStatus_SM_state_nxt = SV->Context_TimerStatus_SM_state_nxt;
  outC->_L4_MemoryBasic_1_int64 = SV->Context__L4_MemoryBasic_1;
  outC->init = SV->Context_init;
}

/*
  Expanded instances for: MoRC_Pck::Utils::countDownTimer/
  @1: (linear::MemoryBasic#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** countDownTimer_MoRC_Pck_Utils.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

