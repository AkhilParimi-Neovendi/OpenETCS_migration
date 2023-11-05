/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelSymbolToIndex_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::LevelSymbolToIndex/ */
void LevelSymbolToIndex_DMI_Control_Pkg_Sub_func(
  /* LevelSymbolPacket/ */
  M_LEVEL LevelSymbolPacket,
  outC_LevelSymbolToIndex_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_lit_int32(4);
  outC->_L12 = kcg_lit_int32(1);
  outC->_L13 = kcg_lit_int32(3);
  outC->_L17 = kcg_lit_int32(5);
  outC->_L14 = kcg_lit_int32(2);
  outC->_L1 = LevelSymbolPacket;
  /* _L10= */
  switch (outC->_L1) {
    case M_LEVEL_Level_0 :
      outC->_L10 = outC->_L12;
      break;
    case M_LEVEL_Level_1 :
      outC->_L10 = outC->_L13;
      break;
    case M_LEVEL_Level_2 :
      outC->_L10 = outC->_L25;
      break;
    case M_LEVEL_Level_3 :
      outC->_L10 = outC->_L17;
      break;
    default :
      outC->_L10 = outC->_L14;
      break;
  }
  outC->LevelSymbol = outC->_L10;
  outC->Visibility = outC->_L26;
}

#ifndef KCG_USER_DEFINED_INIT
void LevelSymbolToIndex_init_DMI_Control_Pkg_Sub_func(
  outC_LevelSymbolToIndex_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L1 = M_LEVEL_Level_0;
  outC->LevelSymbol = kcg_lit_int32(0);
  outC->Visibility = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LevelSymbolToIndex_reset_DMI_Control_Pkg_Sub_func(
  outC_LevelSymbolToIndex_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LevelSymbolToIndex_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

