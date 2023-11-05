/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_AXLELOADCAT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_AXLELOADCAT/ */
void CAST_Int_to_M_AXLELOADCAT_TM_conversions(
  /* int__m_axleloadcatt_in/ */
  kcg_int32 int__m_axleloadcatt_in,
  outC_CAST_Int_to_M_AXLELOADCAT_TM_conversions *outC)
{
  /* m_axleloadcat/ */
  M_AXLELOADCAT m_axleloadcat_partial;
  /* error/ */
  kcg_bool error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _1_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _2_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _3_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _4_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _5_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _6_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _7_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _8_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _9_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _10_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _11_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _12_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _13_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _14_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _15_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _16_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _17_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _18_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _19_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _20_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _21_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _22_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _23_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _24_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _25_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _26_error_partial;
  /* error/ */
  kcg_bool _27_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _28_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _29_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _30_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _31_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _32_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _33_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _34_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _35_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _36_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _37_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _38_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _39_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _40_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _41_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _42_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _43_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _44_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _45_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _46_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _47_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _48_m_axleloadcat_partial;
  /* error/ */
  kcg_bool _49_error_partial;
  /* m_axleloadcat/ */
  M_AXLELOADCAT _50_m_axleloadcat_partial;
  kcg_bool noname;

  outC->_L4 = int__m_axleloadcatt_in;
  outC->m_axleloadcat_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_axleloadcat_in ==
    INT_M_AXLELOADCAT_A_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L8_then_IfBlock1 = ENUM_M_AXLELOADCAT_A_TM_conversions;
    outC->_L7_then_IfBlock1 = kcg_false;
    error_partial = outC->_L7_then_IfBlock1;
    m_axleloadcat_partial = outC->_L8_then_IfBlock1;
    outC->m_axleloadcat = m_axleloadcat_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_axleloadcat_in ==
      INT_M_AXLELOADCAT_B1_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L7_then_else_IfBlock1 = ENUM_M_AXLELOADCAT_B1_TM_conversions;
      outC->_L6_then_else_IfBlock1 = kcg_false;
      _49_error_partial = outC->_L6_then_else_IfBlock1;
      _50_m_axleloadcat_partial = outC->_L7_then_else_IfBlock1;
      _1_m_axleloadcat_partial = _50_m_axleloadcat_partial;
      _2_error_partial = _49_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->m_axleloadcat_in ==
        INT_M_AXLELOADCAT_B2_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L2_then_else_else_IfBlock1;
        outC->_L1_then_else_else_IfBlock1 = ENUM_M_AXLELOADCAT_B2_TM_conversions;
        _3_m_axleloadcat_partial = outC->_L1_then_else_else_IfBlock1;
        _48_m_axleloadcat_partial = _3_m_axleloadcat_partial;
        _47_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->m_axleloadcat_in ==
          INT_M_AXLELOADCAT_C2_TM_conversions;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = kcg_false;
          _45_error_partial = outC->_L1_then_else_else_else_IfBlock1;
          outC->_L2_then_else_else_else_IfBlock1 = ENUM_M_AXLELOADCAT_C2_TM_conversions;
          _46_m_axleloadcat_partial = outC->_L2_then_else_else_else_IfBlock1;
          _5_m_axleloadcat_partial = _46_m_axleloadcat_partial;
          _6_error_partial = _45_error_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = outC->m_axleloadcat_in ==
            INT_M_AXLELOADCAT_C3_TM_conversions;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L2_then_else_else_else_else_IfBlock1 = kcg_false;
            outC->_L1_then_else_else_else_else_IfBlock1 =
              ENUM_M_AXLELOADCAT_C3_TM_conversions;
            _7_m_axleloadcat_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _8_error_partial = outC->_L2_then_else_else_else_else_IfBlock1;
            _44_m_axleloadcat_partial = _7_m_axleloadcat_partial;
            _43_error_partial = _8_error_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 =
              outC->m_axleloadcat_in == INT_M_AXLELOADCAT_C3_TM_conversions;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L221_then_else_else_else_else_else_IfBlock1 =
                ENUM_M_AXLELOADCAT_C4_TM_conversions;
              _42_m_axleloadcat_partial = outC->_L221_then_else_else_else_else_else_IfBlock1;
              outC->_L120_then_else_else_else_else_else_IfBlock1 = kcg_false;
              _41_error_partial = outC->_L120_then_else_else_else_else_else_IfBlock1;
              _9_m_axleloadcat_partial = _42_m_axleloadcat_partial;
              _10_error_partial = _41_error_partial;
            }
            else {
              outC->_7_else_clock_else_else_else_else_else_IfBlock1 =
                outC->m_axleloadcat_in == INT_M_AXLELOADCAT_D2_TM_conversions;
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->_7_else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L1_then_else_else_else_else_else_else_IfBlock1 =
                  ENUM_M_AXLELOADCAT_D2_TM_conversions;
                _11_m_axleloadcat_partial =
                  outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                outC->_L2_then_else_else_else_else_else_else_IfBlock1 = kcg_false;
                _12_error_partial = outC->_L2_then_else_else_else_else_else_else_IfBlock1;
                _40_m_axleloadcat_partial = _11_m_axleloadcat_partial;
                _39_error_partial = _12_error_partial;
              }
              else {
                outC->_1_else_clock_else_else_else_else_else_else_IfBlock1 =
                  outC->m_axleloadcat_in == INT_M_AXLELOADCAT_D3_TM_conversions;
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->_1_else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L218_then_else_else_else_else_else_else_else_IfBlock1 = kcg_false;
                  outC->_L119_then_else_else_else_else_else_else_else_IfBlock1 =
                    ENUM_M_AXLELOADCAT_D3_TM_conversions;
                  _38_m_axleloadcat_partial =
                    outC->_L119_then_else_else_else_else_else_else_else_IfBlock1;
                  _37_error_partial =
                    outC->_L218_then_else_else_else_else_else_else_else_IfBlock1;
                  _13_m_axleloadcat_partial = _38_m_axleloadcat_partial;
                  _14_error_partial = _37_error_partial;
                }
                else {
                  outC->_6_else_clock_else_else_else_else_else_else_else_IfBlock1 =
                    outC->m_axleloadcat_in == INT_M_AXLELOADCAT_D4_TM_conversions;
                  /* IfBlock1:else:else:else:else:else:else:else:else: */
                  if (outC->_6_else_clock_else_else_else_else_else_else_else_IfBlock1) {
                    outC->_L29_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_false;
                    _16_error_partial =
                      outC->_L29_then_else_else_else_else_else_else_else_else_IfBlock1;
                    outC->_L18_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      ENUM_M_AXLELOADCAT_D4_TM_conversions;
                    _15_m_axleloadcat_partial =
                      outC->_L18_then_else_else_else_else_else_else_else_else_IfBlock1;
                    _36_m_axleloadcat_partial = _15_m_axleloadcat_partial;
                    _35_error_partial = _16_error_partial;
                  }
                  else {
                    outC->_2_else_clock_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->m_axleloadcat_in == INT_M_AXLELOADCAT_D4XL_TM_conversions;
                    /* IfBlock1:else:else:else:else:else:else:else:else:else: */
                    if (outC->_2_else_clock_else_else_else_else_else_else_else_else_IfBlock1) {
                      outC->_L216_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        ENUM_M_AXLELOADCAT_D4XL_TM_conversions;
                      _34_m_axleloadcat_partial =
                        outC->_L216_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      outC->_L117_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        kcg_false;
                      _33_error_partial =
                        outC->_L117_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      _17_m_axleloadcat_partial = _34_m_axleloadcat_partial;
                      _18_error_partial = _33_error_partial;
                    }
                    else {
                      outC->_5_else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        outC->m_axleloadcat_in == INT_M_AXLELOADCAT_E4_TM_conversions;
                      /* IfBlock1:else:else:else:else:else:else:else:else:else:else: */
                      if (outC->_5_else_clock_else_else_else_else_else_else_else_else_else_IfBlock1) {
                        outC->_L211_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          kcg_false;
                        outC->_L110_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          ENUM_M_AXLELOADCAT_E4_TM_conversions;
                        _19_m_axleloadcat_partial =
                          outC->_L110_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _20_error_partial =
                          outC->_L211_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _32_m_axleloadcat_partial = _19_m_axleloadcat_partial;
                        _31_error_partial = _20_error_partial;
                      }
                      else {
                        outC->_3_else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          outC->m_axleloadcat_in == INT_M_AXLELOADCAT_E5_TM_conversions;
                        /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else: */
                        if (outC->_3_else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                          outC->_L214_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            ENUM_M_AXLELOADCAT_E5_TM_conversions;
                          _30_m_axleloadcat_partial =
                            outC->_L214_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                          outC->_L115_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            kcg_false;
                          _29_error_partial =
                            outC->_L115_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                          _21_m_axleloadcat_partial = _30_m_axleloadcat_partial;
                          _22_error_partial = _29_error_partial;
                        }
                        else {
                          outC->_4_else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                            outC->m_axleloadcat_in == INT_M_AXLELOADCAT_HS17_TM_conversions;
                          /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else: */
                          if (outC->_4_else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1) {
                            outC->_L213_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              ENUM_M_AXLELOADCAT_HS17_TM_conversions;
                            _23_m_axleloadcat_partial =
                              outC->_L213_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            outC->_L112_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              kcg_false;
                            _24_error_partial =
                              outC->_L112_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            _28_m_axleloadcat_partial = _23_m_axleloadcat_partial;
                            _27_error_partial = _24_error_partial;
                          }
                          else {
                            outC->_L2_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              kcg_true;
                            _26_error_partial =
                              outC->_L2_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                              ENUM_M_AXLELOADCAT_E5_TM_conversions;
                            _25_m_axleloadcat_partial =
                              outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                            _28_m_axleloadcat_partial = _25_m_axleloadcat_partial;
                            _27_error_partial = _26_error_partial;
                          }
                          _21_m_axleloadcat_partial = _28_m_axleloadcat_partial;
                          _22_error_partial = _27_error_partial;
                        }
                        _32_m_axleloadcat_partial = _21_m_axleloadcat_partial;
                        _31_error_partial = _22_error_partial;
                      }
                      _17_m_axleloadcat_partial = _32_m_axleloadcat_partial;
                      _18_error_partial = _31_error_partial;
                    }
                    _36_m_axleloadcat_partial = _17_m_axleloadcat_partial;
                    _35_error_partial = _18_error_partial;
                  }
                  _13_m_axleloadcat_partial = _36_m_axleloadcat_partial;
                  _14_error_partial = _35_error_partial;
                }
                _40_m_axleloadcat_partial = _13_m_axleloadcat_partial;
                _39_error_partial = _14_error_partial;
              }
              _9_m_axleloadcat_partial = _40_m_axleloadcat_partial;
              _10_error_partial = _39_error_partial;
            }
            _44_m_axleloadcat_partial = _9_m_axleloadcat_partial;
            _43_error_partial = _10_error_partial;
          }
          _5_m_axleloadcat_partial = _44_m_axleloadcat_partial;
          _6_error_partial = _43_error_partial;
        }
        _48_m_axleloadcat_partial = _5_m_axleloadcat_partial;
        _47_error_partial = _6_error_partial;
      }
      _1_m_axleloadcat_partial = _48_m_axleloadcat_partial;
      _2_error_partial = _47_error_partial;
    }
    outC->m_axleloadcat = _1_m_axleloadcat_partial;
    outC->error = _2_error_partial;
  }
  outC->_L7 = outC->error;
  noname = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_M_AXLELOADCAT_init_TM_conversions(
  outC_CAST_Int_to_M_AXLELOADCAT_TM_conversions *outC)
{
  outC->_L7 = kcg_true;
  outC->_L4 = kcg_lit_int32(0);
  outC->error = kcg_true;
  outC->m_axleloadcat_in = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L7_then_else_IfBlock1 = M_AXLELOADCAT_A;
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 = M_AXLELOADCAT_A;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L221_then_else_else_else_else_else_IfBlock1 = M_AXLELOADCAT_A;
  outC->_L120_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_7_else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L119_then_else_else_else_else_else_else_else_IfBlock1 = M_AXLELOADCAT_A;
  outC->_L218_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_6_else_clock_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L117_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L216_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
    M_AXLELOADCAT_A;
  outC->_5_else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L115_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L214_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    M_AXLELOADCAT_A;
  outC->_4_else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L2_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    M_AXLELOADCAT_A;
  outC->_L213_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    M_AXLELOADCAT_A;
  outC->_L112_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_3_else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L211_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L110_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    M_AXLELOADCAT_A;
  outC->_2_else_clock_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L29_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L18_then_else_else_else_else_else_else_else_else_IfBlock1 =
    M_AXLELOADCAT_A;
  outC->_1_else_clock_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_IfBlock1 = M_AXLELOADCAT_A;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = M_AXLELOADCAT_A;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = M_AXLELOADCAT_A;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = M_AXLELOADCAT_A;
  outC->m_axleloadcat = M_AXLELOADCAT_A;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_M_AXLELOADCAT_reset_TM_conversions(
  outC_CAST_Int_to_M_AXLELOADCAT_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_M_AXLELOADCAT_TM_conversions.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

