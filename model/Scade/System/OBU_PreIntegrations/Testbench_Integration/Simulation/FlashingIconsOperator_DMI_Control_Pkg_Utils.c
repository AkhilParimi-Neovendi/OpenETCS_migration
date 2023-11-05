/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FlashingIconsOperator_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::FlashingIconsOperator/ */
void FlashingIconsOperator_DMI_Control_Pkg_Utils(
  /* Input3/ */
  kcg_bool Input3,
  /* Input5/ */
  kcg_bool Input5,
  /* Input6/ */
  kcg_float32 Input6,
  /* SystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* Input7/ */
  kcg_float32 Input7,
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC)
{
  static kcg_bool tmp;
  static kcg_bool tmp1;
  static kcg_bool op_call;
  static kcg_bool _2_op_call;
  static kcg_bool noname;

  outC->_L10 = kcg_lit_float32(0.0);
  outC->_L7 = Input7;
  outC->_L14 = outC->_L7 != outC->_L10;
  outC->every = outC->_L14;
  outC->_L6 = SystemTime;
  outC->_L5 = Input6;
  outC->_L11 = /* _L11= */(kcg_int32) outC->_L5;
  if (outC->every) {
    /* _L12=(DMI_Control_Pkg::Utils::FlashingOperator#1)/ */
    FlashingOperator_DMI_Control_Pkg_Utils(
      outC->_L14,
      outC->_L6,
      outC->_L11,
      &outC->Context_FlashingOperator_1);
    _2_op_call = outC->Context_FlashingOperator_1.flashigOut;
    op_call = outC->Context_FlashingOperator_1.active;
    outC->_L12 = _2_op_call;
    outC->_L13 = op_call;
  }
  else {
    /* _L12= */
    if (outC->init) {
      tmp = kcg_false;
    }
    else {
      tmp = outC->_L12;
    }
    outC->_L12 = tmp;
    /* _L12= */
    if (outC->init) {
      tmp1 = kcg_false;
    }
    else {
      tmp1 = outC->_L13;
    }
    outC->_L13 = tmp1;
  }
  noname = outC->_L13;
  outC->_L4 = Input5;
  outC->_L9 = outC->_L12 & outC->_L4;
  outC->_L2 = Input3;
  outC->_L8 = outC->_L12 & outC->_L2;
  outC->yellowBorderC1Area_toDisplay = outC->_L8;
  outC->yellowBorderBrakeSymbol_toDisplay = outC->_L9;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void FlashingIconsOperator_init_DMI_Control_Pkg_Utils(
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC)
{
  outC->_L14 = kcg_true;
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_float32(0.0);
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_float32(0.0);
  outC->every = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->init = kcg_true;
  outC->yellowBorderBrakeSymbol_toDisplay = kcg_true;
  outC->yellowBorderC1Area_toDisplay = kcg_true;
  /* _L12=(DMI_Control_Pkg::Utils::FlashingOperator#1)/ */
  FlashingOperator_init_DMI_Control_Pkg_Utils(
    &outC->Context_FlashingOperator_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void FlashingIconsOperator_reset_DMI_Control_Pkg_Utils(
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC)
{
  outC->init = kcg_true;
  /* _L12=(DMI_Control_Pkg::Utils::FlashingOperator#1)/ */
  FlashingOperator_reset_DMI_Control_Pkg_Utils(
    &outC->Context_FlashingOperator_1);
}


void kcg_save_SV_FlashingIconsOperator_DMI_Control_Pkg_Utils(
  SV_FlashingIconsOperator_DMI_Control_Pkg_Utils *SV,
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC)
{
  kcg_save_SV_FlashingOperator_DMI_Control_Pkg_Utils(
    &SV->Context_FlashingOperator_1,
    &outC->Context_FlashingOperator_1);
  SV->Context__L13 = outC->_L13;
  SV->Context__L12 = outC->_L12;
  SV->Context_init = outC->init;
}

void kcg_load_SV_FlashingIconsOperator_DMI_Control_Pkg_Utils(
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC,
  SV_FlashingIconsOperator_DMI_Control_Pkg_Utils *SV)
{
  kcg_load_SV_FlashingOperator_DMI_Control_Pkg_Utils(
    &outC->Context_FlashingOperator_1,
    &SV->Context_FlashingOperator_1);
  outC->_L13 = SV->Context__L13;
  outC->_L12 = SV->Context__L12;
  outC->init = SV->Context_init;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FlashingIconsOperator_DMI_Control_Pkg_Utils.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

