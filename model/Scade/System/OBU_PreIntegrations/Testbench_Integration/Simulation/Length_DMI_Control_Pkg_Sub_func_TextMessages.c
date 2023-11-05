/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Length_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::Length/ */
void Length_DMI_Control_Pkg_Sub_func_TextMessages(
  /* array_mm_local/ */
  array_float32_5 *array_mm_local,
  outC_Length_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L78 = kcg_lit_int32(0);
  outC->_L77 = kcg_lit_int32(5);
  outC->_L69 = kcg_lit_float32(-1.0);
  kcg_copy_array_float32_5(&outC->_L65, array_mm_local);
  outC->_L75 = outC->_L65[4];
  outC->_L76 = outC->_L75 != outC->_L69;
  outC->_L70 = outC->_L65[0];
  outC->_L74 = outC->_L70 != outC->_L69;
  outC->_L68 = outC->_L65[1];
  outC->_L73 = outC->_L68 != outC->_L69;
  outC->_L71 = outC->_L65[2];
  outC->_L72 = outC->_L71 != outC->_L69;
  outC->_L64 = outC->_L65[3];
  outC->_L66 = outC->_L64 != outC->_L69;
  outC->_L67 = outC->_L74 & outC->_L73 & outC->_L72 & outC->_L66 & outC->_L76;
  /* _L63= */
  if (outC->_L67) {
    outC->_L63 = outC->_L77;
  }
  else {
    outC->_L63 = outC->_L78;
  }
  outC->_L62 = kcg_lit_int32(4);
  kcg_copy_array_float32_5(&outC->_L60, array_mm_local);
  outC->_L61 = outC->_L60[0];
  outC->_L59 = outC->_L60[1];
  outC->_L52 = kcg_lit_float32(-1.0);
  outC->_L53 = outC->_L60[4];
  outC->_L55 = outC->_L53 == outC->_L52;
  outC->_L49 = outC->_L60[3];
  outC->_L57 = outC->_L49 != outC->_L52;
  outC->_L50 = outC->_L60[2];
  outC->_L56 = outC->_L50 != outC->_L52;
  outC->_L54 = outC->_L59 != outC->_L52;
  outC->_L51 = outC->_L61 != outC->_L52;
  outC->_L58 = outC->_L51 & outC->_L54 & outC->_L56 & outC->_L57 & outC->_L55;
  /* _L48= */
  if (outC->_L58) {
    outC->_L48 = outC->_L62;
  }
  else {
    outC->_L48 = outC->_L63;
  }
  outC->_L47 = kcg_lit_int32(3);
  outC->_L37 = kcg_lit_float32(-1.0);
  kcg_copy_array_float32_5(&outC->_L43, array_mm_local);
  outC->_L33 = outC->_L43[4];
  outC->_L34 = outC->_L33 == outC->_L37;
  outC->_L35 = outC->_L43[3];
  outC->_L45 = outC->_L35 == outC->_L37;
  outC->_L38 = outC->_L43[2];
  outC->_L41 = outC->_L38 != outC->_L37;
  outC->_L36 = outC->_L43[1];
  outC->_L40 = outC->_L36 != outC->_L37;
  outC->_L39 = outC->_L43[0];
  outC->_L42 = outC->_L39 != outC->_L37;
  outC->_L44 = outC->_L42 & outC->_L40 & outC->_L41 & outC->_L45 & outC->_L34;
  /* _L46= */
  if (outC->_L44) {
    outC->_L46 = outC->_L47;
  }
  else {
    outC->_L46 = outC->_L48;
  }
  outC->_L32 = kcg_lit_int32(2);
  outC->_L20 = kcg_lit_float32(-1.0);
  kcg_copy_array_float32_5(&outC->_L22, array_mm_local);
  outC->_L30 = outC->_L22[2];
  outC->_L31 = outC->_L30 == outC->_L20;
  outC->_L28 = outC->_L22[4];
  outC->_L29 = outC->_L28 == outC->_L20;
  outC->_L27 = outC->_L22[0];
  outC->_L23 = outC->_L22[1];
  outC->_L26 = outC->_L23 != outC->_L20;
  outC->_L25 = outC->_L27 != outC->_L20;
  outC->_L21 = outC->_L22[3];
  outC->_L19 = outC->_L21 == outC->_L20;
  outC->_L24 = outC->_L25 & outC->_L26 & outC->_L31 & outC->_L19 & outC->_L29;
  /* _L18= */
  if (outC->_L24) {
    outC->_L18 = outC->_L32;
  }
  else {
    outC->_L18 = outC->_L46;
  }
  outC->_L17 = kcg_lit_int32(1);
  outC->_L4 = kcg_lit_float32(-1.0);
  kcg_copy_array_float32_5(&outC->_L1, array_mm_local);
  outC->_L8 = outC->_L1[4];
  outC->_L15 = outC->_L8 == outC->_L4;
  outC->_L7 = outC->_L1[3];
  outC->_L14 = outC->_L7 == outC->_L4;
  outC->_L6 = outC->_L1[2];
  outC->_L13 = outC->_L6 == outC->_L4;
  outC->_L5 = outC->_L1[1];
  outC->_L12 = outC->_L5 == outC->_L4;
  outC->_L2 = outC->_L1[0];
  outC->_L3 = outC->_L2 != outC->_L4;
  outC->_L11 = outC->_L3 & outC->_L12 & outC->_L13 & outC->_L14 & outC->_L15;
  /* _L9= */
  if (outC->_L11) {
    outC->_L9 = outC->_L17;
  }
  else {
    outC->_L9 = outC->_L18;
  }
  outC->length = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void Length_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_Length_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L78 = kcg_lit_int32(0);
  outC->_L77 = kcg_lit_int32(0);
  outC->_L76 = kcg_true;
  outC->_L75 = kcg_lit_float32(0.0);
  outC->_L64 = kcg_lit_float32(0.0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L65[idx] = kcg_lit_float32(0.0);
  }
  outC->_L66 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L68 = kcg_lit_float32(0.0);
  outC->_L69 = kcg_lit_float32(0.0);
  outC->_L70 = kcg_lit_float32(0.0);
  outC->_L71 = kcg_lit_float32(0.0);
  outC->_L72 = kcg_true;
  outC->_L73 = kcg_true;
  outC->_L74 = kcg_true;
  outC->_L63 = kcg_lit_int32(0);
  outC->_L62 = kcg_lit_int32(0);
  outC->_L49 = kcg_lit_float32(0.0);
  outC->_L50 = kcg_lit_float32(0.0);
  outC->_L51 = kcg_true;
  outC->_L52 = kcg_lit_float32(0.0);
  outC->_L53 = kcg_lit_float32(0.0);
  outC->_L54 = kcg_true;
  outC->_L55 = kcg_true;
  outC->_L56 = kcg_true;
  outC->_L57 = kcg_true;
  outC->_L58 = kcg_true;
  outC->_L59 = kcg_lit_float32(0.0);
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L60[idx1] = kcg_lit_float32(0.0);
  }
  outC->_L61 = kcg_lit_float32(0.0);
  outC->_L48 = kcg_lit_int32(0);
  outC->_L47 = kcg_lit_int32(0);
  outC->_L46 = kcg_lit_int32(0);
  outC->_L33 = kcg_lit_float32(0.0);
  outC->_L34 = kcg_true;
  outC->_L35 = kcg_lit_float32(0.0);
  outC->_L36 = kcg_lit_float32(0.0);
  outC->_L37 = kcg_lit_float32(0.0);
  outC->_L38 = kcg_lit_float32(0.0);
  outC->_L39 = kcg_lit_float32(0.0);
  outC->_L40 = kcg_true;
  outC->_L41 = kcg_true;
  outC->_L42 = kcg_true;
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L43[idx2] = kcg_lit_float32(0.0);
  }
  outC->_L44 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L32 = kcg_lit_int32(0);
  outC->_L19 = kcg_true;
  outC->_L20 = kcg_lit_float32(0.0);
  outC->_L21 = kcg_lit_float32(0.0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L22[idx3] = kcg_lit_float32(0.0);
  }
  outC->_L23 = kcg_lit_float32(0.0);
  outC->_L24 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L27 = kcg_lit_float32(0.0);
  outC->_L28 = kcg_lit_float32(0.0);
  outC->_L29 = kcg_true;
  outC->_L30 = kcg_lit_float32(0.0);
  outC->_L31 = kcg_true;
  outC->_L18 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_float32(0.0);
  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L5 = kcg_lit_float32(0.0);
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_float32(0.0);
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L1[idx4] = kcg_lit_float32(0.0);
  }
  outC->length = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void Length_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_Length_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Length_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

