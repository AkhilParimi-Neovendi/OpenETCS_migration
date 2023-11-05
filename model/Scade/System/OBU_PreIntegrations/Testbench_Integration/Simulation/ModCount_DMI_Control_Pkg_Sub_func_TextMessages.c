/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ModCount_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::ModCount/ */
void ModCount_DMI_Control_Pkg_Sub_func_TextMessages(
  /* incre/ */
  kcg_bool incre,
  /* Modulo/ */
  kcg_int32 Modulo,
  /* initialValue/ */
  kcg_int32 initialValue,
  outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L10 = initialValue;
  /* _L4= */
  if (outC->init) {
    outC->_L4 = outC->_L10;
  }
  else {
    outC->_L4 = outC->_L5;
  }
  outC->_L6 = Modulo;
  outC->_L2 = kcg_lit_int32(1);
  outC->_L1 = outC->_L2 + outC->_L4;
  outC->_L8 = incre;
  /* _L3= */
  if (outC->_L8) {
    outC->_L3 = outC->_L1;
  }
  else {
    outC->_L3 = outC->_L4;
  }
  outC->_L5 = outC->_L3 % outC->_L6;
  outC->_L9 = /* _L9= */(kcg_float32) outC->_L5;
  outC->count = outC->_L9;
  outC->_L7 = outC->_L3 != outC->_L5;
  outC->rippleclock = outC->_L7;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void ModCount_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_float32(0.0);
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->count = kcg_lit_float32(0.0);
  outC->rippleclock = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void ModCount_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
}


void kcg_save_SV_ModCount_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  SV->Context__L5 = outC->_L5;
  SV->Context_init = outC->init;
}

void kcg_load_SV_ModCount_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *SV)
{
  outC->_L5 = SV->Context__L5;
  outC->init = SV->Context_init;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ModCount_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

