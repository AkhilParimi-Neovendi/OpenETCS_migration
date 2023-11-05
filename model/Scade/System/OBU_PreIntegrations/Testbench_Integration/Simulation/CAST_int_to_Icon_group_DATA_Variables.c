/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_Icon_group_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_Icon_group/ */
void CAST_int_to_Icon_group_DATA_Variables(
  /* Output1/ */
  Icon_group_INT_T_DATA Output1,
  outC_CAST_int_to_Icon_group_DATA_Variables *outC)
{
  /* Input1/ */
  static Icon_group_T_DMI_Types_Pkg Input1_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* Input1/ */
  static Icon_group_T_DMI_Types_Pkg _1_Input1_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* Input1/ */
  static Icon_group_T_DMI_Types_Pkg _3_Input1_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* Input1/ */
  static Icon_group_T_DMI_Types_Pkg _5_Input1_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* Input1/ */
  static Icon_group_T_DMI_Types_Pkg _7_Input1_partial;
  /* error/ */
  static kcg_bool _8_error_partial;
  /* Input1/ */
  static Icon_group_T_DMI_Types_Pkg _9_Input1_partial;
  /* error/ */
  static kcg_bool _10_error_partial;
  /* Input1/ */
  static Icon_group_T_DMI_Types_Pkg _11_Input1_partial;
  /* error/ */
  static kcg_bool _12_error_partial;
  /* Input1/ */
  static Icon_group_T_DMI_Types_Pkg _13_Input1_partial;
  /* error/ */
  static kcg_bool _14_error_partial;
  /* error/ */
  static kcg_bool _15_error_partial;
  /* Input1/ */
  static Icon_group_T_DMI_Types_Pkg _16_Input1_partial;
  /* error/ */
  static kcg_bool _17_error_partial;
  /* Input1/ */
  static Icon_group_T_DMI_Types_Pkg _18_Input1_partial;
  /* error/ */
  static kcg_bool _19_error_partial;
  /* Input1/ */
  static Icon_group_T_DMI_Types_Pkg _20_Input1_partial;
  /* error/ */
  static kcg_bool _21_error_partial;
  /* Input1/ */
  static Icon_group_T_DMI_Types_Pkg _22_Input1_partial;
  /* error/ */
  static kcg_bool _23_error_partial;
  /* Input1/ */
  static Icon_group_T_DMI_Types_Pkg _24_Input1_partial;
  /* error/ */
  static kcg_bool _25_error_partial;
  /* Input1/ */
  static Icon_group_T_DMI_Types_Pkg _26_Input1_partial;
  static kcg_bool noname;

  outC->IfBlock1_clock = Output1 == INT_Icon_group_T_level_symbol;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = kcg_false;
    error_partial = outC->_L3_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = Output1 == INT_Icon_group_T_mode_symbols;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = kcg_false;
      _25_error_partial = outC->_L3_then_else_IfBlock1;
      _2_error_partial = _25_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = Output1 == INT_Icon_group_T_navigation_symbols;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L3_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L3_then_else_else_IfBlock1;
        _23_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = Output1 ==
          INT_Icon_group_T_order_an_announcements_symbols;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L3_then_else_else_else_IfBlock1 = kcg_false;
          _21_error_partial = outC->_L3_then_else_else_else_IfBlock1;
          _6_error_partial = _21_error_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = Output1 ==
            INT_Icon_group_T_planning_information_symbols;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L3_then_else_else_else_else_IfBlock1 = kcg_false;
            _8_error_partial = outC->_L3_then_else_else_else_else_IfBlock1;
            _19_error_partial = _8_error_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = Output1 ==
              INT_Icon_group_T_settings_symbols;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L3_then_else_else_else_else_else_IfBlock1 = kcg_false;
              _17_error_partial = outC->_L3_then_else_else_else_else_else_IfBlock1;
              _10_error_partial = _17_error_partial;
            }
            else {
              outC->else_clock_else_else_else_else_else_IfBlock1 = Output1 ==
                INT_Icon_group_T_status_symbols;
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
    outC->_L2_then_IfBlock1 = ENUM_Icon_group_T_level_symbol;
    Input1_partial = outC->_L2_then_IfBlock1;
    outC->Input1 = Input1_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L2_then_else_IfBlock1 = ENUM_Icon_group_T_mode_symbols;
      _26_Input1_partial = outC->_L2_then_else_IfBlock1;
      _1_Input1_partial = _26_Input1_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = ENUM_Icon_group_T_navigation_symbols;
        _3_Input1_partial = outC->_L2_then_else_else_IfBlock1;
        _24_Input1_partial = _3_Input1_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L2_then_else_else_else_IfBlock1 =
            ENUM_Icon_group_T_order_an_announcements_symbols;
          _22_Input1_partial = outC->_L2_then_else_else_else_IfBlock1;
          _5_Input1_partial = _22_Input1_partial;
        }
        else {
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L2_then_else_else_else_else_IfBlock1 =
              ENUM_Icon_group_T_planning_information_symbols;
            _7_Input1_partial = outC->_L2_then_else_else_else_else_IfBlock1;
            _20_Input1_partial = _7_Input1_partial;
          }
          else {
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L2_then_else_else_else_else_else_IfBlock1 =
                ENUM_Icon_group_T_settings_symbols;
              _18_Input1_partial = outC->_L2_then_else_else_else_else_else_IfBlock1;
              _9_Input1_partial = _18_Input1_partial;
            }
            else {
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L2_then_else_else_else_else_else_else_IfBlock1 =
                  ENUM_Icon_group_T_status_symbols;
                _11_Input1_partial = outC->_L2_then_else_else_else_else_else_else_IfBlock1;
                _16_Input1_partial = _11_Input1_partial;
              }
              else {
                outC->_L3_else_else_else_else_else_else_else_IfBlock1 =
                  ENUM_Icon_group_T_status_symbols;
                _13_Input1_partial = outC->_L3_else_else_else_else_else_else_else_IfBlock1;
                _16_Input1_partial = _13_Input1_partial;
              }
              _9_Input1_partial = _16_Input1_partial;
            }
            _20_Input1_partial = _9_Input1_partial;
          }
          _5_Input1_partial = _20_Input1_partial;
        }
        _24_Input1_partial = _5_Input1_partial;
      }
      _1_Input1_partial = _24_Input1_partial;
    }
    outC->Input1 = _1_Input1_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_Icon_group_init_DATA_Variables(
  outC_CAST_int_to_Icon_group_DATA_Variables *outC)
{
  outC->_L25 = kcg_true;
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_IfBlock1 = level_symbol_DMI_Types_Pkg;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 = level_symbol_DMI_Types_Pkg;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_IfBlock1 = level_symbol_DMI_Types_Pkg;
  outC->else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_else_else_else_else_else_else_else_IfBlock1 =
    level_symbol_DMI_Types_Pkg;
  outC->_L4_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1 =
    level_symbol_DMI_Types_Pkg;
  outC->_L4_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_IfBlock1 = level_symbol_DMI_Types_Pkg;
  outC->_L3_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 = level_symbol_DMI_Types_Pkg;
  outC->_L3_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1 = level_symbol_DMI_Types_Pkg;
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->Input1 = level_symbol_DMI_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_Icon_group_reset_DATA_Variables(
  outC_CAST_int_to_Icon_group_DATA_Variables *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_Icon_group_DATA_Variables.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

