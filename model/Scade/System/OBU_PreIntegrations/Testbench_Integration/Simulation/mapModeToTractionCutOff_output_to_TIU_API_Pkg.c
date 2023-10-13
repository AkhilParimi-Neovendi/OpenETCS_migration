/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapModeToTractionCutOff_output_to_TIU_API_Pkg.h"

/* output_to_TIU_API_Pkg::mapModeToTractionCutOff/ */
void mapModeToTractionCutOff_output_to_TIU_API_Pkg(
  /* inModeLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeLevel,
  outC_mapModeToTractionCutOff_output_to_TIU_API_Pkg *outC)
{
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L1, inModeLevel);
  outC->_L8 = outC->_L1.Mode;
  outC->_L7 = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L5 = release_traction_cutoff_TIU_Types_Pkg;
  outC->_L4 = apply_traction_cutoff_TIU_Types_Pkg;
  /* _L2= */
  switch (outC->_L8) {
    case M_MODE_Full_Supervision :
      outC->_L2 = outC->_L5;
      break;
    case M_MODE_Limited_Supervision :
      outC->_L2 = outC->_L5;
      break;
    case M_MODE_National_System :
      outC->_L2 = outC->_L5;
      break;
    case M_MODE_On_Sight :
      outC->_L2 = outC->_L5;
      break;
    case M_MODE_Passive_Shunting :
      outC->_L2 = outC->_L5;
      break;
    case M_MODE_Shunting :
      outC->_L2 = outC->_L5;
      break;
    case M_MODE_Staff_Responsible :
      outC->_L2 = outC->_L5;
      break;
    case M_MODE_Unfitted :
      outC->_L2 = outC->_L5;
      break;
    case M_MODE_Stand_By :
      outC->_L2 = outC->_L4;
      break;
    case M_MODE_No_Power :
      outC->_L2 = outC->_L4;
      break;
    default :
      outC->_L2 = outC->_L7;
      break;
  }
  outC->tractionCutOff = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void mapModeToTractionCutOff_init_output_to_TIU_API_Pkg(
  outC_mapModeToTractionCutOff_output_to_TIU_API_Pkg *outC)
{
  outC->_L8 = M_MODE_Full_Supervision;
  outC->_L7 = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L5 = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L4 = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L2 = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L1.compatibleModeAndLevel = kcg_true;
  outC->_L1.level = M_LEVEL_Level_0;
  outC->_L1.newLevel = kcg_true;
  outC->_L1.Mode = M_MODE_Full_Supervision;
  outC->_L1.newMode = kcg_true;
  outC->tractionCutOff = traction_cutoff_command_not_defined_TIU_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void mapModeToTractionCutOff_reset_output_to_TIU_API_Pkg(
  outC_mapModeToTractionCutOff_output_to_TIU_API_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mapModeToTractionCutOff_output_to_TIU_API_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

