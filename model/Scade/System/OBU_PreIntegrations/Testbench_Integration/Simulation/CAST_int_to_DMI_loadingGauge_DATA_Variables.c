/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_loadingGauge_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_loadingGauge/ */
void CAST_int_to_DMI_loadingGauge_DATA_Variables(
  /* dmi_loadingGauge_int/ */
  DMI_loadingGauge_INT_T_DATA dmi_loadingGauge_int,
  outC_CAST_int_to_DMI_loadingGauge_DATA_Variables *outC)
{
  outC->_L55 = dmi_loadingGauge_int;
  outC->_L54 = kcg_lit_int32(10);
  outC->_L50 = kcg_lit_int32(10);
  outC->_L52 = kcg_lit_int32(10);
  outC->_L43 = outC->_L55 / outC->_L52;
  outC->_L48 = outC->_L43 / outC->_L50;
  outC->_L53 = outC->_L48 % outC->_L50;
  outC->_L51 = outC->_L48 / outC->_L54;
  outC->_L49 = outC->_L51 % outC->_L54;
  outC->_L45 = kcg_lit_int32(10);
  outC->_L47 = outC->_L55 % outC->_L45;
  outC->_L46 = outC->_L43 % outC->_L52;
  outC->_L44.number = outC->_L47;
  outC->_L44.dig1 = outC->_L46;
  outC->_L44.dig2 = outC->_L53;
  outC->_L44.dig3 = outC->_L49;
  kcg_copy_DMI_loadingGauge_T_DMI_Types_Pkg(
    &outC->dmi_loadingGauge_ct,
    &outC->_L44);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_loadingGauge_init_DATA_Variables(
  outC_CAST_int_to_DMI_loadingGauge_DATA_Variables *outC)
{
  outC->_L55 = kcg_lit_int32(0);
  outC->_L43 = kcg_lit_int32(0);
  outC->_L44.number = kcg_lit_int32(0);
  outC->_L44.dig1 = kcg_lit_int32(0);
  outC->_L44.dig2 = kcg_lit_int32(0);
  outC->_L44.dig3 = kcg_lit_int32(0);
  outC->_L45 = kcg_lit_int32(0);
  outC->_L46 = kcg_lit_int32(0);
  outC->_L47 = kcg_lit_int32(0);
  outC->_L48 = kcg_lit_int32(0);
  outC->_L49 = kcg_lit_int32(0);
  outC->_L50 = kcg_lit_int32(0);
  outC->_L51 = kcg_lit_int32(0);
  outC->_L52 = kcg_lit_int32(0);
  outC->_L53 = kcg_lit_int32(0);
  outC->_L54 = kcg_lit_int32(0);
  outC->dmi_loadingGauge_ct.number = kcg_lit_int32(0);
  outC->dmi_loadingGauge_ct.dig1 = kcg_lit_int32(0);
  outC->dmi_loadingGauge_ct.dig2 = kcg_lit_int32(0);
  outC->dmi_loadingGauge_ct.dig3 = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_loadingGauge_reset_DATA_Variables(
  outC_CAST_int_to_DMI_loadingGauge_DATA_Variables *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_loadingGauge_DATA_Variables.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

