/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckDeskStatus_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::CheckDeskStatus/ */
void CheckDeskStatus_DMI_Control_Pkg_Sub_func(
  /* TIU_trainStatus/ */
  TIU_trainStatus_T_TIU_Types_Pkg *TIU_trainStatus,
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC)
{
  static cab_ID_T_TIU_Types_Pkg noname;
  static cab_ID_T_TIU_Types_Pkg _1_noname;
  /* storeTrainData/ */
  static TIU_trainStatus_T_TIU_Types_Pkg last_storeTrainData;

  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
    &last_storeTrainData,
    &outC->storeTrainData);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L11, &last_storeTrainData);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L1, TIU_trainStatus);
  outC->_L10 = outC->_L1.valid;
  /* _L12= */
  if (outC->_L10) {
    kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L12, &outC->_L1);
  }
  else {
    kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L12, &outC->_L11);
  }
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->storeTrainData, &outC->_L12);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L9, &outC->storeTrainData);
  outC->_L8 = outC->_L9.activeCab;
  _1_noname = outC->_L8;
  outC->_L7 = outC->_L9.ownCab;
  noname = outC->_L7;
  outC->_L5 = outC->_L9.valid;
  outC->_L6 = outC->_L9.deskOpen;
  outC->_L4 = !outC->_L6;
  outC->_L3 = outC->_L5 & outC->_L4;
  outC->_L2 = outC->_L5 & outC->_L6;
  outC->Output1 = outC->_L2;
  outC->Output2 = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void CheckDeskStatus_init_DMI_Control_Pkg_Sub_func(
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L12.valid = kcg_true;
  outC->_L12.deskOpen = kcg_true;
  outC->_L12.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L12.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L11.valid = kcg_true;
  outC->_L11.deskOpen = kcg_true;
  outC->_L11.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L11.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L10 = kcg_true;
  outC->_L9.valid = kcg_true;
  outC->_L9.deskOpen = kcg_true;
  outC->_L9.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L9.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L8 = CabUndefined_TIU_Types_Pkg;
  outC->_L7 = CabUndefined_TIU_Types_Pkg;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.deskOpen = kcg_true;
  outC->_L1.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L1.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->Output2 = kcg_true;
  outC->Output1 = kcg_true;
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
    &outC->storeTrainData,
    (TIU_trainStatus_T_TIU_Types_Pkg *) &cInitStatus_DMI_Control_Pkg_Sub_func);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckDeskStatus_reset_DMI_Control_Pkg_Sub_func(
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC)
{
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
    &outC->storeTrainData,
    (TIU_trainStatus_T_TIU_Types_Pkg *) &cInitStatus_DMI_Control_Pkg_Sub_func);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_CheckDeskStatus_DMI_Control_Pkg_Sub_func(
  SV_CheckDeskStatus_DMI_Control_Pkg_Sub_func *SV,
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC)
{
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
    &SV->Context_storeTrainData,
    &outC->storeTrainData);
}

void kcg_load_SV_CheckDeskStatus_DMI_Control_Pkg_Sub_func(
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC,
  SV_CheckDeskStatus_DMI_Control_Pkg_Sub_func *SV)
{
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
    &outC->storeTrainData,
    &SV->Context_storeTrainData);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckDeskStatus_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

