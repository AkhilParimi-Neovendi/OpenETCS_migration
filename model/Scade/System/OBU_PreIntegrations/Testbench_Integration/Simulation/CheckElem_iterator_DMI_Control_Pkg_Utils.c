/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckElem_iterator_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::CheckElem_iterator/ */
void CheckElem_iterator_DMI_Control_Pkg_Utils(
  /* acc/ */
  kcg_bool acc,
  /* elem/ */
  kcg_int64 elem,
  /* key/ */
  kcg_int64 key,
  outC_CheckElem_iterator_DMI_Control_Pkg_Utils *outC)
{
  static kcg_bool noname;

  outC->_L8 = kcg_false;
  outC->_L7 = kcg_true;
  outC->_L2 = key;
  outC->_L1 = elem;
  outC->_L4 = outC->_L1 == outC->_L2;
  /* _L6= */
  if (outC->_L4) {
    outC->_L6 = outC->_L7;
  }
  else {
    outC->_L6 = outC->_L8;
  }
  outC->_L5 = !outC->_L4;
  outC->condition = outC->_L5;
  outC->_L3 = acc;
  noname = outC->_L3;
  outC->result = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void CheckElem_iterator_init_DMI_Control_Pkg_Utils(
  outC_CheckElem_iterator_DMI_Control_Pkg_Utils *outC)
{
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->result = kcg_true;
  outC->condition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckElem_iterator_reset_DMI_Control_Pkg_Utils(
  outC_CheckElem_iterator_DMI_Control_Pkg_Utils *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckElem_iterator_DMI_Control_Pkg_Utils.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

