/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_ForCalcTrainPos_TM_conversions.h"

/* TM_conversions::C_P005_ForCalcTrainPos/ */
void C_P005_ForCalcTrainPos_TM_conversions(
  /* P005_in/ */
  P005_OBU_T_TM *P005_in,
  /* LRBG/ */
  NID_LRBG LRBG,
  /* NID_C_onboard/ */
  NID_C NID_C_onboard,
  outC_C_P005_ForCalcTrainPos_TM_conversions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_bool noname;
  static L_PACKET _5_noname;
  static N_ITER _6_noname;

  outC->_L23 = NID_C_onboard;
  /* _L24/ */
  for (idx = 0; idx < 33; idx++) {
    outC->_L24[idx] = outC->_L23;
  }
  outC->_L1 = LRBG;
  /* _L22/ */
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L22[idx1] = outC->_L1;
  }
  kcg_copy_P005_OBU_T_TM(&outC->_L2, P005_in);
  outC->_L9 = outC->_L2.q_scale;
  /* _L21/ */
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L21[idx2] = outC->_L9;
  }
  outC->_L7 = outC->_L2.q_dir;
  /* _L20/ */
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L20[idx3] = outC->_L7;
  }
  outC->_L10 = outC->_L2.n_iter;
  _6_noname = outC->_L10;
  outC->_L8 = outC->_L2.l_packet;
  _5_noname = outC->_L8;
  kcg_copy_P005_OBU_sectionlist_enum_T_TM(&outC->_L11, &outC->_L2.sections);
  kcg_copy_P005_OBU_sectionlist_enum_T_TM(
    &outC->_L18,
    (P005_OBU_sectionlist_enum_T_TM *) &outC->_L11[0]);
  outC->_L6 = outC->_L2.valid;
  noname = outC->_L6;
  /* _L4= */
  for (idx4 = 0; idx4 < 33; idx4++) {
    /* _L4=(TM_conversions::C_P005_LinkedBGs#1)/ */
    C_P005_LinkedBGs_TM_conversions(
      outC->_L22[idx4],
      outC->_L20[idx4],
      outC->_L21[idx4],
      &outC->_L18[idx4],
      outC->_L24[idx4],
      &outC->Context_C_P005_LinkedBGs_1[idx4]);
    kcg_copy_LinkedBG_T_BG_Types_Pkg(
      &outC->_L4[idx4],
      &outC->Context_C_P005_LinkedBGs_1[idx4].LinkedBGsOUT);
  }
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&outC->LinkedBGsOUT, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P005_ForCalcTrainPos_init_TM_conversions(
  outC_C_P005_ForCalcTrainPos_TM_conversions *outC)
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

  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L24[idx1] = kcg_lit_int64(0);
  }
  outC->_L23 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L22[idx2] = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L21[idx3] = Q_SCALE_10_cm_scale;
  }
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L20[idx4] = Q_DIR_Reverse;
  }
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L18[idx5].valid = kcg_true;
    outC->_L18[idx5].d_link = kcg_lit_int64(0);
    outC->_L18[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L18[idx5].nid_c = kcg_lit_int64(0);
    outC->_L18[idx5].nid_bg = kcg_lit_int64(0);
    outC->_L18[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L18[idx5].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L18[idx5].q_locacc = kcg_lit_int64(0);
  }
  outC->_L6 = kcg_true;
  outC->_L7 = Q_DIR_Reverse;
  outC->_L8 = kcg_lit_int64(0);
  outC->_L9 = Q_SCALE_10_cm_scale;
  outC->_L10 = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L11[idx6].valid = kcg_true;
    outC->_L11[idx6].d_link = kcg_lit_int64(0);
    outC->_L11[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L11[idx6].nid_c = kcg_lit_int64(0);
    outC->_L11[idx6].nid_bg = kcg_lit_int64(0);
    outC->_L11[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L11[idx6].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L11[idx6].q_locacc = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L4[idx7].valid = kcg_true;
    outC->_L4[idx7].nid_LRBG = kcg_lit_int64(0);
    outC->_L4[idx7].q_dir = Q_DIR_Reverse;
    outC->_L4[idx7].q_scale = Q_SCALE_10_cm_scale;
    outC->_L4[idx7].d_link = kcg_lit_int64(0);
    outC->_L4[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L4[idx7].nid_c = kcg_lit_int64(0);
    outC->_L4[idx7].nid_bg = kcg_lit_int64(0);
    outC->_L4[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L4[idx7].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L4[idx7].q_locacc = kcg_lit_int64(0);
  }
  outC->_L2.valid = kcg_true;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.l_packet = kcg_lit_int64(0);
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.n_iter = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L2.sections[idx8].valid = kcg_true;
    outC->_L2.sections[idx8].d_link = kcg_lit_int64(0);
    outC->_L2.sections[idx8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2.sections[idx8].nid_c = kcg_lit_int64(0);
    outC->_L2.sections[idx8].nid_bg = kcg_lit_int64(0);
    outC->_L2.sections[idx8].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2.sections[idx8].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L2.sections[idx8].q_locacc = kcg_lit_int64(0);
  }
  outC->_L1 = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 33; idx9++) {
    outC->LinkedBGsOUT[idx9].valid = kcg_true;
    outC->LinkedBGsOUT[idx9].nid_LRBG = kcg_lit_int64(0);
    outC->LinkedBGsOUT[idx9].q_dir = Q_DIR_Reverse;
    outC->LinkedBGsOUT[idx9].q_scale = Q_SCALE_10_cm_scale;
    outC->LinkedBGsOUT[idx9].d_link = kcg_lit_int64(0);
    outC->LinkedBGsOUT[idx9].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->LinkedBGsOUT[idx9].nid_c = kcg_lit_int64(0);
    outC->LinkedBGsOUT[idx9].nid_bg = kcg_lit_int64(0);
    outC->LinkedBGsOUT[idx9].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->LinkedBGsOUT[idx9].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->LinkedBGsOUT[idx9].q_locacc = kcg_lit_int64(0);
  }
  for (idx = 0; idx < 33; idx++) {
    /* _L4=(TM_conversions::C_P005_LinkedBGs#1)/ */
    C_P005_LinkedBGs_init_TM_conversions(
      &outC->Context_C_P005_LinkedBGs_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P005_ForCalcTrainPos_reset_TM_conversions(
  outC_C_P005_ForCalcTrainPos_TM_conversions *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 33; idx++) {
    /* _L4=(TM_conversions::C_P005_LinkedBGs#1)/ */
    C_P005_LinkedBGs_reset_TM_conversions(
      &outC->Context_C_P005_LinkedBGs_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P005_ForCalcTrainPos_TM_conversions.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

