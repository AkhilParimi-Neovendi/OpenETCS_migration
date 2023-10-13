/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"

/* DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter/ */
void AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* airtightEnum/ */
  M_AIRTIGHT airtightEnum,
  outC_AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  outC->_L4 = kcg_lit_int64(2);
  outC->_L3 = kcg_lit_int64(1);
  outC->_L1 = airtightEnum;
  /* _L2= */
  switch (outC->_L1) {
    case M_AIRTIGHT_Fitted :
      outC->_L2 = outC->_L3;
      break;
    default :
      outC->_L2 = outC->_L4;
      break;
  }
  outC->airtightIndex = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void AirtightManagerInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
  outC_AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = M_AIRTIGHT_Not_fitted;
  outC->airtightIndex = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AirtightManagerInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
  outC_AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

