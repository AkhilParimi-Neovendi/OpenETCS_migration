/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "packetValid_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::packetValid/ */
void packetValid_xdebugSupport_Pkg(
  /* packetHeader/ */
  Metadata_T_Common_Types_Pkg *packetHeader,
  /* which_ID/ */
  NID_PACKET which_ID,
  outC_packetValid_xdebugSupport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_bool acc;
  static kcg_size idx1;
  static kcg_int32 noname;

  outC->_L16 = kcg_true;
  outC->_L13 = which_ID;
  /* _L15/ */
  for (idx = 0; idx < 30; idx++) {
    outC->_L15[idx] = outC->_L13;
  }
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L1, packetHeader);
  outC->_L7 = kcg_true;
  outC->_L3 = outC->_L16;
  /* _L5= */
  if (outC->_L7) {
    /* _L5= */
    for (idx1 = 0; idx1 < 30; idx1++) {
      acc = outC->_L3;
      /* _L5=(xdebugSupport_Pkg::packetValidBasics#1)/ */
      packetValidBasics_xdebugSupport_Pkg(
        acc,
        &outC->_L1[idx1],
        outC->_L15[idx1],
        &outC->Context_packetValidBasics_1[idx1]);
      outC->_L3 = outC->Context_packetValidBasics_1[idx1].packtIsValid;
      outC->_L5 = /* _L5= */(kcg_int32) (idx1 + 1);
      /* _L5= */
      if (!outC->Context_packetValidBasics_1[idx1]._1_continue) {
        break;
      }
    }
  }
  else {
    outC->_L5 = kcg_lit_int32(0);
  }
  noname = outC->_L5;
  outC->isValid = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void packetValid_init_xdebugSupport_Pkg(
  outC_packetValid_xdebugSupport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L16 = kcg_true;
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L15[idx1] = kcg_lit_int32(0);
  }
  outC->_L13 = kcg_lit_int32(0);
  outC->_L7 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L3 = kcg_true;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L1[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L1[idx2].q_dir = Q_DIR_Reverse;
    outC->_L1[idx2].valid = kcg_true;
    outC->_L1[idx2].startAddress = kcg_lit_int32(0);
    outC->_L1[idx2].endAddress = kcg_lit_int32(0);
  }
  outC->isValid = kcg_true;
  for (idx = 0; idx < 30; idx++) {
    /* _L5=(xdebugSupport_Pkg::packetValidBasics#1)/ */
    packetValidBasics_init_xdebugSupport_Pkg(
      &outC->Context_packetValidBasics_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void packetValid_reset_xdebugSupport_Pkg(
  outC_packetValid_xdebugSupport_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 30; idx++) {
    /* _L5=(xdebugSupport_Pkg::packetValidBasics#1)/ */
    packetValidBasics_reset_xdebugSupport_Pkg(
      &outC->Context_packetValidBasics_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** packetValid_xdebugSupport_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

