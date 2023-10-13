/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "m_s_To_km_h_Toolbox_Converters.h"

/* Toolbox::Converters::m_s_To_km_h/ */
void m_s_To_km_h_Toolbox_Converters(
  /* m_s/ */
  kcg_float64 m_s,
  outC_m_s_To_km_h_Toolbox_Converters *outC)
{
  outC->_L3 = kcg_lit_float64(3.6);
  outC->_L1 = m_s;
  outC->_L2 = outC->_L1 * outC->_L3;
  outC->km_h = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void m_s_To_km_h_init_Toolbox_Converters(
  outC_m_s_To_km_h_Toolbox_Converters *outC)
{
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->km_h = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void m_s_To_km_h_reset_Toolbox_Converters(
  outC_m_s_To_km_h_Toolbox_Converters *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** m_s_To_km_h_Toolbox_Converters.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

