/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_MessageData_TM_lib_internal.h"

/* TM_lib_internal::SEND_MessageData/ */
void SEND_MessageData_TM_lib_internal(
  /* StartAddress/ */
  kcg_int64 StartAddress,
  /* EndAddress/ */
  kcg_int64 EndAddress,
  /* DataIn/ */
  CompressedPacketData_T_Common_Types_Pkg *DataIn,
  /* DataElementIn/ */
  CompressedPacketData_T_Common_Types_Pkg *DataElementIn,
  outC_SEND_MessageData_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_int64 noname;

  outC->_L408 = EndAddress;
  /* _L415/ */
  for (idx = 0; idx < 500; idx++) {
    outC->_L415[idx] = outC->_L408;
  }
  outC->_L407 = StartAddress;
  /* _L414/ */
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L414[idx1] = outC->_L407;
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L404, DataElementIn);
  /* _L413/ */
  for (idx2 = 0; idx2 < 500; idx2++) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &outC->_L413[idx2],
      &outC->_L404);
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L1, DataIn);
  outC->_L403 = kcg_true;
  /* _L402= */
  if (outC->_L403) {
    /* _L402= */
    for (idx3 = 0; idx3 < 500; idx3++) {
      /* _L402=(TM_lib_internal::SEND_WriteBaliseDataElement#1)/ */
      SEND_WriteBaliseDataElement_TM_lib_internal(
        /* _L402= */(kcg_int64) idx3,
        outC->_L1[idx3],
        &outC->_L413[idx3],
        outC->_L414[idx3],
        outC->_L415[idx3],
        &outC->Context_SEND_WriteBaliseDataElement_1[idx3]);
      outC->_L406[idx3] = outC->Context_SEND_WriteBaliseDataElement_1[idx3].DataOut;
      outC->_L402 = /* _L402= */(kcg_int64) (idx3 + 1);
      /* _L402= */
      if (!outC->Context_SEND_WriteBaliseDataElement_1[idx3].Cont) {
        break;
      }
    }
  }
  else {
    outC->_L402 = kcg_lit_int64(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L402= */
  for (idx3 = /* _L402= */(kcg_size) outC->_L402; idx3 < 500; idx3++) {
    outC->_L406[idx3] = kcg_lit_int64(0);
  }
#endif /* KCG_MAPW_CPY */

  noname = outC->_L402;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->DataOut, &outC->_L406);
}

#ifndef KCG_USER_DEFINED_INIT
void SEND_MessageData_init_TM_lib_internal(
  outC_SEND_MessageData_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;

  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L415[idx1] = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L414[idx2] = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    for (idx3 = 0; idx3 < 500; idx3++) {
      outC->_L413[idx4][idx3] = kcg_lit_int64(0);
    }
  }
  outC->_L408 = kcg_lit_int64(0);
  outC->_L407 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L406[idx5] = kcg_lit_int64(0);
  }
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->_L404[idx6] = kcg_lit_int64(0);
  }
  outC->_L403 = kcg_true;
  outC->_L402 = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L1[idx7] = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 500; idx8++) {
    outC->DataOut[idx8] = kcg_lit_int64(0);
  }
  for (idx = 0; idx < 500; idx++) {
    /* _L402=(TM_lib_internal::SEND_WriteBaliseDataElement#1)/ */
    SEND_WriteBaliseDataElement_init_TM_lib_internal(
      &outC->Context_SEND_WriteBaliseDataElement_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void SEND_MessageData_reset_TM_lib_internal(
  outC_SEND_MessageData_TM_lib_internal *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 500; idx++) {
    /* _L402=(TM_lib_internal::SEND_WriteBaliseDataElement#1)/ */
    SEND_WriteBaliseDataElement_reset_TM_lib_internal(
      &outC->Context_SEND_WriteBaliseDataElement_1[idx]);
  }
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SEND_MessageData_TM_lib_internal.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

