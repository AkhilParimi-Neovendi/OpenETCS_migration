/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "packetValidBasics_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::packetValidBasics/ */
void packetValidBasics_xdebugSupport_Pkg(
  /* accu/ */
  kcg_bool accu,
  /* element/ */
  MetadataElement_T_Common_Types_Pkg *element,
  /* which_ID/ */
  NID_PACKET which_ID,
  outC_packetValidBasics_xdebugSupport_Pkg *outC)
{
  static kcg_bool noname;

  outC->_L16 = kcg_lit_int64(0);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L1, element);
  outC->_L14 = outC->_L1.nid_packet;
  outC->_L15 = outC->_L14 != outC->_L16;
  outC->_L6 = outC->_L1.nid_packet;
  /* _L13=(TM::T_extract_nid_packet_from_metadata_selector#1)/ */
  T_extract_nid_packet_from_metadata_selector_TM(
    outC->_L6,
    &outC->Context_T_extract_nid_packet_from_metadata_selector_1);
  outC->_L13 =
    outC->Context_T_extract_nid_packet_from_metadata_selector_1.nid_packet;
  outC->_L12 = accu;
  noname = outC->_L12;
  outC->_L7 = which_ID;
  outC->_L8 = outC->_L13 == outC->_L7;
  outC->_L2 = outC->_L1.valid;
  outC->_L9 = outC->_L2 & outC->_L8;
  outC->_L10 = !outC->_L9;
  outC->_L11 = outC->_L15 & outC->_L10;
  outC->packtIsValid = outC->_L9;
  outC->_1_continue = outC->_L11;
}

#ifndef KCG_USER_DEFINED_INIT
void packetValidBasics_init_xdebugSupport_Pkg(
  outC_packetValidBasics_xdebugSupport_Pkg *outC)
{
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L2 = kcg_true;
  outC->_L1.nid_packet = kcg_lit_int64(0);
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.valid = kcg_true;
  outC->_L1.startAddress = kcg_lit_int64(0);
  outC->_L1.endAddress = kcg_lit_int64(0);
  outC->packtIsValid = kcg_true;
  outC->_1_continue = kcg_true;
  /* _L13=(TM::T_extract_nid_packet_from_metadata_selector#1)/ */
  T_extract_nid_packet_from_metadata_selector_init_TM(
    &outC->Context_T_extract_nid_packet_from_metadata_selector_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void packetValidBasics_reset_xdebugSupport_Pkg(
  outC_packetValidBasics_xdebugSupport_Pkg *outC)
{
  /* _L13=(TM::T_extract_nid_packet_from_metadata_selector#1)/ */
  T_extract_nid_packet_from_metadata_selector_reset_TM(
    &outC->Context_T_extract_nid_packet_from_metadata_selector_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** packetValidBasics_xdebugSupport_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

