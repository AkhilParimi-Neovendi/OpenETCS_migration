/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "convert_cm_s_km_h_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::convert_cm_s_km_h/ */
void convert_cm_s_km_h_manage_DMI_Output_Pkg(
  /* cm_s/ */
  V_odometry_Type_Obu_BasicTypes_Pkg cm_s,
  outC_convert_cm_s_km_h_manage_DMI_Output_Pkg *outC)
{
  outC->_L10 = cm_s;
  outC->_L6 = kcg_lit_int64(1000);
  outC->_L4 = kcg_lit_int64(36);
  outC->_L1 = cm_s;
  outC->_L3 = outC->_L1 * outC->_L4;
  outC->_L5 = outC->_L3 / outC->_L6;
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7 = outC->_L1 >= outC->_L8;
  /* _L9= */
  if (outC->_L7) {
    outC->_L9 = outC->_L5;
  }
  else {
    outC->_L9 = outC->_L10;
  }
  outC->km_h = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void convert_cm_s_km_h_init_manage_DMI_Output_Pkg(
  outC_convert_cm_s_km_h_manage_DMI_Output_Pkg *outC)
{
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->km_h = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void convert_cm_s_km_h_reset_manage_DMI_Output_Pkg(
  outC_convert_cm_s_km_h_manage_DMI_Output_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** convert_cm_s_km_h_manage_DMI_Output_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

