/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_train_id_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_train_id_to_int/ */
void CAST_DMI_train_id_to_int_DATA_Variables(
  /* dmi_train_id_ct/ */
  DMI_train_id_T_DMI_Types_Pkg *dmi_train_id_ct,
  outC_CAST_DMI_train_id_to_int_DATA_Variables *outC)
{
  static kcg_bool noname;

  kcg_copy_DMI_train_id_T_DMI_Types_Pkg(&outC->_L1, dmi_train_id_ct);
  outC->_L7 = outC->_L1.number;
  outC->_L40 = kcg_lit_int64(5);
  outC->_L39 = kcg_lit_int64(0);
  /* _L38=(Utilities::Int_Check#1)/ */
  Int_Check_Utilities(
    outC->_L7,
    outC->_L40,
    outC->_L39,
    &outC->Context_Int_Check_1);
  outC->_L38 = outC->Context_Int_Check_1.error;
  outC->_L2 = outC->_L1.dig5;
  /* _L32=(Utilities::BCD_to_Int#5)/ */
  BCD_to_Int_Utilities(outC->_L2, &outC->Context_BCD_to_Int_5);
  outC->_L32 = outC->Context_BCD_to_Int_5.int_out;
  outC->_L33 = outC->Context_BCD_to_Int_5.error;
  outC->_L3 = outC->_L1.dig4;
  /* _L30=(Utilities::BCD_to_Int#4)/ */
  BCD_to_Int_Utilities(outC->_L3, &outC->Context_BCD_to_Int_4);
  outC->_L30 = outC->Context_BCD_to_Int_4.int_out;
  outC->_L31 = outC->Context_BCD_to_Int_4.error;
  outC->_L4 = outC->_L1.dig3;
  /* _L28=(Utilities::BCD_to_Int#3)/ */
  BCD_to_Int_Utilities(outC->_L4, &outC->Context_BCD_to_Int_3);
  outC->_L28 = outC->Context_BCD_to_Int_3.int_out;
  outC->_L29 = outC->Context_BCD_to_Int_3.error;
  outC->_L5 = outC->_L1.dig2;
  /* _L25=(Utilities::BCD_to_Int#2)/ */
  BCD_to_Int_Utilities(outC->_L5, &outC->Context_BCD_to_Int_2);
  outC->_L25 = outC->Context_BCD_to_Int_2.int_out;
  outC->_L26 = outC->Context_BCD_to_Int_2.error;
  outC->_L6 = outC->_L1.dig1;
  /* _L23=(Utilities::BCD_to_Int#1)/ */
  BCD_to_Int_Utilities(outC->_L6, &outC->Context_BCD_to_Int_1);
  outC->_L23 = outC->Context_BCD_to_Int_1.int_out;
  outC->_L24 = outC->Context_BCD_to_Int_1.error;
  outC->_L37 = outC->_L24 | outC->_L26 | outC->_L29 | outC->_L31 | outC->_L33 |
    outC->_L38;
  outC->error = outC->_L37;
  outC->_L41 = outC->error;
  noname = outC->_L41;
  outC->_L17 = kcg_lit_int64(100000);
  outC->_L16 = outC->_L32 * outC->_L17;
  outC->_L15 = kcg_lit_int64(10000);
  outC->_L14 = outC->_L30 * outC->_L15;
  outC->_L13 = kcg_lit_int64(1000);
  outC->_L12 = outC->_L28 * outC->_L13;
  outC->_L11 = kcg_lit_int64(100);
  outC->_L10 = outC->_L25 * outC->_L11;
  outC->_L9 = kcg_lit_int64(10);
  outC->_L8 = outC->_L23 * outC->_L9;
  outC->_L22 = outC->_L7 + outC->_L8 + outC->_L10 + outC->_L12 + outC->_L14 +
    outC->_L16;
  outC->dmi_train_id_int = outC->_L22;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_train_id_to_int_init_DATA_Variables(
  outC_CAST_DMI_train_id_to_int_DATA_Variables *outC)
{
  outC->_L41 = kcg_true;
  outC->_L40 = kcg_lit_int64(0);
  outC->_L39 = kcg_lit_int64(0);
  outC->_L38 = kcg_true;
  outC->_L37 = kcg_true;
  outC->_L32 = kcg_lit_int64(0);
  outC->_L33 = kcg_true;
  outC->_L30 = kcg_lit_int64(0);
  outC->_L31 = kcg_true;
  outC->_L28 = kcg_lit_int64(0);
  outC->_L29 = kcg_true;
  outC->_L25 = kcg_lit_int64(0);
  outC->_L26 = kcg_true;
  outC->_L23 = kcg_lit_int64(0);
  outC->_L24 = kcg_true;
  outC->_L22 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L17 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L1.number = kcg_lit_int64(0);
  outC->_L1.dig1 = kcg_lit_int64(0);
  outC->_L1.dig2 = kcg_lit_int64(0);
  outC->_L1.dig3 = kcg_lit_int64(0);
  outC->_L1.dig4 = kcg_lit_int64(0);
  outC->_L1.dig5 = kcg_lit_int64(0);
  outC->error = kcg_true;
  outC->dmi_train_id_int = kcg_lit_int64(0);
  /* _L23=(Utilities::BCD_to_Int#1)/ */
  BCD_to_Int_init_Utilities(&outC->Context_BCD_to_Int_1);
  /* _L25=(Utilities::BCD_to_Int#2)/ */
  BCD_to_Int_init_Utilities(&outC->Context_BCD_to_Int_2);
  /* _L28=(Utilities::BCD_to_Int#3)/ */
  BCD_to_Int_init_Utilities(&outC->Context_BCD_to_Int_3);
  /* _L30=(Utilities::BCD_to_Int#4)/ */
  BCD_to_Int_init_Utilities(&outC->Context_BCD_to_Int_4);
  /* _L32=(Utilities::BCD_to_Int#5)/ */
  BCD_to_Int_init_Utilities(&outC->Context_BCD_to_Int_5);
  /* _L38=(Utilities::Int_Check#1)/ */
  Int_Check_init_Utilities(&outC->Context_Int_Check_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_train_id_to_int_reset_DATA_Variables(
  outC_CAST_DMI_train_id_to_int_DATA_Variables *outC)
{
  /* _L23=(Utilities::BCD_to_Int#1)/ */
  BCD_to_Int_reset_Utilities(&outC->Context_BCD_to_Int_1);
  /* _L25=(Utilities::BCD_to_Int#2)/ */
  BCD_to_Int_reset_Utilities(&outC->Context_BCD_to_Int_2);
  /* _L28=(Utilities::BCD_to_Int#3)/ */
  BCD_to_Int_reset_Utilities(&outC->Context_BCD_to_Int_3);
  /* _L30=(Utilities::BCD_to_Int#4)/ */
  BCD_to_Int_reset_Utilities(&outC->Context_BCD_to_Int_4);
  /* _L32=(Utilities::BCD_to_Int#5)/ */
  BCD_to_Int_reset_Utilities(&outC->Context_BCD_to_Int_5);
  /* _L38=(Utilities::Int_Check#1)/ */
  Int_Check_reset_Utilities(&outC->Context_Int_Check_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_train_id_to_int_DATA_Variables.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

