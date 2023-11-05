/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ASCII_to_Char_iterator_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::ASCII_to_Char_iterator/ */
void ASCII_to_Char_iterator_DMI_Control_Pkg_Utils(
  /* ascii/ */
  kcg_int32 ascii,
  outC_ASCII_to_Char_iterator_DMI_Control_Pkg_Utils *outC)
{
  outC->_L12 = ascii;
  outC->_L3 = '1';
  outC->_L4 = '2';
  outC->_L1 = '3';
  outC->_L10 = '4';
  outC->_L9 = '5';
  outC->_L8 = '6';
  outC->_L11 = '7';
  outC->_L6 = '8';
  outC->_L2 = '9';
  outC->_L5 = '0';
  /* _L7= */
  switch (outC->_L12) {
    case kcg_lit_int32(49) :
      outC->_L7 = outC->_L3;
      break;
    case kcg_lit_int32(50) :
      outC->_L7 = outC->_L4;
      break;
    case kcg_lit_int32(51) :
      outC->_L7 = outC->_L1;
      break;
    case kcg_lit_int32(52) :
      outC->_L7 = outC->_L10;
      break;
    case kcg_lit_int32(53) :
      outC->_L7 = outC->_L9;
      break;
    case kcg_lit_int32(54) :
      outC->_L7 = outC->_L8;
      break;
    case kcg_lit_int32(55) :
      outC->_L7 = outC->_L11;
      break;
    case kcg_lit_int32(56) :
      outC->_L7 = outC->_L6;
      break;
    case kcg_lit_int32(57) :
      outC->_L7 = outC->_L2;
      break;
    default :
      outC->_L7 = outC->_L5;
      break;
  }
  outC->outChar = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void ASCII_to_Char_iterator_init_DMI_Control_Pkg_Utils(
  outC_ASCII_to_Char_iterator_DMI_Control_Pkg_Utils *outC)
{
  outC->_L12 = kcg_lit_int32(0);
  outC->_L1 = ' ';
  outC->_L2 = ' ';
  outC->_L3 = ' ';
  outC->_L4 = ' ';
  outC->_L5 = ' ';
  outC->_L6 = ' ';
  outC->_L7 = ' ';
  outC->_L8 = ' ';
  outC->_L9 = ' ';
  outC->_L10 = ' ';
  outC->_L11 = ' ';
  outC->outChar = ' ';
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ASCII_to_Char_iterator_reset_DMI_Control_Pkg_Utils(
  outC_ASCII_to_Char_iterator_DMI_Control_Pkg_Utils *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ASCII_to_Char_iterator_DMI_Control_Pkg_Utils.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

