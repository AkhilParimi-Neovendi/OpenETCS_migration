/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_MODE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_MODE/ */
void CAST_Int_to_M_MODE_TM_conversions(
  /* m_mode_int/ */
  kcg_int64 m_mode_int,
  outC_CAST_Int_to_M_MODE_TM_conversions *outC)
{
  /* m_mode/ */
  static M_MODE m_mode_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* m_mode/ */
  static M_MODE _1_m_mode_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* m_mode/ */
  static M_MODE _3_m_mode_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* m_mode/ */
  static M_MODE _5_m_mode_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* m_mode/ */
  static M_MODE _7_m_mode_partial;
  /* error/ */
  static kcg_bool _8_error_partial;
  /* m_mode/ */
  static M_MODE _9_m_mode_partial;
  /* error/ */
  static kcg_bool _10_error_partial;
  /* m_mode/ */
  static M_MODE _11_m_mode_partial;
  /* error/ */
  static kcg_bool _12_error_partial;
  /* m_mode/ */
  static M_MODE _13_m_mode_partial;
  /* error/ */
  static kcg_bool _14_error_partial;
  /* m_mode/ */
  static M_MODE _15_m_mode_partial;
  /* error/ */
  static kcg_bool _16_error_partial;
  /* m_mode/ */
  static M_MODE _17_m_mode_partial;
  /* error/ */
  static kcg_bool _18_error_partial;
  /* m_mode/ */
  static M_MODE _19_m_mode_partial;
  /* error/ */
  static kcg_bool _20_error_partial;
  /* m_mode/ */
  static M_MODE _21_m_mode_partial;
  /* error/ */
  static kcg_bool _22_error_partial;
  /* m_mode/ */
  static M_MODE _23_m_mode_partial;
  /* error/ */
  static kcg_bool _24_error_partial;
  /* m_mode/ */
  static M_MODE _25_m_mode_partial;
  /* error/ */
  static kcg_bool _26_error_partial;
  /* m_mode/ */
  static M_MODE _27_m_mode_partial;
  /* error/ */
  static kcg_bool _28_error_partial;
  /* m_mode/ */
  static M_MODE _29_m_mode_partial;
  /* error/ */
  static kcg_bool _30_error_partial;
  /* error/ */
  static kcg_bool _31_error_partial;
  /* m_mode/ */
  static M_MODE _32_m_mode_partial;
  /* error/ */
  static kcg_bool _33_error_partial;
  /* m_mode/ */
  static M_MODE _34_m_mode_partial;
  /* error/ */
  static kcg_bool _35_error_partial;
  /* m_mode/ */
  static M_MODE _36_m_mode_partial;
  /* error/ */
  static kcg_bool _37_error_partial;
  /* m_mode/ */
  static M_MODE _38_m_mode_partial;
  /* error/ */
  static kcg_bool _39_error_partial;
  /* m_mode/ */
  static M_MODE _40_m_mode_partial;
  /* error/ */
  static kcg_bool _41_error_partial;
  /* m_mode/ */
  static M_MODE _42_m_mode_partial;
  /* error/ */
  static kcg_bool _43_error_partial;
  /* m_mode/ */
  static M_MODE _44_m_mode_partial;
  /* error/ */
  static kcg_bool _45_error_partial;
  /* m_mode/ */
  static M_MODE _46_m_mode_partial;
  /* error/ */
  static kcg_bool _47_error_partial;
  /* m_mode/ */
  static M_MODE _48_m_mode_partial;
  /* error/ */
  static kcg_bool _49_error_partial;
  /* m_mode/ */
  static M_MODE _50_m_mode_partial;
  /* error/ */
  static kcg_bool _51_error_partial;
  /* m_mode/ */
  static M_MODE _52_m_mode_partial;
  /* error/ */
  static kcg_bool _53_error_partial;
  /* m_mode/ */
  static M_MODE _54_m_mode_partial;
  /* error/ */
  static kcg_bool _55_error_partial;
  /* m_mode/ */
  static M_MODE _56_m_mode_partial;
  /* error/ */
  static kcg_bool _57_error_partial;
  /* m_mode/ */
  static M_MODE _58_m_mode_partial;
  /* error/ */
  static kcg_bool _59_error_partial;
  /* m_mode/ */
  static M_MODE _60_m_mode_partial;
  /* error/ */
  static kcg_bool _61_error_partial;
  /* m_mode/ */
  static M_MODE _62_m_mode_partial;
  static kcg_bool noname;

  outC->_L4 = m_mode_int;
  outC->m_mode_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_mode_in ==
    INT_M_MODE_Full_Supervision_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L5_then_IfBlock1 = kcg_false;
    error_partial = outC->_L5_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_mode_in ==
      INT_M_MODE_Isolation_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L5_then_else_IfBlock1 = kcg_false;
      _61_error_partial = outC->_L5_then_else_IfBlock1;
      _2_error_partial = _61_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->m_mode_in ==
        INT_M_MODE_Limited_Supervision_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L4_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L4_then_else_else_IfBlock1;
        _59_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->m_mode_in ==
          INT_M_MODE_National_System_TM_conversions;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L4_then_else_else_else_IfBlock1 = kcg_false;
          _57_error_partial = outC->_L4_then_else_else_else_IfBlock1;
          _6_error_partial = _57_error_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = outC->m_mode_in ==
            INT_M_MODE_Non_Leading_TM_conversions;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L4_then_else_else_else_else_IfBlock1 = kcg_false;
            _8_error_partial = outC->_L4_then_else_else_else_else_IfBlock1;
            _55_error_partial = _8_error_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = outC->m_mode_in ==
              INT_M_MODE_On_Sight_TM_conversions;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L4_then_else_else_else_else_else_IfBlock1 = kcg_false;
              _53_error_partial = outC->_L4_then_else_else_else_else_else_IfBlock1;
              _10_error_partial = _53_error_partial;
            }
            else {
              outC->else_clock_else_else_else_else_else_IfBlock1 =
                outC->m_mode_in == INT_M_MODE_Passive_Shunting_TM_conversions;
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L4_then_else_else_else_else_else_else_IfBlock1 = kcg_false;
                _12_error_partial = outC->_L4_then_else_else_else_else_else_else_IfBlock1;
                _51_error_partial = _12_error_partial;
              }
              else {
                outC->else_clock_else_else_else_else_else_else_IfBlock1 =
                  outC->m_mode_in == INT_M_MODE_Post_Trip_TM_conversions;
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L4_then_else_else_else_else_else_else_else_IfBlock1 = kcg_false;
                  _49_error_partial = outC->_L4_then_else_else_else_else_else_else_else_IfBlock1;
                  _14_error_partial = _49_error_partial;
                }
                else {
                  outC->else_clock_else_else_else_else_else_else_else_IfBlock1 =
                    outC->m_mode_in == INT_M_MODE_Reversing_TM_conversions;
                  /* IfBlock1:else:else:else:else:else:else:else:else: */
                  if (outC->else_clock_else_else_else_else_else_else_else_IfBlock1) {
                    outC->_L5_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_false;
                    _16_error_partial =
                      outC->_L5_then_else_else_else_else_else_else_else_else_IfBlock1;
                    _47_error_partial = _16_error_partial;
                  }
                  else {
                    outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->m_mode_in == INT_M_MODE_Shunting_TM_conversions;
                    /* IfBlock1:else:else:else:else:else:else:else:else:else: */
                    if (outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1) {
                      outC->_L4_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        kcg_false;
                      _45_error_partial =
                        outC->_L4_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      _18_error_partial = _45_error_partial;
                    }
                    else {
                      outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        outC->m_mode_in == INT_M_MODE_Sleeping_TM_conversions;
                      /* IfBlock1:else:else:else:else:else:else:else:else:else:else: */
                      if (outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1) {
                        outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          kcg_false;
                        _20_error_partial =
                          outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _43_error_partial = _20_error_partial;
                      }
                      else {
                        outC->else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          outC->m_mode_in == INT_M_MODE_Staff_Responsible_TM_conversions;
                        /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else: */
                        if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                          outC->_L4_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            kcg_false;
                          _41_error_partial =
                            outC->_L4_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                          _22_error_partial = _41_error_partial;
                        }
                        else {
                          outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            outC->m_mode_in == INT_M_MODE_Stand_By_TM_conversions;
                          /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else: */
                          if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                            outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              kcg_false;
                            _24_error_partial =
                              outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            _39_error_partial = _24_error_partial;
                          }
                          else {
                            outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              outC->m_mode_in == INT_M_MODE_System_Failure_TM_conversions;
                            /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else: */
                            if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                              outC->_L2_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                kcg_false;
                              _37_error_partial =
                                outC->_L2_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                              _26_error_partial = _37_error_partial;
                            }
                            else {
                              outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                outC->m_mode_in == INT_M_MODE_Trip_TM_conversions;
                              /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else: */
                              if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                                outC->_L2_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                  kcg_false;
                                _28_error_partial =
                                  outC->_L2_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                _35_error_partial = _28_error_partial;
                              }
                              else {
                                outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                  outC->m_mode_in == INT_M_MODE_Unfitted_TM_conversions;
                                /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else: */
                                if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                                  outC->_L2_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                    kcg_false;
                                  _33_error_partial =
                                    outC->_L2_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                  _30_error_partial = _33_error_partial;
                                }
                                else {
                                  outC->_L6_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                    kcg_true;
                                  _31_error_partial =
                                    outC->_L6_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                  _30_error_partial = _31_error_partial;
                                }
                                _35_error_partial = _30_error_partial;
                              }
                              _26_error_partial = _35_error_partial;
                            }
                            _39_error_partial = _26_error_partial;
                          }
                          _22_error_partial = _39_error_partial;
                        }
                        _43_error_partial = _22_error_partial;
                      }
                      _18_error_partial = _43_error_partial;
                    }
                    _47_error_partial = _18_error_partial;
                  }
                  _14_error_partial = _47_error_partial;
                }
                _51_error_partial = _14_error_partial;
              }
              _10_error_partial = _51_error_partial;
            }
            _55_error_partial = _10_error_partial;
          }
          _6_error_partial = _55_error_partial;
        }
        _59_error_partial = _6_error_partial;
      }
      _2_error_partial = _59_error_partial;
    }
    outC->error = _2_error_partial;
  }
  outC->_L5 = outC->error;
  noname = outC->_L5;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L4_then_IfBlock1 = ENUM_M_MODE_Full_Supervision_TM_conversions;
    m_mode_partial = outC->_L4_then_IfBlock1;
    outC->m_mode = m_mode_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = ENUM_M_MODE_Isolation_TM_conversions;
      _62_m_mode_partial = outC->_L3_then_else_IfBlock1;
      _1_m_mode_partial = _62_m_mode_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 =
          ENUM_M_MODE_Limited_Supervision_TM_conversions;
        _3_m_mode_partial = outC->_L2_then_else_else_IfBlock1;
        _60_m_mode_partial = _3_m_mode_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L2_then_else_else_else_IfBlock1 =
            ENUM_M_MODE_National_System_TM_conversions;
          _58_m_mode_partial = outC->_L2_then_else_else_else_IfBlock1;
          _5_m_mode_partial = _58_m_mode_partial;
        }
        else {
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L2_then_else_else_else_else_IfBlock1 =
              ENUM_M_MODE_Non_Leading_TM_conversions;
            _7_m_mode_partial = outC->_L2_then_else_else_else_else_IfBlock1;
            _56_m_mode_partial = _7_m_mode_partial;
          }
          else {
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L2_then_else_else_else_else_else_IfBlock1 =
                ENUM_M_MODE_On_Sight_TM_conversions;
              _54_m_mode_partial = outC->_L2_then_else_else_else_else_else_IfBlock1;
              _9_m_mode_partial = _54_m_mode_partial;
            }
            else {
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L2_then_else_else_else_else_else_else_IfBlock1 =
                  ENUM_M_MODE_Passive_Shunting_TM_conversions;
                _11_m_mode_partial = outC->_L2_then_else_else_else_else_else_else_IfBlock1;
                _52_m_mode_partial = _11_m_mode_partial;
              }
              else {
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1 =
                    ENUM_M_MODE_Post_Trip_TM_conversions;
                  _50_m_mode_partial = outC->_L2_then_else_else_else_else_else_else_else_IfBlock1;
                  _13_m_mode_partial = _50_m_mode_partial;
                }
                else {
                  /* IfBlock1:else:else:else:else:else:else:else:else: */
                  if (outC->else_clock_else_else_else_else_else_else_else_IfBlock1) {
                    outC->_L3_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      ENUM_M_MODE_Reversing_TM_conversions;
                    _15_m_mode_partial =
                      outC->_L3_then_else_else_else_else_else_else_else_else_IfBlock1;
                    _48_m_mode_partial = _15_m_mode_partial;
                  }
                  else {
                    /* IfBlock1:else:else:else:else:else:else:else:else:else: */
                    if (outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1) {
                      outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        ENUM_M_MODE_Shunting_TM_conversions;
                      _46_m_mode_partial =
                        outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      _17_m_mode_partial = _46_m_mode_partial;
                    }
                    else {
                      /* IfBlock1:else:else:else:else:else:else:else:else:else:else: */
                      if (outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1) {
                        outC->_L2_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          ENUM_M_MODE_Sleeping_TM_conversions;
                        _19_m_mode_partial =
                          outC->_L2_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _44_m_mode_partial = _19_m_mode_partial;
                      }
                      else {
                        /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else: */
                        if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                          outC->_L3_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            ENUM_M_MODE_Staff_Responsible_TM_conversions;
                          _42_m_mode_partial =
                            outC->_L3_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                          _21_m_mode_partial = _42_m_mode_partial;
                        }
                        else {
                          /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else: */
                          if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                            outC->_L2_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              ENUM_M_MODE_Stand_By_TM_conversions;
                            _23_m_mode_partial =
                              outC->_L2_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            _40_m_mode_partial = _23_m_mode_partial;
                          }
                          else {
                            /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else: */
                            if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                              outC->_L3_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                ENUM_M_MODE_System_Failure_TM_conversions;
                              _38_m_mode_partial =
                                outC->_L3_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                              _25_m_mode_partial = _38_m_mode_partial;
                            }
                            else {
                              /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else: */
                              if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                                outC->_L3_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                  ENUM_M_MODE_Trip_TM_conversions;
                                _27_m_mode_partial =
                                  outC->_L3_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                _36_m_mode_partial = _27_m_mode_partial;
                              }
                              else {
                                /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else: */
                                if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                                  outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                    ENUM_M_MODE_Unfitted_TM_conversions;
                                  _34_m_mode_partial =
                                    outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                  _29_m_mode_partial = _34_m_mode_partial;
                                }
                                else {
                                  outC->_L7_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                                    ENUM_M_MODE_System_Failure_TM_conversions;
                                  _32_m_mode_partial =
                                    outC->_L7_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                                  _29_m_mode_partial = _32_m_mode_partial;
                                }
                                _36_m_mode_partial = _29_m_mode_partial;
                              }
                              _25_m_mode_partial = _36_m_mode_partial;
                            }
                            _40_m_mode_partial = _25_m_mode_partial;
                          }
                          _21_m_mode_partial = _40_m_mode_partial;
                        }
                        _44_m_mode_partial = _21_m_mode_partial;
                      }
                      _17_m_mode_partial = _44_m_mode_partial;
                    }
                    _48_m_mode_partial = _17_m_mode_partial;
                  }
                  _13_m_mode_partial = _48_m_mode_partial;
                }
                _52_m_mode_partial = _13_m_mode_partial;
              }
              _9_m_mode_partial = _52_m_mode_partial;
            }
            _56_m_mode_partial = _9_m_mode_partial;
          }
          _5_m_mode_partial = _56_m_mode_partial;
        }
        _60_m_mode_partial = _5_m_mode_partial;
      }
      _1_m_mode_partial = _60_m_mode_partial;
    }
    outC->m_mode = _1_m_mode_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_M_MODE_init_TM_conversions(
  outC_CAST_Int_to_M_MODE_TM_conversions *outC)
{
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  outC->error = kcg_true;
  outC->m_mode_in = kcg_lit_int64(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L5_then_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_IfBlock1 = M_MODE_Full_Supervision;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 = M_MODE_Full_Supervision;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_IfBlock1 = M_MODE_Full_Supervision;
  outC->else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1 =
    M_MODE_Full_Supervision;
  outC->else_clock_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
    M_MODE_Full_Supervision;
  outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L3_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    M_MODE_Full_Supervision;
  outC->_L4_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L3_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    M_MODE_Full_Supervision;
  outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    M_MODE_Full_Supervision;
  outC->_L7_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    M_MODE_Full_Supervision;
  outC->_L6_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L3_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    M_MODE_Full_Supervision;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    M_MODE_Full_Supervision;
  outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    M_MODE_Full_Supervision;
  outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_else_else_else_else_else_IfBlock1 =
    M_MODE_Full_Supervision;
  outC->_L5_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1 = M_MODE_Full_Supervision;
  outC->_L4_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_IfBlock1 = M_MODE_Full_Supervision;
  outC->_L4_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 = M_MODE_Full_Supervision;
  outC->_L4_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 = M_MODE_Full_Supervision;
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->m_mode = M_MODE_Full_Supervision;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_M_MODE_reset_TM_conversions(
  outC_CAST_Int_to_M_MODE_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_M_MODE_TM_conversions.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

