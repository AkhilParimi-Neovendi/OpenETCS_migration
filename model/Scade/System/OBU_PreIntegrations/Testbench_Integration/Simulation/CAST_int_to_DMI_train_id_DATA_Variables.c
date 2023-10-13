/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_train_id_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_train_id/ */
void CAST_int_to_DMI_train_id_DATA_Variables(
  /* dmi_train_id_int/ */
  DMI_train_id_INT_T_DATA dmi_train_id_int,
  outC_CAST_int_to_DMI_train_id_DATA_Variables *outC)
{
  outC->_L45 = kcg_lit_int64(10);
  outC->_L42 = dmi_train_id_int;
  outC->_L44 = outC->_L42 % outC->_L45;
  outC->_L48 = kcg_lit_int64(10);
  outC->_L47 = outC->_L42 / outC->_L48;
  outC->_L49 = outC->_L47 % outC->_L48;
  outC->_L50 = kcg_lit_int64(10);
  outC->_L51 = outC->_L47 / outC->_L50;
  outC->_L52 = outC->_L51 % outC->_L50;
  outC->_L54 = kcg_lit_int64(10);
  outC->_L55 = outC->_L51 / outC->_L54;
  outC->_L53 = outC->_L55 % outC->_L54;
  outC->_L58 = kcg_lit_int64(10);
  outC->_L56 = outC->_L55 / outC->_L58;
  outC->_L57 = outC->_L56 % outC->_L58;
  outC->_L61 = kcg_lit_int64(10);
  outC->_L60 = outC->_L56 / outC->_L61;
  outC->_L59 = outC->_L60 % outC->_L61;
  outC->_L46.number = outC->_L44;
  outC->_L46.dig1 = outC->_L49;
  outC->_L46.dig2 = outC->_L52;
  outC->_L46.dig3 = outC->_L53;
  outC->_L46.dig4 = outC->_L57;
  outC->_L46.dig5 = outC->_L59;
  kcg_copy_DMI_train_id_T_DMI_Types_Pkg(&outC->dmi_train_id_ct, &outC->_L46);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_train_id_init_DATA_Variables(
  outC_CAST_int_to_DMI_train_id_DATA_Variables *outC)
{
  outC->_L59 = kcg_lit_int64(0);
  outC->_L60 = kcg_lit_int64(0);
  outC->_L61 = kcg_lit_int64(0);
  outC->_L56 = kcg_lit_int64(0);
  outC->_L57 = kcg_lit_int64(0);
  outC->_L58 = kcg_lit_int64(0);
  outC->_L53 = kcg_lit_int64(0);
  outC->_L54 = kcg_lit_int64(0);
  outC->_L55 = kcg_lit_int64(0);
  outC->_L50 = kcg_lit_int64(0);
  outC->_L51 = kcg_lit_int64(0);
  outC->_L52 = kcg_lit_int64(0);
  outC->_L49 = kcg_lit_int64(0);
  outC->_L48 = kcg_lit_int64(0);
  outC->_L47 = kcg_lit_int64(0);
  outC->_L46.number = kcg_lit_int64(0);
  outC->_L46.dig1 = kcg_lit_int64(0);
  outC->_L46.dig2 = kcg_lit_int64(0);
  outC->_L46.dig3 = kcg_lit_int64(0);
  outC->_L46.dig4 = kcg_lit_int64(0);
  outC->_L46.dig5 = kcg_lit_int64(0);
  outC->_L45 = kcg_lit_int64(0);
  outC->_L44 = kcg_lit_int64(0);
  outC->_L42 = kcg_lit_int64(0);
  outC->dmi_train_id_ct.number = kcg_lit_int64(0);
  outC->dmi_train_id_ct.dig1 = kcg_lit_int64(0);
  outC->dmi_train_id_ct.dig2 = kcg_lit_int64(0);
  outC->dmi_train_id_ct.dig3 = kcg_lit_int64(0);
  outC->dmi_train_id_ct.dig4 = kcg_lit_int64(0);
  outC->dmi_train_id_ct.dig5 = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_train_id_reset_DATA_Variables(
  outC_CAST_int_to_DMI_train_id_DATA_Variables *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_train_id_DATA_Variables.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

