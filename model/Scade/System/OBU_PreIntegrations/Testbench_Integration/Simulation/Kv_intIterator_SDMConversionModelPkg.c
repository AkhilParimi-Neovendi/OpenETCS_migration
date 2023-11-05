/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kv_intIterator_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kv_intIterator/ */
void Kv_intIterator_SDMConversionModelPkg(
  /* Kv_int/ */
  nvkvint_T_Packet_Types_Pkg *Kv_int,
  /* a/ */
  A_internal_Type_Obu_BasicTypes_Pkg a,
  /* a12/ */
  A_internal_Type_Obu_BasicTypes_Pkg a12,
  /* a23/ */
  A_internal_Type_Obu_BasicTypes_Pkg a23,
  /* P/ */
  kcg_bool P,
  outC_Kv_intIterator_SDMConversionModelPkg *outC)
{
  kcg_copy_nvkvint_T_Packet_Types_Pkg(&outC->_L1, Kv_int);
  outC->_L14 = outC->_L1.m_nvkvint12;
  /* _L17=(SDM_Types_Pkg::TransformA_realToA_int#1)/ */
  TransformA_realToA_int_SDM_Types_Pkg(
    outC->_L14,
    &outC->Context_TransformA_realToA_int_1);
  outC->_L17 = outC->Context_TransformA_realToA_int_1.acc_int;
  outC->_L2 = a;
  outC->_L3 = a12;
  outC->_L4 = a23;
  outC->_L15 = outC->_L1.m_nvkvint23;
  /* _L18=(SDM_Types_Pkg::TransformA_realToA_int#2)/ */
  TransformA_realToA_int_SDM_Types_Pkg(
    outC->_L15,
    &outC->Context_TransformA_realToA_int_2);
  outC->_L18 = outC->Context_TransformA_realToA_int_2.acc_int;
  /* _L16=(SDMConversionModelPkg::interpolateMfromA#2)/ */
  interpolateMfromA_SDMConversionModelPkg(
    outC->_L2,
    outC->_L3,
    outC->_L4,
    outC->_L17,
    outC->_L18,
    &outC->Context_interpolateMfromA_2);
  outC->_L16 = outC->Context_interpolateMfromA_2.m;
  outC->_L5 = P;
  /* _L6= */
  if (outC->_L5) {
    outC->_L6 = outC->_L16;
  }
  else {
    outC->_L6 = outC->_L17;
  }
  outC->m = outC->_L6;
  outC->_L13 = outC->_L1.v_nvkvint;
  outC->v = outC->_L13;
  outC->_L12 = outC->_L1.valid;
  outC->goOn = outC->_L12;
}

#ifndef KCG_USER_DEFINED_INIT
void Kv_intIterator_init_SDMConversionModelPkg(
  outC_Kv_intIterator_SDMConversionModelPkg *outC)
{
  outC->_L18 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L12 = kcg_true;
  outC->_L13 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_float32(0.0);
  outC->_L15 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.v_nvkvint = kcg_lit_int32(0);
  outC->_L1.m_nvkvint12 = kcg_lit_float32(0.0);
  outC->_L1.m_nvkvint23 = kcg_lit_float32(0.0);
  outC->v = kcg_lit_int32(0);
  outC->m = kcg_lit_int32(0);
  outC->goOn = kcg_true;
  /* _L16=(SDMConversionModelPkg::interpolateMfromA#2)/ */
  interpolateMfromA_init_SDMConversionModelPkg(
    &outC->Context_interpolateMfromA_2);
  /* _L18=(SDM_Types_Pkg::TransformA_realToA_int#2)/ */
  TransformA_realToA_int_init_SDM_Types_Pkg(
    &outC->Context_TransformA_realToA_int_2);
  /* _L17=(SDM_Types_Pkg::TransformA_realToA_int#1)/ */
  TransformA_realToA_int_init_SDM_Types_Pkg(
    &outC->Context_TransformA_realToA_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Kv_intIterator_reset_SDMConversionModelPkg(
  outC_Kv_intIterator_SDMConversionModelPkg *outC)
{
  /* _L16=(SDMConversionModelPkg::interpolateMfromA#2)/ */
  interpolateMfromA_reset_SDMConversionModelPkg(
    &outC->Context_interpolateMfromA_2);
  /* _L18=(SDM_Types_Pkg::TransformA_realToA_int#2)/ */
  TransformA_realToA_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformA_realToA_int_2);
  /* _L17=(SDM_Types_Pkg::TransformA_realToA_int#1)/ */
  TransformA_realToA_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformA_realToA_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Kv_intIterator_SDMConversionModelPkg.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

