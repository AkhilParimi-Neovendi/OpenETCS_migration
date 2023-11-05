/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_WriteBaliseDataElement_TM_lib_internal.h"

/* TM_lib_internal::SEND_WriteBaliseDataElement/ */
void SEND_WriteBaliseDataElement_TM_lib_internal(
  /* Index/ */
  kcg_int32 Index,
  /* DataIn/ */
  kcg_int32 DataIn,
  /* ElementIn/ */
  CompressedPacketData_T_Common_Types_Pkg *ElementIn,
  /* StartAddress/ */
  kcg_int32 StartAddress,
  /* EndAddress/ */
  kcg_int32 EndAddress,
  outC_SEND_WriteBaliseDataElement_TM_lib_internal *outC)
{
  outC->_L16 = StartAddress;
  outC->_L10 = Index;
  outC->_L17 = outC->_L10 - outC->_L16;
  outC->_L2 = DataIn;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L3, ElementIn);
  if ((kcg_lit_int32(0) <= outC->_L17) & (outC->_L17 < kcg_lit_int32(500))) {
    outC->_L9 = outC->_L3[outC->_L17];
  }
  else {
    outC->_L9 = kcg_lit_int32(0);
  }
  outC->_L4 = StartAddress;
  outC->_L1 = Index;
  outC->_L7 = outC->_L1 >= outC->_L4;
  outC->_L5 = EndAddress;
  outC->_L6 = outC->_L5 >= outC->_L1;
  outC->_L8 = outC->_L6 & outC->_L7;
  /* _L14= */
  if (outC->_L8) {
    outC->_L14 = outC->_L9;
  }
  else {
    outC->_L14 = outC->_L2;
  }
  outC->DataOut = outC->_L14;
  outC->Cont = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void SEND_WriteBaliseDataElement_init_TM_lib_internal(
  outC_SEND_WriteBaliseDataElement_TM_lib_internal *outC)
{
  static kcg_size idx;

  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  for (idx = 0; idx < 500; idx++) {
    outC->_L3[idx] = kcg_lit_int32(0);
  }
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->DataOut = kcg_lit_int32(0);
  outC->Cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void SEND_WriteBaliseDataElement_reset_TM_lib_internal(
  outC_SEND_WriteBaliseDataElement_TM_lib_internal *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SEND_WriteBaliseDataElement_TM_lib_internal.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

