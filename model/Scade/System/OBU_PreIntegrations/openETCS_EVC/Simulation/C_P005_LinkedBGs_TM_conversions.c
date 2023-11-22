/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_LinkedBGs_TM_conversions.h"

/* TM_conversions::C_P005_LinkedBGs/ */
void C_P005_LinkedBGs_TM_conversions(
  /* LRBG/ */
  NID_LRBG LRBG,
  /* q_dir/ */
  Q_DIR q_dir,
  /* q_scale/ */
  Q_SCALE q_scale,
  /* SectionsIn/ */
  P005_section_enum_T_TM *SectionsIn,
  /* NID_C_onboard/ */
  NID_C NID_C_onboard,
  outC_C_P005_LinkedBGs_TM_conversions *outC)
{
  outC->_L19 = ENUM_Q_NEWCOUNTRY_same_TM_conversions;
  kcg_copy_P005_section_enum_T_TM(&outC->_L6, SectionsIn);
  outC->_L9 = outC->_L6.q_newcountry;
  outC->q_newcountry = outC->_L9;
  outC->_L16 = outC->q_newcountry;
  outC->_L23 = outC->_L16 == outC->_L19;
  outC->_L22 = outC->q_newcountry;
  outC->_L10 = outC->_L6.nid_c;
  outC->nid_c = outC->_L10;
  outC->_L17 = outC->nid_c;
  outC->_L15 = NID_C_onboard;
  /* _L18= */
  if (outC->_L23) {
    outC->_L18 = outC->_L15;
  }
  else {
    outC->_L18 = outC->_L17;
  }
  outC->_L7 = outC->_L6.valid;
  outC->_L8 = outC->_L6.d_link;
  outC->_L11 = outC->_L6.nid_bg;
  outC->_L12 = outC->_L6.q_linkorientation;
  outC->_L13 = outC->_L6.q_linkreaction;
  outC->_L14 = outC->_L6.q_locacc;
  outC->_L5 = q_scale;
  outC->_L4 = q_dir;
  outC->_L3 = LRBG;
  outC->_L2.valid = outC->_L7;
  outC->_L2.nid_LRBG = outC->_L3;
  outC->_L2.q_dir = outC->_L4;
  outC->_L2.q_scale = outC->_L5;
  outC->_L2.d_link = outC->_L8;
  outC->_L2.q_newcountry = outC->_L22;
  outC->_L2.nid_c = outC->_L18;
  outC->_L2.nid_bg = outC->_L11;
  outC->_L2.q_linkorientation = outC->_L12;
  outC->_L2.q_linkreaction = outC->_L13;
  outC->_L2.q_locacc = outC->_L14;
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->LinkedBGsOUT, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P005_LinkedBGs_init_TM_conversions(
  outC_C_P005_LinkedBGs_TM_conversions *outC)
{
  outC->_L23 = kcg_true;
  outC->_L22 =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L19 =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L18 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L15 = kcg_lit_int32(0);
  outC->_L7 = kcg_true;
  outC->_L8 = kcg_lit_int32(0);
  outC->_L9 =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L12 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L13 = Q_LINKREACTION_Train_trip;
  outC->_L14 = kcg_lit_int32(0);
  outC->_L6.valid = kcg_true;
  outC->_L6.d_link = kcg_lit_int32(0);
  outC->_L6.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L6.nid_c = kcg_lit_int32(0);
  outC->_L6.nid_bg = kcg_lit_int32(0);
  outC->_L6.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L6.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L6.q_locacc = kcg_lit_int32(0);
  outC->_L5 = Q_SCALE_10_cm_scale;
  outC->_L4 = Q_DIR_Reverse;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_LRBG = kcg_lit_int32(0);
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.d_link = kcg_lit_int32(0);
  outC->_L2.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2.nid_c = kcg_lit_int32(0);
  outC->_L2.nid_bg = kcg_lit_int32(0);
  outC->_L2.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L2.q_locacc = kcg_lit_int32(0);
  outC->q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->nid_c = kcg_lit_int32(0);
  outC->LinkedBGsOUT.valid = kcg_true;
  outC->LinkedBGsOUT.nid_LRBG = kcg_lit_int32(0);
  outC->LinkedBGsOUT.q_dir = Q_DIR_Reverse;
  outC->LinkedBGsOUT.q_scale = Q_SCALE_10_cm_scale;
  outC->LinkedBGsOUT.d_link = kcg_lit_int32(0);
  outC->LinkedBGsOUT.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->LinkedBGsOUT.nid_c = kcg_lit_int32(0);
  outC->LinkedBGsOUT.nid_bg = kcg_lit_int32(0);
  outC->LinkedBGsOUT.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->LinkedBGsOUT.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->LinkedBGsOUT.q_locacc = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P005_LinkedBGs_reset_TM_conversions(
  outC_C_P005_LinkedBGs_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P005_LinkedBGs_TM_conversions.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

