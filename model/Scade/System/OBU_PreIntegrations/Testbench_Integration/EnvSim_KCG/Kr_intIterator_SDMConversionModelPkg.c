/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kr_intIterator_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kr_intIterator/ */
void Kr_intIterator_SDMConversionModelPkg(
  /* m_last/ */
  kcg_int32 m_last,
  /* Kr_int/ */
  nvkrint_T_Packet_Types_Pkg *Kr_int,
  /* L/ */
  L_internal_Type_Obu_BasicTypes_Pkg L,
  outC_Kr_intIterator_SDMConversionModelPkg *outC)
{
  kcg_copy_nvkrint_T_Packet_Types_Pkg(&outC->_L1, Kr_int);
  outC->_L4 = outC->_L1.m_nvkrint;
  /* _L16=(SDM_Types_Pkg::TransformA_realToA_int#1)/ */
  TransformA_realToA_int_SDM_Types_Pkg(
    outC->_L4,
    &outC->Context_TransformA_realToA_int_1);
  outC->_L16 = outC->Context_TransformA_realToA_int_1.acc_int;
  outC->_L8 = L;
  outC->_L3 = outC->_L1.l_nvkrint;
  /* _L11=(SDMConversionModelPkg::LengthLargerThanLKr#1)/ */
  LengthLargerThanLKr_SDMConversionModelPkg(
    outC->_L8,
    outC->_L3,
    &outC->Context_LengthLargerThanLKr_1);
  outC->_L11 = outC->Context_LengthLargerThanLKr_1.isLarger;
  outC->_L2 = outC->_L1.valid;
  outC->_L12 = outC->_L2 & outC->_L11;
  outC->_L10 = m_last;
  /* _L9= */
  if (outC->_L12) {
    outC->_L9 = outC->_L16;
  }
  else {
    outC->_L9 = outC->_L10;
  }
  outC->m_now = outC->_L9;
  outC->goOn = outC->_L12;
}

#ifndef KCG_USER_DEFINED_INIT
void Kr_intIterator_init_SDMConversionModelPkg(
  outC_Kr_intIterator_SDMConversionModelPkg *outC)
{
  outC->_L16 = kcg_lit_int32(0);
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->_L3 = L_NVKRINT_0m;
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L1.valid = kcg_true;
  outC->_L1.l_nvkrint = L_NVKRINT_0m;
  outC->_L1.m_nvkrint = kcg_lit_float32(0.0);
  outC->m_now = kcg_lit_int32(0);
  outC->goOn = kcg_true;
  /* _L11=(SDMConversionModelPkg::LengthLargerThanLKr#1)/ */
  LengthLargerThanLKr_init_SDMConversionModelPkg(
    &outC->Context_LengthLargerThanLKr_1);
  /* _L16=(SDM_Types_Pkg::TransformA_realToA_int#1)/ */
  TransformA_realToA_int_init_SDM_Types_Pkg(
    &outC->Context_TransformA_realToA_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Kr_intIterator_reset_SDMConversionModelPkg(
  outC_Kr_intIterator_SDMConversionModelPkg *outC)
{
  /* _L11=(SDMConversionModelPkg::LengthLargerThanLKr#1)/ */
  LengthLargerThanLKr_reset_SDMConversionModelPkg(
    &outC->Context_LengthLargerThanLKr_1);
  /* _L16=(SDM_Types_Pkg::TransformA_realToA_int#1)/ */
  TransformA_realToA_int_reset_SDM_Types_Pkg(
    &outC->Context_TransformA_realToA_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Kr_intIterator_SDMConversionModelPkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

