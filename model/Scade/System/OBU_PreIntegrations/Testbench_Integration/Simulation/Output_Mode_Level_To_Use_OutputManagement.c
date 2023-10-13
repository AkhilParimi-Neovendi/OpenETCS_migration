/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_Mode_Level_To_Use_OutputManagement.h"

/* OutputManagement::Output_Mode_Level_To_Use/ */
void Output_Mode_Level_To_Use_OutputManagement(
  /* next_level/ */
  M_LEVEL next_level,
  /* currentMode/ */
  T_Mode_Level_And_Mode_Types_Pkg currentMode,
  /* Level_Mode_Compatible/ */
  kcg_bool Level_Mode_Compatible,
  /* isNewLevel/ */
  kcg_bool isNewLevel,
  outC_Output_Mode_Level_To_Use_OutputManagement *outC)
{
  /* currentMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg last_currentMode;

  last_currentMode = outC->mem_currentMode;
  outC->mem_currentMode = currentMode;
  outC->_L29 = isNewLevel;
  outC->_L28 = last_currentMode;
  outC->_L25 = currentMode;
  outC->_L24 = outC->_L25 != outC->_L28;
  outC->_L22 = M_MODE_No_Power;
  outC->_L21 = M_MODE_Passive_Shunting;
  outC->_L20 = M_MODE_Reversing;
  outC->_L19 = M_MODE_National_System;
  outC->_L18 = M_MODE_Limited_Supervision;
  outC->_L17 = M_MODE_Non_Leading;
  outC->_L16 = M_MODE_Isolation;
  outC->_L15 = M_MODE_System_Failure;
  outC->_L14 = M_MODE_Post_Trip;
  outC->_L13 = M_MODE_Trip;
  outC->_L12 = M_MODE_Stand_By;
  outC->_L11 = M_MODE_Sleeping;
  outC->_L10 = M_MODE_Unfitted;
  outC->_L9 = M_MODE_Shunting;
  outC->_L8 = M_MODE_Staff_Responsible;
  outC->_L7 = M_MODE_On_Sight;
  outC->_L6 = M_MODE_Full_Supervision;
  outC->_L4 = currentMode;
  /* _L5= */
  switch (outC->_L4) {
    case FS_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L6;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L7;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L8;
      break;
    case SH_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L9;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L10;
      break;
    case SL_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L11;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L12;
      break;
    case TR_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L13;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L14;
      break;
    case SF_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L15;
      break;
    case IS_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L16;
      break;
    case NL_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L17;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L18;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L19;
      break;
    case RV_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L20;
      break;
    case PS_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L21;
      break;
    case NP_Level_And_Mode_Types_Pkg :
      outC->_L5 = outC->_L22;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L3 = next_level;
  outC->_L2 = Level_Mode_Compatible;
  outC->_L1.compatibleModeAndLevel = outC->_L2;
  outC->_L1.level = outC->_L3;
  outC->_L1.newLevel = outC->_L29;
  outC->_L1.Mode = outC->_L5;
  outC->_L1.newMode = outC->_L24;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->Compatible_Mode_And_Level,
    &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void Output_Mode_Level_To_Use_init_OutputManagement(
  outC_Output_Mode_Level_To_Use_OutputManagement *outC)
{
  outC->_L29 = kcg_true;
  outC->_L28 = NP_Level_And_Mode_Types_Pkg;
  outC->_L25 = NP_Level_And_Mode_Types_Pkg;
  outC->_L24 = kcg_true;
  outC->_L22 = M_MODE_Full_Supervision;
  outC->_L21 = M_MODE_Full_Supervision;
  outC->_L20 = M_MODE_Full_Supervision;
  outC->_L19 = M_MODE_Full_Supervision;
  outC->_L18 = M_MODE_Full_Supervision;
  outC->_L17 = M_MODE_Full_Supervision;
  outC->_L16 = M_MODE_Full_Supervision;
  outC->_L15 = M_MODE_Full_Supervision;
  outC->_L14 = M_MODE_Full_Supervision;
  outC->_L13 = M_MODE_Full_Supervision;
  outC->_L12 = M_MODE_Full_Supervision;
  outC->_L11 = M_MODE_Full_Supervision;
  outC->_L10 = M_MODE_Full_Supervision;
  outC->_L9 = M_MODE_Full_Supervision;
  outC->_L8 = M_MODE_Full_Supervision;
  outC->_L7 = M_MODE_Full_Supervision;
  outC->_L6 = M_MODE_Full_Supervision;
  outC->_L5 = M_MODE_Full_Supervision;
  outC->_L4 = NP_Level_And_Mode_Types_Pkg;
  outC->_L3 = M_LEVEL_Level_0;
  outC->_L2 = kcg_true;
  outC->_L1.compatibleModeAndLevel = kcg_true;
  outC->_L1.level = M_LEVEL_Level_0;
  outC->_L1.newLevel = kcg_true;
  outC->_L1.Mode = M_MODE_Full_Supervision;
  outC->_L1.newMode = kcg_true;
  outC->Compatible_Mode_And_Level.compatibleModeAndLevel = kcg_true;
  outC->Compatible_Mode_And_Level.level = M_LEVEL_Level_0;
  outC->Compatible_Mode_And_Level.newLevel = kcg_true;
  outC->Compatible_Mode_And_Level.Mode = M_MODE_Full_Supervision;
  outC->Compatible_Mode_And_Level.newMode = kcg_true;
  outC->mem_currentMode = SB_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Output_Mode_Level_To_Use_reset_OutputManagement(
  outC_Output_Mode_Level_To_Use_OutputManagement *outC)
{
  outC->mem_currentMode = SB_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_Output_Mode_Level_To_Use_OutputManagement(
  SV_Output_Mode_Level_To_Use_OutputManagement *SV,
  outC_Output_Mode_Level_To_Use_OutputManagement *outC)
{
  SV->Context_mem_currentMode = outC->mem_currentMode;
}

void kcg_load_SV_Output_Mode_Level_To_Use_OutputManagement(
  outC_Output_Mode_Level_To_Use_OutputManagement *outC,
  SV_Output_Mode_Level_To_Use_OutputManagement *SV)
{
  outC->mem_currentMode = SV->Context_mem_currentMode;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Output_Mode_Level_To_Use_OutputManagement.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

