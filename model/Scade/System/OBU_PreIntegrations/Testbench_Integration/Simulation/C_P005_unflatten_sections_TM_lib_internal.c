/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_unflatten_sections_TM_lib_internal.h"

/* TM_lib_internal::C_P005_unflatten_sections/ */
void C_P005_unflatten_sections_TM_lib_internal(
  /* nid_packet_ok/ */
  kcg_bool nid_packet_ok,
  /* n_iter/ */
  kcg_int64 n_iter,
  /* flat/ */
  P005_sections_array_flat_T_TM *flat,
  outC_C_P005_unflatten_sections_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_int64 noname;

  outC->_L11 = nid_packet_ok;
  outC->_L3 = n_iter;
  /* _L5/ */
  for (idx = 0; idx < 33; idx++) {
    outC->_L5[idx] = outC->_L3;
  }
  kcg_copy_P005_sections_array_flat_T_TM(&outC->_L1, flat);
  /* _L6/ */
  for (idx1 = 0; idx1 < 33; idx1++) {
    kcg_copy_P005_sections_array_flat_T_TM(&outC->_L6[idx1], &outC->_L1);
  }
  /* _L7= */
  if (outC->_L11) {
    /* _L7= */
    for (idx2 = 0; idx2 < 33; idx2++) {
      /* _L7=(TM_lib_internal::C_P005_us_array#1)/ */
      C_P005_us_array_TM_lib_internal(
        /* _L7= */(kcg_int64) idx2,
        outC->_L5[idx2],
        &outC->_L6[idx2],
        &outC->Context_C_P005_us_array_1[idx2]);
      kcg_copy_P005_section_enum_T_TM(
        &outC->_L9[idx2],
        &outC->Context_C_P005_us_array_1[idx2].sections);
      outC->_L7 = /* _L7= */(kcg_int64) (idx2 + 1);
      /* _L7= */
      if (!outC->Context_C_P005_us_array_1[idx2].cont) {
        break;
      }
    }
  }
  else {
    outC->_L7 = kcg_lit_int64(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L7= */
  for (idx2 = /* _L7= */(kcg_size) outC->_L7; idx2 < 33; idx2++) {
    kcg_copy_P005_section_enum_T_TM(
      &outC->_L9[idx2],
      (P005_section_enum_T_TM *) &DEFAULT_P005_OBU_section_TM_lib_internal);
  }
#endif /* KCG_MAPW_CPY */

  noname = outC->_L7;
  kcg_copy_P005_OBU_sectionlist_enum_T_TM(&outC->sections, &outC->_L9);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P005_unflatten_sections_init_TM_lib_internal(
  outC_C_P005_unflatten_sections_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  outC->_L11 = kcg_true;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L9[idx1].valid = kcg_true;
    outC->_L9[idx1].d_link = kcg_lit_int64(0);
    outC->_L9[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L9[idx1].nid_c = kcg_lit_int64(0);
    outC->_L9[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L9[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L9[idx1].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L9[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L7 = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 33; idx3++) {
    for (idx2 = 0; idx2 < 95; idx2++) {
      outC->_L6[idx3][idx2] = kcg_lit_int64(0);
    }
  }
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L5[idx4] = kcg_lit_int64(0);
  }
  outC->_L3 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 95; idx5++) {
    outC->_L1[idx5] = kcg_lit_int64(0);
  }
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->sections[idx6].valid = kcg_true;
    outC->sections[idx6].d_link = kcg_lit_int64(0);
    outC->sections[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->sections[idx6].nid_c = kcg_lit_int64(0);
    outC->sections[idx6].nid_bg = kcg_lit_int64(0);
    outC->sections[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->sections[idx6].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->sections[idx6].q_locacc = kcg_lit_int64(0);
  }
  for (idx = 0; idx < 33; idx++) {
    /* _L7=(TM_lib_internal::C_P005_us_array#1)/ */
    C_P005_us_array_init_TM_lib_internal(&outC->Context_C_P005_us_array_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P005_unflatten_sections_reset_TM_lib_internal(
  outC_C_P005_unflatten_sections_TM_lib_internal *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 33; idx++) {
    /* _L7=(TM_lib_internal::C_P005_us_array#1)/ */
    C_P005_us_array_reset_TM_lib_internal(
      &outC->Context_C_P005_us_array_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P005_unflatten_sections_TM_lib_internal.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

