/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_FindSlot_TM_lib_internal.h"

/* TM_lib_internal::SEND_FindSlot/ */
void SEND_FindSlot_TM_lib_internal(
  /* a/ */
  kcg_int32 a,
  /* MessageIn/ */
  MetadataElement_T_Common_Types_Pkg *MessageIn,
  /* EmptyHeader/ */
  MetadataElement_T_Common_Types_Pkg *EmptyHeader,
  outC_SEND_FindSlot_TM_lib_internal *outC)
{
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L2, MessageIn);
  outC->_L29 = outC->_L2.nid_packet;
  outC->_L28 = outC->_L2.endAddress;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L3, EmptyHeader);
  outC->_L27 = outC->_L3.nid_packet;
  outC->_L1 = a;
  outC->_L17 = outC->_L29 != outC->_L27;
  /* _L19= */
  if (outC->_L17) {
    outC->_L19 = outC->_L28;
  }
  else {
    outC->_L19 = outC->_L1;
  }
  outC->Acc = outC->_L19;
  outC->Cont = outC->_L17;
}

#ifndef KCG_USER_DEFINED_INIT
void SEND_FindSlot_init_TM_lib_internal(
  outC_SEND_FindSlot_TM_lib_internal *outC)
{
  outC->_L29 = kcg_lit_int32(0);
  outC->_L28 = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  outC->_L19 = kcg_lit_int32(0);
  outC->_L17 = kcg_true;
  outC->_L3.nid_packet = kcg_lit_int32(0);
  outC->_L3.q_dir = Q_DIR_Reverse;
  outC->_L3.valid = kcg_true;
  outC->_L3.startAddress = kcg_lit_int32(0);
  outC->_L3.endAddress = kcg_lit_int32(0);
  outC->_L2.nid_packet = kcg_lit_int32(0);
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.valid = kcg_true;
  outC->_L2.startAddress = kcg_lit_int32(0);
  outC->_L2.endAddress = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->Acc = kcg_lit_int32(0);
  outC->Cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void SEND_FindSlot_reset_TM_lib_internal(
  outC_SEND_FindSlot_TM_lib_internal *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SEND_FindSlot_TM_lib_internal.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

