/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToFullSupervision_Conditions.h"

/* Conditions::ToFullSupervision/ */
void ToFullSupervision_Conditions(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Trip_Order_Given_By_Balise/ */
  kcg_bool Trip_Order_Given_By_Balise,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* MA_SSP_Gradiant_Available/ */
  kcg_bool MA_SSP_Gradiant_Available,
  outC_ToFullSupervision_Conditions *outC)
{
  /* Current_Level/ */
  static M_LEVEL last_Current_Level;

  last_Current_Level = outC->mem_Current_Level;
  outC->mem_Current_Level = Current_Level;
  outC->_L427 = last_Current_Level;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &outC->_L406,
    Mode_Profile_On_Board);
  outC->_L426 = outC->_L406.Mode;
  outC->_L352 = Trip_Order_Given_By_Balise;
  outC->_L425 = !outC->_L352;
  outC->_L408 = MA_SSP_Gradiant_Available;
  outC->_L414 = No_Profile_Level_And_Mode_Types_Pkg;
  outC->_L413 = outC->_L426 == outC->_L414;
  outC->_L404 = outC->_L413 & outC->_L408;
  outC->FS_Data_Condition = outC->_L404;
  outC->_L418 = outC->FS_Data_Condition;
  outC->_L420 = M_LEVEL_Level_1;
  outC->_L297 = Current_Level;
  outC->_L419 = outC->_L297 == outC->_L420;
  outC->_L290 = outC->_L419 & outC->_L425 & outC->_L418;
  outC->Condition32 = outC->_L290;
  outC->_L417 = outC->FS_Data_Condition;
  outC->_L276 = kcg_true;
  outC->_L272 = kcg_true;
  outC->_L270 = kcg_false;
  outC->_L275 = Current_Level;
  /* _L274= */
  switch (outC->_L275) {
    case M_LEVEL_Level_2 :
      outC->_L274 = outC->_L276;
      break;
    case M_LEVEL_Level_3 :
      outC->_L274 = outC->_L272;
      break;
    default :
      outC->_L274 = outC->_L270;
      break;
  }
  outC->_L277 = outC->_L274 & outC->_L417;
  outC->Condition31 = outC->_L277;
  outC->_L391 = outC->FS_Data_Condition;
  outC->_L421 = kcg_true;
  outC->_L423 = kcg_true;
  outC->_L424 = kcg_false;
  /* _L422= */
  switch (outC->_L427) {
    case M_LEVEL_Level_0 :
      outC->_L422 = outC->_L421;
      break;
    case M_LEVEL_Level_NTC_specified_by_NID_NTC :
      outC->_L422 = outC->_L423;
      break;
    default :
      outC->_L422 = outC->_L424;
      break;
  }
  outC->_L375 = kcg_true;
  outC->_L381 = kcg_true;
  outC->_L385 = kcg_true;
  outC->_L382 = kcg_false;
  outC->_L383 = Current_Level;
  /* _L387= */
  switch (outC->_L383) {
    case M_LEVEL_Level_1 :
      outC->_L387 = outC->_L375;
      break;
    case M_LEVEL_Level_2 :
      outC->_L387 = outC->_L381;
      break;
    case M_LEVEL_Level_3 :
      outC->_L387 = outC->_L385;
      break;
    default :
      outC->_L387 = outC->_L382;
      break;
  }
  outC->_L374 = outC->_L387 & outC->_L422 & outC->_L391;
  outC->Condition25 = outC->_L374;
}

#ifndef KCG_USER_DEFINED_INIT
void ToFullSupervision_init_Conditions(outC_ToFullSupervision_Conditions *outC)
{
  outC->_L427 = M_LEVEL_Level_0;
  outC->_L426 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L425 = kcg_true;
  outC->_L421 = kcg_true;
  outC->_L422 = kcg_true;
  outC->_L423 = kcg_true;
  outC->_L424 = kcg_true;
  outC->_L420 = M_LEVEL_Level_0;
  outC->_L419 = kcg_true;
  outC->_L418 = kcg_true;
  outC->_L417 = kcg_true;
  outC->_L414 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L413 = kcg_true;
  outC->_L408 = kcg_true;
  outC->_L406.Distance = kcg_lit_int64(0);
  outC->_L406.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L406.Speed = kcg_lit_int64(0);
  outC->_L406.Length = kcg_lit_int64(0);
  outC->_L406.Length_Ack = kcg_lit_int64(0);
  outC->_L404 = kcg_true;
  outC->_L391 = kcg_true;
  outC->_L387 = kcg_true;
  outC->_L374 = kcg_true;
  outC->_L375 = kcg_true;
  outC->_L381 = kcg_true;
  outC->_L382 = kcg_true;
  outC->_L383 = M_LEVEL_Level_0;
  outC->_L385 = kcg_true;
  outC->_L352 = kcg_true;
  outC->_L290 = kcg_true;
  outC->_L297 = M_LEVEL_Level_0;
  outC->_L270 = kcg_true;
  outC->_L272 = kcg_true;
  outC->_L274 = kcg_true;
  outC->_L275 = M_LEVEL_Level_0;
  outC->_L276 = kcg_true;
  outC->_L277 = kcg_true;
  outC->FS_Data_Condition = kcg_true;
  outC->Condition32 = kcg_true;
  outC->Condition31 = kcg_true;
  outC->Condition25 = kcg_true;
  outC->mem_Current_Level = M_LEVEL_Level_0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToFullSupervision_reset_Conditions(outC_ToFullSupervision_Conditions *outC)
{
  outC->mem_Current_Level = M_LEVEL_Level_0;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToFullSupervision_Conditions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

