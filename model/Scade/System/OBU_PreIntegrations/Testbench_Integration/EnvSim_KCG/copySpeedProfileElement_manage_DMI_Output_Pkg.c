/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "copySpeedProfileElement_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::copySpeedProfileElement/ */
void copySpeedProfileElement_manage_DMI_Output_Pkg(
  /* index/ */
  kcg_int32 index,
  /* fromTrackAtlas/ */
  MRSP_section_t_TrackAtlasTypes *fromTrackAtlas,
  outC_copySpeedProfileElement_manage_DMI_Output_Pkg *outC)
{
  static kcg_int32 noname;

  outC->_L7 = index;
  noname = outC->_L7;
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L1, fromTrackAtlas);
  outC->_L6 = outC->_L1.valid;
  outC->_1_continue = outC->_L6;
  outC->_L5 = outC->_L1.Loc_Abs;
  outC->_L4 = outC->_L1.Loc_LRBG;
  outC->_L3 = outC->_L1.MRS;
  outC->_L2.valid = outC->_L6;
  outC->_L2.Loc_Abs = outC->_L5;
  outC->_L2.Loc_LRBG = outC->_L4;
  outC->_L2.MRS = outC->_L3;
  kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg(&outC->toDMI, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void copySpeedProfileElement_init_manage_DMI_Output_Pkg(
  outC_copySpeedProfileElement_manage_DMI_Output_Pkg *outC)
{
  outC->_L7 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L6 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.Loc_Abs = kcg_lit_int32(0);
  outC->_L2.Loc_LRBG = kcg_lit_int32(0);
  outC->_L2.MRS = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.Loc_Abs = kcg_lit_int32(0);
  outC->_L1.Loc_LRBG = kcg_lit_int32(0);
  outC->_L1.MRS = kcg_lit_int32(0);
  outC->toDMI.valid = kcg_true;
  outC->toDMI.Loc_Abs = kcg_lit_int32(0);
  outC->toDMI.Loc_LRBG = kcg_lit_int32(0);
  outC->toDMI.MRS = kcg_lit_int32(0);
  outC->_1_continue = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void copySpeedProfileElement_reset_manage_DMI_Output_Pkg(
  outC_copySpeedProfileElement_manage_DMI_Output_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** copySpeedProfileElement_manage_DMI_Output_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

