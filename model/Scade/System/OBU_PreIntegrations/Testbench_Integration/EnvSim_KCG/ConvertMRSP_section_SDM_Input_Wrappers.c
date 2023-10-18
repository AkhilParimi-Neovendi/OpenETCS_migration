/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertMRSP_section_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::ConvertMRSP_section/ */
void ConvertMRSP_section_SDM_Input_Wrappers(
  /* MRSP_section_ext/ */
  MRSP_section_t_TrackAtlasTypes *MRSP_section_ext,
  outC_ConvertMRSP_section_SDM_Input_Wrappers *outC)
{
  static L_internal_Type_Obu_BasicTypes_Pkg noname;

  kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L9, MRSP_section_ext);
  outC->_L3 = outC->_L9.Loc_Abs;
  /* _L7=(SDM_Types_Pkg::TransformL_intToL_real#12)/ */
  TransformL_intToL_real_SDM_Types_Pkg(
    outC->_L3,
    &outC->Context_TransformL_intToL_real_12);
  outC->_L7 = outC->Context_TransformL_intToL_real_12.loc_real;
  outC->_L5 = outC->_L9.MRS;
  /* _L8=(SDM_Types_Pkg::TransformV_intToV_real#6)/ */
  TransformV_intToV_real_SDM_Types_Pkg(
    outC->_L5,
    &outC->Context_TransformV_intToV_real_6);
  outC->_L8 = outC->Context_TransformV_intToV_real_6.v_real;
  outC->_L2 = outC->_L9.valid;
  outC->_L6.Loc_Abs = outC->_L7;
  outC->_L6.MRS = outC->_L8;
  outC->_L6.valid = outC->_L2;
  kcg_copy_MRSP_internal_section_T_TargetManagement_types(
    &outC->MRSP_section_int,
    &outC->_L6);
  outC->_L4 = outC->_L9.Loc_LRBG;
  noname = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void ConvertMRSP_section_init_SDM_Input_Wrappers(
  outC_ConvertMRSP_section_SDM_Input_Wrappers *outC)
{
  outC->_L9.valid = kcg_true;
  outC->_L9.Loc_Abs = kcg_lit_int64(0);
  outC->_L9.Loc_LRBG = kcg_lit_int64(0);
  outC->_L9.MRS = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6.Loc_Abs = kcg_lit_float64(0.0);
  outC->_L6.MRS = kcg_lit_float64(0.0);
  outC->_L6.valid = kcg_true;
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2 = kcg_true;
  outC->MRSP_section_int.Loc_Abs = kcg_lit_float64(0.0);
  outC->MRSP_section_int.MRS = kcg_lit_float64(0.0);
  outC->MRSP_section_int.valid = kcg_true;
  /* _L8=(SDM_Types_Pkg::TransformV_intToV_real#6)/ */
  TransformV_intToV_real_init_SDM_Types_Pkg(
    &outC->Context_TransformV_intToV_real_6);
  /* _L7=(SDM_Types_Pkg::TransformL_intToL_real#12)/ */
  TransformL_intToL_real_init_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_12);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ConvertMRSP_section_reset_SDM_Input_Wrappers(
  outC_ConvertMRSP_section_SDM_Input_Wrappers *outC)
{
  /* _L8=(SDM_Types_Pkg::TransformV_intToV_real#6)/ */
  TransformV_intToV_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformV_intToV_real_6);
  /* _L7=(SDM_Types_Pkg::TransformL_intToL_real#12)/ */
  TransformL_intToL_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_12);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertMRSP_section_SDM_Input_Wrappers.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

