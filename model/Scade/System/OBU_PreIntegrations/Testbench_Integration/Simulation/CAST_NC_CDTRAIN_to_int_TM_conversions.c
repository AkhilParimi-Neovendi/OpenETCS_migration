/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NC_CDTRAIN_to_int_TM_conversions.h"

/* TM_conversions::CAST_NC_CDTRAIN_to_int/ */
void CAST_NC_CDTRAIN_to_int_TM_conversions(
  /* nc_cdtrain/ */
  NC_CDTRAIN nc_cdtrain,
  outC_CAST_NC_CDTRAIN_to_int_TM_conversions *outC)
{
  /* nc_cdtrain_int/ */
  static kcg_int32 nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _1_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _3_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _5_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _7_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _8_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _9_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _10_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _11_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _12_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _13_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _14_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _15_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _16_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _17_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _18_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _19_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _20_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _21_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _22_error_partial;
  /* error/ */
  static kcg_bool _23_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _24_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _25_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _26_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _27_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _28_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _29_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _30_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _31_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _32_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _33_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _34_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _35_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _36_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _37_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _38_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _39_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _40_nc_cdtrain_int_partial;
  /* error/ */
  static kcg_bool _41_error_partial;
  /* nc_cdtrain_int/ */
  static kcg_int32 _42_nc_cdtrain_int_partial;
  static kcg_bool noname;

  outC->_L4 = nc_cdtrain;
  outC->nc_cdtrain_in = outC->_L4;
  outC->IfBlock1_clock = outC->nc_cdtrain_in ==
    ENUM_NC_CDTRAIN_080mm_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L5_then_IfBlock1 = kcg_false;
    error_partial = outC->_L5_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->nc_cdtrain_in ==
      ENUM_NC_CDTRAIN_100mm_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L5_then_else_IfBlock1 = kcg_false;
      _41_error_partial = outC->_L5_then_else_IfBlock1;
      _2_error_partial = _41_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->nc_cdtrain_in ==
        ENUM_NC_CDTRAIN_130mm_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L4_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L4_then_else_else_IfBlock1;
        _39_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->nc_cdtrain_in ==
          ENUM_NC_CDTRAIN_150mm_TM_conversions;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L4_then_else_else_else_IfBlock1 = kcg_false;
          _37_error_partial = outC->_L4_then_else_else_else_IfBlock1;
          _6_error_partial = _37_error_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = outC->nc_cdtrain_in ==
            ENUM_NC_CDTRAIN_165mm_TM_conversions;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L4_then_else_else_else_else_IfBlock1 = kcg_false;
            _8_error_partial = outC->_L4_then_else_else_else_else_IfBlock1;
            _35_error_partial = _8_error_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 =
              outC->nc_cdtrain_in == ENUM_NC_CDTRAIN_180mm_TM_conversions;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L4_then_else_else_else_else_else_IfBlock1 = kcg_false;
              _33_error_partial = outC->_L4_then_else_else_else_else_else_IfBlock1;
              _10_error_partial = _33_error_partial;
            }
            else {
              outC->else_clock_else_else_else_else_else_IfBlock1 =
                outC->nc_cdtrain_in == ENUM_NC_CDTRAIN_210mm_TM_conversions;
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L4_then_else_else_else_else_else_else_IfBlock1 = kcg_false;
                _12_error_partial = outC->_L4_then_else_else_else_else_else_else_IfBlock1;
                _31_error_partial = _12_error_partial;
              }
              else {
                outC->else_clock_else_else_else_else_else_else_IfBlock1 =
                  outC->nc_cdtrain_in == ENUM_NC_CDTRAIN_225mm_TM_conversions;
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L4_then_else_else_else_else_else_else_else_IfBlock1 = kcg_false;
                  _29_error_partial = outC->_L4_then_else_else_else_else_else_else_else_IfBlock1;
                  _14_error_partial = _29_error_partial;
                }
                else {
                  outC->else_clock_else_else_else_else_else_else_else_IfBlock1 =
                    outC->nc_cdtrain_in == ENUM_NC_CDTRAIN_245mm_TM_conversions;
                  /* IfBlock1:else:else:else:else:else:else:else:else: */
                  if (outC->else_clock_else_else_else_else_else_else_else_IfBlock1) {
                    outC->_L5_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_false;
                    _16_error_partial =
                      outC->_L5_then_else_else_else_else_else_else_else_else_IfBlock1;
                    _27_error_partial = _16_error_partial;
                  }
                  else {
                    outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->nc_cdtrain_in == ENUM_NC_CDTRAIN_275mm_TM_conversions;
                    /* IfBlock1:else:else:else:else:else:else:else:else:else: */
                    if (outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1) {
                      outC->_L4_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        kcg_false;
                      _25_error_partial =
                        outC->_L4_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      _18_error_partial = _25_error_partial;
                    }
                    else {
                      outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        outC->nc_cdtrain_in == ENUM_NC_CDTRAIN_300mm_TM_conversions;
                      /* IfBlock1:else:else:else:else:else:else:else:else:else:else: */
                      if (outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1) {
                        outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          kcg_false;
                        _20_error_partial =
                          outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _23_error_partial = _20_error_partial;
                      }
                      else {
                        outC->_L1_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          kcg_true;
                        _22_error_partial =
                          outC->_L1_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _23_error_partial = _22_error_partial;
                      }
                      _18_error_partial = _23_error_partial;
                    }
                    _27_error_partial = _18_error_partial;
                  }
                  _14_error_partial = _27_error_partial;
                }
                _31_error_partial = _14_error_partial;
              }
              _10_error_partial = _31_error_partial;
            }
            _35_error_partial = _10_error_partial;
          }
          _6_error_partial = _35_error_partial;
        }
        _39_error_partial = _6_error_partial;
      }
      _2_error_partial = _39_error_partial;
    }
    outC->error = _2_error_partial;
  }
  outC->_L5 = outC->error;
  noname = outC->_L5;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L4_then_IfBlock1 = INT_NC_CDTRAIN_080mm_TM_conversions;
    nc_cdtrain_int_partial = outC->_L4_then_IfBlock1;
    outC->nc_cdtrain_int = nc_cdtrain_int_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = INT_NC_CDTRAIN_100mm_TM_conversions;
      _42_nc_cdtrain_int_partial = outC->_L3_then_else_IfBlock1;
      _1_nc_cdtrain_int_partial = _42_nc_cdtrain_int_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = INT_NC_CDTRAIN_130mm_TM_conversions;
        _3_nc_cdtrain_int_partial = outC->_L2_then_else_else_IfBlock1;
        _40_nc_cdtrain_int_partial = _3_nc_cdtrain_int_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L2_then_else_else_else_IfBlock1 = INT_NC_CDTRAIN_150mm_TM_conversions;
          _38_nc_cdtrain_int_partial = outC->_L2_then_else_else_else_IfBlock1;
          _5_nc_cdtrain_int_partial = _38_nc_cdtrain_int_partial;
        }
        else {
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L2_then_else_else_else_else_IfBlock1 =
              INT_NC_CDTRAIN_165mm_TM_conversions;
            _7_nc_cdtrain_int_partial = outC->_L2_then_else_else_else_else_IfBlock1;
            _36_nc_cdtrain_int_partial = _7_nc_cdtrain_int_partial;
          }
          else {
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L2_then_else_else_else_else_else_IfBlock1 =
                INT_NC_CDTRAIN_180mm_TM_conversions;
              _34_nc_cdtrain_int_partial = outC->_L2_then_else_else_else_else_else_IfBlock1;
              _9_nc_cdtrain_int_partial = _34_nc_cdtrain_int_partial;
            }
            else {
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L2_then_else_else_else_else_else_else_IfBlock1 =
                  INT_NC_CDTRAIN_210mm_TM_conversions;
                _11_nc_cdtrain_int_partial =
                  outC->_L2_then_else_else_else_else_else_else_IfBlock1;
                _32_nc_cdtrain_int_partial = _11_nc_cdtrain_int_partial;
              }
              else {
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1 =
                    INT_NC_CDTRAIN_225mm_TM_conversions;
                  _30_nc_cdtrain_int_partial =
                    outC->_L2_then_else_else_else_else_else_else_else_IfBlock1;
                  _13_nc_cdtrain_int_partial = _30_nc_cdtrain_int_partial;
                }
                else {
                  /* IfBlock1:else:else:else:else:else:else:else:else: */
                  if (outC->else_clock_else_else_else_else_else_else_else_IfBlock1) {
                    outC->_L3_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      INT_NC_CDTRAIN_245mm_TM_conversions;
                    _15_nc_cdtrain_int_partial =
                      outC->_L3_then_else_else_else_else_else_else_else_else_IfBlock1;
                    _28_nc_cdtrain_int_partial = _15_nc_cdtrain_int_partial;
                  }
                  else {
                    /* IfBlock1:else:else:else:else:else:else:else:else:else: */
                    if (outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1) {
                      outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
                        INT_NC_CDTRAIN_275mm_TM_conversions;
                      _26_nc_cdtrain_int_partial =
                        outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1;
                      _17_nc_cdtrain_int_partial = _26_nc_cdtrain_int_partial;
                    }
                    else {
                      /* IfBlock1:else:else:else:else:else:else:else:else:else:else: */
                      if (outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1) {
                        outC->_L2_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          INT_NC_CDTRAIN_300mm_TM_conversions;
                        _19_nc_cdtrain_int_partial =
                          outC->_L2_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _24_nc_cdtrain_int_partial = _19_nc_cdtrain_int_partial;
                      }
                      else {
                        outC->_L2_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
                          INT_NC_CDTRAIN_300mm_TM_conversions;
                        _21_nc_cdtrain_int_partial =
                          outC->_L2_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
                        _24_nc_cdtrain_int_partial = _21_nc_cdtrain_int_partial;
                      }
                      _17_nc_cdtrain_int_partial = _24_nc_cdtrain_int_partial;
                    }
                    _28_nc_cdtrain_int_partial = _17_nc_cdtrain_int_partial;
                  }
                  _13_nc_cdtrain_int_partial = _28_nc_cdtrain_int_partial;
                }
                _32_nc_cdtrain_int_partial = _13_nc_cdtrain_int_partial;
              }
              _9_nc_cdtrain_int_partial = _32_nc_cdtrain_int_partial;
            }
            _36_nc_cdtrain_int_partial = _9_nc_cdtrain_int_partial;
          }
          _5_nc_cdtrain_int_partial = _36_nc_cdtrain_int_partial;
        }
        _40_nc_cdtrain_int_partial = _5_nc_cdtrain_int_partial;
      }
      _1_nc_cdtrain_int_partial = _40_nc_cdtrain_int_partial;
    }
    outC->nc_cdtrain_int = _1_nc_cdtrain_int_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_NC_CDTRAIN_to_int_init_TM_conversions(
  outC_CAST_NC_CDTRAIN_to_int_TM_conversions *outC)
{
  outC->_L5 = kcg_true;
  outC->_L4 = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->error = kcg_true;
  outC->nc_cdtrain_in = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L5_then_else_IfBlock1 = kcg_true;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_lit_int32(0);
  outC->else_clock_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L2_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_true;
  outC->else_clock_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_lit_int32(0);
  outC->_L5_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L4_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 = kcg_lit_int32(0);
  outC->nc_cdtrain_int = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_NC_CDTRAIN_to_int_reset_TM_conversions(
  outC_CAST_NC_CDTRAIN_to_int_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_NC_CDTRAIN_to_int_TM_conversions.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

