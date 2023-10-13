/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables.h"

/* DATA::Variables::CAST_to_int_DMI_m_icon_flashing_freq/ */
void CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables(
  /* dmi_m_icon_flashing_freq_int/ */
  DMI_m_icon_flashing_freq_INT_T_DATA dmi_m_icon_flashing_freq_int,
  outC_CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables *outC)
{
  outC->_L8 = dmi_m_icon_flashing_freq_int;
  outC->_L6 = kcg_lit_int64(22);
  outC->_L5 = kcg_lit_float64(0.1);
  outC->_L4 = kcg_lit_float64(1.0);
  outC->_L3 = kcg_lit_int64(0);
  /* _L2=(Utilities::Int_to_Real#1)/ */
  Int_to_Real_Utilities(
    outC->_L8,
    outC->_L5,
    outC->_L4,
    outC->_L6,
    outC->_L3,
    &outC->Context_Int_to_Real_1);
  outC->_L2 = outC->Context_Int_to_Real_1.real_out;
  outC->dmi_m_icon_flashing_freq_ct = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_to_int_DMI_m_icon_flashing_freq_init_DATA_Variables(
  outC_CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables *outC)
{
  outC->_L8 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->dmi_m_icon_flashing_freq_ct = kcg_lit_float64(0.0);
  /* _L2=(Utilities::Int_to_Real#1)/ */
  Int_to_Real_init_Utilities(&outC->Context_Int_to_Real_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_to_int_DMI_m_icon_flashing_freq_reset_DATA_Variables(
  outC_CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables *outC)
{
  /* _L2=(Utilities::Int_to_Real#1)/ */
  Int_to_Real_reset_Utilities(&outC->Context_Int_to_Real_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

