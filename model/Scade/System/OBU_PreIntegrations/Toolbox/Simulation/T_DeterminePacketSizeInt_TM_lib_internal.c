/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_DeterminePacketSizeInt_TM_lib_internal.h"

/* TM_lib_internal::T_DeterminePacketSizeInt/ */
void T_DeterminePacketSizeInt_TM_lib_internal(
  /* n_iter/ */
  kcg_int32 n_iter,
  /* size_body/ */
  kcg_int32 size_body,
  /* size_section/ */
  kcg_int32 size_section,
  outC_T_DeterminePacketSizeInt_TM_lib_internal *outC)
{
  outC->_L3 = size_section;
  outC->_L1 = n_iter;
  outC->_L6 = outC->_L1 * outC->_L3;
  outC->_L2 = size_body;
  outC->_L7 = outC->_L2 + outC->_L6;
  outC->p_size = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void T_DeterminePacketSizeInt_init_TM_lib_internal(
  outC_T_DeterminePacketSizeInt_TM_lib_internal *outC)
{
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->p_size = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void T_DeterminePacketSizeInt_reset_TM_lib_internal(
  outC_T_DeterminePacketSizeInt_TM_lib_internal *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** T_DeterminePacketSizeInt_TM_lib_internal.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

