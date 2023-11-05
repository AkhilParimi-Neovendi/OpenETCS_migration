/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Cabin_identifier_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_Cabin_identifier_to_int/ */
void CAST_DMI_Cabin_identifier_to_int_DATA_Variables(
  /* dmi_cabin_identifier_ct/ */
  DMI_Cabin_Identifier_T_DMI_Types_Pkg dmi_cabin_identifier_ct,
  outC_CAST_DMI_Cabin_identifier_to_int_DATA_Variables *outC)
{
  /* dmi_cabin_identifier_int/ */
  static kcg_int32 dmi_cabin_identifier_int_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* dmi_cabin_identifier_int/ */
  static kcg_int32 _1_dmi_cabin_identifier_int_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* error/ */
  static kcg_bool _3_error_partial;
  /* dmi_cabin_identifier_int/ */
  static kcg_int32 _4_dmi_cabin_identifier_int_partial;
  /* error/ */
  static kcg_bool _5_error_partial;
  /* dmi_cabin_identifier_int/ */
  static kcg_int32 _6_dmi_cabin_identifier_int_partial;
  static kcg_bool noname;

  outC->IfBlock1_clock = dmi_cabin_identifier_ct ==
    ENUM_DMI_Cabin_Identifier_T_cabin_A;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = kcg_false;
    error_partial = outC->_L3_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = dmi_cabin_identifier_ct ==
      ENUM_DMI_Cabin_Identifier_T_cabin_B;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = kcg_false;
      _5_error_partial = outC->_L1_then_else_IfBlock1;
      _2_error_partial = _5_error_partial;
    }
    else {
      outC->_L2_else_else_IfBlock1 = kcg_true;
      _3_error_partial = outC->_L2_else_else_IfBlock1;
      _2_error_partial = _3_error_partial;
    }
    outC->error = _2_error_partial;
  }
  outC->_L22 = outC->error;
  noname = outC->_L22;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L6_then_IfBlock1 = INT_DMI_Cabin_Identifier_T_cabin_A;
    dmi_cabin_identifier_int_partial = outC->_L6_then_IfBlock1;
    outC->dmi_cabin_identifier_int = dmi_cabin_identifier_int_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L6_then_else_IfBlock1 = INT_DMI_Cabin_Identifier_T_cabin_B;
      _6_dmi_cabin_identifier_int_partial = outC->_L6_then_else_IfBlock1;
      _1_dmi_cabin_identifier_int_partial = _6_dmi_cabin_identifier_int_partial;
    }
    else {
      outC->_L5_else_else_IfBlock1 = INT_DMI_Cabin_Identifier_T_cabin_A;
      _4_dmi_cabin_identifier_int_partial = outC->_L5_else_else_IfBlock1;
      _1_dmi_cabin_identifier_int_partial = _4_dmi_cabin_identifier_int_partial;
    }
    outC->dmi_cabin_identifier_int = _1_dmi_cabin_identifier_int_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_Cabin_identifier_to_int_init_DATA_Variables(
  outC_CAST_DMI_Cabin_identifier_to_int_DATA_Variables *outC)
{
  outC->_L22 = kcg_true;
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L6_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1 = kcg_true;
  outC->_L5_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->_L6_then_IfBlock1 = kcg_lit_int32(0);
  outC->dmi_cabin_identifier_int = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_Cabin_identifier_to_int_reset_DATA_Variables(
  outC_CAST_DMI_Cabin_identifier_to_int_DATA_Variables *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_Cabin_identifier_to_int_DATA_Variables.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

