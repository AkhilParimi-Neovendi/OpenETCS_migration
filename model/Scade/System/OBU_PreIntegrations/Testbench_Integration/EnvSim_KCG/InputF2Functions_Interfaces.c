/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputF2Functions_Interfaces.h"

/* Interfaces::InputF2Functions/ */
void InputF2Functions_Interfaces(
  /* Data_From_F2_Functions/ */
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions,
  outC_InputF2Functions_Interfaces *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  static kcg_bool _2_noname;
  static kcg_bool _3_noname;
  static NID_C _4_noname;
  static NID_ERRORBG_BG_Types_Pkg _5_noname;

  kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg(
    &outC->_L1,
    Data_From_F2_Functions);
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->_L25, &outC->_L1.Common_Errors);
  outC->_L24 = outC->_L1.Failure_Occured;
  outC->_L23 = outC->_L1.Continue_Shunting_Active;
  outC->_L22 = outC->_L1.Stop_Shunting_Stored;
  outC->_L13 = outC->_L25.nid_errorbg;
  _5_noname = outC->_L13;
  outC->_L14 = outC->_L25.nid_c;
  _4_noname = outC->_L14;
  outC->_L15 = outC->_L25.radioMessageConsistencyError;
  _3_noname = outC->_L15;
  outC->_L16 = outC->_L25.otherTimingError;
  _2_noname = outC->_L16;
  outC->_L18 = outC->_L25.radioSequenceError;
  _1_noname = outC->_L18;
  outC->_L20 = outC->_L25.unlinkedBGError;
  noname = outC->_L20;
  outC->_L21 = outC->_L25.linkedBGError;
  outC->_L19 = outC->_L25.BG_versionIncompatible;
  outC->_L17 = outC->_L25.tNvContactError;
  outC->Error_BG_System_Version = outC->_L19;
  outC->Linking_Reaction_To_Trip = outC->_L21;
  outC->T_NVCONTACT_Overpass = outC->_L17;
  outC->Failure_Occured = outC->_L24;
  outC->Stop_Shunting_Stored = outC->_L22;
  outC->Continue_Shunting_Function_Active = outC->_L23;
}

#ifndef KCG_USER_DEFINED_INIT
void InputF2Functions_init_Interfaces(outC_InputF2Functions_Interfaces *outC)
{
  outC->_L22 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L25.linkedBGError = kcg_true;
  outC->_L25.unlinkedBGError = kcg_true;
  outC->_L25.BG_versionIncompatible = kcg_true;
  outC->_L25.radioSequenceError = kcg_true;
  outC->_L25.tNvContactError = kcg_true;
  outC->_L25.otherTimingError = kcg_true;
  outC->_L25.radioMessageConsistencyError = kcg_true;
  outC->_L25.nid_c = kcg_lit_int32(0);
  outC->_L25.nid_errorbg = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L15 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L1.Common_Errors.linkedBGError = kcg_true;
  outC->_L1.Common_Errors.unlinkedBGError = kcg_true;
  outC->_L1.Common_Errors.BG_versionIncompatible = kcg_true;
  outC->_L1.Common_Errors.radioSequenceError = kcg_true;
  outC->_L1.Common_Errors.tNvContactError = kcg_true;
  outC->_L1.Common_Errors.otherTimingError = kcg_true;
  outC->_L1.Common_Errors.radioMessageConsistencyError = kcg_true;
  outC->_L1.Common_Errors.nid_c = kcg_lit_int32(0);
  outC->_L1.Common_Errors.nid_errorbg = kcg_lit_int32(0);
  outC->_L1.Failure_Occured = kcg_true;
  outC->_L1.Continue_Shunting_Active = kcg_true;
  outC->_L1.Stop_Shunting_Stored = kcg_true;
  outC->Linking_Reaction_To_Trip = kcg_true;
  outC->Stop_Shunting_Stored = kcg_true;
  outC->Continue_Shunting_Function_Active = kcg_true;
  outC->Failure_Occured = kcg_true;
  outC->Error_BG_System_Version = kcg_true;
  outC->T_NVCONTACT_Overpass = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InputF2Functions_reset_Interfaces(outC_InputF2Functions_Interfaces *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputF2Functions_Interfaces.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

