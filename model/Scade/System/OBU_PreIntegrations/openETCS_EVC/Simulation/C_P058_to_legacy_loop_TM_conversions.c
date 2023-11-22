/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P058_to_legacy_loop_TM_conversions.h"

/* TM_conversions::C_P058_to_legacy_loop/ */
void C_P058_to_legacy_loop_TM_conversions(
  /* i/ */
  kcg_int32 i,
  /* P058_in/ */
  P058_OBU_sectionlist_enum_T_TM *P058_in,
  outC_C_P058_to_legacy_loop_TM_conversions *outC)
{
  kcg_bool noname;

  outC->_L20 = i;
  kcg_copy_P058_OBU_sectionlist_enum_T_TM(&outC->_L1, P058_in);
  if ((kcg_lit_int32(0) <= outC->_L20) & (outC->_L20 < kcg_lit_int32(32))) {
    kcg_copy_P058_section_enum_T_TM(&outC->_L21, &outC->_L1[outC->_L20]);
  }
  else {
    kcg_copy_P058_section_enum_T_TM(
      &outC->_L21,
      (P058_section_enum_T_TM *) &DEFAULT_P058_OBU_section_TM);
  }
  outC->_L3 = outC->_L21.valid;
  noname = outC->_L3;
  outC->_L4 = outC->_L21.d_loc;
  outC->_L5 = outC->_L21.q_lgtloc;
  outC->_L2.d_loc = outC->_L4;
  outC->_L2.q_lgtloc = outC->_L5;
  kcg_copy_IterPacket58_T_Packet_Types_Pkg(
    &outC->P058_legacy_iter_out,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P058_to_legacy_loop_init_TM_conversions(
  outC_C_P058_to_legacy_loop_TM_conversions *outC)
{
  kcg_size idx;

  outC->_L21.valid = kcg_true;
  outC->_L21.d_loc = kcg_lit_int32(0);
  outC->_L21.q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  outC->_L20 = kcg_lit_int32(0);
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = Q_LGTLOC_Min_safe_rear_end;
  outC->_L2.d_loc = kcg_lit_int32(0);
  outC->_L2.q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  for (idx = 0; idx < 32; idx++) {
    outC->_L1[idx].valid = kcg_true;
    outC->_L1[idx].d_loc = kcg_lit_int32(0);
    outC->_L1[idx].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->P058_legacy_iter_out.d_loc = kcg_lit_int32(0);
  outC->P058_legacy_iter_out.q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P058_to_legacy_loop_reset_TM_conversions(
  outC_C_P058_to_legacy_loop_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P058_to_legacy_loop_TM_conversions.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

