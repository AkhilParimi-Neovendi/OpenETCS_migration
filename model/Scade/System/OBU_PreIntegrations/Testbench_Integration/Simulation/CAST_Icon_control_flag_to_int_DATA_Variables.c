/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Icon_control_flag_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_Icon_control_flag_to_int/ */
void CAST_Icon_control_flag_to_int_DATA_Variables(
  /* Input1/ */
  Icon_control_flag_T_DMI_Types_Pkg Input1,
  outC_CAST_Icon_control_flag_to_int_DATA_Variables *outC)
{
  /* Output1/ */
  static Icon_control_flag_INT_T_DATA Output1_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* Output1/ */
  static Icon_control_flag_INT_T_DATA _1_Output1_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* Output1/ */
  static Icon_control_flag_INT_T_DATA _3_Output1_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* Output1/ */
  static Icon_control_flag_INT_T_DATA _5_Output1_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* error/ */
  static kcg_bool _7_error_partial;
  /* Output1/ */
  static Icon_control_flag_INT_T_DATA _8_Output1_partial;
  /* error/ */
  static kcg_bool _9_error_partial;
  /* Output1/ */
  static Icon_control_flag_INT_T_DATA _10_Output1_partial;
  /* error/ */
  static kcg_bool _11_error_partial;
  /* Output1/ */
  static Icon_control_flag_INT_T_DATA _12_Output1_partial;
  /* error/ */
  static kcg_bool _13_error_partial;
  /* Output1/ */
  static Icon_control_flag_INT_T_DATA _14_Output1_partial;
  static kcg_bool noname;

  outC->IfBlock1_clock = Input1 == ENUM_Icon_control_flag_T_show_icon_in_area;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L2_then_IfBlock1 = kcg_false;
    error_partial = outC->_L2_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = Input1 == ENUM_Icon_control_flag_T_clear_area;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L2_then_else_IfBlock1 = kcg_false;
      _13_error_partial = outC->_L2_then_else_IfBlock1;
      _2_error_partial = _13_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = Input1 ==
        ENUM_Icon_control_flag_T_show_icon_flashing_in_area;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L2_then_else_else_IfBlock1;
        _11_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = Input1 ==
          ENUM_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area;
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
    outC->_L1_then_IfBlock1 = INT_Icon_control_flag_T_show_icon_in_area;
    Output1_partial = outC->_L1_then_IfBlock1;
    outC->Output1 = Output1_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = INT_Icon_control_flag_T_clear_area;
      _14_Output1_partial = outC->_L1_then_else_IfBlock1;
      _1_Output1_partial = _14_Output1_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 =
          INT_Icon_control_flag_T_show_icon_flashing_in_area;
        _3_Output1_partial = outC->_L1_then_else_else_IfBlock1;
        _12_Output1_partial = _3_Output1_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 =
            INT_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area;
          _10_Output1_partial = outC->_L1_then_else_else_else_IfBlock1;
          _5_Output1_partial = _10_Output1_partial;
        }
        else {
          outC->_L2_else_else_else_else_IfBlock1 =
            INT_Icon_control_flag_T_show_icon_in_area;
          _8_Output1_partial = outC->_L2_else_else_else_else_IfBlock1;
          _5_Output1_partial = _8_Output1_partial;
        }
        _12_Output1_partial = _5_Output1_partial;
      }
      _1_Output1_partial = _12_Output1_partial;
    }
    outC->Output1 = _1_Output1_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Icon_control_flag_to_int_init_DATA_Variables(
  outC_CAST_Icon_control_flag_to_int_DATA_Variables *outC)
{
  outC->_L10 = kcg_true;
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L2_then_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L2_else_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L1_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1 = kcg_true;
  outC->Output1 = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Icon_control_flag_to_int_reset_DATA_Variables(
  outC_CAST_Icon_control_flag_to_int_DATA_Variables *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Icon_control_flag_to_int_DATA_Variables.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

