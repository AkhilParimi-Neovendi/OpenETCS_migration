/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_to_DMI_TA_Export.h"

/* TA_Export::MRSP_to_DMI/ */
void MRSP_to_DMI_TA_Export(
  /* EoA/ */
  L_internal_Type_Obu_BasicTypes_Pkg EoA,
  /* MRSP_in/ */
  MRSP_Profile_t_TrackAtlasTypes *MRSP_in,
  outC_MRSP_to_DMI_TA_Export *outC)
{
  static kcg_size idx;
  static MRSP_reduction_acc_TA_Export acc;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_int32 noname;
  static kcg_int32 _5_noname;

  kcg_copy_MRSP_reduction_acc_TA_Export(
    &outC->_L660,
    (MRSP_reduction_acc_TA_Export *) &DEFAULT_MRSP_reduction_acc_TA_Export);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L657, MRSP_in);
  /* _L659/ */
  for (idx = 0; idx < 110; idx++) {
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L659[idx], &outC->_L657);
  }
  outC->_L667 = kcg_true;
  kcg_copy_MRSP_reduction_acc_TA_Export(&outC->_L665, &outC->_L660);
  /* _L666= */
  if (outC->_L667) {
    /* _L666= */
    for (idx1 = 0; idx1 < 110; idx1++) {
      kcg_copy_MRSP_reduction_acc_TA_Export(&acc, &outC->_L665);
      /* _L666=(TA_Export::MRSP_reduction#1)/ */
      MRSP_reduction_TA_Export(
        /* _L666= */(kcg_int32) idx1,
        &acc,
        &outC->_L659[idx1],
        &outC->Context_MRSP_reduction_1[idx1]);
      kcg_copy_MRSP_reduction_acc_TA_Export(
        &outC->_L665,
        &outC->Context_MRSP_reduction_1[idx1].reduced);
      outC->_L666 = /* _L666= */(kcg_int32) (idx1 + 1);
      /* _L666= */
      if (!outC->Context_MRSP_reduction_1[idx1].cont) {
        break;
      }
    }
  }
  else {
    outC->_L666 = kcg_lit_int32(0);
  }
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L658, &outC->_L665.MRSP);
  /* _L680/ */
  for (idx2 = 0; idx2 < 110; idx2++) {
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L680[idx2], &outC->_L658);
  }
  outC->_L677 = EoA;
  /* _L676/ */
  for (idx3 = 0; idx3 < 110; idx3++) {
    outC->_L676[idx3] = outC->_L677;
  }
  outC->_L670 = kcg_true;
  /* _L669= */
  if (outC->_L670) {
    /* _L669= */
    for (idx4 = 0; idx4 < 110; idx4++) {
      /* _L669=(TA_Export::MRSP_limit_to_EOA#1)/ */
      MRSP_limit_to_EOA_TA_Export(
        /* _L669= */(kcg_int32) idx4,
        &outC->_L680[idx4],
        outC->_L676[idx4],
        &outC->Context_MRSP_limit_to_EOA_1[idx4]);
      kcg_copy_MRSP_section_t_TrackAtlasTypes(
        &outC->_L679[idx4],
        &outC->Context_MRSP_limit_to_EOA_1[idx4].limited);
      outC->_L669 = /* _L669= */(kcg_int32) (idx4 + 1);
      /* _L669= */
      if (!outC->Context_MRSP_limit_to_EOA_1[idx4].cont) {
        break;
      }
    }
  }
  else {
    outC->_L669 = kcg_lit_int32(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L669= */
  for (idx4 = /* _L669= */(kcg_size) outC->_L669; idx4 < 110; idx4++) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &outC->_L679[idx4],
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  }
#endif /* KCG_MAPW_CPY */

  _5_noname = outC->_L669;
  noname = outC->_L666;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->MRSP_to_DMI, &outC->_L679);
}

#ifndef KCG_USER_DEFINED_INIT
void MRSP_to_DMI_init_TA_Export(outC_MRSP_to_DMI_TA_Export *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;

  for (idx3 = 0; idx3 < 110; idx3++) {
    for (idx2 = 0; idx2 < 110; idx2++) {
      outC->_L680[idx3][idx2].valid = kcg_true;
      outC->_L680[idx3][idx2].Loc_Abs = kcg_lit_int32(0);
      outC->_L680[idx3][idx2].Loc_LRBG = kcg_lit_int32(0);
      outC->_L680[idx3][idx2].MRS = kcg_lit_int32(0);
    }
  }
  for (idx4 = 0; idx4 < 110; idx4++) {
    outC->_L679[idx4].valid = kcg_true;
    outC->_L679[idx4].Loc_Abs = kcg_lit_int32(0);
    outC->_L679[idx4].Loc_LRBG = kcg_lit_int32(0);
    outC->_L679[idx4].MRS = kcg_lit_int32(0);
  }
  outC->_L677 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 110; idx5++) {
    outC->_L676[idx5] = kcg_lit_int32(0);
  }
  outC->_L670 = kcg_true;
  outC->_L669 = kcg_lit_int32(0);
  outC->_L667 = kcg_true;
  outC->_L666 = kcg_lit_int32(0);
  outC->_L665.write_index = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 110; idx6++) {
    outC->_L665.MRSP[idx6].valid = kcg_true;
    outC->_L665.MRSP[idx6].Loc_Abs = kcg_lit_int32(0);
    outC->_L665.MRSP[idx6].Loc_LRBG = kcg_lit_int32(0);
    outC->_L665.MRSP[idx6].MRS = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 110; idx7++) {
    outC->_L658[idx7].valid = kcg_true;
    outC->_L658[idx7].Loc_Abs = kcg_lit_int32(0);
    outC->_L658[idx7].Loc_LRBG = kcg_lit_int32(0);
    outC->_L658[idx7].MRS = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 110; idx9++) {
    for (idx8 = 0; idx8 < 110; idx8++) {
      outC->_L659[idx9][idx8].valid = kcg_true;
      outC->_L659[idx9][idx8].Loc_Abs = kcg_lit_int32(0);
      outC->_L659[idx9][idx8].Loc_LRBG = kcg_lit_int32(0);
      outC->_L659[idx9][idx8].MRS = kcg_lit_int32(0);
    }
  }
  outC->_L660.write_index = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 110; idx10++) {
    outC->_L660.MRSP[idx10].valid = kcg_true;
    outC->_L660.MRSP[idx10].Loc_Abs = kcg_lit_int32(0);
    outC->_L660.MRSP[idx10].Loc_LRBG = kcg_lit_int32(0);
    outC->_L660.MRSP[idx10].MRS = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 110; idx11++) {
    outC->_L657[idx11].valid = kcg_true;
    outC->_L657[idx11].Loc_Abs = kcg_lit_int32(0);
    outC->_L657[idx11].Loc_LRBG = kcg_lit_int32(0);
    outC->_L657[idx11].MRS = kcg_lit_int32(0);
  }
  for (idx12 = 0; idx12 < 110; idx12++) {
    outC->MRSP_to_DMI[idx12].valid = kcg_true;
    outC->MRSP_to_DMI[idx12].Loc_Abs = kcg_lit_int32(0);
    outC->MRSP_to_DMI[idx12].Loc_LRBG = kcg_lit_int32(0);
    outC->MRSP_to_DMI[idx12].MRS = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 110; idx1++) {
    /* _L669=(TA_Export::MRSP_limit_to_EOA#1)/ */
    MRSP_limit_to_EOA_init_TA_Export(&outC->Context_MRSP_limit_to_EOA_1[idx1]);
  }
  for (idx = 0; idx < 110; idx++) {
    /* _L666=(TA_Export::MRSP_reduction#1)/ */
    MRSP_reduction_init_TA_Export(&outC->Context_MRSP_reduction_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MRSP_to_DMI_reset_TA_Export(outC_MRSP_to_DMI_TA_Export *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  for (idx1 = 0; idx1 < 110; idx1++) {
    /* _L669=(TA_Export::MRSP_limit_to_EOA#1)/ */
    MRSP_limit_to_EOA_reset_TA_Export(&outC->Context_MRSP_limit_to_EOA_1[idx1]);
  }
  for (idx = 0; idx < 110; idx++) {
    /* _L666=(TA_Export::MRSP_reduction#1)/ */
    MRSP_reduction_reset_TA_Export(&outC->Context_MRSP_reduction_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MRSP_to_DMI_TA_Export.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

