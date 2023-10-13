/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckModeExceptions_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::CheckModeExceptions/ */
void CheckModeExceptions_InformationFilter_Pkg(
  /* inAction/ */
  ModeDecisionTableActionKind_DataDictionary_Pkg inAction,
  outC_CheckModeExceptions_InformationFilter_Pkg *outC)
{
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_false;
  outC->_L6 = kcg_false;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_false;
  outC->_L1 = inAction;
  /* _L3= */
  switch (outC->_L1) {
    case MD_Invalid_DataDictionary_Pkg :
      outC->_L3 = outC->_L4;
      break;
    case MD_Accept_DataDictionary_Pkg :
      outC->_L3 = outC->_L5;
      break;
    case MD_Reject_DataDictionary_Pkg :
      outC->_L3 = outC->_L6;
      break;
    case MD_NotRelevant_DataDictionary_Pkg :
      outC->_L3 = outC->_L7;
      break;
    case MD_01IfFollowingExitTRMode_DataDictionary_Pkg :
      outC->_L3 = outC->_L8;
      break;
    case MD_02IfCabActive_DataDictionary_Pkg :
      outC->_L3 = outC->_L9;
      break;
    case MD_03StoreRBCIDAndPhone_DataDictionary_Pkg :
      outC->_L3 = outC->_L10;
      break;
    case MD_04IfValidTrainDataStored_DataDictionary_Pkg :
      outC->_L3 = outC->_L11;
      break;
    case MD_05OnlyLevelTransitionAnnouncements_DataDictionary_Pkg :
      outC->_L3 = outC->_L12;
      break;
    case MD_06RejectIfOverrideActive_DataDictionary_Pkg :
      outC->_L3 = outC->_L14;
      break;
    case MD_07AcceptImmediateAndConditionalLevelTransitionOrder_DataDictionary_Pkg :
      outC->_L3 = outC->_L15;
      break;
    case MD_08NullDistanceRBCTransition_DataDictionary_Pkg :
      outC->_L3 = outC->_L16;
      break;
    case MD_09MaxSafeFrontWithinSupervision_DataDictionary_Pkg :
      outC->_L3 = outC->_L17;
      break;
    case MD_0204Accept_DataDictionary_Pkg :
      outC->_L3 = outC->_L18;
      break;
    case MD_0105Accept_DataDictionary_Pkg :
      outC->_L3 = outC->_L19;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->outAccept = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void CheckModeExceptions_init_InformationFilter_Pkg(
  outC_CheckModeExceptions_InformationFilter_Pkg *outC)
{
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L1 = MD_Invalid_DataDictionary_Pkg;
  outC->outAccept = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckModeExceptions_reset_InformationFilter_Pkg(
  outC_CheckModeExceptions_InformationFilter_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckModeExceptions_InformationFilter_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

