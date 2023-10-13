/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator/ */
void InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int64 index,
  /* Position/ */
  kcg_int64 Position,
  /* new_hh/ */
  kcg_float64 new_hh,
  /* new_mm/ */
  kcg_float64 new_mm,
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* mm/ */
  static kcg_float64 last_mm;
  /* hh/ */
  static kcg_float64 last_hh;

  last_mm = outC->mm;
  last_hh = outC->hh;
  outC->_L18 = new_mm;
  outC->_L17 = last_mm;
  outC->_L2 = Position;
  outC->_L1 = index;
  outC->_L4 = outC->_L1 == outC->_L2;
  /* _L6= */
  if (outC->_L4) {
    outC->_L16 = outC->_L18;
  }
  else {
    outC->_L16 = outC->_L17;
  }
  outC->mm = outC->_L16;
  outC->_L5 = !outC->_L4;
  outC->condition = outC->_L5;
  outC->_L15 = new_hh;
  outC->_L7 = last_hh;
  /* _L6= */
  if (outC->_L4) {
    outC->_L6 = outC->_L15;
  }
  else {
    outC->_L6 = outC->_L7;
  }
  outC->hh = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void InsertTime_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L18 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_true;
  outC->_L15 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_true;
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->condition = kcg_true;
  outC->hh = kcg_lit_float64(17.0);
  outC->mm = kcg_lit_float64(10.0);
}
#endif /* KCG_USER_DEFINED_INIT */


void InsertTime_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->hh = kcg_lit_float64(17.0);
  outC->mm = kcg_lit_float64(10.0);
}


void kcg_save_SV_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  SV->Context_mm = outC->mm;
  SV->Context_hh = outC->hh;
}

void kcg_load_SV_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *SV)
{
  outC->mm = SV->Context_mm;
  outC->hh = SV->Context_hh;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

