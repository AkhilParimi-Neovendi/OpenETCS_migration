/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Area_group_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_Area_group_to_int/ */
void CAST_Area_group_to_int_DATA_Variables(
  /* area_group_ct/ */
  Area_group_T_DMI_Types_Pkg area_group_ct,
  outC_CAST_Area_group_to_int_DATA_Variables *outC)
{
  /* area_group_int/ */
  static Area_group_INT_T_DATA area_group_int_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* area_group_int/ */
  static Area_group_INT_T_DATA _1_area_group_int_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* area_group_int/ */
  static Area_group_INT_T_DATA _3_area_group_int_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* area_group_int/ */
  static Area_group_INT_T_DATA _5_area_group_int_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* area_group_int/ */
  static Area_group_INT_T_DATA _7_area_group_int_partial;
  /* error/ */
  static kcg_bool _8_error_partial;
  /* area_group_int/ */
  static Area_group_INT_T_DATA _9_area_group_int_partial;
  /* error/ */
  static kcg_bool _10_error_partial;
  /* area_group_int/ */
  static Area_group_INT_T_DATA _11_area_group_int_partial;
  /* error/ */
  static kcg_bool _12_error_partial;
  /* area_group_int/ */
  static Area_group_INT_T_DATA _13_area_group_int_partial;
  /* error/ */
  static kcg_bool _14_error_partial;
  /* error/ */
  static kcg_bool _15_error_partial;
  /* area_group_int/ */
  static Area_group_INT_T_DATA _16_area_group_int_partial;
  /* error/ */
  static kcg_bool _17_error_partial;
  /* area_group_int/ */
  static Area_group_INT_T_DATA _18_area_group_int_partial;
  /* error/ */
  static kcg_bool _19_error_partial;
  /* area_group_int/ */
  static Area_group_INT_T_DATA _20_area_group_int_partial;
  /* error/ */
  static kcg_bool _21_error_partial;
  /* area_group_int/ */
  static Area_group_INT_T_DATA _22_area_group_int_partial;
  /* error/ */
  static kcg_bool _23_error_partial;
  /* area_group_int/ */
  static Area_group_INT_T_DATA _24_area_group_int_partial;
  /* error/ */
  static kcg_bool _25_error_partial;
  /* area_group_int/ */
  static Area_group_INT_T_DATA _26_area_group_int_partial;
  /* error/ */
  static kcg_bool _27_error_partial;
  /* area_group_int/ */
  static Area_group_INT_T_DATA _28_area_group_int_partial;
  /* error/ */
  static kcg_bool _29_error_partial;
  /* area_group_int/ */
  static Area_group_INT_T_DATA _30_area_group_int_partial;
  static kcg_bool noname;

  outC->IfBlock1_clock = area_group_ct == ENUM_Area_group_T_A;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L2_then_IfBlock1 = kcg_false;
    error_partial = outC->_L2_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = area_group_ct == ENUM_Area_group_T_B;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L2_then_else_IfBlock1 = kcg_false;
      _29_error_partial = outC->_L2_then_else_IfBlock1;
      _2_error_partial = _29_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = area_group_ct == ENUM_Area_group_T_C;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L2_then_else_else_IfBlock1;
        _27_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = area_group_ct == ENUM_Area_group_T_D;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L2_then_else_else_else_IfBlock1 = kcg_false;
          _25_error_partial = outC->_L2_then_else_else_else_IfBlock1;
          _6_error_partial = _25_error_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = area_group_ct == ENUM_Area_group_T_E;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L2_then_else_else_else_else_IfBlock1 = kcg_false;
            _8_error_partial = outC->_L2_then_else_else_else_else_IfBlock1;
            _23_error_partial = _8_error_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = area_group_ct ==
              ENUM_Area_group_T_F;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L2_then_else_else_else_else_else_IfBlock1 = kcg_false;
              _21_error_partial = outC->_L2_then_else_else_else_else_else_IfBlock1;
              _10_error_partial = _21_error_partial;
            }
            else {
              outC->else_clock_else_else_else_else_else_IfBlock1 =
                area_group_ct == ENUM_Area_group_T_G;
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L2_then_else_else_else_else_else_else_IfBlock1 = kcg_false;
                _12_error_partial = outC->_L2_then_else_else_else_else_else_else_IfBlock1;
                _19_error_partial = _12_error_partial;
              }
              else {
                outC->else_clock_else_else_else_else_else_else_IfBlock1 =
                  area_group_ct == ENUM_Area_group_T_H;
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1 = kcg_false;
                  _17_error_partial = outC->_L2_then_else_else_else_else_else_else_else_IfBlock1;
                  _14_error_partial = _17_error_partial;
                }
                else {
                  outC->_L1_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
                  _15_error_partial = outC->_L1_else_else_else_else_else_else_else_else_IfBlock1;
                  _14_error_partial = _15_error_partial;
                }
                _19_error_partial = _14_error_partial;
              }
              _10_error_partial = _19_error_partial;
            }
            _23_error_partial = _10_error_partial;
          }
          _6_error_partial = _23_error_partial;
        }
        _27_error_partial = _6_error_partial;
      }
      _2_error_partial = _27_error_partial;
    }
    outC->error = _2_error_partial;
  }
  outC->_L26 = outC->error;
  noname = outC->_L26;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = INT_Area_group_T_A;
    area_group_int_partial = outC->_L1_then_IfBlock1;
    outC->area_group_int = area_group_int_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = INT_Area_group_T_B;
      _30_area_group_int_partial = outC->_L1_then_else_IfBlock1;
      _1_area_group_int_partial = _30_area_group_int_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = INT_Area_group_T_C;
        _3_area_group_int_partial = outC->_L1_then_else_else_IfBlock1;
        _28_area_group_int_partial = _3_area_group_int_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = INT_Area_group_T_D;
          _26_area_group_int_partial = outC->_L1_then_else_else_else_IfBlock1;
          _5_area_group_int_partial = _26_area_group_int_partial;
        }
        else {
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L1_then_else_else_else_else_IfBlock1 = INT_Area_group_T_E;
            _7_area_group_int_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _24_area_group_int_partial = _7_area_group_int_partial;
          }
          else {
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L1_then_else_else_else_else_else_IfBlock1 = INT_Area_group_T_F;
              _22_area_group_int_partial = outC->_L1_then_else_else_else_else_else_IfBlock1;
              _9_area_group_int_partial = _22_area_group_int_partial;
            }
            else {
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L1_then_else_else_else_else_else_else_IfBlock1 = INT_Area_group_T_G;
                _11_area_group_int_partial =
                  outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                _20_area_group_int_partial = _11_area_group_int_partial;
              }
              else {
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L1_then_else_else_else_else_else_else_else_IfBlock1 = INT_Area_group_T_H;
                  _18_area_group_int_partial =
                    outC->_L1_then_else_else_else_else_else_else_else_IfBlock1;
                  _13_area_group_int_partial = _18_area_group_int_partial;
                }
                else {
                  outC->_L2_else_else_else_else_else_else_else_else_IfBlock1 = INT_Area_group_T_H;
                  _16_area_group_int_partial =
                    outC->_L2_else_else_else_else_else_else_else_else_IfBlock1;
                  _13_area_group_int_partial = _16_area_group_int_partial;
                }
                _20_area_group_int_partial = _13_area_group_int_partial;
              }
              _9_area_group_int_partial = _20_area_group_int_partial;
            }
            _24_area_group_int_partial = _9_area_group_int_partial;
          }
          _5_area_group_int_partial = _24_area_group_int_partial;
        }
        _28_area_group_int_partial = _5_area_group_int_partial;
      }
      _1_area_group_int_partial = _28_area_group_int_partial;
    }
    outC->area_group_int = _1_area_group_int_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Area_group_to_int_init_DATA_Variables(
  outC_CAST_Area_group_to_int_DATA_Variables *outC)
{
  outC->_L26 = kcg_true;
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L2_then_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_else_else_else_else_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L1_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1 = kcg_true;
  outC->area_group_int = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Area_group_to_int_reset_DATA_Variables(
  outC_CAST_Area_group_to_int_DATA_Variables *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Area_group_to_int_DATA_Variables.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

