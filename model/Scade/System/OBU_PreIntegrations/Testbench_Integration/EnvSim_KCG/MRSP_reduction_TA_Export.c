/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_reduction_TA_Export.h"

/* TA_Export::MRSP_reduction/ */
void MRSP_reduction_TA_Export(
  /* i/ */
  kcg_int32 i,
  /* acc/ */
  MRSP_reduction_acc_TA_Export *acc,
  /* MRSP/ */
  MRSP_Profile_t_TrackAtlasTypes *MRSP,
  outC_MRSP_reduction_TA_Export *outC)
{
  kcg_copy_MRSP_reduction_acc_TA_Export(&outC->_L2, acc);
  outC->_L1 = i;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L18, MRSP);
  if ((kcg_lit_int32(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int32(110))) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L19, &outC->_L18[outC->_L1]);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &outC->_L19,
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  }
  outC->_L28 = outC->_L19.valid;
  outC->_L25 = kcg_lit_int32(1);
  outC->_L6 = outC->_L2.write_index;
  outC->index = outC->_L6;
  outC->_L24 = outC->index;
  outC->_L26 = outC->_L24 + outC->_L25;
  outC->_L17 = kcg_lit_int32(1);
  outC->_L16 = outC->_L1 - outC->_L17;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L3, MRSP);
  if ((kcg_lit_int32(0) <= outC->_L16) & (outC->_L16 < kcg_lit_int32(110))) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L15, &outC->_L3[outC->_L16]);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &outC->_L15,
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  }
  outC->_L21 = outC->_L15.MRS;
  outC->_L20 = outC->_L19.MRS;
  outC->_L22 = outC->_L20 == outC->_L21;
  /* _L23= */
  if (outC->_L22) {
    outC->_L23 = outC->_L24;
  }
  else {
    outC->_L23 = outC->_L26;
  }
  outC->next_index = outC->_L23;
  outC->_L14 = outC->index;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L7, &outC->_L2.MRSP);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L13, &outC->_L7);
  if ((kcg_lit_int32(0) <= outC->_L14) & (outC->_L14 < kcg_lit_int32(110))) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L13[outC->_L14], &outC->_L19);
  }
  outC->_L12 = outC->next_index;
  outC->_L11.write_index = outC->_L12;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L11.MRSP, &outC->_L13);
  outC->cont = outC->_L28;
  kcg_copy_MRSP_reduction_acc_TA_Export(&outC->reduced, &outC->_L11);
}

#ifndef KCG_USER_DEFINED_INIT
void MRSP_reduction_init_TA_Export(outC_MRSP_reduction_TA_Export *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  outC->_L2.write_index = kcg_lit_int32(0);
  for (idx = 0; idx < 110; idx++) {
    outC->_L2.MRSP[idx].valid = kcg_true;
    outC->_L2.MRSP[idx].Loc_Abs = kcg_lit_int32(0);
    outC->_L2.MRSP[idx].Loc_LRBG = kcg_lit_int32(0);
    outC->_L2.MRSP[idx].MRS = kcg_lit_int32(0);
  }
  outC->_L28 = kcg_true;
  outC->_L26 = kcg_lit_int32(0);
  outC->_L25 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L23 = kcg_lit_int32(0);
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 110; idx1++) {
    outC->_L18[idx1].valid = kcg_true;
    outC->_L18[idx1].Loc_Abs = kcg_lit_int32(0);
    outC->_L18[idx1].Loc_LRBG = kcg_lit_int32(0);
    outC->_L18[idx1].MRS = kcg_lit_int32(0);
  }
  outC->_L19.valid = kcg_true;
  outC->_L19.Loc_Abs = kcg_lit_int32(0);
  outC->_L19.Loc_LRBG = kcg_lit_int32(0);
  outC->_L19.MRS = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15.valid = kcg_true;
  outC->_L15.Loc_Abs = kcg_lit_int32(0);
  outC->_L15.Loc_LRBG = kcg_lit_int32(0);
  outC->_L15.MRS = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 110; idx2++) {
    outC->_L13[idx2].valid = kcg_true;
    outC->_L13[idx2].Loc_Abs = kcg_lit_int32(0);
    outC->_L13[idx2].Loc_LRBG = kcg_lit_int32(0);
    outC->_L13[idx2].MRS = kcg_lit_int32(0);
  }
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11.write_index = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 110; idx3++) {
    outC->_L11.MRSP[idx3].valid = kcg_true;
    outC->_L11.MRSP[idx3].Loc_Abs = kcg_lit_int32(0);
    outC->_L11.MRSP[idx3].Loc_LRBG = kcg_lit_int32(0);
    outC->_L11.MRSP[idx3].MRS = kcg_lit_int32(0);
  }
  outC->_L6 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 110; idx4++) {
    outC->_L7[idx4].valid = kcg_true;
    outC->_L7[idx4].Loc_Abs = kcg_lit_int32(0);
    outC->_L7[idx4].Loc_LRBG = kcg_lit_int32(0);
    outC->_L7[idx4].MRS = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 110; idx5++) {
    outC->_L3[idx5].valid = kcg_true;
    outC->_L3[idx5].Loc_Abs = kcg_lit_int32(0);
    outC->_L3[idx5].Loc_LRBG = kcg_lit_int32(0);
    outC->_L3[idx5].MRS = kcg_lit_int32(0);
  }
  outC->_L1 = kcg_lit_int32(0);
  outC->next_index = kcg_lit_int32(0);
  outC->index = kcg_lit_int32(0);
  outC->reduced.write_index = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 110; idx6++) {
    outC->reduced.MRSP[idx6].valid = kcg_true;
    outC->reduced.MRSP[idx6].Loc_Abs = kcg_lit_int32(0);
    outC->reduced.MRSP[idx6].Loc_LRBG = kcg_lit_int32(0);
    outC->reduced.MRSP[idx6].MRS = kcg_lit_int32(0);
  }
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MRSP_reduction_reset_TA_Export(outC_MRSP_reduction_TA_Export *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MRSP_reduction_TA_Export.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

