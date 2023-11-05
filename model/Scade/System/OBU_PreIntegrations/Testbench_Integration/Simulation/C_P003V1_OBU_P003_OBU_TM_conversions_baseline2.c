/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU/ */
void C_P003V1_OBU_P003_OBU_TM_conversions_baseline2(
  /* P003V1_onboard/ */
  P003V1_OBU_T_TM_baseline2 *P003V1_onboard,
  /* P203V1_onboard/ */
  P203V1_OBU_T_TM_baseline2 *P203V1_onboard,
  /* PermanentDataP003/ */
  P003_permanent_data_T_TM_baseline2 *PermanentDataP003,
  outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2 *outC)
{
  kcg_copy_P203V1_OBU_T_TM_baseline2(&outC->_L76, P203V1_onboard);
  outC->_L223 = outC->_L76.m_nvktint;
  kcg_copy_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2(
    &outC->_L222,
    &outC->_L76.n_iter_l_list);
  outC->_L221 = outC->_L76.n_iter_l;
  outC->_L220 = outC->_L76.m_nvkrint;
  outC->_L219 = outC->_L76.l_nvkrint;
  kcg_copy_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2(
    &outC->_L218,
    &outC->_L76.n_iter_k_list);
  outC->_L217 = outC->_L76.n_iter_k;
  kcg_copy_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2(
    &outC->_L216,
    &outC->_L76.n_iter_n_list);
  outC->_L215 = outC->_L76.n_iter_n;
  outC->_L214 = outC->_L76.m_nvkvint_23;
  outC->_L213 = outC->_L76.m_nvkvint_12;
  outC->_L212 = outC->_L76.v_nvkvint;
  outC->_L211 = outC->_L76.a_nvp12;
  outC->_L210 = outC->_L76.a_nvp23;
  outC->_L209 = outC->_L76.q_nvkvintset;
  outC->_L208 = outC->_L76.q_nvkint;
  outC->_L207 = outC->_L76.m_nvebcl;
  outC->_L206 = outC->_L76.m_nvavadh;
  outC->_L205 = outC->_L76.a_nvmaxredadh3;
  outC->_L204 = outC->_L76.a_nvmaxredadh2;
  outC->_L147 = outC->_L76.a_nvmaxredadh1;
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L54, P003V1_onboard);
  outC->_L146 = outC->_L54.q_nvdriver_adhes;
  outC->_L145 = outC->_L54.d_nvstff;
  outC->_L144 = outC->_L54.m_nvderun;
  outC->_L143 = outC->_L54.t_nvcontact;
  outC->_L142 = outC->_L54.m_nvcontact;
  outC->_L141 = outC->_L54.d_nvpotrp;
  outC->_L140 = outC->_L54.t_nvovtrp;
  outC->_L139 = outC->_L54.d_nvovtrp;
  outC->_L138 = outC->_L54.v_nvsopovtrp;
  outC->_L137 = outC->_L54.v_nvallowovtrp;
  outC->_L80 = outC->_L76.q_nvinhsnicperm;
  outC->_L79 = outC->_L76.q_nvsbfbperm;
  kcg_copy_P003_permanent_data_T_TM_baseline2(&outC->_L65, PermanentDataP003);
  outC->_L78 = outC->_L65.q_nvlocacc;
  outC->_L77 = outC->_L76.q_nvguiperm;
  outC->_L75 = outC->_L54.q_nvemrrls;
  outC->_L74 = outC->_L54.q_nvsbtsmperm;
  outC->_L73 = outC->_L54.d_nvroll;
  outC->_L72 = outC->_L54.v_nvrel;
  outC->_L71 = outC->_L54.v_nvonsight;
  outC->_L70 = outC->_L65.v_nvlimsuperv;
  outC->_L64 = outC->_L54.v_nvonsight;
  outC->_L63 = outC->_L54.v_nvstff;
  outC->_L62 = outC->_L54.v_nvshunt;
  /* _L61=(TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list#1)/ */
  C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2(
    &outC->_L54,
    &outC->Context_C_P003V1_OBU_P003_OBU_convert_nid_c_list_1);
  outC->_L61 = outC->Context_C_P003V1_OBU_P003_OBU_convert_nid_c_list_1.nid_c1;
  outC->_L60 =
    outC->Context_C_P003V1_OBU_P003_OBU_convert_nid_c_list_1.n_iter_out;
  kcg_copy_P003_OBU_nid_c_sectionlist_enum_T_TM(
    &outC->_L59,
    &outC->Context_C_P003V1_OBU_P003_OBU_convert_nid_c_list_1.nid_c_list);
  outC->_L58 = outC->_L54.d_validnv;
  outC->_L57 = outC->_L54.q_scale;
  outC->_L55 = outC->_L54.q_dir;
  outC->_L53 = outC->_L54.valid;
  outC->_L52 = kcg_lit_int32(3);
  outC->_L50.valid = outC->_L53;
  outC->_L50.nid_packet = outC->_L52;
  outC->_L50.q_dir = outC->_L55;
  outC->_L50.q_scale = outC->_L57;
  outC->_L50.d_validnv = outC->_L58;
  outC->_L50.nid_c = outC->_L61;
  outC->_L50.n_iter_nid_c = outC->_L60;
  kcg_copy_P003_OBU_nid_c_sectionlist_enum_T_TM(
    &outC->_L50.nid_c_list,
    &outC->_L59);
  outC->_L50.v_nvshunt = outC->_L62;
  outC->_L50.v_nvstff = outC->_L63;
  outC->_L50.v_nvonsight = outC->_L64;
  outC->_L50.v_nvlimsuperv = outC->_L70;
  outC->_L50.v_nvunfit = outC->_L71;
  outC->_L50.v_nvrel = outC->_L72;
  outC->_L50.d_nvroll = outC->_L73;
  outC->_L50.q_nvsbtsmperm = outC->_L74;
  outC->_L50.q_nvemrrls = outC->_L75;
  outC->_L50.q_nvguiperm = outC->_L77;
  outC->_L50.q_nvsbfbperm = outC->_L79;
  outC->_L50.q_nvinhsnicperm = outC->_L80;
  outC->_L50.v_nvallowovtrp = outC->_L137;
  outC->_L50.v_nvsupovtrp = outC->_L138;
  outC->_L50.d_nvovtrp = outC->_L139;
  outC->_L50.t_nvovtrp = outC->_L140;
  outC->_L50.d_nvpotrp = outC->_L141;
  outC->_L50.m_nvcontact = outC->_L142;
  outC->_L50.t_nvcontact = outC->_L143;
  outC->_L50.m_nvderun = outC->_L144;
  outC->_L50.d_nvstff = outC->_L145;
  outC->_L50.q_nvdriver_adhes = outC->_L146;
  outC->_L50.a_nvmaxredadh1 = outC->_L147;
  outC->_L50.a_nvmaxredadh2 = outC->_L204;
  outC->_L50.a_nvmaxredadh3 = outC->_L205;
  outC->_L50.q_nvlocacc = outC->_L78;
  outC->_L50.m_nvavadh = outC->_L206;
  outC->_L50.m_nvebcl = outC->_L207;
  outC->_L50.q_nvkint = outC->_L208;
  outC->_L50.q_nvkvintset = outC->_L209;
  outC->_L50.a_nvp12 = outC->_L211;
  outC->_L50.a_nvp23 = outC->_L210;
  outC->_L50.v_nvkvint = outC->_L212;
  outC->_L50.m_nvkvint_12 = outC->_L213;
  outC->_L50.m_nvkvint_23 = outC->_L214;
  outC->_L50.n_iter_n = outC->_L215;
  kcg_copy_P003_OBU_n_sectionlist_enum_T_TM(
    &outC->_L50.n_iter_n_list,
    &outC->_L216);
  outC->_L50.n_iter_k = outC->_L217;
  kcg_copy_P003_OBU_k_sectionlist_enum_T_TM(
    &outC->_L50.n_iter_k_list,
    &outC->_L218);
  outC->_L50.l_nvkrint = outC->_L219;
  outC->_L50.m_nvkrint = outC->_L220;
  outC->_L50.n_iter_l = outC->_L221;
  kcg_copy_P003_OBU_l_sectionlist_enum_T_TM(
    &outC->_L50.n_iter_l_list,
    &outC->_L222);
  outC->_L50.m_nvktint = outC->_L223;
  kcg_copy_P003_OBU_T_TM(&outC->P003_onbaord_out, &outC->_L50);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P003V1_OBU_P003_OBU_init_TM_conversions_baseline2(
  outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2 *outC)
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
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;

  outC->_L223 = kcg_lit_float32(0.0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L222[idx].valid = kcg_true;
    outC->_L222[idx].l_nvkrint_l = L_NVKRINT_0m;
    outC->_L222[idx].m_nvkrint_l = kcg_lit_float32(0.0);
  }
  outC->_L221 = kcg_lit_int32(0);
  outC->_L220 = kcg_lit_float32(0.0);
  outC->_L219 = L_NVKRINT_0m;
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L218[idx2].valid = kcg_true;
    outC->_L218[idx2].q_nvkvintset_k = Q_NVKVINTSET_Freight_trains;
    outC->_L218[idx2].a_nvp12_k = kcg_lit_float32(0.0);
    outC->_L218[idx2].a_nvp23_k = kcg_lit_float32(0.0);
    outC->_L218[idx2].v_nvkvint_k = kcg_lit_int32(0);
    outC->_L218[idx2].m_nvkvint_k_12 = kcg_lit_float32(0.0);
    outC->_L218[idx2].m_nvkvint_k_23 = kcg_lit_float32(0.0);
    outC->_L218[idx2].n_iter_k_m = kcg_lit_int32(0);
    for (idx1 = 0; idx1 < 32; idx1++) {
      outC->_L218[idx2].n_iter_k_m_list[idx1].valid = kcg_true;
      outC->_L218[idx2].n_iter_k_m_list[idx1].v_nvkvint_k_m = kcg_lit_int32(0);
      outC->_L218[idx2].n_iter_k_m_list[idx1].m_nvkvint_km_12 = kcg_lit_float32(0.0);
      outC->_L218[idx2].n_iter_k_m_list[idx1].m_nvkvint_km_23 = kcg_lit_float32(0.0);
    }
  }
  outC->_L217 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L216[idx3].valid = kcg_true;
    outC->_L216[idx3].v_nvkvint_n = kcg_lit_int32(0);
    outC->_L216[idx3].m_nvkvint_n_12 = kcg_lit_float32(0.0);
    outC->_L216[idx3].m_nvkvint_n_23 = kcg_lit_float32(0.0);
  }
  outC->_L215 = kcg_lit_int32(0);
  outC->_L214 = kcg_lit_float32(0.0);
  outC->_L213 = kcg_lit_float32(0.0);
  outC->_L212 = kcg_lit_int32(0);
  outC->_L211 = kcg_lit_float32(0.0);
  outC->_L210 = kcg_lit_float32(0.0);
  outC->_L209 = Q_NVKVINTSET_Freight_trains;
  outC->_L208 = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L207 = M_NVEBCL_Confidence_level_50;
  outC->_L206 = kcg_lit_float32(0.0);
  outC->_L205 = kcg_lit_float32(0.0);
  outC->_L204 = kcg_lit_float32(0.0);
  outC->_L147 = kcg_lit_float32(0.0);
  outC->_L146 = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L145 = kcg_lit_int32(0);
  outC->_L144 = M_NVDERUN_No;
  outC->_L143 = kcg_lit_int32(0);
  outC->_L142 = M_NVCONTACT_Train_trip;
  outC->_L141 = kcg_lit_int32(0);
  outC->_L140 = kcg_lit_int32(0);
  outC->_L139 = kcg_lit_int32(0);
  outC->_L138 = kcg_lit_int32(0);
  outC->_L137 = kcg_lit_int32(0);
  outC->_L80 = Q_NVINHSMICPERM_No;
  outC->_L79 = Q_NVSBFBPERM_No;
  outC->_L78 = kcg_lit_int32(0);
  outC->_L77 = Q_NVGUIPERM_No;
  outC->_L76.valid = kcg_true;
  outC->_L76.nid_packet = kcg_lit_int32(0);
  outC->_L76.q_dir = Q_DIR_Reverse;
  outC->_L76.q_scale = Q_SCALE_10_cm_scale;
  outC->_L76.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L76.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L76.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->_L76.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L76.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L76.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L76.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L76.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L76.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L76.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L76.a_nvp12 = kcg_lit_float32(0.0);
  outC->_L76.a_nvp23 = kcg_lit_float32(0.0);
  outC->_L76.v_nvkvint = kcg_lit_int32(0);
  outC->_L76.m_nvkvint_12 = kcg_lit_float32(0.0);
  outC->_L76.m_nvkvint_23 = kcg_lit_float32(0.0);
  outC->_L76.n_iter_n = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L76.n_iter_n_list[idx4].valid = kcg_true;
    outC->_L76.n_iter_n_list[idx4].v_nvkvint_n = kcg_lit_int32(0);
    outC->_L76.n_iter_n_list[idx4].m_nvkvint_n_12 = kcg_lit_float32(0.0);
    outC->_L76.n_iter_n_list[idx4].m_nvkvint_n_23 = kcg_lit_float32(0.0);
  }
  outC->_L76.n_iter_k = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L76.n_iter_k_list[idx6].valid = kcg_true;
    outC->_L76.n_iter_k_list[idx6].q_nvkvintset_k = Q_NVKVINTSET_Freight_trains;
    outC->_L76.n_iter_k_list[idx6].a_nvp12_k = kcg_lit_float32(0.0);
    outC->_L76.n_iter_k_list[idx6].a_nvp23_k = kcg_lit_float32(0.0);
    outC->_L76.n_iter_k_list[idx6].v_nvkvint_k = kcg_lit_int32(0);
    outC->_L76.n_iter_k_list[idx6].m_nvkvint_k_12 = kcg_lit_float32(0.0);
    outC->_L76.n_iter_k_list[idx6].m_nvkvint_k_23 = kcg_lit_float32(0.0);
    outC->_L76.n_iter_k_list[idx6].n_iter_k_m = kcg_lit_int32(0);
    for (idx5 = 0; idx5 < 32; idx5++) {
      outC->_L76.n_iter_k_list[idx6].n_iter_k_m_list[idx5].valid = kcg_true;
      outC->_L76.n_iter_k_list[idx6].n_iter_k_m_list[idx5].v_nvkvint_k_m =
        kcg_lit_int32(0);
      outC->_L76.n_iter_k_list[idx6].n_iter_k_m_list[idx5].m_nvkvint_km_12 =
        kcg_lit_float32(0.0);
      outC->_L76.n_iter_k_list[idx6].n_iter_k_m_list[idx5].m_nvkvint_km_23 =
        kcg_lit_float32(0.0);
    }
  }
  outC->_L76.l_nvkrint = L_NVKRINT_0m;
  outC->_L76.m_nvkrint = kcg_lit_float32(0.0);
  outC->_L76.n_iter_l = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 32; idx7++) {
    outC->_L76.n_iter_l_list[idx7].valid = kcg_true;
    outC->_L76.n_iter_l_list[idx7].l_nvkrint_l = L_NVKRINT_0m;
    outC->_L76.n_iter_l_list[idx7].m_nvkrint_l = kcg_lit_float32(0.0);
  }
  outC->_L76.m_nvktint = kcg_lit_float32(0.0);
  outC->_L75 = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L74 = Q_NVSBTSMPERM_No;
  outC->_L73 = kcg_lit_int32(0);
  outC->_L72 = kcg_lit_int32(0);
  outC->_L71 = kcg_lit_int32(0);
  outC->_L70 = kcg_lit_int32(0);
  outC->_L65.q_nvlocacc = kcg_lit_int32(0);
  outC->_L65.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L64 = kcg_lit_int32(0);
  outC->_L63 = kcg_lit_int32(0);
  outC->_L62 = kcg_lit_int32(0);
  outC->_L61 = kcg_lit_int32(0);
  outC->_L60 = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->_L59[idx8].valid = kcg_true;
    outC->_L59[idx8].nid_c = kcg_lit_int32(0);
  }
  outC->_L58 = kcg_lit_int32(0);
  outC->_L57 = Q_SCALE_10_cm_scale;
  outC->_L55 = Q_DIR_Reverse;
  outC->_L54.valid = kcg_true;
  outC->_L54.q_dir = Q_DIR_Reverse;
  outC->_L54.q_scale = Q_SCALE_10_cm_scale;
  outC->_L54.d_validnv = kcg_lit_int32(0);
  outC->_L54.n_iter = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 32; idx9++) {
    outC->_L54.SECTIONS[idx9].valid = kcg_true;
    outC->_L54.SECTIONS[idx9].nid_c = kcg_lit_int32(0);
  }
  outC->_L54.v_nvshunt = kcg_lit_int32(0);
  outC->_L54.v_nvstff = kcg_lit_int32(0);
  outC->_L54.v_nvonsight = kcg_lit_int32(0);
  outC->_L54.v_nvunfit = kcg_lit_int32(0);
  outC->_L54.v_nvrel = kcg_lit_int32(0);
  outC->_L54.d_nvroll = kcg_lit_int32(0);
  outC->_L54.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L54.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L54.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L54.v_nvsopovtrp = kcg_lit_int32(0);
  outC->_L54.d_nvovtrp = kcg_lit_int32(0);
  outC->_L54.t_nvovtrp = kcg_lit_int32(0);
  outC->_L54.d_nvpotrp = kcg_lit_int32(0);
  outC->_L54.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L54.t_nvcontact = kcg_lit_int32(0);
  outC->_L54.m_nvderun = M_NVDERUN_No;
  outC->_L54.d_nvstff = kcg_lit_int32(0);
  outC->_L54.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L53 = kcg_true;
  outC->_L52 = kcg_lit_int32(0);
  outC->_L50.valid = kcg_true;
  outC->_L50.nid_packet = kcg_lit_int32(0);
  outC->_L50.q_dir = Q_DIR_Reverse;
  outC->_L50.q_scale = Q_SCALE_10_cm_scale;
  outC->_L50.d_validnv = kcg_lit_int32(0);
  outC->_L50.nid_c = kcg_lit_int32(0);
  outC->_L50.n_iter_nid_c = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 32; idx10++) {
    outC->_L50.nid_c_list[idx10].valid = kcg_true;
    outC->_L50.nid_c_list[idx10].nid_c = kcg_lit_int32(0);
  }
  outC->_L50.v_nvshunt = kcg_lit_int32(0);
  outC->_L50.v_nvstff = kcg_lit_int32(0);
  outC->_L50.v_nvonsight = kcg_lit_int32(0);
  outC->_L50.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L50.v_nvunfit = kcg_lit_int32(0);
  outC->_L50.v_nvrel = kcg_lit_int32(0);
  outC->_L50.d_nvroll = kcg_lit_int32(0);
  outC->_L50.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L50.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L50.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L50.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L50.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->_L50.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L50.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L50.d_nvovtrp = kcg_lit_int32(0);
  outC->_L50.t_nvovtrp = kcg_lit_int32(0);
  outC->_L50.d_nvpotrp = kcg_lit_int32(0);
  outC->_L50.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L50.t_nvcontact = kcg_lit_int32(0);
  outC->_L50.m_nvderun = M_NVDERUN_No;
  outC->_L50.d_nvstff = kcg_lit_int32(0);
  outC->_L50.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L50.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L50.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L50.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L50.q_nvlocacc = kcg_lit_int32(0);
  outC->_L50.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L50.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L50.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L50.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L50.a_nvp12 = kcg_lit_float32(0.0);
  outC->_L50.a_nvp23 = kcg_lit_float32(0.0);
  outC->_L50.v_nvkvint = kcg_lit_int32(0);
  outC->_L50.m_nvkvint_12 = kcg_lit_float32(0.0);
  outC->_L50.m_nvkvint_23 = kcg_lit_float32(0.0);
  outC->_L50.n_iter_n = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 32; idx11++) {
    outC->_L50.n_iter_n_list[idx11].valid = kcg_true;
    outC->_L50.n_iter_n_list[idx11].v_nvkvint_n = kcg_lit_int32(0);
    outC->_L50.n_iter_n_list[idx11].m_nvkvint_n_12 = kcg_lit_float32(0.0);
    outC->_L50.n_iter_n_list[idx11].m_nvkvint_n_23 = kcg_lit_float32(0.0);
  }
  outC->_L50.n_iter_k = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 32; idx13++) {
    outC->_L50.n_iter_k_list[idx13].valid = kcg_true;
    outC->_L50.n_iter_k_list[idx13].q_nvkvintset_k = Q_NVKVINTSET_Freight_trains;
    outC->_L50.n_iter_k_list[idx13].a_nvp12_k = kcg_lit_float32(0.0);
    outC->_L50.n_iter_k_list[idx13].a_nvp23_k = kcg_lit_float32(0.0);
    outC->_L50.n_iter_k_list[idx13].v_nvkvint_k = kcg_lit_int32(0);
    outC->_L50.n_iter_k_list[idx13].m_nvkvint_k_12 = kcg_lit_float32(0.0);
    outC->_L50.n_iter_k_list[idx13].m_nvkvint_k_23 = kcg_lit_float32(0.0);
    outC->_L50.n_iter_k_list[idx13].n_iter_k_m = kcg_lit_int32(0);
    for (idx12 = 0; idx12 < 32; idx12++) {
      outC->_L50.n_iter_k_list[idx13].n_iter_k_m_list[idx12].valid = kcg_true;
      outC->_L50.n_iter_k_list[idx13].n_iter_k_m_list[idx12].v_nvkvint_k_m =
        kcg_lit_int32(0);
      outC->_L50.n_iter_k_list[idx13].n_iter_k_m_list[idx12].m_nvkvint_km_12 =
        kcg_lit_float32(0.0);
      outC->_L50.n_iter_k_list[idx13].n_iter_k_m_list[idx12].m_nvkvint_km_23 =
        kcg_lit_float32(0.0);
    }
  }
  outC->_L50.l_nvkrint = L_NVKRINT_0m;
  outC->_L50.m_nvkrint = kcg_lit_float32(0.0);
  outC->_L50.n_iter_l = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 32; idx14++) {
    outC->_L50.n_iter_l_list[idx14].valid = kcg_true;
    outC->_L50.n_iter_l_list[idx14].l_nvkrint_l = L_NVKRINT_0m;
    outC->_L50.n_iter_l_list[idx14].m_nvkrint_l = kcg_lit_float32(0.0);
  }
  outC->_L50.m_nvktint = kcg_lit_float32(0.0);
  outC->P003_onbaord_out.valid = kcg_true;
  outC->P003_onbaord_out.nid_packet = kcg_lit_int32(0);
  outC->P003_onbaord_out.q_dir = Q_DIR_Reverse;
  outC->P003_onbaord_out.q_scale = Q_SCALE_10_cm_scale;
  outC->P003_onbaord_out.d_validnv = kcg_lit_int32(0);
  outC->P003_onbaord_out.nid_c = kcg_lit_int32(0);
  outC->P003_onbaord_out.n_iter_nid_c = kcg_lit_int32(0);
  for (idx15 = 0; idx15 < 32; idx15++) {
    outC->P003_onbaord_out.nid_c_list[idx15].valid = kcg_true;
    outC->P003_onbaord_out.nid_c_list[idx15].nid_c = kcg_lit_int32(0);
  }
  outC->P003_onbaord_out.v_nvshunt = kcg_lit_int32(0);
  outC->P003_onbaord_out.v_nvstff = kcg_lit_int32(0);
  outC->P003_onbaord_out.v_nvonsight = kcg_lit_int32(0);
  outC->P003_onbaord_out.v_nvlimsuperv = kcg_lit_int32(0);
  outC->P003_onbaord_out.v_nvunfit = kcg_lit_int32(0);
  outC->P003_onbaord_out.v_nvrel = kcg_lit_int32(0);
  outC->P003_onbaord_out.d_nvroll = kcg_lit_int32(0);
  outC->P003_onbaord_out.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->P003_onbaord_out.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->P003_onbaord_out.q_nvguiperm = Q_NVGUIPERM_No;
  outC->P003_onbaord_out.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->P003_onbaord_out.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->P003_onbaord_out.v_nvallowovtrp = kcg_lit_int32(0);
  outC->P003_onbaord_out.v_nvsupovtrp = kcg_lit_int32(0);
  outC->P003_onbaord_out.d_nvovtrp = kcg_lit_int32(0);
  outC->P003_onbaord_out.t_nvovtrp = kcg_lit_int32(0);
  outC->P003_onbaord_out.d_nvpotrp = kcg_lit_int32(0);
  outC->P003_onbaord_out.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->P003_onbaord_out.t_nvcontact = kcg_lit_int32(0);
  outC->P003_onbaord_out.m_nvderun = M_NVDERUN_No;
  outC->P003_onbaord_out.d_nvstff = kcg_lit_int32(0);
  outC->P003_onbaord_out.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->P003_onbaord_out.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->P003_onbaord_out.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->P003_onbaord_out.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->P003_onbaord_out.q_nvlocacc = kcg_lit_int32(0);
  outC->P003_onbaord_out.m_nvavadh = kcg_lit_float32(0.0);
  outC->P003_onbaord_out.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->P003_onbaord_out.q_nvkint =
    Q_NVKINT_No_integrated_correction_factors_follow;
  outC->P003_onbaord_out.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->P003_onbaord_out.a_nvp12 = kcg_lit_float32(0.0);
  outC->P003_onbaord_out.a_nvp23 = kcg_lit_float32(0.0);
  outC->P003_onbaord_out.v_nvkvint = kcg_lit_int32(0);
  outC->P003_onbaord_out.m_nvkvint_12 = kcg_lit_float32(0.0);
  outC->P003_onbaord_out.m_nvkvint_23 = kcg_lit_float32(0.0);
  outC->P003_onbaord_out.n_iter_n = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 32; idx16++) {
    outC->P003_onbaord_out.n_iter_n_list[idx16].valid = kcg_true;
    outC->P003_onbaord_out.n_iter_n_list[idx16].v_nvkvint_n = kcg_lit_int32(0);
    outC->P003_onbaord_out.n_iter_n_list[idx16].m_nvkvint_n_12 =
      kcg_lit_float32(0.0);
    outC->P003_onbaord_out.n_iter_n_list[idx16].m_nvkvint_n_23 =
      kcg_lit_float32(0.0);
  }
  outC->P003_onbaord_out.n_iter_k = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 32; idx18++) {
    outC->P003_onbaord_out.n_iter_k_list[idx18].valid = kcg_true;
    outC->P003_onbaord_out.n_iter_k_list[idx18].q_nvkvintset_k =
      Q_NVKVINTSET_Freight_trains;
    outC->P003_onbaord_out.n_iter_k_list[idx18].a_nvp12_k = kcg_lit_float32(0.0);
    outC->P003_onbaord_out.n_iter_k_list[idx18].a_nvp23_k = kcg_lit_float32(0.0);
    outC->P003_onbaord_out.n_iter_k_list[idx18].v_nvkvint_k = kcg_lit_int32(0);
    outC->P003_onbaord_out.n_iter_k_list[idx18].m_nvkvint_k_12 =
      kcg_lit_float32(0.0);
    outC->P003_onbaord_out.n_iter_k_list[idx18].m_nvkvint_k_23 =
      kcg_lit_float32(0.0);
    outC->P003_onbaord_out.n_iter_k_list[idx18].n_iter_k_m = kcg_lit_int32(0);
    for (idx17 = 0; idx17 < 32; idx17++) {
      outC->P003_onbaord_out.n_iter_k_list[idx18].n_iter_k_m_list[idx17].valid =
        kcg_true;
      outC->P003_onbaord_out.n_iter_k_list[idx18].n_iter_k_m_list[idx17].v_nvkvint_k_m =
        kcg_lit_int32(0);
      outC->P003_onbaord_out.n_iter_k_list[idx18].n_iter_k_m_list[idx17].m_nvkvint_km_12 =
        kcg_lit_float32(0.0);
      outC->P003_onbaord_out.n_iter_k_list[idx18].n_iter_k_m_list[idx17].m_nvkvint_km_23 =
        kcg_lit_float32(0.0);
    }
  }
  outC->P003_onbaord_out.l_nvkrint = L_NVKRINT_0m;
  outC->P003_onbaord_out.m_nvkrint = kcg_lit_float32(0.0);
  outC->P003_onbaord_out.n_iter_l = kcg_lit_int32(0);
  for (idx19 = 0; idx19 < 32; idx19++) {
    outC->P003_onbaord_out.n_iter_l_list[idx19].valid = kcg_true;
    outC->P003_onbaord_out.n_iter_l_list[idx19].l_nvkrint_l = L_NVKRINT_0m;
    outC->P003_onbaord_out.n_iter_l_list[idx19].m_nvkrint_l = kcg_lit_float32(0.0);
  }
  outC->P003_onbaord_out.m_nvktint = kcg_lit_float32(0.0);
  /* _L61=(TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list#1)/ */
  C_P003V1_OBU_P003_OBU_convert_nid_c_list_init_TM_conversions_baseline2(
    &outC->Context_C_P003V1_OBU_P003_OBU_convert_nid_c_list_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P003V1_OBU_P003_OBU_reset_TM_conversions_baseline2(
  outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2 *outC)
{
  /* _L61=(TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list#1)/ */
  C_P003V1_OBU_P003_OBU_convert_nid_c_list_reset_TM_conversions_baseline2(
    &outC->Context_C_P003V1_OBU_P003_OBU_convert_nid_c_list_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

