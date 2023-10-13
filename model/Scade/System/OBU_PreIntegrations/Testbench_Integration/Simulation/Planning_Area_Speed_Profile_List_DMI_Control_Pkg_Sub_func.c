/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List/ */
void Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func(
  /* index/ */
  kcg_int64 index,
  /* Loc_LRBG/ */
  DMI_speedProfileElement_T_DMI_Types_Pkg *Loc_LRBG,
  outC_Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int64 noname;
  static L_internal_Type_Obu_BasicTypes_Pkg _1_noname;

  outC->_L15 = kcg_lit_float64(100.0);
  kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg(&outC->_L1, Loc_LRBG);
  outC->_L9 = outC->_L1.Loc_Abs;
  outC->_L12 = /* _L12= */(kcg_float64) outC->_L9;
  outC->_L14 = outC->_L12 / outC->_L15;
  outC->_L7 = outC->_L1.MRS;
  outC->_L13 = /* _L13= */(kcg_float64) outC->_L7;
  outC->_L8 = outC->_L1.Loc_LRBG;
  _1_noname = outC->_L8;
  outC->_L11 = index;
  noname = outC->_L11;
  outC->_L10 = outC->_L1.valid;
  outC->_1_continue = outC->_L10;
  outC->MRSP_DMI = outC->_L13;
  outC->Loc_Abs_DMI = outC->_L14;
}

#ifndef KCG_USER_DEFINED_INIT
void Planning_Area_Speed_Profile_List_init_DMI_Control_Pkg_Sub_func(
  outC_Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L15 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_lit_float64(0.0);
  outC->_L13 = kcg_lit_float64(0.0);
  outC->_L12 = kcg_lit_float64(0.0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L10 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.Loc_Abs = kcg_lit_int64(0);
  outC->_L1.Loc_LRBG = kcg_lit_int64(0);
  outC->_L1.MRS = kcg_lit_int64(0);
  outC->MRSP_DMI = kcg_lit_float64(0.0);
  outC->Loc_Abs_DMI = kcg_lit_float64(0.0);
  outC->_1_continue = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Planning_Area_Speed_Profile_List_reset_DMI_Control_Pkg_Sub_func(
  outC_Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

