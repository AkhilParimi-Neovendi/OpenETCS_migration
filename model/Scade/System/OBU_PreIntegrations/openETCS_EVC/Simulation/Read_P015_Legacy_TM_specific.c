/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P015_Legacy_TM_specific.h"

/* TM_specific::Read_P015_Legacy/ */
void Read_P015_Legacy_TM_specific(
  /* Message_IN/ */
  CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P015_Legacy_TM_specific *outC)
{
  _6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg op_call;

  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L3, Message_IN);
  /* _L1=(TM::Read_P015#1)/ */
  Read_P015_TM(&outC->_L3, &outC->Context_Read_P015_1);
  outC->_L1 = outC->Context_Read_P015_1.received;
  kcg_copy_P015_OBU_T_TM(&outC->_L2, &outC->Context_Read_P015_1.P015_OBU_out);
  outC->every = outC->_L1;
  if (outC->every) {
    /* _L4=(TM_conversions::C_P015_to_legacy_t#1)/ */
    C_P015_to_legacy_t_TM_conversions(
      &outC->_L2,
      &outC->Context_C_P015_to_legacy_t_1);
    kcg_copy__6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
      &op_call,
      &outC->Context_C_P015_to_legacy_t_1.P015_legacy_out);
    kcg_copy__6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
      &outC->_L4,
      &op_call);
  }
  else {
    kcg_copy__6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
      &outC->_L4,
      (_6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg *)
        &DEFAULT_P015_legacy_TM_specific);
  }
  kcg_copy__6_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
    &outC->P015_legacy_out,
    &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void Read_P015_Legacy_init_TM_specific(outC_Read_P015_Legacy_TM_specific *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;

  for (idx = 0; idx < 5; idx++) {
    outC->_L4[idx].valid = kcg_true;
    outC->_L4[idx].q_dir = Q_DIR_Reverse;
    outC->_L4[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L4[idx].v_loa = kcg_lit_int32(0);
    outC->_L4[idx].t_loa = kcg_lit_int32(0);
    outC->_L4[idx].l_section = kcg_lit_int32(0);
    outC->_L4[idx].q_sectiontimer_k = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L4[idx].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L4[idx].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L4[idx].l_endsection = kcg_lit_int32(0);
    outC->_L4[idx].q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L4[idx].t_sectiontimer = kcg_lit_int32(0);
    outC->_L4[idx].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L4[idx].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L4[idx].t_endtimer = kcg_lit_int32(0);
    outC->_L4[idx].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L4[idx].q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
    outC->_L4[idx].d_dp = kcg_lit_int32(0);
    outC->_L4[idx].v_releasedp = kcg_lit_int32(0);
    outC->_L4[idx].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L4[idx].d_startol = kcg_lit_int32(0);
    outC->_L4[idx].t_ol = kcg_lit_int32(0);
    outC->_L4[idx].d_ol = kcg_lit_int32(0);
    outC->_L4[idx].v_releaseol = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L3.PacketHeaders[idx1].nid_packet = kcg_lit_int32(0);
    outC->_L3.PacketHeaders[idx1].q_dir = Q_DIR_Reverse;
    outC->_L3.PacketHeaders[idx1].valid = kcg_true;
    outC->_L3.PacketHeaders[idx1].startAddress = kcg_lit_int32(0);
    outC->_L3.PacketHeaders[idx1].endAddress = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L3.PacketData[idx2] = kcg_lit_int32(0);
  }
  outC->_L1 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.v_loa = kcg_lit_int32(0);
  outC->_L2.t_loa = kcg_lit_int32(0);
  outC->_L2.n_iter = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L2.sections[idx3].valid = kcg_true;
    outC->_L2.sections[idx3].l_section = kcg_lit_int32(0);
    outC->_L2.sections[idx3].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L2.sections[idx3].t_sectiontimer = kcg_lit_int32(0);
    outC->_L2.sections[idx3].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L2.l_endsection = kcg_lit_int32(0);
  outC->_L2.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L2.t_sectiontimer = kcg_lit_int32(0);
  outC->_L2.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->_L2.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L2.t_endtimer = kcg_lit_int32(0);
  outC->_L2.d_endtimerstartloc = kcg_lit_int32(0);
  outC->_L2.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L2.d_dp = kcg_lit_int32(0);
  outC->_L2.v_releasedp = kcg_lit_int32(0);
  outC->_L2.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L2.d_startol = kcg_lit_int32(0);
  outC->_L2.t_ol = kcg_lit_int32(0);
  outC->_L2.d_ol = kcg_lit_int32(0);
  outC->_L2.v_releaseol = kcg_lit_int32(0);
  outC->every = kcg_true;
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->P015_legacy_out[idx4].valid = kcg_true;
    outC->P015_legacy_out[idx4].q_dir = Q_DIR_Reverse;
    outC->P015_legacy_out[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->P015_legacy_out[idx4].v_loa = kcg_lit_int32(0);
    outC->P015_legacy_out[idx4].t_loa = kcg_lit_int32(0);
    outC->P015_legacy_out[idx4].l_section = kcg_lit_int32(0);
    outC->P015_legacy_out[idx4].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->P015_legacy_out[idx4].t_sectiontimer_k = kcg_lit_int32(0);
    outC->P015_legacy_out[idx4].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->P015_legacy_out[idx4].l_endsection = kcg_lit_int32(0);
    outC->P015_legacy_out[idx4].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->P015_legacy_out[idx4].t_sectiontimer = kcg_lit_int32(0);
    outC->P015_legacy_out[idx4].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->P015_legacy_out[idx4].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->P015_legacy_out[idx4].t_endtimer = kcg_lit_int32(0);
    outC->P015_legacy_out[idx4].d_endtimerstartloc = kcg_lit_int32(0);
    outC->P015_legacy_out[idx4].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->P015_legacy_out[idx4].d_dp = kcg_lit_int32(0);
    outC->P015_legacy_out[idx4].v_releasedp = kcg_lit_int32(0);
    outC->P015_legacy_out[idx4].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->P015_legacy_out[idx4].d_startol = kcg_lit_int32(0);
    outC->P015_legacy_out[idx4].t_ol = kcg_lit_int32(0);
    outC->P015_legacy_out[idx4].d_ol = kcg_lit_int32(0);
    outC->P015_legacy_out[idx4].v_releaseol = kcg_lit_int32(0);
  }
  /* _L4=(TM_conversions::C_P015_to_legacy_t#1)/ */
  C_P015_to_legacy_t_init_TM_conversions(&outC->Context_C_P015_to_legacy_t_1);
  /* _L1=(TM::Read_P015#1)/ */ Read_P015_init_TM(&outC->Context_Read_P015_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Read_P015_Legacy_reset_TM_specific(outC_Read_P015_Legacy_TM_specific *outC)
{
  /* _L4=(TM_conversions::C_P015_to_legacy_t#1)/ */
  C_P015_to_legacy_t_reset_TM_conversions(&outC->Context_C_P015_to_legacy_t_1);
  /* _L1=(TM::Read_P015#1)/ */ Read_P015_reset_TM(&outC->Context_Read_P015_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Read_P015_Legacy_TM_specific.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

