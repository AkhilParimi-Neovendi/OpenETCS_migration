/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_from_Track_Atlas/ */
void Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func(
  /* Planning_Area_Speed_Profile/ */
  DMI_SpeedProfileArray_T_DMI_Types_Pkg *Planning_Area_Speed_Profile,
  outC_Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_size idx;
  static kcg_int32 noname;

  kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg(
    &outC->_L1,
    Planning_Area_Speed_Profile);
  outC->_L7 = kcg_true;
  /* _L6= */
  if (outC->_L7) {
    /* _L6= */
    for (idx = 0; idx < 32; idx++) {
      /* _L6=(DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List#1)/ */
      Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func(
        /* _L6= */(kcg_int32) idx,
        &outC->_L1[idx],
        &outC->Context_Planning_Area_Speed_Profile_List_1[idx]);
      outC->_L2[idx] =
        outC->Context_Planning_Area_Speed_Profile_List_1[idx].Loc_Abs_DMI;
      outC->_L4[idx] = outC->Context_Planning_Area_Speed_Profile_List_1[idx].MRSP_DMI;
      outC->_L6 = /* _L6= */(kcg_int32) (idx + 1);
      /* _L6= */
      if (!outC->Context_Planning_Area_Speed_Profile_List_1[idx]._1_continue) {
        break;
      }
    }
  }
  else {
    outC->_L6 = kcg_lit_int32(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L6= */
  for (idx = /* _L6= */(kcg_size) outC->_L6; idx < 32; idx++) {
    outC->_L2[idx] = kcg_lit_float32(0.0);
    outC->_L4[idx] = kcg_lit_float32(0.0);
  }
#endif /* KCG_MAPW_CPY */

  noname = outC->_L6;
  kcg_copy_array_float32_32(&outC->MRSP_to_DMI, &outC->_L4);
  kcg_copy_array_float32_32(&outC->Loc_Abs_to_DMI, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void Planning_Area_Speed_Profile_from_Track_Atlas_init_DMI_Control_Pkg_Sub_func(
  outC_Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L7 = kcg_true;
  outC->_L6 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L4[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L2[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L1[idx3].valid = kcg_true;
    outC->_L1[idx3].Loc_Abs = kcg_lit_int32(0);
    outC->_L1[idx3].Loc_LRBG = kcg_lit_int32(0);
    outC->_L1[idx3].MRS = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->MRSP_to_DMI[idx4] = kcg_lit_float32(0.0);
  }
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->Loc_Abs_to_DMI[idx5] = kcg_lit_float32(0.0);
  }
  for (idx = 0; idx < 32; idx++) {
    /* _L6=(DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List#1)/ */
    Planning_Area_Speed_Profile_List_init_DMI_Control_Pkg_Sub_func(
      &outC->Context_Planning_Area_Speed_Profile_List_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Planning_Area_Speed_Profile_from_Track_Atlas_reset_DMI_Control_Pkg_Sub_func(
  outC_Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 32; idx++) {
    /* _L6=(DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List#1)/ */
    Planning_Area_Speed_Profile_List_reset_DMI_Control_Pkg_Sub_func(
      &outC->Context_Planning_Area_Speed_Profile_List_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

