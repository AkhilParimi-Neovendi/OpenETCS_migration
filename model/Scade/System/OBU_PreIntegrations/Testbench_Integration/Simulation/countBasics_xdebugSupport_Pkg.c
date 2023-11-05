/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countBasics_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::countBasics/ */
void countBasics_xdebugSupport_Pkg(
  /* accu/ */
  kcg_int32 accu,
  /* element/ */
  MetadataElement_T_Common_Types_Pkg *element,
  outC_countBasics_xdebugSupport_Pkg *outC)
{
  outC->_L9 = kcg_lit_int32(0);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L1, element);
  outC->_L8 = outC->_L1.nid_packet;
  outC->_L10 = outC->_L8 > outC->_L9;
  outC->_L7 = kcg_lit_int32(1);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L2 = outC->_L1.valid;
  /* _L6= */
  if (outC->_L2) {
    outC->_L6 = outC->_L7;
  }
  else {
    outC->_L6 = outC->_L5;
  }
  outC->_L3 = accu;
  outC->_L4 = outC->_L3 + outC->_L6;
  outC->count = outC->_L4;
  outC->_1_continue = outC->_L10;
}

#ifndef KCG_USER_DEFINED_INIT
void countBasics_init_xdebugSupport_Pkg(
  outC_countBasics_xdebugSupport_Pkg *outC)
{
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->_L1.nid_packet = kcg_lit_int32(0);
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.valid = kcg_true;
  outC->_L1.startAddress = kcg_lit_int32(0);
  outC->_L1.endAddress = kcg_lit_int32(0);
  outC->count = kcg_lit_int32(0);
  outC->_1_continue = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void countBasics_reset_xdebugSupport_Pkg(
  outC_countBasics_xdebugSupport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** countBasics_xdebugSupport_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

