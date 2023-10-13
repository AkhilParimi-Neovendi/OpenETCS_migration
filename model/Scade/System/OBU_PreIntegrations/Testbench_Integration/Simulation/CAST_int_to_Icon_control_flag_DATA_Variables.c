/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_Icon_control_flag_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_Icon_control_flag/ */
void CAST_int_to_Icon_control_flag_DATA_Variables(
  /* Output1/ */
  Icon_control_flag_INT_T_DATA Output1,
  outC_CAST_int_to_Icon_control_flag_DATA_Variables *outC)
{
  /* Input1/ */
  static Icon_control_flag_T_DMI_Types_Pkg Input1_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* Input1/ */
  static Icon_control_flag_T_DMI_Types_Pkg _1_Input1_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* Input1/ */
  static Icon_control_flag_T_DMI_Types_Pkg _3_Input1_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* Input1/ */
  static Icon_control_flag_T_DMI_Types_Pkg _5_Input1_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* error/ */
  static kcg_bool _7_error_partial;
  /* Input1/ */
  static Icon_control_flag_T_DMI_Types_Pkg _8_Input1_partial;
  /* error/ */
  static kcg_bool _9_error_partial;
  /* Input1/ */
  static Icon_control_flag_T_DMI_Types_Pkg _10_Input1_partial;
  /* error/ */
  static kcg_bool _11_error_partial;
  /* Input1/ */
  static Icon_control_flag_T_DMI_Types_Pkg _12_Input1_partial;
  /* error/ */
  static kcg_bool _13_error_partial;
  /* Input1/ */
  static Icon_control_flag_T_DMI_Types_Pkg _14_Input1_partial;
  static kcg_bool noname;

  outC->IfBlock1_clock = Output1 == INT_Icon_control_flag_T_show_icon_in_area;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L2_then_IfBlock1 = kcg_false;
    error_partial = outC->_L2_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = Output1 == INT_Icon_control_flag_T_clear_area;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L2_then_else_IfBlock1 = kcg_false;
      _13_error_partial = outC->_L2_then_else_IfBlock1;
      _2_error_partial = _13_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = Output1 ==
        INT_Icon_control_flag_T_show_icon_flashing_in_area;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L2_then_else_else_IfBlock1;
        _11_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = Output1 ==
          INT_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L2_then_else_else_else_IfBlock1 = kcg_false;
          _9_error_partial = outC->_L2_then_else_else_else_IfBlock1;
          _6_error_partial = _9_error_partial;
        }
        else {
          outC->_L1_else_else_else_else_IfBlock1 = kcg_true;
          _7_error_partial = outC->_L1_else_else_else_else_IfBlock1;
          _6_error_partial = _7_error_partial;
        }
        _11_error_partial = _6_error_partial;
      }
      _2_error_partial = _11_error_partial;
    }
    outC->error = _2_error_partial;
  }
  outC->_L10 = outC->error;
  noname = outC->_L10;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = ENUM_Icon_control_flag_T_show_icon_in_area;
    Input1_partial = outC->_L1_then_IfBlock1;
    outC->Input1 = Input1_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = ENUM_Icon_control_flag_T_clear_area;
      _14_Input1_partial = outC->_L1_then_else_IfBlock1;
      _1_Input1_partial = _14_Input1_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 =
          ENUM_Icon_control_flag_T_show_icon_flashing_in_area;
        _3_Input1_partial = outC->_L1_then_else_else_IfBlock1;
        _12_Input1_partial = _3_Input1_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 =
            ENUM_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area;
          _10_Input1_partial = outC->_L1_then_else_else_else_IfBlock1;
          _5_Input1_partial = _10_Input1_partial;
        }
        else {
          outC->_L2_else_else_else_else_IfBlock1 =
            ENUM_Icon_control_flag_T_show_icon_in_area;
          _8_Input1_partial = outC->_L2_else_else_else_else_IfBlock1;
          _5_Input1_partial = _8_Input1_partial;
        }
        _12_Input1_partial = _5_Input1_partial;
      }
      _1_Input1_partial = _12_Input1_partial;
    }
    outC->Input1 = _1_Input1_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_Icon_control_flag_init_DATA_Variables(
  outC_CAST_int_to_Icon_control_flag_DATA_Variables *outC)
{
  outC->_L10 = kcg_true;
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L2_then_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_IfBlock1 = show_icon_in_area_DMI_Types_Pkg;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = show_icon_in_area_DMI_Types_Pkg;
  outC->_L2_else_else_else_else_IfBlock1 = show_icon_in_area_DMI_Types_Pkg;
  outC->_L1_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = show_icon_in_area_DMI_Types_Pkg;
  outC->_L2_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = show_icon_in_area_DMI_Types_Pkg;
  outC->_L2_then_IfBlock1 = kcg_true;
  outC->Input1 = show_icon_in_area_DMI_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_Icon_control_flag_reset_DATA_Variables(
  outC_CAST_int_to_Icon_control_flag_DATA_Variables *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_Icon_control_flag_DATA_Variables.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

