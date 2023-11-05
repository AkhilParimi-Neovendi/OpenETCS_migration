/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Cabin_identifier_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_Cabin_identifier/ */
void CAST_int_to_DMI_Cabin_identifier_DATA_Variables(
  /* dmi_cabin_identifier_int/ */
  kcg_int32 dmi_cabin_identifier_int,
  outC_CAST_int_to_DMI_Cabin_identifier_DATA_Variables *outC)
{
  /* dmi_cabin_identifier_ct/ */
  static DMI_Cabin_Identifier_T_DMI_Types_Pkg dmi_cabin_identifier_ct_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* dmi_cabin_identifier_ct/ */
  static DMI_Cabin_Identifier_T_DMI_Types_Pkg _1_dmi_cabin_identifier_ct_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* error/ */
  static kcg_bool _3_error_partial;
  /* dmi_cabin_identifier_ct/ */
  static DMI_Cabin_Identifier_T_DMI_Types_Pkg _4_dmi_cabin_identifier_ct_partial;
  /* error/ */
  static kcg_bool _5_error_partial;
  /* dmi_cabin_identifier_ct/ */
  static DMI_Cabin_Identifier_T_DMI_Types_Pkg _6_dmi_cabin_identifier_ct_partial;
  static kcg_bool noname;

  outC->IfBlock1_clock = dmi_cabin_identifier_int ==
    INT_DMI_Cabin_Identifier_T_cabin_A;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = kcg_false;
    error_partial = outC->_L3_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = dmi_cabin_identifier_int ==
      INT_DMI_Cabin_Identifier_T_cabin_B;
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
    outC->_L4_then_IfBlock1 = ENUM_DMI_Cabin_Identifier_T_cabin_A;
    dmi_cabin_identifier_ct_partial = outC->_L4_then_IfBlock1;
    outC->dmi_cabin_identifier_ct = dmi_cabin_identifier_ct_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L4_then_else_IfBlock1 = ENUM_DMI_Cabin_Identifier_T_cabin_B;
      _6_dmi_cabin_identifier_ct_partial = outC->_L4_then_else_IfBlock1;
      _1_dmi_cabin_identifier_ct_partial = _6_dmi_cabin_identifier_ct_partial;
    }
    else {
      outC->_L3_else_else_IfBlock1 = ENUM_DMI_Cabin_Identifier_T_cabin_A;
      _4_dmi_cabin_identifier_ct_partial = outC->_L3_else_else_IfBlock1;
      _1_dmi_cabin_identifier_ct_partial = _4_dmi_cabin_identifier_ct_partial;
    }
    outC->dmi_cabin_identifier_ct = _1_dmi_cabin_identifier_ct_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_Cabin_identifier_init_DATA_Variables(
  outC_CAST_int_to_DMI_Cabin_identifier_DATA_Variables *outC)
{
  outC->_L22 = kcg_true;
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L4_then_else_IfBlock1 = cabin_A_DMI_Types_Pkg;
  outC->_L1_then_else_IfBlock1 = kcg_true;
  outC->_L3_else_else_IfBlock1 = cabin_A_DMI_Types_Pkg;
  outC->_L2_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 = cabin_A_DMI_Types_Pkg;
  outC->dmi_cabin_identifier_ct = cabin_A_DMI_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_Cabin_identifier_reset_DATA_Variables(
  outC_CAST_int_to_DMI_Cabin_identifier_DATA_Variables *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_Cabin_identifier_DATA_Variables.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

