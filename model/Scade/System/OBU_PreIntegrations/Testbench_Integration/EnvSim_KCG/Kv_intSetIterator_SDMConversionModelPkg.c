/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kv_intSetIterator_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kv_intSetIterator/ */
void Kv_intSetIterator_SDMConversionModelPkg(
  /* akku/ */
  kcg_bool akku,
  /* Kv_intSet/ */
  nvkvintset_T_Packet_Types_Pkg *Kv_intSet,
  /* CTrain/ */
  NC_TRAIN CTrain,
  outC_Kv_intSetIterator_SDMConversionModelPkg *outC)
{
  outC->_L13 = Q_NVKVINTSET_Conventional_passenger_trains;
  outC->_L14 = Q_NVKVINTSET_Freight_trains;
  outC->_L9 = CTrain;
  /* _L12= */
  switch (outC->_L9) {
    case NC_TRAIN_Passenger_train :
      outC->_L12 = outC->_L13;
      break;
    default :
      outC->_L12 = outC->_L14;
      break;
  }
  kcg_copy_nvkvintset_T_Packet_Types_Pkg(&outC->_L2, Kv_intSet);
  outC->_L15 = outC->_L2.q_nvkvintset;
  outC->_L16 = outC->_L15 == outC->_L12;
  outC->_L3 = outC->_L2.valid;
  outC->_L17 = outC->_L3 & outC->_L16;
  outC->_L8 = !outC->_L17;
  outC->_L1 = akku;
  outC->akku_out = outC->_L1;
  outC->goOn = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void Kv_intSetIterator_init_SDMConversionModelPkg(
  outC_Kv_intSetIterator_SDMConversionModelPkg *outC)
{
  static kcg_size idx;

  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = Q_NVKVINTSET_Freight_trains;
  outC->_L14 = Q_NVKVINTSET_Freight_trains;
  outC->_L13 = Q_NVKVINTSET_Freight_trains;
  outC->_L12 = Q_NVKVINTSET_Freight_trains;
  outC->_L9 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L8 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L2.a_nvp12 = kcg_lit_float64(0.0);
  outC->_L2.a_nvp23 = kcg_lit_float64(0.0);
  for (idx = 0; idx < 7; idx++) {
    outC->_L2.nvkintArray[idx].valid = kcg_true;
    outC->_L2.nvkintArray[idx].v_nvkvint = kcg_lit_int64(0);
    outC->_L2.nvkintArray[idx].m_nvkvint12 = kcg_lit_float64(0.0);
    outC->_L2.nvkintArray[idx].m_nvkvint23 = kcg_lit_float64(0.0);
  }
  outC->_L1 = kcg_true;
  outC->akku_out = kcg_true;
  outC->goOn = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Kv_intSetIterator_reset_SDMConversionModelPkg(
  outC_Kv_intSetIterator_SDMConversionModelPkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Kv_intSetIterator_SDMConversionModelPkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

