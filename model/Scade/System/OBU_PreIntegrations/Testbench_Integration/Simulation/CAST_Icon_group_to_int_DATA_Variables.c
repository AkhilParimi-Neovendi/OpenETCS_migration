/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Icon_group_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_Icon_group_to_int/ */
void CAST_Icon_group_to_int_DATA_Variables(
  /* Input1/ */
  Icon_group_T_DMI_Types_Pkg Input1,
  outC_CAST_Icon_group_to_int_DATA_Variables *outC)
{
  /* Output1/ */
  static Icon_group_INT_T_DATA Output1_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* Output1/ */
  static Icon_group_INT_T_DATA _1_Output1_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* Output1/ */
  static Icon_group_INT_T_DATA _3_Output1_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* Output1/ */
  static Icon_group_INT_T_DATA _5_Output1_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* Output1/ */
  static Icon_group_INT_T_DATA _7_Output1_partial;
  /* error/ */
  static kcg_bool _8_error_partial;
  /* Output1/ */
  static Icon_group_INT_T_DATA _9_Output1_partial;
  /* error/ */
  static kcg_bool _10_error_partial;
  /* Output1/ */
  static Icon_group_INT_T_DATA _11_Output1_partial;
  /* error/ */
  static kcg_bool _12_error_partial;
  /* Output1/ */
  static Icon_group_INT_T_DATA _13_Output1_partial;
  /* error/ */
  static kcg_bool _14_error_partial;
  /* error/ */
  static kcg_bool _15_error_partial;
  /* Output1/ */
  static Icon_group_INT_T_DATA _16_Output1_partial;
  /* error/ */
  static kcg_bool _17_error_partial;
  /* Output1/ */
  static Icon_group_INT_T_DATA _18_Output1_partial;
  /* error/ */
  static kcg_bool _19_error_partial;
  /* Output1/ */
  static Icon_group_INT_T_DATA _20_Output1_partial;
  /* error/ */
  static kcg_bool _21_error_partial;
  /* Output1/ */
  static Icon_group_INT_T_DATA _22_Output1_partial;
  /* error/ */
  static kcg_bool _23_error_partial;
  /* Output1/ */
  static Icon_group_INT_T_DATA _24_Output1_partial;
  /* error/ */
  static kcg_bool _25_error_partial;
  /* Output1/ */
  static Icon_group_INT_T_DATA _26_Output1_partial;
  static kcg_bool noname;

  outC->IfBlock1_clock = Input1 == ENUM_Icon_group_T_level_symbol;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = kcg_false;
    error_partial = outC->_L3_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = Input1 == ENUM_Icon_group_T_mode_symbols;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = kcg_false;
      _25_error_partial = outC->_L3_then_else_IfBlock1;
      _2_error_partial = _25_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = Input1 == ENUM_Icon_group_T_navigation_symbols;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L3_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L3_then_else_else_IfBlock1;
        _23_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = Input1 ==
          ENUM_Icon_group_T_order_an_announcements_symbols;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L3_then_else_else_else_IfBlock1 = kcg_false;
          _21_error_partial = outC->_L3_then_else_else_else_IfBlock1;
          _6_error_partial = _21_error_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = Input1 ==
            ENUM_Icon_group_T_planning_information_symbols;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L3_then_else_else_else_else_IfBlock1 = kcg_false;
            _8_error_partial = outC->_L3_then_else_else_else_else_IfBlock1;
            _19_error_partial = _8_error_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = Input1 ==
              ENUM_Icon_group_T_settings_symbols;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L3_then_else_else_else_else_else_IfBlock1 = kcg_false;
              _17_error_partial = outC->_L3_then_else_else_else_else_else_IfBlock1;
              _10_error_partial = _17_error_partial;
            }
            else {
              outC->else_clock_else_else_else_else_else_IfBlock1 = Input1 ==
                ENUM_Icon_group_T_status_symbols;
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L4_then_else_else_else_else_else_else_IfBlock1 = kcg_false;
                _12_error_partial = outC->_L4_then_else_else_else_else_else_else_IfBlock1;
                _15_error_partial = _12_error_partial;
              }
              else {
                outC->_L4_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
                _14_error_partial = outC->_L4_else_else_else_else_else_else_else_IfBlock1;
                _15_error_partial = _14_error_partial;
              }
              _10_error_partial = _15_error_partial;
            }
            _19_error_partial = _10_error_partial;
          }
          _6_error_partial = _19_error_partial;
        }
        _23_error_partial = _6_error_partial;
      }
      _2_error_partial = _23_error_partial;
    }
    outC->error = _2_error_partial;
  }
  outC->_L25 = outC->error;
  noname = outC->_L25;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L2_then_IfBlock1 = INT_Icon_group_T_level_symbol;
    Output1_partial = outC->_L2_then_IfBlock1;
    outC->Output1 = Output1_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L2_then_else_IfBlock1 = INT_Icon_group_T_mode_symbols;
      _26_Output1_partial = outC->_L2_then_else_IfBlock1;
      _1_Output1_partial = _26_Output1_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = INT_Icon_group_T_navigation_symbols;
        _3_Output1_partial = outC->_L2_then_else_else_IfBlock1;
        _24_Output1_partial = _3_Output1_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L2_then_else_else_else_IfBlock1 =
            INT_Icon_group_T_order_an_announcements_symbols;
          _22_Output1_partial = outC->_L2_then_else_else_else_IfBlock1;
          _5_Output1_partial = _22_Output1_partial;
        }
        else {
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L2_then_else_else_else_else_IfBlock1 =
              INT_Icon_group_T_planning_information_symbols;
            _7_Output1_partial = outC->_L2_then_else_else_else_else_IfBlock1;
            _20_Output1_partial = _7_Output1_partial;
          }
          else {
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L2_then_else_else_else_else_else_IfBlock1 =
                INT_Icon_group_T_settings_symbols;
              _18_Output1_partial = outC->_L2_then_else_else_else_else_else_IfBlock1;
              _9_Output1_partial = _18_Output1_partial;
            }
            else {
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L2_then_else_else_else_else_else_else_IfBlock1 =
                  INT_Icon_group_T_status_symbols;
                _11_Output1_partial = outC->_L2_then_else_else_else_else_else_else_IfBlock1;
                _16_Output1_partial = _11_Output1_partial;
              }
              else {
                outC->_L3_else_else_else_else_else_else_else_IfBlock1 =
                  INT_Icon_group_T_status_symbols;
                _13_Output1_partial = outC->_L3_else_else_else_else_else_else_else_IfBlock1;
                _16_Output1_partial = _13_Output1_partial;
              }
              _9_Output1_partial = _16_Output1_partial;
            }
            _20_Output1_partial = _9_Output1_partial;
          }
          _5_Output1_partial = _20_Output1_partial;
        }
        _24_Output1_partial = _5_Output1_partial;
      }
      _1_Output1_partial = _24_Output1_partial;
    }
    outC->Output1 = _1_Output1_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Icon_group_to_int_init_DATA_Variables(
  outC_CAST_Icon_group_to_int_DATA_Variables *outC)
{
  outC->_L25 = kcg_true;
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_else_else_else_else_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L4_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L4_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L3_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->Output1 = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Icon_group_to_int_reset_DATA_Variables(
  outC_CAST_Icon_group_to_int_DATA_Variables *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Icon_group_to_int_DATA_Variables.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

