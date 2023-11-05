/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::RBC_SymbolsToIndex/ */
void RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func(
  /* connectionEstabilished/ */
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg connectionEstabilished,
  outC_RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L12 = kcg_lit_int32(4);
  outC->_L11 = kcg_false;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(3);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L1 = connectionEstabilished;
  /* _L6= */
  switch (outC->_L1) {
    case conn_ConnectionUp_API_RadioCommunication_Pkg :
      outC->_L6 = outC->_L3;
      break;
    case conn_no_connection_API_RadioCommunication_Pkg :
      outC->_L6 = outC->_L4;
      break;
    case conn_SetupFailed_API_RadioCommunication_Pkg :
      outC->_L6 = outC->_L12;
      break;
    default :
      outC->_L6 = outC->_L8;
      break;
  }
  outC->_L9 = outC->_L6 == outC->_L10;
  outC->_L5 = kcg_true;
  /* _L7= */
  if (outC->_L9) {
    outC->_L7 = outC->_L11;
  }
  else {
    outC->_L7 = outC->_L5;
  }
  outC->visibility = outC->_L7;
  outC->symbol = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void RBC_SymbolsToIndex_init_DMI_Control_Pkg_Sub_func(
  outC_RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L1 = conn_unknown_API_RadioCommunication_Pkg;
  outC->visibility = kcg_true;
  outC->symbol = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RBC_SymbolsToIndex_reset_DMI_Control_Pkg_Sub_func(
  outC_RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

