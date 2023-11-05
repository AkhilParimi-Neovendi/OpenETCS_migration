/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_LookupPacketLoop_TM_lib_internal.h"

/* TM_lib_internal::RECV_LookupPacketLoop/ */
void RECV_LookupPacketLoop_TM_lib_internal(
  /* Index/ */
  kcg_int32 Index,
  /* HeaderInit/ */
  MetadataElement_T_Common_Types_Pkg *HeaderInit,
  /* Message_in/ */
  MetadataElement_T_Common_Types_Pkg *Message_in,
  /* ID_in/ */
  kcg_int32 ID_in,
  /* F_version/ */
  kcg_bool F_version,
  /* F_id/ */
  kcg_bool F_id,
  outC_RECV_LookupPacketLoop_TM_lib_internal *outC)
{
  static MetadataElement_T_Common_Types_Pkg noname;
  static kcg_int32 _1_noname;

  outC->_L34 = F_id;
  outC->_L33 = F_version;
  outC->_L3 = ID_in;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L4, Message_in);
  outC->_L27 = outC->_L4.nid_packet;
  /* _L32=(TM_lib_internal::T_Filter_Metadata#1)/ */
  T_Filter_Metadata_TM_lib_internal(
    outC->_L3,
    outC->_L27,
    outC->_L33,
    outC->_L34,
    &outC->Context_T_Filter_Metadata_1);
  outC->_L32 = outC->Context_T_Filter_Metadata_1.data_match;
  outC->_L31 = Index;
  _1_noname = outC->_L31;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L30, HeaderInit);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L30);
  outC->_L29 = !outC->_L32;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->HeaderFound, &outC->_L4);
  outC->Cont = outC->_L29;
}

#ifndef KCG_USER_DEFINED_INIT
void RECV_LookupPacketLoop_init_TM_lib_internal(
  outC_RECV_LookupPacketLoop_TM_lib_internal *outC)
{
  outC->_L34 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_lit_int32(0);
  outC->_L30.nid_packet = kcg_lit_int32(0);
  outC->_L30.q_dir = Q_DIR_Reverse;
  outC->_L30.valid = kcg_true;
  outC->_L30.startAddress = kcg_lit_int32(0);
  outC->_L30.endAddress = kcg_lit_int32(0);
  outC->_L29 = kcg_true;
  outC->_L27 = kcg_lit_int32(0);
  outC->_L4.nid_packet = kcg_lit_int32(0);
  outC->_L4.q_dir = Q_DIR_Reverse;
  outC->_L4.valid = kcg_true;
  outC->_L4.startAddress = kcg_lit_int32(0);
  outC->_L4.endAddress = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->HeaderFound.nid_packet = kcg_lit_int32(0);
  outC->HeaderFound.q_dir = Q_DIR_Reverse;
  outC->HeaderFound.valid = kcg_true;
  outC->HeaderFound.startAddress = kcg_lit_int32(0);
  outC->HeaderFound.endAddress = kcg_lit_int32(0);
  outC->Cont = kcg_true;
  /* _L32=(TM_lib_internal::T_Filter_Metadata#1)/ */
  T_Filter_Metadata_init_TM_lib_internal(&outC->Context_T_Filter_Metadata_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RECV_LookupPacketLoop_reset_TM_lib_internal(
  outC_RECV_LookupPacketLoop_TM_lib_internal *outC)
{
  /* _L32=(TM_lib_internal::T_Filter_Metadata#1)/ */
  T_Filter_Metadata_reset_TM_lib_internal(&outC->Context_T_Filter_Metadata_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RECV_LookupPacketLoop_TM_lib_internal.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

