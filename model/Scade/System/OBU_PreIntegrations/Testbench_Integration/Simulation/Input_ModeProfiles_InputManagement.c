/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_ModeProfiles_InputManagement.h"

/* InputManagement::Input_ModeProfiles/ */
void Input_ModeProfiles_InputManagement(
  /* P_80_One_Iter/ */
  P80_ModeProfile_T_Packet_Types_Pkg *P_80_One_Iter,
  /* referenceLocation/ */
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  outC_Input_ModeProfiles_InputManagement *outC)
{
  /* Loc_Mode_Profile/ */
  static T_MA_Level_And_Mode_Types_Pkg Loc_Mode_Profile_partial;
  /* Loc_Mode_Profile/ */
  static T_MA_Level_And_Mode_Types_Pkg _1_Loc_Mode_Profile_partial;
  static Q_DIR noname;
  static Q_MAMODE _2_noname;

  kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg(&outC->_L15, P_80_One_Iter);
  outC->_L7 = outC->_L15.q_scale;
  outC->_L11 = outC->_L15.l_mamode;
  /* _L22=(InputManagement::scaledDistance_2_distance#4)/ */
  scaledDistance_2_distance_InputManagement(
    outC->_L7,
    outC->_L11,
    &outC->Context_scaledDistance_2_distance_4);
  outC->_L22 = outC->Context_scaledDistance_2_distance_4.distance;
  outC->_L12 = outC->_L15.l_ackmamode;
  /* _L21=(InputManagement::scaledDistance_2_distance#3)/ */
  scaledDistance_2_distance_InputManagement(
    outC->_L7,
    outC->_L12,
    &outC->Context_scaledDistance_2_distance_3);
  outC->_L21 = outC->Context_scaledDistance_2_distance_3.distance;
  outC->_L8 = outC->_L15.d_mamode;
  /* _L20=(InputManagement::scaledDistance_2_distance#2)/ */
  scaledDistance_2_distance_InputManagement(
    outC->_L7,
    outC->_L8,
    &outC->Context_scaledDistance_2_distance_2);
  outC->_L20 = outC->Context_scaledDistance_2_distance_2.distance;
  outC->_L18 = referenceLocation;
  outC->_L17 = outC->_L18 + outC->_L20;
  outC->_L5 = outC->_L15.valid;
  outC->Loc_MO_Profile_Available = outC->_L5;
  outC->IfBlock1_clock = outC->Loc_MO_Profile_Available;
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = Profile_OS_Level_And_Mode_Types_Pkg;
    outC->_L4_then_IfBlock1 = Profile_SH_Level_And_Mode_Types_Pkg;
    outC->_L3_then_IfBlock1 = Profile_LS_Level_And_Mode_Types_Pkg;
  }
  else {
    outC->_L1_else_IfBlock1 = No_Profile_Level_And_Mode_Types_Pkg;
    _1_Loc_Mode_Profile_partial = outC->_L1_else_IfBlock1;
  }
  outC->_L9 = outC->_L15.m_mamode;
  outC->Loc_MAMode = outC->_L9;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L5_then_IfBlock1 = outC->Loc_MAMode;
    /* IfBlock1:then:_L2= */
    switch (outC->_L5_then_IfBlock1) {
      case M_MAMODE_On_Sight :
        outC->_L2_then_IfBlock1 = outC->_L1_then_IfBlock1;
        break;
      case M_MAMODE_Shunting :
        outC->_L2_then_IfBlock1 = outC->_L4_then_IfBlock1;
        break;
      case M_MAMODE_Limited_Supervision :
        outC->_L2_then_IfBlock1 = outC->_L3_then_IfBlock1;
        break;
      default :
        /* this default branch is unreachable */
        break;
    }
    Loc_Mode_Profile_partial = outC->_L2_then_IfBlock1;
    outC->Loc_Mode_Profile = Loc_Mode_Profile_partial;
  }
  else {
    outC->Loc_Mode_Profile = _1_Loc_Mode_Profile_partial;
  }
  outC->_L16 = outC->Loc_Mode_Profile;
  outC->_L13 = outC->_L15.q_mamode;
  _2_noname = outC->_L13;
  outC->_L10 = outC->_L15.v_mamode;
  outC->_L14.Distance = outC->_L17;
  outC->_L14.Mode = outC->_L16;
  outC->_L14.Speed = outC->_L10;
  outC->_L14.Length = outC->_L22;
  outC->_L14.Length_Ack = outC->_L21;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &outC->Mode_Profile_On_Borad,
    &outC->_L14);
  outC->_L6 = outC->_L15.q_dir;
  noname = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void Input_ModeProfiles_init_InputManagement(
  outC_Input_ModeProfiles_InputManagement *outC)
{
  outC->_L22 = kcg_lit_int32(0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L13 = Q_MAMODE_as_the_EOA;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = M_MAMODE_On_Sight;
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = Q_SCALE_10_cm_scale;
  outC->_L6 = Q_DIR_Reverse;
  outC->_L5 = kcg_true;
  outC->_L14.Distance = kcg_lit_int32(0);
  outC->_L14.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L14.Speed = kcg_lit_int32(0);
  outC->_L14.Length = kcg_lit_int32(0);
  outC->_L14.Length_Ack = kcg_lit_int32(0);
  outC->_L15.valid = kcg_true;
  outC->_L15.q_dir = Q_DIR_Reverse;
  outC->_L15.q_scale = Q_SCALE_10_cm_scale;
  outC->_L15.d_mamode = kcg_lit_int32(0);
  outC->_L15.m_mamode = M_MAMODE_On_Sight;
  outC->_L15.v_mamode = kcg_lit_int32(0);
  outC->_L15.l_mamode = kcg_lit_int32(0);
  outC->_L15.l_ackmamode = kcg_lit_int32(0);
  outC->_L15.q_mamode = Q_MAMODE_as_the_EOA;
  outC->_L16 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->Loc_MAMode = M_MAMODE_On_Sight;
  outC->Loc_Mode_Profile = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->Loc_MO_Profile_Available = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L5_then_IfBlock1 = M_MAMODE_On_Sight;
  outC->_L4_then_IfBlock1 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L3_then_IfBlock1 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L2_then_IfBlock1 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L1_then_IfBlock1 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->Mode_Profile_On_Borad.Distance = kcg_lit_int32(0);
  outC->Mode_Profile_On_Borad.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->Mode_Profile_On_Borad.Speed = kcg_lit_int32(0);
  outC->Mode_Profile_On_Borad.Length = kcg_lit_int32(0);
  outC->Mode_Profile_On_Borad.Length_Ack = kcg_lit_int32(0);
  /* _L20=(InputManagement::scaledDistance_2_distance#2)/ */
  scaledDistance_2_distance_init_InputManagement(
    &outC->Context_scaledDistance_2_distance_2);
  /* _L21=(InputManagement::scaledDistance_2_distance#3)/ */
  scaledDistance_2_distance_init_InputManagement(
    &outC->Context_scaledDistance_2_distance_3);
  /* _L22=(InputManagement::scaledDistance_2_distance#4)/ */
  scaledDistance_2_distance_init_InputManagement(
    &outC->Context_scaledDistance_2_distance_4);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Input_ModeProfiles_reset_InputManagement(
  outC_Input_ModeProfiles_InputManagement *outC)
{
  /* _L20=(InputManagement::scaledDistance_2_distance#2)/ */
  scaledDistance_2_distance_reset_InputManagement(
    &outC->Context_scaledDistance_2_distance_2);
  /* _L21=(InputManagement::scaledDistance_2_distance#3)/ */
  scaledDistance_2_distance_reset_InputManagement(
    &outC->Context_scaledDistance_2_distance_3);
  /* _L22=(InputManagement::scaledDistance_2_distance#4)/ */
  scaledDistance_2_distance_reset_InputManagement(
    &outC->Context_scaledDistance_2_distance_4);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Input_ModeProfiles_InputManagement.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

