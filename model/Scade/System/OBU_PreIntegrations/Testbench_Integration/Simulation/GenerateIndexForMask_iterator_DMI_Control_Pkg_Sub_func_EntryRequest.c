/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.h"

/* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator/ */
void GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* index_in/ */
  kcg_int32 index_in,
  /* acc_in/ */
  kcg_int32 acc_in,
  /* inputA/ */
  DMI_List_Entry_Request_T_DMI_Types_Pkg inputA,
  /* inputB/ */
  DMI_List_Entry_Request_T_DMI_Types_Pkg inputB,
  outC_GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  static kcg_int32 noname;

  outC->_L4 = inputB;
  outC->_L3 = inputA;
  outC->_L5 = outC->_L3 == outC->_L4;
  outC->_L6 = !outC->_L5;
  outC->_L1 = index_in;
  noname = outC->_L1;
  outC->_L2 = acc_in;
  outC->acc_out = outC->_L2;
  outC->condition = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void GenerateIndexForMask_iterator_init_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L3 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->acc_out = kcg_lit_int32(0);
  outC->condition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GenerateIndexForMask_iterator_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

