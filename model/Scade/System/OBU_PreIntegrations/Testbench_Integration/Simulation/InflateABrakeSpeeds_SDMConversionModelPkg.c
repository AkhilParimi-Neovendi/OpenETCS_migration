/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InflateABrakeSpeeds_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::InflateABrakeSpeeds/ */
void InflateABrakeSpeeds_SDMConversionModelPkg(
  /* Akku/ */
  V_internal_Type_Obu_BasicTypes_Pkg Akku,
  /* V/ */
  V_internal_Type_Obu_BasicTypes_Pkg V,
  outC_InflateABrakeSpeeds_SDMConversionModelPkg *outC)
{
  outC->_L7 = Akku;
  outC->_L1 = V;
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = outC->_L1 > outC->_L5;
  /* _L6= */
  if (outC->_L4) {
    outC->_L6 = outC->_L1;
  }
  else {
    outC->_L6 = outC->_L7;
  }
  outC->Akku_out = outC->_L6;
  /* _L2=(SDM_Types_Pkg::TransformV_intToV_real#1)/ */
  TransformV_intToV_real_SDM_Types_Pkg(
    outC->_L6,
    &outC->Context_TransformV_intToV_real_1);
  outC->_L2 = outC->Context_TransformV_intToV_real_1.v_real;
  outC->Vint = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void InflateABrakeSpeeds_init_SDMConversionModelPkg(
  outC_InflateABrakeSpeeds_SDMConversionModelPkg *outC)
{
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_true;
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_int64(0);
  outC->Vint = kcg_lit_float64(0.0);
  outC->Akku_out = kcg_lit_int64(0);
  /* _L2=(SDM_Types_Pkg::TransformV_intToV_real#1)/ */
  TransformV_intToV_real_init_SDM_Types_Pkg(
    &outC->Context_TransformV_intToV_real_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InflateABrakeSpeeds_reset_SDMConversionModelPkg(
  outC_InflateABrakeSpeeds_SDMConversionModelPkg *outC)
{
  /* _L2=(SDM_Types_Pkg::TransformV_intToV_real#1)/ */
  TransformV_intToV_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformV_intToV_real_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InflateABrakeSpeeds_SDMConversionModelPkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

