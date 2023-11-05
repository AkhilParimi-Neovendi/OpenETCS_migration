/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int/ */
void CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables(
  /* dmi_m_icon_flashing_freq_ct/ */
  kcg_float32 dmi_m_icon_flashing_freq_ct,
  outC_CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables *outC)
{
  outC->_L6 = kcg_lit_int32(22);
  outC->_L5 = kcg_lit_float32(0.1);
  outC->_L4 = kcg_lit_float32(1.0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L1 = dmi_m_icon_flashing_freq_ct;
  /* _L2=(Utilities::Real_to_Int#1)/ */
  Real_to_Int_Utilities(
    outC->_L1,
    outC->_L5,
    outC->_L4,
    outC->_L6,
    outC->_L3,
    &outC->Context_Real_to_Int_1);
  outC->_L2 = outC->Context_Real_to_Int_1.int_out;
  outC->dmi_m_icon_flashing_freq_int = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_m_icon_flashing_freq_to_int_init_DATA_Variables(
  outC_CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables *outC)
{
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_float32(0.0);
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_float32(0.0);
  outC->dmi_m_icon_flashing_freq_int = kcg_lit_int32(0);
  /* _L2=(Utilities::Real_to_Int#1)/ */
  Real_to_Int_init_Utilities(&outC->Context_Real_to_Int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_m_icon_flashing_freq_to_int_reset_DATA_Variables(
  outC_CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables *outC)
{
  /* _L2=(Utilities::Real_to_Int#1)/ */
  Real_to_Int_reset_Utilities(&outC->Context_Real_to_Int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

