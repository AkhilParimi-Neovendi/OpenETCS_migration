/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"

/* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter/ */
void AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* axleLoadEnum/ */
  M_AXLELOADCAT axleLoadEnum,
  outC_AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  outC->_L24 = kcg_lit_int32(11);
  outC->_L22 = kcg_lit_int32(13);
  outC->_L20 = kcg_lit_int32(12);
  outC->_L19 = kcg_lit_int32(8);
  outC->_L18 = kcg_lit_int32(7);
  outC->_L17 = kcg_lit_int32(9);
  outC->_L16 = kcg_lit_int32(10);
  outC->_L15 = kcg_lit_int32(6);
  outC->_L7 = kcg_lit_int32(5);
  outC->_L6 = kcg_lit_int32(4);
  outC->_L5 = kcg_lit_int32(3);
  outC->_L4 = kcg_lit_int32(2);
  outC->_L3 = kcg_lit_int32(1);
  outC->_L1 = axleLoadEnum;
  /* _L2= */
  switch (outC->_L1) {
    case M_AXLELOADCAT_A :
      outC->_L2 = outC->_L3;
      break;
    case M_AXLELOADCAT_HS17 :
      outC->_L2 = outC->_L4;
      break;
    case M_AXLELOADCAT_B1 :
      outC->_L2 = outC->_L5;
      break;
    case M_AXLELOADCAT_B2 :
      outC->_L2 = outC->_L6;
      break;
    case M_AXLELOADCAT_C2 :
      outC->_L2 = outC->_L7;
      break;
    case M_AXLELOADCAT_C3 :
      outC->_L2 = outC->_L15;
      break;
    case M_AXLELOADCAT_C4 :
      outC->_L2 = outC->_L18;
      break;
    case M_AXLELOADCAT_D2 :
      outC->_L2 = outC->_L19;
      break;
    case M_AXLELOADCAT_D3 :
      outC->_L2 = outC->_L17;
      break;
    case M_AXLELOADCAT_D4 :
      outC->_L2 = outC->_L16;
      break;
    case M_AXLELOADCAT_D4XL :
      outC->_L2 = outC->_L24;
      break;
    case M_AXLELOADCAT_E4 :
      outC->_L2 = outC->_L20;
      break;
    default :
      outC->_L2 = outC->_L22;
      break;
  }
  outC->axelLoadIndex = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void AxleLoadCategoryInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
  outC_AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
  outC->_L20 = kcg_lit_int32(0);
  outC->_L22 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(0);
  outC->_L19 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = M_AXLELOADCAT_A;
  outC->axelLoadIndex = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AxleLoadCategoryInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
  outC_AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

