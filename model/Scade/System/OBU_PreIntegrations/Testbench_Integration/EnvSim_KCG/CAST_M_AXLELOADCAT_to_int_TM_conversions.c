/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_AXLELOADCAT_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_AXLELOADCAT_to_int/ */
void CAST_M_AXLELOADCAT_to_int_TM_conversions(
  /* m_axleloadcat/ */
  M_AXLELOADCAT m_axleloadcat,
  outC_CAST_M_AXLELOADCAT_to_int_TM_conversions *outC)
{
  /* m_axleloadcat_int/ */
  static kcg_int32 m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _1_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _3_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _5_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _7_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _8_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _9_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _10_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _11_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _12_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _13_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _14_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _15_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _16_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _17_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _18_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _19_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _20_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _21_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _22_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _23_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _24_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _25_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _26_error_partial;
  /* error/ */
  static kcg_bool _27_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _28_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _29_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _30_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _31_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _32_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _33_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _34_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _35_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _36_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _37_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _38_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _39_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _40_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _41_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _42_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _43_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _44_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _45_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _46_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _47_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _48_m_axleloadcat_int_partial;
  /* error/ */
  static kcg_bool _49_error_partial;
  /* m_axleloadcat_int/ */
  static kcg_int32 _50_m_axleloadcat_int_partial;
  static kcg_bool noname;

  outC->_L4 = m_axleloadcat;
  outC->m_axleloadcat_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_axleloadcat_in ==
    ENUM_M_AXLELOADCAT_A_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L8_then_IfBlock1 = INT_M_AXLELOADCAT_A_TM_conversions;
    outC->_L7_then_IfBlock1 = kcg_false;
    error_partial = outC->_L7_then_IfBlock1;
    m_axleloadcat_int_partial = outC->_L8_then_IfBlock1;
    outC->m_axleloadcat_int = m_axleloadcat_int_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_axleloadcat_in ==
      ENUM_M_AXLELOADCAT_B1_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L7_then_else_IfBlock1 = INT_M_AXLELOADCAT_B1_TM_conversions;
      outC->_L6_then_else_IfBlock1 = kcg_false;
      _49_error_partial = outC->_L6_then_else_IfBlock1;
      _50_m_axleloadcat_int_partial = outC->_L7_then_else_IfBlock1;
      _1_m_axleloadcat_int_partial = _50_m_axleloadcat_int_partial;
      _2_error_partial = _49_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->m_axleloadcat_in ==
        ENUM_M_AXLELOADCAT_B2_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L2_then_else_else_IfBlock1;
        outC->_L1_then_else_else_IfBlock1 = INT_M_AXLELOADCAT_B2_TM_conversions;
        _3_m_axleloadcat_int_partial = outC->_L1_then_else_else_IfBlock1;
        _48_m_axleloadcat_int_partial = _3_m_axleloadcat_int_partial;
        _47_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->m_axleloadcat_in ==
          ENUM_M_AXLELOADCAT_C2_TM_conversions;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = kcg_false;
          _45_error_partial = outC->_L1_then_else_else_else_IfBlock1;
          outC->_L2_then_else_else_else_IfBlock1 = INT_M_AXLELOADCAT_C2_TM_conversions;
          _46_m_axleloadcat_int_partial = outC->_L2_then_else_else_else_IfBlock1;
          _5_m_axleloadcat_int_partial = _46_m_axleloadcat_int_partial;
          _6_error_partial = _45_error_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = outC->m_axleloadcat_in ==
            ENUM_M_AXLELOADCAT_C3_TM_conversions;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L2_then_else_else_else_else_IfBlock1 = kcg_false;
            outC->_L1_then_else_else_else_else_IfBlock1 =
              INT_M_AXLELOADCAT_C3_TM_conversions;
            _7_m_axleloadcat_int_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _8_error_partial = outC->_L2_then_else_else_else_else_IfBlock1;
            _44_m_axleloadcat_int_partial = _7_m_axleloadcat_int_partial;
            _43_error_partial = _8_error_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 =
              outC->m_axleloadcat_in == ENUM_M_AXLELOADCAT_C3_TM_conversions;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L2_then_else_else_else_else_else_IfBlock1 =
                INT_M_AXLELOADCAT_C4_TM_conversions;
              _42_m_axleloadcat_int_partial =
                outC->_L2_then_else_else_else_else_else_IfBlock1;
              outC->_L1_then_else_else_else_else_else_IfBlock1 = kcg_false;
              _41_error_partial = outC->_L1_then_else_else_else_else_else_IfBlock1;
              _9_m_axleloadcat_int_partial = _42_m_axleloadcat_int_partial;
              _10_error_partial = _41_error_partial;
            }
            else {
              outC->else_clock_else_else_else_else_else_IfBlock1 =
                outC->m_axleloadcat_in == ENUM_M_AXLELOADCAT_D2_TM_conversions;
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L1_then_else_else_else_else_else_else_IfBlock1 =
                  INT_M_AXLELOADCAT_D2_TM_conversions;
                _11_m_axleloadcat_int_partial =
                  outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                outC->_L2_then_else_else_else_else_else_else_IfBlock1 = kcg_false;
                _12_error_partial = outC->_L2_then_else_else_else_else_else_else_IfBlock1;
                _40_m_axleloadcat_int_partial = _11_m_axleloadcat_int_partial;
                _39_error_partial = _12_error_partial;
              }
              else {
                outC->else_clock_else_else_else_else_else_else_IfBlock1 =
                  outC->m_axleloadcat_in == ENUM_M_AXLELOADCAT_D3_TM_conversions;
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1 = kcg_false;
                  outC->_L1_then_else_else_else_else_else_else_else_IfBlock1 =
                    INT_M_AXLELOADCAT_D3_TM_conversions;
                  _38_m_axleloadcat_int_partial =
                    outC->_L1_then_else_else_else_else_else_else_else_IfBlock1;
                  _37_error_partial = outC->_L2_then_else_else_else_else_else_else_else_IfBlock1;
                  _13_m_axleloadcat_int_partial = _38_m_axleloadcat_int_partial;
                  _14_error_partial = _37_error_partial;
                }
                else {
                  outC->else_clock_else_else_else_else_else_else_else_IfBlock1 =
                    outC->m_axleloadcat_in == ENUM_M_AXLELOADCAT_D4_TM_conversions;
                  /* IfBlock1:else:else:else:else:else:else:else:else: */
                  if (outC->else_clock_else_else_else_else_else_else_else_IfBlock1) {
                    outC->_L2_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_false;
                    _16_error_partial =
                      outC->_L2_then_else_else_else_else_else_else_else_else_IfBlock1;
                    outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      INT_M_AXLELOADCAT_D4_TM_conversions;
                    _15_m_axleloadcat_int_partial =
                      outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1;
                    _36_m_axleloadcat_int_partial = _15_m_axleloadcat_int_partial;
                    _35_error_partial = _16_error_partial;
                  }
                  else {
                    outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->m_axleloadcat_in == ENUM_M_AXLELOADCAT_D4XL_TM_conversions;
                    /* IfBlock1:else:else:else:else:else:else:else:else:else: */
                    if (outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1) {
                      outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        INT_M_AXLELOADCAT_D4XL_TM_conversions;
                      _34_m_axleloadcat_int_partial =
                        outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      outC->_L1_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        kcg_false;
                      _33_error_partial =
                        outC->_L1_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      _17_m_axleloadcat_int_partial = _34_m_axleloadcat_int_partial;
                      _18_error_partial = _33_error_partial;
                    }
                    else {
                      outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        outC->m_axleloadcat_in == ENUM_M_AXLELOADCAT_E4_TM_conversions;
                      /* IfBlock1:else:else:else:else:else:else:else:else:else:else: */
                      if (outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1) {
                        outC->_L2_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          kcg_false;
                        outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          INT_M_AXLELOADCAT_E4_TM_conversions;
                        _19_m_axleloadcat_int_partial =
                          outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _20_error_partial =
                          outC->_L2_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _32_m_axleloadcat_int_partial = _19_m_axleloadcat_int_partial;
                        _31_error_partial = _20_error_partial;
                      }
                      else {
                        outC->else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          outC->m_axleloadcat_in == ENUM_M_AXLELOADCAT_E5_TM_conversions;
                        /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else: */
                        if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                          outC->_L2_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            INT_M_AXLELOADCAT_E5_TM_conversions;
                          _30_m_axleloadcat_int_partial =
                            outC->_L2_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                          outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            kcg_false;
                          _29_error_partial =
                            outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                          _21_m_axleloadcat_int_partial = _30_m_axleloadcat_int_partial;
                          _22_error_partial = _29_error_partial;
                        }
                        else {
                          outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            outC->m_axleloadcat_in == ENUM_M_AXLELOADCAT_HS17_TM_conversions;
                          /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else: */
                          if (outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                            outC->_L2_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              INT_M_AXLELOADCAT_HS17_TM_conversions;
                            _23_m_axleloadcat_int_partial =
                              outC->_L2_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              kcg_false;
                            _24_error_partial =
                              outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            _28_m_axleloadcat_int_partial = _23_m_axleloadcat_int_partial;
                            _27_error_partial = _24_error_partial;
                          }
                          else {
                            outC->_L2_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              kcg_true;
                            _26_error_partial =
                              outC->_L2_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              INT_M_AXLELOADCAT_E5_TM_conversions;
                            _25_m_axleloadcat_int_partial =
                              outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            _28_m_axleloadcat_int_partial = _25_m_axleloadcat_int_partial;
                            _27_error_partial = _26_error_partial;
                          }
                          _21_m_axleloadcat_int_partial = _28_m_axleloadcat_int_partial;
                          _22_error_partial = _27_error_partial;
                        }
                        _32_m_axleloadcat_int_partial = _21_m_axleloadcat_int_partial;
                        _31_error_partial = _22_error_partial;
                      }
                      _17_m_axleloadcat_int_partial = _32_m_axleloadcat_int_partial;
                      _18_error_partial = _31_error_partial;
                    }
                    _36_m_axleloadcat_int_partial = _17_m_axleloadcat_int_partial;
                    _35_error_partial = _18_error_partial;
                  }
                  _13_m_axleloadcat_int_partial = _36_m_axleloadcat_int_partial;
                  _14_error_partial = _35_error_partial;
                }
                _40_m_axleloadcat_int_partial = _13_m_axleloadcat_int_partial;
                _39_error_partial = _14_error_partial;
              }
              _9_m_axleloadcat_int_partial = _40_m_axleloadcat_int_partial;
              _10_error_partial = _39_error_partial;
            }
            _44_m_axleloadcat_int_partial = _9_m_axleloadcat_int_partial;
            _43_error_partial = _10_error_partial;
          }
          _5_m_axleloadcat_int_partial = _44_m_axleloadcat_int_partial;
          _6_error_partial = _43_error_partial;
        }
        _48_m_axleloadcat_int_partial = _5_m_axleloadcat_int_partial;
        _47_error_partial = _6_error_partial;
      }
      _1_m_axleloadcat_int_partial = _48_m_axleloadcat_int_partial;
      _2_error_partial = _47_error_partial;
    }
    outC->m_axleloadcat_int = _1_m_axleloadcat_int_partial;
    outC->error = _2_error_partial;
  }
  outC->_L7 = outC->error;
  noname = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_M_AXLELOADCAT_to_int_init_TM_conversions(
  outC_CAST_M_AXLELOADCAT_to_int_TM_conversions *outC)
{
  outC->_L7 = kcg_true;
  outC->_L4 = M_AXLELOADCAT_A;
  outC->error = kcg_true;
  outC->m_axleloadcat_in = M_AXLELOADCAT_A;
  outC->IfBlock1_clock = kcg_true;
  outC->_L7_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_lit_int32(0);
  outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_lit_int32(0);
  outC->else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L2_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_lit_int32(0);
  outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_lit_int32(0);
  outC->else_clock_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = kcg_lit_int32(0);
  outC->m_axleloadcat_int = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_M_AXLELOADCAT_to_int_reset_TM_conversions(
  outC_CAST_M_AXLELOADCAT_to_int_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_M_AXLELOADCAT_to_int_TM_conversions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

