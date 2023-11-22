/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MEM_convertP80_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::MEM_convertP80/ */
void MEM_convertP80_EVC_MEM_Support_Pkg(
  /* P080_OBU/ */
  P080_OBU_T_TM *P080_OBU,
  /* nationalValues/ */
  P003_OBU_T_TM *nationalValues,
  outC_MEM_convertP80_EVC_MEM_Support_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_int32 noname;

  kcg_copy_P003_OBU_T_TM(&outC->_L15, nationalValues);
  /* _L14/ */
  for (idx = 0; idx < 3; idx++) {
    kcg_copy_P003_OBU_T_TM(&outC->_L14[idx], &outC->_L15);
  }
  kcg_copy_P080_OBU_T_TM(&outC->_L1, P080_OBU);
  outC->_L8 = outC->_L1.q_scale;
  /* _L13/ */
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L13[idx1] = outC->_L8;
  }
  kcg_copy_P080_OBU_sectionlist_enum_T_TM(&outC->_L10, &outC->_L1.sections);
  kcg_copy__128_array(&outC->_L11, (_128_array *) &outC->_L10[0]);
  outC->_L9 = outC->_L1.valid;
  outC->_L7 = outC->_L1.q_dir;
  /* _L6/ */
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->_L6[idx2] = outC->_L7;
  }
  kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg(
    &outC->_L5,
    (P80_ModeProfile_T_Packet_Types_Pkg *)
      &Default_P80_element_EVC_MEM_Support_Pkg);
  /* _L4= */
  if (outC->_L9) {
    /* _L4= */
    for (idx3 = 0; idx3 < 3; idx3++) {
      /* _L4=(EVC_MEM_Support_Pkg::MEM_convertP80_element#1)/ */
      MEM_convertP80_element_EVC_MEM_Support_Pkg(
        &outC->_L11[idx3],
        outC->_L6[idx3],
        outC->_L13[idx3],
        &outC->_L14[idx3],
        &outC->Context_MEM_convertP80_element_1[idx3]);
      kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg(
        &outC->_L3[idx3],
        &outC->Context_MEM_convertP80_element_1[idx3].p80);
      outC->_L4 = /* _L4= */(kcg_int32) (idx3 + 1);
      /* _L4= */
      if (!outC->Context_MEM_convertP80_element_1[idx3]._1_continue) {
        break;
      }
    }
  }
  else {
    outC->_L4 = kcg_lit_int32(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L4= */
  for (idx3 = /* _L4= */(kcg_size) outC->_L4; idx3 < 3; idx3++) {
    kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg(&outC->_L3[idx3], &outC->_L5);
  }
#endif /* KCG_MAPW_CPY */

  noname = outC->_L4;
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&outC->p80, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void MEM_convertP80_init_EVC_MEM_Support_Pkg(
  outC_MEM_convertP80_EVC_MEM_Support_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;
  kcg_size idx17;
  kcg_size idx18;

  outC->_L15.valid = kcg_true;
  outC->_L15.nid_packet = kcg_lit_int32(0);
  outC->_L15.q_dir = Q_DIR_Reverse;
  outC->_L15.q_scale = Q_SCALE_10_cm_scale;
  outC->_L15.d_validnv = kcg_lit_int32(0);
  outC->_L15.nid_c = kcg_lit_int32(0);
  outC->_L15.n_iter_nid_c = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L15.nid_c_list[idx1].valid = kcg_true;
    outC->_L15.nid_c_list[idx1].nid_c = kcg_lit_int32(0);
  }
  outC->_L15.v_nvshunt = kcg_lit_int32(0);
  outC->_L15.v_nvstff = kcg_lit_int32(0);
  outC->_L15.v_nvonsight = kcg_lit_int32(0);
  outC->_L15.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L15.v_nvunfit = kcg_lit_int32(0);
  outC->_L15.v_nvrel = kcg_lit_int32(0);
  outC->_L15.d_nvroll = kcg_lit_int32(0);
  outC->_L15.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L15.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L15.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L15.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L15.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->_L15.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L15.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L15.d_nvovtrp = kcg_lit_int32(0);
  outC->_L15.t_nvovtrp = kcg_lit_int32(0);
  outC->_L15.d_nvpotrp = kcg_lit_int32(0);
  outC->_L15.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L15.t_nvcontact = kcg_lit_int32(0);
  outC->_L15.m_nvderun = M_NVDERUN_No;
  outC->_L15.d_nvstff = kcg_lit_int32(0);
  outC->_L15.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L15.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L15.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L15.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L15.q_nvlocacc = kcg_lit_int32(0);
  outC->_L15.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L15.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L15.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L15.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L15.a_nvp12 = kcg_lit_float32(0.0);
  outC->_L15.a_nvp23 = kcg_lit_float32(0.0);
  outC->_L15.v_nvkvint = kcg_lit_int32(0);
  outC->_L15.m_nvkvint_12 = kcg_lit_float32(0.0);
  outC->_L15.m_nvkvint_23 = kcg_lit_float32(0.0);
  outC->_L15.n_iter_n = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L15.n_iter_n_list[idx2].valid = kcg_true;
    outC->_L15.n_iter_n_list[idx2].v_nvkvint_n = kcg_lit_int32(0);
    outC->_L15.n_iter_n_list[idx2].m_nvkvint_n_12 = kcg_lit_float32(0.0);
    outC->_L15.n_iter_n_list[idx2].m_nvkvint_n_23 = kcg_lit_float32(0.0);
  }
  outC->_L15.n_iter_k = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L15.n_iter_k_list[idx4].valid = kcg_true;
    outC->_L15.n_iter_k_list[idx4].q_nvkvintset_k = Q_NVKVINTSET_Freight_trains;
    outC->_L15.n_iter_k_list[idx4].a_nvp12_k = kcg_lit_float32(0.0);
    outC->_L15.n_iter_k_list[idx4].a_nvp23_k = kcg_lit_float32(0.0);
    outC->_L15.n_iter_k_list[idx4].v_nvkvint_k = kcg_lit_int32(0);
    outC->_L15.n_iter_k_list[idx4].m_nvkvint_k_12 = kcg_lit_float32(0.0);
    outC->_L15.n_iter_k_list[idx4].m_nvkvint_k_23 = kcg_lit_float32(0.0);
    outC->_L15.n_iter_k_list[idx4].n_iter_k_m = kcg_lit_int32(0);
    for (idx3 = 0; idx3 < 32; idx3++) {
      outC->_L15.n_iter_k_list[idx4].n_iter_k_m_list[idx3].valid = kcg_true;
      outC->_L15.n_iter_k_list[idx4].n_iter_k_m_list[idx3].v_nvkvint_k_m =
        kcg_lit_int32(0);
      outC->_L15.n_iter_k_list[idx4].n_iter_k_m_list[idx3].m_nvkvint_km_12 =
        kcg_lit_float32(0.0);
      outC->_L15.n_iter_k_list[idx4].n_iter_k_m_list[idx3].m_nvkvint_km_23 =
        kcg_lit_float32(0.0);
    }
  }
  outC->_L15.l_nvkrint = L_NVKRINT_0m;
  outC->_L15.m_nvkrint = kcg_lit_float32(0.0);
  outC->_L15.n_iter_l = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L15.n_iter_l_list[idx5].valid = kcg_true;
    outC->_L15.n_iter_l_list[idx5].l_nvkrint_l = L_NVKRINT_0m;
    outC->_L15.n_iter_l_list[idx5].m_nvkrint_l = kcg_lit_float32(0.0);
  }
  outC->_L15.m_nvktint = kcg_lit_float32(0.0);
  for (idx11 = 0; idx11 < 3; idx11++) {
    outC->_L14[idx11].valid = kcg_true;
    outC->_L14[idx11].nid_packet = kcg_lit_int32(0);
    outC->_L14[idx11].q_dir = Q_DIR_Reverse;
    outC->_L14[idx11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L14[idx11].d_validnv = kcg_lit_int32(0);
    outC->_L14[idx11].nid_c = kcg_lit_int32(0);
    outC->_L14[idx11].n_iter_nid_c = kcg_lit_int32(0);
    for (idx6 = 0; idx6 < 32; idx6++) {
      outC->_L14[idx11].nid_c_list[idx6].valid = kcg_true;
      outC->_L14[idx11].nid_c_list[idx6].nid_c = kcg_lit_int32(0);
    }
    outC->_L14[idx11].v_nvshunt = kcg_lit_int32(0);
    outC->_L14[idx11].v_nvstff = kcg_lit_int32(0);
    outC->_L14[idx11].v_nvonsight = kcg_lit_int32(0);
    outC->_L14[idx11].v_nvlimsuperv = kcg_lit_int32(0);
    outC->_L14[idx11].v_nvunfit = kcg_lit_int32(0);
    outC->_L14[idx11].v_nvrel = kcg_lit_int32(0);
    outC->_L14[idx11].d_nvroll = kcg_lit_int32(0);
    outC->_L14[idx11].q_nvsbtsmperm = Q_NVSBTSMPERM_No;
    outC->_L14[idx11].q_nvemrrls =
      Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
    outC->_L14[idx11].q_nvguiperm = Q_NVGUIPERM_No;
    outC->_L14[idx11].q_nvsbfbperm = Q_NVSBFBPERM_No;
    outC->_L14[idx11].q_nvinhsnicperm = Q_NVINHSMICPERM_No;
    outC->_L14[idx11].v_nvallowovtrp = kcg_lit_int32(0);
    outC->_L14[idx11].v_nvsupovtrp = kcg_lit_int32(0);
    outC->_L14[idx11].d_nvovtrp = kcg_lit_int32(0);
    outC->_L14[idx11].t_nvovtrp = kcg_lit_int32(0);
    outC->_L14[idx11].d_nvpotrp = kcg_lit_int32(0);
    outC->_L14[idx11].m_nvcontact = M_NVCONTACT_Train_trip;
    outC->_L14[idx11].t_nvcontact = kcg_lit_int32(0);
    outC->_L14[idx11].m_nvderun = M_NVDERUN_No;
    outC->_L14[idx11].d_nvstff = kcg_lit_int32(0);
    outC->_L14[idx11].q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
    outC->_L14[idx11].a_nvmaxredadh1 = kcg_lit_float32(0.0);
    outC->_L14[idx11].a_nvmaxredadh2 = kcg_lit_float32(0.0);
    outC->_L14[idx11].a_nvmaxredadh3 = kcg_lit_float32(0.0);
    outC->_L14[idx11].q_nvlocacc = kcg_lit_int32(0);
    outC->_L14[idx11].m_nvavadh = kcg_lit_float32(0.0);
    outC->_L14[idx11].m_nvebcl = M_NVEBCL_Confidence_level_50;
    outC->_L14[idx11].q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
    outC->_L14[idx11].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L14[idx11].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L14[idx11].a_nvp23 = kcg_lit_float32(0.0);
    outC->_L14[idx11].v_nvkvint = kcg_lit_int32(0);
    outC->_L14[idx11].m_nvkvint_12 = kcg_lit_float32(0.0);
    outC->_L14[idx11].m_nvkvint_23 = kcg_lit_float32(0.0);
    outC->_L14[idx11].n_iter_n = kcg_lit_int32(0);
    for (idx7 = 0; idx7 < 32; idx7++) {
      outC->_L14[idx11].n_iter_n_list[idx7].valid = kcg_true;
      outC->_L14[idx11].n_iter_n_list[idx7].v_nvkvint_n = kcg_lit_int32(0);
      outC->_L14[idx11].n_iter_n_list[idx7].m_nvkvint_n_12 = kcg_lit_float32(0.0);
      outC->_L14[idx11].n_iter_n_list[idx7].m_nvkvint_n_23 = kcg_lit_float32(0.0);
    }
    outC->_L14[idx11].n_iter_k = kcg_lit_int32(0);
    for (idx9 = 0; idx9 < 32; idx9++) {
      outC->_L14[idx11].n_iter_k_list[idx9].valid = kcg_true;
      outC->_L14[idx11].n_iter_k_list[idx9].q_nvkvintset_k =
        Q_NVKVINTSET_Freight_trains;
      outC->_L14[idx11].n_iter_k_list[idx9].a_nvp12_k = kcg_lit_float32(0.0);
      outC->_L14[idx11].n_iter_k_list[idx9].a_nvp23_k = kcg_lit_float32(0.0);
      outC->_L14[idx11].n_iter_k_list[idx9].v_nvkvint_k = kcg_lit_int32(0);
      outC->_L14[idx11].n_iter_k_list[idx9].m_nvkvint_k_12 = kcg_lit_float32(0.0);
      outC->_L14[idx11].n_iter_k_list[idx9].m_nvkvint_k_23 = kcg_lit_float32(0.0);
      outC->_L14[idx11].n_iter_k_list[idx9].n_iter_k_m = kcg_lit_int32(0);
      for (idx8 = 0; idx8 < 32; idx8++) {
        outC->_L14[idx11].n_iter_k_list[idx9].n_iter_k_m_list[idx8].valid = kcg_true;
        outC->_L14[idx11].n_iter_k_list[idx9].n_iter_k_m_list[idx8].v_nvkvint_k_m =
          kcg_lit_int32(0);
        outC->_L14[idx11].n_iter_k_list[idx9].n_iter_k_m_list[idx8].m_nvkvint_km_12 =
          kcg_lit_float32(0.0);
        outC->_L14[idx11].n_iter_k_list[idx9].n_iter_k_m_list[idx8].m_nvkvint_km_23 =
          kcg_lit_float32(0.0);
      }
    }
    outC->_L14[idx11].l_nvkrint = L_NVKRINT_0m;
    outC->_L14[idx11].m_nvkrint = kcg_lit_float32(0.0);
    outC->_L14[idx11].n_iter_l = kcg_lit_int32(0);
    for (idx10 = 0; idx10 < 32; idx10++) {
      outC->_L14[idx11].n_iter_l_list[idx10].valid = kcg_true;
      outC->_L14[idx11].n_iter_l_list[idx10].l_nvkrint_l = L_NVKRINT_0m;
      outC->_L14[idx11].n_iter_l_list[idx10].m_nvkrint_l = kcg_lit_float32(0.0);
    }
    outC->_L14[idx11].m_nvktint = kcg_lit_float32(0.0);
  }
  for (idx12 = 0; idx12 < 3; idx12++) {
    outC->_L13[idx12] = Q_SCALE_10_cm_scale;
  }
  for (idx13 = 0; idx13 < 3; idx13++) {
    outC->_L11[idx13].valid = kcg_true;
    outC->_L11[idx13].d_mamode = kcg_lit_int32(0);
    outC->_L11[idx13].m_mamode = M_MAMODE_On_Sight;
    outC->_L11[idx13].v_mamode = kcg_lit_int32(0);
    outC->_L11[idx13].l_mamode = kcg_lit_int32(0);
    outC->_L11[idx13].l_ackmamode = kcg_lit_int32(0);
    outC->_L11[idx13].q_mamode = Q_MAMODE_as_the_EOA;
  }
  for (idx14 = 0; idx14 < 33; idx14++) {
    outC->_L10[idx14].valid = kcg_true;
    outC->_L10[idx14].d_mamode = kcg_lit_int32(0);
    outC->_L10[idx14].m_mamode = M_MAMODE_On_Sight;
    outC->_L10[idx14].v_mamode = kcg_lit_int32(0);
    outC->_L10[idx14].l_mamode = kcg_lit_int32(0);
    outC->_L10[idx14].l_ackmamode = kcg_lit_int32(0);
    outC->_L10[idx14].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L9 = kcg_true;
  outC->_L8 = Q_SCALE_10_cm_scale;
  outC->_L7 = Q_DIR_Reverse;
  for (idx15 = 0; idx15 < 3; idx15++) {
    outC->_L6[idx15] = Q_DIR_Reverse;
  }
  outC->_L5.valid = kcg_true;
  outC->_L5.q_dir = Q_DIR_Reverse;
  outC->_L5.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5.d_mamode = kcg_lit_int32(0);
  outC->_L5.m_mamode = M_MAMODE_On_Sight;
  outC->_L5.v_mamode = kcg_lit_int32(0);
  outC->_L5.l_mamode = kcg_lit_int32(0);
  outC->_L5.l_ackmamode = kcg_lit_int32(0);
  outC->_L5.q_mamode = Q_MAMODE_as_the_EOA;
  outC->_L4 = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 3; idx16++) {
    outC->_L3[idx16].valid = kcg_true;
    outC->_L3[idx16].q_dir = Q_DIR_Reverse;
    outC->_L3[idx16].q_scale = Q_SCALE_10_cm_scale;
    outC->_L3[idx16].d_mamode = kcg_lit_int32(0);
    outC->_L3[idx16].m_mamode = M_MAMODE_On_Sight;
    outC->_L3[idx16].v_mamode = kcg_lit_int32(0);
    outC->_L3[idx16].l_mamode = kcg_lit_int32(0);
    outC->_L3[idx16].l_ackmamode = kcg_lit_int32(0);
    outC->_L3[idx16].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.l_packet = kcg_lit_int32(0);
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.n_iter = kcg_lit_int32(0);
  for (idx17 = 0; idx17 < 33; idx17++) {
    outC->_L1.sections[idx17].valid = kcg_true;
    outC->_L1.sections[idx17].d_mamode = kcg_lit_int32(0);
    outC->_L1.sections[idx17].m_mamode = M_MAMODE_On_Sight;
    outC->_L1.sections[idx17].v_mamode = kcg_lit_int32(0);
    outC->_L1.sections[idx17].l_mamode = kcg_lit_int32(0);
    outC->_L1.sections[idx17].l_ackmamode = kcg_lit_int32(0);
    outC->_L1.sections[idx17].q_mamode = Q_MAMODE_as_the_EOA;
  }
  for (idx18 = 0; idx18 < 3; idx18++) {
    outC->p80[idx18].valid = kcg_true;
    outC->p80[idx18].q_dir = Q_DIR_Reverse;
    outC->p80[idx18].q_scale = Q_SCALE_10_cm_scale;
    outC->p80[idx18].d_mamode = kcg_lit_int32(0);
    outC->p80[idx18].m_mamode = M_MAMODE_On_Sight;
    outC->p80[idx18].v_mamode = kcg_lit_int32(0);
    outC->p80[idx18].l_mamode = kcg_lit_int32(0);
    outC->p80[idx18].l_ackmamode = kcg_lit_int32(0);
    outC->p80[idx18].q_mamode = Q_MAMODE_as_the_EOA;
  }
  for (idx = 0; idx < 3; idx++) {
    /* _L4=(EVC_MEM_Support_Pkg::MEM_convertP80_element#1)/ */
    MEM_convertP80_element_init_EVC_MEM_Support_Pkg(
      &outC->Context_MEM_convertP80_element_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MEM_convertP80_reset_EVC_MEM_Support_Pkg(
  outC_MEM_convertP80_EVC_MEM_Support_Pkg *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 3; idx++) {
    /* _L4=(EVC_MEM_Support_Pkg::MEM_convertP80_element#1)/ */
    MEM_convertP80_element_reset_EVC_MEM_Support_Pkg(
      &outC->Context_MEM_convertP80_element_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MEM_convertP80_EVC_MEM_Support_Pkg.c
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

