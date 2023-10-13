/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::ASCII_to_INTEGER_iterator/ */
void ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils(
  /* index/ */
  kcg_int64 index,
  /* acc/ */
  kcg_int64 acc,
  /* ascii/ */
  kcg_int64 ascii,
  /* power/ */
  kcg_int64 power,
  outC_ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils *outC)
{
  outC->_L26 = kcg_lit_int64(2);
  outC->_L18 = power;
  outC->_L25 = outC->_L18 - outC->_L26;
  outC->_L23 = kcg_lit_int64(10);
  outC->_L15 = index;
  outC->_L19 = outC->_L25 - outC->_L15;
  outC->_L17 = /* _L17=(mathext::PowerI#1)/ */
    PowerI_mathext(outC->_L23, outC->_L19);
  outC->_L3 = kcg_lit_int64(1);
  outC->_L4 = kcg_lit_int64(2);
  outC->_L5 = kcg_lit_int64(3);
  outC->_L6 = kcg_lit_int64(4);
  outC->_L7 = kcg_lit_int64(5);
  outC->_L8 = kcg_lit_int64(6);
  outC->_L9 = kcg_lit_int64(7);
  outC->_L11 = kcg_lit_int64(8);
  outC->_L10 = kcg_lit_int64(9);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L1 = ascii;
  /* _L2= */
  switch (outC->_L1) {
    case kcg_lit_int64(49) :
      outC->_L2 = outC->_L3;
      break;
    case kcg_lit_int64(50) :
      outC->_L2 = outC->_L4;
      break;
    case kcg_lit_int64(51) :
      outC->_L2 = outC->_L5;
      break;
    case kcg_lit_int64(52) :
      outC->_L2 = outC->_L6;
      break;
    case kcg_lit_int64(53) :
      outC->_L2 = outC->_L7;
      break;
    case kcg_lit_int64(54) :
      outC->_L2 = outC->_L8;
      break;
    case kcg_lit_int64(55) :
      outC->_L2 = outC->_L9;
      break;
    case kcg_lit_int64(56) :
      outC->_L2 = outC->_L11;
      break;
    case kcg_lit_int64(57) :
      outC->_L2 = outC->_L10;
      break;
    default :
      outC->_L2 = outC->_L12;
      break;
  }
  outC->_L24 = outC->_L2 * outC->_L17;
  outC->_L22 = kcg_lit_int64(0);
  outC->_L20 = outC->_L19 == outC->_L22;
  outC->_L21 = !outC->_L20;
  outC->condition = outC->_L21;
  outC->_L13 = acc;
  outC->_L16 = outC->_L13 + outC->_L24;
  outC->outInt = outC->_L16;
}

#ifndef KCG_USER_DEFINED_INIT
void ASCII_to_INTEGER_iterator_init_DMI_Control_Pkg_Utils(
  outC_ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils *outC)
{
  outC->_L26 = kcg_lit_int64(0);
  outC->_L25 = kcg_lit_int64(0);
  outC->_L24 = kcg_lit_int64(0);
  outC->_L23 = kcg_lit_int64(0);
  outC->_L22 = kcg_lit_int64(0);
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L17 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->outInt = kcg_lit_int64(0);
  outC->condition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ASCII_to_INTEGER_iterator_reset_DMI_Control_Pkg_Utils(
  outC_ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

